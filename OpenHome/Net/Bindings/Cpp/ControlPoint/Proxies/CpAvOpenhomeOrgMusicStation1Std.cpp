#include "CpAvOpenhomeOrgMusicStation1.h"
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


class SyncPlayAvOpenhomeOrgMusicStation1Cpp : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgMusicStation1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMusicStation1Cpp& iService;
};

SyncPlayAvOpenhomeOrgMusicStation1Cpp::SyncPlayAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgMusicStation1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgMusicStation1Cpp : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgMusicStation1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMusicStation1Cpp& iService;
};

SyncPauseAvOpenhomeOrgMusicStation1Cpp::SyncPauseAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgMusicStation1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgMusicStation1Cpp : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgMusicStation1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMusicStation1Cpp& iService;
};

SyncStopAvOpenhomeOrgMusicStation1Cpp::SyncStopAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgMusicStation1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgMusicStation1Cpp : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgMusicStation1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMusicStation1Cpp& iService;
};

SyncNextAvOpenhomeOrgMusicStation1Cpp::SyncNextAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgMusicStation1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgMusicStation1Cpp : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgMusicStation1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMusicStation1Cpp& iService;
};

SyncPreviousAvOpenhomeOrgMusicStation1Cpp::SyncPreviousAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgMusicStation1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncSetThumbRatingAvOpenhomeOrgMusicStation1Cpp : public SyncProxyAction
{
public:
    SyncSetThumbRatingAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetThumbRatingAvOpenhomeOrgMusicStation1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMusicStation1Cpp& iService;
};

SyncSetThumbRatingAvOpenhomeOrgMusicStation1Cpp::SyncSetThumbRatingAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetThumbRatingAvOpenhomeOrgMusicStation1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetThumbRating(aAsync);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMusicStation1Cpp& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1Cpp::SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMusicStation1Cpp& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1Cpp::SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncTransportStateAvOpenhomeOrgMusicStation1Cpp : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgMusicStation1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMusicStation1Cpp& iService;
    std::string& iValue;
};

SyncTransportStateAvOpenhomeOrgMusicStation1Cpp::SyncTransportStateAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgMusicStation1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


class SyncInsertAvOpenhomeOrgMusicStation1Cpp : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy, uint32_t& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInsertAvOpenhomeOrgMusicStation1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMusicStation1Cpp& iService;
    uint32_t& iNewId;
};

SyncInsertAvOpenhomeOrgMusicStation1Cpp::SyncInsertAvOpenhomeOrgMusicStation1Cpp(CpProxyAvOpenhomeOrgMusicStation1Cpp& aProxy, uint32_t& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncInsertAvOpenhomeOrgMusicStation1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewId);
}


CpProxyAvOpenhomeOrgMusicStation1Cpp::CpProxyAvOpenhomeOrgMusicStation1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMusicStation1Cpp::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMusicStation1Cpp::ThumbRatingPropertyChanged);
    iThumbRating = new PropertyString("ThumbRating", functor);
    AddProperty(iThumbRating);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMusicStation1Cpp::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
}

CpProxyAvOpenhomeOrgMusicStation1Cpp::~CpProxyAvOpenhomeOrgMusicStation1Cpp()
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SyncPlay()
{
    SyncPlayAvOpenhomeOrgMusicStation1Cpp sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SyncPause()
{
    SyncPauseAvOpenhomeOrgMusicStation1Cpp sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SyncStop()
{
    SyncStopAvOpenhomeOrgMusicStation1Cpp sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SyncNext()
{
    SyncNextAvOpenhomeOrgMusicStation1Cpp sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgMusicStation1Cpp sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SyncSetThumbRating(const std::string& aThumbRating)
{
    SyncSetThumbRatingAvOpenhomeOrgMusicStation1Cpp sync(*this);
    BeginSetThumbRating(aThumbRating, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::BeginSetThumbRating(const std::string& aThumbRating, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetThumbRating, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetThumbRating->InputParameters();
    {
        Brn buf((const TByte*)aThumbRating.c_str(), (TUint)aThumbRating.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::EndSetThumbRating(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SyncSeekSecondAbsolute(uint32_t aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1Cpp sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::BeginSeekSecondAbsolute(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SyncSeekSecondRelative(int32_t aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1Cpp sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::BeginSeekSecondRelative(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SyncTransportState(std::string& aValue)
{
    SyncTransportStateAvOpenhomeOrgMusicStation1Cpp sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::EndTransportState(IAsync& aAsync, std::string& aValue)
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SyncInsert(uint32_t aAfterId, const std::string& aUri, const std::string& aMetadata, uint32_t& aNewId)
{
    SyncInsertAvOpenhomeOrgMusicStation1Cpp sync(*this, aNewId);
    BeginInsert(aAfterId, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::BeginInsert(uint32_t aAfterId, const std::string& aUri, const std::string& aMetadata, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::EndInsert(IAsync& aAsync, uint32_t& aNewId)
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

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SetPropertyThumbRatingChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iThumbRatingChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SetPropertyIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::PropertyTransportState(std::string& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iTransportState->Value();
    aTransportState.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::PropertyThumbRating(std::string& aThumbRating) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iThumbRating->Value();
    aThumbRating.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::PropertyId(uint32_t& aId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::ThumbRatingPropertyChanged()
{
    ReportEvent(iThumbRatingChanged);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgMusicStation1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgMusicStation1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgMusicStation1Cpp::Version() const
{
  return iCpProxy.Version();
}

