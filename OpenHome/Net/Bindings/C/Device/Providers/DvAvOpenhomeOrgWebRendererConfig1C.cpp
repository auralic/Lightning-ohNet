#include "DvAvOpenhomeOrgWebRendererConfig1.h"
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

class DvProviderAvOpenhomeOrgWebRendererConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgWebRendererConfig1C(DvDeviceC aDevice);
    TBool SetPropertyAlive(TBool aValue);
    void GetPropertyAlive(TBool& aValue);
    TBool SetPropertyRendererConfig(const Brx& aValue);
    void GetPropertyRendererConfig(Brhz& aValue);
    TBool SetPropertyCurrentAction(TUint aValue);
    void GetPropertyCurrentAction(TUint& aValue);
    void EnablePropertyAlive();
    void EnablePropertyRendererConfig();
    void EnablePropertyCurrentAction();
    void EnableActionGetRendererConfig(CallbackWebRendererConfig1GetRendererConfig aCallback, void* aPtr);
    void EnableActionSetRendererConfig(CallbackWebRendererConfig1SetRendererConfig aCallback, void* aPtr);
private:
    void DoGetRendererConfig(IDviInvocation& aInvocation);
    void DoSetRendererConfig(IDviInvocation& aInvocation);
private:
    CallbackWebRendererConfig1GetRendererConfig iCallbackGetRendererConfig;
    void* iPtrGetRendererConfig;
    CallbackWebRendererConfig1SetRendererConfig iCallbackSetRendererConfig;
    void* iPtrSetRendererConfig;
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyRendererConfig;
    PropertyUint* iPropertyCurrentAction;
};

DvProviderAvOpenhomeOrgWebRendererConfig1C::DvProviderAvOpenhomeOrgWebRendererConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "WebRendererConfig", 1)
{
    iPropertyAlive = NULL;
    iPropertyRendererConfig = NULL;
    iPropertyCurrentAction = NULL;
}

TBool DvProviderAvOpenhomeOrgWebRendererConfig1C::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1C::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgWebRendererConfig1C::SetPropertyRendererConfig(const Brx& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    return SetPropertyString(*iPropertyRendererConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1C::GetPropertyRendererConfig(Brhz& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    aValue.Set(iPropertyRendererConfig->Value());
}

TBool DvProviderAvOpenhomeOrgWebRendererConfig1C::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1C::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

void DvProviderAvOpenhomeOrgWebRendererConfig1C::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebRendererConfig1C::EnablePropertyRendererConfig()
{
    iPropertyRendererConfig = new PropertyString(new ParameterString("RendererConfig"));
    iService->AddProperty(iPropertyRendererConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebRendererConfig1C::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgWebRendererConfig1C::EnableActionGetRendererConfig(CallbackWebRendererConfig1GetRendererConfig aCallback, void* aPtr)
{
    iCallbackGetRendererConfig = aCallback;
    iPtrGetRendererConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRendererConfig");
    action->AddOutputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebRendererConfig1C::DoGetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1C::EnableActionSetRendererConfig(CallbackWebRendererConfig1SetRendererConfig aCallback, void* aPtr)
{
    iCallbackSetRendererConfig = aCallback;
    iPtrSetRendererConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRendererConfig");
    action->AddInputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebRendererConfig1C::DoSetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1C::DoGetRendererConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgWebRendererConfig1C::DoSetRendererConfig(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgWebRendererConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1EnableActionGetRendererConfig(THandle aProvider, CallbackWebRendererConfig1GetRendererConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider)->EnableActionGetRendererConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1EnableActionSetRendererConfig(THandle aProvider, CallbackWebRendererConfig1SetRendererConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider)->EnableActionSetRendererConfig(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider)->SetPropertyAlive((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider)->GetPropertyAlive(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1SetPropertyRendererConfig(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider)->SetPropertyRendererConfig(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1GetPropertyRendererConfig(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider)->GetPropertyRendererConfig(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider)->SetPropertyCurrentAction(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider)->GetPropertyCurrentAction(val);
    *aValue = val;
}

void STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1EnablePropertyAlive(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider)->EnablePropertyAlive();
}

void STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1EnablePropertyRendererConfig(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider)->EnablePropertyRendererConfig();
}

void STDCALL DvProviderAvOpenhomeOrgWebRendererConfig1EnablePropertyCurrentAction(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebRendererConfig1C*>(aProvider)->EnablePropertyCurrentAction();
}

