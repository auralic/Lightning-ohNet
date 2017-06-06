#include "CpAvOpenhomeOrgResamplerConfig1.h"
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


class SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1Cpp& iService;
};

SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp::SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}


class SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy, std::string& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1Cpp& iService;
    std::string& iResamplerConfig;
};

SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp::SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy, std::string& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}


class SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1Cpp& iService;
};

SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp::SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPCMAutoDetect(aAsync);
}


class SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy, bool& aPCMAutoDetect);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1Cpp& iService;
    bool& iPCMAutoDetect;
};

SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp::SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy, bool& aPCMAutoDetect)
    : iService(aProxy)
    , iPCMAutoDetect(aPCMAutoDetect)
{
}

void SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPCMAutoDetect(aAsync, iPCMAutoDetect);
}


class SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1Cpp& iService;
};

SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp::SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDSDtoPCM(aAsync);
}


class SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy, bool& aDSDtoPCM);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgResamplerConfig1Cpp& iService;
    bool& iDSDtoPCM;
};

SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp::SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp(CpProxyAvOpenhomeOrgResamplerConfig1Cpp& aProxy, bool& aDSDtoPCM)
    : iService(aProxy)
    , iDSDtoPCM(aDSDtoPCM)
{
}

void SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDSDtoPCM(aAsync, iDSDtoPCM);
}


CpProxyAvOpenhomeOrgResamplerConfig1Cpp::CpProxyAvOpenhomeOrgResamplerConfig1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgResamplerConfig1Cpp::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgResamplerConfig1Cpp::~CpProxyAvOpenhomeOrgResamplerConfig1Cpp()
{
    DestroyService();
    delete iActionSetResamplerConfig;
    delete iActionGetResamplerConfig;
    delete iActionSetPCMAutoDetect;
    delete iActionGetPCMAutoDetect;
    delete iActionSetDSDtoPCM;
    delete iActionGetDSDtoPCM;
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::SyncSetResamplerConfig(const std::string& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::BeginSetResamplerConfig(const std::string& aResamplerConfig, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetResamplerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetResamplerConfig->InputParameters();
    {
        Brn buf((const TByte*)aResamplerConfig.c_str(), (TUint)aResamplerConfig.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::EndSetResamplerConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::SyncGetResamplerConfig(std::string& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1Cpp sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::EndGetResamplerConfig(IAsync& aAsync, std::string& aResamplerConfig)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aResamplerConfig.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::SyncSetPCMAutoDetect(bool aPCMAutoDetect)
{
    SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp sync(*this);
    BeginSetPCMAutoDetect(aPCMAutoDetect, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::BeginSetPCMAutoDetect(bool aPCMAutoDetect, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetPCMAutoDetect, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPCMAutoDetect->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPCMAutoDetect));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::EndSetPCMAutoDetect(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::SyncGetPCMAutoDetect(bool& aPCMAutoDetect)
{
    SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1Cpp sync(*this, aPCMAutoDetect);
    BeginGetPCMAutoDetect(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::BeginGetPCMAutoDetect(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetPCMAutoDetect, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPCMAutoDetect->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::EndGetPCMAutoDetect(IAsync& aAsync, bool& aPCMAutoDetect)
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

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::SyncSetDSDtoPCM(bool aDSDtoPCM)
{
    SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp sync(*this);
    BeginSetDSDtoPCM(aDSDtoPCM, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::BeginSetDSDtoPCM(bool aDSDtoPCM, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetDSDtoPCM, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDSDtoPCM->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aDSDtoPCM));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::EndSetDSDtoPCM(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::SyncGetDSDtoPCM(bool& aDSDtoPCM)
{
    SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1Cpp sync(*this, aDSDtoPCM);
    BeginGetDSDtoPCM(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::BeginGetDSDtoPCM(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetDSDtoPCM, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDSDtoPCM->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::EndGetDSDtoPCM(IAsync& aAsync, bool& aDSDtoPCM)
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

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock->Wait();
    iCurrentActionChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::PropertyCurrentAction(uint32_t& aCurrentAction) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgResamplerConfig1Cpp::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

