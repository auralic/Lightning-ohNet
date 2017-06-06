#include "DvAvOpenhomeOrgWebProcessorConfig1.h"
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

class DvProviderAvOpenhomeOrgWebProcessorConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgWebProcessorConfig1C(DvDeviceC aDevice);
    TBool SetPropertyAlive(TBool aValue);
    void GetPropertyAlive(TBool& aValue);
    TBool SetPropertyProcessorConfig(const Brx& aValue);
    void GetPropertyProcessorConfig(Brhz& aValue);
    void EnablePropertyAlive();
    void EnablePropertyProcessorConfig();
    void EnableActionGetProcessorConfig(CallbackWebProcessorConfig1GetProcessorConfig aCallback, void* aPtr);
    void EnableActionSetProcessorConfig(CallbackWebProcessorConfig1SetProcessorConfig aCallback, void* aPtr);
private:
    void DoGetProcessorConfig(IDviInvocation& aInvocation);
    void DoSetProcessorConfig(IDviInvocation& aInvocation);
private:
    CallbackWebProcessorConfig1GetProcessorConfig iCallbackGetProcessorConfig;
    void* iPtrGetProcessorConfig;
    CallbackWebProcessorConfig1SetProcessorConfig iCallbackSetProcessorConfig;
    void* iPtrSetProcessorConfig;
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyProcessorConfig;
};

DvProviderAvOpenhomeOrgWebProcessorConfig1C::DvProviderAvOpenhomeOrgWebProcessorConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "WebProcessorConfig", 1)
{
    iPropertyAlive = NULL;
    iPropertyProcessorConfig = NULL;
}

TBool DvProviderAvOpenhomeOrgWebProcessorConfig1C::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1C::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgWebProcessorConfig1C::SetPropertyProcessorConfig(const Brx& aValue)
{
    ASSERT(iPropertyProcessorConfig != NULL);
    return SetPropertyString(*iPropertyProcessorConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1C::GetPropertyProcessorConfig(Brhz& aValue)
{
    ASSERT(iPropertyProcessorConfig != NULL);
    aValue.Set(iPropertyProcessorConfig->Value());
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1C::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1C::EnablePropertyProcessorConfig()
{
    iPropertyProcessorConfig = new PropertyString(new ParameterString("ProcessorConfig"));
    iService->AddProperty(iPropertyProcessorConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1C::EnableActionGetProcessorConfig(CallbackWebProcessorConfig1GetProcessorConfig aCallback, void* aPtr)
{
    iCallbackGetProcessorConfig = aCallback;
    iPtrGetProcessorConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetProcessorConfig");
    action->AddOutputParameter(new ParameterRelated("ProcessorConfig", *iPropertyProcessorConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebProcessorConfig1C::DoGetProcessorConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1C::EnableActionSetProcessorConfig(CallbackWebProcessorConfig1SetProcessorConfig aCallback, void* aPtr)
{
    iCallbackSetProcessorConfig = aCallback;
    iPtrSetProcessorConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetProcessorConfig");
    action->AddInputParameter(new ParameterRelated("ProcessorConfig", *iPropertyProcessorConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebProcessorConfig1C::DoSetProcessorConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1C::DoGetProcessorConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ProcessorConfig;
    ASSERT(iCallbackGetProcessorConfig != NULL);
    if (0 != iCallbackGetProcessorConfig(iPtrGetProcessorConfig, invocationC, invocationCPtr, &ProcessorConfig)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respProcessorConfig(aInvocation, "ProcessorConfig");
    invocation.StartResponse();
    Brhz bufProcessorConfig((const TChar*)ProcessorConfig);
    OhNetFreeExternal(ProcessorConfig);
    respProcessorConfig.Write(bufProcessorConfig);
    respProcessorConfig.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1C::DoSetProcessorConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ProcessorConfig;
    aInvocation.InvocationReadString("ProcessorConfig", ProcessorConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetProcessorConfig != NULL);
    if (0 != iCallbackSetProcessorConfig(iPtrSetProcessorConfig, invocationC, invocationCPtr, (const char*)ProcessorConfig.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgWebProcessorConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgWebProcessorConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1EnableActionGetProcessorConfig(THandle aProvider, CallbackWebProcessorConfig1GetProcessorConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebProcessorConfig1C*>(aProvider)->EnableActionGetProcessorConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1EnableActionSetProcessorConfig(THandle aProvider, CallbackWebProcessorConfig1SetProcessorConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebProcessorConfig1C*>(aProvider)->EnableActionSetProcessorConfig(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebProcessorConfig1C*>(aProvider)->SetPropertyAlive((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebProcessorConfig1C*>(aProvider)->GetPropertyAlive(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1SetPropertyProcessorConfig(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebProcessorConfig1C*>(aProvider)->SetPropertyProcessorConfig(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1GetPropertyProcessorConfig(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebProcessorConfig1C*>(aProvider)->GetPropertyProcessorConfig(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1EnablePropertyAlive(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebProcessorConfig1C*>(aProvider)->EnablePropertyAlive();
}

void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1EnablePropertyProcessorConfig(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebProcessorConfig1C*>(aProvider)->EnablePropertyProcessorConfig();
}

