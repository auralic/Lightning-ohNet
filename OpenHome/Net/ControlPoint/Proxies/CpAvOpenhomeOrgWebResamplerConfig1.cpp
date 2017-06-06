#include "CpAvOpenhomeOrgWebResamplerConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(CpProxyAvOpenhomeOrgWebResamplerConfig1& aProxy, Brh& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1() {}
private:
    CpProxyAvOpenhomeOrgWebResamplerConfig1& iService;
    Brh& iResamplerConfig;
};

SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1::SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(CpProxyAvOpenhomeOrgWebResamplerConfig1& aProxy, Brh& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}


class SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(CpProxyAvOpenhomeOrgWebResamplerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1() {}
private:
    CpProxyAvOpenhomeOrgWebResamplerConfig1& iService;
};

SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1::SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(CpProxyAvOpenhomeOrgWebResamplerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}


CpProxyAvOpenhomeOrgWebResamplerConfig1::CpProxyAvOpenhomeOrgWebResamplerConfig1(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebResamplerConfig1::ResamplerConfigPropertyChanged);
    iResamplerConfig = new PropertyString("ResamplerConfig", functor);
    AddProperty(iResamplerConfig);
}

CpProxyAvOpenhomeOrgWebResamplerConfig1::~CpProxyAvOpenhomeOrgWebResamplerConfig1()
{
    DestroyService();
    delete iActionGetResamplerConfig;
    delete iActionSetResamplerConfig;
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1::SyncGetResamplerConfig(Brh& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1::EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aResamplerConfig);
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1::SyncSetResamplerConfig(const Brx& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1::BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetResamplerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetResamplerConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aResamplerConfig));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1::EndSetResamplerConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgWebResamplerConfig1::SetPropertyResamplerConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iResamplerConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1::PropertyResamplerConfig(Brhz& aResamplerConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aResamplerConfig.Set(iResamplerConfig->Value());
}

void CpProxyAvOpenhomeOrgWebResamplerConfig1::ResamplerConfigPropertyChanged()
{
    ReportEvent(iResamplerConfigChanged);
}

