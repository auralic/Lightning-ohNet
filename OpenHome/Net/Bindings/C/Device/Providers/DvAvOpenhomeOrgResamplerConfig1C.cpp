#include "DvAvOpenhomeOrgResamplerConfig1.h"
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

class DvProviderAvOpenhomeOrgResamplerConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgResamplerConfig1C(DvDeviceC aDevice);
    TBool SetPropertyCurrentAction(TUint aValue);
    void GetPropertyCurrentAction(TUint& aValue);
    void EnablePropertyCurrentAction();
    void EnableActionSetResamplerConfig(CallbackResamplerConfig1SetResamplerConfig aCallback, void* aPtr);
    void EnableActionGetResamplerConfig(CallbackResamplerConfig1GetResamplerConfig aCallback, void* aPtr);
    void EnableActionSetPCMAutoDetect(CallbackResamplerConfig1SetPCMAutoDetect aCallback, void* aPtr);
    void EnableActionGetPCMAutoDetect(CallbackResamplerConfig1GetPCMAutoDetect aCallback, void* aPtr);
    void EnableActionSetDSDtoPCM(CallbackResamplerConfig1SetDSDtoPCM aCallback, void* aPtr);
    void EnableActionGetDSDtoPCM(CallbackResamplerConfig1GetDSDtoPCM aCallback, void* aPtr);
private:
    void DoSetResamplerConfig(IDviInvocation& aInvocation);
    void DoGetResamplerConfig(IDviInvocation& aInvocation);
    void DoSetPCMAutoDetect(IDviInvocation& aInvocation);
    void DoGetPCMAutoDetect(IDviInvocation& aInvocation);
    void DoSetDSDtoPCM(IDviInvocation& aInvocation);
    void DoGetDSDtoPCM(IDviInvocation& aInvocation);
private:
    CallbackResamplerConfig1SetResamplerConfig iCallbackSetResamplerConfig;
    void* iPtrSetResamplerConfig;
    CallbackResamplerConfig1GetResamplerConfig iCallbackGetResamplerConfig;
    void* iPtrGetResamplerConfig;
    CallbackResamplerConfig1SetPCMAutoDetect iCallbackSetPCMAutoDetect;
    void* iPtrSetPCMAutoDetect;
    CallbackResamplerConfig1GetPCMAutoDetect iCallbackGetPCMAutoDetect;
    void* iPtrGetPCMAutoDetect;
    CallbackResamplerConfig1SetDSDtoPCM iCallbackSetDSDtoPCM;
    void* iPtrSetDSDtoPCM;
    CallbackResamplerConfig1GetDSDtoPCM iCallbackGetDSDtoPCM;
    void* iPtrGetDSDtoPCM;
    PropertyUint* iPropertyCurrentAction;
};

DvProviderAvOpenhomeOrgResamplerConfig1C::DvProviderAvOpenhomeOrgResamplerConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "ResamplerConfig", 1)
{
    iPropertyCurrentAction = NULL;
}

TBool DvProviderAvOpenhomeOrgResamplerConfig1C::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::EnableActionSetResamplerConfig(CallbackResamplerConfig1SetResamplerConfig aCallback, void* aPtr)
{
    iCallbackSetResamplerConfig = aCallback;
    iPtrSetResamplerConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetResamplerConfig");
    action->AddInputParameter(new ParameterString("ResamplerConfig"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1C::DoSetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::EnableActionGetResamplerConfig(CallbackResamplerConfig1GetResamplerConfig aCallback, void* aPtr)
{
    iCallbackGetResamplerConfig = aCallback;
    iPtrGetResamplerConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetResamplerConfig");
    action->AddOutputParameter(new ParameterString("ResamplerConfig"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1C::DoGetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::EnableActionSetPCMAutoDetect(CallbackResamplerConfig1SetPCMAutoDetect aCallback, void* aPtr)
{
    iCallbackSetPCMAutoDetect = aCallback;
    iPtrSetPCMAutoDetect = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPCMAutoDetect");
    action->AddInputParameter(new ParameterBool("PCMAutoDetect"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1C::DoSetPCMAutoDetect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::EnableActionGetPCMAutoDetect(CallbackResamplerConfig1GetPCMAutoDetect aCallback, void* aPtr)
{
    iCallbackGetPCMAutoDetect = aCallback;
    iPtrGetPCMAutoDetect = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPCMAutoDetect");
    action->AddOutputParameter(new ParameterBool("PCMAutoDetect"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1C::DoGetPCMAutoDetect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::EnableActionSetDSDtoPCM(CallbackResamplerConfig1SetDSDtoPCM aCallback, void* aPtr)
{
    iCallbackSetDSDtoPCM = aCallback;
    iPtrSetDSDtoPCM = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDSDtoPCM");
    action->AddInputParameter(new ParameterBool("DSDtoPCM"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1C::DoSetDSDtoPCM);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::EnableActionGetDSDtoPCM(CallbackResamplerConfig1GetDSDtoPCM aCallback, void* aPtr)
{
    iCallbackGetDSDtoPCM = aCallback;
    iPtrGetDSDtoPCM = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDSDtoPCM");
    action->AddOutputParameter(new ParameterBool("DSDtoPCM"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1C::DoGetDSDtoPCM);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::DoSetResamplerConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgResamplerConfig1C::DoGetResamplerConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgResamplerConfig1C::DoSetPCMAutoDetect(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool PCMAutoDetect = aInvocation.InvocationReadBool("PCMAutoDetect");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetPCMAutoDetect != NULL);
    if (0 != iCallbackSetPCMAutoDetect(iPtrSetPCMAutoDetect, invocationC, invocationCPtr, PCMAutoDetect)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::DoGetPCMAutoDetect(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t PCMAutoDetect;
    ASSERT(iCallbackGetPCMAutoDetect != NULL);
    if (0 != iCallbackGetPCMAutoDetect(iPtrGetPCMAutoDetect, invocationC, invocationCPtr, &PCMAutoDetect)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respPCMAutoDetect(aInvocation, "PCMAutoDetect");
    invocation.StartResponse();
    respPCMAutoDetect.Write((PCMAutoDetect!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::DoSetDSDtoPCM(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool DSDtoPCM = aInvocation.InvocationReadBool("DSDtoPCM");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetDSDtoPCM != NULL);
    if (0 != iCallbackSetDSDtoPCM(iPtrSetDSDtoPCM, invocationC, invocationCPtr, DSDtoPCM)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgResamplerConfig1C::DoGetDSDtoPCM(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t DSDtoPCM;
    ASSERT(iCallbackGetDSDtoPCM != NULL);
    if (0 != iCallbackGetDSDtoPCM(iPtrGetDSDtoPCM, invocationC, invocationCPtr, &DSDtoPCM)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respDSDtoPCM(aInvocation, "DSDtoPCM");
    invocation.StartResponse();
    respDSDtoPCM.Write((DSDtoPCM!=0));
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgResamplerConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgResamplerConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgResamplerConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgResamplerConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgResamplerConfig1EnableActionSetResamplerConfig(THandle aProvider, CallbackResamplerConfig1SetResamplerConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgResamplerConfig1C*>(aProvider)->EnableActionSetResamplerConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgResamplerConfig1EnableActionGetResamplerConfig(THandle aProvider, CallbackResamplerConfig1GetResamplerConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgResamplerConfig1C*>(aProvider)->EnableActionGetResamplerConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgResamplerConfig1EnableActionSetPCMAutoDetect(THandle aProvider, CallbackResamplerConfig1SetPCMAutoDetect aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgResamplerConfig1C*>(aProvider)->EnableActionSetPCMAutoDetect(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgResamplerConfig1EnableActionGetPCMAutoDetect(THandle aProvider, CallbackResamplerConfig1GetPCMAutoDetect aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgResamplerConfig1C*>(aProvider)->EnableActionGetPCMAutoDetect(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgResamplerConfig1EnableActionSetDSDtoPCM(THandle aProvider, CallbackResamplerConfig1SetDSDtoPCM aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgResamplerConfig1C*>(aProvider)->EnableActionSetDSDtoPCM(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgResamplerConfig1EnableActionGetDSDtoPCM(THandle aProvider, CallbackResamplerConfig1GetDSDtoPCM aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgResamplerConfig1C*>(aProvider)->EnableActionGetDSDtoPCM(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgResamplerConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgResamplerConfig1C*>(aProvider)->SetPropertyCurrentAction(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgResamplerConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgResamplerConfig1C*>(aProvider)->GetPropertyCurrentAction(val);
    *aValue = val;
}

void STDCALL DvProviderAvOpenhomeOrgResamplerConfig1EnablePropertyCurrentAction(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgResamplerConfig1C*>(aProvider)->EnablePropertyCurrentAction();
}

