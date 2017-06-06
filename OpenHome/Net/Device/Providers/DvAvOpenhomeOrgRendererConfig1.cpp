#include "DvAvOpenhomeOrgRendererConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgRendererConfig1::SetPropertyRendererConfig(const Brx& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    return SetPropertyString(*iPropertyRendererConfig, aValue);
}

void DvProviderAvOpenhomeOrgRendererConfig1::GetPropertyRendererConfig(Brhz& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    aValue.Set(iPropertyRendererConfig->Value());
}

TBool DvProviderAvOpenhomeOrgRendererConfig1::SetPropertyResamplerConfig(const Brx& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    return SetPropertyString(*iPropertyResamplerConfig, aValue);
}

void DvProviderAvOpenhomeOrgRendererConfig1::GetPropertyResamplerConfig(Brhz& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    aValue.Set(iPropertyResamplerConfig->Value());
}

TBool DvProviderAvOpenhomeOrgRendererConfig1::SetPropertyHardwareConfig(const Brx& aValue)
{
    ASSERT(iPropertyHardwareConfig != NULL);
    return SetPropertyString(*iPropertyHardwareConfig, aValue);
}

void DvProviderAvOpenhomeOrgRendererConfig1::GetPropertyHardwareConfig(Brhz& aValue)
{
    ASSERT(iPropertyHardwareConfig != NULL);
    aValue.Set(iPropertyHardwareConfig->Value());
}

DvProviderAvOpenhomeOrgRendererConfig1::DvProviderAvOpenhomeOrgRendererConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "RendererConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgRendererConfig1::DvProviderAvOpenhomeOrgRendererConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "RendererConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgRendererConfig1::Construct()
{
    iPropertyRendererConfig = NULL;
    iPropertyResamplerConfig = NULL;
    iPropertyHardwareConfig = NULL;
}

void DvProviderAvOpenhomeOrgRendererConfig1::EnablePropertyRendererConfig()
{
    iPropertyRendererConfig = new PropertyString(new ParameterString("RendererConfig"));
    iService->AddProperty(iPropertyRendererConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgRendererConfig1::EnablePropertyResamplerConfig()
{
    iPropertyResamplerConfig = new PropertyString(new ParameterString("ResamplerConfig"));
    iService->AddProperty(iPropertyResamplerConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgRendererConfig1::EnablePropertyHardwareConfig()
{
    iPropertyHardwareConfig = new PropertyString(new ParameterString("HardwareConfig"));
    iService->AddProperty(iPropertyHardwareConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgRendererConfig1::EnableActionGetRendererConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRendererConfig");
    action->AddOutputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1::DoGetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1::EnableActionSetRendererConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRendererConfig");
    action->AddInputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1::DoSetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1::EnableActionGetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetResamplerConfig");
    action->AddOutputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1::DoGetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1::EnableActionSetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetResamplerConfig");
    action->AddInputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1::DoSetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1::EnableActionGetHardwareConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHardwareConfig");
    action->AddOutputParameter(new ParameterRelated("HardwareConfig", *iPropertyHardwareConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1::DoGetHardwareConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1::EnableActionSetHardwareConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetHardwareConfig");
    action->AddInputParameter(new ParameterRelated("HardwareConfig", *iPropertyHardwareConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1::DoSetHardwareConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1::EnableActionGetWiFiList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWiFiList");
    action->AddOutputParameter(new ParameterString("WiFiList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1::DoGetWiFiList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1::EnableActionSetTimeZone()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTimeZone");
    action->AddInputParameter(new ParameterString("TimeZone"));
    action->AddInputParameter(new ParameterString("CurrentTime"));
    action->AddInputParameter(new ParameterString("TimeStamp"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1::DoSetTimeZone);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1::DoGetRendererConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respRendererConfig(aInvocation, "RendererConfig");
    GetRendererConfig(invocation, respRendererConfig);
}

void DvProviderAvOpenhomeOrgRendererConfig1::DoSetRendererConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz RendererConfig;
    aInvocation.InvocationReadString("RendererConfig", RendererConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetRendererConfig(invocation, RendererConfig);
}

void DvProviderAvOpenhomeOrgRendererConfig1::DoGetResamplerConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respResamplerConfig(aInvocation, "ResamplerConfig");
    GetResamplerConfig(invocation, respResamplerConfig);
}

void DvProviderAvOpenhomeOrgRendererConfig1::DoSetResamplerConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ResamplerConfig;
    aInvocation.InvocationReadString("ResamplerConfig", ResamplerConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetResamplerConfig(invocation, ResamplerConfig);
}

void DvProviderAvOpenhomeOrgRendererConfig1::DoGetHardwareConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respHardwareConfig(aInvocation, "HardwareConfig");
    GetHardwareConfig(invocation, respHardwareConfig);
}

void DvProviderAvOpenhomeOrgRendererConfig1::DoSetHardwareConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz HardwareConfig;
    aInvocation.InvocationReadString("HardwareConfig", HardwareConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetHardwareConfig(invocation, HardwareConfig);
}

void DvProviderAvOpenhomeOrgRendererConfig1::DoGetWiFiList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respWiFiList(aInvocation, "WiFiList");
    GetWiFiList(invocation, respWiFiList);
}

void DvProviderAvOpenhomeOrgRendererConfig1::DoSetTimeZone(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRendererConfig1::GetRendererConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aRendererConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1::SetRendererConfig(IDvInvocation& /*aResponse*/, const Brx& /*aRendererConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1::GetResamplerConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aResamplerConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1::SetResamplerConfig(IDvInvocation& /*aResponse*/, const Brx& /*aResamplerConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1::GetHardwareConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aHardwareConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1::SetHardwareConfig(IDvInvocation& /*aResponse*/, const Brx& /*aHardwareConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1::GetWiFiList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aWiFiList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1::SetTimeZone(IDvInvocation& /*aResponse*/, const Brx& /*aTimeZone*/, const Brx& /*aCurrentTime*/, const Brx& /*aTimeStamp*/)
{
    ASSERTS();
}

