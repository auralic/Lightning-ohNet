#include "CpAvOpenhomeOrgTidalConnect1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

#include <string>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncPlayAvOpenhomeOrgTidalConnect1Cpp : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgTidalConnect1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTidalConnect1Cpp& iService;
};

SyncPlayAvOpenhomeOrgTidalConnect1Cpp::SyncPlayAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgTidalConnect1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgTidalConnect1Cpp : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgTidalConnect1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTidalConnect1Cpp& iService;
};

SyncPauseAvOpenhomeOrgTidalConnect1Cpp::SyncPauseAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgTidalConnect1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgTidalConnect1Cpp : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgTidalConnect1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTidalConnect1Cpp& iService;
};

SyncStopAvOpenhomeOrgTidalConnect1Cpp::SyncStopAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgTidalConnect1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgTidalConnect1Cpp : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgTidalConnect1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTidalConnect1Cpp& iService;
};

SyncNextAvOpenhomeOrgTidalConnect1Cpp::SyncNextAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgTidalConnect1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgTidalConnect1Cpp : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgTidalConnect1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTidalConnect1Cpp& iService;
};

SyncPreviousAvOpenhomeOrgTidalConnect1Cpp::SyncPreviousAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgTidalConnect1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncToggleShuffleAvOpenhomeOrgTidalConnect1Cpp : public SyncProxyAction
{
public:
    SyncToggleShuffleAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncToggleShuffleAvOpenhomeOrgTidalConnect1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTidalConnect1Cpp& iService;
};

SyncToggleShuffleAvOpenhomeOrgTidalConnect1Cpp::SyncToggleShuffleAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncToggleShuffleAvOpenhomeOrgTidalConnect1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleShuffle(aAsync);
}


class SyncToggleLoopAvOpenhomeOrgTidalConnect1Cpp : public SyncProxyAction
{
public:
    SyncToggleLoopAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncToggleLoopAvOpenhomeOrgTidalConnect1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTidalConnect1Cpp& iService;
};

SyncToggleLoopAvOpenhomeOrgTidalConnect1Cpp::SyncToggleLoopAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncToggleLoopAvOpenhomeOrgTidalConnect1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleLoop(aAsync);
}


class SyncRequestMetadataAvOpenhomeOrgTidalConnect1Cpp : public SyncProxyAction
{
public:
    SyncRequestMetadataAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRequestMetadataAvOpenhomeOrgTidalConnect1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTidalConnect1Cpp& iService;
};

SyncRequestMetadataAvOpenhomeOrgTidalConnect1Cpp::SyncRequestMetadataAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncRequestMetadataAvOpenhomeOrgTidalConnect1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRequestMetadata(aAsync);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTidalConnect1Cpp& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1Cpp::SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncTransportStateAvOpenhomeOrgTidalConnect1Cpp : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgTidalConnect1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTidalConnect1Cpp& iService;
    std::string& iValue;
};

SyncTransportStateAvOpenhomeOrgTidalConnect1Cpp::SyncTransportStateAvOpenhomeOrgTidalConnect1Cpp(CpProxyAvOpenhomeOrgTidalConnect1Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgTidalConnect1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


CpProxyAvOpenhomeOrgTidalConnect1Cpp::CpProxyAvOpenhomeOrgTidalConnect1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "TidalConnect", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPlay = new Action("Play");

    iActionPause = new Action("Pause");

    iActionStop = new Action("Stop");

    iActionNext = new Action("Next");

    iActionPrevious = new Action("Previous");

    iActionToggleShuffle = new Action("ToggleShuffle");

    iActionToggleLoop = new Action("ToggleLoop");

    iActionRequestMetadata = new Action("RequestMetadata");

    iActionSeekSecondAbsolute = new Action("SeekSecondAbsolute");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSeekSecondAbsolute->AddInputParameter(param);

    iActionTransportState = new Action("TransportState");
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"Playing";
    allowedValues[index++] = (TChar*)"Paused";
    allowedValues[index++] = (TChar*)"Stopped";
    allowedValues[index++] = (TChar*)"Buffering";
    param = new OpenHome::Net::ParameterString("Value", allowedValues, 4);
    iActionTransportState->AddOutputParameter(param);
    delete[] allowedValues;

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1Cpp::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1Cpp::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1Cpp::RepeatOnePropertyChanged);
    iRepeatOne = new PropertyBool("RepeatOne", functor);
    AddProperty(iRepeatOne);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1Cpp::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1Cpp::UpdateCoverPropertyChanged);
    iUpdateCover = new PropertyBool("UpdateCover", functor);
    AddProperty(iUpdateCover);
}

CpProxyAvOpenhomeOrgTidalConnect1Cpp::~CpProxyAvOpenhomeOrgTidalConnect1Cpp()
{
    DestroyService();
    delete iActionPlay;
    delete iActionPause;
    delete iActionStop;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionToggleShuffle;
    delete iActionToggleLoop;
    delete iActionRequestMetadata;
    delete iActionSeekSecondAbsolute;
    delete iActionTransportState;
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SyncPlay()
{
    SyncPlayAvOpenhomeOrgTidalConnect1Cpp sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::EndPlay(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Play"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SyncPause()
{
    SyncPauseAvOpenhomeOrgTidalConnect1Cpp sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::EndPause(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Pause"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SyncStop()
{
    SyncStopAvOpenhomeOrgTidalConnect1Cpp sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::EndStop(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Stop"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SyncNext()
{
    SyncNextAvOpenhomeOrgTidalConnect1Cpp sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::EndNext(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Next"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgTidalConnect1Cpp sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::EndPrevious(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Previous"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SyncToggleShuffle()
{
    SyncToggleShuffleAvOpenhomeOrgTidalConnect1Cpp sync(*this);
    BeginToggleShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::BeginToggleShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionToggleShuffle, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::EndToggleShuffle(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ToggleShuffle"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SyncToggleLoop()
{
    SyncToggleLoopAvOpenhomeOrgTidalConnect1Cpp sync(*this);
    BeginToggleLoop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::BeginToggleLoop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionToggleLoop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::EndToggleLoop(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ToggleLoop"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SyncRequestMetadata()
{
    SyncRequestMetadataAvOpenhomeOrgTidalConnect1Cpp sync(*this);
    BeginRequestMetadata(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::BeginRequestMetadata(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRequestMetadata, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::EndRequestMetadata(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("RequestMetadata"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SyncSeekSecondAbsolute(uint32_t aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1Cpp sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::BeginSeekSecondAbsolute(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::EndSeekSecondAbsolute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SeekSecondAbsolute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SyncTransportState(std::string& aValue)
{
    SyncTransportStateAvOpenhomeOrgTidalConnect1Cpp sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::EndTransportState(IAsync& aAsync, std::string& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("TransportState"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SetPropertyRepeatOneChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatOneChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iShuffleChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SetPropertyUpdateCoverChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateCoverChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::PropertyTransportState(std::string& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iTransportState->Value();
    aTransportState.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::PropertyRepeat(bool& aRepeat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::PropertyRepeatOne(bool& aRepeatOne) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeatOne = iRepeatOne->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::PropertyShuffle(bool& aShuffle) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::PropertyUpdateCover(bool& aUpdateCover) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateCover = iUpdateCover->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::RepeatOnePropertyChanged()
{
    ReportEvent(iRepeatOneChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::UpdateCoverPropertyChanged()
{
    ReportEvent(iUpdateCoverChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgTidalConnect1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgTidalConnect1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgTidalConnect1Cpp::Version() const
{
  return iCpProxy.Version();
}

