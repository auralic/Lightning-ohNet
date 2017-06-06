#include "DvAvOpenhomeOrgRendererConfig1.h"
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

class DvProviderAvOpenhomeOrgRendererConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgRendererConfig1C(DvDeviceC aDevice);
    TBool SetPropertyRendererConfig(const Brx& aValue);
    void GetPropertyRendererConfig(Brhz& aValue);
    TBool SetPropertyResamplerConfig(const Brx& aValue);
    void GetPropertyResamplerConfig(Brhz& aValue);
    TBool SetPropertyHardwareConfig(const Brx& aValue);
    void GetPropertyHardwareConfig(Brhz& aValue);
    void EnablePropertyRendererConfig();
    void EnablePropertyResamplerConfig();
    void EnablePropertyHardwareConfig();
    void EnableActionGetRendererConfig(CallbackRendererConfig1GetRendererConfig aCallback, void* aPtr);
    void EnableActionSetRendererConfig(CallbackRendererConfig1SetRendererConfig aCallback, void* aPtr);
    void EnableActionGetResamplerConfig(CallbackRendererConfig1GetResamplerConfig aCallback, void* aPtr);
    void EnableActionSetResamplerConfig(CallbackRendererConfig1SetResamplerConfig aCallback, void* aPtr);
    void EnableActionGetHardwareConfig(CallbackRendererConfig1GetHardwareConfig aCallback, void* aPtr);
    void EnableActionSetHardwareConfig(CallbackRendererConfig1SetHardwareConfig aCallback, void* aPtr);
    void EnableActionGetWiFiList(CallbackRendererConfig1GetWiFiList aCallback, void* aPtr);
    void EnableActionSetTimeZone(CallbackRendererConfig1SetTimeZone aCallback, void* aPtr);
private:
    void DoGetRendererConfig(IDviInvocation& aInvocation);
    void DoSetRendererConfig(IDviInvocation& aInvocation);
    void DoGetResamplerConfig(IDviInvocation& aInvocation);
    void DoSetResamplerConfig(IDviInvocation& aInvocation);
    void DoGetHardwareConfig(IDviInvocation& aInvocation);
    void DoSetHardwareConfig(IDviInvocation& aInvocation);
    void DoGetWiFiList(IDviInvocation& aInvocation);
    void DoSetTimeZone(IDviInvocation& aInvocation);
private:
    CallbackRendererConfig1GetRendererConfig iCallbackGetRendererConfig;
    void* iPtrGetRendererConfig;
    CallbackRendererConfig1SetRendererConfig iCallbackSetRendererConfig;
    void* iPtrSetRendererConfig;
    CallbackRendererConfig1GetResamplerConfig iCallbackGetResamplerConfig;
    void* iPtrGetResamplerConfig;
    CallbackRendererConfig1SetResamplerConfig iCallbackSetResamplerConfig;
    void* iPtrSetResamplerConfig;
    CallbackRendererConfig1GetHardwareConfig iCallbackGetHardwareConfig;
    void* iPtrGetHardwareConfig;
    CallbackRendererConfig1SetHardwareConfig iCallbackSetHardwareConfig;
    void* iPtrSetHardwareConfig;
    CallbackRendererConfig1GetWiFiList iCallbackGetWiFiList;
    void* iPtrGetWiFiList;
    CallbackRendererConfig1SetTimeZone iCallbackSetTimeZone;
    void* iPtrSetTimeZone;
    PropertyString* iPropertyRendererConfig;
    PropertyString* iPropertyResamplerConfig;
    PropertyString* iPropertyHardwareConfig;
};

DvProviderAvOpenhomeOrgRendererConfig1C::DvProviderAvOpenhomeOrgRendererConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "RendererConfig", 1)
{
    iPropertyRendererConfig = NULL;
    iPropertyResamplerConfig = NULL;
    iPropertyHardwareConfig = NULL;
}

TBool DvProviderAvOpenhomeOrgRendererConfig1C::SetPropertyRendererConfig(const Brx& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    return SetPropertyString(*iPropertyRendererConfig, aValue);
}

void DvProviderAvOpenhomeOrgRendererConfig1C::GetPropertyRendererConfig(Brhz& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    aValue.Set(iPropertyRendererConfig->Value());
}

TBool DvProviderAvOpenhomeOrgRendererConfig1C::SetPropertyResamplerConfig(const Brx& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    return SetPropertyString(*iPropertyResamplerConfig, aValue);
}

void DvProviderAvOpenhomeOrgRendererConfig1C::GetPropertyResamplerConfig(Brhz& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    aValue.Set(iPropertyResamplerConfig->Value());
}

TBool DvProviderAvOpenhomeOrgRendererConfig1C::SetPropertyHardwareConfig(const Brx& aValue)
{
    ASSERT(iPropertyHardwareConfig != NULL);
    return SetPropertyString(*iPropertyHardwareConfig, aValue);
}

void DvProviderAvOpenhomeOrgRendererConfig1C::GetPropertyHardwareConfig(Brhz& aValue)
{
    ASSERT(iPropertyHardwareConfig != NULL);
    aValue.Set(iPropertyHardwareConfig->Value());
}

void DvProviderAvOpenhomeOrgRendererConfig1C::EnablePropertyRendererConfig()
{
    iPropertyRendererConfig = new PropertyString(new ParameterString("RendererConfig"));
    iService->AddProperty(iPropertyRendererConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgRendererConfig1C::EnablePropertyResamplerConfig()
{
    iPropertyResamplerConfig = new PropertyString(new ParameterString("ResamplerConfig"));
    iService->AddProperty(iPropertyResamplerConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgRendererConfig1C::EnablePropertyHardwareConfig()
{
    iPropertyHardwareConfig = new PropertyString(new ParameterString("HardwareConfig"));
    iService->AddProperty(iPropertyHardwareConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgRendererConfig1C::EnableActionGetRendererConfig(CallbackRendererConfig1GetRendererConfig aCallback, void* aPtr)
{
    iCallbackGetRendererConfig = aCallback;
    iPtrGetRendererConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRendererConfig");
    action->AddOutputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1C::DoGetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1C::EnableActionSetRendererConfig(CallbackRendererConfig1SetRendererConfig aCallback, void* aPtr)
{
    iCallbackSetRendererConfig = aCallback;
    iPtrSetRendererConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRendererConfig");
    action->AddInputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1C::DoSetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1C::EnableActionGetResamplerConfig(CallbackRendererConfig1GetResamplerConfig aCallback, void* aPtr)
{
    iCallbackGetResamplerConfig = aCallback;
    iPtrGetResamplerConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetResamplerConfig");
    action->AddOutputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1C::DoGetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1C::EnableActionSetResamplerConfig(CallbackRendererConfig1SetResamplerConfig aCallback, void* aPtr)
{
    iCallbackSetResamplerConfig = aCallback;
    iPtrSetResamplerConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetResamplerConfig");
    action->AddInputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1C::DoSetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1C::EnableActionGetHardwareConfig(CallbackRendererConfig1GetHardwareConfig aCallback, void* aPtr)
{
    iCallbackGetHardwareConfig = aCallback;
    iPtrGetHardwareConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHardwareConfig");
    action->AddOutputParameter(new ParameterRelated("HardwareConfig", *iPropertyHardwareConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1C::DoGetHardwareConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1C::EnableActionSetHardwareConfig(CallbackRendererConfig1SetHardwareConfig aCallback, void* aPtr)
{
    iCallbackSetHardwareConfig = aCallback;
    iPtrSetHardwareConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetHardwareConfig");
    action->AddInputParameter(new ParameterRelated("HardwareConfig", *iPropertyHardwareConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1C::DoSetHardwareConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1C::EnableActionGetWiFiList(CallbackRendererConfig1GetWiFiList aCallback, void* aPtr)
{
    iCallbackGetWiFiList = aCallback;
    iPtrGetWiFiList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWiFiList");
    action->AddOutputParameter(new ParameterString("WiFiList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1C::DoGetWiFiList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1C::EnableActionSetTimeZone(CallbackRendererConfig1SetTimeZone aCallback, void* aPtr)
{
    iCallbackSetTimeZone = aCallback;
    iPtrSetTimeZone = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTimeZone");
    action->AddInputParameter(new ParameterString("TimeZone"));
    action->AddInputParameter(new ParameterString("CurrentTime"));
    action->AddInputParameter(new ParameterString("TimeStamp"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1C::DoSetTimeZone);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1C::DoGetRendererConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* RendererConfig;
    ASSERT(iCallbackGetRendererConfig != NULL);
    if (0 != iCallbackGetRendererConfig(iPtrGetRendererConfig, invocationC, invocationCPtr, &RendererConfig)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respRendererConfig(aInvocation, "RendererConfig");
    invocation.StartResponse();
    Brhz bufRendererConfig((const TChar*)RendererConfig);
    OhNetFreeExternal(RendererConfig);
    respRendererConfig.Write(bufRendererConfig);
    respRendererConfig.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgRendererConfig1C::DoSetRendererConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz RendererConfig;
    aInvocation.InvocationReadString("RendererConfig", RendererConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetRendererConfig != NULL);
    if (0 != iCallbackSetRendererConfig(iPtrSetRendererConfig, invocationC, invocationCPtr, (const char*)RendererConfig.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgRendererConfig1C::DoGetResamplerConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ResamplerConfig;
    ASSERT(iCallbackGetResamplerConfig != NULL);
    if (0 != iCallbackGetResamplerConfig(iPtrGetResamplerConfig, invocationC, invocationCPtr, &ResamplerConfig)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respResamplerConfig(aInvocation, "ResamplerConfig");
    invocation.StartResponse();
    Brhz bufResamplerConfig((const TChar*)ResamplerConfig);
    OhNetFreeExternal(ResamplerConfig);
    respResamplerConfig.Write(bufResamplerConfig);
    respResamplerConfig.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgRendererConfig1C::DoSetResamplerConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ResamplerConfig;
    aInvocation.InvocationReadString("ResamplerConfig", ResamplerConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetResamplerConfig != NULL);
    if (0 != iCallbackSetResamplerConfig(iPtrSetResamplerConfig, invocationC, invocationCPtr, (const char*)ResamplerConfig.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgRendererConfig1C::DoGetHardwareConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* HardwareConfig;
    ASSERT(iCallbackGetHardwareConfig != NULL);
    if (0 != iCallbackGetHardwareConfig(iPtrGetHardwareConfig, invocationC, invocationCPtr, &HardwareConfig)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respHardwareConfig(aInvocation, "HardwareConfig");
    invocation.StartResponse();
    Brhz bufHardwareConfig((const TChar*)HardwareConfig);
    OhNetFreeExternal(HardwareConfig);
    respHardwareConfig.Write(bufHardwareConfig);
    respHardwareConfig.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgRendererConfig1C::DoSetHardwareConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz HardwareConfig;
    aInvocation.InvocationReadString("HardwareConfig", HardwareConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetHardwareConfig != NULL);
    if (0 != iCallbackSetHardwareConfig(iPtrSetHardwareConfig, invocationC, invocationCPtr, (const char*)HardwareConfig.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgRendererConfig1C::DoGetWiFiList(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRendererConfig1C::DoSetTimeZone(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgRendererConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgRendererConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetRendererConfig(THandle aProvider, CallbackRendererConfig1GetRendererConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->EnableActionGetRendererConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetRendererConfig(THandle aProvider, CallbackRendererConfig1SetRendererConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->EnableActionSetRendererConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetResamplerConfig(THandle aProvider, CallbackRendererConfig1GetResamplerConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->EnableActionGetResamplerConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetResamplerConfig(THandle aProvider, CallbackRendererConfig1SetResamplerConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->EnableActionSetResamplerConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetHardwareConfig(THandle aProvider, CallbackRendererConfig1GetHardwareConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->EnableActionGetHardwareConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetHardwareConfig(THandle aProvider, CallbackRendererConfig1SetHardwareConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->EnableActionSetHardwareConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetWiFiList(THandle aProvider, CallbackRendererConfig1GetWiFiList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->EnableActionGetWiFiList(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetTimeZone(THandle aProvider, CallbackRendererConfig1SetTimeZone aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->EnableActionSetTimeZone(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgRendererConfig1SetPropertyRendererConfig(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->SetPropertyRendererConfig(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1GetPropertyRendererConfig(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->GetPropertyRendererConfig(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgRendererConfig1SetPropertyResamplerConfig(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->SetPropertyResamplerConfig(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1GetPropertyResamplerConfig(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->GetPropertyResamplerConfig(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgRendererConfig1SetPropertyHardwareConfig(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->SetPropertyHardwareConfig(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1GetPropertyHardwareConfig(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->GetPropertyHardwareConfig(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyRendererConfig(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->EnablePropertyRendererConfig();
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyResamplerConfig(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->EnablePropertyResamplerConfig();
}

void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyHardwareConfig(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRendererConfig1C*>(aProvider)->EnablePropertyHardwareConfig();
}

