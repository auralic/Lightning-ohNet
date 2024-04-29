#include "CpAvOpenhomeOrgWebClockConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetClockConfigAvOpenhomeOrgWebClockConfig1 : public SyncProxyAction
{
public:
    SyncGetClockConfigAvOpenhomeOrgWebClockConfig1(CpProxyAvOpenhomeOrgWebClockConfig1& aProxy, Brh& aClockConfig);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgWebClockConfig1& iService;
    Brh& iClockConfig;
};

class SyncSetClockConfigAvOpenhomeOrgWebClockConfig1 : public SyncProxyAction
{
public:
    SyncSetClockConfigAvOpenhomeOrgWebClockConfig1(CpProxyAvOpenhomeOrgWebClockConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgWebClockConfig1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetClockConfigAvOpenhomeOrgWebClockConfig1

SyncGetClockConfigAvOpenhomeOrgWebClockConfig1::SyncGetClockConfigAvOpenhomeOrgWebClockConfig1(CpProxyAvOpenhomeOrgWebClockConfig1& aProxy, Brh& aClockConfig)
    : iService(aProxy)
    , iClockConfig(aClockConfig)
{
}

void SyncGetClockConfigAvOpenhomeOrgWebClockConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetClockConfig(aAsync, iClockConfig);
}

// SyncSetClockConfigAvOpenhomeOrgWebClockConfig1

SyncSetClockConfigAvOpenhomeOrgWebClockConfig1::SyncSetClockConfigAvOpenhomeOrgWebClockConfig1(CpProxyAvOpenhomeOrgWebClockConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetClockConfigAvOpenhomeOrgWebClockConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetClockConfig(aAsync);
}


// CpProxyAvOpenhomeOrgWebClockConfig1

CpProxyAvOpenhomeOrgWebClockConfig1::CpProxyAvOpenhomeOrgWebClockConfig1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "WebClockConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetClockConfig = new Action("GetClockConfig");
    param = new OpenHome::Net::ParameterString("ClockConfig");
    iActionGetClockConfig->AddOutputParameter(param);

    iActionSetClockConfig = new Action("SetClockConfig");
    param = new OpenHome::Net::ParameterString("ClockConfig");
    iActionSetClockConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebClockConfig1::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebClockConfig1::ClockConfigPropertyChanged);
    iClockConfig = new PropertyString("ClockConfig", functor);
    AddProperty(iClockConfig);
}

CpProxyAvOpenhomeOrgWebClockConfig1::~CpProxyAvOpenhomeOrgWebClockConfig1()
{
    DestroyService();
    delete iActionGetClockConfig;
    delete iActionSetClockConfig;
}

void CpProxyAvOpenhomeOrgWebClockConfig1::SyncGetClockConfig(Brh& aClockConfig)
{
    SyncGetClockConfigAvOpenhomeOrgWebClockConfig1 sync(*this, aClockConfig);
    BeginGetClockConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebClockConfig1::BeginGetClockConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetClockConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetClockConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebClockConfig1::EndGetClockConfig(IAsync& aAsync, Brh& aClockConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetClockConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aClockConfig);
}

void CpProxyAvOpenhomeOrgWebClockConfig1::SyncSetClockConfig(const Brx& aClockConfig)
{
    SyncSetClockConfigAvOpenhomeOrgWebClockConfig1 sync(*this);
    BeginSetClockConfig(aClockConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebClockConfig1::BeginSetClockConfig(const Brx& aClockConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetClockConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetClockConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aClockConfig));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebClockConfig1::EndSetClockConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetClockConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebClockConfig1::SetPropertyAliveChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAliveChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebClockConfig1::SetPropertyClockConfigChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iClockConfigChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebClockConfig1::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebClockConfig1::PropertyClockConfig(Brhz& aClockConfig) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aClockConfig.Set(iClockConfig->Value());
}

void CpProxyAvOpenhomeOrgWebClockConfig1::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebClockConfig1::ClockConfigPropertyChanged()
{
    ReportEvent(iClockConfigChanged);
}


void CpProxyAvOpenhomeOrgWebClockConfig1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgWebClockConfig1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgWebClockConfig1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgWebClockConfig1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgWebClockConfig1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgWebClockConfig1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgWebClockConfig1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgWebClockConfig1::Version() const
{
  return iCpProxy.Version();
}


