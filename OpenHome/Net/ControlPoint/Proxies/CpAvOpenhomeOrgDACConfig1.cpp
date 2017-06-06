#include "CpAvOpenhomeOrgDACConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncGetFilterModeAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncGetFilterModeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, Brh& aFilterMode, Brh& aFilterModeList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetFilterModeAvOpenhomeOrgDACConfig1() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
    Brh& iFilterMode;
    Brh& iFilterModeList;
};

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


class SyncSetFilterModeAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncSetFilterModeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetFilterModeAvOpenhomeOrgDACConfig1() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
};

SyncSetFilterModeAvOpenhomeOrgDACConfig1::SyncSetFilterModeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetFilterModeAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFilterMode(aAsync);
}


class SyncGetDACPhaseAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncGetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, TUint& aPhase);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDACPhaseAvOpenhomeOrgDACConfig1() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
    TUint& iPhase;
};

SyncGetDACPhaseAvOpenhomeOrgDACConfig1::SyncGetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, TUint& aPhase)
    : iService(aProxy)
    , iPhase(aPhase)
{
}

void SyncGetDACPhaseAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACPhase(aAsync, iPhase);
}


class SyncSetDACPhaseAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncSetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDACPhaseAvOpenhomeOrgDACConfig1() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
};

SyncSetDACPhaseAvOpenhomeOrgDACConfig1::SyncSetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACPhaseAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACPhase(aAsync);
}


class SyncGetDACBalanceAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncGetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, TUint& aBalance);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDACBalanceAvOpenhomeOrgDACConfig1() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
    TUint& iBalance;
};

SyncGetDACBalanceAvOpenhomeOrgDACConfig1::SyncGetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, TUint& aBalance)
    : iService(aProxy)
    , iBalance(aBalance)
{
}

void SyncGetDACBalanceAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACBalance(aAsync, iBalance);
}


class SyncSetDACBalanceAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncSetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDACBalanceAvOpenhomeOrgDACConfig1() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
};

SyncSetDACBalanceAvOpenhomeOrgDACConfig1::SyncSetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACBalanceAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACBalance(aAsync);
}


class SyncGetWaitingTimeAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncGetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, Brh& aWaitingTime);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWaitingTimeAvOpenhomeOrgDACConfig1() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
    Brh& iWaitingTime;
};

SyncGetWaitingTimeAvOpenhomeOrgDACConfig1::SyncGetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy, Brh& aWaitingTime)
    : iService(aProxy)
    , iWaitingTime(aWaitingTime)
{
}

void SyncGetWaitingTimeAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWaitingTime(aAsync, iWaitingTime);
}


class SyncSetWaitingTimeAvOpenhomeOrgDACConfig1 : public SyncProxyAction
{
public:
    SyncSetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetWaitingTimeAvOpenhomeOrgDACConfig1() {}
private:
    CpProxyAvOpenhomeOrgDACConfig1& iService;
};

SyncSetWaitingTimeAvOpenhomeOrgDACConfig1::SyncSetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetWaitingTimeAvOpenhomeOrgDACConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWaitingTime(aAsync);
}


CpProxyAvOpenhomeOrgDACConfig1::CpProxyAvOpenhomeOrgDACConfig1(CpDevice& aDevice)
    : CpProxy("av-openhome-org", "DACConfig", 1, aDevice.Device())
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
    Invocation* invocation = iService->Invocation(*iActionGetFilterMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetFilterMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionSetFilterMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFilterMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFilterMode));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionGetDACPhase, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACPhase->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionSetDACPhase, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACPhase->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aPhase));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionGetDACBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACBalance->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionSetDACBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACBalance->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aBalance));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionGetWaitingTime, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWaitingTime->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionSetWaitingTime, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWaitingTime->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aWaitingTime));
    iInvocable.InvokeAction(*invocation);
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
    iLock->Wait();
    iCurrentActionChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgDACConfig1::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgDACConfig1::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

