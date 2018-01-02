#include "CpAvOpenhomeOrgWebClockConfig1.h"
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

class CpProxyAvOpenhomeOrgWebClockConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgWebClockConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgWebClockConfig1C();
    //CpProxyAvOpenhomeOrgWebClockConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgWebClockConfig1*>(iProxy); }

    void SyncGetClockConfig(Brh& aClockConfig);
    void BeginGetClockConfig(FunctorAsync& aFunctor);
    void EndGetClockConfig(IAsync& aAsync, Brh& aClockConfig);

    void SyncSetClockConfig(const Brx& aClockConfig);
    void BeginSetClockConfig(const Brx& aClockConfig, FunctorAsync& aFunctor);
    void EndSetClockConfig(IAsync& aAsync);

    void SetPropertyAliveChanged(Functor& aFunctor);
    void SetPropertyClockConfigChanged(Functor& aFunctor);

    void PropertyAlive(TBool& aAlive) const;
    void PropertyClockConfig(Brhz& aClockConfig) const;
private:
    void AlivePropertyChanged();
    void ClockConfigPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetClockConfig;
    Action* iActionSetClockConfig;
    PropertyBool* iAlive;
    PropertyString* iClockConfig;
    Functor iAliveChanged;
    Functor iClockConfigChanged;
};


class SyncGetClockConfigAvOpenhomeOrgWebClockConfig1C : public SyncProxyAction
{
public:
    SyncGetClockConfigAvOpenhomeOrgWebClockConfig1C(CpProxyAvOpenhomeOrgWebClockConfig1C& aProxy, Brh& aClockConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetClockConfigAvOpenhomeOrgWebClockConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebClockConfig1C& iService;
    Brh& iClockConfig;
};

SyncGetClockConfigAvOpenhomeOrgWebClockConfig1C::SyncGetClockConfigAvOpenhomeOrgWebClockConfig1C(CpProxyAvOpenhomeOrgWebClockConfig1C& aProxy, Brh& aClockConfig)
    : iService(aProxy)
    , iClockConfig(aClockConfig)
{
}

void SyncGetClockConfigAvOpenhomeOrgWebClockConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetClockConfig(aAsync, iClockConfig);
}


class SyncSetClockConfigAvOpenhomeOrgWebClockConfig1C : public SyncProxyAction
{
public:
    SyncSetClockConfigAvOpenhomeOrgWebClockConfig1C(CpProxyAvOpenhomeOrgWebClockConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetClockConfigAvOpenhomeOrgWebClockConfig1C() {};
private:
    CpProxyAvOpenhomeOrgWebClockConfig1C& iService;
};

SyncSetClockConfigAvOpenhomeOrgWebClockConfig1C::SyncSetClockConfigAvOpenhomeOrgWebClockConfig1C(CpProxyAvOpenhomeOrgWebClockConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetClockConfigAvOpenhomeOrgWebClockConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetClockConfig(aAsync);
}

CpProxyAvOpenhomeOrgWebClockConfig1C::CpProxyAvOpenhomeOrgWebClockConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "WebClockConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetClockConfig = new Action("GetClockConfig");
    param = new OpenHome::Net::ParameterString("ClockConfig");
    iActionGetClockConfig->AddOutputParameter(param);

    iActionSetClockConfig = new Action("SetClockConfig");
    param = new OpenHome::Net::ParameterString("ClockConfig");
    iActionSetClockConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebClockConfig1C::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebClockConfig1C::ClockConfigPropertyChanged);
    iClockConfig = new PropertyString("ClockConfig", functor);
    AddProperty(iClockConfig);
}

CpProxyAvOpenhomeOrgWebClockConfig1C::~CpProxyAvOpenhomeOrgWebClockConfig1C()
{
    DestroyService();
    delete iActionGetClockConfig;
    delete iActionSetClockConfig;
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::SyncGetClockConfig(Brh& aClockConfig)
{
    SyncGetClockConfigAvOpenhomeOrgWebClockConfig1C sync(*this, aClockConfig);
    BeginGetClockConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::BeginGetClockConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetClockConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetClockConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::EndGetClockConfig(IAsync& aAsync, Brh& aClockConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetClockConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aClockConfig);
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::SyncSetClockConfig(const Brx& aClockConfig)
{
    SyncSetClockConfigAvOpenhomeOrgWebClockConfig1C sync(*this);
    BeginSetClockConfig(aClockConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::BeginSetClockConfig(const Brx& aClockConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetClockConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetClockConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aClockConfig));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::EndSetClockConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetClockConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAliveChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::SetPropertyClockConfigChanged(Functor& aFunctor)
{
    iLock.Wait();
    iClockConfigChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::PropertyClockConfig(Brhz& aClockConfig) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aClockConfig.Set(iClockConfig->Value());
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebClockConfig1C::ClockConfigPropertyChanged()
{
    ReportEvent(iClockConfigChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgWebClockConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgWebClockConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgWebClockConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgWebClockConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebClockConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebClockConfig1SyncGetClockConfig(THandle aHandle, char** aClockConfig)
{
    CpProxyAvOpenhomeOrgWebClockConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebClockConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aClockConfig;
    int32_t err = 0;
    try {
        proxyC->SyncGetClockConfig(buf_aClockConfig);
        *aClockConfig = buf_aClockConfig.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aClockConfig = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebClockConfig1BeginGetClockConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebClockConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebClockConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetClockConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebClockConfig1EndGetClockConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aClockConfig)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebClockConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebClockConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aClockConfig;
    *aClockConfig = NULL;
    try {
        proxyC->EndGetClockConfig(*async, buf_aClockConfig);
        *aClockConfig = buf_aClockConfig.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebClockConfig1SyncSetClockConfig(THandle aHandle, const char* aClockConfig)
{
    CpProxyAvOpenhomeOrgWebClockConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebClockConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aClockConfig(aClockConfig);
    int32_t err = 0;
    try {
        proxyC->SyncSetClockConfig(buf_aClockConfig);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebClockConfig1BeginSetClockConfig(THandle aHandle, const char* aClockConfig, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebClockConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebClockConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aClockConfig(aClockConfig);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetClockConfig(buf_aClockConfig, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgWebClockConfig1EndSetClockConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgWebClockConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebClockConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetClockConfig(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgWebClockConfig1SetPropertyAliveChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebClockConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebClockConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAliveChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebClockConfig1SetPropertyClockConfigChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgWebClockConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebClockConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyClockConfigChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgWebClockConfig1PropertyAlive(THandle aHandle, uint32_t* aAlive)
{
    CpProxyAvOpenhomeOrgWebClockConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebClockConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Alive;
    proxyC->PropertyAlive(Alive);
    *aAlive = Alive? 1 : 0;
}

void STDCALL CpProxyAvOpenhomeOrgWebClockConfig1PropertyClockConfig(THandle aHandle, char** aClockConfig)
{
    CpProxyAvOpenhomeOrgWebClockConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgWebClockConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aClockConfig;
    proxyC->PropertyClockConfig(buf_aClockConfig);
    *aClockConfig = buf_aClockConfig.Transfer();
}

