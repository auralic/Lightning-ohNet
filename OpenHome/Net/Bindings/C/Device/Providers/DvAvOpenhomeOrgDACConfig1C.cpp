#include "DvAvOpenhomeOrgDACConfig1.h"
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

class DvProviderAvOpenhomeOrgDACConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgDACConfig1C(DvDeviceC aDevice);
    TBool SetPropertyCurrentAction(TUint aValue);
    void GetPropertyCurrentAction(TUint& aValue);
    void EnablePropertyCurrentAction();
    void EnableActionGetFilterMode(CallbackDACConfig1GetFilterMode aCallback, void* aPtr);
    void EnableActionSetFilterMode(CallbackDACConfig1SetFilterMode aCallback, void* aPtr);
    void EnableActionGetDACPhase(CallbackDACConfig1GetDACPhase aCallback, void* aPtr);
    void EnableActionSetDACPhase(CallbackDACConfig1SetDACPhase aCallback, void* aPtr);
    void EnableActionGetDACBalance(CallbackDACConfig1GetDACBalance aCallback, void* aPtr);
    void EnableActionSetDACBalance(CallbackDACConfig1SetDACBalance aCallback, void* aPtr);
    void EnableActionGetWaitingTime(CallbackDACConfig1GetWaitingTime aCallback, void* aPtr);
    void EnableActionSetWaitingTime(CallbackDACConfig1SetWaitingTime aCallback, void* aPtr);
private:
    void DoGetFilterMode(IDviInvocation& aInvocation);
    void DoSetFilterMode(IDviInvocation& aInvocation);
    void DoGetDACPhase(IDviInvocation& aInvocation);
    void DoSetDACPhase(IDviInvocation& aInvocation);
    void DoGetDACBalance(IDviInvocation& aInvocation);
    void DoSetDACBalance(IDviInvocation& aInvocation);
    void DoGetWaitingTime(IDviInvocation& aInvocation);
    void DoSetWaitingTime(IDviInvocation& aInvocation);
private:
    CallbackDACConfig1GetFilterMode iCallbackGetFilterMode;
    void* iPtrGetFilterMode;
    CallbackDACConfig1SetFilterMode iCallbackSetFilterMode;
    void* iPtrSetFilterMode;
    CallbackDACConfig1GetDACPhase iCallbackGetDACPhase;
    void* iPtrGetDACPhase;
    CallbackDACConfig1SetDACPhase iCallbackSetDACPhase;
    void* iPtrSetDACPhase;
    CallbackDACConfig1GetDACBalance iCallbackGetDACBalance;
    void* iPtrGetDACBalance;
    CallbackDACConfig1SetDACBalance iCallbackSetDACBalance;
    void* iPtrSetDACBalance;
    CallbackDACConfig1GetWaitingTime iCallbackGetWaitingTime;
    void* iPtrGetWaitingTime;
    CallbackDACConfig1SetWaitingTime iCallbackSetWaitingTime;
    void* iPtrSetWaitingTime;
    PropertyUint* iPropertyCurrentAction;
};

DvProviderAvOpenhomeOrgDACConfig1C::DvProviderAvOpenhomeOrgDACConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "DACConfig", 1)
{
    iPropertyCurrentAction = NULL;
}

TBool DvProviderAvOpenhomeOrgDACConfig1C::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgDACConfig1C::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

void DvProviderAvOpenhomeOrgDACConfig1C::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgDACConfig1C::EnableActionGetFilterMode(CallbackDACConfig1GetFilterMode aCallback, void* aPtr)
{
    iCallbackGetFilterMode = aCallback;
    iPtrGetFilterMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetFilterMode");
    action->AddOutputParameter(new ParameterString("FilterMode"));
    action->AddOutputParameter(new ParameterString("FilterModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1C::DoGetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1C::EnableActionSetFilterMode(CallbackDACConfig1SetFilterMode aCallback, void* aPtr)
{
    iCallbackSetFilterMode = aCallback;
    iPtrSetFilterMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFilterMode");
    action->AddInputParameter(new ParameterString("FilterMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1C::DoSetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1C::EnableActionGetDACPhase(CallbackDACConfig1GetDACPhase aCallback, void* aPtr)
{
    iCallbackGetDACPhase = aCallback;
    iPtrGetDACPhase = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDACPhase");
    action->AddOutputParameter(new ParameterUint("Phase"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1C::DoGetDACPhase);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1C::EnableActionSetDACPhase(CallbackDACConfig1SetDACPhase aCallback, void* aPtr)
{
    iCallbackSetDACPhase = aCallback;
    iPtrSetDACPhase = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDACPhase");
    action->AddInputParameter(new ParameterUint("Phase"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1C::DoSetDACPhase);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1C::EnableActionGetDACBalance(CallbackDACConfig1GetDACBalance aCallback, void* aPtr)
{
    iCallbackGetDACBalance = aCallback;
    iPtrGetDACBalance = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDACBalance");
    action->AddOutputParameter(new ParameterUint("Balance"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1C::DoGetDACBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1C::EnableActionSetDACBalance(CallbackDACConfig1SetDACBalance aCallback, void* aPtr)
{
    iCallbackSetDACBalance = aCallback;
    iPtrSetDACBalance = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDACBalance");
    action->AddInputParameter(new ParameterUint("Balance"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1C::DoSetDACBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1C::EnableActionGetWaitingTime(CallbackDACConfig1GetWaitingTime aCallback, void* aPtr)
{
    iCallbackGetWaitingTime = aCallback;
    iPtrGetWaitingTime = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWaitingTime");
    action->AddOutputParameter(new ParameterString("WaitingTime"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1C::DoGetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1C::EnableActionSetWaitingTime(CallbackDACConfig1SetWaitingTime aCallback, void* aPtr)
{
    iCallbackSetWaitingTime = aCallback;
    iPtrSetWaitingTime = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetWaitingTime");
    action->AddInputParameter(new ParameterString("WaitingTime"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1C::DoSetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1C::DoGetFilterMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* FilterMode;
    char* FilterModeList;
    ASSERT(iCallbackGetFilterMode != NULL);
    if (0 != iCallbackGetFilterMode(iPtrGetFilterMode, invocationC, invocationCPtr, &FilterMode, &FilterModeList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respFilterMode(aInvocation, "FilterMode");
    DviInvocationResponseString respFilterModeList(aInvocation, "FilterModeList");
    invocation.StartResponse();
    Brhz bufFilterMode((const TChar*)FilterMode);
    OhNetFreeExternal(FilterMode);
    respFilterMode.Write(bufFilterMode);
    respFilterMode.WriteFlush();
    Brhz bufFilterModeList((const TChar*)FilterModeList);
    OhNetFreeExternal(FilterModeList);
    respFilterModeList.Write(bufFilterModeList);
    respFilterModeList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgDACConfig1C::DoSetFilterMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz FilterMode;
    aInvocation.InvocationReadString("FilterMode", FilterMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetFilterMode != NULL);
    if (0 != iCallbackSetFilterMode(iPtrSetFilterMode, invocationC, invocationCPtr, (const char*)FilterMode.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgDACConfig1C::DoGetDACPhase(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Phase;
    ASSERT(iCallbackGetDACPhase != NULL);
    if (0 != iCallbackGetDACPhase(iPtrGetDACPhase, invocationC, invocationCPtr, &Phase)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respPhase(aInvocation, "Phase");
    invocation.StartResponse();
    respPhase.Write(Phase);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgDACConfig1C::DoSetDACPhase(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Phase = aInvocation.InvocationReadUint("Phase");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetDACPhase != NULL);
    if (0 != iCallbackSetDACPhase(iPtrSetDACPhase, invocationC, invocationCPtr, Phase)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgDACConfig1C::DoGetDACBalance(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Balance;
    ASSERT(iCallbackGetDACBalance != NULL);
    if (0 != iCallbackGetDACBalance(iPtrGetDACBalance, invocationC, invocationCPtr, &Balance)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respBalance(aInvocation, "Balance");
    invocation.StartResponse();
    respBalance.Write(Balance);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgDACConfig1C::DoSetDACBalance(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Balance = aInvocation.InvocationReadUint("Balance");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetDACBalance != NULL);
    if (0 != iCallbackSetDACBalance(iPtrSetDACBalance, invocationC, invocationCPtr, Balance)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgDACConfig1C::DoGetWaitingTime(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* WaitingTime;
    ASSERT(iCallbackGetWaitingTime != NULL);
    if (0 != iCallbackGetWaitingTime(iPtrGetWaitingTime, invocationC, invocationCPtr, &WaitingTime)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respWaitingTime(aInvocation, "WaitingTime");
    invocation.StartResponse();
    Brhz bufWaitingTime((const TChar*)WaitingTime);
    OhNetFreeExternal(WaitingTime);
    respWaitingTime.Write(bufWaitingTime);
    respWaitingTime.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgDACConfig1C::DoSetWaitingTime(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz WaitingTime;
    aInvocation.InvocationReadString("WaitingTime", WaitingTime);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetWaitingTime != NULL);
    if (0 != iCallbackSetWaitingTime(iPtrSetWaitingTime, invocationC, invocationCPtr, (const char*)WaitingTime.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgDACConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgDACConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgDACConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionGetFilterMode(THandle aProvider, CallbackDACConfig1GetFilterMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider)->EnableActionGetFilterMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionSetFilterMode(THandle aProvider, CallbackDACConfig1SetFilterMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider)->EnableActionSetFilterMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionGetDACPhase(THandle aProvider, CallbackDACConfig1GetDACPhase aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider)->EnableActionGetDACPhase(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionSetDACPhase(THandle aProvider, CallbackDACConfig1SetDACPhase aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider)->EnableActionSetDACPhase(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionGetDACBalance(THandle aProvider, CallbackDACConfig1GetDACBalance aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider)->EnableActionGetDACBalance(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionSetDACBalance(THandle aProvider, CallbackDACConfig1SetDACBalance aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider)->EnableActionSetDACBalance(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionGetWaitingTime(THandle aProvider, CallbackDACConfig1GetWaitingTime aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider)->EnableActionGetWaitingTime(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionSetWaitingTime(THandle aProvider, CallbackDACConfig1SetWaitingTime aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider)->EnableActionSetWaitingTime(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgDACConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider)->SetPropertyCurrentAction(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgDACConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider)->GetPropertyCurrentAction(val);
    *aValue = val;
}

void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnablePropertyCurrentAction(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgDACConfig1C*>(aProvider)->EnablePropertyCurrentAction();
}

