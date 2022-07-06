#include "CpAvOpenhomeOrgWebDACConfig1.h"
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


class SyncGetDACConfigAvOpenhomeOrgWebDACConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDACConfigAvOpenhomeOrgWebDACConfig1Cpp(CpProxyAvOpenhomeOrgWebDACConfig1Cpp& aProxy, std::string& aDACConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDACConfigAvOpenhomeOrgWebDACConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebDACConfig1Cpp& iService;
    std::string& iDACConfig;
};

SyncGetDACConfigAvOpenhomeOrgWebDACConfig1Cpp::SyncGetDACConfigAvOpenhomeOrgWebDACConfig1Cpp(CpProxyAvOpenhomeOrgWebDACConfig1Cpp& aProxy, std::string& aDACConfig)
    : iService(aProxy)
    , iDACConfig(aDACConfig)
{
}

void SyncGetDACConfigAvOpenhomeOrgWebDACConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACConfig(aAsync, iDACConfig);
}


class SyncSetDACConfigAvOpenhomeOrgWebDACConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetDACConfigAvOpenhomeOrgWebDACConfig1Cpp(CpProxyAvOpenhomeOrgWebDACConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDACConfigAvOpenhomeOrgWebDACConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebDACConfig1Cpp& iService;
};

SyncSetDACConfigAvOpenhomeOrgWebDACConfig1Cpp::SyncSetDACConfigAvOpenhomeOrgWebDACConfig1Cpp(CpProxyAvOpenhomeOrgWebDACConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACConfigAvOpenhomeOrgWebDACConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACConfig(aAsync);
}


CpProxyAvOpenhomeOrgWebDACConfig1Cpp::CpProxyAvOpenhomeOrgWebDACConfig1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDACConfig1Cpp::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDACConfig1Cpp::DACConfigPropertyChanged);
    iDACConfig = new PropertyString("DACConfig", functor);
    AddProperty(iDACConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDACConfig1Cpp::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgWebDACConfig1Cpp::~CpProxyAvOpenhomeOrgWebDACConfig1Cpp()
{
    DestroyService();
    delete iActionGetDACConfig;
    delete iActionSetDACConfig;
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::SyncGetDACConfig(std::string& aDACConfig)
{
    SyncGetDACConfigAvOpenhomeOrgWebDACConfig1Cpp sync(*this, aDACConfig);
    BeginGetDACConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::BeginGetDACConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDACConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::EndGetDACConfig(IAsync& aAsync, std::string& aDACConfig)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDACConfig.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::SyncSetDACConfig(const std::string& aDACConfig)
{
    SyncSetDACConfigAvOpenhomeOrgWebDACConfig1Cpp sync(*this);
    BeginSetDACConfig(aDACConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::BeginSetDACConfig(const std::string& aDACConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDACConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACConfig->InputParameters();
    {
        Brn buf((const TByte*)aDACConfig.c_str(), (TUint)aDACConfig.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::EndSetDACConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::SetPropertyAliveChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAliveChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::SetPropertyDACConfigChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDACConfigChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCurrentActionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::PropertyAlive(bool& aAlive) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::PropertyDACConfig(std::string& aDACConfig) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iDACConfig->Value();
    aDACConfig.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::PropertyCurrentAction(uint32_t& aCurrentAction) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::DACConfigPropertyChanged()
{
    ReportEvent(iDACConfigChanged);
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgWebDACConfig1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgWebDACConfig1Cpp::Version() const
{
  return iCpProxy.Version();
}

