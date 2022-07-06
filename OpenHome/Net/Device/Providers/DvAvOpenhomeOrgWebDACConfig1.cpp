#include "DvAvOpenhomeOrgWebDACConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgWebDACConfig1::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebDACConfig1::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgWebDACConfig1::SetPropertyDACConfig(const Brx& aValue)
{
    ASSERT(iPropertyDACConfig != NULL);
    return SetPropertyString(*iPropertyDACConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebDACConfig1::GetPropertyDACConfig(Brhz& aValue)
{
    ASSERT(iPropertyDACConfig != NULL);
    aValue.Set(iPropertyDACConfig->Value());
}

void DvProviderAvOpenhomeOrgWebDACConfig1::WritePropertyDACConfig(IWriter& aWriter)
{
    iPropertyDACConfig->Write(aWriter);
}

TBool DvProviderAvOpenhomeOrgWebDACConfig1::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgWebDACConfig1::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

DvProviderAvOpenhomeOrgWebDACConfig1::DvProviderAvOpenhomeOrgWebDACConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebDACConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgWebDACConfig1::DvProviderAvOpenhomeOrgWebDACConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "WebDACConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgWebDACConfig1::Construct()
{
    iPropertyAlive = NULL;
    iPropertyDACConfig = NULL;
    iPropertyCurrentAction = NULL;
}

void DvProviderAvOpenhomeOrgWebDACConfig1::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDACConfig1::EnablePropertyDACConfig()
{
    iPropertyDACConfig = new PropertyString(new ParameterString("DACConfig"));
    iService->AddProperty(iPropertyDACConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDACConfig1::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDACConfig1::EnableActionGetDACConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDACConfig");
    action->AddOutputParameter(new ParameterRelated("DACConfig", *iPropertyDACConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDACConfig1::DoGetDACConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDACConfig1::EnableActionSetDACConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDACConfig");
    action->AddInputParameter(new ParameterRelated("DACConfig", *iPropertyDACConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDACConfig1::DoSetDACConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDACConfig1::DoGetDACConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respDACConfig(aInvocation, "DACConfig");
    GetDACConfig(invocation, respDACConfig);
}

void DvProviderAvOpenhomeOrgWebDACConfig1::DoSetDACConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz DACConfig;
    aInvocation.InvocationReadString("DACConfig", DACConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetDACConfig(invocation, DACConfig);
}

void DvProviderAvOpenhomeOrgWebDACConfig1::GetDACConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aDACConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebDACConfig1::SetDACConfig(IDvInvocation& /*aResponse*/, const Brx& /*aDACConfig*/)
{
    ASSERTS();
}

