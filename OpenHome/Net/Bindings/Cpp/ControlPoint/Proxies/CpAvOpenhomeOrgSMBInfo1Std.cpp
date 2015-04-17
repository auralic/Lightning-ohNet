#include "CpAvOpenhomeOrgSMBInfo1.h"
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


class SyncSetSMBConfigAvOpenhomeOrgSMBInfo1Cpp : public SyncProxyAction
{
public:
    SyncSetSMBConfigAvOpenhomeOrgSMBInfo1Cpp(CpProxyAvOpenhomeOrgSMBInfo1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSMBConfigAvOpenhomeOrgSMBInfo1Cpp() {}
private:
    CpProxyAvOpenhomeOrgSMBInfo1Cpp& iService;
};

SyncSetSMBConfigAvOpenhomeOrgSMBInfo1Cpp::SyncSetSMBConfigAvOpenhomeOrgSMBInfo1Cpp(CpProxyAvOpenhomeOrgSMBInfo1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetSMBConfigAvOpenhomeOrgSMBInfo1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSMBConfig(aAsync);
}


class SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1Cpp : public SyncProxyAction
{
public:
    SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1Cpp(CpProxyAvOpenhomeOrgSMBInfo1Cpp& aProxy, bool& aSMBConnectResult);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1Cpp() {}
private:
    CpProxyAvOpenhomeOrgSMBInfo1Cpp& iService;
    bool& iSMBConnectResult;
};

SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1Cpp::SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1Cpp(CpProxyAvOpenhomeOrgSMBInfo1Cpp& aProxy, bool& aSMBConnectResult)
    : iService(aProxy)
    , iSMBConnectResult(aSMBConnectResult)
{
}

void SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSMBConnectResult(aAsync, iSMBConnectResult);
}


class SyncGetSMBInfoAvOpenhomeOrgSMBInfo1Cpp : public SyncProxyAction
{
public:
    SyncGetSMBInfoAvOpenhomeOrgSMBInfo1Cpp(CpProxyAvOpenhomeOrgSMBInfo1Cpp& aProxy, bool& aSMBConnectStatus, std::string& aSMBERRORInfo, std::string& aSMBCapacity, std::string& aSMBFileCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSMBInfoAvOpenhomeOrgSMBInfo1Cpp() {}
private:
    CpProxyAvOpenhomeOrgSMBInfo1Cpp& iService;
    bool& iSMBConnectStatus;
    std::string& iSMBERRORInfo;
    std::string& iSMBCapacity;
    std::string& iSMBFileCount;
};

SyncGetSMBInfoAvOpenhomeOrgSMBInfo1Cpp::SyncGetSMBInfoAvOpenhomeOrgSMBInfo1Cpp(CpProxyAvOpenhomeOrgSMBInfo1Cpp& aProxy, bool& aSMBConnectStatus, std::string& aSMBERRORInfo, std::string& aSMBCapacity, std::string& aSMBFileCount)
    : iService(aProxy)
    , iSMBConnectStatus(aSMBConnectStatus)
    , iSMBERRORInfo(aSMBERRORInfo)
    , iSMBCapacity(aSMBCapacity)
    , iSMBFileCount(aSMBFileCount)
{
}

void SyncGetSMBInfoAvOpenhomeOrgSMBInfo1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSMBInfo(aAsync, iSMBConnectStatus, iSMBERRORInfo, iSMBCapacity, iSMBFileCount);
}


CpProxyAvOpenhomeOrgSMBInfo1Cpp::CpProxyAvOpenhomeOrgSMBInfo1Cpp(CpDeviceCpp& aDevice)
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

CpProxyAvOpenhomeOrgSMBInfo1Cpp::~CpProxyAvOpenhomeOrgSMBInfo1Cpp()
{
    DestroyService();
    delete iActionSetSMBConfig;
    delete iActionGetSMBConnectResult;
    delete iActionGetSMBInfo;
}

void CpProxyAvOpenhomeOrgSMBInfo1Cpp::SyncSetSMBConfig(const std::string& aSMBAddr, const std::string& aSMBUserName, const std::string& aSMBPassWord)
{
    SyncSetSMBConfigAvOpenhomeOrgSMBInfo1Cpp sync(*this);
    BeginSetSMBConfig(aSMBAddr, aSMBUserName, aSMBPassWord, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSMBInfo1Cpp::BeginSetSMBConfig(const std::string& aSMBAddr, const std::string& aSMBUserName, const std::string& aSMBPassWord, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetSMBConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSMBConfig->InputParameters();
    {
        Brn buf((const TByte*)aSMBAddr.c_str(), (TUint)aSMBAddr.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aSMBUserName.c_str(), (TUint)aSMBUserName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aSMBPassWord.c_str(), (TUint)aSMBPassWord.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSMBInfo1Cpp::EndSetSMBConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgSMBInfo1Cpp::SyncGetSMBConnectResult(bool& aSMBConnectResult)
{
    SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1Cpp sync(*this, aSMBConnectResult);
    BeginGetSMBConnectResult(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSMBInfo1Cpp::BeginGetSMBConnectResult(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetSMBConnectResult, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSMBConnectResult->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSMBInfo1Cpp::EndGetSMBConnectResult(IAsync& aAsync, bool& aSMBConnectResult)
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

void CpProxyAvOpenhomeOrgSMBInfo1Cpp::SyncGetSMBInfo(bool& aSMBConnectStatus, std::string& aSMBERRORInfo, std::string& aSMBCapacity, std::string& aSMBFileCount)
{
    SyncGetSMBInfoAvOpenhomeOrgSMBInfo1Cpp sync(*this, aSMBConnectStatus, aSMBERRORInfo, aSMBCapacity, aSMBFileCount);
    BeginGetSMBInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSMBInfo1Cpp::BeginGetSMBInfo(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgSMBInfo1Cpp::EndGetSMBInfo(IAsync& aAsync, bool& aSMBConnectStatus, std::string& aSMBERRORInfo, std::string& aSMBCapacity, std::string& aSMBFileCount)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSMBERRORInfo.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSMBCapacity.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSMBFileCount.assign((const char*)val.Ptr(), val.Bytes());
    }
}

