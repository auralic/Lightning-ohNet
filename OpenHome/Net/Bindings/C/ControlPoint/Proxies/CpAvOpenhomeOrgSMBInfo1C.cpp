#include "CpAvOpenhomeOrgSMBInfo1.h"
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

class CpProxyAvOpenhomeOrgSMBInfo1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgSMBInfo1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgSMBInfo1C();
    //CpProxyAvOpenhomeOrgSMBInfo1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgSMBInfo1*>(iProxy); }

    void SyncSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord);
    void BeginSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord, FunctorAsync& aFunctor);
    void EndSetSMBConfig(IAsync& aAsync);

    void SyncGetSMBConnectResult(TBool& aSMBConnectResult);
    void BeginGetSMBConnectResult(FunctorAsync& aFunctor);
    void EndGetSMBConnectResult(IAsync& aAsync, TBool& aSMBConnectResult);

    void SyncGetSMBInfo(TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount);
    void BeginGetSMBInfo(FunctorAsync& aFunctor);
    void EndGetSMBInfo(IAsync& aAsync, TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount);


private:
private:
    Mutex iLock;
    Action* iActionSetSMBConfig;
    Action* iActionGetSMBConnectResult;
    Action* iActionGetSMBInfo;
};


class SyncSetSMBConfigAvOpenhomeOrgSMBInfo1C : public SyncProxyAction
{
public:
    SyncSetSMBConfigAvOpenhomeOrgSMBInfo1C(CpProxyAvOpenhomeOrgSMBInfo1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSMBConfigAvOpenhomeOrgSMBInfo1C() {};
private:
    CpProxyAvOpenhomeOrgSMBInfo1C& iService;
};

SyncSetSMBConfigAvOpenhomeOrgSMBInfo1C::SyncSetSMBConfigAvOpenhomeOrgSMBInfo1C(CpProxyAvOpenhomeOrgSMBInfo1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSMBConfigAvOpenhomeOrgSMBInfo1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSMBConfig(aAsync);
}


class SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1C : public SyncProxyAction
{
public:
    SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1C(CpProxyAvOpenhomeOrgSMBInfo1C& aProxy, TBool& aSMBConnectResult);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1C() {};
private:
    CpProxyAvOpenhomeOrgSMBInfo1C& iService;
    TBool& iSMBConnectResult;
};

SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1C::SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1C(CpProxyAvOpenhomeOrgSMBInfo1C& aProxy, TBool& aSMBConnectResult)
    : iService(aProxy)
    , iSMBConnectResult(aSMBConnectResult)
{
}

void SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSMBConnectResult(aAsync, iSMBConnectResult);
}


class SyncGetSMBInfoAvOpenhomeOrgSMBInfo1C : public SyncProxyAction
{
public:
    SyncGetSMBInfoAvOpenhomeOrgSMBInfo1C(CpProxyAvOpenhomeOrgSMBInfo1C& aProxy, TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSMBInfoAvOpenhomeOrgSMBInfo1C() {};
private:
    CpProxyAvOpenhomeOrgSMBInfo1C& iService;
    TBool& iSMBConnectStatus;
    Brh& iSMBERRORInfo;
    Brh& iSMBCapacity;
    Brh& iSMBFileCount;
};

SyncGetSMBInfoAvOpenhomeOrgSMBInfo1C::SyncGetSMBInfoAvOpenhomeOrgSMBInfo1C(CpProxyAvOpenhomeOrgSMBInfo1C& aProxy, TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount)
    : iService(aProxy)
    , iSMBConnectStatus(aSMBConnectStatus)
    , iSMBERRORInfo(aSMBERRORInfo)
    , iSMBCapacity(aSMBCapacity)
    , iSMBFileCount(aSMBFileCount)
{
}

void SyncGetSMBInfoAvOpenhomeOrgSMBInfo1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSMBInfo(aAsync, iSMBConnectStatus, iSMBERRORInfo, iSMBCapacity, iSMBFileCount);
}

CpProxyAvOpenhomeOrgSMBInfo1C::CpProxyAvOpenhomeOrgSMBInfo1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "SMBInfo", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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

CpProxyAvOpenhomeOrgSMBInfo1C::~CpProxyAvOpenhomeOrgSMBInfo1C()
{
    DestroyService();
    delete iActionSetSMBConfig;
    delete iActionGetSMBConnectResult;
    delete iActionGetSMBInfo;
}

void CpProxyAvOpenhomeOrgSMBInfo1C::SyncSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord)
{
    SyncSetSMBConfigAvOpenhomeOrgSMBInfo1C sync(*this);
    BeginSetSMBConfig(aSMBAddr, aSMBUserName, aSMBPassWord, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSMBInfo1C::BeginSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSMBConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSMBConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBAddr));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBUserName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBPassWord));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSMBInfo1C::EndSetSMBConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgSMBInfo1C::SyncGetSMBConnectResult(TBool& aSMBConnectResult)
{
    SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1C sync(*this, aSMBConnectResult);
    BeginGetSMBConnectResult(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSMBInfo1C::BeginGetSMBConnectResult(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSMBConnectResult, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSMBConnectResult->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSMBInfo1C::EndGetSMBConnectResult(IAsync& aAsync, TBool& aSMBConnectResult)
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

void CpProxyAvOpenhomeOrgSMBInfo1C::SyncGetSMBInfo(TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount)
{
    SyncGetSMBInfoAvOpenhomeOrgSMBInfo1C sync(*this, aSMBConnectStatus, aSMBERRORInfo, aSMBCapacity, aSMBFileCount);
    BeginGetSMBInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgSMBInfo1C::BeginGetSMBInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSMBInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSMBInfo->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgSMBInfo1C::EndGetSMBInfo(IAsync& aAsync, TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount)
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


THandle STDCALL CpProxyAvOpenhomeOrgSMBInfo1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgSMBInfo1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgSMBInfo1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgSMBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSMBInfo1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSMBInfo1SyncSetSMBConfig(THandle aHandle, const char* aSMBAddr, const char* aSMBUserName, const char* aSMBPassWord)
{
    CpProxyAvOpenhomeOrgSMBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSMBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSMBAddr(aSMBAddr);
    Brh buf_aSMBUserName(aSMBUserName);
    Brh buf_aSMBPassWord(aSMBPassWord);
    int32_t err = 0;
    try {
        proxyC->SyncSetSMBConfig(buf_aSMBAddr, buf_aSMBUserName, buf_aSMBPassWord);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgSMBInfo1BeginSetSMBConfig(THandle aHandle, const char* aSMBAddr, const char* aSMBUserName, const char* aSMBPassWord, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSMBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSMBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSMBAddr(aSMBAddr);
    Brh buf_aSMBUserName(aSMBUserName);
    Brh buf_aSMBPassWord(aSMBPassWord);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSMBConfig(buf_aSMBAddr, buf_aSMBUserName, buf_aSMBPassWord, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSMBInfo1EndSetSMBConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSMBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSMBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetSMBConfig(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSMBInfo1SyncGetSMBConnectResult(THandle aHandle, uint32_t* aSMBConnectResult)
{
    CpProxyAvOpenhomeOrgSMBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSMBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool SMBConnectResult;
    int32_t err = 0;
    try {
        proxyC->SyncGetSMBConnectResult(SMBConnectResult);
        *aSMBConnectResult = SMBConnectResult? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aSMBConnectResult = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgSMBInfo1BeginGetSMBConnectResult(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSMBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSMBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSMBConnectResult(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSMBInfo1EndGetSMBConnectResult(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aSMBConnectResult)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSMBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSMBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool SMBConnectResult;
    try {
        proxyC->EndGetSMBConnectResult(*async, SMBConnectResult);
        *aSMBConnectResult = SMBConnectResult? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgSMBInfo1SyncGetSMBInfo(THandle aHandle, uint32_t* aSMBConnectStatus, char** aSMBERRORInfo, char** aSMBCapacity, char** aSMBFileCount)
{
    CpProxyAvOpenhomeOrgSMBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSMBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool SMBConnectStatus;
    Brh buf_aSMBERRORInfo;
    Brh buf_aSMBCapacity;
    Brh buf_aSMBFileCount;
    int32_t err = 0;
    try {
        proxyC->SyncGetSMBInfo(SMBConnectStatus, buf_aSMBERRORInfo, buf_aSMBCapacity, buf_aSMBFileCount);
        *aSMBConnectStatus = SMBConnectStatus? 1 : 0;
        *aSMBERRORInfo = buf_aSMBERRORInfo.Extract();
        *aSMBCapacity = buf_aSMBCapacity.Extract();
        *aSMBFileCount = buf_aSMBFileCount.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aSMBConnectStatus = false;
        *aSMBERRORInfo = NULL;
        *aSMBCapacity = NULL;
        *aSMBFileCount = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgSMBInfo1BeginGetSMBInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgSMBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSMBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSMBInfo(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgSMBInfo1EndGetSMBInfo(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aSMBConnectStatus, char** aSMBERRORInfo, char** aSMBCapacity, char** aSMBFileCount)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgSMBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgSMBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool SMBConnectStatus;
    Brh buf_aSMBERRORInfo;
    *aSMBERRORInfo = NULL;
    Brh buf_aSMBCapacity;
    *aSMBCapacity = NULL;
    Brh buf_aSMBFileCount;
    *aSMBFileCount = NULL;
    try {
        proxyC->EndGetSMBInfo(*async, SMBConnectStatus, buf_aSMBERRORInfo, buf_aSMBCapacity, buf_aSMBFileCount);
        *aSMBConnectStatus = SMBConnectStatus? 1 : 0;
        *aSMBERRORInfo = buf_aSMBERRORInfo.Extract();
        *aSMBCapacity = buf_aSMBCapacity.Extract();
        *aSMBFileCount = buf_aSMBFileCount.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

