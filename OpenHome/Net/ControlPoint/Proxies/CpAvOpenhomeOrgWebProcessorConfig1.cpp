#include "CpAvOpenhomeOrgWebProcessorConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 : public SyncProxyAction
{
public:
    SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(CpProxyAvOpenhomeOrgWebProcessorConfig1& aProxy, Brh& aProcessorConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1() {}
private:
    CpProxyAvOpenhomeOrgWebProcessorConfig1& iService;
    Brh& iProcessorConfig;
};

SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1::SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(CpProxyAvOpenhomeOrgWebProcessorConfig1& aProxy, Brh& aProcessorConfig)
    : iService(aProxy)
    , iProcessorConfig(aProcessorConfig)
{
}

void SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetProcessorConfig(aAsync, iProcessorConfig);
}


class SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 : public SyncProxyAction
{
public:
    SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(CpProxyAvOpenhomeOrgWebProcessorConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1() {}
private:
    CpProxyAvOpenhomeOrgWebProcessorConfig1& iService;
};

SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1::SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(CpProxyAvOpenhomeOrgWebProcessorConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetProcessorConfig(aAsync);
}


CpProxyAvOpenhomeOrgWebProcessorConfig1::CpProxyAvOpenhomeOrgWebProcessorConfig1(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebProcessorConfig1::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebProcessorConfig1::ProcessorConfigPropertyChanged);
    iProcessorConfig = new PropertyString("ProcessorConfig", functor);
    AddProperty(iProcessorConfig);
}

CpProxyAvOpenhomeOrgWebProcessorConfig1::~CpProxyAvOpenhomeOrgWebProcessorConfig1()
{
    DestroyService();
    delete iActionGetProcessorConfig;
    delete iActionSetProcessorConfig;
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1::SyncGetProcessorConfig(Brh& aProcessorConfig)
{
    SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 sync(*this, aProcessorConfig);
    BeginGetProcessorConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1::BeginGetProcessorConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetProcessorConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetProcessorConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1::EndGetProcessorConfig(IAsync& aAsync, Brh& aProcessorConfig)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aProcessorConfig);
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1::SyncSetProcessorConfig(const Brx& aProcessorConfig)
{
    SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 sync(*this);
    BeginSetProcessorConfig(aProcessorConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1::BeginSetProcessorConfig(const Brx& aProcessorConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetProcessorConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetProcessorConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aProcessorConfig));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1::EndSetProcessorConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgWebProcessorConfig1::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock->Wait();
    iAliveChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1::SetPropertyProcessorConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iProcessorConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1::PropertyProcessorConfig(Brhz& aProcessorConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aProcessorConfig.Set(iProcessorConfig->Value());
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebProcessorConfig1::ProcessorConfigPropertyChanged()
{
    ReportEvent(iProcessorConfigChanged);
}

