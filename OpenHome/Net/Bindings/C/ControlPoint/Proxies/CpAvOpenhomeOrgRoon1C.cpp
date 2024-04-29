#include "CpAvOpenhomeOrgRoon1.h"
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

class CpProxyAvOpenhomeOrgRoon1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgRoon1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgRoon1C();
    //CpProxyAvOpenhomeOrgRoon1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgRoon1*>(iProxy); }

    void SyncPlay();
    void BeginPlay(FunctorAsync& aFunctor);
    void EndPlay(IAsync& aAsync);

    void SyncPause();
    void BeginPause(FunctorAsync& aFunctor);
    void EndPause(IAsync& aAsync);

    void SyncPlayPause();
    void BeginPlayPause(FunctorAsync& aFunctor);
    void EndPlayPause(IAsync& aAsync);

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

    void SyncRepeat(TBool& aValue);
    void BeginRepeat(FunctorAsync& aFunctor);
    void EndRepeat(IAsync& aAsync, TBool& aValue);

    void SyncShuffle(TBool& aValue);
    void BeginShuffle(FunctorAsync& aFunctor);
    void EndShuffle(IAsync& aAsync, TBool& aValue);

    void SyncSeekSecondAbsolute(TUint aValue);
    void BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor);
    void EndSeekSecondAbsolute(IAsync& aAsync);

    void SyncSeekSecondRelative(TInt aValue);
    void BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor);
    void EndSeekSecondRelative(IAsync& aAsync);

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
    Action* iActionPlayPause;
    Action* iActionStop;
    Action* iActionNext;
    Action* iActionPrevious;
    Action* iActionToggleShuffle;
    Action* iActionToggleLoop;
    Action* iActionRepeat;
    Action* iActionShuffle;
    Action* iActionSeekSecondAbsolute;
    Action* iActionSeekSecondRelative;
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


class SyncPlayAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
};

SyncPlayAvOpenhomeOrgRoon1C::SyncPlayAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
};

SyncPauseAvOpenhomeOrgRoon1C::SyncPauseAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncPlayPauseAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncPlayPauseAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayPauseAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
};

SyncPlayPauseAvOpenhomeOrgRoon1C::SyncPlayPauseAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayPauseAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayPause(aAsync);
}


class SyncStopAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
};

SyncStopAvOpenhomeOrgRoon1C::SyncStopAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
};

SyncNextAvOpenhomeOrgRoon1C::SyncNextAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
};

SyncPreviousAvOpenhomeOrgRoon1C::SyncPreviousAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncToggleShuffleAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncToggleShuffleAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncToggleShuffleAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
};

SyncToggleShuffleAvOpenhomeOrgRoon1C::SyncToggleShuffleAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy)
    : iService(aProxy)
{
}

void SyncToggleShuffleAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleShuffle(aAsync);
}


class SyncToggleLoopAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncToggleLoopAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncToggleLoopAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
};

SyncToggleLoopAvOpenhomeOrgRoon1C::SyncToggleLoopAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy)
    : iService(aProxy)
{
}

void SyncToggleLoopAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleLoop(aAsync);
}


class SyncRepeatAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRepeatAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
    TBool& iValue;
};

SyncRepeatAvOpenhomeOrgRoon1C::SyncRepeatAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iValue);
}


class SyncShuffleAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncShuffleAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
    TBool& iValue;
};

SyncShuffleAvOpenhomeOrgRoon1C::SyncShuffleAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncShuffleAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iValue);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1C::SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgRoon1C::SyncSeekSecondRelativeAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncTransportStateAvOpenhomeOrgRoon1C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgRoon1C() {};
private:
    CpProxyAvOpenhomeOrgRoon1C& iService;
    Brh& iValue;
};

SyncTransportStateAvOpenhomeOrgRoon1C::SyncTransportStateAvOpenhomeOrgRoon1C(CpProxyAvOpenhomeOrgRoon1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgRoon1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}

CpProxyAvOpenhomeOrgRoon1C::CpProxyAvOpenhomeOrgRoon1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Roon", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPlay = new Action("Play");

    iActionPause = new Action("Pause");

    iActionPlayPause = new Action("PlayPause");

    iActionStop = new Action("Stop");

    iActionNext = new Action("Next");

    iActionPrevious = new Action("Previous");

    iActionToggleShuffle = new Action("ToggleShuffle");

    iActionToggleLoop = new Action("ToggleLoop");

    iActionRepeat = new Action("Repeat");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionRepeat->AddOutputParameter(param);

    iActionShuffle = new Action("Shuffle");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionShuffle->AddOutputParameter(param);

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

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1C::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1C::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1C::RepeatOnePropertyChanged);
    iRepeatOne = new PropertyBool("RepeatOne", functor);
    AddProperty(iRepeatOne);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1C::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1C::UpdateCoverPropertyChanged);
    iUpdateCover = new PropertyBool("UpdateCover", functor);
    AddProperty(iUpdateCover);
}

CpProxyAvOpenhomeOrgRoon1C::~CpProxyAvOpenhomeOrgRoon1C()
{
    DestroyService();
    delete iActionPlay;
    delete iActionPause;
    delete iActionPlayPause;
    delete iActionStop;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionToggleShuffle;
    delete iActionToggleLoop;
    delete iActionRepeat;
    delete iActionShuffle;
    delete iActionSeekSecondAbsolute;
    delete iActionSeekSecondRelative;
    delete iActionTransportState;
}

void CpProxyAvOpenhomeOrgRoon1C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgRoon1C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1C::SyncPause()
{
    SyncPauseAvOpenhomeOrgRoon1C sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1C::SyncPlayPause()
{
    SyncPlayPauseAvOpenhomeOrgRoon1C sync(*this);
    BeginPlayPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginPlayPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlayPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndPlayPause(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlayPause"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgRoon1C::SyncStop()
{
    SyncStopAvOpenhomeOrgRoon1C sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1C::SyncNext()
{
    SyncNextAvOpenhomeOrgRoon1C sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionNext, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1C::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgRoon1C sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPrevious, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1C::SyncToggleShuffle()
{
    SyncToggleShuffleAvOpenhomeOrgRoon1C sync(*this);
    BeginToggleShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginToggleShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionToggleShuffle, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndToggleShuffle(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1C::SyncToggleLoop()
{
    SyncToggleLoopAvOpenhomeOrgRoon1C sync(*this);
    BeginToggleLoop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginToggleLoop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionToggleLoop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndToggleLoop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1C::SyncRepeat(TBool& aValue)
{
    SyncRepeatAvOpenhomeOrgRoon1C sync(*this, aValue);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndRepeat(IAsync& aAsync, TBool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Repeat"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgRoon1C::SyncShuffle(TBool& aValue)
{
    SyncShuffleAvOpenhomeOrgRoon1C sync(*this, aValue);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndShuffle(IAsync& aAsync, TBool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Shuffle"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgRoon1C::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1C sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1C::SyncSeekSecondRelative(TInt aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgRoon1C sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1C::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgRoon1C sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1C::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgRoon1C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRoon1C::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRepeatChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRoon1C::SetPropertyRepeatOneChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRepeatOneChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRoon1C::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iLock.Wait();
    iShuffleChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRoon1C::SetPropertyUpdateCoverChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateCoverChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRoon1C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgRoon1C::PropertyRepeat(TBool& aRepeat) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgRoon1C::PropertyRepeatOne(TBool& aRepeatOne) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aRepeatOne = iRepeatOne->Value();
}

void CpProxyAvOpenhomeOrgRoon1C::PropertyShuffle(TBool& aShuffle) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgRoon1C::PropertyUpdateCover(TBool& aUpdateCover) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateCover = iUpdateCover->Value();
}

void CpProxyAvOpenhomeOrgRoon1C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgRoon1C::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgRoon1C::RepeatOnePropertyChanged()
{
    ReportEvent(iRepeatOneChanged);
}

void CpProxyAvOpenhomeOrgRoon1C::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}

void CpProxyAvOpenhomeOrgRoon1C::UpdateCoverPropertyChanged()
{
    ReportEvent(iUpdateCoverChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgRoon1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgRoon1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgRoon1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncPlayPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncPlayPause();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginPlayPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlayPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndPlayPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPlayPause(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncStop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginStop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndStop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncNext(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginNext(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginNext(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndNext(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncPrevious(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginPrevious(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPrevious(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndPrevious(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncToggleShuffle(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginToggleShuffle(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginToggleShuffle(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndToggleShuffle(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncToggleLoop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginToggleLoop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginToggleLoop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndToggleLoop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncRepeat(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncRepeat(Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginRepeat(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRepeat(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndRepeat(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndRepeat(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncShuffle(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncShuffle(Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginShuffle(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginShuffle(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndShuffle(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndShuffle(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncSeekSecondAbsolute(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginSeekSecondAbsolute(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondAbsolute(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndSeekSecondAbsolute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncSeekSecondRelative(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginSeekSecondRelative(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondRelative(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndSeekSecondRelative(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1SyncTransportState(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRoon1BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRoon1SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRoon1SetPropertyRepeatChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRepeatChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRoon1SetPropertyRepeatOneChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRepeatOneChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRoon1SetPropertyShuffleChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyShuffleChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRoon1SetPropertyUpdateCoverChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateCoverChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1PropertyRepeat(THandle aHandle, uint32_t* aRepeat)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1PropertyRepeatOne(THandle aHandle, uint32_t* aRepeatOne)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1PropertyShuffle(THandle aHandle, uint32_t* aShuffle)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRoon1PropertyUpdateCover(THandle aHandle, uint32_t* aUpdateCover)
{
    CpProxyAvOpenhomeOrgRoon1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRoon1C*>(aHandle);
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

