#include "CpAvOpenhomeOrgResamplerConfig1.h"
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

class CpProxyAvOpenhomeOrgResamplerConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgResamplerConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgResamplerConfig1C();
    //CpProxyAvOpenhomeOrgResamplerConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgResamplerConfig1*>(iProxy); }

    void SyncSetResamplerConfig(const Brx& aResamplerConfig);
    void BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor);
    void EndSetResamplerConfig(IAsync& aAsync);

    void SyncGetResamplerConfig(Brh& aResamplerConfig);
    void BeginGetResamplerConfig(FunctorAsync& aFunctor);
    void EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig);

    void SyncSetPCMAutoDetect(TBool aPCMAutoDetect);
    void BeginSetPCMAutoDetect(TBool aPCMAutoDetect, FunctorAsync& aFunctor);
    void EndSetPCMAutoDetect(IAsync& aAsync);

    void SyncGetPCMAutoDetect(TBool& aPCMAutoDetect);
    void BeginGetPCMAutoDetect(FunctorAsync& aFunctor);
    void EndGetPCMAutoDetect(IAsync& aAsync, TBool& aPCMAutoDetect);

    void SyncSetDSDtoPCM(TBool aDSDtoPCM);
    void BeginSetDSDtoPCM(TBool aDSDtoPCM, FunctorAsync& aFunctor);
    void EndSetDSDtoPCM(IAsync& aAsync);

    void SyncGetDSDtoPCM(TBool& aDSDtoPCM);
    void BeginGetDSDtoPCM(FunctorAsync& aFunctor);
    void EndGetDSDtoPCM(IAsync& aAsync, TBool& aDSDtoPCM);

    void SetPropertyCurrentActionChanged(Functor& aFunctor);

    void PropertyCurrentAction(TUint& aCurrentAction) const;
private:
    void CurrentActionPropertyChanged();
private:
    Mutex iLock;
    Action* iActionSetResamplerConfig;
    Action* iActionGetResamplerConfig;
    Action* iActionSetPCMAutoDetect;
    Action* iActionGetPCMAutoDetect;
    Action* iActionSetDSDtoPCM;
    Action* iActionGetDSDtoPCM;
    PropertyUint* iCurrentAction;
    Functor iCurrentActionChanged;
};


class SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1C : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgResamplerConfig1C& iService;
};

SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1C::SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}


class SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1C : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy, Brh& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgResamplerConfig1C& iService;
    Brh& iResamplerConfig;
};

SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1C::SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy, Brh& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}


class SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C : public SyncProxyAction
{
public:
    SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgResamplerConfig1C& iService;
};

SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C::SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPCMAutoDetect(aAsync);
}


class SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C : public SyncProxyAction
{
public:
    SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy, TBool& aPCMAutoDetect);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgResamplerConfig1C& iService;
    TBool& iPCMAutoDetect;
};

SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C::SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy, TBool& aPCMAutoDetect)
    : iService(aProxy)
    , iPCMAutoDetect(aPCMAutoDetect)
{
}

void SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPCMAutoDetect(aAsync, iPCMAutoDetect);
}


class SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1C : public SyncProxyAction
{
public:
    SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgResamplerConfig1C& iService;
};

SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1C::SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDSDtoPCM(aAsync);
}


class SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1C : public SyncProxyAction
{
public:
    SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy, TBool& aDSDtoPCM);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgResamplerConfig1C& iService;
    TBool& iDSDtoPCM;
};

SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1C::SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1C(CpProxyAvOpenhomeOrgResamplerConfig1C& aProxy, TBool& aDSDtoPCM)
    : iService(aProxy)
    , iDSDtoPCM(aDSDtoPCM)
{
}

void SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDSDtoPCM(aAsync, iDSDtoPCM);
}

CpProxyAvOpenhomeOrgResamplerConfig1C::CpProxyAvOpenhomeOrgResamplerConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "ResamplerConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionSetResamplerConfig = new Action("SetResamplerConfig");
    param = new OpenHome::Net::ParameterString("ResamplerConfig");
    iActionSetResamplerConfig->AddInputParameter(param);

    iActionGetResamplerConfig = new Action("GetResamplerConfig");
    param = new OpenHome::Net::ParameterString("ResamplerConfig");
    iActionGetResamplerConfig->AddOutputParameter(param);

    iActionSetPCMAutoDetect = new Action("SetPCMAutoDetect");
    param = new OpenHome::Net::ParameterBool("PCMAutoDetect");
    iActionSetPCMAutoDetect->AddInputParameter(param);

    iActionGetPCMAutoDetect = new Action("GetPCMAutoDetect");
    param = new OpenHome::Net::ParameterBool("PCMAutoDetect");
    iActionGetPCMAutoDetect->AddOutputParameter(param);

    iActionSetDSDtoPCM = new Action("SetDSDtoPCM");
    param = new OpenHome::Net::ParameterBool("DSDtoPCM");
    iActionSetDSDtoPCM->AddInputParameter(param);

    iActionGetDSDtoPCM = new Action("GetDSDtoPCM");
    param = new OpenHome::Net::ParameterBool("DSDtoPCM");
    iActionGetDSDtoPCM->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgResamplerConfig1C::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgResamplerConfig1C::~CpProxyAvOpenhomeOrgResamplerConfig1C()
{
    DestroyService();
    delete iActionSetResamplerConfig;
    delete iActionGetResamplerConfig;
    delete iActionSetPCMAutoDetect;
    delete iActionGetPCMAutoDetect;
    delete iActionSetDSDtoPCM;
    delete iActionGetDSDtoPCM;
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::SyncSetResamplerConfig(const Brx& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1C sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetResamplerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetResamplerConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aResamplerConfig));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::EndSetResamplerConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgResamplerConfig1C::SyncGetResamplerConfig(Brh& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1C sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig)
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

void CpProxyAvOpenhomeOrgResamplerConfig1C::SyncSetPCMAutoDetect(TBool aPCMAutoDetect)
{
    SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C sync(*this);
    BeginSetPCMAutoDetect(aPCMAutoDetect, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::BeginSetPCMAutoDetect(TBool aPCMAutoDetect, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetPCMAutoDetect, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPCMAutoDetect->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPCMAutoDetect));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::EndSetPCMAutoDetect(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetPCMAutoDetect"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::SyncGetPCMAutoDetect(TBool& aPCMAutoDetect)
{
    SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1C sync(*this, aPCMAutoDetect);
    BeginGetPCMAutoDetect(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::BeginGetPCMAutoDetect(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetPCMAutoDetect, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPCMAutoDetect->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::EndGetPCMAutoDetect(IAsync& aAsync, TBool& aPCMAutoDetect)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPCMAutoDetect"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aPCMAutoDetect = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::SyncSetDSDtoPCM(TBool aDSDtoPCM)
{
    SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1C sync(*this);
    BeginSetDSDtoPCM(aDSDtoPCM, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::BeginSetDSDtoPCM(TBool aDSDtoPCM, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetDSDtoPCM, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDSDtoPCM->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aDSDtoPCM));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::EndSetDSDtoPCM(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDSDtoPCM"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::SyncGetDSDtoPCM(TBool& aDSDtoPCM)
{
    SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1C sync(*this, aDSDtoPCM);
    BeginGetDSDtoPCM(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::BeginGetDSDtoPCM(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDSDtoPCM, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDSDtoPCM->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::EndGetDSDtoPCM(IAsync& aAsync, TBool& aDSDtoPCM)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDSDtoPCM"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aDSDtoPCM = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCurrentActionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgResamplerConfig1C::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgResamplerConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgResamplerConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgResamplerConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1SyncSetResamplerConfig(THandle aHandle, const char* aResamplerConfig)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgResamplerConfig1BeginSetResamplerConfig(THandle aHandle, const char* aResamplerConfig, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aResamplerConfig(aResamplerConfig);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetResamplerConfig(buf_aResamplerConfig, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1EndSetResamplerConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1SyncGetResamplerConfig(THandle aHandle, char** aResamplerConfig)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgResamplerConfig1BeginGetResamplerConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetResamplerConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1EndGetResamplerConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aResamplerConfig)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1SyncSetPCMAutoDetect(THandle aHandle, uint32_t aPCMAutoDetect)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetPCMAutoDetect((aPCMAutoDetect==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgResamplerConfig1BeginSetPCMAutoDetect(THandle aHandle, uint32_t aPCMAutoDetect, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetPCMAutoDetect((aPCMAutoDetect==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1EndSetPCMAutoDetect(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetPCMAutoDetect(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1SyncGetPCMAutoDetect(THandle aHandle, uint32_t* aPCMAutoDetect)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool PCMAutoDetect;
    int32_t err = 0;
    try {
        proxyC->SyncGetPCMAutoDetect(PCMAutoDetect);
        *aPCMAutoDetect = PCMAutoDetect? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aPCMAutoDetect = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgResamplerConfig1BeginGetPCMAutoDetect(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetPCMAutoDetect(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1EndGetPCMAutoDetect(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aPCMAutoDetect)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool PCMAutoDetect;
    try {
        proxyC->EndGetPCMAutoDetect(*async, PCMAutoDetect);
        *aPCMAutoDetect = PCMAutoDetect? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1SyncSetDSDtoPCM(THandle aHandle, uint32_t aDSDtoPCM)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetDSDtoPCM((aDSDtoPCM==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgResamplerConfig1BeginSetDSDtoPCM(THandle aHandle, uint32_t aDSDtoPCM, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetDSDtoPCM((aDSDtoPCM==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1EndSetDSDtoPCM(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetDSDtoPCM(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1SyncGetDSDtoPCM(THandle aHandle, uint32_t* aDSDtoPCM)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool DSDtoPCM;
    int32_t err = 0;
    try {
        proxyC->SyncGetDSDtoPCM(DSDtoPCM);
        *aDSDtoPCM = DSDtoPCM? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aDSDtoPCM = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgResamplerConfig1BeginGetDSDtoPCM(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDSDtoPCM(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgResamplerConfig1EndGetDSDtoPCM(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aDSDtoPCM)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool DSDtoPCM;
    try {
        proxyC->EndGetDSDtoPCM(*async, DSDtoPCM);
        *aDSDtoPCM = DSDtoPCM? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgResamplerConfig1SetPropertyCurrentActionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCurrentActionChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgResamplerConfig1PropertyCurrentAction(THandle aHandle, uint32_t* aCurrentAction)
{
    CpProxyAvOpenhomeOrgResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyCurrentAction(*aCurrentAction);
}

