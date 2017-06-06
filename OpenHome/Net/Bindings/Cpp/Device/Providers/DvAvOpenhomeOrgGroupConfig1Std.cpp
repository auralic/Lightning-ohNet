#include "DvAvOpenhomeOrgGroupConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupMode(const std::string& aValue)
{
    ASSERT(iPropertyGroupMode != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyGroupMode, buf);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetPropertyGroupMode(std::string& aValue)
{
    ASSERT(iPropertyGroupMode != NULL);
    const Brx& val = iPropertyGroupMode->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupName(const std::string& aValue)
{
    ASSERT(iPropertyGroupName != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyGroupName, buf);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetPropertyGroupName(std::string& aValue)
{
    ASSERT(iPropertyGroupName != NULL);
    const Brx& val = iPropertyGroupName->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupID(const std::string& aValue)
{
    ASSERT(iPropertyGroupID != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyGroupID, buf);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetPropertyGroupID(std::string& aValue)
{
    ASSERT(iPropertyGroupID != NULL);
    const Brx& val = iPropertyGroupID->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupVolume(uint32_t aValue)
{
    ASSERT(iPropertyGroupVolume != NULL);
    return SetPropertyUint(*iPropertyGroupVolume, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetPropertyGroupVolume(uint32_t& aValue)
{
    ASSERT(iPropertyGroupVolume != NULL);
    aValue = iPropertyGroupVolume->Value();
}

bool DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupMute(bool aValue)
{
    ASSERT(iPropertyGroupMute != NULL);
    return SetPropertyBool(*iPropertyGroupMute, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetPropertyGroupMute(bool& aValue)
{
    ASSERT(iPropertyGroupMute != NULL);
    aValue = iPropertyGroupMute->Value();
}

bool DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupStatus(const std::string& aValue)
{
    ASSERT(iPropertyGroupStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyGroupStatus, buf);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetPropertyGroupStatus(std::string& aValue)
{
    ASSERT(iPropertyGroupStatus != NULL);
    const Brx& val = iPropertyGroupStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetPropertyBitPerfectMode(bool aValue)
{
    ASSERT(iPropertyBitPerfectMode != NULL);
    return SetPropertyBool(*iPropertyBitPerfectMode, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetPropertyBitPerfectMode(bool& aValue)
{
    ASSERT(iPropertyBitPerfectMode != NULL);
    aValue = iPropertyBitPerfectMode->Value();
}

DvProviderAvOpenhomeOrgGroupConfig1Cpp::DvProviderAvOpenhomeOrgGroupConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "GroupConfig", 1)
{
    iPropertyGroupMode = NULL;
    iPropertyGroupName = NULL;
    iPropertyGroupID = NULL;
    iPropertyGroupVolume = NULL;
    iPropertyGroupMute = NULL;
    iPropertyGroupStatus = NULL;
    iPropertyBitPerfectMode = NULL;
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnablePropertyGroupMode()
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

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnablePropertyGroupName()
{
    iPropertyGroupName = new PropertyString(new ParameterString("GroupName"));
    iService->AddProperty(iPropertyGroupName); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnablePropertyGroupID()
{
    iPropertyGroupID = new PropertyString(new ParameterString("GroupID"));
    iService->AddProperty(iPropertyGroupID); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnablePropertyGroupVolume()
{
    iPropertyGroupVolume = new PropertyUint(new ParameterUint("GroupVolume"));
    iService->AddProperty(iPropertyGroupVolume); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnablePropertyGroupMute()
{
    iPropertyGroupMute = new PropertyBool(new ParameterBool("GroupMute"));
    iService->AddProperty(iPropertyGroupMute); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnablePropertyGroupStatus()
{
    iPropertyGroupStatus = new PropertyString(new ParameterString("GroupStatus"));
    iService->AddProperty(iPropertyGroupStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnablePropertyBitPerfectMode()
{
    iPropertyBitPerfectMode = new PropertyBool(new ParameterBool("BitPerfectMode"));
    iService->AddProperty(iPropertyBitPerfectMode); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnableActionSetGroupMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupMode");
    action->AddInputParameter(new ParameterRelated("GroupMode", *iPropertyGroupMode));
    action->AddInputParameter(new ParameterRelated("GroupID", *iPropertyGroupID));
    action->AddInputParameter(new ParameterRelated("GroupName", *iPropertyGroupName));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoSetGroupMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnableActionGetGroupMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupMode");
    action->AddOutputParameter(new ParameterRelated("GroupMode", *iPropertyGroupMode));
    action->AddOutputParameter(new ParameterRelated("GroupID", *iPropertyGroupID));
    action->AddOutputParameter(new ParameterRelated("GroupName", *iPropertyGroupName));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoGetGroupMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnableActionSetGroupVolume()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupVolume");
    action->AddInputParameter(new ParameterRelated("GroupVolume", *iPropertyGroupVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoSetGroupVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnableActionGetGroupVolume()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupVolume");
    action->AddOutputParameter(new ParameterRelated("GroupVolume", *iPropertyGroupVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoGetGroupVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnableActionSetGroupMute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupMute");
    action->AddInputParameter(new ParameterRelated("GroupMute", *iPropertyGroupMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoSetGroupMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnableActionGetGroupMute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupMute");
    action->AddOutputParameter(new ParameterRelated("GroupMute", *iPropertyGroupMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoGetGroupMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnableActionGetGroupStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupStatus");
    action->AddOutputParameter(new ParameterRelated("GroupStatus", *iPropertyGroupStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoGetGroupStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnableActionSetGroupStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupStatus");
    action->AddInputParameter(new ParameterRelated("GroupStatus", *iPropertyGroupStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoSetGroupStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnableActionGetBitPerfectMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetBitPerfectMode");
    action->AddOutputParameter(new ParameterRelated("BitPerfectMode", *iPropertyBitPerfectMode));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoGetBitPerfectMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::EnableActionSetBitPerfectMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetBitPerfectMode");
    action->AddInputParameter(new ParameterRelated("BitPerfectMode", *iPropertyBitPerfectMode));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoSetBitPerfectMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoSetGroupMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_GroupMode;
    aInvocation.InvocationReadString("GroupMode", buf_GroupMode);
    std::string GroupMode((const char*)buf_GroupMode.Ptr(), buf_GroupMode.Bytes());
    Brhz buf_GroupID;
    aInvocation.InvocationReadString("GroupID", buf_GroupID);
    std::string GroupID((const char*)buf_GroupID.Ptr(), buf_GroupID.Bytes());
    Brhz buf_GroupName;
    aInvocation.InvocationReadString("GroupName", buf_GroupName);
    std::string GroupName((const char*)buf_GroupName.Ptr(), buf_GroupName.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetGroupMode(invocation, GroupMode, GroupID, GroupName);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoGetGroupMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respGroupMode;
    std::string respGroupID;
    std::string respGroupName;
    DvInvocationStd invocation(aInvocation);
    GetGroupMode(invocation, respGroupMode, respGroupID, respGroupName);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterGroupMode(aInvocation, "GroupMode");
    Brn buf_GroupMode((const TByte*)respGroupMode.c_str(), (TUint)respGroupMode.length());
    respWriterGroupMode.Write(buf_GroupMode);
    aInvocation.InvocationWriteStringEnd("GroupMode");
    DviInvocationResponseString respWriterGroupID(aInvocation, "GroupID");
    Brn buf_GroupID((const TByte*)respGroupID.c_str(), (TUint)respGroupID.length());
    respWriterGroupID.Write(buf_GroupID);
    aInvocation.InvocationWriteStringEnd("GroupID");
    DviInvocationResponseString respWriterGroupName(aInvocation, "GroupName");
    Brn buf_GroupName((const TByte*)respGroupName.c_str(), (TUint)respGroupName.length());
    respWriterGroupName.Write(buf_GroupName);
    aInvocation.InvocationWriteStringEnd("GroupName");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoSetGroupVolume(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t GroupVolume = aInvocation.InvocationReadUint("GroupVolume");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetGroupVolume(invocation, GroupVolume);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoGetGroupVolume(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respGroupVolume;
    DvInvocationStd invocation(aInvocation);
    GetGroupVolume(invocation, respGroupVolume);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterGroupVolume(aInvocation, "GroupVolume");
    respWriterGroupVolume.Write(respGroupVolume);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoSetGroupMute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    bool GroupMute = aInvocation.InvocationReadBool("GroupMute");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetGroupMute(invocation, GroupMute);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoGetGroupMute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respGroupMute;
    DvInvocationStd invocation(aInvocation);
    GetGroupMute(invocation, respGroupMute);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterGroupMute(aInvocation, "GroupMute");
    respWriterGroupMute.Write(respGroupMute);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoGetGroupStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respGroupStatus;
    DvInvocationStd invocation(aInvocation);
    GetGroupStatus(invocation, respGroupStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterGroupStatus(aInvocation, "GroupStatus");
    Brn buf_GroupStatus((const TByte*)respGroupStatus.c_str(), (TUint)respGroupStatus.length());
    respWriterGroupStatus.Write(buf_GroupStatus);
    aInvocation.InvocationWriteStringEnd("GroupStatus");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoSetGroupStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_GroupStatus;
    aInvocation.InvocationReadString("GroupStatus", buf_GroupStatus);
    std::string GroupStatus((const char*)buf_GroupStatus.Ptr(), buf_GroupStatus.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetGroupStatus(invocation, GroupStatus);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoGetBitPerfectMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respBitPerfectMode;
    DvInvocationStd invocation(aInvocation);
    GetBitPerfectMode(invocation, respBitPerfectMode);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterBitPerfectMode(aInvocation, "BitPerfectMode");
    respWriterBitPerfectMode.Write(respBitPerfectMode);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::DoSetBitPerfectMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    bool BitPerfectMode = aInvocation.InvocationReadBool("BitPerfectMode");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetBitPerfectMode(invocation, BitPerfectMode);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetGroupMode(IDvInvocationStd& /*aInvocation*/, const std::string& /*aGroupMode*/, const std::string& /*aGroupID*/, const std::string& /*aGroupName*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetGroupMode(IDvInvocationStd& /*aInvocation*/, std::string& /*aGroupMode*/, std::string& /*aGroupID*/, std::string& /*aGroupName*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetGroupVolume(IDvInvocationStd& /*aInvocation*/, uint32_t /*aGroupVolume*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetGroupVolume(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aGroupVolume*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetGroupMute(IDvInvocationStd& /*aInvocation*/, bool /*aGroupMute*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetGroupMute(IDvInvocationStd& /*aInvocation*/, bool& /*aGroupMute*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetGroupStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aGroupStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetGroupStatus(IDvInvocationStd& /*aInvocation*/, const std::string& /*aGroupStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::GetBitPerfectMode(IDvInvocationStd& /*aInvocation*/, bool& /*aBitPerfectMode*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgGroupConfig1Cpp::SetBitPerfectMode(IDvInvocationStd& /*aInvocation*/, bool /*aBitPerfectMode*/)
{
    ASSERTS();
}

