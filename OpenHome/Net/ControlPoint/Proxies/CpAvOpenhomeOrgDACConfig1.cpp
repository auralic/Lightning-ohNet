#include "CpAvOpenhomeOrgDACConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetFilterModeAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncGetFilterModeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, Brh& aFilterMode, Brh& aFilterModeList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
    Brh& iFilterMode;
    Brh& iFilterModeList;
};

class SyncSetFilterModeAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncSetFilterModeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
};

class SyncGetDACPhaseAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncGetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, TUint& aPhase);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
    TUint& iPhase;
};

class SyncSetDACPhaseAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncSetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
};

class SyncGetDACBalanceAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncGetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, TUint& aBalance);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
    TUint& iBalance;
};

class SyncSetDACBalanceAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncSetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
};

class SyncGetWaitingTimeAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncGetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, Brh& aWaitingTime);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
    Brh& iWaitingTime;
};

class SyncSetWaitingTimeAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncSetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetFilterModeAvOpenhomeOrgDACConfig1

SyncGetFilterModeAvOpenhomeOrgDACConfig1::SyncGetFilterModeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, Brh& aFilterMode, Brh& aFilterModeList)
    : iService(aProxy)
    , iFilterMode(aFilterMode)
    , iFilterModeList(aFilterModeList)
{
}

void SyncGetFilterModeAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetFilterMode(aAsync, iFilterMode, iFilterModeList);
}

// SyncSetFilterModeAvOpenhomeOrgDACConfig1

SyncSetFilterModeAvOpenhomeOrgDACConfig1::SyncSetFilterModeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetFilterModeAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFilterMode(aAsync);
}

// SyncGetDACPhaseAvOpenhomeOrgDACConfig1

SyncGetDACPhaseAvOpenhomeOrgDACConfig1::SyncGetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, TUint& aPhase)
    : iService(aProxy)
    , iPhase(aPhase)
{
}

void SyncGetDACPhaseAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACPhase(aAsync, iPhase);
}

// SyncSetDACPhaseAvOpenhomeOrgDACConfig1

SyncSetDACPhaseAvOpenhomeOrgDACConfig1::SyncSetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACPhaseAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACPhase(aAsync);
}

// SyncGetDACBalanceAvOpenhomeOrgDACConfig1

SyncGetDACBalanceAvOpenhomeOrgDACConfig1::SyncGetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, TUint& aBalance)
    : iService(aProxy)
    , iBalance(aBalance)
{
}

void SyncGetDACBalanceAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACBalance(aAsync, iBalance);
}

// SyncSetDACBalanceAvOpenhomeOrgDACConfig1

SyncSetDACBalanceAvOpenhomeOrgDACConfig1::SyncSetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACBalanceAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACBalance(aAsync);
}

// SyncGetWaitingTimeAvOpenhomeOrgDACConfig1

SyncGetWaitingTimeAvOpenhomeOrgDACConfig1::SyncGetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, Brh& aWaitingTime)
    : iService(aProxy)
    , iWaitingTime(aWaitingTime)
{
}

void SyncGetWaitingTimeAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWaitingTime(aAsync, iWaitingTime);
}

// SyncSetWaitingTimeAvOpenhomeOrgDACConfig1

SyncSetWaitingTimeAvOpenhomeOrgDACConfig1::SyncSetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetWaitingTimeAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWaitingTime(aAsync);
}


// CpProxyAvOpenhomeOrgDACConfig1

CpProxyAvOpenhomeOrgDACConfig1::CpProxyAvOpenhomeOrgDACConfig1(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgDACConfig1::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgDACConfig1::~CpProxyAvOpenhomeOrgDACConfig1()
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

void CpProxyAvOpenhomeOrgDACConfig1::SyncGetFilterMode(Brh& aFilterMode, Brh& aFilterModeList)
{
    SyncGetFilterModeAvOpenhomeOrgDACConfig1 sync(*this, aFilterMode, aFilterModeList);
    BeginGetFilterMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1::BeginGetFilterMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetFilterMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetFilterMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1::EndGetFilterMode(IAsync& aAsync, Brh& aFilterMode, Brh& aFilterModeList)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aFilterMode);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aFilterModeList);
}

void CpProxyAvOpenhomeOrgDACConfig1::SyncSetFilterMode(const Brx& aFilterMode)
{
    SyncSetFilterModeAvOpenhomeOrgDACConfig1 sync(*this);
    BeginSetFilterMode(aFilterMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1::BeginSetFilterMode(const Brx& aFilterMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetFilterMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFilterMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFilterMode));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1::EndSetFilterMode(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgDACConfig1::SyncGetDACPhase(TUint& aPhase)
{
    SyncGetDACPhaseAvOpenhomeOrgDACConfig1 sync(*this, aPhase);
    BeginGetDACPhase(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1::BeginGetDACPhase(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDACPhase, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACPhase->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1::EndGetDACPhase(IAsync& aAsync, TUint& aPhase)
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

void CpProxyAvOpenhomeOrgDACConfig1::SyncSetDACPhase(TUint aPhase)
{
    SyncSetDACPhaseAvOpenhomeOrgDACConfig1 sync(*this);
    BeginSetDACPhase(aPhase, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1::BeginSetDACPhase(TUint aPhase, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDACPhase, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACPhase->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aPhase));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1::EndSetDACPhase(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgDACConfig1::SyncGetDACBalance(TUint& aBalance)
{
    SyncGetDACBalanceAvOpenhomeOrgDACConfig1 sync(*this, aBalance);
    BeginGetDACBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1::BeginGetDACBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDACBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACBalance->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1::EndGetDACBalance(IAsync& aAsync, TUint& aBalance)
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

void CpProxyAvOpenhomeOrgDACConfig1::SyncSetDACBalance(TUint aBalance)
{
    SyncSetDACBalanceAvOpenhomeOrgDACConfig1 sync(*this);
    BeginSetDACBalance(aBalance, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1::BeginSetDACBalance(TUint aBalance, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDACBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACBalance->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aBalance));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1::EndSetDACBalance(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgDACConfig1::SyncGetWaitingTime(Brh& aWaitingTime)
{
    SyncGetWaitingTimeAvOpenhomeOrgDACConfig1 sync(*this, aWaitingTime);
    BeginGetWaitingTime(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1::BeginGetWaitingTime(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetWaitingTime, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWaitingTime->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1::EndGetWaitingTime(IAsync& aAsync, Brh& aWaitingTime)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aWaitingTime);
}

void CpProxyAvOpenhomeOrgDACConfig1::SyncSetWaitingTime(const Brx& aWaitingTime)
{
    SyncSetWaitingTimeAvOpenhomeOrgDACConfig1 sync(*this);
    BeginSetWaitingTime(aWaitingTime, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1::BeginSetWaitingTime(const Brx& aWaitingTime, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetWaitingTime, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWaitingTime->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aWaitingTime));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1::EndSetWaitingTime(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgDACConfig1::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCurrentActionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgDACConfig1::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgDACConfig1::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}


void CpProxyAvOpenhomeOrgDACConfig1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgDACConfig1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgDACConfig1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgDACConfig1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgDACConfig1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgDACConfig1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgDACConfig1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgDACConfig1::Version() const
{
  return iCpProxy.Version();
}


