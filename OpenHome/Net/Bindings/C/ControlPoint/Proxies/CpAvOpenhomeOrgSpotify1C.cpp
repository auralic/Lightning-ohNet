#include "CpAvOpenhomeOrgSpotify1.h"
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

class CpProxyAvOpenhomeOrgSpotify1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgSpotify1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgSpotify1C();
    //CpProxyAvOpenhomeOrgSpotify1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgSpotify1*>(iProxy); }

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


class SyncPlayAvOpenhomeOrgSpotify1C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgSpotify1C(CpProxyAvOpenhomeOrgSpotify1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgSpotify1C() {};
private:
    CpProxyAvOpenhomeOrgSpotify1C& iService;
};

SyncPlayAvOpenhomeOrgSpotify1C::SyncPlayAvOpenhomeOrgSpotify1C(CpProxyAvOpenhomeOrgSpotify1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgSpotify1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgSpotify1C : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgSpotify1C(CpProxyAvOpenhomeOrgSpotify1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgSpotify1C() {};
private:
    CpProxyAvOpenhomeOrgSpotify1C& iService;
};

SyncPauseAvOpenhomeOrgSpotify1C::SyncPauseAvOpenhomeOrgSpotify1C(CpProxyAvOpenhomeOrgSpotify1C& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgSpotify1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncNextAvOpenhomeOrgSpotify1C : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgSpotify1C(CpProxyAvOpenhomeOrgSpotify1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgSpotify1C() {};
private:
    CpProxyAvOpenhomeOrgSpotify1C& iService;
};

SyncNextAvOpenhomeOrgSpotify1C::SyncNextAvOpenhomeOrgSpotify1C(CpProxyAvOpenhomeOrgSpotify1C& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgSpotify1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgSpotify1C : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgSpotify1C(CpProxyAvOpenhomeOrgSpotify1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgSpotify1C() {};
private:
    CpProxyAvOpenhomeOrgSpotify1C& iService;
};

SyncPreviousAvOpenhomeOrgSpotify1C::SyncPreviousAvOpenhomeOrgSpotify1C(CpProxyAvOpenhomeOrgSpotify1C& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgSpotify1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncTransportStateAvOpenhomeOrgSpotify1C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgSpotify1C(CpProxyAvOpenhomeOrgSpotify1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgSpotify1C() {};
private:
    CpProxyAvOpenhomeOrgSpotify1C& iService;
    Brh& iValue;
};

SyncTransportStateAvOpenhomeOrgSpotify1C::SyncTransportStateAvOpenhomeOrgSpotify1C(CpProxyAvOpenhomeOrgSpotify1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgSpotify1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}

CpProxyAvOpenhomeOrgSpotify1C::CpProxyAvOpenhomeOrgSpotify1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Spotify", 1, *reinterpret_cast<CpiDevice*>(aDevice))
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgSpotify1C::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
}

CpProxyAvOpenhomeOrgSpotify1C::~CpProxyAvOpenhomeOrgSpotify1C()
{
    DestroyService();
    delete iActionPlay;
    delete iActionPause;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionTransportState;
}

void CpProxyAvOpenhomeOrgSpotify1C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgSpotify1C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSpotify1C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSpotify1C::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgSpotify1C::SyncPause()
{
    SyncPauseAvOpenhomeOrgSpotify1C sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSpotify1C::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSpotify1C::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgSpotify1C::SyncNext()
{
    SyncNextAvOpenhomeOrgSpotify1C sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSpotify1C::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionNext, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSpotify1C::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgSpotify1C::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgSpotify1C sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSpotify1C::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPrevious, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSpotify1C::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgSpotify1C::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgSpotify1C sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSpotify1C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSpotify1C::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgSpotify1C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgSpotify1C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgSpotify1C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgSpotify1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgSpotify1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgSpotify1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSpotify1SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgSpotify1BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSpotify1EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgSpotify1SyncPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgSpotify1BeginPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSpotify1EndPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgSpotify1SyncNext(THandle aHandle)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgSpotify1BeginNext(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginNext(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSpotify1EndNext(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgSpotify1SyncPrevious(THandle aHandle)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgSpotify1BeginPrevious(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPrevious(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSpotify1EndPrevious(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgSpotify1SyncTransportState(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgSpotify1BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSpotify1EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgSpotify1SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSpotify1PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgSpotify1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSpotify1C*>(aHandle);
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

