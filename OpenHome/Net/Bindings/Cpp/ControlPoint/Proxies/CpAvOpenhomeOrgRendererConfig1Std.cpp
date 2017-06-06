#include "CpAvOpenhomeOrgRendererConfig1.h"
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


class SyncGetRendererConfigAvOpenhomeOrgRendererConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetRendererConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy, std::string& aRendererConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetRendererConfigAvOpenhomeOrgRendererConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1Cpp& iService;
    std::string& iRendererConfig;
};

SyncGetRendererConfigAvOpenhomeOrgRendererConfig1Cpp::SyncGetRendererConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy, std::string& aRendererConfig)
    : iService(aProxy)
    , iRendererConfig(aRendererConfig)
{
}

void SyncGetRendererConfigAvOpenhomeOrgRendererConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRendererConfig(aAsync, iRendererConfig);
}


class SyncSetRendererConfigAvOpenhomeOrgRendererConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetRendererConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRendererConfigAvOpenhomeOrgRendererConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1Cpp& iService;
};

SyncSetRendererConfigAvOpenhomeOrgRendererConfig1Cpp::SyncSetRendererConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetRendererConfigAvOpenhomeOrgRendererConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRendererConfig(aAsync);
}


class SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy, std::string& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1Cpp& iService;
    std::string& iResamplerConfig;
};

SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp::SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy, std::string& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}


class SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1Cpp& iService;
};

SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp::SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}


class SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy, std::string& aHardwareConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1Cpp& iService;
    std::string& iHardwareConfig;
};

SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp::SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy, std::string& aHardwareConfig)
    : iService(aProxy)
    , iHardwareConfig(aHardwareConfig)
{
}

void SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHardwareConfig(aAsync, iHardwareConfig);
}


class SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1Cpp& iService;
};

SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp::SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetHardwareConfig(aAsync);
}


class SyncGetWiFiListAvOpenhomeOrgRendererConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetWiFiListAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy, std::string& aWiFiList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWiFiListAvOpenhomeOrgRendererConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1Cpp& iService;
    std::string& iWiFiList;
};

SyncGetWiFiListAvOpenhomeOrgRendererConfig1Cpp::SyncGetWiFiListAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy, std::string& aWiFiList)
    : iService(aProxy)
    , iWiFiList(aWiFiList)
{
}

void SyncGetWiFiListAvOpenhomeOrgRendererConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWiFiList(aAsync, iWiFiList);
}


class SyncSetTimeZoneAvOpenhomeOrgRendererConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetTimeZoneAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTimeZoneAvOpenhomeOrgRendererConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1Cpp& iService;
};

SyncSetTimeZoneAvOpenhomeOrgRendererConfig1Cpp::SyncSetTimeZoneAvOpenhomeOrgRendererConfig1Cpp(CpProxyAvOpenhomeOrgRendererConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetTimeZoneAvOpenhomeOrgRendererConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTimeZone(aAsync);
}


CpProxyAvOpenhomeOrgRendererConfig1Cpp::CpProxyAvOpenhomeOrgRendererConfig1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("av-openhome-org", "RendererConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetRendererConfig = new Action("GetRendererConfig");
    param = new OpenHome::Net::ParameterString("RendererConfig");
    iActionGetRendererConfig->AddOutputParameter(param);

    iActionSetRendererConfig = new Action("SetRendererConfig");
    param = new OpenHome::Net::ParameterString("RendererConfig");
    iActionSetRendererConfig->AddInputParameter(param);

    iActionGetResamplerConfig = new Action("GetResamplerConfig");
    param = new OpenHome::Net::ParameterString("ResamplerConfig");
    iActionGetResamplerConfig->AddOutputParameter(param);

    iActionSetResamplerConfig = new Action("SetResamplerConfig");
    param = new OpenHome::Net::ParameterString("ResamplerConfig");
    iActionSetResamplerConfig->AddInputParameter(param);

    iActionGetHardwareConfig = new Action("GetHardwareConfig");
    param = new OpenHome::Net::ParameterString("HardwareConfig");
    iActionGetHardwareConfig->AddOutputParameter(param);

    iActionSetHardwareConfig = new Action("SetHardwareConfig");
    param = new OpenHome::Net::ParameterString("HardwareConfig");
    iActionSetHardwareConfig->AddInputParameter(param);

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

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRendererConfig1Cpp::RendererConfigPropertyChanged);
    iRendererConfig = new PropertyString("RendererConfig", functor);
    AddProperty(iRendererConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRendererConfig1Cpp::ResamplerConfigPropertyChanged);
    iResamplerConfig = new PropertyString("ResamplerConfig", functor);
    AddProperty(iResamplerConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRendererConfig1Cpp::HardwareConfigPropertyChanged);
    iHardwareConfig = new PropertyString("HardwareConfig", functor);
    AddProperty(iHardwareConfig);
}

CpProxyAvOpenhomeOrgRendererConfig1Cpp::~CpProxyAvOpenhomeOrgRendererConfig1Cpp()
{
    DestroyService();
    delete iActionGetRendererConfig;
    delete iActionSetRendererConfig;
    delete iActionGetResamplerConfig;
    delete iActionSetResamplerConfig;
    delete iActionGetHardwareConfig;
    delete iActionSetHardwareConfig;
    delete iActionGetWiFiList;
    delete iActionSetTimeZone;
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::SyncGetRendererConfig(std::string& aRendererConfig)
{
    SyncGetRendererConfigAvOpenhomeOrgRendererConfig1Cpp sync(*this, aRendererConfig);
    BeginGetRendererConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::BeginGetRendererConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetRendererConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRendererConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::EndGetRendererConfig(IAsync& aAsync, std::string& aRendererConfig)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aRendererConfig.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::SyncSetRendererConfig(const std::string& aRendererConfig)
{
    SyncSetRendererConfigAvOpenhomeOrgRendererConfig1Cpp sync(*this);
    BeginSetRendererConfig(aRendererConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::BeginSetRendererConfig(const std::string& aRendererConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetRendererConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRendererConfig->InputParameters();
    {
        Brn buf((const TByte*)aRendererConfig.c_str(), (TUint)aRendererConfig.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::EndSetRendererConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::SyncGetResamplerConfig(std::string& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::EndGetResamplerConfig(IAsync& aAsync, std::string& aResamplerConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetResamplerConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aResamplerConfig.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::SyncSetResamplerConfig(const std::string& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1Cpp sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::BeginSetResamplerConfig(const std::string& aResamplerConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetResamplerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetResamplerConfig->InputParameters();
    {
        Brn buf((const TByte*)aResamplerConfig.c_str(), (TUint)aResamplerConfig.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::EndSetResamplerConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetResamplerConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::SyncGetHardwareConfig(std::string& aHardwareConfig)
{
    SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp sync(*this, aHardwareConfig);
    BeginGetHardwareConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::BeginGetHardwareConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetHardwareConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHardwareConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::EndGetHardwareConfig(IAsync& aAsync, std::string& aHardwareConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetHardwareConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aHardwareConfig.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::SyncSetHardwareConfig(const std::string& aHardwareConfig)
{
    SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1Cpp sync(*this);
    BeginSetHardwareConfig(aHardwareConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::BeginSetHardwareConfig(const std::string& aHardwareConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetHardwareConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetHardwareConfig->InputParameters();
    {
        Brn buf((const TByte*)aHardwareConfig.c_str(), (TUint)aHardwareConfig.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::EndSetHardwareConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetHardwareConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::SyncGetWiFiList(std::string& aWiFiList)
{
    SyncGetWiFiListAvOpenhomeOrgRendererConfig1Cpp sync(*this, aWiFiList);
    BeginGetWiFiList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::BeginGetWiFiList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetWiFiList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWiFiList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::EndGetWiFiList(IAsync& aAsync, std::string& aWiFiList)
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

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::SyncSetTimeZone(const std::string& aTimeZone, const std::string& aCurrentTime, const std::string& aTimeStamp)
{
    SyncSetTimeZoneAvOpenhomeOrgRendererConfig1Cpp sync(*this);
    BeginSetTimeZone(aTimeZone, aCurrentTime, aTimeStamp, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::BeginSetTimeZone(const std::string& aTimeZone, const std::string& aCurrentTime, const std::string& aTimeStamp, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::EndSetTimeZone(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::SetPropertyRendererConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iRendererConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::SetPropertyResamplerConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iResamplerConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::SetPropertyHardwareConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iHardwareConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::PropertyRendererConfig(std::string& aRendererConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iRendererConfig->Value();
    aRendererConfig.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::PropertyResamplerConfig(std::string& aResamplerConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iResamplerConfig->Value();
    aResamplerConfig.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::PropertyHardwareConfig(std::string& aHardwareConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iHardwareConfig->Value();
    aHardwareConfig.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::RendererConfigPropertyChanged()
{
    ReportEvent(iRendererConfigChanged);
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::ResamplerConfigPropertyChanged()
{
    ReportEvent(iResamplerConfigChanged);
}

void CpProxyAvOpenhomeOrgRendererConfig1Cpp::HardwareConfigPropertyChanged()
{
    ReportEvent(iHardwareConfigChanged);
}

