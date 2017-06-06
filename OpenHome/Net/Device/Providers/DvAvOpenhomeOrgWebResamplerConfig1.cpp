#include "DvAvOpenhomeOrgWebResamplerConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgWebResamplerConfig1::SetPropertyResamplerConfig(const Brx& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    return SetPropertyString(*iPropertyResamplerConfig, aValue);
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1::GetPropertyResamplerConfig(Brhz& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    aValue.Set(iPropertyResamplerConfig->Value());
}

DvProviderAvOpenhomeOrgWebResamplerConfig1::DvProviderAvOpenhomeOrgWebResamplerConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebResamplerConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgWebResamplerConfig1::DvProviderAvOpenhomeOrgWebResamplerConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "WebResamplerConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1::Construct()
{
    iPropertyResamplerConfig = NULL;
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1::EnablePropertyResamplerConfig()
{
    iPropertyResamplerConfig = new PropertyString(new ParameterString("ResamplerConfig"));
    iService->AddProperty(iPropertyResamplerConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1::EnableActionGetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetResamplerConfig");
    action->AddOutputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebResamplerConfig1::DoGetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1::EnableActionSetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetResamplerConfig");
    action->AddInputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebResamplerConfig1::DoSetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1::DoGetResamplerConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respResamplerConfig(aInvocation, "ResamplerConfig");
    GetResamplerConfig(invocation, respResamplerConfig);
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1::DoSetResamplerConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ResamplerConfig;
    aInvocation.InvocationReadString("ResamplerConfig", ResamplerConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetResamplerConfig(invocation, ResamplerConfig);
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1::GetResamplerConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aResamplerConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1::SetResamplerConfig(IDvInvocation& /*aResponse*/, const Brx& /*aResamplerConfig*/)
{
    ASSERTS();
}

