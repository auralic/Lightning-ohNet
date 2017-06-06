#include "CpAvOpenhomeOrgWebRendererConfig1.h"
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

class CpProxyAvOpenhomeOrgWebRendererConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgWebRendererConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgWebRendererConfig1C();
    //CpProxyAvOpenhomeOrgWebRendererConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgWebRendererConfig1*>(iProxy); }

    void SyncGetRendererConfig(Brh& aRendererConfig);
    void BeginGetRendererConfig(FunctorAsync& aFunctor);
    void EndGetRendererConfig(IAsync& aAsync, Brh& aRendererConfig);

    void SyncSetRendererConfig(const Brx& aRendererConfig);
    void BeginSetRendererConfig(const Brx& aRendererConfig, FunctorAsync& aFunctor);
    void EndSetRendererConfig(IAsync& aAsync);

    void SetPropertyAliveChanged(Functor& aFunctor);
    void SetPropertyRendererConfigChanged(Functor& aFunctor);
    void SetPropertyCurrentActionChanged(Functor& aFunctor);

    void PropertyAlive(TBool& aAlive) const;
    void PropertyRendererConfig(Brhz& aRendererConfig) const;
    void PropertyCurrentAction(TUint& aCurrentAction) const;
private:
    void AlivePropertyChanged();
    void RendererConfigPropertyChanged();
    void CurrentActionPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetRendererConfig;
    Action* iActionSetRendererConfig;
    PropertyBool* iAlive;
    PropertyString* iRendererConfig;
    PropertyUint* iCurrentAction;
    Functor iAliveChanged;
    Functor iRendererConfigChanged;
    Functor iCurrentActionChanged;
};


class SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1C : public SyncProxyAction
{
public:
    SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1C(CpProxyAvOpenhomeOrgWebRendererConfig1C& aProxy, Brh& aRendererConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebRendererConfig1C& iService;
    Brh& iRendererConfig;
};

SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1C::SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1C(CpProxyAvOpenhomeOrgWebRendererConfig1C& aProxy, Brh& aRendererConfig)
    : iService(aProxy)
    , iRendererConfig(aRendererConfig)
{
}

void SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRendererConfig(aAsync, iRendererConfig);
}


class SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1C : public SyncProxyAction
{
public:
    SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1C(CpProxyAvOpenhomeOrgWebRendererConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebRendererConfig1C& iService;
};

SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1C::SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1C(CpProxyAvOpenhomeOrgWebRendererConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRendererConfig(aAsync);
}

CpProxyAvOpenhomeOrgWebRendererConfig1C::CpProxyAvOpenhomeOrgWebRendererConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "WebRendererConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetRendererConfig = new Action("GetRendererConfig");
    param = new OpenHome::Net::ParameterString("RendererConfig");
    iActionGetRendererConfig->AddOutputParameter(param);

    iActionSetRendererConfig = new Action("SetRendererConfig");
    param = new OpenHome::Net::ParameterString("RendererConfig");
    iActionSetRendererConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1C::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1C::RendererConfigPropertyChanged);
    iRendererConfig = new PropertyString("RendererConfig", functor);
    AddProperty(iRendererConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1C::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgWebRendererConfig1C::~CpProxyAvOpenhomeOrgWebRendererConfig1C()
{
    DestroyService();
    delete iActionGetRendererConfig;
    delete iActionSetRendererConfig;
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::SyncGetRendererConfig(Brh& aRendererConfig)
{
    SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1C sync(*this, aRendererConfig);
    BeginGetRendererConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::BeginGetRendererConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetRendererConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRendererConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::EndGetRendererConfig(IAsync& aAsync, Brh& aRendererConfig)
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

void CpProxyAvOpenhomeOrgWebRendererConfig1C::SyncSetRendererConfig(const Brx& aRendererConfig)
{
    SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1C sync(*this);
    BeginSetRendererConfig(aRendererConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::BeginSetRendererConfig(const Brx& aRendererConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetRendererConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRendererConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aRendererConfig));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::EndSetRendererConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgWebRendererConfig1C::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAliveChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::SetPropertyRendererConfigChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRendererConfigChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCurrentActionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::PropertyRendererConfig(Brhz& aRendererConfig) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aRendererConfig.Set(iRendererConfig->Value());
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::RendererConfigPropertyChanged()
{
    ReportEvent(iRendererConfigChanged);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1C::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgWebRendererConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1SyncGetRendererConfig(THandle aHandle, char** aRendererConfig)
{
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1BeginGetRendererConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetRendererConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1EndGetRendererConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aRendererConfig)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1SyncSetRendererConfig(THandle aHandle, const char* aRendererConfig)
{
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1BeginSetRendererConfig(THandle aHandle, const char* aRendererConfig, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aRendererConfig(aRendererConfig);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetRendererConfig(buf_aRendererConfig, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1EndSetRendererConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1SetPropertyAliveChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAliveChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1SetPropertyRendererConfigChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRendererConfigChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1SetPropertyCurrentActionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCurrentActionChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1PropertyAlive(THandle aHandle, uint32_t* aAlive)
{
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Alive;
    proxyC->PropertyAlive(Alive);
    *aAlive = Alive? 1 : 0;
}

void STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1PropertyRendererConfig(THandle aHandle, char** aRendererConfig)
{
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aRendererConfig;
    proxyC->PropertyRendererConfig(buf_aRendererConfig);
    *aRendererConfig = buf_aRendererConfig.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgWebRendererConfig1PropertyCurrentAction(THandle aHandle, uint32_t* aCurrentAction)
{
    CpProxyAvOpenhomeOrgWebRendererConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebRendererConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyCurrentAction(*aCurrentAction);
}

