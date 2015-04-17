#include "CpAvOpenhomeOrgInternetRadio1.h"
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

class CpProxyAvOpenhomeOrgInternetRadio1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgInternetRadio1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgInternetRadio1C();
    //CpProxyAvOpenhomeOrgInternetRadio1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgInternetRadio1*>(iProxy); }

    void SyncPlay();
    void BeginPlay(FunctorAsync& aFunctor);
    void EndPlay(IAsync& aAsync);

    void SyncStop();
    void BeginStop(FunctorAsync& aFunctor);
    void EndStop(IAsync& aAsync);

    void SyncSetSender(const Brx& aUri, const Brx& aMetadata);
    void BeginSetSender(const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor);
    void EndSetSender(IAsync& aAsync);

    void SyncSender(Brh& aUri, Brh& aMetadata);
    void BeginSender(FunctorAsync& aFunctor);
    void EndSender(IAsync& aAsync, Brh& aUri, Brh& aMetadata);

    void SyncTransportState(Brh& aValue);
    void BeginTransportState(FunctorAsync& aFunctor);
    void EndTransportState(IAsync& aAsync, Brh& aValue);

    void SetPropertyUriChanged(Functor& aFunctor);
    void SetPropertyMetadataChanged(Functor& aFunctor);
    void SetPropertyTransportStateChanged(Functor& aFunctor);

    void PropertyUri(Brhz& aUri) const;
    void PropertyMetadata(Brhz& aMetadata) const;
    void PropertyTransportState(Brhz& aTransportState) const;
private:
    void UriPropertyChanged();
    void MetadataPropertyChanged();
    void TransportStatePropertyChanged();
private:
    Mutex iLock;
    Action* iActionPlay;
    Action* iActionStop;
    Action* iActionSetSender;
    Action* iActionSender;
    Action* iActionTransportState;
    PropertyString* iUri;
    PropertyString* iMetadata;
    PropertyString* iTransportState;
    Functor iUriChanged;
    Functor iMetadataChanged;
    Functor iTransportStateChanged;
};


class SyncPlayAvOpenhomeOrgInternetRadio1C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgInternetRadio1C(CpProxyAvOpenhomeOrgInternetRadio1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgInternetRadio1C() {};
private:
    CpProxyAvOpenhomeOrgInternetRadio1C& iService;
};

SyncPlayAvOpenhomeOrgInternetRadio1C::SyncPlayAvOpenhomeOrgInternetRadio1C(CpProxyAvOpenhomeOrgInternetRadio1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgInternetRadio1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncStopAvOpenhomeOrgInternetRadio1C : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgInternetRadio1C(CpProxyAvOpenhomeOrgInternetRadio1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgInternetRadio1C() {};
private:
    CpProxyAvOpenhomeOrgInternetRadio1C& iService;
};

SyncStopAvOpenhomeOrgInternetRadio1C::SyncStopAvOpenhomeOrgInternetRadio1C(CpProxyAvOpenhomeOrgInternetRadio1C& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgInternetRadio1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncSetSenderAvOpenhomeOrgInternetRadio1C : public SyncProxyAction
{
public:
    SyncSetSenderAvOpenhomeOrgInternetRadio1C(CpProxyAvOpenhomeOrgInternetRadio1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSenderAvOpenhomeOrgInternetRadio1C() {};
private:
    CpProxyAvOpenhomeOrgInternetRadio1C& iService;
};

SyncSetSenderAvOpenhomeOrgInternetRadio1C::SyncSetSenderAvOpenhomeOrgInternetRadio1C(CpProxyAvOpenhomeOrgInternetRadio1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSenderAvOpenhomeOrgInternetRadio1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSender(aAsync);
}


class SyncSenderAvOpenhomeOrgInternetRadio1C : public SyncProxyAction
{
public:
    SyncSenderAvOpenhomeOrgInternetRadio1C(CpProxyAvOpenhomeOrgInternetRadio1C& aProxy, Brh& aUri, Brh& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSenderAvOpenhomeOrgInternetRadio1C() {};
private:
    CpProxyAvOpenhomeOrgInternetRadio1C& iService;
    Brh& iUri;
    Brh& iMetadata;
};

SyncSenderAvOpenhomeOrgInternetRadio1C::SyncSenderAvOpenhomeOrgInternetRadio1C(CpProxyAvOpenhomeOrgInternetRadio1C& aProxy, Brh& aUri, Brh& aMetadata)
    : iService(aProxy)
    , iUri(aUri)
    , iMetadata(aMetadata)
{
}

void SyncSenderAvOpenhomeOrgInternetRadio1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSender(aAsync, iUri, iMetadata);
}


class SyncTransportStateAvOpenhomeOrgInternetRadio1C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgInternetRadio1C(CpProxyAvOpenhomeOrgInternetRadio1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgInternetRadio1C() {};
private:
    CpProxyAvOpenhomeOrgInternetRadio1C& iService;
    Brh& iValue;
};

SyncTransportStateAvOpenhomeOrgInternetRadio1C::SyncTransportStateAvOpenhomeOrgInternetRadio1C(CpProxyAvOpenhomeOrgInternetRadio1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgInternetRadio1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}

CpProxyAvOpenhomeOrgInternetRadio1C::CpProxyAvOpenhomeOrgInternetRadio1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "InternetRadio", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPlay = new Action("Play");

    iActionStop = new Action("Stop");

    iActionSetSender = new Action("SetSender");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionSetSender->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionSetSender->AddInputParameter(param);

    iActionSender = new Action("Sender");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionSender->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionSender->AddOutputParameter(param);

    iActionTransportState = new Action("TransportState");
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"Stopped";
    allowedValues[index++] = (TChar*)"Playing";
    allowedValues[index++] = (TChar*)"Waiting";
    allowedValues[index++] = (TChar*)"Buffering";
    param = new OpenHome::Net::ParameterString("Value", allowedValues, 4);
    iActionTransportState->AddOutputParameter(param);
    delete[] allowedValues;

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInternetRadio1C::UriPropertyChanged);
    iUri = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "Uri", functor);
    AddProperty(iUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInternetRadio1C::MetadataPropertyChanged);
    iMetadata = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "Metadata", functor);
    AddProperty(iMetadata);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgInternetRadio1C::TransportStatePropertyChanged);
    iTransportState = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "TransportState", functor);
    AddProperty(iTransportState);
}

CpProxyAvOpenhomeOrgInternetRadio1C::~CpProxyAvOpenhomeOrgInternetRadio1C()
{
    DestroyService();
    delete iActionPlay;
    delete iActionStop;
    delete iActionSetSender;
    delete iActionSender;
    delete iActionTransportState;
}

void CpProxyAvOpenhomeOrgInternetRadio1C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgInternetRadio1C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1C::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgInternetRadio1C::SyncStop()
{
    SyncStopAvOpenhomeOrgInternetRadio1C sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1C::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1C::EndStop(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Stop"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgInternetRadio1C::SyncSetSender(const Brx& aUri, const Brx& aMetadata)
{
    SyncSetSenderAvOpenhomeOrgInternetRadio1C sync(*this);
    BeginSetSender(aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1C::BeginSetSender(const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSender, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSender->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1C::EndSetSender(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetSender"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgInternetRadio1C::SyncSender(Brh& aUri, Brh& aMetadata)
{
    SyncSenderAvOpenhomeOrgInternetRadio1C sync(*this, aUri, aMetadata);
    BeginSender(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1C::BeginSender(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSender, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSender->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1C::EndSender(IAsync& aAsync, Brh& aUri, Brh& aMetadata)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Sender"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUri);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMetadata);
}

void CpProxyAvOpenhomeOrgInternetRadio1C::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgInternetRadio1C sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgInternetRadio1C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgInternetRadio1C::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgInternetRadio1C::SetPropertyUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgInternetRadio1C::SetPropertyMetadataChanged(Functor& aFunctor)
{
    iLock.Wait();
    iMetadataChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgInternetRadio1C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgInternetRadio1C::PropertyUri(Brhz& aUri) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aUri.Set(iUri->Value());
}

void CpProxyAvOpenhomeOrgInternetRadio1C::PropertyMetadata(Brhz& aMetadata) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aMetadata.Set(iMetadata->Value());
}

void CpProxyAvOpenhomeOrgInternetRadio1C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgInternetRadio1C::UriPropertyChanged()
{
    ReportEvent(iUriChanged);
}

void CpProxyAvOpenhomeOrgInternetRadio1C::MetadataPropertyChanged()
{
    ReportEvent(iMetadataChanged);
}

void CpProxyAvOpenhomeOrgInternetRadio1C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgInternetRadio1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgInternetRadio1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgInternetRadio1SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgInternetRadio1EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgInternetRadio1SyncStop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncStop();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1BeginStop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgInternetRadio1EndStop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndStop(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgInternetRadio1SyncSetSender(THandle aHandle, const char* aUri, const char* aMetadata)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    int32_t err = 0;
    try {
        proxyC->SyncSetSender(buf_aUri, buf_aMetadata);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1BeginSetSender(THandle aHandle, const char* aUri, const char* aMetadata, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSender(buf_aUri, buf_aMetadata, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgInternetRadio1EndSetSender(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetSender(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgInternetRadio1SyncSender(THandle aHandle, char** aUri, char** aMetadata)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri;
    Brh buf_aMetadata;
    int32_t err = 0;
    try {
        proxyC->SyncSender(buf_aUri, buf_aMetadata);
        *aUri = buf_aUri.Extract();
        *aMetadata = buf_aMetadata.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aUri = NULL;
        *aMetadata = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1BeginSender(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSender(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgInternetRadio1EndSender(THandle aHandle, OhNetHandleAsync aAsync, char** aUri, char** aMetadata)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aUri;
    *aUri = NULL;
    Brh buf_aMetadata;
    *aMetadata = NULL;
    try {
        proxyC->EndSender(*async, buf_aUri, buf_aMetadata);
        *aUri = buf_aUri.Extract();
        *aMetadata = buf_aMetadata.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgInternetRadio1SyncTransportState(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgInternetRadio1EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1SetPropertyUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1SetPropertyMetadataChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyMetadataChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1PropertyUri(THandle aHandle, char** aUri)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aUri;
    proxyC->PropertyUri(buf_aUri);
    *aUri = buf_aUri.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1PropertyMetadata(THandle aHandle, char** aMetadata)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aMetadata;
    proxyC->PropertyMetadata(buf_aMetadata);
    *aMetadata = buf_aMetadata.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgInternetRadio1PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgInternetRadio1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgInternetRadio1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aTransportState;
    proxyC->PropertyTransportState(buf_aTransportState);
    *aTransportState = buf_aTransportState.Transfer();
}

