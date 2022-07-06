#include "CpAvOpenhomeOrgTidalConnect1.h"
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

class CpProxyAvOpenhomeOrgTidalConnect1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgTidalConnect1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgTidalConnect1C();
    //CpProxyAvOpenhomeOrgTidalConnect1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgTidalConnect1*>(iProxy); }

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

    void SyncToggleShuffle();
    void BeginToggleShuffle(FunctorAsync& aFunctor);
    void EndToggleShuffle(IAsync& aAsync);

    void SyncToggleLoop();
    void BeginToggleLoop(FunctorAsync& aFunctor);
    void EndToggleLoop(IAsync& aAsync);

    void SyncRequestMetadata();
    void BeginRequestMetadata(FunctorAsync& aFunctor);
    void EndRequestMetadata(IAsync& aAsync);

    void SyncSeekSecondAbsolute(TUint aValue);
    void BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor);
    void EndSeekSecondAbsolute(IAsync& aAsync);

    void SyncTransportState(Brh& aValue);
    void BeginTransportState(FunctorAsync& aFunctor);
    void EndTransportState(IAsync& aAsync, Brh& aValue);

    void SetPropertyTransportStateChanged(Functor& aFunctor);
    void SetPropertyRepeatChanged(Functor& aFunctor);
    void SetPropertyRepeatOneChanged(Functor& aFunctor);
    void SetPropertyShuffleChanged(Functor& aFunctor);
    void SetPropertyUpdateCoverChanged(Functor& aFunctor);

    void PropertyTransportState(Brhz& aTransportState) const;
    void PropertyRepeat(TBool& aRepeat) const;
    void PropertyRepeatOne(TBool& aRepeatOne) const;
    void PropertyShuffle(TBool& aShuffle) const;
    void PropertyUpdateCover(TBool& aUpdateCover) const;
private:
    void TransportStatePropertyChanged();
    void RepeatPropertyChanged();
    void RepeatOnePropertyChanged();
    void ShufflePropertyChanged();
    void UpdateCoverPropertyChanged();
private:
    Mutex iLock;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionNext;
    Action* iActionPrevious;
    Action* iActionToggleShuffle;
    Action* iActionToggleLoop;
    Action* iActionRequestMetadata;
    Action* iActionSeekSecondAbsolute;
    Action* iActionTransportState;
    PropertyString* iTransportState;
    PropertyBool* iRepeat;
    PropertyBool* iRepeatOne;
    PropertyBool* iShuffle;
    PropertyBool* iUpdateCover;
    Functor iTransportStateChanged;
    Functor iRepeatChanged;
    Functor iRepeatOneChanged;
    Functor iShuffleChanged;
    Functor iUpdateCoverChanged;
};


class SyncPlayAvOpenhomeOrgTidalConnect1C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgTidalConnect1C() {};
private:
    CpProxyAvOpenhomeOrgTidalConnect1C& iService;
};

SyncPlayAvOpenhomeOrgTidalConnect1C::SyncPlayAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgTidalConnect1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgTidalConnect1C : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgTidalConnect1C() {};
private:
    CpProxyAvOpenhomeOrgTidalConnect1C& iService;
};

SyncPauseAvOpenhomeOrgTidalConnect1C::SyncPauseAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgTidalConnect1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgTidalConnect1C : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgTidalConnect1C() {};
private:
    CpProxyAvOpenhomeOrgTidalConnect1C& iService;
};

SyncStopAvOpenhomeOrgTidalConnect1C::SyncStopAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgTidalConnect1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgTidalConnect1C : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgTidalConnect1C() {};
private:
    CpProxyAvOpenhomeOrgTidalConnect1C& iService;
};

SyncNextAvOpenhomeOrgTidalConnect1C::SyncNextAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgTidalConnect1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgTidalConnect1C : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgTidalConnect1C() {};
private:
    CpProxyAvOpenhomeOrgTidalConnect1C& iService;
};

SyncPreviousAvOpenhomeOrgTidalConnect1C::SyncPreviousAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgTidalConnect1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncToggleShuffleAvOpenhomeOrgTidalConnect1C : public SyncProxyAction
{
public:
    SyncToggleShuffleAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncToggleShuffleAvOpenhomeOrgTidalConnect1C() {};
private:
    CpProxyAvOpenhomeOrgTidalConnect1C& iService;
};

SyncToggleShuffleAvOpenhomeOrgTidalConnect1C::SyncToggleShuffleAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy)
    : iService(aProxy)
{
}

void SyncToggleShuffleAvOpenhomeOrgTidalConnect1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleShuffle(aAsync);
}


class SyncToggleLoopAvOpenhomeOrgTidalConnect1C : public SyncProxyAction
{
public:
    SyncToggleLoopAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncToggleLoopAvOpenhomeOrgTidalConnect1C() {};
private:
    CpProxyAvOpenhomeOrgTidalConnect1C& iService;
};

SyncToggleLoopAvOpenhomeOrgTidalConnect1C::SyncToggleLoopAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy)
    : iService(aProxy)
{
}

void SyncToggleLoopAvOpenhomeOrgTidalConnect1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleLoop(aAsync);
}


class SyncRequestMetadataAvOpenhomeOrgTidalConnect1C : public SyncProxyAction
{
public:
    SyncRequestMetadataAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRequestMetadataAvOpenhomeOrgTidalConnect1C() {};
private:
    CpProxyAvOpenhomeOrgTidalConnect1C& iService;
};

SyncRequestMetadataAvOpenhomeOrgTidalConnect1C::SyncRequestMetadataAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy)
    : iService(aProxy)
{
}

void SyncRequestMetadataAvOpenhomeOrgTidalConnect1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRequestMetadata(aAsync);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1C : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1C() {};
private:
    CpProxyAvOpenhomeOrgTidalConnect1C& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1C::SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncTransportStateAvOpenhomeOrgTidalConnect1C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgTidalConnect1C() {};
private:
    CpProxyAvOpenhomeOrgTidalConnect1C& iService;
    Brh& iValue;
};

SyncTransportStateAvOpenhomeOrgTidalConnect1C::SyncTransportStateAvOpenhomeOrgTidalConnect1C(CpProxyAvOpenhomeOrgTidalConnect1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgTidalConnect1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}

CpProxyAvOpenhomeOrgTidalConnect1C::CpProxyAvOpenhomeOrgTidalConnect1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "TidalConnect", 1, *reinterpret_cast<CpiDevice*>(aDevice))
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

    iActionToggleShuffle = new Action("ToggleShuffle");

    iActionToggleLoop = new Action("ToggleLoop");

    iActionRequestMetadata = new Action("RequestMetadata");

    iActionSeekSecondAbsolute = new Action("SeekSecondAbsolute");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSeekSecondAbsolute->AddInputParameter(param);

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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1C::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1C::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1C::RepeatOnePropertyChanged);
    iRepeatOne = new PropertyBool("RepeatOne", functor);
    AddProperty(iRepeatOne);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1C::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1C::UpdateCoverPropertyChanged);
    iUpdateCover = new PropertyBool("UpdateCover", functor);
    AddProperty(iUpdateCover);
}

CpProxyAvOpenhomeOrgTidalConnect1C::~CpProxyAvOpenhomeOrgTidalConnect1C()
{
    DestroyService();
    delete iActionPlay;
    delete iActionPause;
    delete iActionStop;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionToggleShuffle;
    delete iActionToggleLoop;
    delete iActionRequestMetadata;
    delete iActionSeekSecondAbsolute;
    delete iActionTransportState;
}

void CpProxyAvOpenhomeOrgTidalConnect1C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgTidalConnect1C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1C::SyncPause()
{
    SyncPauseAvOpenhomeOrgTidalConnect1C sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1C::SyncStop()
{
    SyncStopAvOpenhomeOrgTidalConnect1C sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1C::SyncNext()
{
    SyncNextAvOpenhomeOrgTidalConnect1C sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionNext, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1C::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgTidalConnect1C sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPrevious, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1C::SyncToggleShuffle()
{
    SyncToggleShuffleAvOpenhomeOrgTidalConnect1C sync(*this);
    BeginToggleShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::BeginToggleShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionToggleShuffle, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::EndToggleShuffle(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ToggleShuffle"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1C::SyncToggleLoop()
{
    SyncToggleLoopAvOpenhomeOrgTidalConnect1C sync(*this);
    BeginToggleLoop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::BeginToggleLoop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionToggleLoop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::EndToggleLoop(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ToggleLoop"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1C::SyncRequestMetadata()
{
    SyncRequestMetadataAvOpenhomeOrgTidalConnect1C sync(*this);
    BeginRequestMetadata(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::BeginRequestMetadata(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRequestMetadata, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::EndRequestMetadata(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("RequestMetadata"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTidalConnect1C::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1C sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1C::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgTidalConnect1C sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgTidalConnect1C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRepeatChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::SetPropertyRepeatOneChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRepeatOneChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iLock.Wait();
    iShuffleChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::SetPropertyUpdateCoverChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateCoverChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgTidalConnect1C::PropertyRepeat(TBool& aRepeat) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::PropertyRepeatOne(TBool& aRepeatOne) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aRepeatOne = iRepeatOne->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::PropertyShuffle(TBool& aShuffle) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::PropertyUpdateCover(TBool& aUpdateCover) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateCover = iUpdateCover->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::RepeatOnePropertyChanged()
{
    ReportEvent(iRepeatOneChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1C::UpdateCoverPropertyChanged()
{
    ReportEvent(iUpdateCoverChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgTidalConnect1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgTidalConnect1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1SyncPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1BeginPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1EndPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1SyncStop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1BeginStop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1EndStop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1SyncNext(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1BeginNext(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginNext(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1EndNext(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1SyncPrevious(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1BeginPrevious(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPrevious(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1EndPrevious(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1SyncToggleShuffle(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncToggleShuffle();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1BeginToggleShuffle(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginToggleShuffle(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1EndToggleShuffle(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndToggleShuffle(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1SyncToggleLoop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncToggleLoop();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1BeginToggleLoop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginToggleLoop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1EndToggleLoop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndToggleLoop(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1SyncRequestMetadata(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncRequestMetadata();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1BeginRequestMetadata(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRequestMetadata(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1EndRequestMetadata(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndRequestMetadata(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1SyncSeekSecondAbsolute(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1BeginSeekSecondAbsolute(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondAbsolute(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1EndSeekSecondAbsolute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1SyncTransportState(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1SetPropertyRepeatChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRepeatChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1SetPropertyRepeatOneChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRepeatOneChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1SetPropertyShuffleChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyShuffleChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTidalConnect1SetPropertyUpdateCoverChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateCoverChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1PropertyRepeat(THandle aHandle, uint32_t* aRepeat)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Repeat;
    try {
        proxyC->PropertyRepeat(Repeat);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aRepeat = Repeat? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1PropertyRepeatOne(THandle aHandle, uint32_t* aRepeatOne)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool RepeatOne;
    try {
        proxyC->PropertyRepeatOne(RepeatOne);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aRepeatOne = RepeatOne? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1PropertyShuffle(THandle aHandle, uint32_t* aShuffle)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Shuffle;
    try {
        proxyC->PropertyShuffle(Shuffle);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aShuffle = Shuffle? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTidalConnect1PropertyUpdateCover(THandle aHandle, uint32_t* aUpdateCover)
{
    CpProxyAvOpenhomeOrgTidalConnect1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTidalConnect1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool UpdateCover;
    try {
        proxyC->PropertyUpdateCover(UpdateCover);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aUpdateCover = UpdateCover? 1 : 0;
    return 0;
}

