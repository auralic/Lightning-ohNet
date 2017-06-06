#include "DvAvOpenhomeOrgTestResamplerConfig1.h"
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

class DvProviderAvOpenhomeOrgTestResamplerConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgTestResamplerConfig1C(DvDeviceC aDevice);
    TBool SetPropertyCurrentAction(TUint aValue);
    void GetPropertyCurrentAction(TUint& aValue);
    void EnablePropertyCurrentAction();
    void EnableActionSetResamplerConfig(CallbackTestResamplerConfig1SetResamplerConfig aCallback, void* aPtr);
    void EnableActionGetResamplerConfig(CallbackTestResamplerConfig1GetResamplerConfig aCallback, void* aPtr);
    void EnableActionSetPCMAutoDetect(CallbackTestResamplerConfig1SetPCMAutoDetect aCallback, void* aPtr);
    void EnableActionGetPCMAutoDetect(CallbackTestResamplerConfig1GetPCMAutoDetect aCallback, void* aPtr);
    void EnableActionSetDSDtoPCM(CallbackTestResamplerConfig1SetDSDtoPCM aCallback, void* aPtr);
    void EnableActionGetDSDtoPCM(CallbackTestResamplerConfig1GetDSDtoPCM aCallback, void* aPtr);
private:
    void DoSetResamplerConfig(IDviInvocation& aInvocation);
    void DoGetResamplerConfig(IDviInvocation& aInvocation);
    void DoSetPCMAutoDetect(IDviInvocation& aInvocation);
    void DoGetPCMAutoDetect(IDviInvocation& aInvocation);
    void DoSetDSDtoPCM(IDviInvocation& aInvocation);
    void DoGetDSDtoPCM(IDviInvocation& aInvocation);
private:
    CallbackTestResamplerConfig1SetResamplerConfig iCallbackSetResamplerConfig;
    void* iPtrSetResamplerConfig;
    CallbackTestResamplerConfig1GetResamplerConfig iCallbackGetResamplerConfig;
    void* iPtrGetResamplerConfig;
    CallbackTestResamplerConfig1SetPCMAutoDetect iCallbackSetPCMAutoDetect;
    void* iPtrSetPCMAutoDetect;
    CallbackTestResamplerConfig1GetPCMAutoDetect iCallbackGetPCMAutoDetect;
    void* iPtrGetPCMAutoDetect;
    CallbackTestResamplerConfig1SetDSDtoPCM iCallbackSetDSDtoPCM;
    void* iPtrSetDSDtoPCM;
    CallbackTestResamplerConfig1GetDSDtoPCM iCallbackGetDSDtoPCM;
    void* iPtrGetDSDtoPCM;
    PropertyUint* iPropertyCurrentAction;
};

DvProviderAvOpenhomeOrgTestResamplerConfig1C::DvProviderAvOpenhomeOrgTestResamplerConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "TestResamplerConfig", 1)
{
    iPropertyCurrentAction = NULL;
}

TBool DvProviderAvOpenhomeOrgTestResamplerConfig1C::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::EnableActionSetResamplerConfig(CallbackTestResamplerConfig1SetResamplerConfig aCallback, void* aPtr)
{
    iCallbackSetResamplerConfig = aCallback;
    iPtrSetResamplerConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetResamplerConfig");
    action->AddInputParameter(new ParameterString("ResamplerConfig"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoSetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::EnableActionGetResamplerConfig(CallbackTestResamplerConfig1GetResamplerConfig aCallback, void* aPtr)
{
    iCallbackGetResamplerConfig = aCallback;
    iPtrGetResamplerConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetResamplerConfig");
    action->AddOutputParameter(new ParameterString("ResamplerConfig"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoGetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::EnableActionSetPCMAutoDetect(CallbackTestResamplerConfig1SetPCMAutoDetect aCallback, void* aPtr)
{
    iCallbackSetPCMAutoDetect = aCallback;
    iPtrSetPCMAutoDetect = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPCMAutoDetect");
    action->AddInputParameter(new ParameterBool("PCMAutoDetect"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoSetPCMAutoDetect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::EnableActionGetPCMAutoDetect(CallbackTestResamplerConfig1GetPCMAutoDetect aCallback, void* aPtr)
{
    iCallbackGetPCMAutoDetect = aCallback;
    iPtrGetPCMAutoDetect = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPCMAutoDetect");
    action->AddOutputParameter(new ParameterBool("PCMAutoDetect"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoGetPCMAutoDetect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::EnableActionSetDSDtoPCM(CallbackTestResamplerConfig1SetDSDtoPCM aCallback, void* aPtr)
{
    iCallbackSetDSDtoPCM = aCallback;
    iPtrSetDSDtoPCM = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDSDtoPCM");
    action->AddInputParameter(new ParameterBool("DSDtoPCM"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoSetDSDtoPCM);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::EnableActionGetDSDtoPCM(CallbackTestResamplerConfig1GetDSDtoPCM aCallback, void* aPtr)
{
    iCallbackGetDSDtoPCM = aCallback;
    iPtrGetDSDtoPCM = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDSDtoPCM");
    action->AddOutputParameter(new ParameterBool("DSDtoPCM"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoGetDSDtoPCM);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoSetResamplerConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoGetResamplerConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoSetPCMAutoDetect(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoGetPCMAutoDetect(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoSetDSDtoPCM(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTestResamplerConfig1C::DoGetDSDtoPCM(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgTestResamplerConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgTestResamplerConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionSetResamplerConfig(THandle aProvider, CallbackTestResamplerConfig1SetResamplerConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTestResamplerConfig1C*>(aProvider)->EnableActionSetResamplerConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionGetResamplerConfig(THandle aProvider, CallbackTestResamplerConfig1GetResamplerConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTestResamplerConfig1C*>(aProvider)->EnableActionGetResamplerConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionSetPCMAutoDetect(THandle aProvider, CallbackTestResamplerConfig1SetPCMAutoDetect aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTestResamplerConfig1C*>(aProvider)->EnableActionSetPCMAutoDetect(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionGetPCMAutoDetect(THandle aProvider, CallbackTestResamplerConfig1GetPCMAutoDetect aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTestResamplerConfig1C*>(aProvider)->EnableActionGetPCMAutoDetect(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionSetDSDtoPCM(THandle aProvider, CallbackTestResamplerConfig1SetDSDtoPCM aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTestResamplerConfig1C*>(aProvider)->EnableActionSetDSDtoPCM(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionGetDSDtoPCM(THandle aProvider, CallbackTestResamplerConfig1GetDSDtoPCM aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTestResamplerConfig1C*>(aProvider)->EnableActionGetDSDtoPCM(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTestResamplerConfig1C*>(aProvider)->SetPropertyCurrentAction(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTestResamplerConfig1C*>(aProvider)->GetPropertyCurrentAction(val);
    *aValue = val;
}

void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnablePropertyCurrentAction(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTestResamplerConfig1C*>(aProvider)->EnablePropertyCurrentAction();
}

