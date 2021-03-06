#include "DvAvOpenhomeOrgResamplerConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgResamplerConfig1Cpp::SetPropertyCurrentAction(uint32_t aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::GetPropertyCurrentAction(uint32_t& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DvProviderAvOpenhomeOrgResamplerConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "ResamplerConfig", 1)
{
    iPropertyCurrentAction = NULL;
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::EnableActionSetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetResamplerConfig");
    action->AddInputParameter(new ParameterString("ResamplerConfig"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoSetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::EnableActionGetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetResamplerConfig");
    action->AddOutputParameter(new ParameterString("ResamplerConfig"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoGetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::EnableActionSetPCMAutoDetect()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPCMAutoDetect");
    action->AddInputParameter(new ParameterBool("PCMAutoDetect"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoSetPCMAutoDetect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::EnableActionGetPCMAutoDetect()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPCMAutoDetect");
    action->AddOutputParameter(new ParameterBool("PCMAutoDetect"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoGetPCMAutoDetect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::EnableActionSetDSDtoPCM()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDSDtoPCM");
    action->AddInputParameter(new ParameterBool("DSDtoPCM"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoSetDSDtoPCM);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::EnableActionGetDSDtoPCM()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDSDtoPCM");
    action->AddOutputParameter(new ParameterBool("DSDtoPCM"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoGetDSDtoPCM);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoSetResamplerConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ResamplerConfig;
    aInvocation.InvocationReadString("ResamplerConfig", buf_ResamplerConfig);
    std::string ResamplerConfig((const char*)buf_ResamplerConfig.Ptr(), buf_ResamplerConfig.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetResamplerConfig(invocation, ResamplerConfig);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoGetResamplerConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respResamplerConfig;
    DvInvocationStd invocation(aInvocation);
    GetResamplerConfig(invocation, respResamplerConfig);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterResamplerConfig(aInvocation, "ResamplerConfig");
    Brn buf_ResamplerConfig((const TByte*)respResamplerConfig.c_str(), (TUint)respResamplerConfig.length());
    respWriterResamplerConfig.Write(buf_ResamplerConfig);
    aInvocation.InvocationWriteStringEnd("ResamplerConfig");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoSetPCMAutoDetect(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    bool PCMAutoDetect = aInvocation.InvocationReadBool("PCMAutoDetect");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetPCMAutoDetect(invocation, PCMAutoDetect);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoGetPCMAutoDetect(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respPCMAutoDetect;
    DvInvocationStd invocation(aInvocation);
    GetPCMAutoDetect(invocation, respPCMAutoDetect);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterPCMAutoDetect(aInvocation, "PCMAutoDetect");
    respWriterPCMAutoDetect.Write(respPCMAutoDetect);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoSetDSDtoPCM(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    bool DSDtoPCM = aInvocation.InvocationReadBool("DSDtoPCM");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetDSDtoPCM(invocation, DSDtoPCM);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::DoGetDSDtoPCM(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respDSDtoPCM;
    DvInvocationStd invocation(aInvocation);
    GetDSDtoPCM(invocation, respDSDtoPCM);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterDSDtoPCM(aInvocation, "DSDtoPCM");
    respWriterDSDtoPCM.Write(respDSDtoPCM);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::SetResamplerConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aResamplerConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::GetResamplerConfig(IDvInvocationStd& /*aInvocation*/, std::string& /*aResamplerConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::SetPCMAutoDetect(IDvInvocationStd& /*aInvocation*/, bool /*aPCMAutoDetect*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::GetPCMAutoDetect(IDvInvocationStd& /*aInvocation*/, bool& /*aPCMAutoDetect*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::SetDSDtoPCM(IDvInvocationStd& /*aInvocation*/, bool /*aDSDtoPCM*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgResamplerConfig1Cpp::GetDSDtoPCM(IDvInvocationStd& /*aInvocation*/, bool& /*aDSDtoPCM*/)
{
    ASSERTS();
}

