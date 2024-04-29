#include "CpAvOpenhomeOrgAmazonStation1.h"
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

class CpProxyAvOpenhomeOrgAmazonStation1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgAmazonStation1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgAmazonStation1C();
    //CpProxyAvOpenhomeOrgAmazonStation1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgAmazonStation1*>(iProxy); }

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


class SyncPlayAvOpenhomeOrgAmazonStation1C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgAmazonStation1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonStation1C& iService;
};

SyncPlayAvOpenhomeOrgAmazonStation1C::SyncPlayAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgAmazonStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgAmazonStation1C : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgAmazonStation1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonStation1C& iService;
};

SyncPauseAvOpenhomeOrgAmazonStation1C::SyncPauseAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgAmazonStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgAmazonStation1C : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgAmazonStation1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonStation1C& iService;
};

SyncStopAvOpenhomeOrgAmazonStation1C::SyncStopAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgAmazonStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgAmazonStation1C : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgAmazonStation1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonStation1C& iService;
};

SyncNextAvOpenhomeOrgAmazonStation1C::SyncNextAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgAmazonStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgAmazonStation1C : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgAmazonStation1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonStation1C& iService;
};

SyncPreviousAvOpenhomeOrgAmazonStation1C::SyncPreviousAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgAmazonStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncSetThumbRatingAvOpenhomeOrgAmazonStation1C : public SyncProxyAction
{
public:
    SyncSetThumbRatingAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetThumbRatingAvOpenhomeOrgAmazonStation1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonStation1C& iService;
};

SyncSetThumbRatingAvOpenhomeOrgAmazonStation1C::SyncSetThumbRatingAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetThumbRatingAvOpenhomeOrgAmazonStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetThumbRating(aAsync);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1C : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonStation1C& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1C::SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1C : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonStation1C& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1C::SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncTransportStateAvOpenhomeOrgAmazonStation1C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgAmazonStation1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonStation1C& iService;
    Brh& iValue;
};

SyncTransportStateAvOpenhomeOrgAmazonStation1C::SyncTransportStateAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgAmazonStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


class SyncInsertAvOpenhomeOrgAmazonStation1C : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy, TUint& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInsertAvOpenhomeOrgAmazonStation1C() {};
private:
    CpProxyAvOpenhomeOrgAmazonStation1C& iService;
    TUint& iNewId;
};

SyncInsertAvOpenhomeOrgAmazonStation1C::SyncInsertAvOpenhomeOrgAmazonStation1C(CpProxyAvOpenhomeOrgAmazonStation1C& aProxy, TUint& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncInsertAvOpenhomeOrgAmazonStation1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewId);
}

CpProxyAvOpenhomeOrgAmazonStation1C::CpProxyAvOpenhomeOrgAmazonStation1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "AmazonStation", 1, *reinterpret_cast<CpiDevice*>(aDevice))
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonStation1C::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonStation1C::ThumbRatingPropertyChanged);
    iThumbRating = new PropertyString("ThumbRating", functor);
    AddProperty(iThumbRating);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonStation1C::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
}

CpProxyAvOpenhomeOrgAmazonStation1C::~CpProxyAvOpenhomeOrgAmazonStation1C()
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

void CpProxyAvOpenhomeOrgAmazonStation1C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgAmazonStation1C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1C::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1C::SyncPause()
{
    SyncPauseAvOpenhomeOrgAmazonStation1C sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1C::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1C::SyncStop()
{
    SyncStopAvOpenhomeOrgAmazonStation1C sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1C::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1C::SyncNext()
{
    SyncNextAvOpenhomeOrgAmazonStation1C sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionNext, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1C::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1C::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgAmazonStation1C sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPrevious, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1C::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1C::SyncSetThumbRating(const Brx& aThumbRating)
{
    SyncSetThumbRatingAvOpenhomeOrgAmazonStation1C sync(*this);
    BeginSetThumbRating(aThumbRating, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::BeginSetThumbRating(const Brx& aThumbRating, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetThumbRating, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetThumbRating->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aThumbRating));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1C::EndSetThumbRating(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1C::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1C sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1C::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1C::SyncSeekSecondRelative(TInt aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1C sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1C::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1C::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgAmazonStation1C sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1C::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgAmazonStation1C::SyncInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, TUint& aNewId)
{
    SyncInsertAvOpenhomeOrgAmazonStation1C sync(*this, aNewId);
    BeginInsert(aAfterId, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::BeginInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgAmazonStation1C::EndInsert(IAsync& aAsync, TUint& aNewId)
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

void CpProxyAvOpenhomeOrgAmazonStation1C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::SetPropertyThumbRatingChanged(Functor& aFunctor)
{
    iLock.Wait();
    iThumbRatingChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::SetPropertyIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgAmazonStation1C::PropertyThumbRating(Brhz& aThumbRating) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aThumbRating.Set(iThumbRating->Value());
}

void CpProxyAvOpenhomeOrgAmazonStation1C::PropertyId(TUint& aId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgAmazonStation1C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgAmazonStation1C::ThumbRatingPropertyChanged()
{
    ReportEvent(iThumbRatingChanged);
}

void CpProxyAvOpenhomeOrgAmazonStation1C::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgAmazonStation1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgAmazonStation1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1SyncPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1BeginPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1EndPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1SyncStop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1BeginStop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1EndStop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1SyncNext(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1BeginNext(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginNext(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1EndNext(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1SyncPrevious(THandle aHandle)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1BeginPrevious(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPrevious(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1EndPrevious(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1SyncSetThumbRating(THandle aHandle, const char* aThumbRating)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1BeginSetThumbRating(THandle aHandle, const char* aThumbRating, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aThumbRating(aThumbRating);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetThumbRating(buf_aThumbRating, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1EndSetThumbRating(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1SyncSeekSecondAbsolute(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1BeginSeekSecondAbsolute(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondAbsolute(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1EndSeekSecondAbsolute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1SyncSeekSecondRelative(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1BeginSeekSecondRelative(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondRelative(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1EndSeekSecondRelative(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1SyncTransportState(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1SyncInsert(THandle aHandle, uint32_t aAfterId, const char* aUri, const char* aMetadata, uint32_t* aNewId)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1BeginInsert(THandle aHandle, uint32_t aAfterId, const char* aUri, const char* aMetadata, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginInsert(aAfterId, buf_aUri, buf_aMetadata, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1EndInsert(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aNewId)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1SetPropertyThumbRatingChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyThumbRatingChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgAmazonStation1SetPropertyIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIdChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1PropertyThumbRating(THandle aHandle, char** aThumbRating)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgAmazonStation1PropertyId(THandle aHandle, uint32_t* aId)
{
    CpProxyAvOpenhomeOrgAmazonStation1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgAmazonStation1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyId(*aId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

