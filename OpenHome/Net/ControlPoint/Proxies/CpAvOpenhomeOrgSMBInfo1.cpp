#include "CpAvOpenhomeOrgSMBInfo1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncSetSMBConfigAvOpenhomeOrgSMBInfo1 : public SyncProxyAction
{
public:
    SyncSetSMBConfigAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSMBConfigAvOpenhomeOrgSMBInfo1() {}
private:
    CpProxyAvOpenhomeOrgSMBInfo1& iService;
};

SyncSetSMBConfigAvOpenhomeOrgSMBInfo1::SyncSetSMBConfigAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1& aProxy)
    : iService(aProxy)
{
}

void SyncSetSMBConfigAvOpenhomeOrgSMBInfo1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSMBConfig(aAsync);
}


class SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1 : public SyncProxyAction
{
public:
    SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1& aProxy, TBool& aSMBConnectResult);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1() {}
private:
    CpProxyAvOpenhomeOrgSMBInfo1& iService;
    TBool& iSMBConnectResult;
};

SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1::SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1& aProxy, TBool& aSMBConnectResult)
    : iService(aProxy)
    , iSMBConnectResult(aSMBConnectResult)
{
}

void SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSMBConnectResult(aAsync, iSMBConnectResult);
}


class SyncGetSMBInfoAvOpenhomeOrgSMBInfo1 : public SyncProxyAction
{
public:
    SyncGetSMBInfoAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1& aProxy, TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSMBInfoAvOpenhomeOrgSMBInfo1() {}
private:
    CpProxyAvOpenhomeOrgSMBInfo1& iService;
    TBool& iSMBConnectStatus;
    Brh& iSMBERRORInfo;
    Brh& iSMBCapacity;
    Brh& iSMBFileCount;
};

SyncGetSMBInfoAvOpenhomeOrgSMBInfo1::SyncGetSMBInfoAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1& aProxy, TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount)
    : iService(aProxy)
    , iSMBConnectStatus(aSMBConnectStatus)
    , iSMBERRORInfo(aSMBERRORInfo)
    , iSMBCapacity(aSMBCapacity)
    , iSMBFileCount(aSMBFileCount)
{
}

void SyncGetSMBInfoAvOpenhomeOrgSMBInfo1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSMBInfo(aAsync, iSMBConnectStatus, iSMBERRORInfo, iSMBCapacity, iSMBFileCount);
}


CpProxyAvOpenhomeOrgSMBInfo1::CpProxyAvOpenhomeOrgSMBInfo1(CpDevice& aDevice)
    : CpProxy("av-openhome-org", "SMBInfo", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionSetSMBConfig = new Action("SetSMBConfig");
    param = new OpenHome::Net::ParameterString("SMBAddr");
    iActionSetSMBConfig->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("SMBUserName");
    iActionSetSMBConfig->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("SMBPassWord");
    iActionSetSMBConfig->AddInputParameter(param);

    iActionGetSMBConnectResult = new Action("GetSMBConnectResult");
    param = new OpenHome::Net::ParameterBool("SMBConnectResult");
    iActionGetSMBConnectResult->AddOutputParameter(param);

    iActionGetSMBInfo = new Action("GetSMBInfo");
    param = new OpenHome::Net::ParameterBool("SMBConnectStatus");
    iActionGetSMBInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("SMBERRORInfo");
    iActionGetSMBInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("SMBCapacity");
    iActionGetSMBInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("SMBFileCount");
    iActionGetSMBInfo->AddOutputParameter(param);
}

CpProxyAvOpenhomeOrgSMBInfo1::~CpProxyAvOpenhomeOrgSMBInfo1()
{
    DestroyService();
    delete iActionSetSMBConfig;
    delete iActionGetSMBConnectResult;
    delete iActionGetSMBInfo;
}

void CpProxyAvOpenhomeOrgSMBInfo1::SyncSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord)
{
    SyncSetSMBConfigAvOpenhomeOrgSMBInfo1 sync(*this);
    BeginSetSMBConfig(aSMBAddr, aSMBUserName, aSMBPassWord, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSMBInfo1::BeginSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetSMBConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSMBConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBAddr));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBUserName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBPassWord));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSMBInfo1::EndSetSMBConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetSMBConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgSMBInfo1::SyncGetSMBConnectResult(TBool& aSMBConnectResult)
{
    SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1 sync(*this, aSMBConnectResult);
    BeginGetSMBConnectResult(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSMBInfo1::BeginGetSMBConnectResult(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetSMBConnectResult, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSMBConnectResult->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSMBInfo1::EndGetSMBConnectResult(IAsync& aAsync, TBool& aSMBConnectResult)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSMBConnectResult"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aSMBConnectResult = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgSMBInfo1::SyncGetSMBInfo(TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount)
{
    SyncGetSMBInfoAvOpenhomeOrgSMBInfo1 sync(*this, aSMBConnectStatus, aSMBERRORInfo, aSMBCapacity, aSMBFileCount);
    BeginGetSMBInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSMBInfo1::BeginGetSMBInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetSMBInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSMBInfo->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSMBInfo1::EndGetSMBInfo(IAsync& aAsync, TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSMBInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aSMBConnectStatus = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSMBERRORInfo);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSMBCapacity);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSMBFileCount);
}

