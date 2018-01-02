#include "CpAvOpenhomeOrgRoon1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

#include <string>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncPlayAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
};

SyncPlayAvOpenhomeOrgRoon1Cpp::SyncPlayAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
};

SyncPauseAvOpenhomeOrgRoon1Cpp::SyncPauseAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncPlayPauseAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncPlayPauseAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayPauseAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
};

SyncPlayPauseAvOpenhomeOrgRoon1Cpp::SyncPlayPauseAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayPauseAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayPause(aAsync);
}


class SyncStopAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
};

SyncStopAvOpenhomeOrgRoon1Cpp::SyncStopAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
};

SyncNextAvOpenhomeOrgRoon1Cpp::SyncNextAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
};

SyncPreviousAvOpenhomeOrgRoon1Cpp::SyncPreviousAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncToggleShuffleAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncToggleShuffleAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncToggleShuffleAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
};

SyncToggleShuffleAvOpenhomeOrgRoon1Cpp::SyncToggleShuffleAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncToggleShuffleAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleShuffle(aAsync);
}


class SyncToggleLoopAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncToggleLoopAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncToggleLoopAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
};

SyncToggleLoopAvOpenhomeOrgRoon1Cpp::SyncToggleLoopAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncToggleLoopAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleLoop(aAsync);
}


class SyncRepeatAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRepeatAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
    bool& iValue;
};

SyncRepeatAvOpenhomeOrgRoon1Cpp::SyncRepeatAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iValue);
}


class SyncShuffleAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncShuffleAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
    bool& iValue;
};

SyncShuffleAvOpenhomeOrgRoon1Cpp::SyncShuffleAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncShuffleAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iValue);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1Cpp::SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgRoon1Cpp::SyncSeekSecondRelativeAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncTransportStateAvOpenhomeOrgRoon1Cpp : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgRoon1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRoon1Cpp& iService;
    std::string& iValue;
};

SyncTransportStateAvOpenhomeOrgRoon1Cpp::SyncTransportStateAvOpenhomeOrgRoon1Cpp(CpProxyAvOpenhomeOrgRoon1Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgRoon1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


CpProxyAvOpenhomeOrgRoon1Cpp::CpProxyAvOpenhomeOrgRoon1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("av-openhome-org", "Roon", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1Cpp::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1Cpp::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1Cpp::RepeatOnePropertyChanged);
    iRepeatOne = new PropertyBool("RepeatOne", functor);
    AddProperty(iRepeatOne);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1Cpp::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRoon1Cpp::UpdateCoverPropertyChanged);
    iUpdateCover = new PropertyBool("UpdateCover", functor);
    AddProperty(iUpdateCover);
}

CpProxyAvOpenhomeOrgRoon1Cpp::~CpProxyAvOpenhomeOrgRoon1Cpp()
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncPlay()
{
    SyncPlayAvOpenhomeOrgRoon1Cpp sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionPlay, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncPause()
{
    SyncPauseAvOpenhomeOrgRoon1Cpp sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionPause, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncPlayPause()
{
    SyncPlayPauseAvOpenhomeOrgRoon1Cpp sync(*this);
    BeginPlayPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginPlayPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionPlayPause, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndPlayPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncStop()
{
    SyncStopAvOpenhomeOrgRoon1Cpp sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionStop, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncNext()
{
    SyncNextAvOpenhomeOrgRoon1Cpp sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionNext, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgRoon1Cpp sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionPrevious, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncToggleShuffle()
{
    SyncToggleShuffleAvOpenhomeOrgRoon1Cpp sync(*this);
    BeginToggleShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginToggleShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionToggleShuffle, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndToggleShuffle(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncToggleLoop()
{
    SyncToggleLoopAvOpenhomeOrgRoon1Cpp sync(*this);
    BeginToggleLoop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginToggleLoop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionToggleLoop, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndToggleLoop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncRepeat(bool& aValue)
{
    SyncRepeatAvOpenhomeOrgRoon1Cpp sync(*this, aValue);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndRepeat(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncShuffle(bool& aValue)
{
    SyncShuffleAvOpenhomeOrgRoon1Cpp sync(*this, aValue);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndShuffle(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncSeekSecondAbsolute(uint32_t aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1Cpp sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginSeekSecondAbsolute(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncSeekSecondRelative(int32_t aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgRoon1Cpp sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginSeekSecondRelative(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRoon1Cpp::SyncTransportState(std::string& aValue)
{
    SyncTransportStateAvOpenhomeOrgRoon1Cpp sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::EndTransportState(IAsync& aAsync, std::string& aValue)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgRoon1Cpp::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock->Wait();
    iTransportStateChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iLock->Wait();
    iRepeatChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::SetPropertyRepeatOneChanged(Functor& aFunctor)
{
    iLock->Wait();
    iRepeatOneChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iLock->Wait();
    iShuffleChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::SetPropertyUpdateCoverChanged(Functor& aFunctor)
{
    iLock->Wait();
    iUpdateCoverChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::PropertyTransportState(std::string& aTransportState) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iTransportState->Value();
    aTransportState.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgRoon1Cpp::PropertyRepeat(bool& aRepeat) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::PropertyRepeatOne(bool& aRepeatOne) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aRepeatOne = iRepeatOne->Value();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::PropertyShuffle(bool& aShuffle) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::PropertyUpdateCover(bool& aUpdateCover) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aUpdateCover = iUpdateCover->Value();
}

void CpProxyAvOpenhomeOrgRoon1Cpp::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::RepeatOnePropertyChanged()
{
    ReportEvent(iRepeatOneChanged);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}

void CpProxyAvOpenhomeOrgRoon1Cpp::UpdateCoverPropertyChanged()
{
    ReportEvent(iUpdateCoverChanged);
}

