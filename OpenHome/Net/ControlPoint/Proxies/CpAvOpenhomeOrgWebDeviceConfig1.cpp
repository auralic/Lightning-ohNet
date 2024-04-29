#include "CpAvOpenhomeOrgWebDeviceConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 : public SyncProxyAction
{
public:
    SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1& aProxy, Brh& aDeviceConfig);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1& iService;
    Brh& iDeviceConfig;
};

class SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 : public SyncProxyAction
{
public:
    SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1& iService;
};

class SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1 : public SyncProxyAction
{
public:
    SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1& aProxy, Brh& aWiFiList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1& iService;
    Brh& iWiFiList;
};

class SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1 : public SyncProxyAction
{
public:
    SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1& iService;
};

class SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1 : public SyncProxyAction
{
public:
    SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1& aProxy, Brh& aServiceLoaction);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1& iService;
    Brh& iServiceLoaction;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1

SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1::SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1& aProxy, Brh& aDeviceConfig)
    : iService(aProxy)
    , iDeviceConfig(aDeviceConfig)
{
}

void SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceConfig(aAsync, iDeviceConfig);
}

// SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1

SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1::SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDeviceConfig(aAsync);
}

// SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1

SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1::SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1& aProxy, Brh& aWiFiList)
    : iService(aProxy)
    , iWiFiList(aWiFiList)
{
}

void SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWiFiList(aAsync, iWiFiList);
}

// SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1

SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1::SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTimeZone(aAsync);
}

// SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1

SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1::SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1& aProxy, Brh& aServiceLoaction)
    : iService(aProxy)
    , iServiceLoaction(aServiceLoaction)
{
}

void SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServiceLocation(aAsync, iServiceLoaction);
}


// CpProxyAvOpenhomeOrgWebDeviceConfig1

CpProxyAvOpenhomeOrgWebDeviceConfig1::CpProxyAvOpenhomeOrgWebDeviceConfig1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "WebDeviceConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetDeviceConfig = new Action("GetDeviceConfig");
    param = new OpenHome::Net::ParameterString("DeviceConfig");
    iActionGetDeviceConfig->AddOutputParameter(param);

    iActionSetDeviceConfig = new Action("SetDeviceConfig");
    param = new OpenHome::Net::ParameterString("DeviceConfig");
    iActionSetDeviceConfig->AddInputParameter(param);

    iActionGetWiFiList = new Action("GetWiFiList");
    param = new OpenHome::Net::ParameterString("WiFiList");
    iActionGetWiFiList->AddOutputParameter(param);

    iActionSetTimeZone = new Action("SetTimeZone");
    param = new OpenHome::Net::ParameterString("TimeZone");
    iActionSetTimeZone->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("CurrentTime");
    iActionSetTimeZone->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TimeStamp");
    iActionSetTimeZone->AddInputParameter(param);

    iActionGetServiceLocation = new Action("GetServiceLocation");
    param = new OpenHome::Net::ParameterString("ServiceLoaction");
    iActionGetServiceLocation->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDeviceConfig1::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDeviceConfig1::DeviceConfigPropertyChanged);
    iDeviceConfig = new PropertyString("DeviceConfig", functor);
    AddProperty(iDeviceConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDeviceConfig1::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgWebDeviceConfig1::~CpProxyAvOpenhomeOrgWebDeviceConfig1()
{
    DestroyService();
    delete iActionGetDeviceConfig;
    delete iActionSetDeviceConfig;
    delete iActionGetWiFiList;
    delete iActionSetTimeZone;
    delete iActionGetServiceLocation;
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::SyncGetDeviceConfig(Brh& aDeviceConfig)
{
    SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 sync(*this, aDeviceConfig);
    BeginGetDeviceConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::BeginGetDeviceConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDeviceConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::EndGetDeviceConfig(IAsync& aAsync, Brh& aDeviceConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDeviceConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDeviceConfig);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::SyncSetDeviceConfig(const Brx& aDeviceConfig)
{
    SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 sync(*this);
    BeginSetDeviceConfig(aDeviceConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::BeginSetDeviceConfig(const Brx& aDeviceConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDeviceConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDeviceConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceConfig));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::EndSetDeviceConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDeviceConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::SyncGetWiFiList(Brh& aWiFiList)
{
    SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1 sync(*this, aWiFiList);
    BeginGetWiFiList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::BeginGetWiFiList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetWiFiList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWiFiList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::EndGetWiFiList(IAsync& aAsync, Brh& aWiFiList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetWiFiList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aWiFiList);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::SyncSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp)
{
    SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1 sync(*this);
    BeginSetTimeZone(aTimeZone, aCurrentTime, aTimeStamp, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::BeginSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetTimeZone, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTimeZone->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTimeZone));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCurrentTime));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTimeStamp));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::EndSetTimeZone(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetTimeZone"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::SyncGetServiceLocation(Brh& aServiceLoaction)
{
    SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1 sync(*this, aServiceLoaction);
    BeginGetServiceLocation(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::BeginGetServiceLocation(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetServiceLocation, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServiceLocation->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::EndGetServiceLocation(IAsync& aAsync, Brh& aServiceLoaction)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetServiceLocation"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aServiceLoaction);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::SetPropertyAliveChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAliveChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::SetPropertyDeviceConfigChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceConfigChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCurrentActionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::PropertyDeviceConfig(Brhz& aDeviceConfig) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDeviceConfig.Set(iDeviceConfig->Value());
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::DeviceConfigPropertyChanged()
{
    ReportEvent(iDeviceConfigChanged);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}


void CpProxyAvOpenhomeOrgWebDeviceConfig1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgWebDeviceConfig1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgWebDeviceConfig1::Version() const
{
  return iCpProxy.Version();
}


