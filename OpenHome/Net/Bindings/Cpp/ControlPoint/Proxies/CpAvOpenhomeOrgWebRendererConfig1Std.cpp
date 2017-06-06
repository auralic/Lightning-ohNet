#include "CpAvOpenhomeOrgWebRendererConfig1.h"
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


class SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp(CpProxyAvOpenhomeOrgWebRendererConfig1Cpp& aProxy, std::string& aRendererConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebRendererConfig1Cpp& iService;
    std::string& iRendererConfig;
};

SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp::SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp(CpProxyAvOpenhomeOrgWebRendererConfig1Cpp& aProxy, std::string& aRendererConfig)
    : iService(aProxy)
    , iRendererConfig(aRendererConfig)
{
}

void SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRendererConfig(aAsync, iRendererConfig);
}


class SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp(CpProxyAvOpenhomeOrgWebRendererConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgWebRendererConfig1Cpp& iService;
};

SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp::SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp(CpProxyAvOpenhomeOrgWebRendererConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRendererConfig(aAsync);
}


CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::CpProxyAvOpenhomeOrgWebRendererConfig1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::RendererConfigPropertyChanged);
    iRendererConfig = new PropertyString("RendererConfig", functor);
    AddProperty(iRendererConfig);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::~CpProxyAvOpenhomeOrgWebRendererConfig1Cpp()
{
    DestroyService();
    delete iActionGetRendererConfig;
    delete iActionSetRendererConfig;
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::SyncGetRendererConfig(std::string& aRendererConfig)
{
    SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp sync(*this, aRendererConfig);
    BeginGetRendererConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::BeginGetRendererConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetRendererConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRendererConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::EndGetRendererConfig(IAsync& aAsync, std::string& aRendererConfig)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aRendererConfig.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::SyncSetRendererConfig(const std::string& aRendererConfig)
{
    SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1Cpp sync(*this);
    BeginSetRendererConfig(aRendererConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::BeginSetRendererConfig(const std::string& aRendererConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetRendererConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRendererConfig->InputParameters();
    {
        Brn buf((const TByte*)aRendererConfig.c_str(), (TUint)aRendererConfig.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::EndSetRendererConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock->Wait();
    iAliveChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::SetPropertyRendererConfigChanged(Functor& aFunctor)
{
    iLock->Wait();
    iRendererConfigChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock->Wait();
    iCurrentActionChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::PropertyAlive(bool& aAlive) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::PropertyRendererConfig(std::string& aRendererConfig) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iRendererConfig->Value();
    aRendererConfig.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::PropertyCurrentAction(uint32_t& aCurrentAction) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::RendererConfigPropertyChanged()
{
    ReportEvent(iRendererConfigChanged);
}

void CpProxyAvOpenhomeOrgWebRendererConfig1Cpp::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

