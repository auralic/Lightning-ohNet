#include "DvAvOpenhomeOrgWebDACConfig1.h"
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

class DvProviderAvOpenhomeOrgWebDACConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgWebDACConfig1C(DvDeviceC aDevice);
    TBool SetPropertyAlive(TBool aValue);
    void GetPropertyAlive(TBool& aValue);
    TBool SetPropertyDACConfig(const Brx& aValue);
    void GetPropertyDACConfig(Brhz& aValue);
    TBool SetPropertyCurrentAction(TUint aValue);
    void GetPropertyCurrentAction(TUint& aValue);
    void EnablePropertyAlive();
    void EnablePropertyDACConfig();
    void EnablePropertyCurrentAction();
    void EnableActionGetDACConfig(CallbackWebDACConfig1GetDACConfig aCallback, void* aPtr);
    void EnableActionSetDACConfig(CallbackWebDACConfig1SetDACConfig aCallback, void* aPtr);
private:
    void DoGetDACConfig(IDviInvocation& aInvocation);
    void DoSetDACConfig(IDviInvocation& aInvocation);
private:
    CallbackWebDACConfig1GetDACConfig iCallbackGetDACConfig;
    void* iPtrGetDACConfig;
    CallbackWebDACConfig1SetDACConfig iCallbackSetDACConfig;
    void* iPtrSetDACConfig;
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyDACConfig;
    PropertyUint* iPropertyCurrentAction;
};

DvProviderAvOpenhomeOrgWebDACConfig1C::DvProviderAvOpenhomeOrgWebDACConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "WebDACConfig", 1)
{
    iPropertyAlive = NULL;
    iPropertyDACConfig = NULL;
    iPropertyCurrentAction = NULL;
}

TBool DvProviderAvOpenhomeOrgWebDACConfig1C::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebDACConfig1C::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgWebDACConfig1C::SetPropertyDACConfig(const Brx& aValue)
{
    ASSERT(iPropertyDACConfig != NULL);
    return SetPropertyString(*iPropertyDACConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebDACConfig1C::GetPropertyDACConfig(Brhz& aValue)
{
    ASSERT(iPropertyDACConfig != NULL);
    aValue.Set(iPropertyDACConfig->Value());
}

TBool DvProviderAvOpenhomeOrgWebDACConfig1C::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgWebDACConfig1C::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

void DvProviderAvOpenhomeOrgWebDACConfig1C::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDACConfig1C::EnablePropertyDACConfig()
{
    iPropertyDACConfig = new PropertyString(new ParameterString("DACConfig"));
    iService->AddProperty(iPropertyDACConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDACConfig1C::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDACConfig1C::EnableActionGetDACConfig(CallbackWebDACConfig1GetDACConfig aCallback, void* aPtr)
{
    iCallbackGetDACConfig = aCallback;
    iPtrGetDACConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDACConfig");
    action->AddOutputParameter(new ParameterRelated("DACConfig", *iPropertyDACConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDACConfig1C::DoGetDACConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDACConfig1C::EnableActionSetDACConfig(CallbackWebDACConfig1SetDACConfig aCallback, void* aPtr)
{
    iCallbackSetDACConfig = aCallback;
    iPtrSetDACConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDACConfig");
    action->AddInputParameter(new ParameterRelated("DACConfig", *iPropertyDACConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDACConfig1C::DoSetDACConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDACConfig1C::DoGetDACConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* DACConfig;
    ASSERT(iCallbackGetDACConfig != NULL);
    if (0 != iCallbackGetDACConfig(iPtrGetDACConfig, invocationC, invocationCPtr, &DACConfig)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respDACConfig(aInvocation, "DACConfig");
    invocation.StartResponse();
    Brhz bufDACConfig((const TChar*)DACConfig);
    OhNetFreeExternal(DACConfig);
    respDACConfig.Write(bufDACConfig);
    respDACConfig.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgWebDACConfig1C::DoSetDACConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz DACConfig;
    aInvocation.InvocationReadString("DACConfig", DACConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetDACConfig != NULL);
    if (0 != iCallbackSetDACConfig(iPtrSetDACConfig, invocationC, invocationCPtr, (const char*)DACConfig.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgWebDACConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgWebDACConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1EnableActionGetDACConfig(THandle aProvider, CallbackWebDACConfig1GetDACConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider)->EnableActionGetDACConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1EnableActionSetDACConfig(THandle aProvider, CallbackWebDACConfig1SetDACConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider)->EnableActionSetDACConfig(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebDACConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider)->SetPropertyAlive((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider)->GetPropertyAlive(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebDACConfig1SetPropertyDACConfig(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider)->SetPropertyDACConfig(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1GetPropertyDACConfig(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider)->GetPropertyDACConfig(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebDACConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider)->SetPropertyCurrentAction(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider)->GetPropertyCurrentAction(val);
    *aValue = val;
}

void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyAlive(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider)->EnablePropertyAlive();
}

void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyDACConfig(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider)->EnablePropertyDACConfig();
}

void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyCurrentAction(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebDACConfig1C*>(aProvider)->EnablePropertyCurrentAction();
}

