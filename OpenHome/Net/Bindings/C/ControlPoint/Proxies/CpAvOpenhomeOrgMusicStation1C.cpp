#include "CpAvOpenhomeOrgMusicStation1.h"
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

class CpProxyAvOpenhomeOrgMusicStation1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgMusicStation1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgMusicStation1C();
    //CpProxyAvOpenhomeOrgMusicStation1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgMusicStation1*>(iProxy); }

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

    void SyncSetThumbRating(const Brx& aThumbRating);
    void BeginSetThumbRating(const Brx& aThumbRating, FunctorAsync& aFunctor);
    void EndSetThumbRating(IAsync& aAsync);

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
    void SetPropertyThumbRatingChanged(Functor& aFunctor);
    void SetPropertyIdChanged(Functor& aFunctor);

    void PropertyTransportState(Brhz& aTransportState) const;
    void PropertyThumbRating(Brhz& aThumbRating) const;
    void PropertyId(TUint& aId) const;
private:
    void TransportStatePropertyChanged();
    void ThumbRatingPropertyChanged();
    void IdPropertyChanged();
private:
    Mutex iLock;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionNext;
    Action* iActionPrevious;
    Action* iActionSetThumbRating;
    Action* iActionSeekSecondAbsolute;
    Action* iActionSeekSecondRelative;
    Action* iActionTransportState;
    Action* iActionInsert;
    PropertyString* iTransportState;
    PropertyString* iThumbRating;
    PropertyUint* iId;
    Functor iTransportStateChanged;
    Functor iThumbRatingChanged;
    Functor iIdChanged;
};


class SyncPlayAvOpenhomeOrgMusicStation1C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgMusicStation1C() {};
private:
    CpProxyAvOpenhomeOrgMusicStation1C& iService;
};

SyncPlayAvOpenhomeOrgMusicStation1C::SyncPlayAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgMusicStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgMusicStation1C : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgMusicStation1C() {};
private:
    CpProxyAvOpenhomeOrgMusicStation1C& iService;
};

SyncPauseAvOpenhomeOrgMusicStation1C::SyncPauseAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgMusicStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgMusicStation1C : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgMusicStation1C() {};
private:
    CpProxyAvOpenhomeOrgMusicStation1C& iService;
};

SyncStopAvOpenhomeOrgMusicStation1C::SyncStopAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgMusicStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgMusicStation1C : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgMusicStation1C() {};
private:
    CpProxyAvOpenhomeOrgMusicStation1C& iService;
};

SyncNextAvOpenhomeOrgMusicStation1C::SyncNextAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgMusicStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgMusicStation1C : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgMusicStation1C() {};
private:
    CpProxyAvOpenhomeOrgMusicStation1C& iService;
};

SyncPreviousAvOpenhomeOrgMusicStation1C::SyncPreviousAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgMusicStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncSetThumbRatingAvOpenhomeOrgMusicStation1C : public SyncProxyAction
{
public:
    SyncSetThumbRatingAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetThumbRatingAvOpenhomeOrgMusicStation1C() {};
private:
    CpProxyAvOpenhomeOrgMusicStation1C& iService;
};

SyncSetThumbRatingAvOpenhomeOrgMusicStation1C::SyncSetThumbRatingAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetThumbRatingAvOpenhomeOrgMusicStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetThumbRating(aAsync);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1C : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1C() {};
private:
    CpProxyAvOpenhomeOrgMusicStation1C& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1C::SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1C : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1C() {};
private:
    CpProxyAvOpenhomeOrgMusicStation1C& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1C::SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncTransportStateAvOpenhomeOrgMusicStation1C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgMusicStation1C() {};
private:
    CpProxyAvOpenhomeOrgMusicStation1C& iService;
    Brh& iValue;
};

SyncTransportStateAvOpenhomeOrgMusicStation1C::SyncTransportStateAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgMusicStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


class SyncInsertAvOpenhomeOrgMusicStation1C : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy, TUint& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInsertAvOpenhomeOrgMusicStation1C() {};
private:
    CpProxyAvOpenhomeOrgMusicStation1C& iService;
    TUint& iNewId;
};

SyncInsertAvOpenhomeOrgMusicStation1C::SyncInsertAvOpenhomeOrgMusicStation1C(CpProxyAvOpenhomeOrgMusicStation1C& aProxy, TUint& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncInsertAvOpenhomeOrgMusicStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewId);
}

CpProxyAvOpenhomeOrgMusicStation1C::CpProxyAvOpenhomeOrgMusicStation1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "MusicStation", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPlay = new Action("Play");

    iActionPause = new Action("Pause");

    iActionStop = new Action("Stop");

    iActionNext = new Action("Next");

    iActionPrevious = new Action("Previous");

    iActionSetThumbRating = new Action("SetThumbRating");
    index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"thumbs_up";
    allowedValues[index++] = (TChar*)"thumbs_down";
    allowedValues[index++] = (TChar*)"neutral";
    param = new OpenHome::Net::ParameterString("ThumbRating", allowedValues, 3);
    iActionSetThumbRating->AddInputParameter(param);
    delete[] allowedValues;

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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMusicStation1C::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMusicStation1C::ThumbRatingPropertyChanged);
    iThumbRating = new PropertyString("ThumbRating", functor);
    AddProperty(iThumbRating);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMusicStation1C::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
}

CpProxyAvOpenhomeOrgMusicStation1C::~CpProxyAvOpenhomeOrgMusicStation1C()
{
    DestroyService();
    delete iActionPlay;
    delete iActionPause;
    delete iActionStop;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionSetThumbRating;
    delete iActionSeekSecondAbsolute;
    delete iActionSeekSecondRelative;
    delete iActionTransportState;
    delete iActionInsert;
}

void CpProxyAvOpenhomeOrgMusicStation1C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgMusicStation1C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1C::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1C::SyncPause()
{
    SyncPauseAvOpenhomeOrgMusicStation1C sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1C::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1C::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1C::SyncStop()
{
    SyncStopAvOpenhomeOrgMusicStation1C sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1C::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1C::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1C::SyncNext()
{
    SyncNextAvOpenhomeOrgMusicStation1C sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1C::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionNext, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1C::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1C::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgMusicStation1C sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1C::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPrevious, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1C::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1C::SyncSetThumbRating(const Brx& aThumbRating)
{
    SyncSetThumbRatingAvOpenhomeOrgMusicStation1C sync(*this);
    BeginSetThumbRating(aThumbRating, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1C::BeginSetThumbRating(const Brx& aThumbRating, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetThumbRating, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetThumbRating->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aThumbRating));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1C::EndSetThumbRating(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetThumbRating"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgMusicStation1C::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1C sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1C::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1C::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1C::SyncSeekSecondRelative(TInt aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1C sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1C::BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1C::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1C::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgMusicStation1C sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1C::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgMusicStation1C::SyncInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, TUint& aNewId)
{
    SyncInsertAvOpenhomeOrgMusicStation1C sync(*this, aNewId);
    BeginInsert(aAfterId, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1C::BeginInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgMusicStation1C::EndInsert(IAsync& aAsync, TUint& aNewId)
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

void CpProxyAvOpenhomeOrgMusicStation1C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMusicStation1C::SetPropertyThumbRatingChanged(Functor& aFunctor)
{
    iLock.Wait();
    iThumbRatingChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMusicStation1C::SetPropertyIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMusicStation1C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgMusicStation1C::PropertyThumbRating(Brhz& aThumbRating) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aThumbRating.Set(iThumbRating->Value());
}

void CpProxyAvOpenhomeOrgMusicStation1C::PropertyId(TUint& aId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgMusicStation1C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgMusicStation1C::ThumbRatingPropertyChanged()
{
    ReportEvent(iThumbRatingChanged);
}

void CpProxyAvOpenhomeOrgMusicStation1C::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgMusicStation1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgMusicStation1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgMusicStation1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgMusicStation1BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1SyncPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgMusicStation1BeginPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1EndPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1SyncStop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgMusicStation1BeginStop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1EndStop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1SyncNext(THandle aHandle)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgMusicStation1BeginNext(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginNext(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1EndNext(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1SyncPrevious(THandle aHandle)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgMusicStation1BeginPrevious(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPrevious(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1EndPrevious(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1SyncSetThumbRating(THandle aHandle, const char* aThumbRating)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aThumbRating(aThumbRating);
    int32_t err = 0;
    try {
        proxyC->SyncSetThumbRating(buf_aThumbRating);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgMusicStation1BeginSetThumbRating(THandle aHandle, const char* aThumbRating, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aThumbRating(aThumbRating);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetThumbRating(buf_aThumbRating, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1EndSetThumbRating(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetThumbRating(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1SyncSeekSecondAbsolute(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgMusicStation1BeginSeekSecondAbsolute(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondAbsolute(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1EndSeekSecondAbsolute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1SyncSeekSecondRelative(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgMusicStation1BeginSeekSecondRelative(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondRelative(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1EndSeekSecondRelative(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1SyncTransportState(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgMusicStation1BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1SyncInsert(THandle aHandle, uint32_t aAfterId, const char* aUri, const char* aMetadata, uint32_t* aNewId)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgMusicStation1BeginInsert(THandle aHandle, uint32_t aAfterId, const char* aUri, const char* aMetadata, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginInsert(aAfterId, buf_aUri, buf_aMetadata, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1EndInsert(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aNewId)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgMusicStation1SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMusicStation1SetPropertyThumbRatingChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyThumbRatingChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMusicStation1SetPropertyIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIdChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1PropertyThumbRating(THandle aHandle, char** aThumbRating)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aThumbRating;
    try {
        proxyC->PropertyThumbRating(buf_aThumbRating);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aThumbRating = buf_aThumbRating.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMusicStation1PropertyId(THandle aHandle, uint32_t* aId)
{
    CpProxyAvOpenhomeOrgMusicStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMusicStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyId(*aId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

