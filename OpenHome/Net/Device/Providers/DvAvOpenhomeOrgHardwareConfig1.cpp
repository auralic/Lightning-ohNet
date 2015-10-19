#include "DvAvOpenhomeOrgHardwareConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyRestart(TBool aValue)
{
    ASSERT(iPropertyRestart != NULL);
    return SetPropertyBool(*iPropertyRestart, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyRestart(TBool& aValue)
{
    ASSERT(iPropertyRestart != NULL);
    aValue = iPropertyRestart->Value();
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyNumber(TUint aValue)
{
    ASSERT(iPropertyNumber != NULL);
    return SetPropertyUint(*iPropertyNumber, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyNumber(TUint& aValue)
{
    ASSERT(iPropertyNumber != NULL);
    aValue = iPropertyNumber->Value();
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyRoomName(const Brx& aValue)
{
    ASSERT(iPropertyRoomName != NULL);
    return SetPropertyString(*iPropertyRoomName, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyRoomName(Brhz& aValue)
{
    ASSERT(iPropertyRoomName != NULL);
    aValue.Set(iPropertyRoomName->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyInterFace(const Brx& aValue)
{
    ASSERT(iPropertyInterFace != NULL);
    return SetPropertyString(*iPropertyInterFace, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyInterFace(Brhz& aValue)
{
    ASSERT(iPropertyInterFace != NULL);
    aValue.Set(iPropertyInterFace->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyNetMask(const Brx& aValue)
{
    ASSERT(iPropertyNetMask != NULL);
    return SetPropertyString(*iPropertyNetMask, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyNetMask(Brhz& aValue)
{
    ASSERT(iPropertyNetMask != NULL);
    aValue.Set(iPropertyNetMask->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyGateWay(const Brx& aValue)
{
    ASSERT(iPropertyGateWay != NULL);
    return SetPropertyString(*iPropertyGateWay, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyGateWay(Brhz& aValue)
{
    ASSERT(iPropertyGateWay != NULL);
    aValue.Set(iPropertyGateWay->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyDNS(const Brx& aValue)
{
    ASSERT(iPropertyDNS != NULL);
    return SetPropertyString(*iPropertyDNS, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyDNS(Brhz& aValue)
{
    ASSERT(iPropertyDNS != NULL);
    aValue.Set(iPropertyDNS->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyDHCP(const Brx& aValue)
{
    ASSERT(iPropertyDHCP != NULL);
    return SetPropertyString(*iPropertyDHCP, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyDHCP(Brhz& aValue)
{
    ASSERT(iPropertyDHCP != NULL);
    aValue.Set(iPropertyDHCP->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertySsid(const Brx& aValue)
{
    ASSERT(iPropertySsid != NULL);
    return SetPropertyString(*iPropertySsid, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertySsid(Brhz& aValue)
{
    ASSERT(iPropertySsid != NULL);
    aValue.Set(iPropertySsid->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyPassWord(const Brx& aValue)
{
    ASSERT(iPropertyPassWord != NULL);
    return SetPropertyString(*iPropertyPassWord, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyPassWord(Brhz& aValue)
{
    ASSERT(iPropertyPassWord != NULL);
    aValue.Set(iPropertyPassWord->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyEncrypType(const Brx& aValue)
{
    ASSERT(iPropertyEncrypType != NULL);
    return SetPropertyString(*iPropertyEncrypType, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyEncrypType(Brhz& aValue)
{
    ASSERT(iPropertyEncrypType != NULL);
    aValue.Set(iPropertyEncrypType->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyChannel(const Brx& aValue)
{
    ASSERT(iPropertyChannel != NULL);
    return SetPropertyString(*iPropertyChannel, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyChannel(Brhz& aValue)
{
    ASSERT(iPropertyChannel != NULL);
    aValue.Set(iPropertyChannel->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyUpnpType(const Brx& aValue)
{
    ASSERT(iPropertyUpnpType != NULL);
    return SetPropertyString(*iPropertyUpnpType, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyUpnpType(Brhz& aValue)
{
    ASSERT(iPropertyUpnpType != NULL);
    aValue.Set(iPropertyUpnpType->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyStatus(const Brx& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    return SetPropertyString(*iPropertyStatus, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyStatus(Brhz& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    aValue.Set(iPropertyStatus->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertySampleFormat(const Brx& aValue)
{
    ASSERT(iPropertySampleFormat != NULL);
    return SetPropertyString(*iPropertySampleFormat, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertySampleFormat(Brhz& aValue)
{
    ASSERT(iPropertySampleFormat != NULL);
    aValue.Set(iPropertySampleFormat->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyIpAddress(const Brx& aValue)
{
    ASSERT(iPropertyIpAddress != NULL);
    return SetPropertyString(*iPropertyIpAddress, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyIpAddress(Brhz& aValue)
{
    ASSERT(iPropertyIpAddress != NULL);
    aValue.Set(iPropertyIpAddress->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyProtect(const Brx& aValue)
{
    ASSERT(iPropertyProtect != NULL);
    return SetPropertyString(*iPropertyProtect, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyProtect(Brhz& aValue)
{
    ASSERT(iPropertyProtect != NULL);
    aValue.Set(iPropertyProtect->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyProtectPassword(const Brx& aValue)
{
    ASSERT(iPropertyProtectPassword != NULL);
    return SetPropertyString(*iPropertyProtectPassword, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyProtectPassword(Brhz& aValue)
{
    ASSERT(iPropertyProtectPassword != NULL);
    aValue.Set(iPropertyProtectPassword->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyActiveStatus(const Brx& aValue)
{
    ASSERT(iPropertyActiveStatus != NULL);
    return SetPropertyString(*iPropertyActiveStatus, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyActiveStatus(Brhz& aValue)
{
    ASSERT(iPropertyActiveStatus != NULL);
    aValue.Set(iPropertyActiveStatus->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyTime(const Brx& aValue)
{
    ASSERT(iPropertyTime != NULL);
    return SetPropertyString(*iPropertyTime, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyTime(Brhz& aValue)
{
    ASSERT(iPropertyTime != NULL);
    aValue.Set(iPropertyTime->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1::SetPropertyVolumeControl(TBool aValue)
{
    ASSERT(iPropertyVolumeControl != NULL);
    return SetPropertyBool(*iPropertyVolumeControl, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPropertyVolumeControl(TBool& aValue)
{
    ASSERT(iPropertyVolumeControl != NULL);
    aValue = iPropertyVolumeControl->Value();
}

DvProviderAvOpenhomeOrgHardwareConfig1::DvProviderAvOpenhomeOrgHardwareConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "HardwareConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgHardwareConfig1::DvProviderAvOpenhomeOrgHardwareConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "HardwareConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::Construct()
{
    iPropertyAlive = NULL;
    iPropertyCurrentAction = NULL;
    iPropertyRestart = NULL;
    iPropertyNumber = NULL;
    iPropertyRoomName = NULL;
    iPropertyInterFace = NULL;
    iPropertyNetMask = NULL;
    iPropertyGateWay = NULL;
    iPropertyDNS = NULL;
    iPropertyDHCP = NULL;
    iPropertySsid = NULL;
    iPropertyPassWord = NULL;
    iPropertyEncrypType = NULL;
    iPropertyChannel = NULL;
    iPropertyUpnpType = NULL;
    iPropertyStatus = NULL;
    iPropertySampleFormat = NULL;
    iPropertyIpAddress = NULL;
    iPropertyProtect = NULL;
    iPropertyProtectPassword = NULL;
    iPropertyActiveStatus = NULL;
    iPropertyTime = NULL;
    iPropertyVolumeControl = NULL;
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyRestart()
{
    iPropertyRestart = new PropertyBool(new ParameterBool("Restart"));
    iService->AddProperty(iPropertyRestart); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyNumber()
{
    iPropertyNumber = new PropertyUint(new ParameterUint("Number"));
    iService->AddProperty(iPropertyNumber); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyRoomName()
{
    iPropertyRoomName = new PropertyString(new ParameterString("RoomName"));
    iService->AddProperty(iPropertyRoomName); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyInterFace()
{
    iPropertyInterFace = new PropertyString(new ParameterString("InterFace"));
    iService->AddProperty(iPropertyInterFace); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyNetMask()
{
    iPropertyNetMask = new PropertyString(new ParameterString("NetMask"));
    iService->AddProperty(iPropertyNetMask); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyGateWay()
{
    iPropertyGateWay = new PropertyString(new ParameterString("GateWay"));
    iService->AddProperty(iPropertyGateWay); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyDNS()
{
    iPropertyDNS = new PropertyString(new ParameterString("DNS"));
    iService->AddProperty(iPropertyDNS); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyDHCP()
{
    iPropertyDHCP = new PropertyString(new ParameterString("DHCP"));
    iService->AddProperty(iPropertyDHCP); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertySsid()
{
    iPropertySsid = new PropertyString(new ParameterString("Ssid"));
    iService->AddProperty(iPropertySsid); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyPassWord()
{
    iPropertyPassWord = new PropertyString(new ParameterString("PassWord"));
    iService->AddProperty(iPropertyPassWord); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyEncrypType()
{
    iPropertyEncrypType = new PropertyString(new ParameterString("EncrypType"));
    iService->AddProperty(iPropertyEncrypType); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyChannel()
{
    iPropertyChannel = new PropertyString(new ParameterString("Channel"));
    iService->AddProperty(iPropertyChannel); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyUpnpType()
{
    iPropertyUpnpType = new PropertyString(new ParameterString("UpnpType"));
    iService->AddProperty(iPropertyUpnpType); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyStatus()
{
    iPropertyStatus = new PropertyString(new ParameterString("Status"));
    iService->AddProperty(iPropertyStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertySampleFormat()
{
    iPropertySampleFormat = new PropertyString(new ParameterString("SampleFormat"));
    iService->AddProperty(iPropertySampleFormat); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyIpAddress()
{
    iPropertyIpAddress = new PropertyString(new ParameterString("IpAddress"));
    iService->AddProperty(iPropertyIpAddress); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyProtect()
{
    iPropertyProtect = new PropertyString(new ParameterString("Protect"));
    iService->AddProperty(iPropertyProtect); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyProtectPassword()
{
    iPropertyProtectPassword = new PropertyString(new ParameterString("ProtectPassword"));
    iService->AddProperty(iPropertyProtectPassword); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyActiveStatus()
{
    iPropertyActiveStatus = new PropertyString(new ParameterString("ActiveStatus"));
    iService->AddProperty(iPropertyActiveStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyTime()
{
    iPropertyTime = new PropertyString(new ParameterString("Time"));
    iService->AddProperty(iPropertyTime); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnablePropertyVolumeControl()
{
    iPropertyVolumeControl = new PropertyBool(new ParameterBool("VolumeControl"));
    iService->AddProperty(iPropertyVolumeControl); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionIsAlive()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IsAlive");
    action->AddOutputParameter(new ParameterRelated("Alive", *iPropertyAlive));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoIsAlive);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Update");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoUpdate);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionActive()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Active");
    action->AddInputParameter(new ParameterBool("IsSubscribe"));
    action->AddInputParameter(new ParameterString("RealName"));
    action->AddInputParameter(new ParameterString("Email"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoActive);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetActiveStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetActiveStatus");
    action->AddOutputParameter(new ParameterRelated("ActiveStatus", *iPropertyActiveStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetActiveStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionCheckUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckUpdate");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoCheckUpdate);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionResetDisplay()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ResetDisplay");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoResetDisplay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetHardWareInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHardWareInfo");
    action->AddOutputParameter(new ParameterString("HardWareInfo"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetHardWareInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionSetRoomName()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRoomName");
    action->AddInputParameter(new ParameterRelated("RoomName", *iPropertyRoomName));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoSetRoomName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetVolumeControl()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetVolumeControl");
    action->AddOutputParameter(new ParameterRelated("VolumeControl", *iPropertyVolumeControl));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetVolumeControl);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionSetVolumeControl()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolumeControl");
    action->AddInputParameter(new ParameterRelated("VolumeControl", *iPropertyVolumeControl));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoSetVolumeControl);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetWaitingTime()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWaitingTime");
    action->AddOutputParameter(new ParameterRelated("WaitingTime", *iPropertyTime));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionSetWaitingTime()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetWaitingTime");
    action->AddInputParameter(new ParameterRelated("WaitingTime", *iPropertyTime));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoSetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetOutChannel()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetOutChannel");
    action->AddOutputParameter(new ParameterRelated("ChannelNum", *iPropertyNumber));
    action->AddOutputParameter(new ParameterRelated("CurrentChannel", *iPropertyChannel));
    action->AddOutputParameter(new ParameterRelated("OutChannel", *iPropertyChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetOutChannel);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionSetOutChannel()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetOutChannel");
    action->AddInputParameter(new ParameterRelated("Channel", *iPropertyChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoSetOutChannel);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionSetUpnpType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetUpnpType");
    action->AddInputParameter(new ParameterRelated("UpnpType", *iPropertyUpnpType));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoSetUpnpType);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetUpnpType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpnpType");
    action->AddOutputParameter(new ParameterRelated("UpnpType", *iPropertyUpnpType));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetUpnpType);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionSetDsdNativeStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDsdNativeStatus");
    action->AddInputParameter(new ParameterRelated("Status", *iPropertyStatus));
    action->AddInputParameter(new ParameterRelated("SampleFormat", *iPropertySampleFormat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoSetDsdNativeStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetDsdNativeStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDsdNativeStatus");
    action->AddOutputParameter(new ParameterRelated("Status", *iPropertyStatus));
    action->AddOutputParameter(new ParameterRelated("SampleFormat", *iPropertySampleFormat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetDsdNativeStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionSetPasswordProtect()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPasswordProtect");
    action->AddInputParameter(new ParameterRelated("Protect", *iPropertyProtect));
    action->AddInputParameter(new ParameterRelated("ProtectPassword", *iPropertyProtectPassword));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoSetPasswordProtect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetPasswordProtect()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPasswordProtect");
    action->AddOutputParameter(new ParameterRelated("Protect", *iPropertyProtect));
    action->AddOutputParameter(new ParameterRelated("ProtectPassword", *iPropertyProtectPassword));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetPasswordProtect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetUpdateInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateInfo");
    action->AddOutputParameter(new ParameterString("Version"));
    action->AddOutputParameter(new ParameterString("Progress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetUpdateInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetWirelessList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWirelessList");
    action->AddInputParameter(new ParameterRelated("InterFace", *iPropertyInterFace));
    action->AddOutputParameter(new ParameterRelated("Number", *iPropertyNumber));
    action->AddOutputParameter(new ParameterRelated("CurrentUse", *iPropertySsid));
    action->AddOutputParameter(new ParameterRelated("WirelessList", *iPropertySsid));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetWirelessList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetIpAddress()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIpAddress");
    action->AddInputParameter(new ParameterRelated("InterFace", *iPropertyInterFace));
    action->AddOutputParameter(new ParameterRelated("IpAddress", *iPropertyIpAddress));
    action->AddOutputParameter(new ParameterRelated("NetMask", *iPropertyNetMask));
    action->AddOutputParameter(new ParameterRelated("GateWay", *iPropertyGateWay));
    action->AddOutputParameter(new ParameterRelated("DNS", *iPropertyDNS));
    action->AddOutputParameter(new ParameterRelated("DHCP", *iPropertyDHCP));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetIpAddress);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionSetNetWork()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetNetWork");
    action->AddInputParameter(new ParameterRelated("InterFace", *iPropertyInterFace));
    action->AddInputParameter(new ParameterRelated("IpAddress", *iPropertyIpAddress));
    action->AddInputParameter(new ParameterRelated("NetMask", *iPropertyNetMask));
    action->AddInputParameter(new ParameterRelated("GateWay", *iPropertyGateWay));
    action->AddInputParameter(new ParameterRelated("DNS", *iPropertyDNS));
    action->AddInputParameter(new ParameterRelated("Ssid", *iPropertySsid));
    action->AddInputParameter(new ParameterRelated("PassWord", *iPropertyPassWord));
    action->AddInputParameter(new ParameterRelated("EncrypType", *iPropertyEncrypType));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoSetNetWork);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetNetInterface()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetNetInterface");
    action->AddOutputParameter(new ParameterRelated("InterfaceNum", *iPropertyNumber));
    action->AddOutputParameter(new ParameterRelated("CurrentUse", *iPropertyInterFace));
    action->AddOutputParameter(new ParameterRelated("InterfaceList", *iPropertyInterFace));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetNetInterface);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetHaltStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHaltStatus");
    action->AddOutputParameter(new ParameterBool("HaltStatus"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetHaltStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionSetHaltStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetHaltStatus");
    action->AddInputParameter(new ParameterBool("HaltStatus"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoSetHaltStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionGetFilterMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetFilterMode");
    action->AddOutputParameter(new ParameterString("FilterMode"));
    action->AddOutputParameter(new ParameterString("FilterModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoGetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::EnableActionSetFilterMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFilterMode");
    action->AddInputParameter(new ParameterString("FilterMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1::DoSetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoIsAlive(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respAlive(aInvocation, "Alive");
    IsAlive(invocation, respAlive);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Update(invocation);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoActive(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool IsSubscribe = aInvocation.InvocationReadBool("IsSubscribe");
    Brhz RealName;
    aInvocation.InvocationReadString("RealName", RealName);
    Brhz Email;
    aInvocation.InvocationReadString("Email", Email);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Active(invocation, IsSubscribe, RealName, Email);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetActiveStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respActiveStatus(aInvocation, "ActiveStatus");
    GetActiveStatus(invocation, respActiveStatus);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoCheckUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    CheckUpdate(invocation);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoResetDisplay(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ResetDisplay(invocation);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetHardWareInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respHardWareInfo(aInvocation, "HardWareInfo");
    GetHardWareInfo(invocation, respHardWareInfo);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoSetRoomName(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz RoomName;
    aInvocation.InvocationReadString("RoomName", RoomName);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetRoomName(invocation, RoomName);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetVolumeControl(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respVolumeControl(aInvocation, "VolumeControl");
    GetVolumeControl(invocation, respVolumeControl);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoSetVolumeControl(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool VolumeControl = aInvocation.InvocationReadBool("VolumeControl");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetVolumeControl(invocation, VolumeControl);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetWaitingTime(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respWaitingTime(aInvocation, "WaitingTime");
    GetWaitingTime(invocation, respWaitingTime);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoSetWaitingTime(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz WaitingTime;
    aInvocation.InvocationReadString("WaitingTime", WaitingTime);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetWaitingTime(invocation, WaitingTime);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetOutChannel(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respChannelNum(aInvocation, "ChannelNum");
    DviInvocationResponseString respCurrentChannel(aInvocation, "CurrentChannel");
    DviInvocationResponseString respOutChannel(aInvocation, "OutChannel");
    GetOutChannel(invocation, respChannelNum, respCurrentChannel, respOutChannel);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoSetOutChannel(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetOutChannel(invocation, Channel);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoSetUpnpType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz UpnpType;
    aInvocation.InvocationReadString("UpnpType", UpnpType);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetUpnpType(invocation, UpnpType);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetUpnpType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respUpnpType(aInvocation, "UpnpType");
    GetUpnpType(invocation, respUpnpType);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoSetDsdNativeStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Status;
    aInvocation.InvocationReadString("Status", Status);
    Brhz SampleFormat;
    aInvocation.InvocationReadString("SampleFormat", SampleFormat);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetDsdNativeStatus(invocation, Status, SampleFormat);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetDsdNativeStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respStatus(aInvocation, "Status");
    DviInvocationResponseString respSampleFormat(aInvocation, "SampleFormat");
    GetDsdNativeStatus(invocation, respStatus, respSampleFormat);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoSetPasswordProtect(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Protect;
    aInvocation.InvocationReadString("Protect", Protect);
    Brhz ProtectPassword;
    aInvocation.InvocationReadString("ProtectPassword", ProtectPassword);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetPasswordProtect(invocation, Protect, ProtectPassword);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetPasswordProtect(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respProtect(aInvocation, "Protect");
    DviInvocationResponseString respProtectPassword(aInvocation, "ProtectPassword");
    GetPasswordProtect(invocation, respProtect, respProtectPassword);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetUpdateInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respVersion(aInvocation, "Version");
    DviInvocationResponseString respProgress(aInvocation, "Progress");
    GetUpdateInfo(invocation, respVersion, respProgress);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetWirelessList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz InterFace;
    aInvocation.InvocationReadString("InterFace", InterFace);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respNumber(aInvocation, "Number");
    DviInvocationResponseString respCurrentUse(aInvocation, "CurrentUse");
    DviInvocationResponseString respWirelessList(aInvocation, "WirelessList");
    GetWirelessList(invocation, InterFace, respNumber, respCurrentUse, respWirelessList);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetIpAddress(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz InterFace;
    aInvocation.InvocationReadString("InterFace", InterFace);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respIpAddress(aInvocation, "IpAddress");
    DviInvocationResponseString respNetMask(aInvocation, "NetMask");
    DviInvocationResponseString respGateWay(aInvocation, "GateWay");
    DviInvocationResponseString respDNS(aInvocation, "DNS");
    DviInvocationResponseString respDHCP(aInvocation, "DHCP");
    GetIpAddress(invocation, InterFace, respIpAddress, respNetMask, respGateWay, respDNS, respDHCP);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoSetNetWork(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz InterFace;
    aInvocation.InvocationReadString("InterFace", InterFace);
    Brhz IpAddress;
    aInvocation.InvocationReadString("IpAddress", IpAddress);
    Brhz NetMask;
    aInvocation.InvocationReadString("NetMask", NetMask);
    Brhz GateWay;
    aInvocation.InvocationReadString("GateWay", GateWay);
    Brhz DNS;
    aInvocation.InvocationReadString("DNS", DNS);
    Brhz Ssid;
    aInvocation.InvocationReadString("Ssid", Ssid);
    Brhz PassWord;
    aInvocation.InvocationReadString("PassWord", PassWord);
    Brhz EncrypType;
    aInvocation.InvocationReadString("EncrypType", EncrypType);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetNetWork(invocation, InterFace, IpAddress, NetMask, GateWay, DNS, Ssid, PassWord, EncrypType);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetNetInterface(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respInterfaceNum(aInvocation, "InterfaceNum");
    DviInvocationResponseString respCurrentUse(aInvocation, "CurrentUse");
    DviInvocationResponseString respInterfaceList(aInvocation, "InterfaceList");
    GetNetInterface(invocation, respInterfaceNum, respCurrentUse, respInterfaceList);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetHaltStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respHaltStatus(aInvocation, "HaltStatus");
    GetHaltStatus(invocation, respHaltStatus);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoSetHaltStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool HaltStatus = aInvocation.InvocationReadBool("HaltStatus");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetHaltStatus(invocation, HaltStatus);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoGetFilterMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respFilterMode(aInvocation, "FilterMode");
    DviInvocationResponseString respFilterModeList(aInvocation, "FilterModeList");
    GetFilterMode(invocation, respFilterMode, respFilterModeList);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::DoSetFilterMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz FilterMode;
    aInvocation.InvocationReadString("FilterMode", FilterMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetFilterMode(invocation, FilterMode);
}

void DvProviderAvOpenhomeOrgHardwareConfig1::IsAlive(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aAlive*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::Update(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::Active(IDvInvocation& /*aResponse*/, TBool /*aIsSubscribe*/, const Brx& /*aRealName*/, const Brx& /*aEmail*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetActiveStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aActiveStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::CheckUpdate(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::ResetDisplay(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetHardWareInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aHardWareInfo*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::SetRoomName(IDvInvocation& /*aResponse*/, const Brx& /*aRoomName*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetVolumeControl(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aVolumeControl*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::SetVolumeControl(IDvInvocation& /*aResponse*/, TBool /*aVolumeControl*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetWaitingTime(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aWaitingTime*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::SetWaitingTime(IDvInvocation& /*aResponse*/, const Brx& /*aWaitingTime*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetOutChannel(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aChannelNum*/, IDvInvocationResponseString& /*aCurrentChannel*/, IDvInvocationResponseString& /*aOutChannel*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::SetOutChannel(IDvInvocation& /*aResponse*/, const Brx& /*aChannel*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::SetUpnpType(IDvInvocation& /*aResponse*/, const Brx& /*aUpnpType*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetUpnpType(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aUpnpType*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::SetDsdNativeStatus(IDvInvocation& /*aResponse*/, const Brx& /*aStatus*/, const Brx& /*aSampleFormat*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetDsdNativeStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aStatus*/, IDvInvocationResponseString& /*aSampleFormat*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::SetPasswordProtect(IDvInvocation& /*aResponse*/, const Brx& /*aProtect*/, const Brx& /*aProtectPassword*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetPasswordProtect(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aProtect*/, IDvInvocationResponseString& /*aProtectPassword*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetUpdateInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aVersion*/, IDvInvocationResponseString& /*aProgress*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetWirelessList(IDvInvocation& /*aResponse*/, const Brx& /*aInterFace*/, IDvInvocationResponseUint& /*aNumber*/, IDvInvocationResponseString& /*aCurrentUse*/, IDvInvocationResponseString& /*aWirelessList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetIpAddress(IDvInvocation& /*aResponse*/, const Brx& /*aInterFace*/, IDvInvocationResponseString& /*aIpAddress*/, IDvInvocationResponseString& /*aNetMask*/, IDvInvocationResponseString& /*aGateWay*/, IDvInvocationResponseString& /*aDNS*/, IDvInvocationResponseString& /*aDHCP*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::SetNetWork(IDvInvocation& /*aResponse*/, const Brx& /*aInterFace*/, const Brx& /*aIpAddress*/, const Brx& /*aNetMask*/, const Brx& /*aGateWay*/, const Brx& /*aDNS*/, const Brx& /*aSsid*/, const Brx& /*aPassWord*/, const Brx& /*aEncrypType*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetNetInterface(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aInterfaceNum*/, IDvInvocationResponseString& /*aCurrentUse*/, IDvInvocationResponseString& /*aInterfaceList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetHaltStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aHaltStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::SetHaltStatus(IDvInvocation& /*aResponse*/, TBool /*aHaltStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::GetFilterMode(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aFilterMode*/, IDvInvocationResponseString& /*aFilterModeList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1::SetFilterMode(IDvInvocation& /*aResponse*/, const Brx& /*aFilterMode*/)
{
    ASSERTS();
}

