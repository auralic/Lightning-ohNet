#include "DvAvOpenhomeOrgDACConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgDACConfig1::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgDACConfig1::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

DvProviderAvOpenhomeOrgDACConfig1::DvProviderAvOpenhomeOrgDACConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "DACConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgDACConfig1::DvProviderAvOpenhomeOrgDACConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "DACConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgDACConfig1::Construct()
{
    iPropertyCurrentAction = NULL;
}

void DvProviderAvOpenhomeOrgDACConfig1::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgDACConfig1::EnableActionGetFilterMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetFilterMode");
    action->AddOutputParameter(new ParameterString("FilterMode"));
    action->AddOutputParameter(new ParameterString("FilterModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1::DoGetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1::EnableActionSetFilterMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFilterMode");
    action->AddInputParameter(new ParameterString("FilterMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1::DoSetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1::EnableActionGetDACPhase()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDACPhase");
    action->AddOutputParameter(new ParameterUint("Phase"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1::DoGetDACPhase);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1::EnableActionSetDACPhase()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDACPhase");
    action->AddInputParameter(new ParameterUint("Phase"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1::DoSetDACPhase);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1::EnableActionGetDACBalance()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDACBalance");
    action->AddOutputParameter(new ParameterUint("Balance"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1::DoGetDACBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1::EnableActionSetDACBalance()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDACBalance");
    action->AddInputParameter(new ParameterUint("Balance"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1::DoSetDACBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1::EnableActionGetWaitingTime()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWaitingTime");
    action->AddOutputParameter(new ParameterString("WaitingTime"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1::DoGetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1::EnableActionSetWaitingTime()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetWaitingTime");
    action->AddInputParameter(new ParameterString("WaitingTime"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1::DoSetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1::DoGetFilterMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respFilterMode(aInvocation, "FilterMode");
    DviInvocationResponseString respFilterModeList(aInvocation, "FilterModeList");
    GetFilterMode(invocation, respFilterMode, respFilterModeList);
}

void DvProviderAvOpenhomeOrgDACConfig1::DoSetFilterMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz FilterMode;
    aInvocation.InvocationReadString("FilterMode", FilterMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetFilterMode(invocation, FilterMode);
}

void DvProviderAvOpenhomeOrgDACConfig1::DoGetDACPhase(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respPhase(aInvocation, "Phase");
    GetDACPhase(invocation, respPhase);
}

void DvProviderAvOpenhomeOrgDACConfig1::DoSetDACPhase(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Phase = aInvocation.InvocationReadUint("Phase");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetDACPhase(invocation, Phase);
}

void DvProviderAvOpenhomeOrgDACConfig1::DoGetDACBalance(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respBalance(aInvocation, "Balance");
    GetDACBalance(invocation, respBalance);
}

void DvProviderAvOpenhomeOrgDACConfig1::DoSetDACBalance(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Balance = aInvocation.InvocationReadUint("Balance");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetDACBalance(invocation, Balance);
}

void DvProviderAvOpenhomeOrgDACConfig1::DoGetWaitingTime(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respWaitingTime(aInvocation, "WaitingTime");
    GetWaitingTime(invocation, respWaitingTime);
}

void DvProviderAvOpenhomeOrgDACConfig1::DoSetWaitingTime(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz WaitingTime;
    aInvocation.InvocationReadString("WaitingTime", WaitingTime);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetWaitingTime(invocation, WaitingTime);
}

void DvProviderAvOpenhomeOrgDACConfig1::GetFilterMode(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aFilterMode*/, IDvInvocationResponseString& /*aFilterModeList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1::SetFilterMode(IDvInvocation& /*aResponse*/, const Brx& /*aFilterMode*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1::GetDACPhase(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aPhase*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1::SetDACPhase(IDvInvocation& /*aResponse*/, TUint /*aPhase*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1::GetDACBalance(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aBalance*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1::SetDACBalance(IDvInvocation& /*aResponse*/, TUint /*aBalance*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1::GetWaitingTime(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aWaitingTime*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1::SetWaitingTime(IDvInvocation& /*aResponse*/, const Brx& /*aWaitingTime*/)
{
    ASSERTS();
}

