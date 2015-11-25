#include "DvAvOpenhomeOrgHardwareConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyAlive(bool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyAlive(bool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyCurrentAction(uint32_t aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyCurrentAction(uint32_t& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyRestart(bool aValue)
{
    ASSERT(iPropertyRestart != NULL);
    return SetPropertyBool(*iPropertyRestart, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyRestart(bool& aValue)
{
    ASSERT(iPropertyRestart != NULL);
    aValue = iPropertyRestart->Value();
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyNumber(uint32_t aValue)
{
    ASSERT(iPropertyNumber != NULL);
    return SetPropertyUint(*iPropertyNumber, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyNumber(uint32_t& aValue)
{
    ASSERT(iPropertyNumber != NULL);
    aValue = iPropertyNumber->Value();
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyRoomName(const std::string& aValue)
{
    ASSERT(iPropertyRoomName != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyRoomName, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyRoomName(std::string& aValue)
{
    ASSERT(iPropertyRoomName != NULL);
    const Brx& val = iPropertyRoomName->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyInterFace(const std::string& aValue)
{
    ASSERT(iPropertyInterFace != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyInterFace, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyInterFace(std::string& aValue)
{
    ASSERT(iPropertyInterFace != NULL);
    const Brx& val = iPropertyInterFace->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyNetMask(const std::string& aValue)
{
    ASSERT(iPropertyNetMask != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyNetMask, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyNetMask(std::string& aValue)
{
    ASSERT(iPropertyNetMask != NULL);
    const Brx& val = iPropertyNetMask->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyGateWay(const std::string& aValue)
{
    ASSERT(iPropertyGateWay != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyGateWay, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyGateWay(std::string& aValue)
{
    ASSERT(iPropertyGateWay != NULL);
    const Brx& val = iPropertyGateWay->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyDNS(const std::string& aValue)
{
    ASSERT(iPropertyDNS != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyDNS, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyDNS(std::string& aValue)
{
    ASSERT(iPropertyDNS != NULL);
    const Brx& val = iPropertyDNS->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyDHCP(const std::string& aValue)
{
    ASSERT(iPropertyDHCP != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyDHCP, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyDHCP(std::string& aValue)
{
    ASSERT(iPropertyDHCP != NULL);
    const Brx& val = iPropertyDHCP->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertySsid(const std::string& aValue)
{
    ASSERT(iPropertySsid != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertySsid, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertySsid(std::string& aValue)
{
    ASSERT(iPropertySsid != NULL);
    const Brx& val = iPropertySsid->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyPassWord(const std::string& aValue)
{
    ASSERT(iPropertyPassWord != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyPassWord, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyPassWord(std::string& aValue)
{
    ASSERT(iPropertyPassWord != NULL);
    const Brx& val = iPropertyPassWord->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyEncrypType(const std::string& aValue)
{
    ASSERT(iPropertyEncrypType != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyEncrypType, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyEncrypType(std::string& aValue)
{
    ASSERT(iPropertyEncrypType != NULL);
    const Brx& val = iPropertyEncrypType->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyChannel(const std::string& aValue)
{
    ASSERT(iPropertyChannel != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyChannel, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyChannel(std::string& aValue)
{
    ASSERT(iPropertyChannel != NULL);
    const Brx& val = iPropertyChannel->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyUpnpType(const std::string& aValue)
{
    ASSERT(iPropertyUpnpType != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyUpnpType, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyUpnpType(std::string& aValue)
{
    ASSERT(iPropertyUpnpType != NULL);
    const Brx& val = iPropertyUpnpType->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyStatus(const std::string& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyStatus, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyStatus(std::string& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    const Brx& val = iPropertyStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertySampleFormat(const std::string& aValue)
{
    ASSERT(iPropertySampleFormat != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertySampleFormat, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertySampleFormat(std::string& aValue)
{
    ASSERT(iPropertySampleFormat != NULL);
    const Brx& val = iPropertySampleFormat->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyIpAddress(const std::string& aValue)
{
    ASSERT(iPropertyIpAddress != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyIpAddress, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyIpAddress(std::string& aValue)
{
    ASSERT(iPropertyIpAddress != NULL);
    const Brx& val = iPropertyIpAddress->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyProtect(const std::string& aValue)
{
    ASSERT(iPropertyProtect != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyProtect, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyProtect(std::string& aValue)
{
    ASSERT(iPropertyProtect != NULL);
    const Brx& val = iPropertyProtect->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyProtectPassword(const std::string& aValue)
{
    ASSERT(iPropertyProtectPassword != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyProtectPassword, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyProtectPassword(std::string& aValue)
{
    ASSERT(iPropertyProtectPassword != NULL);
    const Brx& val = iPropertyProtectPassword->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyActiveStatus(const std::string& aValue)
{
    ASSERT(iPropertyActiveStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyActiveStatus, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyActiveStatus(std::string& aValue)
{
    ASSERT(iPropertyActiveStatus != NULL);
    const Brx& val = iPropertyActiveStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyTime(const std::string& aValue)
{
    ASSERT(iPropertyTime != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyTime, buf);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyTime(std::string& aValue)
{
    ASSERT(iPropertyTime != NULL);
    const Brx& val = iPropertyTime->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyVolumeControl(bool aValue)
{
    ASSERT(iPropertyVolumeControl != NULL);
    return SetPropertyBool(*iPropertyVolumeControl, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPropertyVolumeControl(bool& aValue)
{
    ASSERT(iPropertyVolumeControl != NULL);
    aValue = iPropertyVolumeControl->Value();
}

DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DvProviderAvOpenhomeOrgHardwareConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "HardwareConfig", 1)
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

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyRestart()
{
    iPropertyRestart = new PropertyBool(new ParameterBool("Restart"));
    iService->AddProperty(iPropertyRestart); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyNumber()
{
    iPropertyNumber = new PropertyUint(new ParameterUint("Number"));
    iService->AddProperty(iPropertyNumber); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyRoomName()
{
    iPropertyRoomName = new PropertyString(new ParameterString("RoomName"));
    iService->AddProperty(iPropertyRoomName); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyInterFace()
{
    iPropertyInterFace = new PropertyString(new ParameterString("InterFace"));
    iService->AddProperty(iPropertyInterFace); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyNetMask()
{
    iPropertyNetMask = new PropertyString(new ParameterString("NetMask"));
    iService->AddProperty(iPropertyNetMask); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyGateWay()
{
    iPropertyGateWay = new PropertyString(new ParameterString("GateWay"));
    iService->AddProperty(iPropertyGateWay); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyDNS()
{
    iPropertyDNS = new PropertyString(new ParameterString("DNS"));
    iService->AddProperty(iPropertyDNS); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyDHCP()
{
    iPropertyDHCP = new PropertyString(new ParameterString("DHCP"));
    iService->AddProperty(iPropertyDHCP); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertySsid()
{
    iPropertySsid = new PropertyString(new ParameterString("Ssid"));
    iService->AddProperty(iPropertySsid); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyPassWord()
{
    iPropertyPassWord = new PropertyString(new ParameterString("PassWord"));
    iService->AddProperty(iPropertyPassWord); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyEncrypType()
{
    iPropertyEncrypType = new PropertyString(new ParameterString("EncrypType"));
    iService->AddProperty(iPropertyEncrypType); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyChannel()
{
    iPropertyChannel = new PropertyString(new ParameterString("Channel"));
    iService->AddProperty(iPropertyChannel); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyUpnpType()
{
    iPropertyUpnpType = new PropertyString(new ParameterString("UpnpType"));
    iService->AddProperty(iPropertyUpnpType); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyStatus()
{
    iPropertyStatus = new PropertyString(new ParameterString("Status"));
    iService->AddProperty(iPropertyStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertySampleFormat()
{
    iPropertySampleFormat = new PropertyString(new ParameterString("SampleFormat"));
    iService->AddProperty(iPropertySampleFormat); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyIpAddress()
{
    iPropertyIpAddress = new PropertyString(new ParameterString("IpAddress"));
    iService->AddProperty(iPropertyIpAddress); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyProtect()
{
    iPropertyProtect = new PropertyString(new ParameterString("Protect"));
    iService->AddProperty(iPropertyProtect); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyProtectPassword()
{
    iPropertyProtectPassword = new PropertyString(new ParameterString("ProtectPassword"));
    iService->AddProperty(iPropertyProtectPassword); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyActiveStatus()
{
    iPropertyActiveStatus = new PropertyString(new ParameterString("ActiveStatus"));
    iService->AddProperty(iPropertyActiveStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyTime()
{
    iPropertyTime = new PropertyString(new ParameterString("Time"));
    iService->AddProperty(iPropertyTime); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnablePropertyVolumeControl()
{
    iPropertyVolumeControl = new PropertyBool(new ParameterBool("VolumeControl"));
    iService->AddProperty(iPropertyVolumeControl); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionIsAlive()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IsAlive");
    action->AddOutputParameter(new ParameterRelated("Alive", *iPropertyAlive));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoIsAlive);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Update");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoUpdate);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionActive()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Active");
    action->AddInputParameter(new ParameterBool("IsSubscribe"));
    action->AddInputParameter(new ParameterString("RealName"));
    action->AddInputParameter(new ParameterString("Email"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoActive);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetActiveStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetActiveStatus");
    action->AddOutputParameter(new ParameterRelated("ActiveStatus", *iPropertyActiveStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetActiveStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionCheckUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckUpdate");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoCheckUpdate);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionResetDisplay()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ResetDisplay");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoResetDisplay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetHardWareInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHardWareInfo");
    action->AddOutputParameter(new ParameterString("HardWareInfo"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetHardWareInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetRoomName()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRoomName");
    action->AddInputParameter(new ParameterRelated("RoomName", *iPropertyRoomName));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetRoomName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetVolumeControl()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetVolumeControl");
    action->AddOutputParameter(new ParameterRelated("VolumeControl", *iPropertyVolumeControl));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetVolumeControl);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetVolumeControl()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolumeControl");
    action->AddInputParameter(new ParameterRelated("VolumeControl", *iPropertyVolumeControl));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetVolumeControl);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetWaitingTime()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWaitingTime");
    action->AddOutputParameter(new ParameterRelated("WaitingTime", *iPropertyTime));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetWaitingTime()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetWaitingTime");
    action->AddInputParameter(new ParameterRelated("WaitingTime", *iPropertyTime));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetOutChannel()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetOutChannel");
    action->AddOutputParameter(new ParameterRelated("ChannelNum", *iPropertyNumber));
    action->AddOutputParameter(new ParameterRelated("CurrentChannel", *iPropertyChannel));
    action->AddOutputParameter(new ParameterRelated("OutChannel", *iPropertyChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetOutChannel);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetOutChannel()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetOutChannel");
    action->AddInputParameter(new ParameterRelated("Channel", *iPropertyChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetOutChannel);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetUpnpType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetUpnpType");
    action->AddInputParameter(new ParameterRelated("UpnpType", *iPropertyUpnpType));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetUpnpType);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetUpnpType()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpnpType");
    action->AddOutputParameter(new ParameterRelated("UpnpType", *iPropertyUpnpType));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetUpnpType);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetDsdNativeStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDsdNativeStatus");
    action->AddInputParameter(new ParameterRelated("Status", *iPropertyStatus));
    action->AddInputParameter(new ParameterRelated("SampleFormat", *iPropertySampleFormat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetDsdNativeStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetDsdNativeStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDsdNativeStatus");
    action->AddOutputParameter(new ParameterRelated("Status", *iPropertyStatus));
    action->AddOutputParameter(new ParameterRelated("SampleFormat", *iPropertySampleFormat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetDsdNativeStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetPasswordProtect()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPasswordProtect");
    action->AddInputParameter(new ParameterRelated("Protect", *iPropertyProtect));
    action->AddInputParameter(new ParameterRelated("ProtectPassword", *iPropertyProtectPassword));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetPasswordProtect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetPasswordProtect()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPasswordProtect");
    action->AddOutputParameter(new ParameterRelated("Protect", *iPropertyProtect));
    action->AddOutputParameter(new ParameterRelated("ProtectPassword", *iPropertyProtectPassword));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetPasswordProtect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetUpdateInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateInfo");
    action->AddOutputParameter(new ParameterString("Version"));
    action->AddOutputParameter(new ParameterString("Progress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetUpdateInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetWirelessList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWirelessList");
    action->AddInputParameter(new ParameterRelated("InterFace", *iPropertyInterFace));
    action->AddOutputParameter(new ParameterRelated("Number", *iPropertyNumber));
    action->AddOutputParameter(new ParameterRelated("CurrentUse", *iPropertySsid));
    action->AddOutputParameter(new ParameterRelated("WirelessList", *iPropertySsid));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetWirelessList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetIpAddress()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIpAddress");
    action->AddInputParameter(new ParameterRelated("InterFace", *iPropertyInterFace));
    action->AddOutputParameter(new ParameterRelated("IpAddress", *iPropertyIpAddress));
    action->AddOutputParameter(new ParameterRelated("NetMask", *iPropertyNetMask));
    action->AddOutputParameter(new ParameterRelated("GateWay", *iPropertyGateWay));
    action->AddOutputParameter(new ParameterRelated("DNS", *iPropertyDNS));
    action->AddOutputParameter(new ParameterRelated("DHCP", *iPropertyDHCP));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetIpAddress);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetNetWork()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetNetWork);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetNetInterface()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetNetInterface");
    action->AddOutputParameter(new ParameterRelated("InterfaceNum", *iPropertyNumber));
    action->AddOutputParameter(new ParameterRelated("CurrentUse", *iPropertyInterFace));
    action->AddOutputParameter(new ParameterRelated("InterfaceList", *iPropertyInterFace));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetNetInterface);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetHaltStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHaltStatus");
    action->AddOutputParameter(new ParameterBool("HaltStatus"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetHaltStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetHaltStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetHaltStatus");
    action->AddInputParameter(new ParameterBool("HaltStatus"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetHaltStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetFilterMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetFilterMode");
    action->AddOutputParameter(new ParameterString("FilterMode"));
    action->AddOutputParameter(new ParameterString("FilterModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetFilterMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFilterMode");
    action->AddInputParameter(new ParameterString("FilterMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetSourceVisible()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceVisible");
    action->AddInputParameter(new ParameterString("SourceName"));
    action->AddInputParameter(new ParameterBool("Visible"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetSourceVisible);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetSourceVisible()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSourceVisible");
    action->AddOutputParameter(new ParameterString("VisibleInfo"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetSourceVisible);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetLEDMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetLEDMode");
    action->AddInputParameter(new ParameterString("LEDMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetLEDMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetLEDMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetLEDMode");
    action->AddOutputParameter(new ParameterString("LEDMode"));
    action->AddOutputParameter(new ParameterString("LEDModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetLEDMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionSetKeyMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetKeyMode");
    action->AddInputParameter(new ParameterString("KeyName"));
    action->AddInputParameter(new ParameterString("KeyMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetKeyMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::EnableActionGetKeyMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetKeyMode");
    action->AddOutputParameter(new ParameterString("SideKeyMode"));
    action->AddOutputParameter(new ParameterString("MiddleKeyMode"));
    action->AddOutputParameter(new ParameterString("KeyModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetKeyMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoIsAlive(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respAlive;
    DvInvocationStd invocation(aInvocation);
    IsAlive(invocation, respAlive);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterAlive(aInvocation, "Alive");
    respWriterAlive.Write(respAlive);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Update(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoActive(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    bool IsSubscribe = aInvocation.InvocationReadBool("IsSubscribe");
    Brhz buf_RealName;
    aInvocation.InvocationReadString("RealName", buf_RealName);
    std::string RealName((const char*)buf_RealName.Ptr(), buf_RealName.Bytes());
    Brhz buf_Email;
    aInvocation.InvocationReadString("Email", buf_Email);
    std::string Email((const char*)buf_Email.Ptr(), buf_Email.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Active(invocation, IsSubscribe, RealName, Email);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetActiveStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respActiveStatus;
    DvInvocationStd invocation(aInvocation);
    GetActiveStatus(invocation, respActiveStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterActiveStatus(aInvocation, "ActiveStatus");
    Brn buf_ActiveStatus((const TByte*)respActiveStatus.c_str(), (TUint)respActiveStatus.length());
    respWriterActiveStatus.Write(buf_ActiveStatus);
    aInvocation.InvocationWriteStringEnd("ActiveStatus");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoCheckUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    CheckUpdate(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoResetDisplay(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ResetDisplay(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetHardWareInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respHardWareInfo;
    DvInvocationStd invocation(aInvocation);
    GetHardWareInfo(invocation, respHardWareInfo);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterHardWareInfo(aInvocation, "HardWareInfo");
    Brn buf_HardWareInfo((const TByte*)respHardWareInfo.c_str(), (TUint)respHardWareInfo.length());
    respWriterHardWareInfo.Write(buf_HardWareInfo);
    aInvocation.InvocationWriteStringEnd("HardWareInfo");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetRoomName(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_RoomName;
    aInvocation.InvocationReadString("RoomName", buf_RoomName);
    std::string RoomName((const char*)buf_RoomName.Ptr(), buf_RoomName.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetRoomName(invocation, RoomName);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetVolumeControl(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respVolumeControl;
    DvInvocationStd invocation(aInvocation);
    GetVolumeControl(invocation, respVolumeControl);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterVolumeControl(aInvocation, "VolumeControl");
    respWriterVolumeControl.Write(respVolumeControl);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetVolumeControl(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    bool VolumeControl = aInvocation.InvocationReadBool("VolumeControl");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetVolumeControl(invocation, VolumeControl);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetWaitingTime(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetWaitingTime(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetOutChannel(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respChannelNum;
    std::string respCurrentChannel;
    std::string respOutChannel;
    DvInvocationStd invocation(aInvocation);
    GetOutChannel(invocation, respChannelNum, respCurrentChannel, respOutChannel);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterChannelNum(aInvocation, "ChannelNum");
    respWriterChannelNum.Write(respChannelNum);
    DviInvocationResponseString respWriterCurrentChannel(aInvocation, "CurrentChannel");
    Brn buf_CurrentChannel((const TByte*)respCurrentChannel.c_str(), (TUint)respCurrentChannel.length());
    respWriterCurrentChannel.Write(buf_CurrentChannel);
    aInvocation.InvocationWriteStringEnd("CurrentChannel");
    DviInvocationResponseString respWriterOutChannel(aInvocation, "OutChannel");
    Brn buf_OutChannel((const TByte*)respOutChannel.c_str(), (TUint)respOutChannel.length());
    respWriterOutChannel.Write(buf_OutChannel);
    aInvocation.InvocationWriteStringEnd("OutChannel");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetOutChannel(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Channel;
    aInvocation.InvocationReadString("Channel", buf_Channel);
    std::string Channel((const char*)buf_Channel.Ptr(), buf_Channel.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetOutChannel(invocation, Channel);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetUpnpType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_UpnpType;
    aInvocation.InvocationReadString("UpnpType", buf_UpnpType);
    std::string UpnpType((const char*)buf_UpnpType.Ptr(), buf_UpnpType.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetUpnpType(invocation, UpnpType);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetUpnpType(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respUpnpType;
    DvInvocationStd invocation(aInvocation);
    GetUpnpType(invocation, respUpnpType);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterUpnpType(aInvocation, "UpnpType");
    Brn buf_UpnpType((const TByte*)respUpnpType.c_str(), (TUint)respUpnpType.length());
    respWriterUpnpType.Write(buf_UpnpType);
    aInvocation.InvocationWriteStringEnd("UpnpType");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetDsdNativeStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Status;
    aInvocation.InvocationReadString("Status", buf_Status);
    std::string Status((const char*)buf_Status.Ptr(), buf_Status.Bytes());
    Brhz buf_SampleFormat;
    aInvocation.InvocationReadString("SampleFormat", buf_SampleFormat);
    std::string SampleFormat((const char*)buf_SampleFormat.Ptr(), buf_SampleFormat.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetDsdNativeStatus(invocation, Status, SampleFormat);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetDsdNativeStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respStatus;
    std::string respSampleFormat;
    DvInvocationStd invocation(aInvocation);
    GetDsdNativeStatus(invocation, respStatus, respSampleFormat);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterStatus(aInvocation, "Status");
    Brn buf_Status((const TByte*)respStatus.c_str(), (TUint)respStatus.length());
    respWriterStatus.Write(buf_Status);
    aInvocation.InvocationWriteStringEnd("Status");
    DviInvocationResponseString respWriterSampleFormat(aInvocation, "SampleFormat");
    Brn buf_SampleFormat((const TByte*)respSampleFormat.c_str(), (TUint)respSampleFormat.length());
    respWriterSampleFormat.Write(buf_SampleFormat);
    aInvocation.InvocationWriteStringEnd("SampleFormat");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetPasswordProtect(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Protect;
    aInvocation.InvocationReadString("Protect", buf_Protect);
    std::string Protect((const char*)buf_Protect.Ptr(), buf_Protect.Bytes());
    Brhz buf_ProtectPassword;
    aInvocation.InvocationReadString("ProtectPassword", buf_ProtectPassword);
    std::string ProtectPassword((const char*)buf_ProtectPassword.Ptr(), buf_ProtectPassword.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetPasswordProtect(invocation, Protect, ProtectPassword);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetPasswordProtect(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respProtect;
    std::string respProtectPassword;
    DvInvocationStd invocation(aInvocation);
    GetPasswordProtect(invocation, respProtect, respProtectPassword);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterProtect(aInvocation, "Protect");
    Brn buf_Protect((const TByte*)respProtect.c_str(), (TUint)respProtect.length());
    respWriterProtect.Write(buf_Protect);
    aInvocation.InvocationWriteStringEnd("Protect");
    DviInvocationResponseString respWriterProtectPassword(aInvocation, "ProtectPassword");
    Brn buf_ProtectPassword((const TByte*)respProtectPassword.c_str(), (TUint)respProtectPassword.length());
    respWriterProtectPassword.Write(buf_ProtectPassword);
    aInvocation.InvocationWriteStringEnd("ProtectPassword");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetUpdateInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respVersion;
    std::string respProgress;
    DvInvocationStd invocation(aInvocation);
    GetUpdateInfo(invocation, respVersion, respProgress);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterVersion(aInvocation, "Version");
    Brn buf_Version((const TByte*)respVersion.c_str(), (TUint)respVersion.length());
    respWriterVersion.Write(buf_Version);
    aInvocation.InvocationWriteStringEnd("Version");
    DviInvocationResponseString respWriterProgress(aInvocation, "Progress");
    Brn buf_Progress((const TByte*)respProgress.c_str(), (TUint)respProgress.length());
    respWriterProgress.Write(buf_Progress);
    aInvocation.InvocationWriteStringEnd("Progress");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetWirelessList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_InterFace;
    aInvocation.InvocationReadString("InterFace", buf_InterFace);
    std::string InterFace((const char*)buf_InterFace.Ptr(), buf_InterFace.Bytes());
    aInvocation.InvocationReadEnd();
    uint32_t respNumber;
    std::string respCurrentUse;
    std::string respWirelessList;
    DvInvocationStd invocation(aInvocation);
    GetWirelessList(invocation, InterFace, respNumber, respCurrentUse, respWirelessList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterNumber(aInvocation, "Number");
    respWriterNumber.Write(respNumber);
    DviInvocationResponseString respWriterCurrentUse(aInvocation, "CurrentUse");
    Brn buf_CurrentUse((const TByte*)respCurrentUse.c_str(), (TUint)respCurrentUse.length());
    respWriterCurrentUse.Write(buf_CurrentUse);
    aInvocation.InvocationWriteStringEnd("CurrentUse");
    DviInvocationResponseString respWriterWirelessList(aInvocation, "WirelessList");
    Brn buf_WirelessList((const TByte*)respWirelessList.c_str(), (TUint)respWirelessList.length());
    respWriterWirelessList.Write(buf_WirelessList);
    aInvocation.InvocationWriteStringEnd("WirelessList");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetIpAddress(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_InterFace;
    aInvocation.InvocationReadString("InterFace", buf_InterFace);
    std::string InterFace((const char*)buf_InterFace.Ptr(), buf_InterFace.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respIpAddress;
    std::string respNetMask;
    std::string respGateWay;
    std::string respDNS;
    std::string respDHCP;
    DvInvocationStd invocation(aInvocation);
    GetIpAddress(invocation, InterFace, respIpAddress, respNetMask, respGateWay, respDNS, respDHCP);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterIpAddress(aInvocation, "IpAddress");
    Brn buf_IpAddress((const TByte*)respIpAddress.c_str(), (TUint)respIpAddress.length());
    respWriterIpAddress.Write(buf_IpAddress);
    aInvocation.InvocationWriteStringEnd("IpAddress");
    DviInvocationResponseString respWriterNetMask(aInvocation, "NetMask");
    Brn buf_NetMask((const TByte*)respNetMask.c_str(), (TUint)respNetMask.length());
    respWriterNetMask.Write(buf_NetMask);
    aInvocation.InvocationWriteStringEnd("NetMask");
    DviInvocationResponseString respWriterGateWay(aInvocation, "GateWay");
    Brn buf_GateWay((const TByte*)respGateWay.c_str(), (TUint)respGateWay.length());
    respWriterGateWay.Write(buf_GateWay);
    aInvocation.InvocationWriteStringEnd("GateWay");
    DviInvocationResponseString respWriterDNS(aInvocation, "DNS");
    Brn buf_DNS((const TByte*)respDNS.c_str(), (TUint)respDNS.length());
    respWriterDNS.Write(buf_DNS);
    aInvocation.InvocationWriteStringEnd("DNS");
    DviInvocationResponseString respWriterDHCP(aInvocation, "DHCP");
    Brn buf_DHCP((const TByte*)respDHCP.c_str(), (TUint)respDHCP.length());
    respWriterDHCP.Write(buf_DHCP);
    aInvocation.InvocationWriteStringEnd("DHCP");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetNetWork(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_InterFace;
    aInvocation.InvocationReadString("InterFace", buf_InterFace);
    std::string InterFace((const char*)buf_InterFace.Ptr(), buf_InterFace.Bytes());
    Brhz buf_IpAddress;
    aInvocation.InvocationReadString("IpAddress", buf_IpAddress);
    std::string IpAddress((const char*)buf_IpAddress.Ptr(), buf_IpAddress.Bytes());
    Brhz buf_NetMask;
    aInvocation.InvocationReadString("NetMask", buf_NetMask);
    std::string NetMask((const char*)buf_NetMask.Ptr(), buf_NetMask.Bytes());
    Brhz buf_GateWay;
    aInvocation.InvocationReadString("GateWay", buf_GateWay);
    std::string GateWay((const char*)buf_GateWay.Ptr(), buf_GateWay.Bytes());
    Brhz buf_DNS;
    aInvocation.InvocationReadString("DNS", buf_DNS);
    std::string DNS((const char*)buf_DNS.Ptr(), buf_DNS.Bytes());
    Brhz buf_Ssid;
    aInvocation.InvocationReadString("Ssid", buf_Ssid);
    std::string Ssid((const char*)buf_Ssid.Ptr(), buf_Ssid.Bytes());
    Brhz buf_PassWord;
    aInvocation.InvocationReadString("PassWord", buf_PassWord);
    std::string PassWord((const char*)buf_PassWord.Ptr(), buf_PassWord.Bytes());
    Brhz buf_EncrypType;
    aInvocation.InvocationReadString("EncrypType", buf_EncrypType);
    std::string EncrypType((const char*)buf_EncrypType.Ptr(), buf_EncrypType.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetNetWork(invocation, InterFace, IpAddress, NetMask, GateWay, DNS, Ssid, PassWord, EncrypType);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetNetInterface(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respInterfaceNum;
    std::string respCurrentUse;
    std::string respInterfaceList;
    DvInvocationStd invocation(aInvocation);
    GetNetInterface(invocation, respInterfaceNum, respCurrentUse, respInterfaceList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterInterfaceNum(aInvocation, "InterfaceNum");
    respWriterInterfaceNum.Write(respInterfaceNum);
    DviInvocationResponseString respWriterCurrentUse(aInvocation, "CurrentUse");
    Brn buf_CurrentUse((const TByte*)respCurrentUse.c_str(), (TUint)respCurrentUse.length());
    respWriterCurrentUse.Write(buf_CurrentUse);
    aInvocation.InvocationWriteStringEnd("CurrentUse");
    DviInvocationResponseString respWriterInterfaceList(aInvocation, "InterfaceList");
    Brn buf_InterfaceList((const TByte*)respInterfaceList.c_str(), (TUint)respInterfaceList.length());
    respWriterInterfaceList.Write(buf_InterfaceList);
    aInvocation.InvocationWriteStringEnd("InterfaceList");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetHaltStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respHaltStatus;
    DvInvocationStd invocation(aInvocation);
    GetHaltStatus(invocation, respHaltStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterHaltStatus(aInvocation, "HaltStatus");
    respWriterHaltStatus.Write(respHaltStatus);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetHaltStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    bool HaltStatus = aInvocation.InvocationReadBool("HaltStatus");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetHaltStatus(invocation, HaltStatus);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetFilterMode(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetFilterMode(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetSourceVisible(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_SourceName;
    aInvocation.InvocationReadString("SourceName", buf_SourceName);
    std::string SourceName((const char*)buf_SourceName.Ptr(), buf_SourceName.Bytes());
    bool Visible = aInvocation.InvocationReadBool("Visible");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetSourceVisible(invocation, SourceName, Visible);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetSourceVisible(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respVisibleInfo;
    DvInvocationStd invocation(aInvocation);
    GetSourceVisible(invocation, respVisibleInfo);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterVisibleInfo(aInvocation, "VisibleInfo");
    Brn buf_VisibleInfo((const TByte*)respVisibleInfo.c_str(), (TUint)respVisibleInfo.length());
    respWriterVisibleInfo.Write(buf_VisibleInfo);
    aInvocation.InvocationWriteStringEnd("VisibleInfo");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetLEDMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_LEDMode;
    aInvocation.InvocationReadString("LEDMode", buf_LEDMode);
    std::string LEDMode((const char*)buf_LEDMode.Ptr(), buf_LEDMode.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetLEDMode(invocation, LEDMode);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetLEDMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respLEDMode;
    std::string respLEDModeList;
    DvInvocationStd invocation(aInvocation);
    GetLEDMode(invocation, respLEDMode, respLEDModeList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterLEDMode(aInvocation, "LEDMode");
    Brn buf_LEDMode((const TByte*)respLEDMode.c_str(), (TUint)respLEDMode.length());
    respWriterLEDMode.Write(buf_LEDMode);
    aInvocation.InvocationWriteStringEnd("LEDMode");
    DviInvocationResponseString respWriterLEDModeList(aInvocation, "LEDModeList");
    Brn buf_LEDModeList((const TByte*)respLEDModeList.c_str(), (TUint)respLEDModeList.length());
    respWriterLEDModeList.Write(buf_LEDModeList);
    aInvocation.InvocationWriteStringEnd("LEDModeList");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoSetKeyMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_KeyName;
    aInvocation.InvocationReadString("KeyName", buf_KeyName);
    std::string KeyName((const char*)buf_KeyName.Ptr(), buf_KeyName.Bytes());
    Brhz buf_KeyMode;
    aInvocation.InvocationReadString("KeyMode", buf_KeyMode);
    std::string KeyMode((const char*)buf_KeyMode.Ptr(), buf_KeyMode.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetKeyMode(invocation, KeyName, KeyMode);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::DoGetKeyMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respSideKeyMode;
    std::string respMiddleKeyMode;
    std::string respKeyModeList;
    DvInvocationStd invocation(aInvocation);
    GetKeyMode(invocation, respSideKeyMode, respMiddleKeyMode, respKeyModeList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterSideKeyMode(aInvocation, "SideKeyMode");
    Brn buf_SideKeyMode((const TByte*)respSideKeyMode.c_str(), (TUint)respSideKeyMode.length());
    respWriterSideKeyMode.Write(buf_SideKeyMode);
    aInvocation.InvocationWriteStringEnd("SideKeyMode");
    DviInvocationResponseString respWriterMiddleKeyMode(aInvocation, "MiddleKeyMode");
    Brn buf_MiddleKeyMode((const TByte*)respMiddleKeyMode.c_str(), (TUint)respMiddleKeyMode.length());
    respWriterMiddleKeyMode.Write(buf_MiddleKeyMode);
    aInvocation.InvocationWriteStringEnd("MiddleKeyMode");
    DviInvocationResponseString respWriterKeyModeList(aInvocation, "KeyModeList");
    Brn buf_KeyModeList((const TByte*)respKeyModeList.c_str(), (TUint)respKeyModeList.length());
    respWriterKeyModeList.Write(buf_KeyModeList);
    aInvocation.InvocationWriteStringEnd("KeyModeList");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::IsAlive(IDvInvocationStd& /*aInvocation*/, bool& /*aAlive*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::Update(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::Active(IDvInvocationStd& /*aInvocation*/, bool /*aIsSubscribe*/, const std::string& /*aRealName*/, const std::string& /*aEmail*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetActiveStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aActiveStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::CheckUpdate(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::ResetDisplay(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetHardWareInfo(IDvInvocationStd& /*aInvocation*/, std::string& /*aHardWareInfo*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetRoomName(IDvInvocationStd& /*aInvocation*/, const std::string& /*aRoomName*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetVolumeControl(IDvInvocationStd& /*aInvocation*/, bool& /*aVolumeControl*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetVolumeControl(IDvInvocationStd& /*aInvocation*/, bool /*aVolumeControl*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetWaitingTime(IDvInvocationStd& /*aInvocation*/, std::string& /*aWaitingTime*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetWaitingTime(IDvInvocationStd& /*aInvocation*/, const std::string& /*aWaitingTime*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetOutChannel(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aChannelNum*/, std::string& /*aCurrentChannel*/, std::string& /*aOutChannel*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetOutChannel(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannel*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetUpnpType(IDvInvocationStd& /*aInvocation*/, const std::string& /*aUpnpType*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetUpnpType(IDvInvocationStd& /*aInvocation*/, std::string& /*aUpnpType*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetDsdNativeStatus(IDvInvocationStd& /*aInvocation*/, const std::string& /*aStatus*/, const std::string& /*aSampleFormat*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetDsdNativeStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aStatus*/, std::string& /*aSampleFormat*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetPasswordProtect(IDvInvocationStd& /*aInvocation*/, const std::string& /*aProtect*/, const std::string& /*aProtectPassword*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetPasswordProtect(IDvInvocationStd& /*aInvocation*/, std::string& /*aProtect*/, std::string& /*aProtectPassword*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetUpdateInfo(IDvInvocationStd& /*aInvocation*/, std::string& /*aVersion*/, std::string& /*aProgress*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetWirelessList(IDvInvocationStd& /*aInvocation*/, const std::string& /*aInterFace*/, uint32_t& /*aNumber*/, std::string& /*aCurrentUse*/, std::string& /*aWirelessList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetIpAddress(IDvInvocationStd& /*aInvocation*/, const std::string& /*aInterFace*/, std::string& /*aIpAddress*/, std::string& /*aNetMask*/, std::string& /*aGateWay*/, std::string& /*aDNS*/, std::string& /*aDHCP*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetNetWork(IDvInvocationStd& /*aInvocation*/, const std::string& /*aInterFace*/, const std::string& /*aIpAddress*/, const std::string& /*aNetMask*/, const std::string& /*aGateWay*/, const std::string& /*aDNS*/, const std::string& /*aSsid*/, const std::string& /*aPassWord*/, const std::string& /*aEncrypType*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetNetInterface(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aInterfaceNum*/, std::string& /*aCurrentUse*/, std::string& /*aInterfaceList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetHaltStatus(IDvInvocationStd& /*aInvocation*/, bool& /*aHaltStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetHaltStatus(IDvInvocationStd& /*aInvocation*/, bool /*aHaltStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetFilterMode(IDvInvocationStd& /*aInvocation*/, std::string& /*aFilterMode*/, std::string& /*aFilterModeList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetFilterMode(IDvInvocationStd& /*aInvocation*/, const std::string& /*aFilterMode*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetSourceVisible(IDvInvocationStd& /*aInvocation*/, const std::string& /*aSourceName*/, bool /*aVisible*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetSourceVisible(IDvInvocationStd& /*aInvocation*/, std::string& /*aVisibleInfo*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetLEDMode(IDvInvocationStd& /*aInvocation*/, const std::string& /*aLEDMode*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetLEDMode(IDvInvocationStd& /*aInvocation*/, std::string& /*aLEDMode*/, std::string& /*aLEDModeList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::SetKeyMode(IDvInvocationStd& /*aInvocation*/, const std::string& /*aKeyName*/, const std::string& /*aKeyMode*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgHardwareConfig1Cpp::GetKeyMode(IDvInvocationStd& /*aInvocation*/, std::string& /*aSideKeyMode*/, std::string& /*aMiddleKeyMode*/, std::string& /*aKeyModeList*/)
{
    ASSERTS();
}

