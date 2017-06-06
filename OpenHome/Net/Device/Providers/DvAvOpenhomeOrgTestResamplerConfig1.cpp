#include "DvAvOpenhomeOrgTestResamplerConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgTestResamplerConfig1::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

DvProviderAvOpenhomeOrgTestResamplerConfig1::DvProviderAvOpenhomeOrgTestResamplerConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "TestResamplerConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgTestResamplerConfig1::DvProviderAvOpenhomeOrgTestResamplerConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "TestResamplerConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::Construct()
{
    iPropertyCurrentAction = NULL;
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::EnableActionSetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetResamplerConfig");
    action->AddInputParameter(new ParameterString("ResamplerConfig"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1::DoSetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::EnableActionGetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetResamplerConfig");
    action->AddOutputParameter(new ParameterString("ResamplerConfig"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1::DoGetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::EnableActionSetPCMAutoDetect()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPCMAutoDetect");
    action->AddInputParameter(new ParameterBool("PCMAutoDetect"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1::DoSetPCMAutoDetect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::EnableActionGetPCMAutoDetect()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPCMAutoDetect");
    action->AddOutputParameter(new ParameterBool("PCMAutoDetect"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1::DoGetPCMAutoDetect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::EnableActionSetDSDtoPCM()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDSDtoPCM");
    action->AddInputParameter(new ParameterBool("DSDtoPCM"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1::DoSetDSDtoPCM);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::EnableActionGetDSDtoPCM()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDSDtoPCM");
    action->AddOutputParameter(new ParameterBool("DSDtoPCM"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTestResamplerConfig1::DoGetDSDtoPCM);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::DoSetResamplerConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ResamplerConfig;
    aInvocation.InvocationReadString("ResamplerConfig", ResamplerConfig);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetResamplerConfig(invocation, ResamplerConfig);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::DoGetResamplerConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respResamplerConfig(aInvocation, "ResamplerConfig");
    GetResamplerConfig(invocation, respResamplerConfig);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::DoSetPCMAutoDetect(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool PCMAutoDetect = aInvocation.InvocationReadBool("PCMAutoDetect");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetPCMAutoDetect(invocation, PCMAutoDetect);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::DoGetPCMAutoDetect(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respPCMAutoDetect(aInvocation, "PCMAutoDetect");
    GetPCMAutoDetect(invocation, respPCMAutoDetect);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::DoSetDSDtoPCM(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool DSDtoPCM = aInvocation.InvocationReadBool("DSDtoPCM");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetDSDtoPCM(invocation, DSDtoPCM);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::DoGetDSDtoPCM(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respDSDtoPCM(aInvocation, "DSDtoPCM");
    GetDSDtoPCM(invocation, respDSDtoPCM);
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::SetResamplerConfig(IDvInvocation& /*aResponse*/, const Brx& /*aResamplerConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::GetResamplerConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aResamplerConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::SetPCMAutoDetect(IDvInvocation& /*aResponse*/, TBool /*aPCMAutoDetect*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::GetPCMAutoDetect(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aPCMAutoDetect*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::SetDSDtoPCM(IDvInvocation& /*aResponse*/, TBool /*aDSDtoPCM*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTestResamplerConfig1::GetDSDtoPCM(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aDSDtoPCM*/)
{
    ASSERTS();
}

