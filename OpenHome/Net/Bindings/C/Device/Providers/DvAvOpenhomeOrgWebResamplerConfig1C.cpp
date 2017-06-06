#include "DvAvOpenhomeOrgWebResamplerConfig1.h"
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

class DvProviderAvOpenhomeOrgWebResamplerConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgWebResamplerConfig1C(DvDeviceC aDevice);
    TBool SetPropertyResamplerConfig(const Brx& aValue);
    void GetPropertyResamplerConfig(Brhz& aValue);
    void EnablePropertyResamplerConfig();
    void EnableActionGetResamplerConfig(CallbackWebResamplerConfig1GetResamplerConfig aCallback, void* aPtr);
    void EnableActionSetResamplerConfig(CallbackWebResamplerConfig1SetResamplerConfig aCallback, void* aPtr);
private:
    void DoGetResamplerConfig(IDviInvocation& aInvocation);
    void DoSetResamplerConfig(IDviInvocation& aInvocation);
private:
    CallbackWebResamplerConfig1GetResamplerConfig iCallbackGetResamplerConfig;
    void* iPtrGetResamplerConfig;
    CallbackWebResamplerConfig1SetResamplerConfig iCallbackSetResamplerConfig;
    void* iPtrSetResamplerConfig;
    PropertyString* iPropertyResamplerConfig;
};

DvProviderAvOpenhomeOrgWebResamplerConfig1C::DvProviderAvOpenhomeOrgWebResamplerConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "WebResamplerConfig", 1)
{
    iPropertyResamplerConfig = NULL;
}

TBool DvProviderAvOpenhomeOrgWebResamplerConfig1C::SetPropertyResamplerConfig(const Brx& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    return SetPropertyString(*iPropertyResamplerConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1C::GetPropertyResamplerConfig(Brhz& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    aValue.Set(iPropertyResamplerConfig->Value());
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1C::EnablePropertyResamplerConfig()
{
    iPropertyResamplerConfig = new PropertyString(new ParameterString("ResamplerConfig"));
    iService->AddProperty(iPropertyResamplerConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1C::EnableActionGetResamplerConfig(CallbackWebResamplerConfig1GetResamplerConfig aCallback, void* aPtr)
{
    iCallbackGetResamplerConfig = aCallback;
    iPtrGetResamplerConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetResamplerConfig");
    action->AddOutputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebResamplerConfig1C::DoGetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1C::EnableActionSetResamplerConfig(CallbackWebResamplerConfig1SetResamplerConfig aCallback, void* aPtr)
{
    iCallbackSetResamplerConfig = aCallback;
    iPtrSetResamplerConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetResamplerConfig");
    action->AddInputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebResamplerConfig1C::DoSetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1C::DoGetResamplerConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgWebResamplerConfig1C::DoSetResamplerConfig(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgWebResamplerConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgWebResamplerConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1EnableActionGetResamplerConfig(THandle aProvider, CallbackWebResamplerConfig1GetResamplerConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebResamplerConfig1C*>(aProvider)->EnableActionGetResamplerConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1EnableActionSetResamplerConfig(THandle aProvider, CallbackWebResamplerConfig1SetResamplerConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebResamplerConfig1C*>(aProvider)->EnableActionSetResamplerConfig(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1SetPropertyResamplerConfig(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebResamplerConfig1C*>(aProvider)->SetPropertyResamplerConfig(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1GetPropertyResamplerConfig(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebResamplerConfig1C*>(aProvider)->GetPropertyResamplerConfig(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1EnablePropertyResamplerConfig(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebResamplerConfig1C*>(aProvider)->EnablePropertyResamplerConfig();
}

