#include "CpAvOpenhomeOrgWebRendererConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1 : public SyncProxyAction
{
public:
    SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1& aProxy, Brh& aRendererConfig);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgWebRendererConfig1& iService;
    Brh& iRendererConfig;
};

class SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1 : public SyncProxyAction
{
public:
    SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgWebRendererConfig1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1

SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1::SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1& aProxy, Brh& aRendererConfig)
    : iService(aProxy)
    , iRendererConfig(aRendererConfig)
{
}

void SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRendererConfig(aAsync, iRendererConfig);
}

// SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1

SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1::SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRendererConfig(aAsync);
}


// CpProxyAvOpenhomeOrgWebRendererConfig1

CpProxyAvOpenhomeOrgWebRendererConfig1::CpProxyAvOpenhomeOrgWebRendererConfig1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "WebRendererConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetRendererConfig = new Action("GetRendererConfig");
    param = new OpenHome::Net::ParameterString("RendererConfig");
    iActionGetRendererConfig->AddOutputParameter(param);

    iActionSetRendererConfig = new Action("SetRendererConfig");
    param = new OpenHome::Net::ParameterString("RendererConfig");
    iActionSetRendererConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1::RendererConfigPropertyChanged);
    iRendererConfig = new PropertyString("RendererConfig", functor);
    AddProperty(iRendererConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgWebRendererConfig1::~CpProxyAvOpenhomeOrgWebRendererConfig1()
{
    DestroyService();
    delete iActionGetRendererConfig;
    delete iActionSetRendererConfig;
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SyncGetRendererConfig(Brh& aRendererConfig)
{
    SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1 sync(*this, aRendererConfig);
    BeginGetRendererConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::BeginGetRendererConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetRendererConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRendererConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::EndGetRendererConfig(IAsync& aAsync, Brh& aRendererConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetRendererConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aRendererConfig);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SyncSetRendererConfig(const Brx& aRendererConfig)
{
    SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1 sync(*this);
    BeginSetRendererConfig(aRendererConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::BeginSetRendererConfig(const Brx& aRendererConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetRendererConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRendererConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aRendererConfig));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::EndSetRendererConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetRendererConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SetPropertyAliveChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAliveChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SetPropertyRendererConfigChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRendererConfigChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCurrentActionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::PropertyRendererConfig(Brhz& aRendererConfig) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRendererConfig.Set(iRendererConfig->Value());
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::RendererConfigPropertyChanged()
{
    ReportEvent(iRendererConfigChanged);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}


void CpProxyAvOpenhomeOrgWebRendererConfig1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgWebRendererConfig1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgWebRendererConfig1::Version() const
{
  return iCpProxy.Version();
}


