#include "DvAvOpenhomeOrgWebClockConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgWebClockConfig1::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebClockConfig1::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgWebClockConfig1::SetPropertyClockConfig(const Brx& aValue)
{
    ASSERT(iPropertyClockConfig != NULL);
    return SetPropertyString(*iPropertyClockConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebClockConfig1::GetPropertyClockConfig(Brhz& aValue)
{
    ASSERT(iPropertyClockConfig != NULL);
    aValue.Set(iPropertyClockConfig->Value());
}

void DvProviderAvOpenhomeOrgWebClockConfig1::WritePropertyClockConfig(IWriter& aWriter)
{
    iPropertyClockConfig->Write(aWriter);
}

DvProviderAvOpenhomeOrgWebClockConfig1::DvProviderAvOpenhomeOrgWebClockConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebClockConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgWebClockConfig1::DvProviderAvOpenhomeOrgWebClockConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "WebClockConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgWebClockConfig1::Construct()
{
    iPropertyAlive = NULL;
    iPropertyClockConfig = NULL;
}

void DvProviderAvOpenhomeOrgWebClockConfig1::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebClockConfig1::EnablePropertyClockConfig()
{
    iPropertyClockConfig = new PropertyString(new ParameterString("ClockConfig"));
    iService->AddProperty(iPropertyClockConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebClockConfig1::EnableActionGetClockConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetClockConfig");
    action->AddOutputParameter(new ParameterRelated("ClockConfig", *iPropertyClockConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebClockConfig1::DoGetClockConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebClockConfig1::EnableActionSetClockConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetClockConfig");
    action->AddInputParameter(new ParameterRelated("ClockConfig", *iPropertyClockConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebClockConfig1::DoSetClockConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebClockConfig1::DoGetClockConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respClockConfig(aInvocation, "ClockConfig");
    GetClockConfig(invocation, respClockConfig);
}

void DvProviderAvOpenhomeOrgWebClockConfig1::DoSetClockConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ClockConfig;
    aInvocation.InvocationReadString("ClockConfig", ClockConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetClockConfig(invocation, ClockConfig);
}

void DvProviderAvOpenhomeOrgWebClockConfig1::GetClockConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aClockConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebClockConfig1::SetClockConfig(IDvInvocation& /*aResponse*/, const Brx& /*aClockConfig*/)
{
    ASSERTS();
}

