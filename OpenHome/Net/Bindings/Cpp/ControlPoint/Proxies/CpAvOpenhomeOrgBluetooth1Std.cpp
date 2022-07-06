#include "CpAvOpenhomeOrgBluetooth1.h"
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


class SyncPlayAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
};

SyncPlayAvOpenhomeOrgBluetooth1Cpp::SyncPlayAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
};

SyncPauseAvOpenhomeOrgBluetooth1Cpp::SyncPauseAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
};

SyncStopAvOpenhomeOrgBluetooth1Cpp::SyncStopAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
};

SyncNextAvOpenhomeOrgBluetooth1Cpp::SyncNextAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
};

SyncPreviousAvOpenhomeOrgBluetooth1Cpp::SyncPreviousAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncSetRepeatAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncSetRepeatAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRepeatAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
};

SyncSetRepeatAvOpenhomeOrgBluetooth1Cpp::SyncSetRepeatAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeat(aAsync);
}


class SyncRepeatAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRepeatAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
    bool& iValue;
};

SyncRepeatAvOpenhomeOrgBluetooth1Cpp::SyncRepeatAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iValue);
}


class SyncSetRepeatOneAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncSetRepeatOneAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRepeatOneAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
};

SyncSetRepeatOneAvOpenhomeOrgBluetooth1Cpp::SyncSetRepeatOneAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatOneAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeatOne(aAsync);
}


class SyncRepeatOneAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncRepeatOneAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRepeatOneAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
    bool& iValue;
};

SyncRepeatOneAvOpenhomeOrgBluetooth1Cpp::SyncRepeatOneAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatOneAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeatOne(aAsync, iValue);
}


class SyncSetShuffleAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncSetShuffleAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetShuffleAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
};

SyncSetShuffleAvOpenhomeOrgBluetooth1Cpp::SyncSetShuffleAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetShuffleAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetShuffle(aAsync);
}


class SyncShuffleAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncShuffleAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
    bool& iValue;
};

SyncShuffleAvOpenhomeOrgBluetooth1Cpp::SyncShuffleAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncShuffleAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iValue);
}


class SyncTransportStateAvOpenhomeOrgBluetooth1Cpp : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgBluetooth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgBluetooth1Cpp& iService;
    std::string& iValue;
};

SyncTransportStateAvOpenhomeOrgBluetooth1Cpp::SyncTransportStateAvOpenhomeOrgBluetooth1Cpp(CpProxyAvOpenhomeOrgBluetooth1Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgBluetooth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


CpProxyAvOpenhomeOrgBluetooth1Cpp::CpProxyAvOpenhomeOrgBluetooth1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1Cpp::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1Cpp::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1Cpp::RepeatOnePropertyChanged);
    iRepeatOne = new PropertyBool("RepeatOne", functor);
    AddProperty(iRepeatOne);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgBluetooth1Cpp::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
}

CpProxyAvOpenhomeOrgBluetooth1Cpp::~CpProxyAvOpenhomeOrgBluetooth1Cpp()
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncPlay()
{
    SyncPlayAvOpenhomeOrgBluetooth1Cpp sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncPause()
{
    SyncPauseAvOpenhomeOrgBluetooth1Cpp sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncStop()
{
    SyncStopAvOpenhomeOrgBluetooth1Cpp sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncNext()
{
    SyncNextAvOpenhomeOrgBluetooth1Cpp sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgBluetooth1Cpp sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncSetRepeat(bool aValue)
{
    SyncSetRepeatAvOpenhomeOrgBluetooth1Cpp sync(*this);
    BeginSetRepeat(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginSetRepeat(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetRepeat, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeat->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndSetRepeat(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncRepeat(bool& aValue)
{
    SyncRepeatAvOpenhomeOrgBluetooth1Cpp sync(*this, aValue);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndRepeat(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncSetRepeatOne(bool aValue)
{
    SyncSetRepeatOneAvOpenhomeOrgBluetooth1Cpp sync(*this);
    BeginSetRepeatOne(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginSetRepeatOne(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetRepeatOne, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeatOne->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndSetRepeatOne(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncRepeatOne(bool& aValue)
{
    SyncRepeatOneAvOpenhomeOrgBluetooth1Cpp sync(*this, aValue);
    BeginRepeatOne(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginRepeatOne(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRepeatOne, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeatOne->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndRepeatOne(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncSetShuffle(bool aValue)
{
    SyncSetShuffleAvOpenhomeOrgBluetooth1Cpp sync(*this);
    BeginSetShuffle(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginSetShuffle(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetShuffle, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetShuffle->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndSetShuffle(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncShuffle(bool& aValue)
{
    SyncShuffleAvOpenhomeOrgBluetooth1Cpp sync(*this, aValue);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndShuffle(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SyncTransportState(std::string& aValue)
{
    SyncTransportStateAvOpenhomeOrgBluetooth1Cpp sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::EndTransportState(IAsync& aAsync, std::string& aValue)
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

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SetPropertyRepeatOneChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatOneChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iShuffleChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::PropertyTransportState(std::string& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iTransportState->Value();
    aTransportState.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::PropertyRepeat(bool& aRepeat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::PropertyRepeatOne(bool& aRepeatOne) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeatOne = iRepeatOne->Value();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::PropertyShuffle(bool& aShuffle) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::RepeatOnePropertyChanged()
{
    ReportEvent(iRepeatOneChanged);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgBluetooth1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgBluetooth1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgBluetooth1Cpp::Version() const
{
  return iCpProxy.Version();
}

