#include "CpAvOpenhomeOrgTestResamplerConfig1.h"
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

class CpProxyAvOpenhomeOrgTestResamplerConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgTestResamplerConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgTestResamplerConfig1C();
    //CpProxyAvOpenhomeOrgTestResamplerConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1*>(iProxy); }

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


class SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1C& iService;
};

SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C::SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}


class SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy, Brh& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1C& iService;
    Brh& iResamplerConfig;
};

SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C::SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy, Brh& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}


class SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C : public SyncProxyAction
{
public:
    SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1C& iService;
};

SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C::SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPCMAutoDetect(aAsync);
}


class SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C : public SyncProxyAction
{
public:
    SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy, TBool& aPCMAutoDetect);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1C& iService;
    TBool& iPCMAutoDetect;
};

SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C::SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy, TBool& aPCMAutoDetect)
    : iService(aProxy)
    , iPCMAutoDetect(aPCMAutoDetect)
{
}

void SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPCMAutoDetect(aAsync, iPCMAutoDetect);
}


class SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C : public SyncProxyAction
{
public:
    SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1C& iService;
};

SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C::SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDSDtoPCM(aAsync);
}


class SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C : public SyncProxyAction
{
public:
    SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy, TBool& aDSDtoPCM);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1C& iService;
    TBool& iDSDtoPCM;
};

SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C::SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C(CpProxyAvOpenhomeOrgTestResamplerConfig1C& aProxy, TBool& aDSDtoPCM)
    : iService(aProxy)
    , iDSDtoPCM(aDSDtoPCM)
{
}

void SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDSDtoPCM(aAsync, iDSDtoPCM);
}

CpProxyAvOpenhomeOrgTestResamplerConfig1C::CpProxyAvOpenhomeOrgTestResamplerConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "TestResamplerConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTestResamplerConfig1C::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgTestResamplerConfig1C::~CpProxyAvOpenhomeOrgTestResamplerConfig1C()
{
    DestroyService();
    delete iActionSetResamplerConfig;
    delete iActionGetResamplerConfig;
    delete iActionSetPCMAutoDetect;
    delete iActionGetPCMAutoDetect;
    delete iActionSetDSDtoPCM;
    delete iActionGetDSDtoPCM;
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::SyncSetResamplerConfig(const Brx& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetResamplerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetResamplerConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aResamplerConfig));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::EndSetResamplerConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::SyncGetResamplerConfig(Brh& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1C sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::SyncSetPCMAutoDetect(TBool aPCMAutoDetect)
{
    SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C sync(*this);
    BeginSetPCMAutoDetect(aPCMAutoDetect, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::BeginSetPCMAutoDetect(TBool aPCMAutoDetect, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetPCMAutoDetect, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPCMAutoDetect->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPCMAutoDetect));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::EndSetPCMAutoDetect(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::SyncGetPCMAutoDetect(TBool& aPCMAutoDetect)
{
    SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1C sync(*this, aPCMAutoDetect);
    BeginGetPCMAutoDetect(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::BeginGetPCMAutoDetect(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetPCMAutoDetect, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPCMAutoDetect->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::EndGetPCMAutoDetect(IAsync& aAsync, TBool& aPCMAutoDetect)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::SyncSetDSDtoPCM(TBool aDSDtoPCM)
{
    SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C sync(*this);
    BeginSetDSDtoPCM(aDSDtoPCM, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::BeginSetDSDtoPCM(TBool aDSDtoPCM, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetDSDtoPCM, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDSDtoPCM->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aDSDtoPCM));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::EndSetDSDtoPCM(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::SyncGetDSDtoPCM(TBool& aDSDtoPCM)
{
    SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1C sync(*this, aDSDtoPCM);
    BeginGetDSDtoPCM(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::BeginGetDSDtoPCM(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDSDtoPCM, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDSDtoPCM->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::EndGetDSDtoPCM(IAsync& aAsync, TBool& aDSDtoPCM)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCurrentActionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1C::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgTestResamplerConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1SyncSetResamplerConfig(THandle aHandle, const char* aResamplerConfig)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1BeginSetResamplerConfig(THandle aHandle, const char* aResamplerConfig, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aResamplerConfig(aResamplerConfig);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetResamplerConfig(buf_aResamplerConfig, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1EndSetResamplerConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1SyncGetResamplerConfig(THandle aHandle, char** aResamplerConfig)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1BeginGetResamplerConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetResamplerConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1EndGetResamplerConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aResamplerConfig)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1SyncSetPCMAutoDetect(THandle aHandle, uint32_t aPCMAutoDetect)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1BeginSetPCMAutoDetect(THandle aHandle, uint32_t aPCMAutoDetect, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetPCMAutoDetect((aPCMAutoDetect==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1EndSetPCMAutoDetect(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1SyncGetPCMAutoDetect(THandle aHandle, uint32_t* aPCMAutoDetect)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1BeginGetPCMAutoDetect(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetPCMAutoDetect(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1EndGetPCMAutoDetect(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aPCMAutoDetect)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1SyncSetDSDtoPCM(THandle aHandle, uint32_t aDSDtoPCM)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1BeginSetDSDtoPCM(THandle aHandle, uint32_t aDSDtoPCM, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetDSDtoPCM((aDSDtoPCM==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1EndSetDSDtoPCM(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1SyncGetDSDtoPCM(THandle aHandle, uint32_t* aDSDtoPCM)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1BeginGetDSDtoPCM(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDSDtoPCM(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1EndGetDSDtoPCM(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aDSDtoPCM)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1SetPropertyCurrentActionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCurrentActionChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTestResamplerConfig1PropertyCurrentAction(THandle aHandle, uint32_t* aCurrentAction)
{
    CpProxyAvOpenhomeOrgTestResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTestResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyCurrentAction(*aCurrentAction);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

