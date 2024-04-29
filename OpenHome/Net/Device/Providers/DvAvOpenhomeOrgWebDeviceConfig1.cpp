#include "DvAvOpenhomeOrgWebDeviceConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgWebDeviceConfig1::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgWebDeviceConfig1::SetPropertyDeviceConfig(const Brx& aValue)
{
    ASSERT(iPropertyDeviceConfig != NULL);
    return SetPropertyString(*iPropertyDeviceConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::GetPropertyDeviceConfig(Brhz& aValue)
{
    ASSERT(iPropertyDeviceConfig != NULL);
    aValue.Set(iPropertyDeviceConfig->Value());
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::WritePropertyDeviceConfig(IWriter& aWriter)
{
    iPropertyDeviceConfig->Write(aWriter);
}

TBool DvProviderAvOpenhomeOrgWebDeviceConfig1::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

DvProviderAvOpenhomeOrgWebDeviceConfig1::DvProviderAvOpenhomeOrgWebDeviceConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebDeviceConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgWebDeviceConfig1::DvProviderAvOpenhomeOrgWebDeviceConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "WebDeviceConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::Construct()
{
    iPropertyAlive = NULL;
    iPropertyDeviceConfig = NULL;
    iPropertyCurrentAction = NULL;
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::EnablePropertyDeviceConfig()
{
    iPropertyDeviceConfig = new PropertyString(new ParameterString("DeviceConfig"));
    iService->AddProperty(iPropertyDeviceConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::EnableActionGetDeviceConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceConfig");
    action->AddOutputParameter(new ParameterRelated("DeviceConfig", *iPropertyDeviceConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1::DoGetDeviceConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::EnableActionSetDeviceConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDeviceConfig");
    action->AddInputParameter(new ParameterRelated("DeviceConfig", *iPropertyDeviceConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1::DoSetDeviceConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::EnableActionGetWiFiList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWiFiList");
    action->AddOutputParameter(new ParameterString("WiFiList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1::DoGetWiFiList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::EnableActionSetTimeZone()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTimeZone");
    action->AddInputParameter(new ParameterString("TimeZone"));
    action->AddInputParameter(new ParameterString("CurrentTime"));
    action->AddInputParameter(new ParameterString("TimeStamp"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1::DoSetTimeZone);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::EnableActionGetServiceLocation()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServiceLocation");
    action->AddOutputParameter(new ParameterString("ServiceLoaction"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDeviceConfig1::DoGetServiceLocation);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::DoGetDeviceConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respDeviceConfig(aInvocation, "DeviceConfig");
    GetDeviceConfig(invocation, respDeviceConfig);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::DoSetDeviceConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz DeviceConfig;
    aInvocation.InvocationReadString("DeviceConfig", DeviceConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetDeviceConfig(invocation, DeviceConfig);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::DoGetWiFiList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respWiFiList(aInvocation, "WiFiList");
    GetWiFiList(invocation, respWiFiList);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::DoSetTimeZone(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz TimeZone;
    aInvocation.InvocationReadString("TimeZone", TimeZone);
    Brhz CurrentTime;
    aInvocation.InvocationReadString("CurrentTime", CurrentTime);
    Brhz TimeStamp;
    aInvocation.InvocationReadString("TimeStamp", TimeStamp);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetTimeZone(invocation, TimeZone, CurrentTime, TimeStamp);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::DoGetServiceLocation(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respServiceLoaction(aInvocation, "ServiceLoaction");
    GetServiceLocation(invocation, respServiceLoaction);
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::GetDeviceConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aDeviceConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::SetDeviceConfig(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::GetWiFiList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aWiFiList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::SetTimeZone(IDvInvocation& /*aResponse*/, const Brx& /*aTimeZone*/, const Brx& /*aCurrentTime*/, const Brx& /*aTimeStamp*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebDeviceConfig1::GetServiceLocation(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aServiceLoaction*/)
{
    ASSERTS();
}

