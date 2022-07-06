#include "CpAvOpenhomeOrgAirplay1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPlayAvOpenhomeOrgAirplay1 : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgAirplay1(CpProxyAvOpenhomeOrgAirplay1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAirplay1& iService;
};

class SyncPauseAvOpenhomeOrgAirplay1 : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgAirplay1(CpProxyAvOpenhomeOrgAirplay1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAirplay1& iService;
};

class SyncNextAvOpenhomeOrgAirplay1 : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgAirplay1(CpProxyAvOpenhomeOrgAirplay1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAirplay1& iService;
};

class SyncPreviousAvOpenhomeOrgAirplay1 : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgAirplay1(CpProxyAvOpenhomeOrgAirplay1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAirplay1& iService;
};

class SyncTransportStateAvOpenhomeOrgAirplay1 : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgAirplay1(CpProxyAvOpenhomeOrgAirplay1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAirplay1& iService;
    Brh& iValue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPlayAvOpenhomeOrgAirplay1

SyncPlayAvOpenhomeOrgAirplay1::SyncPlayAvOpenhomeOrgAirplay1(CpProxyAvOpenhomeOrgAirplay1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgAirplay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}

// SyncPauseAvOpenhomeOrgAirplay1

SyncPauseAvOpenhomeOrgAirplay1::SyncPauseAvOpenhomeOrgAirplay1(CpProxyAvOpenhomeOrgAirplay1& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgAirplay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}

// SyncNextAvOpenhomeOrgAirplay1

SyncNextAvOpenhomeOrgAirplay1::SyncNextAvOpenhomeOrgAirplay1(CpProxyAvOpenhomeOrgAirplay1& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgAirplay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}

// SyncPreviousAvOpenhomeOrgAirplay1

SyncPreviousAvOpenhomeOrgAirplay1::SyncPreviousAvOpenhomeOrgAirplay1(CpProxyAvOpenhomeOrgAirplay1& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgAirplay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}

// SyncTransportStateAvOpenhomeOrgAirplay1

SyncTransportStateAvOpenhomeOrgAirplay1::SyncTransportStateAvOpenhomeOrgAirplay1(CpProxyAvOpenhomeOrgAirplay1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgAirplay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


// CpProxyAvOpenhomeOrgAirplay1

CpProxyAvOpenhomeOrgAirplay1::CpProxyAvOpenhomeOrgAirplay1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Airplay", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPlay = new Action("Play");

    iActionPause = new Action("Pause");

    iActionNext = new Action("Next");

    iActionPrevious = new Action("Previous");

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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAirplay1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
}

CpProxyAvOpenhomeOrgAirplay1::~CpProxyAvOpenhomeOrgAirplay1()
{
    DestroyService();
    delete iActionPlay;
    delete iActionPause;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionTransportState;
}

void CpProxyAvOpenhomeOrgAirplay1::SyncPlay()
{
    SyncPlayAvOpenhomeOrgAirplay1 sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAirplay1::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAirplay1::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAirplay1::SyncPause()
{
    SyncPauseAvOpenhomeOrgAirplay1 sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAirplay1::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAirplay1::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAirplay1::SyncNext()
{
    SyncNextAvOpenhomeOrgAirplay1 sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAirplay1::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAirplay1::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAirplay1::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgAirplay1 sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAirplay1::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAirplay1::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAirplay1::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgAirplay1 sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAirplay1::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAirplay1::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgAirplay1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgAirplay1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgAirplay1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}


void CpProxyAvOpenhomeOrgAirplay1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgAirplay1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgAirplay1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgAirplay1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgAirplay1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgAirplay1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgAirplay1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgAirplay1::Version() const
{
  return iCpProxy.Version();
}


