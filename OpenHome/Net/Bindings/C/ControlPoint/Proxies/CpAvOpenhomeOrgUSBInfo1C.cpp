#include "CpAvOpenhomeOrgUSBInfo1.h"
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

class CpProxyAvOpenhomeOrgUSBInfo1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgUSBInfo1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgUSBInfo1C();
    //CpProxyAvOpenhomeOrgUSBInfo1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgUSBInfo1*>(iProxy); }

    void SyncGetUSBInfo(TBool& aUSBPlugStatus, Brh& aUSBERRORInfo, Brh& aUSBCapacity, Brh& aUSBFileCount);
    void BeginGetUSBInfo(FunctorAsync& aFunctor);
    void EndGetUSBInfo(IAsync& aAsync, TBool& aUSBPlugStatus, Brh& aUSBERRORInfo, Brh& aUSBCapacity, Brh& aUSBFileCount);


private:
private:
    Mutex iLock;
    Action* iActionGetUSBInfo;
};


class SyncGetUSBInfoAvOpenhomeOrgUSBInfo1C : public SyncProxyAction
{
public:
    SyncGetUSBInfoAvOpenhomeOrgUSBInfo1C(CpProxyAvOpenhomeOrgUSBInfo1C& aProxy, TBool& aUSBPlugStatus, Brh& aUSBERRORInfo, Brh& aUSBCapacity, Brh& aUSBFileCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUSBInfoAvOpenhomeOrgUSBInfo1C() {};
private:
    CpProxyAvOpenhomeOrgUSBInfo1C& iService;
    TBool& iUSBPlugStatus;
    Brh& iUSBERRORInfo;
    Brh& iUSBCapacity;
    Brh& iUSBFileCount;
};

SyncGetUSBInfoAvOpenhomeOrgUSBInfo1C::SyncGetUSBInfoAvOpenhomeOrgUSBInfo1C(CpProxyAvOpenhomeOrgUSBInfo1C& aProxy, TBool& aUSBPlugStatus, Brh& aUSBERRORInfo, Brh& aUSBCapacity, Brh& aUSBFileCount)
    : iService(aProxy)
    , iUSBPlugStatus(aUSBPlugStatus)
    , iUSBERRORInfo(aUSBERRORInfo)
    , iUSBCapacity(aUSBCapacity)
    , iUSBFileCount(aUSBFileCount)
{
}

void SyncGetUSBInfoAvOpenhomeOrgUSBInfo1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUSBInfo(aAsync, iUSBPlugStatus, iUSBERRORInfo, iUSBCapacity, iUSBFileCount);
}

CpProxyAvOpenhomeOrgUSBInfo1C::CpProxyAvOpenhomeOrgUSBInfo1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "USBInfo", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetUSBInfo = new Action("GetUSBInfo");
    param = new OpenHome::Net::ParameterBool("USBPlugStatus");
    iActionGetUSBInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("USBERRORInfo");
    iActionGetUSBInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("USBCapacity");
    iActionGetUSBInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("USBFileCount");
    iActionGetUSBInfo->AddOutputParameter(param);
}

CpProxyAvOpenhomeOrgUSBInfo1C::~CpProxyAvOpenhomeOrgUSBInfo1C()
{
    DestroyService();
    delete iActionGetUSBInfo;
}

void CpProxyAvOpenhomeOrgUSBInfo1C::SyncGetUSBInfo(TBool& aUSBPlugStatus, Brh& aUSBERRORInfo, Brh& aUSBCapacity, Brh& aUSBFileCount)
{
    SyncGetUSBInfoAvOpenhomeOrgUSBInfo1C sync(*this, aUSBPlugStatus, aUSBERRORInfo, aUSBCapacity, aUSBFileCount);
    BeginGetUSBInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgUSBInfo1C::BeginGetUSBInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetUSBInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUSBInfo->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgUSBInfo1C::EndGetUSBInfo(IAsync& aAsync, TBool& aUSBPlugStatus, Brh& aUSBERRORInfo, Brh& aUSBCapacity, Brh& aUSBFileCount)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetUSBInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aUSBPlugStatus = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUSBERRORInfo);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUSBCapacity);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUSBFileCount);
}


THandle STDCALL CpProxyAvOpenhomeOrgUSBInfo1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgUSBInfo1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgUSBInfo1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgUSBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgUSBInfo1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgUSBInfo1SyncGetUSBInfo(THandle aHandle, uint32_t* aUSBPlugStatus, char** aUSBERRORInfo, char** aUSBCapacity, char** aUSBFileCount)
{
    CpProxyAvOpenhomeOrgUSBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgUSBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool USBPlugStatus;
    Brh buf_aUSBERRORInfo;
    Brh buf_aUSBCapacity;
    Brh buf_aUSBFileCount;
    int32_t err = 0;
    try {
        proxyC->SyncGetUSBInfo(USBPlugStatus, buf_aUSBERRORInfo, buf_aUSBCapacity, buf_aUSBFileCount);
        *aUSBPlugStatus = USBPlugStatus? 1 : 0;
        *aUSBERRORInfo = buf_aUSBERRORInfo.Extract();
        *aUSBCapacity = buf_aUSBCapacity.Extract();
        *aUSBFileCount = buf_aUSBFileCount.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aUSBPlugStatus = false;
        *aUSBERRORInfo = NULL;
        *aUSBCapacity = NULL;
        *aUSBFileCount = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgUSBInfo1BeginGetUSBInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgUSBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgUSBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetUSBInfo(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgUSBInfo1EndGetUSBInfo(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aUSBPlugStatus, char** aUSBERRORInfo, char** aUSBCapacity, char** aUSBFileCount)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgUSBInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgUSBInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool USBPlugStatus;
    Brh buf_aUSBERRORInfo;
    *aUSBERRORInfo = NULL;
    Brh buf_aUSBCapacity;
    *aUSBCapacity = NULL;
    Brh buf_aUSBFileCount;
    *aUSBFileCount = NULL;
    try {
        proxyC->EndGetUSBInfo(*async, USBPlugStatus, buf_aUSBERRORInfo, buf_aUSBCapacity, buf_aUSBFileCount);
        *aUSBPlugStatus = USBPlugStatus? 1 : 0;
        *aUSBERRORInfo = buf_aUSBERRORInfo.Extract();
        *aUSBCapacity = buf_aUSBCapacity.Extract();
        *aUSBFileCount = buf_aUSBFileCount.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

