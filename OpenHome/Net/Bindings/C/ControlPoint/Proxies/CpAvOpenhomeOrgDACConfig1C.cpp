#include "CpAvOpenhomeOrgDACConfig1.h"
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/C/CpProxyCPrivate.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class CpProxyAvOpenhomeOrgDACConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgDACConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgDACConfig1C();
    //CpProxyAvOpenhomeOrgDACConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgDACConfig1*>(iProxy); }

    void SyncGetFilterMode(Brh& aFilterMode, Brh& aFilterModeList);
    void BeginGetFilterMode(FunctorAsync& aFunctor);
    void EndGetFilterMode(IAsync& aAsync, Brh& aFilterMode, Brh& aFilterModeList);

    void SyncSetFilterMode(const Brx& aFilterMode);
    void BeginSetFilterMode(const Brx& aFilterMode, FunctorAsync& aFunctor);
    void EndSetFilterMode(IAsync& aAsync);

    void SyncGetDACPhase(TUint& aPhase);
    void BeginGetDACPhase(FunctorAsync& aFunctor);
    void EndGetDACPhase(IAsync& aAsync, TUint& aPhase);

    void SyncSetDACPhase(TUint aPhase);
    void BeginSetDACPhase(TUint aPhase, FunctorAsync& aFunctor);
    void EndSetDACPhase(IAsync& aAsync);

    void SyncGetDACBalance(TUint& aBalance);
    void BeginGetDACBalance(FunctorAsync& aFunctor);
    void EndGetDACBalance(IAsync& aAsync, TUint& aBalance);

    void SyncSetDACBalance(TUint aBalance);
    void BeginSetDACBalance(TUint aBalance, FunctorAsync& aFunctor);
    void EndSetDACBalance(IAsync& aAsync);

    void SyncGetWaitingTime(Brh& aWaitingTime);
    void BeginGetWaitingTime(FunctorAsync& aFunctor);
    void EndGetWaitingTime(IAsync& aAsync, Brh& aWaitingTime);

    void SyncSetWaitingTime(const Brx& aWaitingTime);
    void BeginSetWaitingTime(const Brx& aWaitingTime, FunctorAsync& aFunctor);
    void EndSetWaitingTime(IAsync& aAsync);

    void SetPropertyCurrentActionChanged(Functor& aFunctor);

    void PropertyCurrentAction(TUint& aCurrentAction) const;
private:
    void CurrentActionPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetFilterMode;
    Action* iActionSetFilterMode;
    Action* iActionGetDACPhase;
    Action* iActionSetDACPhase;
    Action* iActionGetDACBalance;
    Action* iActionSetDACBalance;
    Action* iActionGetWaitingTime;
    Action* iActionSetWaitingTime;
    PropertyUint* iCurrentAction;
    Functor iCurrentActionChanged;
};


class SyncGetFilterModeAvOpenhomeOrgDACConfig1C : public SyncProxyAction
{
public:
    SyncGetFilterModeAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy, Brh& aFilterMode, Brh& aFilterModeList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetFilterModeAvOpenhomeOrgDACConfig1C() {};
private:
    CpProxyAvOpenhomeOrgDACConfig1C& iService;
    Brh& iFilterMode;
    Brh& iFilterModeList;
};

SyncGetFilterModeAvOpenhomeOrgDACConfig1C::SyncGetFilterModeAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy, Brh& aFilterMode, Brh& aFilterModeList)
    : iService(aProxy)
    , iFilterMode(aFilterMode)
    , iFilterModeList(aFilterModeList)
{
}

void SyncGetFilterModeAvOpenhomeOrgDACConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetFilterMode(aAsync, iFilterMode, iFilterModeList);
}


class SyncSetFilterModeAvOpenhomeOrgDACConfig1C : public SyncProxyAction
{
public:
    SyncSetFilterModeAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetFilterModeAvOpenhomeOrgDACConfig1C() {};
private:
    CpProxyAvOpenhomeOrgDACConfig1C& iService;
};

SyncSetFilterModeAvOpenhomeOrgDACConfig1C::SyncSetFilterModeAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetFilterModeAvOpenhomeOrgDACConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFilterMode(aAsync);
}


class SyncGetDACPhaseAvOpenhomeOrgDACConfig1C : public SyncProxyAction
{
public:
    SyncGetDACPhaseAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy, TUint& aPhase);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDACPhaseAvOpenhomeOrgDACConfig1C() {};
private:
    CpProxyAvOpenhomeOrgDACConfig1C& iService;
    TUint& iPhase;
};

SyncGetDACPhaseAvOpenhomeOrgDACConfig1C::SyncGetDACPhaseAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy, TUint& aPhase)
    : iService(aProxy)
    , iPhase(aPhase)
{
}

void SyncGetDACPhaseAvOpenhomeOrgDACConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACPhase(aAsync, iPhase);
}


class SyncSetDACPhaseAvOpenhomeOrgDACConfig1C : public SyncProxyAction
{
public:
    SyncSetDACPhaseAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDACPhaseAvOpenhomeOrgDACConfig1C() {};
private:
    CpProxyAvOpenhomeOrgDACConfig1C& iService;
};

SyncSetDACPhaseAvOpenhomeOrgDACConfig1C::SyncSetDACPhaseAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACPhaseAvOpenhomeOrgDACConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACPhase(aAsync);
}


class SyncGetDACBalanceAvOpenhomeOrgDACConfig1C : public SyncProxyAction
{
public:
    SyncGetDACBalanceAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy, TUint& aBalance);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDACBalanceAvOpenhomeOrgDACConfig1C() {};
private:
    CpProxyAvOpenhomeOrgDACConfig1C& iService;
    TUint& iBalance;
};

SyncGetDACBalanceAvOpenhomeOrgDACConfig1C::SyncGetDACBalanceAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy, TUint& aBalance)
    : iService(aProxy)
    , iBalance(aBalance)
{
}

void SyncGetDACBalanceAvOpenhomeOrgDACConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACBalance(aAsync, iBalance);
}


class SyncSetDACBalanceAvOpenhomeOrgDACConfig1C : public SyncProxyAction
{
public:
    SyncSetDACBalanceAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDACBalanceAvOpenhomeOrgDACConfig1C() {};
private:
    CpProxyAvOpenhomeOrgDACConfig1C& iService;
};

SyncSetDACBalanceAvOpenhomeOrgDACConfig1C::SyncSetDACBalanceAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACBalanceAvOpenhomeOrgDACConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACBalance(aAsync);
}


class SyncGetWaitingTimeAvOpenhomeOrgDACConfig1C : public SyncProxyAction
{
public:
    SyncGetWaitingTimeAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy, Brh& aWaitingTime);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWaitingTimeAvOpenhomeOrgDACConfig1C() {};
private:
    CpProxyAvOpenhomeOrgDACConfig1C& iService;
    Brh& iWaitingTime;
};

SyncGetWaitingTimeAvOpenhomeOrgDACConfig1C::SyncGetWaitingTimeAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy, Brh& aWaitingTime)
    : iService(aProxy)
    , iWaitingTime(aWaitingTime)
{
}

void SyncGetWaitingTimeAvOpenhomeOrgDACConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWaitingTime(aAsync, iWaitingTime);
}


class SyncSetWaitingTimeAvOpenhomeOrgDACConfig1C : public SyncProxyAction
{
public:
    SyncSetWaitingTimeAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetWaitingTimeAvOpenhomeOrgDACConfig1C() {};
private:
    CpProxyAvOpenhomeOrgDACConfig1C& iService;
};

SyncSetWaitingTimeAvOpenhomeOrgDACConfig1C::SyncSetWaitingTimeAvOpenhomeOrgDACConfig1C(CpProxyAvOpenhomeOrgDACConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetWaitingTimeAvOpenhomeOrgDACConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWaitingTime(aAsync);
}

CpProxyAvOpenhomeOrgDACConfig1C::CpProxyAvOpenhomeOrgDACConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "DACConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgDACConfig1C::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgDACConfig1C::~CpProxyAvOpenhomeOrgDACConfig1C()
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

void CpProxyAvOpenhomeOrgDACConfig1C::SyncGetFilterMode(Brh& aFilterMode, Brh& aFilterModeList)
{
    SyncGetFilterModeAvOpenhomeOrgDACConfig1C sync(*this, aFilterMode, aFilterModeList);
    BeginGetFilterMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1C::BeginGetFilterMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetFilterMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetFilterMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1C::EndGetFilterMode(IAsync& aAsync, Brh& aFilterMode, Brh& aFilterModeList)
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

void CpProxyAvOpenhomeOrgDACConfig1C::SyncSetFilterMode(const Brx& aFilterMode)
{
    SyncSetFilterModeAvOpenhomeOrgDACConfig1C sync(*this);
    BeginSetFilterMode(aFilterMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1C::BeginSetFilterMode(const Brx& aFilterMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetFilterMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFilterMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFilterMode));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1C::EndSetFilterMode(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgDACConfig1C::SyncGetDACPhase(TUint& aPhase)
{
    SyncGetDACPhaseAvOpenhomeOrgDACConfig1C sync(*this, aPhase);
    BeginGetDACPhase(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1C::BeginGetDACPhase(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDACPhase, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACPhase->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1C::EndGetDACPhase(IAsync& aAsync, TUint& aPhase)
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

void CpProxyAvOpenhomeOrgDACConfig1C::SyncSetDACPhase(TUint aPhase)
{
    SyncSetDACPhaseAvOpenhomeOrgDACConfig1C sync(*this);
    BeginSetDACPhase(aPhase, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1C::BeginSetDACPhase(TUint aPhase, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetDACPhase, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACPhase->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aPhase));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1C::EndSetDACPhase(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgDACConfig1C::SyncGetDACBalance(TUint& aBalance)
{
    SyncGetDACBalanceAvOpenhomeOrgDACConfig1C sync(*this, aBalance);
    BeginGetDACBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1C::BeginGetDACBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDACBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACBalance->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1C::EndGetDACBalance(IAsync& aAsync, TUint& aBalance)
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

void CpProxyAvOpenhomeOrgDACConfig1C::SyncSetDACBalance(TUint aBalance)
{
    SyncSetDACBalanceAvOpenhomeOrgDACConfig1C sync(*this);
    BeginSetDACBalance(aBalance, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1C::BeginSetDACBalance(TUint aBalance, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetDACBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACBalance->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aBalance));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1C::EndSetDACBalance(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgDACConfig1C::SyncGetWaitingTime(Brh& aWaitingTime)
{
    SyncGetWaitingTimeAvOpenhomeOrgDACConfig1C sync(*this, aWaitingTime);
    BeginGetWaitingTime(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1C::BeginGetWaitingTime(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetWaitingTime, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWaitingTime->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1C::EndGetWaitingTime(IAsync& aAsync, Brh& aWaitingTime)
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

void CpProxyAvOpenhomeOrgDACConfig1C::SyncSetWaitingTime(const Brx& aWaitingTime)
{
    SyncSetWaitingTimeAvOpenhomeOrgDACConfig1C sync(*this);
    BeginSetWaitingTime(aWaitingTime, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDACConfig1C::BeginSetWaitingTime(const Brx& aWaitingTime, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetWaitingTime, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWaitingTime->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aWaitingTime));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDACConfig1C::EndSetWaitingTime(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgDACConfig1C::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCurrentActionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgDACConfig1C::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgDACConfig1C::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgDACConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgDACConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgDACConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1SyncGetFilterMode(THandle aHandle, char** aFilterMode, char** aFilterModeList)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aFilterMode;
    Brh buf_aFilterModeList;
    int32_t err = 0;
    try {
        proxyC->SyncGetFilterMode(buf_aFilterMode, buf_aFilterModeList);
        *aFilterMode = buf_aFilterMode.Extract();
        *aFilterModeList = buf_aFilterModeList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aFilterMode = NULL;
        *aFilterModeList = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDACConfig1BeginGetFilterMode(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetFilterMode(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1EndGetFilterMode(THandle aHandle, OhNetHandleAsync aAsync, char** aFilterMode, char** aFilterModeList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aFilterMode;
    *aFilterMode = NULL;
    Brh buf_aFilterModeList;
    *aFilterModeList = NULL;
    try {
        proxyC->EndGetFilterMode(*async, buf_aFilterMode, buf_aFilterModeList);
        *aFilterMode = buf_aFilterMode.Extract();
        *aFilterModeList = buf_aFilterModeList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1SyncSetFilterMode(THandle aHandle, const char* aFilterMode)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aFilterMode(aFilterMode);
    int32_t err = 0;
    try {
        proxyC->SyncSetFilterMode(buf_aFilterMode);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDACConfig1BeginSetFilterMode(THandle aHandle, const char* aFilterMode, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aFilterMode(aFilterMode);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetFilterMode(buf_aFilterMode, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1EndSetFilterMode(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetFilterMode(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1SyncGetDACPhase(THandle aHandle, uint32_t* aPhase)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncGetDACPhase(*aPhase);
    }
    catch (ProxyError& ) {
        err = -1;
        *aPhase = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDACConfig1BeginGetDACPhase(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDACPhase(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1EndGetDACPhase(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aPhase)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndGetDACPhase(*async, *aPhase);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1SyncSetDACPhase(THandle aHandle, uint32_t aPhase)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetDACPhase(aPhase);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDACConfig1BeginSetDACPhase(THandle aHandle, uint32_t aPhase, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetDACPhase(aPhase, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1EndSetDACPhase(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetDACPhase(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1SyncGetDACBalance(THandle aHandle, uint32_t* aBalance)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncGetDACBalance(*aBalance);
    }
    catch (ProxyError& ) {
        err = -1;
        *aBalance = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDACConfig1BeginGetDACBalance(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDACBalance(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1EndGetDACBalance(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aBalance)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndGetDACBalance(*async, *aBalance);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1SyncSetDACBalance(THandle aHandle, uint32_t aBalance)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetDACBalance(aBalance);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDACConfig1BeginSetDACBalance(THandle aHandle, uint32_t aBalance, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetDACBalance(aBalance, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1EndSetDACBalance(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetDACBalance(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1SyncGetWaitingTime(THandle aHandle, char** aWaitingTime)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aWaitingTime;
    int32_t err = 0;
    try {
        proxyC->SyncGetWaitingTime(buf_aWaitingTime);
        *aWaitingTime = buf_aWaitingTime.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aWaitingTime = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDACConfig1BeginGetWaitingTime(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetWaitingTime(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1EndGetWaitingTime(THandle aHandle, OhNetHandleAsync aAsync, char** aWaitingTime)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aWaitingTime;
    *aWaitingTime = NULL;
    try {
        proxyC->EndGetWaitingTime(*async, buf_aWaitingTime);
        *aWaitingTime = buf_aWaitingTime.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1SyncSetWaitingTime(THandle aHandle, const char* aWaitingTime)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aWaitingTime(aWaitingTime);
    int32_t err = 0;
    try {
        proxyC->SyncSetWaitingTime(buf_aWaitingTime);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDACConfig1BeginSetWaitingTime(THandle aHandle, const char* aWaitingTime, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aWaitingTime(aWaitingTime);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetWaitingTime(buf_aWaitingTime, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1EndSetWaitingTime(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetWaitingTime(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDACConfig1SetPropertyCurrentActionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCurrentActionChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDACConfig1PropertyCurrentAction(THandle aHandle, uint32_t* aCurrentAction)
{
    CpProxyAvOpenhomeOrgDACConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDACConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyCurrentAction(*aCurrentAction);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

