#include "CpAvOpenhomeOrgDACConfig1.h"
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


class SyncGetFilterModeAvOpenhomeOrgDACConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetFilterModeAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy, std::string& aFilterMode, std::string& aFilterModeList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetFilterModeAvOpenhomeOrgDACConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1Cpp& iService;
    std::string& iFilterMode;
    std::string& iFilterModeList;
};

SyncGetFilterModeAvOpenhomeOrgDACConfig1Cpp::SyncGetFilterModeAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy, std::string& aFilterMode, std::string& aFilterModeList)
    : iService(aProxy)
    , iFilterMode(aFilterMode)
    , iFilterModeList(aFilterModeList)
{
}

void SyncGetFilterModeAvOpenhomeOrgDACConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetFilterMode(aAsync, iFilterMode, iFilterModeList);
}


class SyncSetFilterModeAvOpenhomeOrgDACConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetFilterModeAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetFilterModeAvOpenhomeOrgDACConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1Cpp& iService;
};

SyncSetFilterModeAvOpenhomeOrgDACConfig1Cpp::SyncSetFilterModeAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetFilterModeAvOpenhomeOrgDACConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFilterMode(aAsync);
}


class SyncGetDACPhaseAvOpenhomeOrgDACConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDACPhaseAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy, uint32_t& aPhase);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDACPhaseAvOpenhomeOrgDACConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1Cpp& iService;
    uint32_t& iPhase;
};

SyncGetDACPhaseAvOpenhomeOrgDACConfig1Cpp::SyncGetDACPhaseAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy, uint32_t& aPhase)
    : iService(aProxy)
    , iPhase(aPhase)
{
}

void SyncGetDACPhaseAvOpenhomeOrgDACConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACPhase(aAsync, iPhase);
}


class SyncSetDACPhaseAvOpenhomeOrgDACConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetDACPhaseAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDACPhaseAvOpenhomeOrgDACConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1Cpp& iService;
};

SyncSetDACPhaseAvOpenhomeOrgDACConfig1Cpp::SyncSetDACPhaseAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACPhaseAvOpenhomeOrgDACConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACPhase(aAsync);
}


class SyncGetDACBalanceAvOpenhomeOrgDACConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDACBalanceAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy, uint32_t& aBalance);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDACBalanceAvOpenhomeOrgDACConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1Cpp& iService;
    uint32_t& iBalance;
};

SyncGetDACBalanceAvOpenhomeOrgDACConfig1Cpp::SyncGetDACBalanceAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy, uint32_t& aBalance)
    : iService(aProxy)
    , iBalance(aBalance)
{
}

void SyncGetDACBalanceAvOpenhomeOrgDACConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACBalance(aAsync, iBalance);
}


class SyncSetDACBalanceAvOpenhomeOrgDACConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetDACBalanceAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDACBalanceAvOpenhomeOrgDACConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1Cpp& iService;
};

SyncSetDACBalanceAvOpenhomeOrgDACConfig1Cpp::SyncSetDACBalanceAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACBalanceAvOpenhomeOrgDACConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACBalance(aAsync);
}


class SyncGetWaitingTimeAvOpenhomeOrgDACConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetWaitingTimeAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy, std::string& aWaitingTime);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWaitingTimeAvOpenhomeOrgDACConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1Cpp& iService;
    std::string& iWaitingTime;
};

SyncGetWaitingTimeAvOpenhomeOrgDACConfig1Cpp::SyncGetWaitingTimeAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy, std::string& aWaitingTime)
    : iService(aProxy)
    , iWaitingTime(aWaitingTime)
{
}

void SyncGetWaitingTimeAvOpenhomeOrgDACConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWaitingTime(aAsync, iWaitingTime);
}


class SyncSetWaitingTimeAvOpenhomeOrgDACConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetWaitingTimeAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetWaitingTimeAvOpenhomeOrgDACConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1Cpp& iService;
};

SyncSetWaitingTimeAvOpenhomeOrgDACConfig1Cpp::SyncSetWaitingTimeAvOpenhomeOrgDACConfig1Cpp(CpProxyAvOpenhomeOrgDACConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetWaitingTimeAvOpenhomeOrgDACConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWaitingTime(aAsync);
}


CpProxyAvOpenhomeOrgDACConfig1Cpp::CpProxyAvOpenhomeOrgDACConfig1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "DACConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetFilterMode = new Action("GetFilterMode");
    param = new OpenHome::Net::ParameterString("FilterMode");
    iActionGetFilterMode->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("FilterModeList");
    iActionGetFilterMode->AddOutputParameter(param);

    iActionSetFilterMode = new Action("SetFilterMode");
    param = new OpenHome::Net::ParameterString("FilterMode");
    iActionSetFilterMode->AddInputParameter(param);

    iActionGetDACPhase = new Action("GetDACPhase");
    param = new OpenHome::Net::ParameterUint("Phase");
    iActionGetDACPhase->AddOutputParameter(param);

    iActionSetDACPhase = new Action("SetDACPhase");
    param = new OpenHome::Net::ParameterUint("Phase");
    iActionSetDACPhase->AddInputParameter(param);

    iActionGetDACBalance = new Action("GetDACBalance");
    param = new OpenHome::Net::ParameterUint("Balance");
    iActionGetDACBalance->AddOutputParameter(param);

    iActionSetDACBalance = new Action("SetDACBalance");
    param = new OpenHome::Net::ParameterUint("Balance");
    iActionSetDACBalance->AddInputParameter(param);

    iActionGetWaitingTime = new Action("GetWaitingTime");
    param = new OpenHome::Net::ParameterString("WaitingTime");
    iActionGetWaitingTime->AddOutputParameter(param);

    iActionSetWaitingTime = new Action("SetWaitingTime");
    param = new OpenHome::Net::ParameterString("WaitingTime");
    iActionSetWaitingTime->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgDACConfig1Cpp::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgDACConfig1Cpp::~CpProxyAvOpenhomeOrgDACConfig1Cpp()
{
    DestroyService();
    delete iActionGetFilterMode;
    delete iActionSetFilterMode;
    delete iActionGetDACPhase;
    delete iActionSetDACPhase;
    delete iActionGetDACBalance;
    delete iActionSetDACBalance;
    delete iActionGetWaitingTime;
    delete iActionSetWaitingTime;
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::SyncGetFilterMode(std::string& aFilterMode, std::string& aFilterModeList)
{
    SyncGetFilterModeAvOpenhomeOrgDACConfig1Cpp sync(*this, aFilterMode, aFilterModeList);
    BeginGetFilterMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::BeginGetFilterMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetFilterMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetFilterMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::EndGetFilterMode(IAsync& aAsync, std::string& aFilterMode, std::string& aFilterModeList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetFilterMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aFilterMode.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aFilterModeList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::SyncSetFilterMode(const std::string& aFilterMode)
{
    SyncSetFilterModeAvOpenhomeOrgDACConfig1Cpp sync(*this);
    BeginSetFilterMode(aFilterMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::BeginSetFilterMode(const std::string& aFilterMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetFilterMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFilterMode->InputParameters();
    {
        Brn buf((const TByte*)aFilterMode.c_str(), (TUint)aFilterMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::EndSetFilterMode(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetFilterMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::SyncGetDACPhase(uint32_t& aPhase)
{
    SyncGetDACPhaseAvOpenhomeOrgDACConfig1Cpp sync(*this, aPhase);
    BeginGetDACPhase(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::BeginGetDACPhase(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDACPhase, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACPhase->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::EndGetDACPhase(IAsync& aAsync, uint32_t& aPhase)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDACPhase"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aPhase = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::SyncSetDACPhase(uint32_t aPhase)
{
    SyncSetDACPhaseAvOpenhomeOrgDACConfig1Cpp sync(*this);
    BeginSetDACPhase(aPhase, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::BeginSetDACPhase(uint32_t aPhase, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDACPhase, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACPhase->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aPhase));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::EndSetDACPhase(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDACPhase"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::SyncGetDACBalance(uint32_t& aBalance)
{
    SyncGetDACBalanceAvOpenhomeOrgDACConfig1Cpp sync(*this, aBalance);
    BeginGetDACBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::BeginGetDACBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDACBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACBalance->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::EndGetDACBalance(IAsync& aAsync, uint32_t& aBalance)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDACBalance"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aBalance = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::SyncSetDACBalance(uint32_t aBalance)
{
    SyncSetDACBalanceAvOpenhomeOrgDACConfig1Cpp sync(*this);
    BeginSetDACBalance(aBalance, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::BeginSetDACBalance(uint32_t aBalance, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDACBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACBalance->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aBalance));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::EndSetDACBalance(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDACBalance"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::SyncGetWaitingTime(std::string& aWaitingTime)
{
    SyncGetWaitingTimeAvOpenhomeOrgDACConfig1Cpp sync(*this, aWaitingTime);
    BeginGetWaitingTime(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::BeginGetWaitingTime(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetWaitingTime, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWaitingTime->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::EndGetWaitingTime(IAsync& aAsync, std::string& aWaitingTime)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetWaitingTime"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aWaitingTime.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::SyncSetWaitingTime(const std::string& aWaitingTime)
{
    SyncSetWaitingTimeAvOpenhomeOrgDACConfig1Cpp sync(*this);
    BeginSetWaitingTime(aWaitingTime, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::BeginSetWaitingTime(const std::string& aWaitingTime, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetWaitingTime, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWaitingTime->InputParameters();
    {
        Brn buf((const TByte*)aWaitingTime.c_str(), (TUint)aWaitingTime.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::EndSetWaitingTime(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetWaitingTime"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCurrentActionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::PropertyCurrentAction(uint32_t& aCurrentAction) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgDACConfig1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgDACConfig1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgDACConfig1Cpp::Version() const
{
  return iCpProxy.Version();
}

