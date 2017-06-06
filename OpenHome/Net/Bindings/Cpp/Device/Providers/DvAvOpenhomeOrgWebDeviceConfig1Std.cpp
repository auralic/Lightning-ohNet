#include "DvAvOpenhomeOrgWebDeviceConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::SetPropertyAlive(bool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::GetPropertyAlive(bool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

bool DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::SetPropertyDeviceConfig(const std::string& aValue)
{
    ASSERT(iPropertyDeviceConfig != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyDeviceConfig, buf);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::GetPropertyDeviceConfig(std::string& aValue)
{
    ASSERT(iPropertyDeviceConfig != NULL);
    const Brx& val = iPropertyDeviceConfig->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::SetPropertyCurrentAction(uint32_t aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::GetPropertyCurrentAction(uint32_t& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebDeviceConfig", 1)
{
    iPropertyAlive = NULL;
    iPropertyDeviceConfig = NULL;
    iPropertyCurrentAction = NULL;
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::EnablePropertyDeviceConfig()
{
    iPropertyDeviceConfig = new PropertyString(new ParameterString("DeviceConfig"));
    iService->AddProperty(iPropertyDeviceConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::EnableActionGetDeviceConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceConfig");
    action->AddOutputParameter(new ParameterRelated("DeviceConfig", *iPropertyDeviceConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::DoGetDeviceConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::EnableActionSetDeviceConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDeviceConfig");
    action->AddInputParameter(new ParameterRelated("DeviceConfig", *iPropertyDeviceConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::DoSetDeviceConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::EnableActionGetWiFiList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWiFiList");
    action->AddOutputParameter(new ParameterString("WiFiList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::DoGetWiFiList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::EnableActionSetTimeZone()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTimeZone");
    action->AddInputParameter(new ParameterString("TimeZone"));
    action->AddInputParameter(new ParameterString("CurrentTime"));
    action->AddInputParameter(new ParameterString("TimeStamp"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::DoSetTimeZone);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::EnableActionGetServiceLocation()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServiceLocation");
    action->AddOutputParameter(new ParameterString("ServiceLoaction"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::DoGetServiceLocation);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::DoGetDeviceConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respDeviceConfig;
    DvInvocationStd invocation(aInvocation);
    GetDeviceConfig(invocation, respDeviceConfig);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterDeviceConfig(aInvocation, "DeviceConfig");
    Brn buf_DeviceConfig((const TByte*)respDeviceConfig.c_str(), (TUint)respDeviceConfig.length());
    respWriterDeviceConfig.Write(buf_DeviceConfig);
    aInvocation.InvocationWriteStringEnd("DeviceConfig");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::DoSetDeviceConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_DeviceConfig;
    aInvocation.InvocationReadString("DeviceConfig", buf_DeviceConfig);
    std::string DeviceConfig((const char*)buf_DeviceConfig.Ptr(), buf_DeviceConfig.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetDeviceConfig(invocation, DeviceConfig);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::DoGetWiFiList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respWiFiList;
    DvInvocationStd invocation(aInvocation);
    GetWiFiList(invocation, respWiFiList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterWiFiList(aInvocation, "WiFiList");
    Brn buf_WiFiList((const TByte*)respWiFiList.c_str(), (TUint)respWiFiList.length());
    respWriterWiFiList.Write(buf_WiFiList);
    aInvocation.InvocationWriteStringEnd("WiFiList");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::DoSetTimeZone(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_TimeZone;
    aInvocation.InvocationReadString("TimeZone", buf_TimeZone);
    std::string TimeZone((const char*)buf_TimeZone.Ptr(), buf_TimeZone.Bytes());
    Brhz buf_CurrentTime;
    aInvocation.InvocationReadString("CurrentTime", buf_CurrentTime);
    std::string CurrentTime((const char*)buf_CurrentTime.Ptr(), buf_CurrentTime.Bytes());
    Brhz buf_TimeStamp;
    aInvocation.InvocationReadString("TimeStamp", buf_TimeStamp);
    std::string TimeStamp((const char*)buf_TimeStamp.Ptr(), buf_TimeStamp.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetTimeZone(invocation, TimeZone, CurrentTime, TimeStamp);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::DoGetServiceLocation(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respServiceLoaction;
    DvInvocationStd invocation(aInvocation);
    GetServiceLocation(invocation, respServiceLoaction);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterServiceLoaction(aInvocation, "ServiceLoaction");
    Brn buf_ServiceLoaction((const TByte*)respServiceLoaction.c_str(), (TUint)respServiceLoaction.length());
    respWriterServiceLoaction.Write(buf_ServiceLoaction);
    aInvocation.InvocationWriteStringEnd("ServiceLoaction");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::GetDeviceConfig(IDvInvocationStd& /*aInvocation*/, std::string& /*aDeviceConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::SetDeviceConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDeviceConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::GetWiFiList(IDvInvocationStd& /*aInvocation*/, std::string& /*aWiFiList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::SetTimeZone(IDvInvocationStd& /*aInvocation*/, const std::string& /*aTimeZone*/, const std::string& /*aCurrentTime*/, const std::string& /*aTimeStamp*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp::GetServiceLocation(IDvInvocationStd& /*aInvocation*/, std::string& /*aServiceLoaction*/)
{
    ASSERTS();
}

