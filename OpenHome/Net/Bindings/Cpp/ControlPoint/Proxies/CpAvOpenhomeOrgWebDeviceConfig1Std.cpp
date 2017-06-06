#include "CpAvOpenhomeOrgWebDeviceConfig1.h"
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


class SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp(CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& aProxy, std::string& aDeviceConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& iService;
    std::string& iDeviceConfig;
};

SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp::SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp(CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& aProxy, std::string& aDeviceConfig)
    : iService(aProxy)
    , iDeviceConfig(aDeviceConfig)
{
}

void SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceConfig(aAsync, iDeviceConfig);
}


class SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp(CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& iService;
};

SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp::SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp(CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDeviceConfig(aAsync);
}


class SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1Cpp(CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& aProxy, std::string& aWiFiList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& iService;
    std::string& iWiFiList;
};

SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1Cpp::SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1Cpp(CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& aProxy, std::string& aWiFiList)
    : iService(aProxy)
    , iWiFiList(aWiFiList)
{
}

void SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWiFiList(aAsync, iWiFiList);
}


class SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1Cpp(CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& iService;
};

SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1Cpp::SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1Cpp(CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTimeZone(aAsync);
}


class SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1Cpp(CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& aProxy, std::string& aServiceLoaction);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& iService;
    std::string& iServiceLoaction;
};

SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1Cpp::SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1Cpp(CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp& aProxy, std::string& aServiceLoaction)
    : iService(aProxy)
    , iServiceLoaction(aServiceLoaction)
{
}

void SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServiceLocation(aAsync, iServiceLoaction);
}


CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("av-openhome-org", "WebDeviceConfig", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::DeviceConfigPropertyChanged);
    iDeviceConfig = new PropertyString("DeviceConfig", functor);
    AddProperty(iDeviceConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::~CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp()
{
    DestroyService();
    delete iActionGetDeviceConfig;
    delete iActionSetDeviceConfig;
    delete iActionGetWiFiList;
    delete iActionSetTimeZone;
    delete iActionGetServiceLocation;
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::SyncGetDeviceConfig(std::string& aDeviceConfig)
{
    SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp sync(*this, aDeviceConfig);
    BeginGetDeviceConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::BeginGetDeviceConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetDeviceConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::EndGetDeviceConfig(IAsync& aAsync, std::string& aDeviceConfig)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDeviceConfig.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::SyncSetDeviceConfig(const std::string& aDeviceConfig)
{
    SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1Cpp sync(*this);
    BeginSetDeviceConfig(aDeviceConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::BeginSetDeviceConfig(const std::string& aDeviceConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetDeviceConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDeviceConfig->InputParameters();
    {
        Brn buf((const TByte*)aDeviceConfig.c_str(), (TUint)aDeviceConfig.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::EndSetDeviceConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::SyncGetWiFiList(std::string& aWiFiList)
{
    SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1Cpp sync(*this, aWiFiList);
    BeginGetWiFiList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::BeginGetWiFiList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetWiFiList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWiFiList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::EndGetWiFiList(IAsync& aAsync, std::string& aWiFiList)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aWiFiList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::SyncSetTimeZone(const std::string& aTimeZone, const std::string& aCurrentTime, const std::string& aTimeStamp)
{
    SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1Cpp sync(*this);
    BeginSetTimeZone(aTimeZone, aCurrentTime, aTimeStamp, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::BeginSetTimeZone(const std::string& aTimeZone, const std::string& aCurrentTime, const std::string& aTimeStamp, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetTimeZone, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTimeZone->InputParameters();
    {
        Brn buf((const TByte*)aTimeZone.c_str(), (TUint)aTimeZone.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aCurrentTime.c_str(), (TUint)aCurrentTime.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aTimeStamp.c_str(), (TUint)aTimeStamp.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::EndSetTimeZone(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::SyncGetServiceLocation(std::string& aServiceLoaction)
{
    SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1Cpp sync(*this, aServiceLoaction);
    BeginGetServiceLocation(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::BeginGetServiceLocation(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetServiceLocation, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServiceLocation->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::EndGetServiceLocation(IAsync& aAsync, std::string& aServiceLoaction)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aServiceLoaction.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock->Wait();
    iAliveChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::SetPropertyDeviceConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iDeviceConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock->Wait();
    iCurrentActionChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::PropertyAlive(bool& aAlive) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::PropertyDeviceConfig(std::string& aDeviceConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iDeviceConfig->Value();
    aDeviceConfig.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::PropertyCurrentAction(uint32_t& aCurrentAction) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::DeviceConfigPropertyChanged()
{
    ReportEvent(iDeviceConfigChanged);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

