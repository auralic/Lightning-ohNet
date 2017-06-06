#include "DvAvOpenhomeOrgWebDeviceConfig1.h"
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

class DvProviderAvOpenhomeOrgWebDeviceConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgWebDeviceConfig1C(DvDeviceC aDevice);
    TBool SetPropertyAlive(TBool aValue);
    void GetPropertyAlive(TBool& aValue);
    TBool SetPropertyDeviceConfig(const Brx& aValue);
    void GetPropertyDeviceConfig(Brhz& aValue);
    TBool SetPropertyCurrentAction(TUint aValue);
    void GetPropertyCurrentAction(TUint& aValue);
    void EnablePropertyAlive();
    void EnablePropertyDeviceConfig();
    void EnablePropertyCurrentAction();
    void EnableActionGetDeviceConfig(CallbackWebDeviceConfig1GetDeviceConfig aCallback, void* aPtr);
    void EnableActionSetDeviceConfig(CallbackWebDeviceConfig1SetDeviceConfig aCallback, void* aPtr);
    void EnableActionGetWiFiList(CallbackWebDeviceConfig1GetWiFiList aCallback, void* aPtr);
    void EnableActionSetTimeZone(CallbackWebDeviceConfig1SetTimeZone aCallback, void* aPtr);
    void EnableActionGetServiceLocation(CallbackWebDeviceConfig1GetServiceLocation aCallback, void* aPtr);
private:
    void DoGetDeviceConfig(IDviInvocation& aInvocation);
    void DoSetDeviceConfig(IDviInvocation& aInvocation);
    void DoGetWiFiList(IDviInvocation& aInvocation);
    void DoSetTimeZone(IDviInvocation& aInvocation);
    void DoGetServiceLocation(IDviInvocation& aInvocation);
private:
    CallbackWebDeviceConfig1GetDeviceConfig iCallbackGetDeviceConfig;
    void* iPtrGetDeviceConfig;
    CallbackWebDeviceConfig1SetDeviceConfig iCallbackSetDeviceConfig;
    void* iPtrSetDeviceConfig;
    CallbackWebDeviceConfig1GetWiFiList iCallbackGetWiFiList;
    void* iPtrGetWiFiList;
    CallbackWebDeviceConfig1SetTimeZone iCallbackSetTimeZone;
    void* iPtrSetTimeZone;
    CallbackWebDeviceConfig1GetServiceLocation iCallbackGetServiceLocation;
    void* iPtrGetServiceLocation;
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyDeviceConfig;
    PropertyUint* iPropertyCurrentAction;
};

DvProviderAvOpenhomeOrgWebDeviceConfig1C::DvProviderAvOpenhomeOrgWebDeviceConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "WebDeviceConfig", 1)
{
    iPropertyAlive = NULL;
    iPropertyDeviceConfig = NULL;
    iPropertyCurrentAction = NULL;
}

TBool DvProviderAvOpenhomeOrgWebDeviceConfig1C::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgWebDeviceConfig1C::SetPropertyDeviceConfig(const Brx& aValue)
{
    ASSERT(iPropertyDeviceConfig != NULL);
    return SetPropertyString(*iPropertyDeviceConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::GetPropertyDeviceConfig(Brhz& aValue)
{
    ASSERT(iPropertyDeviceConfig != NULL);
    aValue.Set(iPropertyDeviceConfig->Value());
}

TBool DvProviderAvOpenhomeOrgWebDeviceConfig1C::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::EnablePropertyDeviceConfig()
{
    iPropertyDeviceConfig = new PropertyString(new ParameterString("DeviceConfig"));
    iService->AddProperty(iPropertyDeviceConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::EnableActionGetDeviceConfig(CallbackWebDeviceConfig1GetDeviceConfig aCallback, void* aPtr)
{
    iCallbackGetDeviceConfig = aCallback;
    iPtrGetDeviceConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceConfig");
    action->AddOutputParameter(new ParameterRelated("DeviceConfig", *iPropertyDeviceConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1C::DoGetDeviceConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::EnableActionSetDeviceConfig(CallbackWebDeviceConfig1SetDeviceConfig aCallback, void* aPtr)
{
    iCallbackSetDeviceConfig = aCallback;
    iPtrSetDeviceConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDeviceConfig");
    action->AddInputParameter(new ParameterRelated("DeviceConfig", *iPropertyDeviceConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1C::DoSetDeviceConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::EnableActionGetWiFiList(CallbackWebDeviceConfig1GetWiFiList aCallback, void* aPtr)
{
    iCallbackGetWiFiList = aCallback;
    iPtrGetWiFiList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWiFiList");
    action->AddOutputParameter(new ParameterString("WiFiList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1C::DoGetWiFiList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::EnableActionSetTimeZone(CallbackWebDeviceConfig1SetTimeZone aCallback, void* aPtr)
{
    iCallbackSetTimeZone = aCallback;
    iPtrSetTimeZone = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTimeZone");
    action->AddInputParameter(new ParameterString("TimeZone"));
    action->AddInputParameter(new ParameterString("CurrentTime"));
    action->AddInputParameter(new ParameterString("TimeStamp"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1C::DoSetTimeZone);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::EnableActionGetServiceLocation(CallbackWebDeviceConfig1GetServiceLocation aCallback, void* aPtr)
{
    iCallbackGetServiceLocation = aCallback;
    iPtrGetServiceLocation = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServiceLocation");
    action->AddOutputParameter(new ParameterString("ServiceLoaction"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1C::DoGetServiceLocation);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::DoGetDeviceConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* DeviceConfig;
    ASSERT(iCallbackGetDeviceConfig != NULL);
    if (0 != iCallbackGetDeviceConfig(iPtrGetDeviceConfig, invocationC, invocationCPtr, &DeviceConfig)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respDeviceConfig(aInvocation, "DeviceConfig");
    invocation.StartResponse();
    Brhz bufDeviceConfig((const TChar*)DeviceConfig);
    OhNetFreeExternal(DeviceConfig);
    respDeviceConfig.Write(bufDeviceConfig);
    respDeviceConfig.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::DoSetDeviceConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz DeviceConfig;
    aInvocation.InvocationReadString("DeviceConfig", DeviceConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetDeviceConfig != NULL);
    if (0 != iCallbackSetDeviceConfig(iPtrSetDeviceConfig, invocationC, invocationCPtr, (const char*)DeviceConfig.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::DoGetWiFiList(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* WiFiList;
    ASSERT(iCallbackGetWiFiList != NULL);
    if (0 != iCallbackGetWiFiList(iPtrGetWiFiList, invocationC, invocationCPtr, &WiFiList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respWiFiList(aInvocation, "WiFiList");
    invocation.StartResponse();
    Brhz bufWiFiList((const TChar*)WiFiList);
    OhNetFreeExternal(WiFiList);
    respWiFiList.Write(bufWiFiList);
    respWiFiList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::DoSetTimeZone(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz TimeZone;
    aInvocation.InvocationReadString("TimeZone", TimeZone);
    Brhz CurrentTime;
    aInvocation.InvocationReadString("CurrentTime", CurrentTime);
    Brhz TimeStamp;
    aInvocation.InvocationReadString("TimeStamp", TimeStamp);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetTimeZone != NULL);
    if (0 != iCallbackSetTimeZone(iPtrSetTimeZone, invocationC, invocationCPtr, (const char*)TimeZone.Ptr(), (const char*)CurrentTime.Ptr(), (const char*)TimeStamp.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1C::DoGetServiceLocation(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ServiceLoaction;
    ASSERT(iCallbackGetServiceLocation != NULL);
    if (0 != iCallbackGetServiceLocation(iPtrGetServiceLocation, invocationC, invocationCPtr, &ServiceLoaction)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respServiceLoaction(aInvocation, "ServiceLoaction");
    invocation.StartResponse();
    Brhz bufServiceLoaction((const TChar*)ServiceLoaction);
    OhNetFreeExternal(ServiceLoaction);
    respServiceLoaction.Write(bufServiceLoaction);
    respServiceLoaction.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgWebDeviceConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionGetDeviceConfig(THandle aProvider, CallbackWebDeviceConfig1GetDeviceConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->EnableActionGetDeviceConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionSetDeviceConfig(THandle aProvider, CallbackWebDeviceConfig1SetDeviceConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->EnableActionSetDeviceConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionGetWiFiList(THandle aProvider, CallbackWebDeviceConfig1GetWiFiList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->EnableActionGetWiFiList(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionSetTimeZone(THandle aProvider, CallbackWebDeviceConfig1SetTimeZone aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->EnableActionSetTimeZone(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionGetServiceLocation(THandle aProvider, CallbackWebDeviceConfig1GetServiceLocation aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->EnableActionGetServiceLocation(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->SetPropertyAlive((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->GetPropertyAlive(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1SetPropertyDeviceConfig(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->SetPropertyDeviceConfig(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1GetPropertyDeviceConfig(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->GetPropertyDeviceConfig(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->SetPropertyCurrentAction(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->GetPropertyCurrentAction(val);
    *aValue = val;
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyAlive(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->EnablePropertyAlive();
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyDeviceConfig(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->EnablePropertyDeviceConfig();
}

void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyCurrentAction(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDeviceConfig1C*>(aProvider)->EnablePropertyCurrentAction();
}

