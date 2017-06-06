#include "DvAvOpenhomeOrgDACConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgDACConfig1Cpp::SetPropertyCurrentAction(uint32_t aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::GetPropertyCurrentAction(uint32_t& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

DvProviderAvOpenhomeOrgDACConfig1Cpp::DvProviderAvOpenhomeOrgDACConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "DACConfig", 1)
{
    iPropertyCurrentAction = NULL;
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::EnableActionGetFilterMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetFilterMode");
    action->AddOutputParameter(new ParameterString("FilterMode"));
    action->AddOutputParameter(new ParameterString("FilterModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1Cpp::DoGetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::EnableActionSetFilterMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFilterMode");
    action->AddInputParameter(new ParameterString("FilterMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1Cpp::DoSetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::EnableActionGetDACPhase()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDACPhase");
    action->AddOutputParameter(new ParameterUint("Phase"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1Cpp::DoGetDACPhase);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::EnableActionSetDACPhase()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDACPhase");
    action->AddInputParameter(new ParameterUint("Phase"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1Cpp::DoSetDACPhase);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::EnableActionGetDACBalance()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDACBalance");
    action->AddOutputParameter(new ParameterUint("Balance"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1Cpp::DoGetDACBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::EnableActionSetDACBalance()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDACBalance");
    action->AddInputParameter(new ParameterUint("Balance"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1Cpp::DoSetDACBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::EnableActionGetWaitingTime()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWaitingTime");
    action->AddOutputParameter(new ParameterString("WaitingTime"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1Cpp::DoGetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::EnableActionSetWaitingTime()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetWaitingTime");
    action->AddInputParameter(new ParameterString("WaitingTime"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDACConfig1Cpp::DoSetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::DoGetFilterMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respFilterMode;
    std::string respFilterModeList;
    DvInvocationStd invocation(aInvocation);
    GetFilterMode(invocation, respFilterMode, respFilterModeList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterFilterMode(aInvocation, "FilterMode");
    Brn buf_FilterMode((const TByte*)respFilterMode.c_str(), (TUint)respFilterMode.length());
    respWriterFilterMode.Write(buf_FilterMode);
    aInvocation.InvocationWriteStringEnd("FilterMode");
    DviInvocationResponseString respWriterFilterModeList(aInvocation, "FilterModeList");
    Brn buf_FilterModeList((const TByte*)respFilterModeList.c_str(), (TUint)respFilterModeList.length());
    respWriterFilterModeList.Write(buf_FilterModeList);
    aInvocation.InvocationWriteStringEnd("FilterModeList");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::DoSetFilterMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_FilterMode;
    aInvocation.InvocationReadString("FilterMode", buf_FilterMode);
    std::string FilterMode((const char*)buf_FilterMode.Ptr(), buf_FilterMode.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetFilterMode(invocation, FilterMode);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::DoGetDACPhase(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respPhase;
    DvInvocationStd invocation(aInvocation);
    GetDACPhase(invocation, respPhase);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterPhase(aInvocation, "Phase");
    respWriterPhase.Write(respPhase);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::DoSetDACPhase(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Phase = aInvocation.InvocationReadUint("Phase");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetDACPhase(invocation, Phase);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::DoGetDACBalance(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respBalance;
    DvInvocationStd invocation(aInvocation);
    GetDACBalance(invocation, respBalance);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterBalance(aInvocation, "Balance");
    respWriterBalance.Write(respBalance);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::DoSetDACBalance(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Balance = aInvocation.InvocationReadUint("Balance");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetDACBalance(invocation, Balance);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::DoGetWaitingTime(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respWaitingTime;
    DvInvocationStd invocation(aInvocation);
    GetWaitingTime(invocation, respWaitingTime);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterWaitingTime(aInvocation, "WaitingTime");
    Brn buf_WaitingTime((const TByte*)respWaitingTime.c_str(), (TUint)respWaitingTime.length());
    respWriterWaitingTime.Write(buf_WaitingTime);
    aInvocation.InvocationWriteStringEnd("WaitingTime");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::DoSetWaitingTime(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_WaitingTime;
    aInvocation.InvocationReadString("WaitingTime", buf_WaitingTime);
    std::string WaitingTime((const char*)buf_WaitingTime.Ptr(), buf_WaitingTime.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetWaitingTime(invocation, WaitingTime);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::GetFilterMode(IDvInvocationStd& /*aInvocation*/, std::string& /*aFilterMode*/, std::string& /*aFilterModeList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::SetFilterMode(IDvInvocationStd& /*aInvocation*/, const std::string& /*aFilterMode*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::GetDACPhase(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aPhase*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::SetDACPhase(IDvInvocationStd& /*aInvocation*/, uint32_t /*aPhase*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::GetDACBalance(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aBalance*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::SetDACBalance(IDvInvocationStd& /*aInvocation*/, uint32_t /*aBalance*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::GetWaitingTime(IDvInvocationStd& /*aInvocation*/, std::string& /*aWaitingTime*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDACConfig1Cpp::SetWaitingTime(IDvInvocationStd& /*aInvocation*/, const std::string& /*aWaitingTime*/)
{
    ASSERTS();
}

