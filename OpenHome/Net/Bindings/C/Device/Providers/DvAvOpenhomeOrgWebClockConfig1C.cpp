#include "DvAvOpenhomeOrgWebClockConfig1.h"
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

class DvProviderAvOpenhomeOrgWebClockConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgWebClockConfig1C(DvDeviceC aDevice);
    TBool SetPropertyAlive(TBool aValue);
    void GetPropertyAlive(TBool& aValue);
    TBool SetPropertyClockConfig(const Brx& aValue);
    void GetPropertyClockConfig(Brhz& aValue);
    void EnablePropertyAlive();
    void EnablePropertyClockConfig();
    void EnableActionGetClockConfig(CallbackWebClockConfig1GetClockConfig aCallback, void* aPtr);
    void EnableActionSetClockConfig(CallbackWebClockConfig1SetClockConfig aCallback, void* aPtr);
private:
    void DoGetClockConfig(IDviInvocation& aInvocation);
    void DoSetClockConfig(IDviInvocation& aInvocation);
private:
    CallbackWebClockConfig1GetClockConfig iCallbackGetClockConfig;
    void* iPtrGetClockConfig;
    CallbackWebClockConfig1SetClockConfig iCallbackSetClockConfig;
    void* iPtrSetClockConfig;
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyClockConfig;
};

DvProviderAvOpenhomeOrgWebClockConfig1C::DvProviderAvOpenhomeOrgWebClockConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "WebClockConfig", 1)
{
    iPropertyAlive = NULL;
    iPropertyClockConfig = NULL;
}

TBool DvProviderAvOpenhomeOrgWebClockConfig1C::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebClockConfig1C::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgWebClockConfig1C::SetPropertyClockConfig(const Brx& aValue)
{
    ASSERT(iPropertyClockConfig != NULL);
    return SetPropertyString(*iPropertyClockConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebClockConfig1C::GetPropertyClockConfig(Brhz& aValue)
{
    ASSERT(iPropertyClockConfig != NULL);
    aValue.Set(iPropertyClockConfig->Value());
}

void DvProviderAvOpenhomeOrgWebClockConfig1C::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebClockConfig1C::EnablePropertyClockConfig()
{
    iPropertyClockConfig = new PropertyString(new ParameterString("ClockConfig"));
    iService->AddProperty(iPropertyClockConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebClockConfig1C::EnableActionGetClockConfig(CallbackWebClockConfig1GetClockConfig aCallback, void* aPtr)
{
    iCallbackGetClockConfig = aCallback;
    iPtrGetClockConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetClockConfig");
    action->AddOutputParameter(new ParameterRelated("ClockConfig", *iPropertyClockConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebClockConfig1C::DoGetClockConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebClockConfig1C::EnableActionSetClockConfig(CallbackWebClockConfig1SetClockConfig aCallback, void* aPtr)
{
    iCallbackSetClockConfig = aCallback;
    iPtrSetClockConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetClockConfig");
    action->AddInputParameter(new ParameterRelated("ClockConfig", *iPropertyClockConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebClockConfig1C::DoSetClockConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebClockConfig1C::DoGetClockConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ClockConfig;
    ASSERT(iCallbackGetClockConfig != NULL);
    if (0 != iCallbackGetClockConfig(iPtrGetClockConfig, invocationC, invocationCPtr, &ClockConfig)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respClockConfig(aInvocation, "ClockConfig");
    invocation.StartResponse();
    Brhz bufClockConfig((const TChar*)ClockConfig);
    OhNetFreeExternal(ClockConfig);
    respClockConfig.Write(bufClockConfig);
    respClockConfig.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgWebClockConfig1C::DoSetClockConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ClockConfig;
    aInvocation.InvocationReadString("ClockConfig", ClockConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetClockConfig != NULL);
    if (0 != iCallbackSetClockConfig(iPtrSetClockConfig, invocationC, invocationCPtr, (const char*)ClockConfig.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgWebClockConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgWebClockConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgWebClockConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1EnableActionGetClockConfig(THandle aProvider, CallbackWebClockConfig1GetClockConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebClockConfig1C*>(aProvider)->EnableActionGetClockConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1EnableActionSetClockConfig(THandle aProvider, CallbackWebClockConfig1SetClockConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebClockConfig1C*>(aProvider)->EnableActionSetClockConfig(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebClockConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebClockConfig1C*>(aProvider)->SetPropertyAlive((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebClockConfig1C*>(aProvider)->GetPropertyAlive(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgWebClockConfig1SetPropertyClockConfig(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgWebClockConfig1C*>(aProvider)->SetPropertyClockConfig(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1GetPropertyClockConfig(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgWebClockConfig1C*>(aProvider)->GetPropertyClockConfig(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1EnablePropertyAlive(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebClockConfig1C*>(aProvider)->EnablePropertyAlive();
}

void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1EnablePropertyClockConfig(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgWebClockConfig1C*>(aProvider)->EnablePropertyClockConfig();
}

