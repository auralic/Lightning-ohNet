#include "CpAvOpenhomeOrgAmazonStation1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPlayAvOpenhomeOrgAmazonStation1 : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonStation1& iService;
};

class SyncPauseAvOpenhomeOrgAmazonStation1 : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonStation1& iService;
};

class SyncStopAvOpenhomeOrgAmazonStation1 : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonStation1& iService;
};

class SyncNextAvOpenhomeOrgAmazonStation1 : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonStation1& iService;
};

class SyncPreviousAvOpenhomeOrgAmazonStation1 : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonStation1& iService;
};

class SyncSetThumbRatingAvOpenhomeOrgAmazonStation1 : public SyncProxyAction
{
public:
    SyncSetThumbRatingAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonStation1& iService;
};

class SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1 : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonStation1& iService;
};

class SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1 : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonStation1& iService;
};

class SyncTransportStateAvOpenhomeOrgAmazonStation1 : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonStation1& iService;
    Brh& iValue;
};

class SyncInsertAvOpenhomeOrgAmazonStation1 : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy, TUint& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonStation1& iService;
    TUint& iNewId;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPlayAvOpenhomeOrgAmazonStation1

SyncPlayAvOpenhomeOrgAmazonStation1::SyncPlayAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgAmazonStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}

// SyncPauseAvOpenhomeOrgAmazonStation1

SyncPauseAvOpenhomeOrgAmazonStation1::SyncPauseAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgAmazonStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}

// SyncStopAvOpenhomeOrgAmazonStation1

SyncStopAvOpenhomeOrgAmazonStation1::SyncStopAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgAmazonStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}

// SyncNextAvOpenhomeOrgAmazonStation1

SyncNextAvOpenhomeOrgAmazonStation1::SyncNextAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgAmazonStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}

// SyncPreviousAvOpenhomeOrgAmazonStation1

SyncPreviousAvOpenhomeOrgAmazonStation1::SyncPreviousAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgAmazonStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}

// SyncSetThumbRatingAvOpenhomeOrgAmazonStation1

SyncSetThumbRatingAvOpenhomeOrgAmazonStation1::SyncSetThumbRatingAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy)
    : iService(aProxy)
{
}

void SyncSetThumbRatingAvOpenhomeOrgAmazonStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetThumbRating(aAsync);
}

// SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1

SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1::SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}

// SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1

SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1::SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}

// SyncTransportStateAvOpenhomeOrgAmazonStation1

SyncTransportStateAvOpenhomeOrgAmazonStation1::SyncTransportStateAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgAmazonStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}

// SyncInsertAvOpenhomeOrgAmazonStation1

SyncInsertAvOpenhomeOrgAmazonStation1::SyncInsertAvOpenhomeOrgAmazonStation1(CpProxyAvOpenhomeOrgAmazonStation1& aProxy, TUint& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncInsertAvOpenhomeOrgAmazonStation1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewId);
}


// CpProxyAvOpenhomeOrgAmazonStation1

CpProxyAvOpenhomeOrgAmazonStation1::CpProxyAvOpenhomeOrgAmazonStation1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "AmazonStation", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonStation1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonStation1::ThumbRatingPropertyChanged);
    iThumbRating = new PropertyString("ThumbRating", functor);
    AddProperty(iThumbRating);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonStation1::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
}

CpProxyAvOpenhomeOrgAmazonStation1::~CpProxyAvOpenhomeOrgAmazonStation1()
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

void CpProxyAvOpenhomeOrgAmazonStation1::SyncPlay()
{
    SyncPlayAvOpenhomeOrgAmazonStation1 sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1::SyncPause()
{
    SyncPauseAvOpenhomeOrgAmazonStation1 sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1::SyncStop()
{
    SyncStopAvOpenhomeOrgAmazonStation1 sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1::SyncNext()
{
    SyncNextAvOpenhomeOrgAmazonStation1 sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgAmazonStation1 sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1::SyncSetThumbRating(const Brx& aThumbRating)
{
    SyncSetThumbRatingAvOpenhomeOrgAmazonStation1 sync(*this);
    BeginSetThumbRating(aThumbRating, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1::BeginSetThumbRating(const Brx& aThumbRating, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetThumbRating, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetThumbRating->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aThumbRating));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1::EndSetThumbRating(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonStation1 sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1::SyncSeekSecondRelative(TInt aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgAmazonStation1 sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1::BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonStation1::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgAmazonStation1 sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonStation1::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgAmazonStation1::SyncInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, TUint& aNewId)
{
    SyncInsertAvOpenhomeOrgAmazonStation1 sync(*this, aNewId);
    BeginInsert(aAfterId, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonStation1::BeginInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgAmazonStation1::EndInsert(IAsync& aAsync, TUint& aNewId)
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

void CpProxyAvOpenhomeOrgAmazonStation1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgAmazonStation1::SetPropertyThumbRatingChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iThumbRatingChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgAmazonStation1::SetPropertyIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgAmazonStation1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgAmazonStation1::PropertyThumbRating(Brhz& aThumbRating) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aThumbRating.Set(iThumbRating->Value());
}

void CpProxyAvOpenhomeOrgAmazonStation1::PropertyId(TUint& aId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgAmazonStation1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgAmazonStation1::ThumbRatingPropertyChanged()
{
    ReportEvent(iThumbRatingChanged);
}

void CpProxyAvOpenhomeOrgAmazonStation1::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}


void CpProxyAvOpenhomeOrgAmazonStation1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgAmazonStation1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgAmazonStation1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgAmazonStation1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgAmazonStation1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgAmazonStation1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgAmazonStation1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgAmazonStation1::Version() const
{
  return iCpProxy.Version();
}


