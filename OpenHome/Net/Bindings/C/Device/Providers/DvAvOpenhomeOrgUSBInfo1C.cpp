#include "DvAvOpenhomeOrgUSBInfo1.h"
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

class DvProviderAvOpenhomeOrgUSBInfo1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgUSBInfo1C(DvDeviceC aDevice);
    void EnableActionGetUSBInfo(CallbackUSBInfo1GetUSBInfo aCallback, void* aPtr);
private:
    void DoGetUSBInfo(IDviInvocation& aInvocation);
private:
    CallbackUSBInfo1GetUSBInfo iCallbackGetUSBInfo;
    void* iPtrGetUSBInfo;
};

DvProviderAvOpenhomeOrgUSBInfo1C::DvProviderAvOpenhomeOrgUSBInfo1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "USBInfo", 1)
{
}

void DvProviderAvOpenhomeOrgUSBInfo1C::EnableActionGetUSBInfo(CallbackUSBInfo1GetUSBInfo aCallback, void* aPtr)
{
    iCallbackGetUSBInfo = aCallback;
    iPtrGetUSBInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUSBInfo");
    action->AddOutputParameter(new ParameterBool("USBPlugStatus"));
    action->AddOutputParameter(new ParameterString("USBERRORInfo"));
    action->AddOutputParameter(new ParameterString("USBCapacity"));
    action->AddOutputParameter(new ParameterString("USBFileCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgUSBInfo1C::DoGetUSBInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgUSBInfo1C::DoGetUSBInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t USBPlugStatus;
    char* USBERRORInfo;
    char* USBCapacity;
    char* USBFileCount;
    ASSERT(iCallbackGetUSBInfo != NULL);
    if (0 != iCallbackGetUSBInfo(iPtrGetUSBInfo, invocationC, invocationCPtr, &USBPlugStatus, &USBERRORInfo, &USBCapacity, &USBFileCount)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respUSBPlugStatus(aInvocation, "USBPlugStatus");
    DviInvocationResponseString respUSBERRORInfo(aInvocation, "USBERRORInfo");
    DviInvocationResponseString respUSBCapacity(aInvocation, "USBCapacity");
    DviInvocationResponseString respUSBFileCount(aInvocation, "USBFileCount");
    invocation.StartResponse();
    respUSBPlugStatus.Write((USBPlugStatus!=0));
    Brhz bufUSBERRORInfo((const TChar*)USBERRORInfo);
    OhNetFreeExternal(USBERRORInfo);
    respUSBERRORInfo.Write(bufUSBERRORInfo);
    respUSBERRORInfo.WriteFlush();
    Brhz bufUSBCapacity((const TChar*)USBCapacity);
    OhNetFreeExternal(USBCapacity);
    respUSBCapacity.Write(bufUSBCapacity);
    respUSBCapacity.WriteFlush();
    Brhz bufUSBFileCount((const TChar*)USBFileCount);
    OhNetFreeExternal(USBFileCount);
    respUSBFileCount.Write(bufUSBFileCount);
    respUSBFileCount.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgUSBInfo1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgUSBInfo1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgUSBInfo1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgUSBInfo1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgUSBInfo1EnableActionGetUSBInfo(THandle aProvider, CallbackUSBInfo1GetUSBInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgUSBInfo1C*>(aProvider)->EnableActionGetUSBInfo(aCallback, aPtr);
}

