#include "CpAvOpenhomeOrgWebResamplerConfig1.h"
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


class SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp(CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp& aProxy, std::string& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp& iService;
    std::string& iResamplerConfig;
};

SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp::SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp(CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp& aProxy, std::string& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}


class SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp(CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp& iService;
};

SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp::SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp(CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}


CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("av-openhome-org", "WebResamplerConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetResamplerConfig = new Action("GetResamplerConfig");
    param = new OpenHome::Net::ParameterString("ResamplerConfig");
    iActionGetResamplerConfig->AddOutputParameter(param);

    iActionSetResamplerConfig = new Action("SetResamplerConfig");
    param = new OpenHome::Net::ParameterString("ResamplerConfig");
    iActionSetResamplerConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::ResamplerConfigPropertyChanged);
    iResamplerConfig = new PropertyString("ResamplerConfig", functor);
    AddProperty(iResamplerConfig);
}

CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::~CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp()
{
    DestroyService();
    delete iActionGetResamplerConfig;
    delete iActionSetResamplerConfig;
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::SyncGetResamplerConfig(std::string& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::EndGetResamplerConfig(IAsync& aAsync, std::string& aResamplerConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetResamplerConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aResamplerConfig.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::SyncSetResamplerConfig(const std::string& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1Cpp sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::BeginSetResamplerConfig(const std::string& aResamplerConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetResamplerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetResamplerConfig->InputParameters();
    {
        Brn buf((const TByte*)aResamplerConfig.c_str(), (TUint)aResamplerConfig.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::EndSetResamplerConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetResamplerConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::SetPropertyResamplerConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iResamplerConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::PropertyResamplerConfig(std::string& aResamplerConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iResamplerConfig->Value();
    aResamplerConfig.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1Cpp::ResamplerConfigPropertyChanged()
{
    ReportEvent(iResamplerConfigChanged);
}

