#include "CpAvOpenhomeOrgWebProcessorConfig1.h"
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

class CpProxyAvOpenhomeOrgWebProcessorConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgWebProcessorConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgWebProcessorConfig1C();
    //CpProxyAvOpenhomeOrgWebProcessorConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1*>(iProxy); }

    void SyncGetProcessorConfig(Brh& aProcessorConfig);
    void BeginGetProcessorConfig(FunctorAsync& aFunctor);
    void EndGetProcessorConfig(IAsync& aAsync, Brh& aProcessorConfig);

    void SyncSetProcessorConfig(const Brx& aProcessorConfig);
    void BeginSetProcessorConfig(const Brx& aProcessorConfig, FunctorAsync& aFunctor);
    void EndSetProcessorConfig(IAsync& aAsync);

    void SetPropertyAliveChanged(Functor& aFunctor);
    void SetPropertyProcessorConfigChanged(Functor& aFunctor);

    void PropertyAlive(TBool& aAlive) const;
    void PropertyProcessorConfig(Brhz& aProcessorConfig) const;
private:
    void AlivePropertyChanged();
    void ProcessorConfigPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetProcessorConfig;
    Action* iActionSetProcessorConfig;
    PropertyBool* iAlive;
    PropertyString* iProcessorConfig;
    Functor iAliveChanged;
    Functor iProcessorConfigChanged;
};


class SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C : public SyncProxyAction
{
public:
    SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C(CpProxyAvOpenhomeOrgWebProcessorConfig1C& aProxy, Brh& aProcessorConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebProcessorConfig1C& iService;
    Brh& iProcessorConfig;
};

SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C::SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C(CpProxyAvOpenhomeOrgWebProcessorConfig1C& aProxy, Brh& aProcessorConfig)
    : iService(aProxy)
    , iProcessorConfig(aProcessorConfig)
{
}

void SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetProcessorConfig(aAsync, iProcessorConfig);
}


class SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C : public SyncProxyAction
{
public:
    SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C(CpProxyAvOpenhomeOrgWebProcessorConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebProcessorConfig1C& iService;
};

SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C::SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C(CpProxyAvOpenhomeOrgWebProcessorConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetProcessorConfig(aAsync);
}

CpProxyAvOpenhomeOrgWebProcessorConfig1C::CpProxyAvOpenhomeOrgWebProcessorConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "WebProcessorConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetProcessorConfig = new Action("GetProcessorConfig");
    param = new OpenHome::Net::ParameterString("ProcessorConfig");
    iActionGetProcessorConfig->AddOutputParameter(param);

    iActionSetProcessorConfig = new Action("SetProcessorConfig");
    param = new OpenHome::Net::ParameterString("ProcessorConfig");
    iActionSetProcessorConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebProcessorConfig1C::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebProcessorConfig1C::ProcessorConfigPropertyChanged);
    iProcessorConfig = new PropertyString("ProcessorConfig", functor);
    AddProperty(iProcessorConfig);
}

CpProxyAvOpenhomeOrgWebProcessorConfig1C::~CpProxyAvOpenhomeOrgWebProcessorConfig1C()
{
    DestroyService();
    delete iActionGetProcessorConfig;
    delete iActionSetProcessorConfig;
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::SyncGetProcessorConfig(Brh& aProcessorConfig)
{
    SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C sync(*this, aProcessorConfig);
    BeginGetProcessorConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::BeginGetProcessorConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetProcessorConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetProcessorConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::EndGetProcessorConfig(IAsync& aAsync, Brh& aProcessorConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetProcessorConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aProcessorConfig);
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::SyncSetProcessorConfig(const Brx& aProcessorConfig)
{
    SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1C sync(*this);
    BeginSetProcessorConfig(aProcessorConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::BeginSetProcessorConfig(const Brx& aProcessorConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetProcessorConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetProcessorConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aProcessorConfig));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::EndSetProcessorConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetProcessorConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAliveChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::SetPropertyProcessorConfigChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProcessorConfigChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::PropertyProcessorConfig(Brhz& aProcessorConfig) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aProcessorConfig.Set(iProcessorConfig->Value());
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1C::ProcessorConfigPropertyChanged()
{
    ReportEvent(iProcessorConfigChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgWebProcessorConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgWebProcessorConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1SyncGetProcessorConfig(THandle aHandle, char** aProcessorConfig)
{
    CpProxyAvOpenhomeOrgWebProcessorConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aProcessorConfig;
    int32_t err = 0;
    try {
        proxyC->SyncGetProcessorConfig(buf_aProcessorConfig);
        *aProcessorConfig = buf_aProcessorConfig.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aProcessorConfig = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1BeginGetProcessorConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebProcessorConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetProcessorConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1EndGetProcessorConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aProcessorConfig)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebProcessorConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aProcessorConfig;
    *aProcessorConfig = NULL;
    try {
        proxyC->EndGetProcessorConfig(*async, buf_aProcessorConfig);
        *aProcessorConfig = buf_aProcessorConfig.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1SyncSetProcessorConfig(THandle aHandle, const char* aProcessorConfig)
{
    CpProxyAvOpenhomeOrgWebProcessorConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aProcessorConfig(aProcessorConfig);
    int32_t err = 0;
    try {
        proxyC->SyncSetProcessorConfig(buf_aProcessorConfig);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1BeginSetProcessorConfig(THandle aHandle, const char* aProcessorConfig, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebProcessorConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aProcessorConfig(aProcessorConfig);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetProcessorConfig(buf_aProcessorConfig, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1EndSetProcessorConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebProcessorConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetProcessorConfig(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1SetPropertyAliveChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebProcessorConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAliveChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1SetPropertyProcessorConfigChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebProcessorConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProcessorConfigChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1PropertyAlive(THandle aHandle, uint32_t* aAlive)
{
    CpProxyAvOpenhomeOrgWebProcessorConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Alive;
    proxyC->PropertyAlive(Alive);
    *aAlive = Alive? 1 : 0;
}

void STDCALL CpProxyAvOpenhomeOrgWebProcessorConfig1PropertyProcessorConfig(THandle aHandle, char** aProcessorConfig)
{
    CpProxyAvOpenhomeOrgWebProcessorConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebProcessorConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProcessorConfig;
    proxyC->PropertyProcessorConfig(buf_aProcessorConfig);
    *aProcessorConfig = buf_aProcessorConfig.Transfer();
}

