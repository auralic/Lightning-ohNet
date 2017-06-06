#include "DvAvOpenhomeOrgWebProcessorConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgWebProcessorConfig1::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgWebProcessorConfig1::SetPropertyProcessorConfig(const Brx& aValue)
{
    ASSERT(iPropertyProcessorConfig != NULL);
    return SetPropertyString(*iPropertyProcessorConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1::GetPropertyProcessorConfig(Brhz& aValue)
{
    ASSERT(iPropertyProcessorConfig != NULL);
    aValue.Set(iPropertyProcessorConfig->Value());
}

DvProviderAvOpenhomeOrgWebProcessorConfig1::DvProviderAvOpenhomeOrgWebProcessorConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebProcessorConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgWebProcessorConfig1::DvProviderAvOpenhomeOrgWebProcessorConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "WebProcessorConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1::Construct()
{
    iPropertyAlive = NULL;
    iPropertyProcessorConfig = NULL;
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1::EnablePropertyProcessorConfig()
{
    iPropertyProcessorConfig = new PropertyString(new ParameterString("ProcessorConfig"));
    iService->AddProperty(iPropertyProcessorConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1::EnableActionGetProcessorConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetProcessorConfig");
    action->AddOutputParameter(new ParameterRelated("ProcessorConfig", *iPropertyProcessorConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebProcessorConfig1::DoGetProcessorConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1::EnableActionSetProcessorConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetProcessorConfig");
    action->AddInputParameter(new ParameterRelated("ProcessorConfig", *iPropertyProcessorConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebProcessorConfig1::DoSetProcessorConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1::DoGetProcessorConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respProcessorConfig(aInvocation, "ProcessorConfig");
    GetProcessorConfig(invocation, respProcessorConfig);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1::DoSetProcessorConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ProcessorConfig;
    aInvocation.InvocationReadString("ProcessorConfig", ProcessorConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetProcessorConfig(invocation, ProcessorConfig);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1::GetProcessorConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aProcessorConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1::SetProcessorConfig(IDvInvocation& /*aResponse*/, const Brx& /*aProcessorConfig*/)
{
    ASSERTS();
}

