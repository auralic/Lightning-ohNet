#include "CpAvOpenhomeOrgMusicStation1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPlayAvOpenhomeOrgMusicStation1 : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMusicStation1& iService;
};

class SyncPauseAvOpenhomeOrgMusicStation1 : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMusicStation1& iService;
};

class SyncStopAvOpenhomeOrgMusicStation1 : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMusicStation1& iService;
};

class SyncNextAvOpenhomeOrgMusicStation1 : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMusicStation1& iService;
};

class SyncPreviousAvOpenhomeOrgMusicStation1 : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMusicStation1& iService;
};

class SyncSetThumbRatingAvOpenhomeOrgMusicStation1 : public SyncProxyAction
{
public:
    SyncSetThumbRatingAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMusicStation1& iService;
};

class SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1 : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMusicStation1& iService;
};

class SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1 : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMusicStation1& iService;
};

class SyncTransportStateAvOpenhomeOrgMusicStation1 : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMusicStation1& iService;
    Brh& iValue;
};

class SyncInsertAvOpenhomeOrgMusicStation1 : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy, TUint& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMusicStation1& iService;
    TUint& iNewId;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPlayAvOpenhomeOrgMusicStation1

SyncPlayAvOpenhomeOrgMusicStation1::SyncPlayAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgMusicStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}

// SyncPauseAvOpenhomeOrgMusicStation1

SyncPauseAvOpenhomeOrgMusicStation1::SyncPauseAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgMusicStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}

// SyncStopAvOpenhomeOrgMusicStation1

SyncStopAvOpenhomeOrgMusicStation1::SyncStopAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgMusicStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}

// SyncNextAvOpenhomeOrgMusicStation1

SyncNextAvOpenhomeOrgMusicStation1::SyncNextAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgMusicStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}

// SyncPreviousAvOpenhomeOrgMusicStation1

SyncPreviousAvOpenhomeOrgMusicStation1::SyncPreviousAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgMusicStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}

// SyncSetThumbRatingAvOpenhomeOrgMusicStation1

SyncSetThumbRatingAvOpenhomeOrgMusicStation1::SyncSetThumbRatingAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy)
    : iService(aProxy)
{
}

void SyncSetThumbRatingAvOpenhomeOrgMusicStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetThumbRating(aAsync);
}

// SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1

SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1::SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}

// SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1

SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1::SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}

// SyncTransportStateAvOpenhomeOrgMusicStation1

SyncTransportStateAvOpenhomeOrgMusicStation1::SyncTransportStateAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgMusicStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}

// SyncInsertAvOpenhomeOrgMusicStation1

SyncInsertAvOpenhomeOrgMusicStation1::SyncInsertAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1& aProxy, TUint& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncInsertAvOpenhomeOrgMusicStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewId);
}


// CpProxyAvOpenhomeOrgMusicStation1

CpProxyAvOpenhomeOrgMusicStation1::CpProxyAvOpenhomeOrgMusicStation1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "MusicStation", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMusicStation1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMusicStation1::ThumbRatingPropertyChanged);
    iThumbRating = new PropertyString("ThumbRating", functor);
    AddProperty(iThumbRating);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMusicStation1::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
}

CpProxyAvOpenhomeOrgMusicStation1::~CpProxyAvOpenhomeOrgMusicStation1()
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

void CpProxyAvOpenhomeOrgMusicStation1::SyncPlay()
{
    SyncPlayAvOpenhomeOrgMusicStation1 sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1::SyncPause()
{
    SyncPauseAvOpenhomeOrgMusicStation1 sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1::SyncStop()
{
    SyncStopAvOpenhomeOrgMusicStation1 sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1::SyncNext()
{
    SyncNextAvOpenhomeOrgMusicStation1 sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgMusicStation1 sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1::SyncSetThumbRating(const Brx& aThumbRating)
{
    SyncSetThumbRatingAvOpenhomeOrgMusicStation1 sync(*this);
    BeginSetThumbRating(aThumbRating, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1::BeginSetThumbRating(const Brx& aThumbRating, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetThumbRating, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetThumbRating->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aThumbRating));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1::EndSetThumbRating(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1 sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1::SyncSeekSecondRelative(TInt aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1 sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1::BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgMusicStation1 sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgMusicStation1::SyncInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, TUint& aNewId)
{
    SyncInsertAvOpenhomeOrgMusicStation1 sync(*this, aNewId);
    BeginInsert(aAfterId, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1::BeginInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInsert, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInsert->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aAfterId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInsert->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1::EndInsert(IAsync& aAsync, TUint& aNewId)
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

void CpProxyAvOpenhomeOrgMusicStation1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMusicStation1::SetPropertyThumbRatingChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iThumbRatingChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMusicStation1::SetPropertyIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMusicStation1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgMusicStation1::PropertyThumbRating(Brhz& aThumbRating) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aThumbRating.Set(iThumbRating->Value());
}

void CpProxyAvOpenhomeOrgMusicStation1::PropertyId(TUint& aId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgMusicStation1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgMusicStation1::ThumbRatingPropertyChanged()
{
    ReportEvent(iThumbRatingChanged);
}

void CpProxyAvOpenhomeOrgMusicStation1::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}


void CpProxyAvOpenhomeOrgMusicStation1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgMusicStation1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgMusicStation1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgMusicStation1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgMusicStation1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgMusicStation1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgMusicStation1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgMusicStation1::Version() const
{
  return iCpProxy.Version();
}


