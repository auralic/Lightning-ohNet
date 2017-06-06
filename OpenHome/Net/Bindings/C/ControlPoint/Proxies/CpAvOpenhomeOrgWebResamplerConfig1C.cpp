#include "CpAvOpenhomeOrgWebResamplerConfig1.h"
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

class CpProxyAvOpenhomeOrgWebResamplerConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgWebResamplerConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgWebResamplerConfig1C();
    //CpProxyAvOpenhomeOrgWebResamplerConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgWebResamplerConfig1*>(iProxy); }

    void SyncGetResamplerConfig(Brh& aResamplerConfig);
    void BeginGetResamplerConfig(FunctorAsync& aFunctor);
    void EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig);

    void SyncSetResamplerConfig(const Brx& aResamplerConfig);
    void BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor);
    void EndSetResamplerConfig(IAsync& aAsync);

    void SetPropertyResamplerConfigChanged(Functor& aFunctor);

    void PropertyResamplerConfig(Brhz& aResamplerConfig) const;
private:
    void ResamplerConfigPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetResamplerConfig;
    Action* iActionSetResamplerConfig;
    PropertyString* iResamplerConfig;
    Functor iResamplerConfigChanged;
};


class SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C(CpProxyAvOpenhomeOrgWebResamplerConfig1C& aProxy, Brh& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebResamplerConfig1C& iService;
    Brh& iResamplerConfig;
};

SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C::SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C(CpProxyAvOpenhomeOrgWebResamplerConfig1C& aProxy, Brh& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}


class SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C(CpProxyAvOpenhomeOrgWebResamplerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebResamplerConfig1C& iService;
};

SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C::SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C(CpProxyAvOpenhomeOrgWebResamplerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}

CpProxyAvOpenhomeOrgWebResamplerConfig1C::CpProxyAvOpenhomeOrgWebResamplerConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "WebResamplerConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetResamplerConfig = new Action("GetResamplerConfig");
    param = new OpenHome::Net::ParameterString("ResamplerConfig");
    iActionGetResamplerConfig->AddOutputParameter(param);

    iActionSetResamplerConfig = new Action("SetResamplerConfig");
    param = new OpenHome::Net::ParameterString("ResamplerConfig");
    iActionSetResamplerConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebResamplerConfig1C::ResamplerConfigPropertyChanged);
    iResamplerConfig = new PropertyString("ResamplerConfig", functor);
    AddProperty(iResamplerConfig);
}

CpProxyAvOpenhomeOrgWebResamplerConfig1C::~CpProxyAvOpenhomeOrgWebResamplerConfig1C()
{
    DestroyService();
    delete iActionGetResamplerConfig;
    delete iActionSetResamplerConfig;
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1C::SyncGetResamplerConfig(Brh& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1C::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1C::EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig)
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

void CpProxyAvOpenhomeOrgWebResamplerConfig1C::SyncSetResamplerConfig(const Brx& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1C sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1C::BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetResamplerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetResamplerConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aResamplerConfig));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1C::EndSetResamplerConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgWebResamplerConfig1C::SetPropertyResamplerConfigChanged(Functor& aFunctor)
{
    iLock.Wait();
    iResamplerConfigChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1C::PropertyResamplerConfig(Brhz& aResamplerConfig) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aResamplerConfig.Set(iResamplerConfig->Value());
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1C::ResamplerConfigPropertyChanged()
{
    ReportEvent(iResamplerConfigChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgWebResamplerConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgWebResamplerConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgWebResamplerConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgWebResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebResamplerConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebResamplerConfig1SyncGetResamplerConfig(THandle aHandle, char** aResamplerConfig)
{
    CpProxyAvOpenhomeOrgWebResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgWebResamplerConfig1BeginGetResamplerConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetResamplerConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebResamplerConfig1EndGetResamplerConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aResamplerConfig)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebResamplerConfig1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgWebResamplerConfig1SyncSetResamplerConfig(THandle aHandle, const char* aResamplerConfig)
{
    CpProxyAvOpenhomeOrgWebResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgWebResamplerConfig1BeginSetResamplerConfig(THandle aHandle, const char* aResamplerConfig, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aResamplerConfig(aResamplerConfig);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetResamplerConfig(buf_aResamplerConfig, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebResamplerConfig1EndSetResamplerConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebResamplerConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgWebResamplerConfig1SetPropertyResamplerConfigChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyResamplerConfigChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebResamplerConfig1PropertyResamplerConfig(THandle aHandle, char** aResamplerConfig)
{
    CpProxyAvOpenhomeOrgWebResamplerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebResamplerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aResamplerConfig;
    proxyC->PropertyResamplerConfig(buf_aResamplerConfig);
    *aResamplerConfig = buf_aResamplerConfig.Transfer();
}

