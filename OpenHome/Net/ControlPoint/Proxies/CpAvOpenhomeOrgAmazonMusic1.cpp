#include "CpAvOpenhomeOrgAmazonMusic1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncLogInAvOpenhomeOrgAmazonMusic1 : public SyncProxyAction
{
public:
    SyncLogInAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonMusic1& iService;
};

class SyncPlayAvOpenhomeOrgAmazonMusic1 : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonMusic1& iService;
};

class SyncPauseAvOpenhomeOrgAmazonMusic1 : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonMusic1& iService;
};

class SyncStopAvOpenhomeOrgAmazonMusic1 : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonMusic1& iService;
};

class SyncNextAvOpenhomeOrgAmazonMusic1 : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonMusic1& iService;
};

class SyncPreviousAvOpenhomeOrgAmazonMusic1 : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonMusic1& iService;
};

class SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1 : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonMusic1& iService;
};

class SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1 : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonMusic1& iService;
};

class SyncTransportStateAvOpenhomeOrgAmazonMusic1 : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonMusic1& iService;
    Brh& iValue;
};

class SyncInsertAvOpenhomeOrgAmazonMusic1 : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy, TUint& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgAmazonMusic1& iService;
    TUint& iNewId;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncLogInAvOpenhomeOrgAmazonMusic1

SyncLogInAvOpenhomeOrgAmazonMusic1::SyncLogInAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy)
    : iService(aProxy)
{
}

void SyncLogInAvOpenhomeOrgAmazonMusic1::CompleteRequest(IAsync& aAsync)
{
    iService.EndLogIn(aAsync);
}

// SyncPlayAvOpenhomeOrgAmazonMusic1

SyncPlayAvOpenhomeOrgAmazonMusic1::SyncPlayAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgAmazonMusic1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}

// SyncPauseAvOpenhomeOrgAmazonMusic1

SyncPauseAvOpenhomeOrgAmazonMusic1::SyncPauseAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgAmazonMusic1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}

// SyncStopAvOpenhomeOrgAmazonMusic1

SyncStopAvOpenhomeOrgAmazonMusic1::SyncStopAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgAmazonMusic1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}

// SyncNextAvOpenhomeOrgAmazonMusic1

SyncNextAvOpenhomeOrgAmazonMusic1::SyncNextAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgAmazonMusic1::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}

// SyncPreviousAvOpenhomeOrgAmazonMusic1

SyncPreviousAvOpenhomeOrgAmazonMusic1::SyncPreviousAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgAmazonMusic1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}

// SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1

SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1::SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}

// SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1

SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1::SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}

// SyncTransportStateAvOpenhomeOrgAmazonMusic1

SyncTransportStateAvOpenhomeOrgAmazonMusic1::SyncTransportStateAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgAmazonMusic1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}

// SyncInsertAvOpenhomeOrgAmazonMusic1

SyncInsertAvOpenhomeOrgAmazonMusic1::SyncInsertAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1& aProxy, TUint& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncInsertAvOpenhomeOrgAmazonMusic1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewId);
}


// CpProxyAvOpenhomeOrgAmazonMusic1

CpProxyAvOpenhomeOrgAmazonMusic1::CpProxyAvOpenhomeOrgAmazonMusic1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "AmazonMusic", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionLogIn = new Action("LogIn");

    iActionPlay = new Action("Play");

    iActionPause = new Action("Pause");

    iActionStop = new Action("Stop");

    iActionNext = new Action("Next");

    iActionPrevious = new Action("Previous");

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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonMusic1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonMusic1::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
}

CpProxyAvOpenhomeOrgAmazonMusic1::~CpProxyAvOpenhomeOrgAmazonMusic1()
{
    DestroyService();
    delete iActionLogIn;
    delete iActionPlay;
    delete iActionPause;
    delete iActionStop;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionSeekSecondAbsolute;
    delete iActionSeekSecondRelative;
    delete iActionTransportState;
    delete iActionInsert;
}

void CpProxyAvOpenhomeOrgAmazonMusic1::SyncLogIn()
{
    SyncLogInAvOpenhomeOrgAmazonMusic1 sync(*this);
    BeginLogIn(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::BeginLogIn(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionLogIn, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::EndLogIn(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("LogIn"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgAmazonMusic1::SyncPlay()
{
    SyncPlayAvOpenhomeOrgAmazonMusic1 sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1::SyncPause()
{
    SyncPauseAvOpenhomeOrgAmazonMusic1 sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1::SyncStop()
{
    SyncStopAvOpenhomeOrgAmazonMusic1 sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1::SyncNext()
{
    SyncNextAvOpenhomeOrgAmazonMusic1 sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgAmazonMusic1 sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1 sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1::SyncSeekSecondRelative(TInt aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1 sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgAmazonMusic1 sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgAmazonMusic1::SyncInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, TUint& aNewId)
{
    SyncInsertAvOpenhomeOrgAmazonMusic1 sync(*this, aNewId);
    BeginInsert(aAfterId, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::BeginInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgAmazonMusic1::EndInsert(IAsync& aAsync, TUint& aNewId)
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

void CpProxyAvOpenhomeOrgAmazonMusic1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::SetPropertyIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgAmazonMusic1::PropertyId(TUint& aId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}


void CpProxyAvOpenhomeOrgAmazonMusic1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgAmazonMusic1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgAmazonMusic1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgAmazonMusic1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgAmazonMusic1::Version() const
{
  return iCpProxy.Version();
}


