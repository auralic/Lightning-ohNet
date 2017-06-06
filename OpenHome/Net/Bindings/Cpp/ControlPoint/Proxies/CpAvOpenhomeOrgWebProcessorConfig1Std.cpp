#include "CpAvOpenhomeOrgWebProcessorConfig1.h"
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


class SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp(CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp& aProxy, std::string& aProcessorConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp& iService;
    std::string& iProcessorConfig;
};

SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp::SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp(CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp& aProxy, std::string& aProcessorConfig)
    : iService(aProxy)
    , iProcessorConfig(aProcessorConfig)
{
}

void SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetProcessorConfig(aAsync, iProcessorConfig);
}


class SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp(CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp& iService;
};

SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp::SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp(CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetProcessorConfig(aAsync);
}


CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("av-openhome-org", "WebProcessorConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetProcessorConfig = new Action("GetProcessorConfig");
    param = new OpenHome::Net::ParameterString("ProcessorConfig");
    iActionGetProcessorConfig->AddOutputParameter(param);

    iActionSetProcessorConfig = new Action("SetProcessorConfig");
    param = new OpenHome::Net::ParameterString("ProcessorConfig");
    iActionSetProcessorConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::ProcessorConfigPropertyChanged);
    iProcessorConfig = new PropertyString("ProcessorConfig", functor);
    AddProperty(iProcessorConfig);
}

CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::~CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp()
{
    DestroyService();
    delete iActionGetProcessorConfig;
    delete iActionSetProcessorConfig;
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::SyncGetProcessorConfig(std::string& aProcessorConfig)
{
    SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp sync(*this, aProcessorConfig);
    BeginGetProcessorConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::BeginGetProcessorConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetProcessorConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetProcessorConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::EndGetProcessorConfig(IAsync& aAsync, std::string& aProcessorConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetProcessorConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aProcessorConfig.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::SyncSetProcessorConfig(const std::string& aProcessorConfig)
{
    SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1Cpp sync(*this);
    BeginSetProcessorConfig(aProcessorConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::BeginSetProcessorConfig(const std::string& aProcessorConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetProcessorConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetProcessorConfig->InputParameters();
    {
        Brn buf((const TByte*)aProcessorConfig.c_str(), (TUint)aProcessorConfig.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::EndSetProcessorConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetProcessorConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock->Wait();
    iAliveChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::SetPropertyProcessorConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iProcessorConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::PropertyAlive(bool& aAlive) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::PropertyProcessorConfig(std::string& aProcessorConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iProcessorConfig->Value();
    aProcessorConfig.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1Cpp::ProcessorConfigPropertyChanged()
{
    ReportEvent(iProcessorConfigChanged);
}

