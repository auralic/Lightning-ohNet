#include "CpAvOpenhomeOrgSpotify1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPlayAvOpenhomeOrgSpotify1 : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgSpotify1(CpProxyAvOpenhomeOrgSpotify1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSpotify1& iService;
};

class SyncPauseAvOpenhomeOrgSpotify1 : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgSpotify1(CpProxyAvOpenhomeOrgSpotify1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSpotify1& iService;
};

class SyncNextAvOpenhomeOrgSpotify1 : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgSpotify1(CpProxyAvOpenhomeOrgSpotify1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSpotify1& iService;
};

class SyncPreviousAvOpenhomeOrgSpotify1 : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgSpotify1(CpProxyAvOpenhomeOrgSpotify1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSpotify1& iService;
};

class SyncTransportStateAvOpenhomeOrgSpotify1 : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgSpotify1(CpProxyAvOpenhomeOrgSpotify1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgSpotify1& iService;
    Brh& iValue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPlayAvOpenhomeOrgSpotify1

SyncPlayAvOpenhomeOrgSpotify1::SyncPlayAvOpenhomeOrgSpotify1(CpProxyAvOpenhomeOrgSpotify1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgSpotify1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}

// SyncPauseAvOpenhomeOrgSpotify1

SyncPauseAvOpenhomeOrgSpotify1::SyncPauseAvOpenhomeOrgSpotify1(CpProxyAvOpenhomeOrgSpotify1& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgSpotify1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}

// SyncNextAvOpenhomeOrgSpotify1

SyncNextAvOpenhomeOrgSpotify1::SyncNextAvOpenhomeOrgSpotify1(CpProxyAvOpenhomeOrgSpotify1& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgSpotify1::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}

// SyncPreviousAvOpenhomeOrgSpotify1

SyncPreviousAvOpenhomeOrgSpotify1::SyncPreviousAvOpenhomeOrgSpotify1(CpProxyAvOpenhomeOrgSpotify1& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgSpotify1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}

// SyncTransportStateAvOpenhomeOrgSpotify1

SyncTransportStateAvOpenhomeOrgSpotify1::SyncTransportStateAvOpenhomeOrgSpotify1(CpProxyAvOpenhomeOrgSpotify1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgSpotify1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


// CpProxyAvOpenhomeOrgSpotify1

CpProxyAvOpenhomeOrgSpotify1::CpProxyAvOpenhomeOrgSpotify1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Spotify", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSpotify1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
}

CpProxyAvOpenhomeOrgSpotify1::~CpProxyAvOpenhomeOrgSpotify1()
{
    DestroyService();
    delete iActionPlay;
    delete iActionPause;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionTransportState;
}

void CpProxyAvOpenhomeOrgSpotify1::SyncPlay()
{
    SyncPlayAvOpenhomeOrgSpotify1 sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSpotify1::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSpotify1::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgSpotify1::SyncPause()
{
    SyncPauseAvOpenhomeOrgSpotify1 sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSpotify1::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSpotify1::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgSpotify1::SyncNext()
{
    SyncNextAvOpenhomeOrgSpotify1 sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSpotify1::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSpotify1::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgSpotify1::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgSpotify1 sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSpotify1::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSpotify1::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgSpotify1::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgSpotify1 sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSpotify1::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSpotify1::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgSpotify1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgSpotify1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgSpotify1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}


void CpProxyAvOpenhomeOrgSpotify1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgSpotify1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgSpotify1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgSpotify1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgSpotify1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgSpotify1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgSpotify1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgSpotify1::Version() const
{
  return iCpProxy.Version();
}


