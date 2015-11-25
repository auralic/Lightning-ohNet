#include "DvAvOpenhomeOrgRenderingInfo1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgRenderingInfo1::SetPropertyInfo(const Brx& aValue)
{
    ASSERT(iPropertyInfo != NULL);
    return SetPropertyString(*iPropertyInfo, aValue);
}

void DvProviderAvOpenhomeOrgRenderingInfo1::GetPropertyInfo(Brhz& aValue)
{
    ASSERT(iPropertyInfo != NULL);
    aValue.Set(iPropertyInfo->Value());
}

DvProviderAvOpenhomeOrgRenderingInfo1::DvProviderAvOpenhomeOrgRenderingInfo1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "RenderingInfo", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgRenderingInfo1::DvProviderAvOpenhomeOrgRenderingInfo1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "RenderingInfo", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgRenderingInfo1::Construct()
{
    iPropertyInfo = NULL;
}

void DvProviderAvOpenhomeOrgRenderingInfo1::EnablePropertyInfo()
{
    iPropertyInfo = new PropertyString(new ParameterString("Info"));
    iService->AddProperty(iPropertyInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgRenderingInfo1::EnableActionGetEntireInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetEntireInfo");
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyInfo));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRenderingInfo1::DoGetEntireInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRenderingInfo1::DoGetEntireInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respInfo(aInvocation, "Info");
    GetEntireInfo(invocation, respInfo);
}

void DvProviderAvOpenhomeOrgRenderingInfo1::GetEntireInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aInfo*/)
{
    ASSERTS();
}

