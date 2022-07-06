#include "CpAvOpenhomeOrgAmazonMusic1.h"
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

class CpProxyAvOpenhomeOrgAmazonMusic1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgAmazonMusic1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgAmazonMusic1C();
    //CpProxyAvOpenhomeOrgAmazonMusic1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgAmazonMusic1*>(iProxy); }

    void SyncLogIn();
    void BeginLogIn(FunctorAsync& aFunctor);
    void EndLogIn(IAsync& aAsync);

    void SyncPlay();
    void BeginPlay(FunctorAsync& aFunctor);
    void EndPlay(IAsync& aAsync);

    void SyncPause();
    void BeginPause(FunctorAsync& aFunctor);
    void EndPause(IAsync& aAsync);

    void SyncStop();
    void BeginStop(FunctorAsync& aFunctor);
    void EndStop(IAsync& aAsync);

    void SyncNext();
    void BeginNext(FunctorAsync& aFunctor);
    void EndNext(IAsync& aAsync);

    void SyncPrevious();
    void BeginPrevious(FunctorAsync& aFunctor);
    void EndPrevious(IAsync& aAsync);

    void SyncSeekSecondAbsolute(TUint aValue);
    void BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor);
    void EndSeekSecondAbsolute(IAsync& aAsync);

    void SyncSeekSecondRelative(TInt aValue);
    void BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor);
    void EndSeekSecondRelative(IAsync& aAsync);

    void SyncTransportState(Brh& aValue);
    void BeginTransportState(FunctorAsync& aFunctor);
    void EndTransportState(IAsync& aAsync, Brh& aValue);

    void SyncInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, TUint& aNewId);
    void BeginInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor);
    void EndInsert(IAsync& aAsync, TUint& aNewId);

    void SetPropertyTransportStateChanged(Functor& aFunctor);
    void SetPropertyIdChanged(Functor& aFunctor);

    void PropertyTransportState(Brhz& aTransportState) const;
    void PropertyId(TUint& aId) const;
private:
    void TransportStatePropertyChanged();
    void IdPropertyChanged();
private:
    Mutex iLock;
    Action* iActionLogIn;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionNext;
    Action* iActionPrevious;
    Action* iActionSeekSecondAbsolute;
    Action* iActionSeekSecondRelative;
    Action* iActionTransportState;
    Action* iActionInsert;
    PropertyString* iTransportState;
    PropertyUint* iId;
    Functor iTransportStateChanged;
    Functor iIdChanged;
};


class SyncLogInAvOpenhomeOrgAmazonMusic1C : public SyncProxyAction
{
public:
    SyncLogInAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncLogInAvOpenhomeOrgAmazonMusic1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonMusic1C& iService;
};

SyncLogInAvOpenhomeOrgAmazonMusic1C::SyncLogInAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy)
    : iService(aProxy)
{
}

void SyncLogInAvOpenhomeOrgAmazonMusic1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndLogIn(aAsync);
}


class SyncPlayAvOpenhomeOrgAmazonMusic1C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgAmazonMusic1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonMusic1C& iService;
};

SyncPlayAvOpenhomeOrgAmazonMusic1C::SyncPlayAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgAmazonMusic1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgAmazonMusic1C : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgAmazonMusic1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonMusic1C& iService;
};

SyncPauseAvOpenhomeOrgAmazonMusic1C::SyncPauseAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgAmazonMusic1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgAmazonMusic1C : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgAmazonMusic1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonMusic1C& iService;
};

SyncStopAvOpenhomeOrgAmazonMusic1C::SyncStopAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgAmazonMusic1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgAmazonMusic1C : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgAmazonMusic1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonMusic1C& iService;
};

SyncNextAvOpenhomeOrgAmazonMusic1C::SyncNextAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgAmazonMusic1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgAmazonMusic1C : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgAmazonMusic1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonMusic1C& iService;
};

SyncPreviousAvOpenhomeOrgAmazonMusic1C::SyncPreviousAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgAmazonMusic1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1C : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonMusic1C& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1C::SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1C : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonMusic1C& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1C::SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncTransportStateAvOpenhomeOrgAmazonMusic1C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgAmazonMusic1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonMusic1C& iService;
    Brh& iValue;
};

SyncTransportStateAvOpenhomeOrgAmazonMusic1C::SyncTransportStateAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgAmazonMusic1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


class SyncInsertAvOpenhomeOrgAmazonMusic1C : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy, TUint& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInsertAvOpenhomeOrgAmazonMusic1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonMusic1C& iService;
    TUint& iNewId;
};

SyncInsertAvOpenhomeOrgAmazonMusic1C::SyncInsertAvOpenhomeOrgAmazonMusic1C(CpProxyAvOpenhomeOrgAmazonMusic1C& aProxy, TUint& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncInsertAvOpenhomeOrgAmazonMusic1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewId);
}

CpProxyAvOpenhomeOrgAmazonMusic1C::CpProxyAvOpenhomeOrgAmazonMusic1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "AmazonMusic", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionLogIn = new Action("LogIn");

    iActionPlay = new Action("Play");

    iActionPause = new Action("Pause");

    iActionStop = new Action("Stop");

    iActionNext = new Action("Next");

    iActionPrevious = new Action("Previous");

    iActionSeekSecondAbsolute = new Action("SeekSecondAbsolute");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSeekSecondAbsolute->AddInputParameter(param);

    iActionSeekSecondRelative = new Action("SeekSecondRelative");
    param = new OpenHome::Net::ParameterInt("Value");
    iActionSeekSecondRelative->AddInputParameter(param);

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

    iActionInsert = new Action("Insert");
    param = new OpenHome::Net::ParameterUint("AfterId");
    iActionInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Uri");
    iActionInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("NewId");
    iActionInsert->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonMusic1C::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonMusic1C::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
}

CpProxyAvOpenhomeOrgAmazonMusic1C::~CpProxyAvOpenhomeOrgAmazonMusic1C()
{
    DestroyService();
    delete iActionLogIn;
    delete iActionPlay;
    delete iActionPause;
    delete iActionStop;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionSeekSecondAbsolute;
    delete iActionSeekSecondRelative;
    delete iActionTransportState;
    delete iActionInsert;
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::SyncLogIn()
{
    SyncLogInAvOpenhomeOrgAmazonMusic1C sync(*this);
    BeginLogIn(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::BeginLogIn(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionLogIn, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::EndLogIn(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("LogIn"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgAmazonMusic1C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1C::SyncPause()
{
    SyncPauseAvOpenhomeOrgAmazonMusic1C sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1C::SyncStop()
{
    SyncStopAvOpenhomeOrgAmazonMusic1C sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1C::SyncNext()
{
    SyncNextAvOpenhomeOrgAmazonMusic1C sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionNext, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1C::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgAmazonMusic1C sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPrevious, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1C::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1C sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::EndSeekSecondAbsolute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SeekSecondAbsolute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::SyncSeekSecondRelative(TInt aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1C sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::EndSeekSecondRelative(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SeekSecondRelative"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgAmazonMusic1C sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgAmazonMusic1C::SyncInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, TUint& aNewId)
{
    SyncInsertAvOpenhomeOrgAmazonMusic1C sync(*this, aNewId);
    BeginInsert(aAfterId, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::BeginInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionInsert, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInsert->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aAfterId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInsert->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::EndInsert(IAsync& aAsync, TUint& aNewId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Insert"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aNewId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::SetPropertyIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::PropertyId(TUint& aId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgAmazonMusic1C::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgAmazonMusic1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgAmazonMusic1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SyncLogIn(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncLogIn();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1BeginLogIn(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginLogIn(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1EndLogIn(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndLogIn(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SyncPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1BeginPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1EndPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SyncStop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1BeginStop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1EndStop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SyncNext(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1BeginNext(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginNext(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1EndNext(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SyncPrevious(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1BeginPrevious(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPrevious(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1EndPrevious(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SyncSeekSecondAbsolute(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekSecondAbsolute(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1BeginSeekSecondAbsolute(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondAbsolute(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1EndSeekSecondAbsolute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSeekSecondAbsolute(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SyncSeekSecondRelative(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekSecondRelative(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1BeginSeekSecondRelative(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondRelative(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1EndSeekSecondRelative(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSeekSecondRelative(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SyncTransportState(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SyncInsert(THandle aHandle, uint32_t aAfterId, const char* aUri, const char* aMetadata, uint32_t* aNewId)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    int32_t err = 0;
    try {
        proxyC->SyncInsert(aAfterId, buf_aUri, buf_aMetadata, *aNewId);
    }
    catch (ProxyError& ) {
        err = -1;
        *aNewId = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1BeginInsert(THandle aHandle, uint32_t aAfterId, const char* aUri, const char* aMetadata, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginInsert(aAfterId, buf_aUri, buf_aMetadata, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1EndInsert(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aNewId)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndInsert(*async, *aNewId);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgAmazonMusic1SetPropertyIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIdChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonMusic1PropertyId(THandle aHandle, uint32_t* aId)
{
    CpProxyAvOpenhomeOrgAmazonMusic1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonMusic1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyId(*aId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

