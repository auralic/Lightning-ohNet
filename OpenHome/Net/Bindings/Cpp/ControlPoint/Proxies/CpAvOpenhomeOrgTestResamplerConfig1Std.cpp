#include "CpAvOpenhomeOrgTestResamplerConfig1.h"
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


class SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& iService;
};

SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp::SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetResamplerConfig(aAsync);
}


class SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy, std::string& aResamplerConfig);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& iService;
    std::string& iResamplerConfig;
};

SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp::SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy, std::string& aResamplerConfig)
    : iService(aProxy)
    , iResamplerConfig(aResamplerConfig)
{
}

void SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetResamplerConfig(aAsync, iResamplerConfig);
}


class SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& iService;
};

SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp::SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPCMAutoDetect(aAsync);
}


class SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy, bool& aPCMAutoDetect);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& iService;
    bool& iPCMAutoDetect;
};

SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp::SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy, bool& aPCMAutoDetect)
    : iService(aProxy)
    , iPCMAutoDetect(aPCMAutoDetect)
{
}

void SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPCMAutoDetect(aAsync, iPCMAutoDetect);
}


class SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& iService;
};

SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp::SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDSDtoPCM(aAsync);
}


class SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy, bool& aDSDtoPCM);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& iService;
    bool& iDSDtoPCM;
};

SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp::SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp(CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp& aProxy, bool& aDSDtoPCM)
    : iService(aProxy)
    , iDSDtoPCM(aDSDtoPCM)
{
}

void SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDSDtoPCM(aAsync, iDSDtoPCM);
}


CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("av-openhome-org", "TestResamplerConfig", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
}

CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::~CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp()
{
    DestroyService();
    delete iActionSetResamplerConfig;
    delete iActionGetResamplerConfig;
    delete iActionSetPCMAutoDetect;
    delete iActionGetPCMAutoDetect;
    delete iActionSetDSDtoPCM;
    delete iActionGetDSDtoPCM;
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::SyncSetResamplerConfig(const std::string& aResamplerConfig)
{
    SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp sync(*this);
    BeginSetResamplerConfig(aResamplerConfig, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::BeginSetResamplerConfig(const std::string& aResamplerConfig, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::EndSetResamplerConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::SyncGetResamplerConfig(std::string& aResamplerConfig)
{
    SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1Cpp sync(*this, aResamplerConfig);
    BeginGetResamplerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::BeginGetResamplerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetResamplerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetResamplerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::EndGetResamplerConfig(IAsync& aAsync, std::string& aResamplerConfig)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::SyncSetPCMAutoDetect(bool aPCMAutoDetect)
{
    SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp sync(*this);
    BeginSetPCMAutoDetect(aPCMAutoDetect, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::BeginSetPCMAutoDetect(bool aPCMAutoDetect, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetPCMAutoDetect, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPCMAutoDetect->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPCMAutoDetect));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::EndSetPCMAutoDetect(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::SyncGetPCMAutoDetect(bool& aPCMAutoDetect)
{
    SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1Cpp sync(*this, aPCMAutoDetect);
    BeginGetPCMAutoDetect(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::BeginGetPCMAutoDetect(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetPCMAutoDetect, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPCMAutoDetect->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::EndGetPCMAutoDetect(IAsync& aAsync, bool& aPCMAutoDetect)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::SyncSetDSDtoPCM(bool aDSDtoPCM)
{
    SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp sync(*this);
    BeginSetDSDtoPCM(aDSDtoPCM, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::BeginSetDSDtoPCM(bool aDSDtoPCM, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetDSDtoPCM, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDSDtoPCM->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aDSDtoPCM));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::EndSetDSDtoPCM(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::SyncGetDSDtoPCM(bool& aDSDtoPCM)
{
    SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1Cpp sync(*this, aDSDtoPCM);
    BeginGetDSDtoPCM(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::BeginGetDSDtoPCM(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetDSDtoPCM, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDSDtoPCM->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::EndGetDSDtoPCM(IAsync& aAsync, bool& aDSDtoPCM)
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

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock->Wait();
    iCurrentActionChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::PropertyCurrentAction(uint32_t& aCurrentAction) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

