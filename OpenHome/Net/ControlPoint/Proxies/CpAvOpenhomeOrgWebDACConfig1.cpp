#include "CpAvOpenhomeOrgWebDACConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetDACConfigAvOpenhomeOrgWebDACConfig1 : public SyncProxyAction
{
public:
    SyncGetDACConfigAvOpenhomeOrgWebDACConfig1(CpProxyAvOpenhomeOrgWebDACConfig1& aProxy, Brh& aDACConfig);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgWebDACConfig1& iService;
    Brh& iDACConfig;
};

class SyncSetDACConfigAvOpenhomeOrgWebDACConfig1 : public SyncProxyAction
{
public:
    SyncSetDACConfigAvOpenhomeOrgWebDACConfig1(CpProxyAvOpenhomeOrgWebDACConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgWebDACConfig1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetDACConfigAvOpenhomeOrgWebDACConfig1

SyncGetDACConfigAvOpenhomeOrgWebDACConfig1::SyncGetDACConfigAvOpenhomeOrgWebDACConfig1(CpProxyAvOpenhomeOrgWebDACConfig1& aProxy, Brh& aDACConfig)
    : iService(aProxy)
    , iDACConfig(aDACConfig)
{
}

void SyncGetDACConfigAvOpenhomeOrgWebDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACConfig(aAsync, iDACConfig);
}

// SyncSetDACConfigAvOpenhomeOrgWebDACConfig1

SyncSetDACConfigAvOpenhomeOrgWebDACConfig1::SyncSetDACConfigAvOpenhomeOrgWebDACConfig1(CpProxyAvOpenhomeOrgWebDACConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACConfigAvOpenhomeOrgWebDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACConfig(aAsync);
}


// CpProxyAvOpenhomeOrgWebDACConfig1

CpProxyAvOpenhomeOrgWebDACConfig1::CpProxyAvOpenhomeOrgWebDACConfig1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "WebDACConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetDACConfig = new Action("GetDACConfig");
    param = new OpenHome::Net::ParameterString("DACConfig");
    iActionGetDACConfig->AddOutputParameter(param);

    iActionSetDACConfig = new Action("SetDACConfig");
    param = new OpenHome::Net::ParameterString("DACConfig");
    iActionSetDACConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDACConfig1::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDACConfig1::DACConfigPropertyChanged);
    iDACConfig = new PropertyString("DACConfig", functor);
    AddProperty(iDACConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDACConfig1::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgWebDACConfig1::~CpProxyAvOpenhomeOrgWebDACConfig1()
{
    DestroyService();
    delete iActionGetDACConfig;
    delete iActionSetDACConfig;
}

void CpProxyAvOpenhomeOrgWebDACConfig1::SyncGetDACConfig(Brh& aDACConfig)
{
    SyncGetDACConfigAvOpenhomeOrgWebDACConfig1 sync(*this, aDACConfig);
    BeginGetDACConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDACConfig1::BeginGetDACConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDACConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDACConfig1::EndGetDACConfig(IAsync& aAsync, Brh& aDACConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDACConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDACConfig);
}

void CpProxyAvOpenhomeOrgWebDACConfig1::SyncSetDACConfig(const Brx& aDACConfig)
{
    SyncSetDACConfigAvOpenhomeOrgWebDACConfig1 sync(*this);
    BeginSetDACConfig(aDACConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDACConfig1::BeginSetDACConfig(const Brx& aDACConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDACConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDACConfig));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDACConfig1::EndSetDACConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDACConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebDACConfig1::SetPropertyAliveChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAliveChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebDACConfig1::SetPropertyDACConfigChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDACConfigChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebDACConfig1::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCurrentActionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebDACConfig1::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebDACConfig1::PropertyDACConfig(Brhz& aDACConfig) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDACConfig.Set(iDACConfig->Value());
}

void CpProxyAvOpenhomeOrgWebDACConfig1::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgWebDACConfig1::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebDACConfig1::DACConfigPropertyChanged()
{
    ReportEvent(iDACConfigChanged);
}

void CpProxyAvOpenhomeOrgWebDACConfig1::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}


void CpProxyAvOpenhomeOrgWebDACConfig1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgWebDACConfig1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgWebDACConfig1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgWebDACConfig1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgWebDACConfig1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgWebDACConfig1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgWebDACConfig1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgWebDACConfig1::Version() const
{
  return iCpProxy.Version();
}


