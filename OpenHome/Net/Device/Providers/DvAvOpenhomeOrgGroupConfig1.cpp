#include "DvAvOpenhomeOrgGroupConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgGroupConfig1::SetPropertyGroupMode(const Brx& aValue)
{
    ASSERT(iPropertyGroupMode != NULL);
    return SetPropertyString(*iPropertyGroupMode, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1::GetPropertyGroupMode(Brhz& aValue)
{
    ASSERT(iPropertyGroupMode != NULL);
    aValue.Set(iPropertyGroupMode->Value());
}

TBool DvProviderAvOpenhomeOrgGroupConfig1::SetPropertyGroupName(const Brx& aValue)
{
    ASSERT(iPropertyGroupName != NULL);
    return SetPropertyString(*iPropertyGroupName, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1::GetPropertyGroupName(Brhz& aValue)
{
    ASSERT(iPropertyGroupName != NULL);
    aValue.Set(iPropertyGroupName->Value());
}

TBool DvProviderAvOpenhomeOrgGroupConfig1::SetPropertyGroupID(const Brx& aValue)
{
    ASSERT(iPropertyGroupID != NULL);
    return SetPropertyString(*iPropertyGroupID, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1::GetPropertyGroupID(Brhz& aValue)
{
    ASSERT(iPropertyGroupID != NULL);
    aValue.Set(iPropertyGroupID->Value());
}

TBool DvProviderAvOpenhomeOrgGroupConfig1::SetPropertyGroupVolume(TUint aValue)
{
    ASSERT(iPropertyGroupVolume != NULL);
    return SetPropertyUint(*iPropertyGroupVolume, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1::GetPropertyGroupVolume(TUint& aValue)
{
    ASSERT(iPropertyGroupVolume != NULL);
    aValue = iPropertyGroupVolume->Value();
}

TBool DvProviderAvOpenhomeOrgGroupConfig1::SetPropertyGroupMute(TBool aValue)
{
    ASSERT(iPropertyGroupMute != NULL);
    return SetPropertyBool(*iPropertyGroupMute, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1::GetPropertyGroupMute(TBool& aValue)
{
    ASSERT(iPropertyGroupMute != NULL);
    aValue = iPropertyGroupMute->Value();
}

TBool DvProviderAvOpenhomeOrgGroupConfig1::SetPropertyGroupStatus(const Brx& aValue)
{
    ASSERT(iPropertyGroupStatus != NULL);
    return SetPropertyString(*iPropertyGroupStatus, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1::GetPropertyGroupStatus(Brhz& aValue)
{
    ASSERT(iPropertyGroupStatus != NULL);
    aValue.Set(iPropertyGroupStatus->Value());
}

DvProviderAvOpenhomeOrgGroupConfig1::DvProviderAvOpenhomeOrgGroupConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "GroupConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgGroupConfig1::DvProviderAvOpenhomeOrgGroupConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "GroupConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgGroupConfig1::Construct()
{
    iPropertyGroupMode = NULL;
    iPropertyGroupName = NULL;
    iPropertyGroupID = NULL;
    iPropertyGroupVolume = NULL;
    iPropertyGroupMute = NULL;
    iPropertyGroupStatus = NULL;
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnablePropertyGroupMode()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Master";
    allowedValues[index++] = (TChar*)"Slave";
    allowedValues[index++] = (TChar*)"None";
    iPropertyGroupMode = new PropertyString(new ParameterString("GroupMode", allowedValues, 3));
    delete[] allowedValues;
    iService->AddProperty(iPropertyGroupMode); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnablePropertyGroupName()
{
    iPropertyGroupName = new PropertyString(new ParameterString("GroupName"));
    iService->AddProperty(iPropertyGroupName); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnablePropertyGroupID()
{
    iPropertyGroupID = new PropertyString(new ParameterString("GroupID"));
    iService->AddProperty(iPropertyGroupID); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnablePropertyGroupVolume()
{
    iPropertyGroupVolume = new PropertyUint(new ParameterUint("GroupVolume"));
    iService->AddProperty(iPropertyGroupVolume); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnablePropertyGroupMute()
{
    iPropertyGroupMute = new PropertyBool(new ParameterBool("GroupMute"));
    iService->AddProperty(iPropertyGroupMute); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnablePropertyGroupStatus()
{
    iPropertyGroupStatus = new PropertyString(new ParameterString("GroupStatus"));
    iService->AddProperty(iPropertyGroupStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnableActionSetGroupMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupMode");
    action->AddInputParameter(new ParameterRelated("GroupMode", *iPropertyGroupMode));
    action->AddInputParameter(new ParameterRelated("GroupID", *iPropertyGroupID));
    action->AddInputParameter(new ParameterRelated("GroupName", *iPropertyGroupName));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1::DoSetGroupMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnableActionGetGroupMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupMode");
    action->AddOutputParameter(new ParameterRelated("GroupMode", *iPropertyGroupMode));
    action->AddOutputParameter(new ParameterRelated("GroupID", *iPropertyGroupID));
    action->AddOutputParameter(new ParameterRelated("GroupName", *iPropertyGroupName));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1::DoGetGroupMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnableActionSetGroupVolume()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupVolume");
    action->AddInputParameter(new ParameterRelated("GroupVolume", *iPropertyGroupVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1::DoSetGroupVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnableActionGetGroupVolume()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupVolume");
    action->AddOutputParameter(new ParameterRelated("GroupVolume", *iPropertyGroupVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1::DoGetGroupVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnableActionSetGroupMute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupMute");
    action->AddInputParameter(new ParameterRelated("GroupMute", *iPropertyGroupMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1::DoSetGroupMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnableActionGetGroupMute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupMute");
    action->AddOutputParameter(new ParameterRelated("GroupMute", *iPropertyGroupMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1::DoGetGroupMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnableActionGetGroupStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupStatus");
    action->AddOutputParameter(new ParameterRelated("GroupStatus", *iPropertyGroupStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1::DoGetGroupStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1::EnableActionSetGroupStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupStatus");
    action->AddInputParameter(new ParameterRelated("GroupStatus", *iPropertyGroupStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1::DoSetGroupStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1::DoSetGroupMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz GroupMode;
    aInvocation.InvocationReadString("GroupMode", GroupMode);
    Brhz GroupID;
    aInvocation.InvocationReadString("GroupID", GroupID);
    Brhz GroupName;
    aInvocation.InvocationReadString("GroupName", GroupName);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetGroupMode(invocation, GroupMode, GroupID, GroupName);
}

void DvProviderAvOpenhomeOrgGroupConfig1::DoGetGroupMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respGroupMode(aInvocation, "GroupMode");
    DviInvocationResponseString respGroupID(aInvocation, "GroupID");
    DviInvocationResponseString respGroupName(aInvocation, "GroupName");
    GetGroupMode(invocation, respGroupMode, respGroupID, respGroupName);
}

void DvProviderAvOpenhomeOrgGroupConfig1::DoSetGroupVolume(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint GroupVolume = aInvocation.InvocationReadUint("GroupVolume");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetGroupVolume(invocation, GroupVolume);
}

void DvProviderAvOpenhomeOrgGroupConfig1::DoGetGroupVolume(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respGroupVolume(aInvocation, "GroupVolume");
    GetGroupVolume(invocation, respGroupVolume);
}

void DvProviderAvOpenhomeOrgGroupConfig1::DoSetGroupMute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool GroupMute = aInvocation.InvocationReadBool("GroupMute");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetGroupMute(invocation, GroupMute);
}

void DvProviderAvOpenhomeOrgGroupConfig1::DoGetGroupMute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respGroupMute(aInvocation, "GroupMute");
    GetGroupMute(invocation, respGroupMute);
}

void DvProviderAvOpenhomeOrgGroupConfig1::DoGetGroupStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respGroupStatus(aInvocation, "GroupStatus");
    GetGroupStatus(invocation, respGroupStatus);
}

void DvProviderAvOpenhomeOrgGroupConfig1::DoSetGroupStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz GroupStatus;
    aInvocation.InvocationReadString("GroupStatus", GroupStatus);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetGroupStatus(invocation, GroupStatus);
}

void DvProviderAvOpenhomeOrgGroupConfig1::SetGroupMode(IDvInvocation& /*aResponse*/, const Brx& /*aGroupMode*/, const Brx& /*aGroupID*/, const Brx& /*aGroupName*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1::GetGroupMode(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aGroupMode*/, IDvInvocationResponseString& /*aGroupID*/, IDvInvocationResponseString& /*aGroupName*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1::SetGroupVolume(IDvInvocation& /*aResponse*/, TUint /*aGroupVolume*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1::GetGroupVolume(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aGroupVolume*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1::SetGroupMute(IDvInvocation& /*aResponse*/, TBool /*aGroupMute*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1::GetGroupMute(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aGroupMute*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1::GetGroupStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aGroupStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1::SetGroupStatus(IDvInvocation& /*aResponse*/, const Brx& /*aGroupStatus*/)
{
    ASSERTS();
}

