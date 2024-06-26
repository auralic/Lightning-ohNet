#include "CpAvOpenhomeOrgInternetRadio1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPlayAvOpenhomeOrgInternetRadio1 : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgInternetRadio1& iService;
};

class SyncStopAvOpenhomeOrgInternetRadio1 : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgInternetRadio1& iService;
};

class SyncSetSenderAvOpenhomeOrgInternetRadio1 : public SyncProxyAction
{
public:
    SyncSetSenderAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgInternetRadio1& iService;
};

class SyncSenderAvOpenhomeOrgInternetRadio1 : public SyncProxyAction
{
public:
    SyncSenderAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1& aProxy, Brh& aUri, Brh& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgInternetRadio1& iService;
    Brh& iUri;
    Brh& iMetadata;
};

class SyncTransportStateAvOpenhomeOrgInternetRadio1 : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgInternetRadio1& iService;
    Brh& iValue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPlayAvOpenhomeOrgInternetRadio1

SyncPlayAvOpenhomeOrgInternetRadio1::SyncPlayAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgInternetRadio1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}

// SyncStopAvOpenhomeOrgInternetRadio1

SyncStopAvOpenhomeOrgInternetRadio1::SyncStopAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgInternetRadio1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}

// SyncSetSenderAvOpenhomeOrgInternetRadio1

SyncSetSenderAvOpenhomeOrgInternetRadio1::SyncSetSenderAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1& aProxy)
    : iService(aProxy)
{
}

void SyncSetSenderAvOpenhomeOrgInternetRadio1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSender(aAsync);
}

// SyncSenderAvOpenhomeOrgInternetRadio1

SyncSenderAvOpenhomeOrgInternetRadio1::SyncSenderAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1& aProxy, Brh& aUri, Brh& aMetadata)
    : iService(aProxy)
    , iUri(aUri)
    , iMetadata(aMetadata)
{
}

void SyncSenderAvOpenhomeOrgInternetRadio1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSender(aAsync, iUri, iMetadata);
}

// SyncTransportStateAvOpenhomeOrgInternetRadio1

SyncTransportStateAvOpenhomeOrgInternetRadio1::SyncTransportStateAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgInternetRadio1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


// CpProxyAvOpenhomeOrgInternetRadio1

CpProxyAvOpenhomeOrgInternetRadio1::CpProxyAvOpenhomeOrgInternetRadio1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "InternetRadio", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInternetRadio1::UriPropertyChanged);
    iUri = new PropertyString("Uri", functor);
    AddProperty(iUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInternetRadio1::MetadataPropertyChanged);
    iMetadata = new PropertyString("Metadata", functor);
    AddProperty(iMetadata);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInternetRadio1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
}

CpProxyAvOpenhomeOrgInternetRadio1::~CpProxyAvOpenhomeOrgInternetRadio1()
{
    DestroyService();
    delete iActionPlay;
    delete iActionStop;
    delete iActionSetSender;
    delete iActionSender;
    delete iActionTransportState;
}

void CpProxyAvOpenhomeOrgInternetRadio1::SyncPlay()
{
    SyncPlayAvOpenhomeOrgInternetRadio1 sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgInternetRadio1::SyncStop()
{
    SyncStopAvOpenhomeOrgInternetRadio1 sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgInternetRadio1::SyncSetSender(const Brx& aUri, const Brx& aMetadata)
{
    SyncSetSenderAvOpenhomeOrgInternetRadio1 sync(*this);
    BeginSetSender(aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1::BeginSetSender(const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSender, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSender->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1::EndSetSender(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgInternetRadio1::SyncSender(Brh& aUri, Brh& aMetadata)
{
    SyncSenderAvOpenhomeOrgInternetRadio1 sync(*this, aUri, aMetadata);
    BeginSender(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1::BeginSender(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSender, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSender->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1::EndSender(IAsync& aAsync, Brh& aUri, Brh& aMetadata)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUri);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMetadata);
}

void CpProxyAvOpenhomeOrgInternetRadio1::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgInternetRadio1 sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1::EndTransportState(IAsync& aAsync, Brh& aValue)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgInternetRadio1::SetPropertyUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInternetRadio1::SetPropertyMetadataChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMetadataChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInternetRadio1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgInternetRadio1::PropertyUri(Brhz& aUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUri.Set(iUri->Value());
}

void CpProxyAvOpenhomeOrgInternetRadio1::PropertyMetadata(Brhz& aMetadata) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMetadata.Set(iMetadata->Value());
}

void CpProxyAvOpenhomeOrgInternetRadio1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgInternetRadio1::UriPropertyChanged()
{
    ReportEvent(iUriChanged);
}

void CpProxyAvOpenhomeOrgInternetRadio1::MetadataPropertyChanged()
{
    ReportEvent(iMetadataChanged);
}

void CpProxyAvOpenhomeOrgInternetRadio1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}


void CpProxyAvOpenhomeOrgInternetRadio1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgInternetRadio1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgInternetRadio1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgInternetRadio1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgInternetRadio1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgInternetRadio1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgInternetRadio1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgInternetRadio1::Version() const
{
  return iCpProxy.Version();
}


