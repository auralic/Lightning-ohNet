#include "CpAvOpenhomeOrgRoon1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPlayAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
};

class SyncPauseAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
};

class SyncPlayPauseAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncPlayPauseAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
};

class SyncStopAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
};

class SyncNextAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
};

class SyncPreviousAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
};

class SyncToggleShuffleAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncToggleShuffleAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
};

class SyncToggleLoopAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncToggleLoopAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
};

class SyncRepeatAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
    TBool& iValue;
};

class SyncShuffleAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
    TBool& iValue;
};

class SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
};

class SyncSeekSecondRelativeAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
};

class SyncTransportStateAvOpenhomeOrgRoon1 : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRoon1& iService;
    Brh& iValue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPlayAvOpenhomeOrgRoon1

SyncPlayAvOpenhomeOrgRoon1::SyncPlayAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}

// SyncPauseAvOpenhomeOrgRoon1

SyncPauseAvOpenhomeOrgRoon1::SyncPauseAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}

// SyncPlayPauseAvOpenhomeOrgRoon1

SyncPlayPauseAvOpenhomeOrgRoon1::SyncPlayPauseAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayPauseAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayPause(aAsync);
}

// SyncStopAvOpenhomeOrgRoon1

SyncStopAvOpenhomeOrgRoon1::SyncStopAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}

// SyncNextAvOpenhomeOrgRoon1

SyncNextAvOpenhomeOrgRoon1::SyncNextAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}

// SyncPreviousAvOpenhomeOrgRoon1

SyncPreviousAvOpenhomeOrgRoon1::SyncPreviousAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}

// SyncToggleShuffleAvOpenhomeOrgRoon1

SyncToggleShuffleAvOpenhomeOrgRoon1::SyncToggleShuffleAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy)
    : iService(aProxy)
{
}

void SyncToggleShuffleAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleShuffle(aAsync);
}

// SyncToggleLoopAvOpenhomeOrgRoon1

SyncToggleLoopAvOpenhomeOrgRoon1::SyncToggleLoopAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy)
    : iService(aProxy)
{
}

void SyncToggleLoopAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleLoop(aAsync);
}

// SyncRepeatAvOpenhomeOrgRoon1

SyncRepeatAvOpenhomeOrgRoon1::SyncRepeatAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iValue);
}

// SyncShuffleAvOpenhomeOrgRoon1

SyncShuffleAvOpenhomeOrgRoon1::SyncShuffleAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncShuffleAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iValue);
}

// SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1

SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1::SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}

// SyncSeekSecondRelativeAvOpenhomeOrgRoon1

SyncSeekSecondRelativeAvOpenhomeOrgRoon1::SyncSeekSecondRelativeAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}

// SyncTransportStateAvOpenhomeOrgRoon1

SyncTransportStateAvOpenhomeOrgRoon1::SyncTransportStateAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgRoon1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


// CpProxyAvOpenhomeOrgRoon1

CpProxyAvOpenhomeOrgRoon1::CpProxyAvOpenhomeOrgRoon1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Roon", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1::RepeatOnePropertyChanged);
    iRepeatOne = new PropertyBool("RepeatOne", functor);
    AddProperty(iRepeatOne);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1::UpdateCoverPropertyChanged);
    iUpdateCover = new PropertyBool("UpdateCover", functor);
    AddProperty(iUpdateCover);
}

CpProxyAvOpenhomeOrgRoon1::~CpProxyAvOpenhomeOrgRoon1()
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

void CpProxyAvOpenhomeOrgRoon1::SyncPlay()
{
    SyncPlayAvOpenhomeOrgRoon1 sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1::SyncPause()
{
    SyncPauseAvOpenhomeOrgRoon1 sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1::SyncPlayPause()
{
    SyncPlayPauseAvOpenhomeOrgRoon1 sync(*this);
    BeginPlayPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginPlayPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlayPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndPlayPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1::SyncStop()
{
    SyncStopAvOpenhomeOrgRoon1 sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1::SyncNext()
{
    SyncNextAvOpenhomeOrgRoon1 sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgRoon1 sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1::SyncToggleShuffle()
{
    SyncToggleShuffleAvOpenhomeOrgRoon1 sync(*this);
    BeginToggleShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginToggleShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionToggleShuffle, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndToggleShuffle(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1::SyncToggleLoop()
{
    SyncToggleLoopAvOpenhomeOrgRoon1 sync(*this);
    BeginToggleLoop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginToggleLoop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionToggleLoop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndToggleLoop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1::SyncRepeat(TBool& aValue)
{
    SyncRepeatAvOpenhomeOrgRoon1 sync(*this, aValue);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndRepeat(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgRoon1::SyncShuffle(TBool& aValue)
{
    SyncShuffleAvOpenhomeOrgRoon1 sync(*this, aValue);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndShuffle(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgRoon1::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1 sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1::SyncSeekSecondRelative(TInt aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgRoon1 sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgRoon1 sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgRoon1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRoon1::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRoon1::SetPropertyRepeatOneChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatOneChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRoon1::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iShuffleChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRoon1::SetPropertyUpdateCoverChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateCoverChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRoon1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgRoon1::PropertyRepeat(TBool& aRepeat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgRoon1::PropertyRepeatOne(TBool& aRepeatOne) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeatOne = iRepeatOne->Value();
}

void CpProxyAvOpenhomeOrgRoon1::PropertyShuffle(TBool& aShuffle) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgRoon1::PropertyUpdateCover(TBool& aUpdateCover) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateCover = iUpdateCover->Value();
}

void CpProxyAvOpenhomeOrgRoon1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgRoon1::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgRoon1::RepeatOnePropertyChanged()
{
    ReportEvent(iRepeatOneChanged);
}

void CpProxyAvOpenhomeOrgRoon1::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}

void CpProxyAvOpenhomeOrgRoon1::UpdateCoverPropertyChanged()
{
    ReportEvent(iUpdateCoverChanged);
}


void CpProxyAvOpenhomeOrgRoon1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgRoon1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgRoon1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgRoon1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgRoon1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgRoon1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgRoon1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgRoon1::Version() const
{
  return iCpProxy.Version();
}


