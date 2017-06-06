#include "CpAvOpenhomeOrgWebRendererConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1 : public SyncProxyAction
{
public:
    SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1& aProxy, Brh& aRendererConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1() {}
private:
    CpProxyAvOpenhomeOrgWebRendererConfig1& iService;
    Brh& iRendererConfig;
};

SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1::SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1& aProxy, Brh& aRendererConfig)
    : iService(aProxy)
    , iRendererConfig(aRendererConfig)
{
}

void SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRendererConfig(aAsync, iRendererConfig);
}


class SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1 : public SyncProxyAction
{
public:
    SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1() {}
private:
    CpProxyAvOpenhomeOrgWebRendererConfig1& iService;
};

SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1::SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRendererConfig(aAsync);
}


CpProxyAvOpenhomeOrgWebRendererConfig1::CpProxyAvOpenhomeOrgWebRendererConfig1(CpDevice& aDevice)
    : CpProxy("av-openhome-org", "WebRendererConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetRendererConfig = new Action("GetRendererConfig");
    param = new OpenHome::Net::ParameterString("RendererConfig");
    iActionGetRendererConfig->AddOutputParameter(param);

    iActionSetRendererConfig = new Action("SetRendererConfig");
    param = new OpenHome::Net::ParameterString("RendererConfig");
    iActionSetRendererConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1::RendererConfigPropertyChanged);
    iRendererConfig = new PropertyString("RendererConfig", functor);
    AddProperty(iRendererConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgWebRendererConfig1::~CpProxyAvOpenhomeOrgWebRendererConfig1()
{
    DestroyService();
    delete iActionGetRendererConfig;
    delete iActionSetRendererConfig;
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SyncGetRendererConfig(Brh& aRendererConfig)
{
    SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1 sync(*this, aRendererConfig);
    BeginGetRendererConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::BeginGetRendererConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetRendererConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRendererConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::EndGetRendererConfig(IAsync& aAsync, Brh& aRendererConfig)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetRendererConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aRendererConfig);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SyncSetRendererConfig(const Brx& aRendererConfig)
{
    SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1 sync(*this);
    BeginSetRendererConfig(aRendererConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::BeginSetRendererConfig(const Brx& aRendererConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetRendererConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRendererConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aRendererConfig));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::EndSetRendererConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetRendererConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock->Wait();
    iAliveChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SetPropertyRendererConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iRendererConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock->Wait();
    iCurrentActionChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::PropertyRendererConfig(Brhz& aRendererConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aRendererConfig.Set(iRendererConfig->Value());
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::RendererConfigPropertyChanged()
{
    ReportEvent(iRendererConfigChanged);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

