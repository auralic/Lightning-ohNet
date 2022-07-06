#include "CpAvOpenhomeOrgBluetooth1.h"
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

class CpProxyAvOpenhomeOrgBluetooth1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgBluetooth1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgBluetooth1C();
    //CpProxyAvOpenhomeOrgBluetooth1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgBluetooth1*>(iProxy); }

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

    void SyncSetRepeat(TBool aValue);
    void BeginSetRepeat(TBool aValue, FunctorAsync& aFunctor);
    void EndSetRepeat(IAsync& aAsync);

    void SyncRepeat(TBool& aValue);
    void BeginRepeat(FunctorAsync& aFunctor);
    void EndRepeat(IAsync& aAsync, TBool& aValue);

    void SyncSetRepeatOne(TBool aValue);
    void BeginSetRepeatOne(TBool aValue, FunctorAsync& aFunctor);
    void EndSetRepeatOne(IAsync& aAsync);

    void SyncRepeatOne(TBool& aValue);
    void BeginRepeatOne(FunctorAsync& aFunctor);
    void EndRepeatOne(IAsync& aAsync, TBool& aValue);

    void SyncSetShuffle(TBool aValue);
    void BeginSetShuffle(TBool aValue, FunctorAsync& aFunctor);
    void EndSetShuffle(IAsync& aAsync);

    void SyncShuffle(TBool& aValue);
    void BeginShuffle(FunctorAsync& aFunctor);
    void EndShuffle(IAsync& aAsync, TBool& aValue);

    void SyncTransportState(Brh& aValue);
    void BeginTransportState(FunctorAsync& aFunctor);
    void EndTransportState(IAsync& aAsync, Brh& aValue);

    void SetPropertyTransportStateChanged(Functor& aFunctor);
    void SetPropertyRepeatChanged(Functor& aFunctor);
    void SetPropertyRepeatOneChanged(Functor& aFunctor);
    void SetPropertyShuffleChanged(Functor& aFunctor);

    void PropertyTransportState(Brhz& aTransportState) const;
    void PropertyRepeat(TBool& aRepeat) const;
    void PropertyRepeatOne(TBool& aRepeatOne) const;
    void PropertyShuffle(TBool& aShuffle) const;
private:
    void TransportStatePropertyChanged();
    void RepeatPropertyChanged();
    void RepeatOnePropertyChanged();
    void ShufflePropertyChanged();
private:
    Mutex iLock;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionNext;
    Action* iActionPrevious;
    Action* iActionSetRepeat;
    Action* iActionRepeat;
    Action* iActionSetRepeatOne;
    Action* iActionRepeatOne;
    Action* iActionSetShuffle;
    Action* iActionShuffle;
    Action* iActionTransportState;
    PropertyString* iTransportState;
    PropertyBool* iRepeat;
    PropertyBool* iRepeatOne;
    PropertyBool* iShuffle;
    Functor iTransportStateChanged;
    Functor iRepeatChanged;
    Functor iRepeatOneChanged;
    Functor iShuffleChanged;
};


class SyncPlayAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
};

SyncPlayAvOpenhomeOrgBluetooth1C::SyncPlayAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
};

SyncPauseAvOpenhomeOrgBluetooth1C::SyncPauseAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
};

SyncStopAvOpenhomeOrgBluetooth1C::SyncStopAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
};

SyncNextAvOpenhomeOrgBluetooth1C::SyncNextAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
};

SyncPreviousAvOpenhomeOrgBluetooth1C::SyncPreviousAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncSetRepeatAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncSetRepeatAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRepeatAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
};

SyncSetRepeatAvOpenhomeOrgBluetooth1C::SyncSetRepeatAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeat(aAsync);
}


class SyncRepeatAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRepeatAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
    TBool& iValue;
};

SyncRepeatAvOpenhomeOrgBluetooth1C::SyncRepeatAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iValue);
}


class SyncSetRepeatOneAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncSetRepeatOneAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRepeatOneAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
};

SyncSetRepeatOneAvOpenhomeOrgBluetooth1C::SyncSetRepeatOneAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatOneAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeatOne(aAsync);
}


class SyncRepeatOneAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncRepeatOneAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRepeatOneAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
    TBool& iValue;
};

SyncRepeatOneAvOpenhomeOrgBluetooth1C::SyncRepeatOneAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatOneAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeatOne(aAsync, iValue);
}


class SyncSetShuffleAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncSetShuffleAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetShuffleAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
};

SyncSetShuffleAvOpenhomeOrgBluetooth1C::SyncSetShuffleAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetShuffleAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetShuffle(aAsync);
}


class SyncShuffleAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncShuffleAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
    TBool& iValue;
};

SyncShuffleAvOpenhomeOrgBluetooth1C::SyncShuffleAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncShuffleAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iValue);
}


class SyncTransportStateAvOpenhomeOrgBluetooth1C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgBluetooth1C() {};
private:
    CpProxyAvOpenhomeOrgBluetooth1C& iService;
    Brh& iValue;
};

SyncTransportStateAvOpenhomeOrgBluetooth1C::SyncTransportStateAvOpenhomeOrgBluetooth1C(CpProxyAvOpenhomeOrgBluetooth1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgBluetooth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}

CpProxyAvOpenhomeOrgBluetooth1C::CpProxyAvOpenhomeOrgBluetooth1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Bluetooth", 1, *reinterpret_cast<CpiDevice*>(aDevice))
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

    iActionSetRepeat = new Action("SetRepeat");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionSetRepeat->AddInputParameter(param);

    iActionRepeat = new Action("Repeat");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionRepeat->AddOutputParameter(param);

    iActionSetRepeatOne = new Action("SetRepeatOne");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionSetRepeatOne->AddInputParameter(param);

    iActionRepeatOne = new Action("RepeatOne");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionRepeatOne->AddOutputParameter(param);

    iActionSetShuffle = new Action("SetShuffle");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionSetShuffle->AddInputParameter(param);

    iActionShuffle = new Action("Shuffle");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionShuffle->AddOutputParameter(param);

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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1C::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1C::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1C::RepeatOnePropertyChanged);
    iRepeatOne = new PropertyBool("RepeatOne", functor);
    AddProperty(iRepeatOne);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1C::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
}

CpProxyAvOpenhomeOrgBluetooth1C::~CpProxyAvOpenhomeOrgBluetooth1C()
{
    DestroyService();
    delete iActionPlay;
    delete iActionPause;
    delete iActionStop;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionSetRepeat;
    delete iActionRepeat;
    delete iActionSetRepeatOne;
    delete iActionRepeatOne;
    delete iActionSetShuffle;
    delete iActionShuffle;
    delete iActionTransportState;
}

void CpProxyAvOpenhomeOrgBluetooth1C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgBluetooth1C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1C::SyncPause()
{
    SyncPauseAvOpenhomeOrgBluetooth1C sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1C::SyncStop()
{
    SyncStopAvOpenhomeOrgBluetooth1C sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1C::SyncNext()
{
    SyncNextAvOpenhomeOrgBluetooth1C sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionNext, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1C::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgBluetooth1C sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPrevious, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1C::SyncSetRepeat(TBool aValue)
{
    SyncSetRepeatAvOpenhomeOrgBluetooth1C sync(*this);
    BeginSetRepeat(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginSetRepeat(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetRepeat, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeat->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndSetRepeat(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetRepeat"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgBluetooth1C::SyncRepeat(TBool& aValue)
{
    SyncRepeatAvOpenhomeOrgBluetooth1C sync(*this, aValue);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndRepeat(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgBluetooth1C::SyncSetRepeatOne(TBool aValue)
{
    SyncSetRepeatOneAvOpenhomeOrgBluetooth1C sync(*this);
    BeginSetRepeatOne(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginSetRepeatOne(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetRepeatOne, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeatOne->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndSetRepeatOne(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetRepeatOne"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgBluetooth1C::SyncRepeatOne(TBool& aValue)
{
    SyncRepeatOneAvOpenhomeOrgBluetooth1C sync(*this, aValue);
    BeginRepeatOne(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginRepeatOne(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRepeatOne, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeatOne->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndRepeatOne(IAsync& aAsync, TBool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("RepeatOne"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgBluetooth1C::SyncSetShuffle(TBool aValue)
{
    SyncSetShuffleAvOpenhomeOrgBluetooth1C sync(*this);
    BeginSetShuffle(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginSetShuffle(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetShuffle, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetShuffle->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndSetShuffle(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetShuffle"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgBluetooth1C::SyncShuffle(TBool& aValue)
{
    SyncShuffleAvOpenhomeOrgBluetooth1C sync(*this, aValue);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndShuffle(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgBluetooth1C::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgBluetooth1C sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1C::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgBluetooth1C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1C::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRepeatChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1C::SetPropertyRepeatOneChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRepeatOneChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1C::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iLock.Wait();
    iShuffleChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgBluetooth1C::PropertyRepeat(TBool& aRepeat) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgBluetooth1C::PropertyRepeatOne(TBool& aRepeatOne) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aRepeatOne = iRepeatOne->Value();
}

void CpProxyAvOpenhomeOrgBluetooth1C::PropertyShuffle(TBool& aShuffle) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgBluetooth1C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgBluetooth1C::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgBluetooth1C::RepeatOnePropertyChanged()
{
    ReportEvent(iRepeatOneChanged);
}

void CpProxyAvOpenhomeOrgBluetooth1C::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgBluetooth1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgBluetooth1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgBluetooth1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncStop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginStop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndStop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncNext(THandle aHandle)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginNext(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginNext(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndNext(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncPrevious(THandle aHandle)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginPrevious(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPrevious(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndPrevious(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncSetRepeat(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetRepeat((aValue==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginSetRepeat(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetRepeat((aValue==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndSetRepeat(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetRepeat(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncRepeat(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginRepeat(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRepeat(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndRepeat(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncSetRepeatOne(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetRepeatOne((aValue==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginSetRepeatOne(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetRepeatOne((aValue==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndSetRepeatOne(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetRepeatOne(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncRepeatOne(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncRepeatOne(Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginRepeatOne(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRepeatOne(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndRepeatOne(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndRepeatOne(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncSetShuffle(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetShuffle((aValue==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginSetShuffle(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetShuffle((aValue==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndSetShuffle(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetShuffle(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncShuffle(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginShuffle(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginShuffle(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndShuffle(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1SyncTransportState(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgBluetooth1BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgBluetooth1SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgBluetooth1SetPropertyRepeatChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRepeatChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgBluetooth1SetPropertyRepeatOneChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRepeatOneChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgBluetooth1SetPropertyShuffleChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyShuffleChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1PropertyRepeat(THandle aHandle, uint32_t* aRepeat)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1PropertyRepeatOne(THandle aHandle, uint32_t* aRepeatOne)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgBluetooth1PropertyShuffle(THandle aHandle, uint32_t* aShuffle)
{
    CpProxyAvOpenhomeOrgBluetooth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgBluetooth1C*>(aHandle);
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

