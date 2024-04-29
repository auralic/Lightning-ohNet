#include "CpAvOpenhomeOrgWebDeviceConfig1.h"
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

class CpProxyAvOpenhomeOrgWebDeviceConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgWebDeviceConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgWebDeviceConfig1C();
    //CpProxyAvOpenhomeOrgWebDeviceConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1*>(iProxy); }

    void SyncGetDeviceConfig(Brh& aDeviceConfig);
    void BeginGetDeviceConfig(FunctorAsync& aFunctor);
    void EndGetDeviceConfig(IAsync& aAsync, Brh& aDeviceConfig);

    void SyncSetDeviceConfig(const Brx& aDeviceConfig);
    void BeginSetDeviceConfig(const Brx& aDeviceConfig, FunctorAsync& aFunctor);
    void EndSetDeviceConfig(IAsync& aAsync);

    void SyncGetWiFiList(Brh& aWiFiList);
    void BeginGetWiFiList(FunctorAsync& aFunctor);
    void EndGetWiFiList(IAsync& aAsync, Brh& aWiFiList);

    void SyncSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp);
    void BeginSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp, FunctorAsync& aFunctor);
    void EndSetTimeZone(IAsync& aAsync);

    void SyncGetServiceLocation(Brh& aServiceLoaction);
    void BeginGetServiceLocation(FunctorAsync& aFunctor);
    void EndGetServiceLocation(IAsync& aAsync, Brh& aServiceLoaction);

    void SetPropertyAliveChanged(Functor& aFunctor);
    void SetPropertyDeviceConfigChanged(Functor& aFunctor);
    void SetPropertyCurrentActionChanged(Functor& aFunctor);

    void PropertyAlive(TBool& aAlive) const;
    void PropertyDeviceConfig(Brhz& aDeviceConfig) const;
    void PropertyCurrentAction(TUint& aCurrentAction) const;
private:
    void AlivePropertyChanged();
    void DeviceConfigPropertyChanged();
    void CurrentActionPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetDeviceConfig;
    Action* iActionSetDeviceConfig;
    Action* iActionGetWiFiList;
    Action* iActionSetTimeZone;
    Action* iActionGetServiceLocation;
    PropertyBool* iAlive;
    PropertyString* iDeviceConfig;
    PropertyUint* iCurrentAction;
    Functor iAliveChanged;
    Functor iDeviceConfigChanged;
    Functor iCurrentActionChanged;
};


class SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C : public SyncProxyAction
{
public:
    SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C(CpProxyAvOpenhomeOrgWebDeviceConfig1C& aProxy, Brh& aDeviceConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1C& iService;
    Brh& iDeviceConfig;
};

SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C::SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C(CpProxyAvOpenhomeOrgWebDeviceConfig1C& aProxy, Brh& aDeviceConfig)
    : iService(aProxy)
    , iDeviceConfig(aDeviceConfig)
{
}

void SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceConfig(aAsync, iDeviceConfig);
}


class SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C : public SyncProxyAction
{
public:
    SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C(CpProxyAvOpenhomeOrgWebDeviceConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1C& iService;
};

SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C::SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C(CpProxyAvOpenhomeOrgWebDeviceConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDeviceConfig(aAsync);
}


class SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1C : public SyncProxyAction
{
public:
    SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1C(CpProxyAvOpenhomeOrgWebDeviceConfig1C& aProxy, Brh& aWiFiList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1C& iService;
    Brh& iWiFiList;
};

SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1C::SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1C(CpProxyAvOpenhomeOrgWebDeviceConfig1C& aProxy, Brh& aWiFiList)
    : iService(aProxy)
    , iWiFiList(aWiFiList)
{
}

void SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWiFiList(aAsync, iWiFiList);
}


class SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1C : public SyncProxyAction
{
public:
    SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1C(CpProxyAvOpenhomeOrgWebDeviceConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1C& iService;
};

SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1C::SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1C(CpProxyAvOpenhomeOrgWebDeviceConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTimeZone(aAsync);
}


class SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1C : public SyncProxyAction
{
public:
    SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1C(CpProxyAvOpenhomeOrgWebDeviceConfig1C& aProxy, Brh& aServiceLoaction);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebDeviceConfig1C& iService;
    Brh& iServiceLoaction;
};

SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1C::SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1C(CpProxyAvOpenhomeOrgWebDeviceConfig1C& aProxy, Brh& aServiceLoaction)
    : iService(aProxy)
    , iServiceLoaction(aServiceLoaction)
{
}

void SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServiceLocation(aAsync, iServiceLoaction);
}

CpProxyAvOpenhomeOrgWebDeviceConfig1C::CpProxyAvOpenhomeOrgWebDeviceConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "WebDeviceConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDeviceConfig1C::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDeviceConfig1C::DeviceConfigPropertyChanged);
    iDeviceConfig = new PropertyString("DeviceConfig", functor);
    AddProperty(iDeviceConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDeviceConfig1C::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgWebDeviceConfig1C::~CpProxyAvOpenhomeOrgWebDeviceConfig1C()
{
    DestroyService();
    delete iActionGetDeviceConfig;
    delete iActionSetDeviceConfig;
    delete iActionGetWiFiList;
    delete iActionSetTimeZone;
    delete iActionGetServiceLocation;
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::SyncGetDeviceConfig(Brh& aDeviceConfig)
{
    SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C sync(*this, aDeviceConfig);
    BeginGetDeviceConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::BeginGetDeviceConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDeviceConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::EndGetDeviceConfig(IAsync& aAsync, Brh& aDeviceConfig)
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

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::SyncSetDeviceConfig(const Brx& aDeviceConfig)
{
    SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1C sync(*this);
    BeginSetDeviceConfig(aDeviceConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::BeginSetDeviceConfig(const Brx& aDeviceConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetDeviceConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDeviceConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceConfig));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::EndSetDeviceConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::SyncGetWiFiList(Brh& aWiFiList)
{
    SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1C sync(*this, aWiFiList);
    BeginGetWiFiList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::BeginGetWiFiList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetWiFiList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWiFiList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::EndGetWiFiList(IAsync& aAsync, Brh& aWiFiList)
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

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::SyncSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp)
{
    SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1C sync(*this);
    BeginSetTimeZone(aTimeZone, aCurrentTime, aTimeStamp, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::BeginSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetTimeZone, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTimeZone->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTimeZone));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCurrentTime));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTimeStamp));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::EndSetTimeZone(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::SyncGetServiceLocation(Brh& aServiceLoaction)
{
    SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1C sync(*this, aServiceLoaction);
    BeginGetServiceLocation(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::BeginGetServiceLocation(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetServiceLocation, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServiceLocation->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::EndGetServiceLocation(IAsync& aAsync, Brh& aServiceLoaction)
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

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAliveChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::SetPropertyDeviceConfigChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceConfigChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCurrentActionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::PropertyDeviceConfig(Brhz& aDeviceConfig) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDeviceConfig.Set(iDeviceConfig->Value());
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::DeviceConfigPropertyChanged()
{
    ReportEvent(iDeviceConfigChanged);
}

void CpProxyAvOpenhomeOrgWebDeviceConfig1C::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgWebDeviceConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1SyncGetDeviceConfig(THandle aHandle, char** aDeviceConfig)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceConfig;
    int32_t err = 0;
    try {
        proxyC->SyncGetDeviceConfig(buf_aDeviceConfig);
        *aDeviceConfig = buf_aDeviceConfig.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aDeviceConfig = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1BeginGetDeviceConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDeviceConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1EndGetDeviceConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aDeviceConfig)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aDeviceConfig;
    *aDeviceConfig = NULL;
    try {
        proxyC->EndGetDeviceConfig(*async, buf_aDeviceConfig);
        *aDeviceConfig = buf_aDeviceConfig.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1SyncSetDeviceConfig(THandle aHandle, const char* aDeviceConfig)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceConfig(aDeviceConfig);
    int32_t err = 0;
    try {
        proxyC->SyncSetDeviceConfig(buf_aDeviceConfig);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1BeginSetDeviceConfig(THandle aHandle, const char* aDeviceConfig, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceConfig(aDeviceConfig);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetDeviceConfig(buf_aDeviceConfig, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1EndSetDeviceConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetDeviceConfig(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1SyncGetWiFiList(THandle aHandle, char** aWiFiList)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1BeginGetWiFiList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetWiFiList(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1EndGetWiFiList(THandle aHandle, OhNetHandleAsync aAsync, char** aWiFiList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1SyncSetTimeZone(THandle aHandle, const char* aTimeZone, const char* aCurrentTime, const char* aTimeStamp)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1BeginSetTimeZone(THandle aHandle, const char* aTimeZone, const char* aCurrentTime, const char* aTimeStamp, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aTimeZone(aTimeZone);
    Brh buf_aCurrentTime(aCurrentTime);
    Brh buf_aTimeStamp(aTimeStamp);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetTimeZone(buf_aTimeZone, buf_aCurrentTime, buf_aTimeStamp, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1EndSetTimeZone(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1SyncGetServiceLocation(THandle aHandle, char** aServiceLoaction)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceLoaction;
    int32_t err = 0;
    try {
        proxyC->SyncGetServiceLocation(buf_aServiceLoaction);
        *aServiceLoaction = buf_aServiceLoaction.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aServiceLoaction = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1BeginGetServiceLocation(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetServiceLocation(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1EndGetServiceLocation(THandle aHandle, OhNetHandleAsync aAsync, char** aServiceLoaction)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aServiceLoaction;
    *aServiceLoaction = NULL;
    try {
        proxyC->EndGetServiceLocation(*async, buf_aServiceLoaction);
        *aServiceLoaction = buf_aServiceLoaction.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1SetPropertyAliveChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAliveChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1SetPropertyDeviceConfigChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceConfigChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1SetPropertyCurrentActionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCurrentActionChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1PropertyAlive(THandle aHandle, uint32_t* aAlive)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Alive;
    try {
        proxyC->PropertyAlive(Alive);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aAlive = Alive? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1PropertyDeviceConfig(THandle aHandle, char** aDeviceConfig)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aDeviceConfig;
    try {
        proxyC->PropertyDeviceConfig(buf_aDeviceConfig);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aDeviceConfig = buf_aDeviceConfig.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDeviceConfig1PropertyCurrentAction(THandle aHandle, uint32_t* aCurrentAction)
{
    CpProxyAvOpenhomeOrgWebDeviceConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDeviceConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyCurrentAction(*aCurrentAction);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

