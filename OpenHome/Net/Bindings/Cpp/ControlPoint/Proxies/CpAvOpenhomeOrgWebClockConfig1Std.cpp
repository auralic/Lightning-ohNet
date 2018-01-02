#include "CpAvOpenhomeOrgWebClockConfig1.h"
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


class SyncGetClockConfigAvOpenhomeOrgWebClockConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetClockConfigAvOpenhomeOrgWebClockConfig1Cpp(CpProxyAvOpenhomeOrgWebClockConfig1Cpp& aProxy, std::string& aClockConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetClockConfigAvOpenhomeOrgWebClockConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebClockConfig1Cpp& iService;
    std::string& iClockConfig;
};

SyncGetClockConfigAvOpenhomeOrgWebClockConfig1Cpp::SyncGetClockConfigAvOpenhomeOrgWebClockConfig1Cpp(CpProxyAvOpenhomeOrgWebClockConfig1Cpp& aProxy, std::string& aClockConfig)
    : iService(aProxy)
    , iClockConfig(aClockConfig)
{
}

void SyncGetClockConfigAvOpenhomeOrgWebClockConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetClockConfig(aAsync, iClockConfig);
}


class SyncSetClockConfigAvOpenhomeOrgWebClockConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetClockConfigAvOpenhomeOrgWebClockConfig1Cpp(CpProxyAvOpenhomeOrgWebClockConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetClockConfigAvOpenhomeOrgWebClockConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebClockConfig1Cpp& iService;
};

SyncSetClockConfigAvOpenhomeOrgWebClockConfig1Cpp::SyncSetClockConfigAvOpenhomeOrgWebClockConfig1Cpp(CpProxyAvOpenhomeOrgWebClockConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetClockConfigAvOpenhomeOrgWebClockConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetClockConfig(aAsync);
}


CpProxyAvOpenhomeOrgWebClockConfig1Cpp::CpProxyAvOpenhomeOrgWebClockConfig1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("av-openhome-org", "WebClockConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetClockConfig = new Action("GetClockConfig");
    param = new OpenHome::Net::ParameterString("ClockConfig");
    iActionGetClockConfig->AddOutputParameter(param);

    iActionSetClockConfig = new Action("SetClockConfig");
    param = new OpenHome::Net::ParameterString("ClockConfig");
    iActionSetClockConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebClockConfig1Cpp::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebClockConfig1Cpp::ClockConfigPropertyChanged);
    iClockConfig = new PropertyString("ClockConfig", functor);
    AddProperty(iClockConfig);
}

CpProxyAvOpenhomeOrgWebClockConfig1Cpp::~CpProxyAvOpenhomeOrgWebClockConfig1Cpp()
{
    DestroyService();
    delete iActionGetClockConfig;
    delete iActionSetClockConfig;
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::SyncGetClockConfig(std::string& aClockConfig)
{
    SyncGetClockConfigAvOpenhomeOrgWebClockConfig1Cpp sync(*this, aClockConfig);
    BeginGetClockConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::BeginGetClockConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetClockConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetClockConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::EndGetClockConfig(IAsync& aAsync, std::string& aClockConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetClockConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aClockConfig.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::SyncSetClockConfig(const std::string& aClockConfig)
{
    SyncSetClockConfigAvOpenhomeOrgWebClockConfig1Cpp sync(*this);
    BeginSetClockConfig(aClockConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::BeginSetClockConfig(const std::string& aClockConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetClockConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetClockConfig->InputParameters();
    {
        Brn buf((const TByte*)aClockConfig.c_str(), (TUint)aClockConfig.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::EndSetClockConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetClockConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock->Wait();
    iAliveChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::SetPropertyClockConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iClockConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::PropertyAlive(bool& aAlive) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::PropertyClockConfig(std::string& aClockConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iClockConfig->Value();
    aClockConfig.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebClockConfig1Cpp::ClockConfigPropertyChanged()
{
    ReportEvent(iClockConfigChanged);
}

