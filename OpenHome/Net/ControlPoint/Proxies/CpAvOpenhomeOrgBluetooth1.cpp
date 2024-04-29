#include "CpAvOpenhomeOrgBluetooth1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPlayAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
};

class SyncPauseAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
};

class SyncStopAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
};

class SyncNextAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
};

class SyncPreviousAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
};

class SyncSetRepeatAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncSetRepeatAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
};

class SyncRepeatAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
    TBool& iValue;
};

class SyncSetRepeatOneAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncSetRepeatOneAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
};

class SyncRepeatOneAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncRepeatOneAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
    TBool& iValue;
};

class SyncSetShuffleAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncSetShuffleAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
};

class SyncShuffleAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
    TBool& iValue;
};

class SyncTransportStateAvOpenhomeOrgBluetooth1 : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgBluetooth1& iService;
    Brh& iValue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPlayAvOpenhomeOrgBluetooth1

SyncPlayAvOpenhomeOrgBluetooth1::SyncPlayAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}

// SyncPauseAvOpenhomeOrgBluetooth1

SyncPauseAvOpenhomeOrgBluetooth1::SyncPauseAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}

// SyncStopAvOpenhomeOrgBluetooth1

SyncStopAvOpenhomeOrgBluetooth1::SyncStopAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}

// SyncNextAvOpenhomeOrgBluetooth1

SyncNextAvOpenhomeOrgBluetooth1::SyncNextAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}

// SyncPreviousAvOpenhomeOrgBluetooth1

SyncPreviousAvOpenhomeOrgBluetooth1::SyncPreviousAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}

// SyncSetRepeatAvOpenhomeOrgBluetooth1

SyncSetRepeatAvOpenhomeOrgBluetooth1::SyncSetRepeatAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeat(aAsync);
}

// SyncRepeatAvOpenhomeOrgBluetooth1

SyncRepeatAvOpenhomeOrgBluetooth1::SyncRepeatAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iValue);
}

// SyncSetRepeatOneAvOpenhomeOrgBluetooth1

SyncSetRepeatOneAvOpenhomeOrgBluetooth1::SyncSetRepeatOneAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatOneAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeatOne(aAsync);
}

// SyncRepeatOneAvOpenhomeOrgBluetooth1

SyncRepeatOneAvOpenhomeOrgBluetooth1::SyncRepeatOneAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatOneAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeatOne(aAsync, iValue);
}

// SyncSetShuffleAvOpenhomeOrgBluetooth1

SyncSetShuffleAvOpenhomeOrgBluetooth1::SyncSetShuffleAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy)
    : iService(aProxy)
{
}

void SyncSetShuffleAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetShuffle(aAsync);
}

// SyncShuffleAvOpenhomeOrgBluetooth1

SyncShuffleAvOpenhomeOrgBluetooth1::SyncShuffleAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncShuffleAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iValue);
}

// SyncTransportStateAvOpenhomeOrgBluetooth1

SyncTransportStateAvOpenhomeOrgBluetooth1::SyncTransportStateAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgBluetooth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


// CpProxyAvOpenhomeOrgBluetooth1

CpProxyAvOpenhomeOrgBluetooth1::CpProxyAvOpenhomeOrgBluetooth1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Bluetooth", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1::RepeatOnePropertyChanged);
    iRepeatOne = new PropertyBool("RepeatOne", functor);
    AddProperty(iRepeatOne);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
}

CpProxyAvOpenhomeOrgBluetooth1::~CpProxyAvOpenhomeOrgBluetooth1()
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncPlay()
{
    SyncPlayAvOpenhomeOrgBluetooth1 sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncPause()
{
    SyncPauseAvOpenhomeOrgBluetooth1 sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncStop()
{
    SyncStopAvOpenhomeOrgBluetooth1 sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncNext()
{
    SyncNextAvOpenhomeOrgBluetooth1 sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgBluetooth1 sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncSetRepeat(TBool aValue)
{
    SyncSetRepeatAvOpenhomeOrgBluetooth1 sync(*this);
    BeginSetRepeat(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginSetRepeat(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetRepeat, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeat->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndSetRepeat(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncRepeat(TBool& aValue)
{
    SyncRepeatAvOpenhomeOrgBluetooth1 sync(*this, aValue);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndRepeat(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncSetRepeatOne(TBool aValue)
{
    SyncSetRepeatOneAvOpenhomeOrgBluetooth1 sync(*this);
    BeginSetRepeatOne(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginSetRepeatOne(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetRepeatOne, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeatOne->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndSetRepeatOne(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncRepeatOne(TBool& aValue)
{
    SyncRepeatOneAvOpenhomeOrgBluetooth1 sync(*this, aValue);
    BeginRepeatOne(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginRepeatOne(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRepeatOne, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeatOne->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndRepeatOne(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncSetShuffle(TBool aValue)
{
    SyncSetShuffleAvOpenhomeOrgBluetooth1 sync(*this);
    BeginSetShuffle(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginSetShuffle(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetShuffle, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetShuffle->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndSetShuffle(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncShuffle(TBool& aValue)
{
    SyncShuffleAvOpenhomeOrgBluetooth1 sync(*this, aValue);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndShuffle(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgBluetooth1::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgBluetooth1 sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgBluetooth1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1::SetPropertyRepeatOneChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatOneChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iShuffleChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgBluetooth1::PropertyRepeat(TBool& aRepeat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgBluetooth1::PropertyRepeatOne(TBool& aRepeatOne) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeatOne = iRepeatOne->Value();
}

void CpProxyAvOpenhomeOrgBluetooth1::PropertyShuffle(TBool& aShuffle) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgBluetooth1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgBluetooth1::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgBluetooth1::RepeatOnePropertyChanged()
{
    ReportEvent(iRepeatOneChanged);
}

void CpProxyAvOpenhomeOrgBluetooth1::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}


void CpProxyAvOpenhomeOrgBluetooth1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgBluetooth1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgBluetooth1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgBluetooth1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgBluetooth1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgBluetooth1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgBluetooth1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgBluetooth1::Version() const
{
  return iCpProxy.Version();
}


