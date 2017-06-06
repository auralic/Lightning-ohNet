#include "CpAvOpenhomeOrgRendererConfig1.h"
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/C/CpProxyCPrivate.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class CpProxyAvOpenhomeOrgRendererConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgRendererConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgRendererConfig1C();
    //CpProxyAvOpenhomeOrgRendererConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgRendererConfig1*>(iProxy); }

    void SyncGetRendererConfig(Brh& aRendererConfig);
    void BeginGetRendererConfig(FunctorAsync& aFunctor);
    void EndGetRendererConfig(IAsync& aAsync, Brh& aRendererConfig);

    void SyncSetRendererConfig(const Brx& aRendererConfig);
    void BeginSetRendererConfig(const Brx& aRendererConfig, FunctorAsync& aFunctor);
    void EndSetRendererConfig(IAsync& aAsync);

    void SyncGetResamplerConfig(Brh& aResamplerConfig);
    void BeginGetResamplerConfig(FunctorAsync& aFunctor);
    void EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig);

    void SyncSetResamplerConfig(const Brx& aResamplerConfig);
    void BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor);
    void EndSetResamplerConfig(IAsync& aAsync);

    void SyncGetHardwareConfig(Brh& aHardwareConfig);
    void BeginGetHardwareConfig(FunctorAsync& aFunctor);
    void EndGetHardwareConfig(IAsync& aAsync, Brh& aHardwareConfig);

    void SyncSetHardwareConfig(const Brx& aHardwareConfig);
    void BeginSetHardwareConfig(const Brx& aHardwareConfig, FunctorAsync& aFunctor);
    void EndSetHardwareConfig(IAsync& aAsync);

    void SyncGetWiFiList(Brh& aWiFiList);
    void BeginGetWiFiList(FunctorAsync& aFunctor);
    void EndGetWiFiList(IAsync& aAsync, Brh& aWiFiList);

    void SyncSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp);
    void BeginSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp, FunctorAsync& aFunctor);
    void EndSetTimeZone(IAsync& aAsync);

    void SetPropertyRendererConfigChanged(Functor& aFunctor);
    void SetPropertyResamplerConfigChanged(Functor& aFunctor);
    void SetPropertyHardwareConfigChanged(Functor& aFunctor);

    void PropertyRendererConfig(Brhz& aRendererConfig) const;
    void PropertyResamplerConfig(Brhz& aResamplerConfig) const;
    void PropertyHardwareConfig(Brhz& aHardwareConfig) const;
private:
    void RendererConfigPropertyChanged();
    void ResamplerConfigPropertyChanged();
    void HardwareConfigPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetRendererConfig;
    Action* iActionSetRendererConfig;
    Action* iActionGetResamplerConfig;
    Action* iActionSetResamplerConfig;
    Action* iActionGetHardwareConfig;
    Action* iActionSetHardwareConfig;
    Action* iActionGetWiFiList;
    Action* iActionSetTimeZone;
    PropertyString* iRendererConfig;
    PropertyString* iResamplerConfig;
    PropertyString* iHardwareConfig;
    Functor iRendererConfigChanged;
    Functor iResamplerConfigChanged;
    Functor iHardwareConfigChanged;
};


class SyncGetRendererConfigAvOpenhomeOrgRendererConfig1C : public SyncProxyAction
{
public:
    SyncGetRendererConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy, Brh& aRendererConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetRendererConfigAvOpenhomeOrgRendererConfig1C() {};
private:
    CpProxyAvOpenhomeOrgRendererConfig1C& iService;
    Brh& iRendererConfig;
};

SyncGetRendererConfigAvOpenhomeOrgRendererConfig1C::SyncGetRendererConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy, Brh& aRendererConfig)
    : iService(aProxy)
    , iRendererConfig(aRendererConfig)
{
}

void SyncGetRendererConfigAvOpenhomeOrgRendererConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRendererConfig(aAsync, iRendererConfig);
}


class SyncSetRendererConfigAvOpenhomeOrgRendererConfig1C : public SyncProxyAction
{
public:
    SyncSetRendererConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRendererConfigAvOpenhomeOrgRendererConfig1C() {};
private:
    CpProxyAvOpenhomeOrgRendererConfig1C& iService;
};

SyncSetRendererConfigAvOpenhomeOrgRendererConfig1C::SyncSetRendererConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetRendererConfigAvOpenhomeOrgRendererConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRendererConfig(aAsync);
}


class SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1C : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy, Brh& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1C() {};
private:
    CpProxyAvOpenhomeOrgRendererConfig1C& iService;
    Brh& iResamplerConfig;
};

SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1C::SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy, Brh& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}


class SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1C : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1C() {};
private:
    CpProxyAvOpenhomeOrgRendererConfig1C& iService;
};

SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1C::SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}


class SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1C : public SyncProxyAction
{
public:
    SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy, Brh& aHardwareConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1C() {};
private:
    CpProxyAvOpenhomeOrgRendererConfig1C& iService;
    Brh& iHardwareConfig;
};

SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1C::SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy, Brh& aHardwareConfig)
    : iService(aProxy)
    , iHardwareConfig(aHardwareConfig)
{
}

void SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHardwareConfig(aAsync, iHardwareConfig);
}


class SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1C : public SyncProxyAction
{
public:
    SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1C() {};
private:
    CpProxyAvOpenhomeOrgRendererConfig1C& iService;
};

SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1C::SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetHardwareConfig(aAsync);
}


class SyncGetWiFiListAvOpenhomeOrgRendererConfig1C : public SyncProxyAction
{
public:
    SyncGetWiFiListAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy, Brh& aWiFiList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWiFiListAvOpenhomeOrgRendererConfig1C() {};
private:
    CpProxyAvOpenhomeOrgRendererConfig1C& iService;
    Brh& iWiFiList;
};

SyncGetWiFiListAvOpenhomeOrgRendererConfig1C::SyncGetWiFiListAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy, Brh& aWiFiList)
    : iService(aProxy)
    , iWiFiList(aWiFiList)
{
}

void SyncGetWiFiListAvOpenhomeOrgRendererConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWiFiList(aAsync, iWiFiList);
}


class SyncSetTimeZoneAvOpenhomeOrgRendererConfig1C : public SyncProxyAction
{
public:
    SyncSetTimeZoneAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTimeZoneAvOpenhomeOrgRendererConfig1C() {};
private:
    CpProxyAvOpenhomeOrgRendererConfig1C& iService;
};

SyncSetTimeZoneAvOpenhomeOrgRendererConfig1C::SyncSetTimeZoneAvOpenhomeOrgRendererConfig1C(CpProxyAvOpenhomeOrgRendererConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetTimeZoneAvOpenhomeOrgRendererConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTimeZone(aAsync);
}

CpProxyAvOpenhomeOrgRendererConfig1C::CpProxyAvOpenhomeOrgRendererConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "RendererConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRendererConfig1C::RendererConfigPropertyChanged);
    iRendererConfig = new PropertyString("RendererConfig", functor);
    AddProperty(iRendererConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRendererConfig1C::ResamplerConfigPropertyChanged);
    iResamplerConfig = new PropertyString("ResamplerConfig", functor);
    AddProperty(iResamplerConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRendererConfig1C::HardwareConfigPropertyChanged);
    iHardwareConfig = new PropertyString("HardwareConfig", functor);
    AddProperty(iHardwareConfig);
}

CpProxyAvOpenhomeOrgRendererConfig1C::~CpProxyAvOpenhomeOrgRendererConfig1C()
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

void CpProxyAvOpenhomeOrgRendererConfig1C::SyncGetRendererConfig(Brh& aRendererConfig)
{
    SyncGetRendererConfigAvOpenhomeOrgRendererConfig1C sync(*this, aRendererConfig);
    BeginGetRendererConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1C::BeginGetRendererConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetRendererConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRendererConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1C::EndGetRendererConfig(IAsync& aAsync, Brh& aRendererConfig)
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

void CpProxyAvOpenhomeOrgRendererConfig1C::SyncSetRendererConfig(const Brx& aRendererConfig)
{
    SyncSetRendererConfigAvOpenhomeOrgRendererConfig1C sync(*this);
    BeginSetRendererConfig(aRendererConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1C::BeginSetRendererConfig(const Brx& aRendererConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetRendererConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRendererConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aRendererConfig));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1C::EndSetRendererConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRendererConfig1C::SyncGetResamplerConfig(Brh& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1C sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1C::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1C::EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig)
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

void CpProxyAvOpenhomeOrgRendererConfig1C::SyncSetResamplerConfig(const Brx& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1C sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1C::BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetResamplerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetResamplerConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aResamplerConfig));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1C::EndSetResamplerConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRendererConfig1C::SyncGetHardwareConfig(Brh& aHardwareConfig)
{
    SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1C sync(*this, aHardwareConfig);
    BeginGetHardwareConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1C::BeginGetHardwareConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetHardwareConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHardwareConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1C::EndGetHardwareConfig(IAsync& aAsync, Brh& aHardwareConfig)
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

void CpProxyAvOpenhomeOrgRendererConfig1C::SyncSetHardwareConfig(const Brx& aHardwareConfig)
{
    SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1C sync(*this);
    BeginSetHardwareConfig(aHardwareConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1C::BeginSetHardwareConfig(const Brx& aHardwareConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetHardwareConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetHardwareConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aHardwareConfig));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1C::EndSetHardwareConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRendererConfig1C::SyncGetWiFiList(Brh& aWiFiList)
{
    SyncGetWiFiListAvOpenhomeOrgRendererConfig1C sync(*this, aWiFiList);
    BeginGetWiFiList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1C::BeginGetWiFiList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetWiFiList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWiFiList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1C::EndGetWiFiList(IAsync& aAsync, Brh& aWiFiList)
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

void CpProxyAvOpenhomeOrgRendererConfig1C::SyncSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp)
{
    SyncSetTimeZoneAvOpenhomeOrgRendererConfig1C sync(*this);
    BeginSetTimeZone(aTimeZone, aCurrentTime, aTimeStamp, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRendererConfig1C::BeginSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetTimeZone, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTimeZone->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTimeZone));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCurrentTime));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTimeStamp));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRendererConfig1C::EndSetTimeZone(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRendererConfig1C::SetPropertyRendererConfigChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRendererConfigChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRendererConfig1C::SetPropertyResamplerConfigChanged(Functor& aFunctor)
{
    iLock.Wait();
    iResamplerConfigChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRendererConfig1C::SetPropertyHardwareConfigChanged(Functor& aFunctor)
{
    iLock.Wait();
    iHardwareConfigChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRendererConfig1C::PropertyRendererConfig(Brhz& aRendererConfig) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aRendererConfig.Set(iRendererConfig->Value());
}

void CpProxyAvOpenhomeOrgRendererConfig1C::PropertyResamplerConfig(Brhz& aResamplerConfig) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aResamplerConfig.Set(iResamplerConfig->Value());
}

void CpProxyAvOpenhomeOrgRendererConfig1C::PropertyHardwareConfig(Brhz& aHardwareConfig) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aHardwareConfig.Set(iHardwareConfig->Value());
}

void CpProxyAvOpenhomeOrgRendererConfig1C::RendererConfigPropertyChanged()
{
    ReportEvent(iRendererConfigChanged);
}

void CpProxyAvOpenhomeOrgRendererConfig1C::ResamplerConfigPropertyChanged()
{
    ReportEvent(iResamplerConfigChanged);
}

void CpProxyAvOpenhomeOrgRendererConfig1C::HardwareConfigPropertyChanged()
{
    ReportEvent(iHardwareConfigChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgRendererConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgRendererConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1SyncGetRendererConfig(THandle aHandle, char** aRendererConfig)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aRendererConfig;
    int32_t err = 0;
    try {
        proxyC->SyncGetRendererConfig(buf_aRendererConfig);
        *aRendererConfig = buf_aRendererConfig.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aRendererConfig = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1BeginGetRendererConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetRendererConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1EndGetRendererConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aRendererConfig)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aRendererConfig;
    *aRendererConfig = NULL;
    try {
        proxyC->EndGetRendererConfig(*async, buf_aRendererConfig);
        *aRendererConfig = buf_aRendererConfig.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1SyncSetRendererConfig(THandle aHandle, const char* aRendererConfig)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aRendererConfig(aRendererConfig);
    int32_t err = 0;
    try {
        proxyC->SyncSetRendererConfig(buf_aRendererConfig);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1BeginSetRendererConfig(THandle aHandle, const char* aRendererConfig, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aRendererConfig(aRendererConfig);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetRendererConfig(buf_aRendererConfig, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1EndSetRendererConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetRendererConfig(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1SyncGetResamplerConfig(THandle aHandle, char** aResamplerConfig)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aResamplerConfig;
    int32_t err = 0;
    try {
        proxyC->SyncGetResamplerConfig(buf_aResamplerConfig);
        *aResamplerConfig = buf_aResamplerConfig.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aResamplerConfig = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1BeginGetResamplerConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetResamplerConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1EndGetResamplerConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aResamplerConfig)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aResamplerConfig;
    *aResamplerConfig = NULL;
    try {
        proxyC->EndGetResamplerConfig(*async, buf_aResamplerConfig);
        *aResamplerConfig = buf_aResamplerConfig.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1SyncSetResamplerConfig(THandle aHandle, const char* aResamplerConfig)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aResamplerConfig(aResamplerConfig);
    int32_t err = 0;
    try {
        proxyC->SyncSetResamplerConfig(buf_aResamplerConfig);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1BeginSetResamplerConfig(THandle aHandle, const char* aResamplerConfig, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aResamplerConfig(aResamplerConfig);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetResamplerConfig(buf_aResamplerConfig, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1EndSetResamplerConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetResamplerConfig(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1SyncGetHardwareConfig(THandle aHandle, char** aHardwareConfig)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aHardwareConfig;
    int32_t err = 0;
    try {
        proxyC->SyncGetHardwareConfig(buf_aHardwareConfig);
        *aHardwareConfig = buf_aHardwareConfig.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aHardwareConfig = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1BeginGetHardwareConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetHardwareConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1EndGetHardwareConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aHardwareConfig)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aHardwareConfig;
    *aHardwareConfig = NULL;
    try {
        proxyC->EndGetHardwareConfig(*async, buf_aHardwareConfig);
        *aHardwareConfig = buf_aHardwareConfig.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1SyncSetHardwareConfig(THandle aHandle, const char* aHardwareConfig)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aHardwareConfig(aHardwareConfig);
    int32_t err = 0;
    try {
        proxyC->SyncSetHardwareConfig(buf_aHardwareConfig);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1BeginSetHardwareConfig(THandle aHandle, const char* aHardwareConfig, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aHardwareConfig(aHardwareConfig);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetHardwareConfig(buf_aHardwareConfig, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1EndSetHardwareConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetHardwareConfig(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1SyncGetWiFiList(THandle aHandle, char** aWiFiList)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aWiFiList;
    int32_t err = 0;
    try {
        proxyC->SyncGetWiFiList(buf_aWiFiList);
        *aWiFiList = buf_aWiFiList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aWiFiList = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1BeginGetWiFiList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetWiFiList(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1EndGetWiFiList(THandle aHandle, OhNetHandleAsync aAsync, char** aWiFiList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aWiFiList;
    *aWiFiList = NULL;
    try {
        proxyC->EndGetWiFiList(*async, buf_aWiFiList);
        *aWiFiList = buf_aWiFiList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1SyncSetTimeZone(THandle aHandle, const char* aTimeZone, const char* aCurrentTime, const char* aTimeStamp)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aTimeZone(aTimeZone);
    Brh buf_aCurrentTime(aCurrentTime);
    Brh buf_aTimeStamp(aTimeStamp);
    int32_t err = 0;
    try {
        proxyC->SyncSetTimeZone(buf_aTimeZone, buf_aCurrentTime, buf_aTimeStamp);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1BeginSetTimeZone(THandle aHandle, const char* aTimeZone, const char* aCurrentTime, const char* aTimeStamp, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aTimeZone(aTimeZone);
    Brh buf_aCurrentTime(aCurrentTime);
    Brh buf_aTimeStamp(aTimeStamp);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetTimeZone(buf_aTimeZone, buf_aCurrentTime, buf_aTimeStamp, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRendererConfig1EndSetTimeZone(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetTimeZone(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1SetPropertyRendererConfigChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRendererConfigChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1SetPropertyResamplerConfigChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyResamplerConfigChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1SetPropertyHardwareConfigChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyHardwareConfigChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1PropertyRendererConfig(THandle aHandle, char** aRendererConfig)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aRendererConfig;
    proxyC->PropertyRendererConfig(buf_aRendererConfig);
    *aRendererConfig = buf_aRendererConfig.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1PropertyResamplerConfig(THandle aHandle, char** aResamplerConfig)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aResamplerConfig;
    proxyC->PropertyResamplerConfig(buf_aResamplerConfig);
    *aResamplerConfig = buf_aResamplerConfig.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgRendererConfig1PropertyHardwareConfig(THandle aHandle, char** aHardwareConfig)
{
    CpProxyAvOpenhomeOrgRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aHardwareConfig;
    proxyC->PropertyHardwareConfig(buf_aHardwareConfig);
    *aHardwareConfig = buf_aHardwareConfig.Transfer();
}

