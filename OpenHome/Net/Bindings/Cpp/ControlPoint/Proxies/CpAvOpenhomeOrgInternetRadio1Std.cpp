#include "CpAvOpenhomeOrgInternetRadio1.h"
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


class SyncPlayAvOpenhomeOrgInternetRadio1Cpp : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgInternetRadio1Cpp(CpProxyAvOpenhomeOrgInternetRadio1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgInternetRadio1Cpp() {}
private:
    CpProxyAvOpenhomeOrgInternetRadio1Cpp& iService;
};

SyncPlayAvOpenhomeOrgInternetRadio1Cpp::SyncPlayAvOpenhomeOrgInternetRadio1Cpp(CpProxyAvOpenhomeOrgInternetRadio1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgInternetRadio1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncStopAvOpenhomeOrgInternetRadio1Cpp : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgInternetRadio1Cpp(CpProxyAvOpenhomeOrgInternetRadio1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgInternetRadio1Cpp() {}
private:
    CpProxyAvOpenhomeOrgInternetRadio1Cpp& iService;
};

SyncStopAvOpenhomeOrgInternetRadio1Cpp::SyncStopAvOpenhomeOrgInternetRadio1Cpp(CpProxyAvOpenhomeOrgInternetRadio1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgInternetRadio1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncSetSenderAvOpenhomeOrgInternetRadio1Cpp : public SyncProxyAction
{
public:
    SyncSetSenderAvOpenhomeOrgInternetRadio1Cpp(CpProxyAvOpenhomeOrgInternetRadio1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSenderAvOpenhomeOrgInternetRadio1Cpp() {}
private:
    CpProxyAvOpenhomeOrgInternetRadio1Cpp& iService;
};

SyncSetSenderAvOpenhomeOrgInternetRadio1Cpp::SyncSetSenderAvOpenhomeOrgInternetRadio1Cpp(CpProxyAvOpenhomeOrgInternetRadio1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetSenderAvOpenhomeOrgInternetRadio1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSender(aAsync);
}


class SyncSenderAvOpenhomeOrgInternetRadio1Cpp : public SyncProxyAction
{
public:
    SyncSenderAvOpenhomeOrgInternetRadio1Cpp(CpProxyAvOpenhomeOrgInternetRadio1Cpp& aProxy, std::string& aUri, std::string& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSenderAvOpenhomeOrgInternetRadio1Cpp() {}
private:
    CpProxyAvOpenhomeOrgInternetRadio1Cpp& iService;
    std::string& iUri;
    std::string& iMetadata;
};

SyncSenderAvOpenhomeOrgInternetRadio1Cpp::SyncSenderAvOpenhomeOrgInternetRadio1Cpp(CpProxyAvOpenhomeOrgInternetRadio1Cpp& aProxy, std::string& aUri, std::string& aMetadata)
    : iService(aProxy)
    , iUri(aUri)
    , iMetadata(aMetadata)
{
}

void SyncSenderAvOpenhomeOrgInternetRadio1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSender(aAsync, iUri, iMetadata);
}


class SyncTransportStateAvOpenhomeOrgInternetRadio1Cpp : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgInternetRadio1Cpp(CpProxyAvOpenhomeOrgInternetRadio1Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgInternetRadio1Cpp() {}
private:
    CpProxyAvOpenhomeOrgInternetRadio1Cpp& iService;
    std::string& iValue;
};

SyncTransportStateAvOpenhomeOrgInternetRadio1Cpp::SyncTransportStateAvOpenhomeOrgInternetRadio1Cpp(CpProxyAvOpenhomeOrgInternetRadio1Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgInternetRadio1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


CpProxyAvOpenhomeOrgInternetRadio1Cpp::CpProxyAvOpenhomeOrgInternetRadio1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("av-openhome-org", "InternetRadio", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPlay = new Action("Play");

    iActionStop = new Action("Stop");

    iActionSetSender = new Action("SetSender");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionSetSender->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionSetSender->AddInputParameter(param);

    iActionSender = new Action("Sender");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionSender->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionSender->AddOutputParameter(param);

    iActionTransportState = new Action("TransportState");
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"Stopped";
    allowedValues[index++] = (TChar*)"Playing";
    allowedValues[index++] = (TChar*)"Waiting";
    allowedValues[index++] = (TChar*)"Buffering";
    param = new OpenHome::Net::ParameterString("Value", allowedValues, 4);
    iActionTransportState->AddOutputParameter(param);
    delete[] allowedValues;

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInternetRadio1Cpp::UriPropertyChanged);
    iUri = new PropertyString("Uri", functor);
    AddProperty(iUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInternetRadio1Cpp::MetadataPropertyChanged);
    iMetadata = new PropertyString("Metadata", functor);
    AddProperty(iMetadata);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInternetRadio1Cpp::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
}

CpProxyAvOpenhomeOrgInternetRadio1Cpp::~CpProxyAvOpenhomeOrgInternetRadio1Cpp()
{
    DestroyService();
    delete iActionPlay;
    delete iActionStop;
    delete iActionSetSender;
    delete iActionSender;
    delete iActionTransportState;
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::SyncPlay()
{
    SyncPlayAvOpenhomeOrgInternetRadio1Cpp sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionPlay, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::SyncStop()
{
    SyncStopAvOpenhomeOrgInternetRadio1Cpp sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionStop, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::SyncSetSender(const std::string& aUri, const std::string& aMetadata)
{
    SyncSetSenderAvOpenhomeOrgInternetRadio1Cpp sync(*this);
    BeginSetSender(aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::BeginSetSender(const std::string& aUri, const std::string& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetSender, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSender->InputParameters();
    {
        Brn buf((const TByte*)aUri.c_str(), (TUint)aUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aMetadata.c_str(), (TUint)aMetadata.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::EndSetSender(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetSender"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::SyncSender(std::string& aUri, std::string& aMetadata)
{
    SyncSenderAvOpenhomeOrgInternetRadio1Cpp sync(*this, aUri, aMetadata);
    BeginSender(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::BeginSender(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSender, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSender->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::EndSender(IAsync& aAsync, std::string& aUri, std::string& aMetadata)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Sender"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUri.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aMetadata.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::SyncTransportState(std::string& aValue)
{
    SyncTransportStateAvOpenhomeOrgInternetRadio1Cpp sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::EndTransportState(IAsync& aAsync, std::string& aValue)
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

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::SetPropertyUriChanged(Functor& aFunctor)
{
    iLock->Wait();
    iUriChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::SetPropertyMetadataChanged(Functor& aFunctor)
{
    iLock->Wait();
    iMetadataChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock->Wait();
    iTransportStateChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::PropertyUri(std::string& aUri) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iUri->Value();
    aUri.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::PropertyMetadata(std::string& aMetadata) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iMetadata->Value();
    aMetadata.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::PropertyTransportState(std::string& aTransportState) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iTransportState->Value();
    aTransportState.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::UriPropertyChanged()
{
    ReportEvent(iUriChanged);
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::MetadataPropertyChanged()
{
    ReportEvent(iMetadataChanged);
}

void CpProxyAvOpenhomeOrgInternetRadio1Cpp::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

