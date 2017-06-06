#include "CpAvOpenhomeOrgResamplerConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1 : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1& iService;
};

SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1::SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}


class SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1 : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy, Brh& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1& iService;
    Brh& iResamplerConfig;
};

SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1::SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy, Brh& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}


class SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1 : public SyncProxyAction
{
public:
    SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1& iService;
};

SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1::SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPCMAutoDetect(aAsync);
}


class SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1 : public SyncProxyAction
{
public:
    SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy, TBool& aPCMAutoDetect);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1& iService;
    TBool& iPCMAutoDetect;
};

SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1::SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy, TBool& aPCMAutoDetect)
    : iService(aProxy)
    , iPCMAutoDetect(aPCMAutoDetect)
{
}

void SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPCMAutoDetect(aAsync, iPCMAutoDetect);
}


class SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1 : public SyncProxyAction
{
public:
    SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1& iService;
};

SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1::SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDSDtoPCM(aAsync);
}


class SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1 : public SyncProxyAction
{
public:
    SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy, TBool& aDSDtoPCM);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1& iService;
    TBool& iDSDtoPCM;
};

SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1::SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1& aProxy, TBool& aDSDtoPCM)
    : iService(aProxy)
    , iDSDtoPCM(aDSDtoPCM)
{
}

void SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDSDtoPCM(aAsync, iDSDtoPCM);
}


CpProxyAvOpenhomeOrgResamplerConfig1::CpProxyAvOpenhomeOrgResamplerConfig1(CpDevice& aDevice)
    : CpProxy("av-openhome-org", "ResamplerConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionSetResamplerConfig = new Action("SetResamplerConfig");
    param = new OpenHome::Net::ParameterString("ResamplerConfig");
    iActionSetResamplerConfig->AddInputParameter(param);

    iActionGetResamplerConfig = new Action("GetResamplerConfig");
    param = new OpenHome::Net::ParameterString("ResamplerConfig");
    iActionGetResamplerConfig->AddOutputParameter(param);

    iActionSetPCMAutoDetect = new Action("SetPCMAutoDetect");
    param = new OpenHome::Net::ParameterBool("PCMAutoDetect");
    iActionSetPCMAutoDetect->AddInputParameter(param);

    iActionGetPCMAutoDetect = new Action("GetPCMAutoDetect");
    param = new OpenHome::Net::ParameterBool("PCMAutoDetect");
    iActionGetPCMAutoDetect->AddOutputParameter(param);

    iActionSetDSDtoPCM = new Action("SetDSDtoPCM");
    param = new OpenHome::Net::ParameterBool("DSDtoPCM");
    iActionSetDSDtoPCM->AddInputParameter(param);

    iActionGetDSDtoPCM = new Action("GetDSDtoPCM");
    param = new OpenHome::Net::ParameterBool("DSDtoPCM");
    iActionGetDSDtoPCM->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgResamplerConfig1::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgResamplerConfig1::~CpProxyAvOpenhomeOrgResamplerConfig1()
{
    DestroyService();
    delete iActionSetResamplerConfig;
    delete iActionGetResamplerConfig;
    delete iActionSetPCMAutoDetect;
    delete iActionGetPCMAutoDetect;
    delete iActionSetDSDtoPCM;
    delete iActionGetDSDtoPCM;
}

void CpProxyAvOpenhomeOrgResamplerConfig1::SyncSetResamplerConfig(const Brx& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1 sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1::BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetResamplerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetResamplerConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aResamplerConfig));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1::EndSetResamplerConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgResamplerConfig1::SyncGetResamplerConfig(Brh& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1 sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1::EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig)
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

void CpProxyAvOpenhomeOrgResamplerConfig1::SyncSetPCMAutoDetect(TBool aPCMAutoDetect)
{
    SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1 sync(*this);
    BeginSetPCMAutoDetect(aPCMAutoDetect, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1::BeginSetPCMAutoDetect(TBool aPCMAutoDetect, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetPCMAutoDetect, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPCMAutoDetect->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPCMAutoDetect));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1::EndSetPCMAutoDetect(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetPCMAutoDetect"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgResamplerConfig1::SyncGetPCMAutoDetect(TBool& aPCMAutoDetect)
{
    SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1 sync(*this, aPCMAutoDetect);
    BeginGetPCMAutoDetect(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1::BeginGetPCMAutoDetect(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetPCMAutoDetect, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPCMAutoDetect->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1::EndGetPCMAutoDetect(IAsync& aAsync, TBool& aPCMAutoDetect)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPCMAutoDetect"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aPCMAutoDetect = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgResamplerConfig1::SyncSetDSDtoPCM(TBool aDSDtoPCM)
{
    SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1 sync(*this);
    BeginSetDSDtoPCM(aDSDtoPCM, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1::BeginSetDSDtoPCM(TBool aDSDtoPCM, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetDSDtoPCM, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDSDtoPCM->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aDSDtoPCM));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1::EndSetDSDtoPCM(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDSDtoPCM"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgResamplerConfig1::SyncGetDSDtoPCM(TBool& aDSDtoPCM)
{
    SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1 sync(*this, aDSDtoPCM);
    BeginGetDSDtoPCM(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1::BeginGetDSDtoPCM(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetDSDtoPCM, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDSDtoPCM->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1::EndGetDSDtoPCM(IAsync& aAsync, TBool& aDSDtoPCM)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDSDtoPCM"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aDSDtoPCM = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgResamplerConfig1::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock->Wait();
    iCurrentActionChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgResamplerConfig1::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgResamplerConfig1::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

