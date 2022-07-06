#include "CpAvOpenhomeOrgAirplay1.h"
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

class CpProxyAvOpenhomeOrgAirplay1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgAirplay1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgAirplay1C();
    //CpProxyAvOpenhomeOrgAirplay1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgAirplay1*>(iProxy); }

    void SyncPlay();
    void BeginPlay(FunctorAsync& aFunctor);
    void EndPlay(IAsync& aAsync);

    void SyncPause();
    void BeginPause(FunctorAsync& aFunctor);
    void EndPause(IAsync& aAsync);

    void SyncNext();
    void BeginNext(FunctorAsync& aFunctor);
    void EndNext(IAsync& aAsync);

    void SyncPrevious();
    void BeginPrevious(FunctorAsync& aFunctor);
    void EndPrevious(IAsync& aAsync);

    void SyncTransportState(Brh& aValue);
    void BeginTransportState(FunctorAsync& aFunctor);
    void EndTransportState(IAsync& aAsync, Brh& aValue);

    void SetPropertyTransportStateChanged(Functor& aFunctor);

    void PropertyTransportState(Brhz& aTransportState) const;
private:
    void TransportStatePropertyChanged();
private:
    Mutex iLock;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionNext;
    Action* iActionPrevious;
    Action* iActionTransportState;
    PropertyString* iTransportState;
    Functor iTransportStateChanged;
};


class SyncPlayAvOpenhomeOrgAirplay1C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgAirplay1C(CpProxyAvOpenhomeOrgAirplay1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgAirplay1C() {};
private:
    CpProxyAvOpenhomeOrgAirplay1C& iService;
};

SyncPlayAvOpenhomeOrgAirplay1C::SyncPlayAvOpenhomeOrgAirplay1C(CpProxyAvOpenhomeOrgAirplay1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgAirplay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgAirplay1C : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgAirplay1C(CpProxyAvOpenhomeOrgAirplay1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgAirplay1C() {};
private:
    CpProxyAvOpenhomeOrgAirplay1C& iService;
};

SyncPauseAvOpenhomeOrgAirplay1C::SyncPauseAvOpenhomeOrgAirplay1C(CpProxyAvOpenhomeOrgAirplay1C& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgAirplay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncNextAvOpenhomeOrgAirplay1C : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgAirplay1C(CpProxyAvOpenhomeOrgAirplay1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgAirplay1C() {};
private:
    CpProxyAvOpenhomeOrgAirplay1C& iService;
};

SyncNextAvOpenhomeOrgAirplay1C::SyncNextAvOpenhomeOrgAirplay1C(CpProxyAvOpenhomeOrgAirplay1C& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgAirplay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgAirplay1C : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgAirplay1C(CpProxyAvOpenhomeOrgAirplay1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgAirplay1C() {};
private:
    CpProxyAvOpenhomeOrgAirplay1C& iService;
};

SyncPreviousAvOpenhomeOrgAirplay1C::SyncPreviousAvOpenhomeOrgAirplay1C(CpProxyAvOpenhomeOrgAirplay1C& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgAirplay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncTransportStateAvOpenhomeOrgAirplay1C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgAirplay1C(CpProxyAvOpenhomeOrgAirplay1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgAirplay1C() {};
private:
    CpProxyAvOpenhomeOrgAirplay1C& iService;
    Brh& iValue;
};

SyncTransportStateAvOpenhomeOrgAirplay1C::SyncTransportStateAvOpenhomeOrgAirplay1C(CpProxyAvOpenhomeOrgAirplay1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgAirplay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}

CpProxyAvOpenhomeOrgAirplay1C::CpProxyAvOpenhomeOrgAirplay1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Airplay", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPlay = new Action("Play");

    iActionPause = new Action("Pause");

    iActionNext = new Action("Next");

    iActionPrevious = new Action("Previous");

    iActionTransportState = new Action("TransportState");
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"Playing";
    allowedValues[index++] = (TChar*)"Paused";
    allowedValues[index++] = (TChar*)"Stopped";
    allowedValues[index++] = (TChar*)"Buffering";
    param = new OpenHome::Net::ParameterString("Value", allowedValues, 4);
    iActionTransportState->AddOutputParameter(param);
    delete[] allowedValues;

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAirplay1C::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
}

CpProxyAvOpenhomeOrgAirplay1C::~CpProxyAvOpenhomeOrgAirplay1C()
{
    DestroyService();
    delete iActionPlay;
    delete iActionPause;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionTransportState;
}

void CpProxyAvOpenhomeOrgAirplay1C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgAirplay1C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAirplay1C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAirplay1C::EndPlay(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Play"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgAirplay1C::SyncPause()
{
    SyncPauseAvOpenhomeOrgAirplay1C sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAirplay1C::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAirplay1C::EndPause(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Pause"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgAirplay1C::SyncNext()
{
    SyncNextAvOpenhomeOrgAirplay1C sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAirplay1C::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionNext, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAirplay1C::EndNext(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Next"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgAirplay1C::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgAirplay1C sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAirplay1C::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPrevious, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAirplay1C::EndPrevious(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Previous"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgAirplay1C::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgAirplay1C sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAirplay1C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAirplay1C::EndTransportState(IAsync& aAsync, Brh& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("TransportState"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgAirplay1C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgAirplay1C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgAirplay1C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgAirplay1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgAirplay1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgAirplay1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgAirplay1SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncPlay();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgAirplay1BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAirplay1EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPlay(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgAirplay1SyncPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncPause();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgAirplay1BeginPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAirplay1EndPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPause(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgAirplay1SyncNext(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncNext();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgAirplay1BeginNext(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginNext(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAirplay1EndNext(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndNext(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgAirplay1SyncPrevious(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncPrevious();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgAirplay1BeginPrevious(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPrevious(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAirplay1EndPrevious(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPrevious(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgAirplay1SyncTransportState(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncTransportState(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgAirplay1BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAirplay1EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndTransportState(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgAirplay1SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAirplay1PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgAirplay1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAirplay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aTransportState;
    try {
        proxyC->PropertyTransportState(buf_aTransportState);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aTransportState = buf_aTransportState.Transfer();
    return 0;
}

