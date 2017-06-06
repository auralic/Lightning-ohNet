#include "CpAvOpenhomeOrgRendererConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncGetRendererConfigAvOpenhomeOrgRendererConfig1 : public SyncProxyAction
{
public:
    SyncGetRendererConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy, Brh& aRendererConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetRendererConfigAvOpenhomeOrgRendererConfig1() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1& iService;
    Brh& iRendererConfig;
};

SyncGetRendererConfigAvOpenhomeOrgRendererConfig1::SyncGetRendererConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy, Brh& aRendererConfig)
    : iService(aProxy)
    , iRendererConfig(aRendererConfig)
{
}

void SyncGetRendererConfigAvOpenhomeOrgRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRendererConfig(aAsync, iRendererConfig);
}


class SyncSetRendererConfigAvOpenhomeOrgRendererConfig1 : public SyncProxyAction
{
public:
    SyncSetRendererConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRendererConfigAvOpenhomeOrgRendererConfig1() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1& iService;
};

SyncSetRendererConfigAvOpenhomeOrgRendererConfig1::SyncSetRendererConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetRendererConfigAvOpenhomeOrgRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRendererConfig(aAsync);
}


class SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1 : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy, Brh& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1& iService;
    Brh& iResamplerConfig;
};

SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1::SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy, Brh& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}


class SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1 : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1& iService;
};

SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1::SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}


class SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1 : public SyncProxyAction
{
public:
    SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy, Brh& aHardwareConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1& iService;
    Brh& iHardwareConfig;
};

SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1::SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy, Brh& aHardwareConfig)
    : iService(aProxy)
    , iHardwareConfig(aHardwareConfig)
{
}

void SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHardwareConfig(aAsync, iHardwareConfig);
}


class SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1 : public SyncProxyAction
{
public:
    SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1& iService;
};

SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1::SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetHardwareConfig(aAsync);
}


class SyncGetWiFiListAvOpenhomeOrgRendererConfig1 : public SyncProxyAction
{
public:
    SyncGetWiFiListAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy, Brh& aWiFiList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWiFiListAvOpenhomeOrgRendererConfig1() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1& iService;
    Brh& iWiFiList;
};

SyncGetWiFiListAvOpenhomeOrgRendererConfig1::SyncGetWiFiListAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy, Brh& aWiFiList)
    : iService(aProxy)
    , iWiFiList(aWiFiList)
{
}

void SyncGetWiFiListAvOpenhomeOrgRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWiFiList(aAsync, iWiFiList);
}


class SyncSetTimeZoneAvOpenhomeOrgRendererConfig1 : public SyncProxyAction
{
public:
    SyncSetTimeZoneAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTimeZoneAvOpenhomeOrgRendererConfig1() {}
private:
    CpProxyAvOpenhomeOrgRendererConfig1& iService;
};

SyncSetTimeZoneAvOpenhomeOrgRendererConfig1::SyncSetTimeZoneAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetTimeZoneAvOpenhomeOrgRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTimeZone(aAsync);
}


CpProxyAvOpenhomeOrgRendererConfig1::CpProxyAvOpenhomeOrgRendererConfig1(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRendererConfig1::RendererConfigPropertyChanged);
    iRendererConfig = new PropertyString("RendererConfig", functor);
    AddProperty(iRendererConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRendererConfig1::ResamplerConfigPropertyChanged);
    iResamplerConfig = new PropertyString("ResamplerConfig", functor);
    AddProperty(iResamplerConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRendererConfig1::HardwareConfigPropertyChanged);
    iHardwareConfig = new PropertyString("HardwareConfig", functor);
    AddProperty(iHardwareConfig);
}

CpProxyAvOpenhomeOrgRendererConfig1::~CpProxyAvOpenhomeOrgRendererConfig1()
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

void CpProxyAvOpenhomeOrgRendererConfig1::SyncGetRendererConfig(Brh& aRendererConfig)
{
    SyncGetRendererConfigAvOpenhomeOrgRendererConfig1 sync(*this, aRendererConfig);
    BeginGetRendererConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1::BeginGetRendererConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetRendererConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRendererConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1::EndGetRendererConfig(IAsync& aAsync, Brh& aRendererConfig)
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

void CpProxyAvOpenhomeOrgRendererConfig1::SyncSetRendererConfig(const Brx& aRendererConfig)
{
    SyncSetRendererConfigAvOpenhomeOrgRendererConfig1 sync(*this);
    BeginSetRendererConfig(aRendererConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1::BeginSetRendererConfig(const Brx& aRendererConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetRendererConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRendererConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aRendererConfig));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1::EndSetRendererConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRendererConfig1::SyncGetResamplerConfig(Brh& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1 sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1::EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aResamplerConfig);
}

void CpProxyAvOpenhomeOrgRendererConfig1::SyncSetResamplerConfig(const Brx& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1 sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1::BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetResamplerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetResamplerConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aResamplerConfig));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1::EndSetResamplerConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRendererConfig1::SyncGetHardwareConfig(Brh& aHardwareConfig)
{
    SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1 sync(*this, aHardwareConfig);
    BeginGetHardwareConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1::BeginGetHardwareConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetHardwareConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHardwareConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1::EndGetHardwareConfig(IAsync& aAsync, Brh& aHardwareConfig)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aHardwareConfig);
}

void CpProxyAvOpenhomeOrgRendererConfig1::SyncSetHardwareConfig(const Brx& aHardwareConfig)
{
    SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1 sync(*this);
    BeginSetHardwareConfig(aHardwareConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1::BeginSetHardwareConfig(const Brx& aHardwareConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetHardwareConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetHardwareConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aHardwareConfig));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1::EndSetHardwareConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRendererConfig1::SyncGetWiFiList(Brh& aWiFiList)
{
    SyncGetWiFiListAvOpenhomeOrgRendererConfig1 sync(*this, aWiFiList);
    BeginGetWiFiList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1::BeginGetWiFiList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetWiFiList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWiFiList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1::EndGetWiFiList(IAsync& aAsync, Brh& aWiFiList)
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

void CpProxyAvOpenhomeOrgRendererConfig1::SyncSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp)
{
    SyncSetTimeZoneAvOpenhomeOrgRendererConfig1 sync(*this);
    BeginSetTimeZone(aTimeZone, aCurrentTime, aTimeStamp, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1::BeginSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetTimeZone, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTimeZone->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTimeZone));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCurrentTime));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTimeStamp));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1::EndSetTimeZone(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRendererConfig1::SetPropertyRendererConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iRendererConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRendererConfig1::SetPropertyResamplerConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iResamplerConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRendererConfig1::SetPropertyHardwareConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iHardwareConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRendererConfig1::PropertyRendererConfig(Brhz& aRendererConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aRendererConfig.Set(iRendererConfig->Value());
}

void CpProxyAvOpenhomeOrgRendererConfig1::PropertyResamplerConfig(Brhz& aResamplerConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aResamplerConfig.Set(iResamplerConfig->Value());
}

void CpProxyAvOpenhomeOrgRendererConfig1::PropertyHardwareConfig(Brhz& aHardwareConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aHardwareConfig.Set(iHardwareConfig->Value());
}

void CpProxyAvOpenhomeOrgRendererConfig1::RendererConfigPropertyChanged()
{
    ReportEvent(iRendererConfigChanged);
}

void CpProxyAvOpenhomeOrgRendererConfig1::ResamplerConfigPropertyChanged()
{
    ReportEvent(iResamplerConfigChanged);
}

void CpProxyAvOpenhomeOrgRendererConfig1::HardwareConfigPropertyChanged()
{
    ReportEvent(iHardwareConfigChanged);
}

