#include "CpAvOpenhomeOrgWebDACConfig1.h"
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

class CpProxyAvOpenhomeOrgWebDACConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgWebDACConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgWebDACConfig1C();
    //CpProxyAvOpenhomeOrgWebDACConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgWebDACConfig1*>(iProxy); }

    void SyncGetDACConfig(Brh& aDACConfig);
    void BeginGetDACConfig(FunctorAsync& aFunctor);
    void EndGetDACConfig(IAsync& aAsync, Brh& aDACConfig);

    void SyncSetDACConfig(const Brx& aDACConfig);
    void BeginSetDACConfig(const Brx& aDACConfig, FunctorAsync& aFunctor);
    void EndSetDACConfig(IAsync& aAsync);

    void SetPropertyAliveChanged(Functor& aFunctor);
    void SetPropertyDACConfigChanged(Functor& aFunctor);
    void SetPropertyCurrentActionChanged(Functor& aFunctor);

    void PropertyAlive(TBool& aAlive) const;
    void PropertyDACConfig(Brhz& aDACConfig) const;
    void PropertyCurrentAction(TUint& aCurrentAction) const;
private:
    void AlivePropertyChanged();
    void DACConfigPropertyChanged();
    void CurrentActionPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetDACConfig;
    Action* iActionSetDACConfig;
    PropertyBool* iAlive;
    PropertyString* iDACConfig;
    PropertyUint* iCurrentAction;
    Functor iAliveChanged;
    Functor iDACConfigChanged;
    Functor iCurrentActionChanged;
};


class SyncGetDACConfigAvOpenhomeOrgWebDACConfig1C : public SyncProxyAction
{
public:
    SyncGetDACConfigAvOpenhomeOrgWebDACConfig1C(CpProxyAvOpenhomeOrgWebDACConfig1C& aProxy, Brh& aDACConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDACConfigAvOpenhomeOrgWebDACConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebDACConfig1C& iService;
    Brh& iDACConfig;
};

SyncGetDACConfigAvOpenhomeOrgWebDACConfig1C::SyncGetDACConfigAvOpenhomeOrgWebDACConfig1C(CpProxyAvOpenhomeOrgWebDACConfig1C& aProxy, Brh& aDACConfig)
    : iService(aProxy)
    , iDACConfig(aDACConfig)
{
}

void SyncGetDACConfigAvOpenhomeOrgWebDACConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACConfig(aAsync, iDACConfig);
}


class SyncSetDACConfigAvOpenhomeOrgWebDACConfig1C : public SyncProxyAction
{
public:
    SyncSetDACConfigAvOpenhomeOrgWebDACConfig1C(CpProxyAvOpenhomeOrgWebDACConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDACConfigAvOpenhomeOrgWebDACConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebDACConfig1C& iService;
};

SyncSetDACConfigAvOpenhomeOrgWebDACConfig1C::SyncSetDACConfigAvOpenhomeOrgWebDACConfig1C(CpProxyAvOpenhomeOrgWebDACConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACConfigAvOpenhomeOrgWebDACConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACConfig(aAsync);
}

CpProxyAvOpenhomeOrgWebDACConfig1C::CpProxyAvOpenhomeOrgWebDACConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "WebDACConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetDACConfig = new Action("GetDACConfig");
    param = new OpenHome::Net::ParameterString("DACConfig");
    iActionGetDACConfig->AddOutputParameter(param);

    iActionSetDACConfig = new Action("SetDACConfig");
    param = new OpenHome::Net::ParameterString("DACConfig");
    iActionSetDACConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDACConfig1C::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDACConfig1C::DACConfigPropertyChanged);
    iDACConfig = new PropertyString("DACConfig", functor);
    AddProperty(iDACConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebDACConfig1C::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgWebDACConfig1C::~CpProxyAvOpenhomeOrgWebDACConfig1C()
{
    DestroyService();
    delete iActionGetDACConfig;
    delete iActionSetDACConfig;
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::SyncGetDACConfig(Brh& aDACConfig)
{
    SyncGetDACConfigAvOpenhomeOrgWebDACConfig1C sync(*this, aDACConfig);
    BeginGetDACConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::BeginGetDACConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDACConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::EndGetDACConfig(IAsync& aAsync, Brh& aDACConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDACConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDACConfig);
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::SyncSetDACConfig(const Brx& aDACConfig)
{
    SyncSetDACConfigAvOpenhomeOrgWebDACConfig1C sync(*this);
    BeginSetDACConfig(aDACConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::BeginSetDACConfig(const Brx& aDACConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetDACConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDACConfig));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::EndSetDACConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDACConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAliveChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::SetPropertyDACConfigChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDACConfigChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCurrentActionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::PropertyDACConfig(Brhz& aDACConfig) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aDACConfig.Set(iDACConfig->Value());
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::DACConfigPropertyChanged()
{
    ReportEvent(iDACConfigChanged);
}

void CpProxyAvOpenhomeOrgWebDACConfig1C::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgWebDACConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgWebDACConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgWebDACConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDACConfig1SyncGetDACConfig(THandle aHandle, char** aDACConfig)
{
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDACConfig;
    int32_t err = 0;
    try {
        proxyC->SyncGetDACConfig(buf_aDACConfig);
        *aDACConfig = buf_aDACConfig.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aDACConfig = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebDACConfig1BeginGetDACConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDACConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDACConfig1EndGetDACConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aDACConfig)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aDACConfig;
    *aDACConfig = NULL;
    try {
        proxyC->EndGetDACConfig(*async, buf_aDACConfig);
        *aDACConfig = buf_aDACConfig.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDACConfig1SyncSetDACConfig(THandle aHandle, const char* aDACConfig)
{
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDACConfig(aDACConfig);
    int32_t err = 0;
    try {
        proxyC->SyncSetDACConfig(buf_aDACConfig);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebDACConfig1BeginSetDACConfig(THandle aHandle, const char* aDACConfig, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDACConfig(aDACConfig);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetDACConfig(buf_aDACConfig, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebDACConfig1EndSetDACConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetDACConfig(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebDACConfig1SetPropertyAliveChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAliveChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebDACConfig1SetPropertyDACConfigChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDACConfigChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebDACConfig1SetPropertyCurrentActionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCurrentActionChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebDACConfig1PropertyAlive(THandle aHandle, uint32_t* aAlive)
{
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Alive;
    proxyC->PropertyAlive(Alive);
    *aAlive = Alive? 1 : 0;
}

void STDCALL CpProxyAvOpenhomeOrgWebDACConfig1PropertyDACConfig(THandle aHandle, char** aDACConfig)
{
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aDACConfig;
    proxyC->PropertyDACConfig(buf_aDACConfig);
    *aDACConfig = buf_aDACConfig.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgWebDACConfig1PropertyCurrentAction(THandle aHandle, uint32_t* aCurrentAction)
{
    CpProxyAvOpenhomeOrgWebDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyCurrentAction(*aCurrentAction);
}

