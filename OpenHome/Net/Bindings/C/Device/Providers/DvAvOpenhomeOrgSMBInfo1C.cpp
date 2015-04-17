#include "DvAvOpenhomeOrgSMBInfo1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/C/DviDeviceC.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/C/DvInvocation.h>
#include <OpenHome/Net/C/DvInvocationPrivate.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class DvProviderAvOpenhomeOrgSMBInfo1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgSMBInfo1C(DvDeviceC aDevice);
    void EnableActionSetSMBConfig(CallbackSMBInfo1SetSMBConfig aCallback, void* aPtr);
    void EnableActionGetSMBConnectResult(CallbackSMBInfo1GetSMBConnectResult aCallback, void* aPtr);
    void EnableActionGetSMBInfo(CallbackSMBInfo1GetSMBInfo aCallback, void* aPtr);
private:
    void DoSetSMBConfig(IDviInvocation& aInvocation);
    void DoGetSMBConnectResult(IDviInvocation& aInvocation);
    void DoGetSMBInfo(IDviInvocation& aInvocation);
private:
    CallbackSMBInfo1SetSMBConfig iCallbackSetSMBConfig;
    void* iPtrSetSMBConfig;
    CallbackSMBInfo1GetSMBConnectResult iCallbackGetSMBConnectResult;
    void* iPtrGetSMBConnectResult;
    CallbackSMBInfo1GetSMBInfo iCallbackGetSMBInfo;
    void* iPtrGetSMBInfo;
};

DvProviderAvOpenhomeOrgSMBInfo1C::DvProviderAvOpenhomeOrgSMBInfo1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "SMBInfo", 1)
{
}

void DvProviderAvOpenhomeOrgSMBInfo1C::EnableActionSetSMBConfig(CallbackSMBInfo1SetSMBConfig aCallback, void* aPtr)
{
    iCallbackSetSMBConfig = aCallback;
    iPtrSetSMBConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSMBConfig");
    action->AddInputParameter(new ParameterString("SMBAddr"));
    action->AddInputParameter(new ParameterString("SMBUserName"));
    action->AddInputParameter(new ParameterString("SMBPassWord"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSMBInfo1C::DoSetSMBConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSMBInfo1C::EnableActionGetSMBConnectResult(CallbackSMBInfo1GetSMBConnectResult aCallback, void* aPtr)
{
    iCallbackGetSMBConnectResult = aCallback;
    iPtrGetSMBConnectResult = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSMBConnectResult");
    action->AddOutputParameter(new ParameterBool("SMBConnectResult"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSMBInfo1C::DoGetSMBConnectResult);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSMBInfo1C::EnableActionGetSMBInfo(CallbackSMBInfo1GetSMBInfo aCallback, void* aPtr)
{
    iCallbackGetSMBInfo = aCallback;
    iPtrGetSMBInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSMBInfo");
    action->AddOutputParameter(new ParameterBool("SMBConnectStatus"));
    action->AddOutputParameter(new ParameterString("SMBERRORInfo"));
    action->AddOutputParameter(new ParameterString("SMBCapacity"));
    action->AddOutputParameter(new ParameterString("SMBFileCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSMBInfo1C::DoGetSMBInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSMBInfo1C::DoSetSMBConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz SMBAddr;
    aInvocation.InvocationReadString("SMBAddr", SMBAddr);
    Brhz SMBUserName;
    aInvocation.InvocationReadString("SMBUserName", SMBUserName);
    Brhz SMBPassWord;
    aInvocation.InvocationReadString("SMBPassWord", SMBPassWord);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetSMBConfig != NULL);
    if (0 != iCallbackSetSMBConfig(iPtrSetSMBConfig, invocationC, invocationCPtr, (const char*)SMBAddr.Ptr(), (const char*)SMBUserName.Ptr(), (const char*)SMBPassWord.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgSMBInfo1C::DoGetSMBConnectResult(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t SMBConnectResult;
    ASSERT(iCallbackGetSMBConnectResult != NULL);
    if (0 != iCallbackGetSMBConnectResult(iPtrGetSMBConnectResult, invocationC, invocationCPtr, &SMBConnectResult)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respSMBConnectResult(aInvocation, "SMBConnectResult");
    invocation.StartResponse();
    respSMBConnectResult.Write((SMBConnectResult!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgSMBInfo1C::DoGetSMBInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t SMBConnectStatus;
    char* SMBERRORInfo;
    char* SMBCapacity;
    char* SMBFileCount;
    ASSERT(iCallbackGetSMBInfo != NULL);
    if (0 != iCallbackGetSMBInfo(iPtrGetSMBInfo, invocationC, invocationCPtr, &SMBConnectStatus, &SMBERRORInfo, &SMBCapacity, &SMBFileCount)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respSMBConnectStatus(aInvocation, "SMBConnectStatus");
    DviInvocationResponseString respSMBERRORInfo(aInvocation, "SMBERRORInfo");
    DviInvocationResponseString respSMBCapacity(aInvocation, "SMBCapacity");
    DviInvocationResponseString respSMBFileCount(aInvocation, "SMBFileCount");
    invocation.StartResponse();
    respSMBConnectStatus.Write((SMBConnectStatus!=0));
    Brhz bufSMBERRORInfo((const TChar*)SMBERRORInfo);
    OhNetFreeExternal(SMBERRORInfo);
    respSMBERRORInfo.Write(bufSMBERRORInfo);
    respSMBERRORInfo.WriteFlush();
    Brhz bufSMBCapacity((const TChar*)SMBCapacity);
    OhNetFreeExternal(SMBCapacity);
    respSMBCapacity.Write(bufSMBCapacity);
    respSMBCapacity.WriteFlush();
    Brhz bufSMBFileCount((const TChar*)SMBFileCount);
    OhNetFreeExternal(SMBFileCount);
    respSMBFileCount.Write(bufSMBFileCount);
    respSMBFileCount.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgSMBInfo1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgSMBInfo1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgSMBInfo1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgSMBInfo1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgSMBInfo1EnableActionSetSMBConfig(THandle aProvider, CallbackSMBInfo1SetSMBConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSMBInfo1C*>(aProvider)->EnableActionSetSMBConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgSMBInfo1EnableActionGetSMBConnectResult(THandle aProvider, CallbackSMBInfo1GetSMBConnectResult aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSMBInfo1C*>(aProvider)->EnableActionGetSMBConnectResult(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgSMBInfo1EnableActionGetSMBInfo(THandle aProvider, CallbackSMBInfo1GetSMBInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgSMBInfo1C*>(aProvider)->EnableActionGetSMBInfo(aCallback, aPtr);
}

