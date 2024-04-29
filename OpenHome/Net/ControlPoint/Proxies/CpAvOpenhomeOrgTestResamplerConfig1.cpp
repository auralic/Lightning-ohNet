#include "CpAvOpenhomeOrgTestResamplerConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1 : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1& iService;
};

class SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1 : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy, Brh& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1& iService;
    Brh& iResamplerConfig;
};

class SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1 : public SyncProxyAction
{
public:
    SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1& iService;
};

class SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1 : public SyncProxyAction
{
public:
    SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy, TBool& aPCMAutoDetect);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1& iService;
    TBool& iPCMAutoDetect;
};

class SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1 : public SyncProxyAction
{
public:
    SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1& iService;
};

class SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1 : public SyncProxyAction
{
public:
    SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy, TBool& aDSDtoPCM);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1& iService;
    TBool& iDSDtoPCM;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1

SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1::SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}

// SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1

SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1::SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy, Brh& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}

// SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1

SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1::SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPCMAutoDetect(aAsync);
}

// SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1

SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1::SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy, TBool& aPCMAutoDetect)
    : iService(aProxy)
    , iPCMAutoDetect(aPCMAutoDetect)
{
}

void SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPCMAutoDetect(aAsync, iPCMAutoDetect);
}

// SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1

SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1::SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDSDtoPCM(aAsync);
}

// SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1

SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1::SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1& aProxy, TBool& aDSDtoPCM)
    : iService(aProxy)
    , iDSDtoPCM(aDSDtoPCM)
{
}

void SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDSDtoPCM(aAsync, iDSDtoPCM);
}


// CpProxyAvOpenhomeOrgTestResamplerConfig1

CpProxyAvOpenhomeOrgTestResamplerConfig1::CpProxyAvOpenhomeOrgTestResamplerConfig1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "TestResamplerConfig", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTestResamplerConfig1::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgTestResamplerConfig1::~CpProxyAvOpenhomeOrgTestResamplerConfig1()
{
    DestroyService();
    delete iActionSetResamplerConfig;
    delete iActionGetResamplerConfig;
    delete iActionSetPCMAutoDetect;
    delete iActionGetPCMAutoDetect;
    delete iActionSetDSDtoPCM;
    delete iActionGetDSDtoPCM;
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::SyncSetResamplerConfig(const Brx& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1 sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetResamplerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetResamplerConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aResamplerConfig));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::EndSetResamplerConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1::SyncGetResamplerConfig(Brh& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1 sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1::SyncSetPCMAutoDetect(TBool aPCMAutoDetect)
{
    SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1 sync(*this);
    BeginSetPCMAutoDetect(aPCMAutoDetect, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::BeginSetPCMAutoDetect(TBool aPCMAutoDetect, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetPCMAutoDetect, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPCMAutoDetect->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPCMAutoDetect));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::EndSetPCMAutoDetect(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1::SyncGetPCMAutoDetect(TBool& aPCMAutoDetect)
{
    SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1 sync(*this, aPCMAutoDetect);
    BeginGetPCMAutoDetect(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::BeginGetPCMAutoDetect(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPCMAutoDetect, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPCMAutoDetect->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::EndGetPCMAutoDetect(IAsync& aAsync, TBool& aPCMAutoDetect)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1::SyncSetDSDtoPCM(TBool aDSDtoPCM)
{
    SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1 sync(*this);
    BeginSetDSDtoPCM(aDSDtoPCM, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::BeginSetDSDtoPCM(TBool aDSDtoPCM, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDSDtoPCM, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDSDtoPCM->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aDSDtoPCM));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::EndSetDSDtoPCM(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1::SyncGetDSDtoPCM(TBool& aDSDtoPCM)
{
    SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1 sync(*this, aDSDtoPCM);
    BeginGetDSDtoPCM(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::BeginGetDSDtoPCM(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDSDtoPCM, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDSDtoPCM->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::EndGetDSDtoPCM(IAsync& aAsync, TBool& aDSDtoPCM)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCurrentActionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}


void CpProxyAvOpenhomeOrgTestResamplerConfig1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgTestResamplerConfig1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgTestResamplerConfig1::Version() const
{
  return iCpProxy.Version();
}


