#include "CpAvOpenhomeOrgTidalConnect1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPlayAvOpenhomeOrgTidalConnect1 : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTidalConnect1& iService;
};

class SyncPauseAvOpenhomeOrgTidalConnect1 : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTidalConnect1& iService;
};

class SyncStopAvOpenhomeOrgTidalConnect1 : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTidalConnect1& iService;
};

class SyncNextAvOpenhomeOrgTidalConnect1 : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTidalConnect1& iService;
};

class SyncPreviousAvOpenhomeOrgTidalConnect1 : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTidalConnect1& iService;
};

class SyncToggleShuffleAvOpenhomeOrgTidalConnect1 : public SyncProxyAction
{
public:
    SyncToggleShuffleAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTidalConnect1& iService;
};

class SyncToggleLoopAvOpenhomeOrgTidalConnect1 : public SyncProxyAction
{
public:
    SyncToggleLoopAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTidalConnect1& iService;
};

class SyncRequestMetadataAvOpenhomeOrgTidalConnect1 : public SyncProxyAction
{
public:
    SyncRequestMetadataAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTidalConnect1& iService;
};

class SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1 : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTidalConnect1& iService;
};

class SyncTransportStateAvOpenhomeOrgTidalConnect1 : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTidalConnect1& iService;
    Brh& iValue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPlayAvOpenhomeOrgTidalConnect1

SyncPlayAvOpenhomeOrgTidalConnect1::SyncPlayAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgTidalConnect1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}

// SyncPauseAvOpenhomeOrgTidalConnect1

SyncPauseAvOpenhomeOrgTidalConnect1::SyncPauseAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgTidalConnect1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}

// SyncStopAvOpenhomeOrgTidalConnect1

SyncStopAvOpenhomeOrgTidalConnect1::SyncStopAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgTidalConnect1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}

// SyncNextAvOpenhomeOrgTidalConnect1

SyncNextAvOpenhomeOrgTidalConnect1::SyncNextAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgTidalConnect1::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}

// SyncPreviousAvOpenhomeOrgTidalConnect1

SyncPreviousAvOpenhomeOrgTidalConnect1::SyncPreviousAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgTidalConnect1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}

// SyncToggleShuffleAvOpenhomeOrgTidalConnect1

SyncToggleShuffleAvOpenhomeOrgTidalConnect1::SyncToggleShuffleAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy)
    : iService(aProxy)
{
}

void SyncToggleShuffleAvOpenhomeOrgTidalConnect1::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleShuffle(aAsync);
}

// SyncToggleLoopAvOpenhomeOrgTidalConnect1

SyncToggleLoopAvOpenhomeOrgTidalConnect1::SyncToggleLoopAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy)
    : iService(aProxy)
{
}

void SyncToggleLoopAvOpenhomeOrgTidalConnect1::CompleteRequest(IAsync& aAsync)
{
    iService.EndToggleLoop(aAsync);
}

// SyncRequestMetadataAvOpenhomeOrgTidalConnect1

SyncRequestMetadataAvOpenhomeOrgTidalConnect1::SyncRequestMetadataAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy)
    : iService(aProxy)
{
}

void SyncRequestMetadataAvOpenhomeOrgTidalConnect1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRequestMetadata(aAsync);
}

// SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1

SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1::SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}

// SyncTransportStateAvOpenhomeOrgTidalConnect1

SyncTransportStateAvOpenhomeOrgTidalConnect1::SyncTransportStateAvOpenhomeOrgTidalConnect1(CpProxyAvOpenhomeOrgTidalConnect1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgTidalConnect1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


// CpProxyAvOpenhomeOrgTidalConnect1

CpProxyAvOpenhomeOrgTidalConnect1::CpProxyAvOpenhomeOrgTidalConnect1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "TidalConnect", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1::RepeatOnePropertyChanged);
    iRepeatOne = new PropertyBool("RepeatOne", functor);
    AddProperty(iRepeatOne);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTidalConnect1::UpdateCoverPropertyChanged);
    iUpdateCover = new PropertyBool("UpdateCover", functor);
    AddProperty(iUpdateCover);
}

CpProxyAvOpenhomeOrgTidalConnect1::~CpProxyAvOpenhomeOrgTidalConnect1()
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

void CpProxyAvOpenhomeOrgTidalConnect1::SyncPlay()
{
    SyncPlayAvOpenhomeOrgTidalConnect1 sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1::SyncPause()
{
    SyncPauseAvOpenhomeOrgTidalConnect1 sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1::SyncStop()
{
    SyncStopAvOpenhomeOrgTidalConnect1 sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1::SyncNext()
{
    SyncNextAvOpenhomeOrgTidalConnect1 sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgTidalConnect1 sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1::SyncToggleShuffle()
{
    SyncToggleShuffleAvOpenhomeOrgTidalConnect1 sync(*this);
    BeginToggleShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1::BeginToggleShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionToggleShuffle, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1::EndToggleShuffle(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1::SyncToggleLoop()
{
    SyncToggleLoopAvOpenhomeOrgTidalConnect1 sync(*this);
    BeginToggleLoop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1::BeginToggleLoop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionToggleLoop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1::EndToggleLoop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1::SyncRequestMetadata()
{
    SyncRequestMetadataAvOpenhomeOrgTidalConnect1 sync(*this);
    BeginRequestMetadata(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1::BeginRequestMetadata(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRequestMetadata, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1::EndRequestMetadata(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgTidalConnect1 sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTidalConnect1::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgTidalConnect1 sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTidalConnect1::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTidalConnect1::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgTidalConnect1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1::SetPropertyRepeatOneChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatOneChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iShuffleChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1::SetPropertyUpdateCoverChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateCoverChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTidalConnect1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgTidalConnect1::PropertyRepeat(TBool& aRepeat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1::PropertyRepeatOne(TBool& aRepeatOne) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeatOne = iRepeatOne->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1::PropertyShuffle(TBool& aShuffle) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1::PropertyUpdateCover(TBool& aUpdateCover) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateCover = iUpdateCover->Value();
}

void CpProxyAvOpenhomeOrgTidalConnect1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1::RepeatOnePropertyChanged()
{
    ReportEvent(iRepeatOneChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}

void CpProxyAvOpenhomeOrgTidalConnect1::UpdateCoverPropertyChanged()
{
    ReportEvent(iUpdateCoverChanged);
}


void CpProxyAvOpenhomeOrgTidalConnect1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgTidalConnect1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgTidalConnect1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgTidalConnect1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgTidalConnect1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgTidalConnect1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgTidalConnect1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgTidalConnect1::Version() const
{
  return iCpProxy.Version();
}


