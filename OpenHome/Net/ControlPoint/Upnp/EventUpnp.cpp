#include <OpenHome/Net/Private/EventUpnp.h>
#include <OpenHome/Net/Private/CpiSubscription.h>
#include <OpenHome/Private/Http.h>
#include <OpenHome/Net/Private/ProtocolUpnp.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Private/Stream.h>
#include <OpenHome/Private/Env.h>
#include <OpenHome/Net/Private/CpiStack.h>
#include <OpenHome/Private/Debug.h>
#include <OpenHome/Net/Private/XmlParser.h>
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/ProtocolUpnp.h>
#include <OpenHome/Private/Parser.h>

using namespace OpenHome;
using namespace OpenHome::Net;

const Brn EventSessionUpnp::kMethodNotify("NOTIFY");
const Brn EventSessionUpnp::kExpectedNt("upnp:event");
const Brn EventSessionUpnp::kExpectedNts("upnp:propchange");

// EventSessionUpnp

EventSessionUpnp::EventSessionUpnp(CpStack& aCpStack)
    : iCpStack(aCpStack)
    , iShutdownSem("EVSD", 1)
{
    iReadBuffer = new Srs<kMaxReadBytes>(*this);
    iReaderRequest = new ReaderHttpRequest(aCpStack.Env(), *iReadBuffer);

    iReaderRequest->AddMethod(kMethodNotify);
    iReaderRequest->AddHeader(iHeaderNt);
    iReaderRequest->AddHeader(iHeaderNts);
    iReaderRequest->AddHeader(iHeaderSid);
    iReaderRequest->AddHeader(iHeaderSeq);
    iReaderRequest->AddHeader(iHeaderContentLength);
    iReaderRequest->AddHeader(iHeaderTransferEncoding);
}

EventSessionUpnp::~EventSessionUpnp()
{
    Interrupt(true);
    iShutdownSem.Wait();
    delete iReadBuffer;
    delete iReaderRequest;
}

void EventSessionUpnp::Error(const HttpStatus& aStatus)
{
    LOG2(kEvent, kError, "EventSessionUpnp::Error ");
    LOG2(kEvent, kError, aStatus.Reason());
    LOG2(kEvent, kError, "\n");
    iErrorStatus = &aStatus;
    THROW(HttpError);
}

#ifdef DEFINE_TRACE
void EventSessionUpnp::LogError(CpiSubscription* aSubscription, const TChar* aErr)
#else
void EventSessionUpnp::LogError(CpiSubscription* aSubscription, const TChar* /*aErr*/)
#endif
{
    LOG2(kEvent, kError, "EventSessionUpnp::Run, %s handling\n    sid - ", aErr);
    LOG2(kEvent, kError, iHeaderSid.Sid());
    LOG2(kEvent, kError, " seq - %u\n", iHeaderSeq.Seq());
    if (aSubscription != NULL) {
        aSubscription->SetNotificationError();
    }
}

void EventSessionUpnp::Run()
{
    AutoSemaphore a(iShutdownSem);
    CpiSubscription* subscription = NULL;
    iErrorStatus = &HttpStatus::kOk;
    try {
        iReaderRequest->Flush();
        iReaderRequest->Read(kReadTimeoutMs);
        // check headers
        if (iReaderRequest->MethodNotAllowed()) {
            Error(HttpStatus::kBadRequest);
        }

        if (!iHeaderNt.Received() || !iHeaderNts.Received()) {
            Error(HttpStatus::kBadRequest);
        }

        if (iHeaderNt.Value() != kExpectedNt || iHeaderNts.Value() != kExpectedNts ||
            !iHeaderSid.Received() || iHeaderSid.Sid().Bytes() == 0 || !iHeaderSeq.Received()) {
            Error(HttpStatus::kPreconditionFailed);
        }

        Parser parser(iReaderRequest->Uri());
        (void)parser.Next('/');
        Brn idBuf = parser.Next('/');
        TUint id = 0;
        try {
            id = Ascii::Uint(idBuf);
        }
        catch (AsciiError&) {
            LOG2(kEvent, kError, "notification for ");
            LOG2(kEvent, kError, iHeaderSid.Sid());
            LOG2(kEvent, kError, " failed to include id in path\n");
            Error(HttpStatus::kPreconditionFailed);
        }
        subscription = iCpStack.SubscriptionManager().FindSubscription(id);
        if (subscription == NULL) {
            LOG2(kEvent, kError, "notification for unexpected device - ")
            LOG2(kEvent, kError, iHeaderSid.Sid());
            LOG2(kEvent, kError, "\n");
            Error(HttpStatus::kPreconditionFailed);
        }
    }
    catch(HttpError&) {}
    catch(ReaderError&) {}

    try {
        // write response
        Sws<128> writerBuffer(*this);
        WriterHttpResponse response(writerBuffer);
        response.WriteStatus(*iErrorStatus, Http::eHttp11);
        response.WriteFlush();

        // read entity
        if (subscription != NULL) {
            Bwh entity;
            if (iHeaderTransferEncoding.IsChunked()) {
                ReaderHttpChunkedDynamic dechunker(*iReadBuffer);
                dechunker.Read();
                dechunker.TransferTo(entity);
            }
            else {
                TUint length = iHeaderContentLength.ContentLength();
                if (length == 0) {
                    // no Content-Length header, so read until remote socket closed
                    Bwh buffer(kMaxReadBytes);
                    buffer.Append(iReadBuffer->Snaffle());
                    for (;;) {
                        entity.Grow(entity.Bytes() + buffer.Bytes());
                        entity.Append(buffer);
                        buffer.SetBytes(0);
                        try {
                            Read(buffer);
                        }
                        catch (ReaderError&) {
                            // thrown for remote socket closed or network error 
                            break;
                        }
                    }
                } else {
                    entity.Grow(length);
                    while (length > 0) {
                        TUint readBytes = (length<kMaxReadBytes? length : kMaxReadBytes);
                        entity.Append(iReadBuffer->Read(readBytes));
                        length -= readBytes;
                    }
                }
            }

            // process entity
            LOG(kEvent, "EventSessionUpnp::Run, sid - ");
            LOG(kEvent, iHeaderSid.Sid());
            LOG(kEvent, " seq - %u\n", iHeaderSeq.Seq());

            /* defer validating the seq number till now to avoid holding subscription's lock during
               potentially long-running network reads */
            if (subscription->UpdateSequenceNumber(iHeaderSeq.Seq())) {
                try {
                    ProcessNotification(*subscription, entity);
                }
                catch (Exception& ex) {
                    Log::Print("EventSessionUpnp::Run() unexpected exception %s from %s:%u\n", ex.Message(), ex.File(), ex.Line());
                    ASSERTS(); // ProcessNotification isn't expected to throw
                }
                subscription->Unlock();
            }
            else {
                subscription->SetNotificationError();
            }
        }
    }
    catch(HttpError&) {
        LogError(subscription, "HttpError");
    }
    catch(ReaderError&) {
        LogError(subscription, "ReaderError");
    }
    catch(WriterError&) {
        LogError(subscription, "WriterError");
    }
    catch(NetworkError&) {
        LogError(subscription, "NetworkError");
    }
    catch(XmlError&) {
        LogError(subscription, "XmlError");
    }
    if (subscription != NULL) {
        subscription->RemoveRef();
    }    
}

void EventSessionUpnp::ProcessNotification(IEventProcessor& aEventProcessor, const Brx& aEntity)
{
    aEventProcessor.EventUpdateStart();
    OutputProcessorUpnp outputProcessor;
    Brn propertySet = XmlParserBasic::Find("propertyset", aEntity);
    Brn prop;
    Brn remaining;
    try {
        for (;;) {
            try {
                prop.Set(XmlParserBasic::Find("property", propertySet, remaining));
            }
            catch (XmlError&) {
                // we've successfully processed all <property> tags from aEntity
                break;
            }
            prop.Set(Ascii::Trim(prop));
            if (prop.Bytes() < 8 || prop[0] != '<' || prop[1] == '/') {
                THROW(XmlError);
            }
            Parser parser(prop);
            (void)parser.Next('<');
            Brn tagNameFull = parser.Next('>');
            Brn tagName = tagNameFull;
            TUint bytes = tagNameFull.Bytes();
            TUint i;
            for (i = 0; i < bytes; i++) {
                if (Ascii::IsWhitespace(tagNameFull[i])) {
                    break;
                }
            }
            if (i < bytes) {
                tagName.Set(tagNameFull.Split(0, i));
            }
            Brn val;
            if (bytes > 0 && tagNameFull[bytes-1] == '/') {
                // empty element tag
                val.Set(Brx::Empty());
                if (i == bytes) { // no white space before '/'
                    tagName.Set(tagName.Split(0, bytes-1));
                }
            }
            else {
                val.Set(parser.Next('<'));
                Brn closingTag = parser.Next('/');
                closingTag.Set(parser.Next('>'));
                if (tagName != closingTag) {
                    THROW(XmlError);
                }
            }

            try {
                aEventProcessor.EventUpdate(tagName, val, outputProcessor);
            }
            catch(AsciiError&) {
                THROW(XmlError);
            }

            propertySet.Set(remaining);
        }
        aEventProcessor.EventUpdateEnd();
    }
    catch(XmlError&) {
        aEventProcessor.EventUpdateError();
    }
}

// EventServerUpnp

EventServerUpnp::EventServerUpnp(CpStack& aCpStack, TIpAddress aInterface)
    : iTcpServer(aCpStack.Env(), "EventServer", aCpStack.Env().InitParams()->CpUpnpEventServerPort(), aInterface)
{
    const TUint numThread = aCpStack.Env().InitParams()->NumEventSessionThreads();
#ifndef _WIN32
    // nothing terribly bad would happen if this assertion failed so its not worth a separate Windows implementation
    ASSERT(numThread < 10);
#endif
    for (TUint i=0; i<numThread; i++) {
        Bws<Thread::kMaxNameBytes+1> thName;
        thName.AppendPrintf("EventSession %d", i);
        thName.PtrZ();
        iTcpServer.Add((const TChar*)thName.Ptr(), new EventSessionUpnp(aCpStack));
    }
}
