#include "CpAvOpenhomeOrgAmazonMusic1.h"
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


class SyncLogInAvOpenhomeOrgAmazonMusic1Cpp : public SyncProxyAction
{
public:
    SyncLogInAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncLogInAvOpenhomeOrgAmazonMusic1Cpp() {}
private:
    CpProxyAvOpenhomeOrgAmazonMusic1Cpp& iService;
};

SyncLogInAvOpenhomeOrgAmazonMusic1Cpp::SyncLogInAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncLogInAvOpenhomeOrgAmazonMusic1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndLogIn(aAsync);
}


class SyncPlayAvOpenhomeOrgAmazonMusic1Cpp : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgAmazonMusic1Cpp() {}
private:
    CpProxyAvOpenhomeOrgAmazonMusic1Cpp& iService;
};

SyncPlayAvOpenhomeOrgAmazonMusic1Cpp::SyncPlayAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgAmazonMusic1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgAmazonMusic1Cpp : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgAmazonMusic1Cpp() {}
private:
    CpProxyAvOpenhomeOrgAmazonMusic1Cpp& iService;
};

SyncPauseAvOpenhomeOrgAmazonMusic1Cpp::SyncPauseAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgAmazonMusic1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgAmazonMusic1Cpp : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgAmazonMusic1Cpp() {}
private:
    CpProxyAvOpenhomeOrgAmazonMusic1Cpp& iService;
};

SyncStopAvOpenhomeOrgAmazonMusic1Cpp::SyncStopAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgAmazonMusic1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgAmazonMusic1Cpp : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgAmazonMusic1Cpp() {}
private:
    CpProxyAvOpenhomeOrgAmazonMusic1Cpp& iService;
};

SyncNextAvOpenhomeOrgAmazonMusic1Cpp::SyncNextAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgAmazonMusic1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgAmazonMusic1Cpp : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgAmazonMusic1Cpp() {}
private:
    CpProxyAvOpenhomeOrgAmazonMusic1Cpp& iService;
};

SyncPreviousAvOpenhomeOrgAmazonMusic1Cpp::SyncPreviousAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgAmazonMusic1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1Cpp() {}
private:
    CpProxyAvOpenhomeOrgAmazonMusic1Cpp& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1Cpp::SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1Cpp() {}
private:
    CpProxyAvOpenhomeOrgAmazonMusic1Cpp& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1Cpp::SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncTransportStateAvOpenhomeOrgAmazonMusic1Cpp : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgAmazonMusic1Cpp() {}
private:
    CpProxyAvOpenhomeOrgAmazonMusic1Cpp& iService;
    std::string& iValue;
};

SyncTransportStateAvOpenhomeOrgAmazonMusic1Cpp::SyncTransportStateAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgAmazonMusic1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


class SyncInsertAvOpenhomeOrgAmazonMusic1Cpp : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy, uint32_t& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInsertAvOpenhomeOrgAmazonMusic1Cpp() {}
private:
    CpProxyAvOpenhomeOrgAmazonMusic1Cpp& iService;
    uint32_t& iNewId;
};

SyncInsertAvOpenhomeOrgAmazonMusic1Cpp::SyncInsertAvOpenhomeOrgAmazonMusic1Cpp(CpProxyAvOpenhomeOrgAmazonMusic1Cpp& aProxy, uint32_t& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncInsertAvOpenhomeOrgAmazonMusic1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewId);
}


CpProxyAvOpenhomeOrgAmazonMusic1Cpp::CpProxyAvOpenhomeOrgAmazonMusic1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonMusic1Cpp::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgAmazonMusic1Cpp::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
}

CpProxyAvOpenhomeOrgAmazonMusic1Cpp::~CpProxyAvOpenhomeOrgAmazonMusic1Cpp()
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

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SyncLogIn()
{
    SyncLogInAvOpenhomeOrgAmazonMusic1Cpp sync(*this);
    BeginLogIn(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::BeginLogIn(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionLogIn, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::EndLogIn(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SyncPlay()
{
    SyncPlayAvOpenhomeOrgAmazonMusic1Cpp sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SyncPause()
{
    SyncPauseAvOpenhomeOrgAmazonMusic1Cpp sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SyncStop()
{
    SyncStopAvOpenhomeOrgAmazonMusic1Cpp sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SyncNext()
{
    SyncNextAvOpenhomeOrgAmazonMusic1Cpp sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgAmazonMusic1Cpp sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SyncSeekSecondAbsolute(uint32_t aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1Cpp sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::BeginSeekSecondAbsolute(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SyncSeekSecondRelative(int32_t aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1Cpp sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::BeginSeekSecondRelative(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SyncTransportState(std::string& aValue)
{
    SyncTransportStateAvOpenhomeOrgAmazonMusic1Cpp sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::EndTransportState(IAsync& aAsync, std::string& aValue)
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

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SyncInsert(uint32_t aAfterId, const std::string& aUri, const std::string& aMetadata, uint32_t& aNewId)
{
    SyncInsertAvOpenhomeOrgAmazonMusic1Cpp sync(*this, aNewId);
    BeginInsert(aAfterId, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::BeginInsert(uint32_t aAfterId, const std::string& aUri, const std::string& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInsert, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInsert->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aAfterId));
    {
        Brn buf((const TByte*)aUri.c_str(), (TUint)aUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aMetadata.c_str(), (TUint)aMetadata.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInsert->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::EndInsert(IAsync& aAsync, uint32_t& aNewId)
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

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SetPropertyIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::PropertyTransportState(std::string& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iTransportState->Value();
    aTransportState.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::PropertyId(uint32_t& aId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgAmazonMusic1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgAmazonMusic1Cpp::Version() const
{
  return iCpProxy.Version();
}

