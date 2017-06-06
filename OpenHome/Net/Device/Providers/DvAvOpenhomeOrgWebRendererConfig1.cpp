#include "DvAvOpenhomeOrgWebRendererConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgWebRendererConfig1::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgWebRendererConfig1::SetPropertyRendererConfig(const Brx& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    return SetPropertyString(*iPropertyRendererConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::GetPropertyRendererConfig(Brhz& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    aValue.Set(iPropertyRendererConfig->Value());
}

TBool DvProviderAvOpenhomeOrgWebRendererConfig1::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

DvProviderAvOpenhomeOrgWebRendererConfig1::DvProviderAvOpenhomeOrgWebRendererConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebRendererConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgWebRendererConfig1::DvProviderAvOpenhomeOrgWebRendererConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "WebRendererConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::Construct()
{
    iPropertyAlive = NULL;
    iPropertyRendererConfig = NULL;
    iPropertyCurrentAction = NULL;
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::EnablePropertyRendererConfig()
{
    iPropertyRendererConfig = new PropertyString(new ParameterString("RendererConfig"));
    iService->AddProperty(iPropertyRendererConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::EnableActionGetRendererConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRendererConfig");
    action->AddOutputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebRendererConfig1::DoGetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::EnableActionSetRendererConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRendererConfig");
    action->AddInputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebRendererConfig1::DoSetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::DoGetRendererConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respRendererConfig(aInvocation, "RendererConfig");
    GetRendererConfig(invocation, respRendererConfig);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::DoSetRendererConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz RendererConfig;
    aInvocation.InvocationReadString("RendererConfig", RendererConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetRendererConfig(invocation, RendererConfig);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::GetRendererConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aRendererConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebRendererConfig1::SetRendererConfig(IDvInvocation& /*aResponse*/, const Brx& /*aRendererConfig*/)
{
    ASSERTS();
}

