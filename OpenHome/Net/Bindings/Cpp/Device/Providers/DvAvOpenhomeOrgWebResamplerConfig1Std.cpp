#include "DvAvOpenhomeOrgWebResamplerConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::SetPropertyResamplerConfig(const std::string& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyResamplerConfig, buf);
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::GetPropertyResamplerConfig(std::string& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    const Brx& val = iPropertyResamplerConfig->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebResamplerConfig", 1)
{
    iPropertyResamplerConfig = NULL;
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::EnablePropertyResamplerConfig()
{
    iPropertyResamplerConfig = new PropertyString(new ParameterString("ResamplerConfig"));
    iService->AddProperty(iPropertyResamplerConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::EnableActionGetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetResamplerConfig");
    action->AddOutputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::DoGetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::EnableActionSetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetResamplerConfig");
    action->AddInputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::DoSetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::DoGetResamplerConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::DoSetResamplerConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::GetResamplerConfig(IDvInvocationStd& /*aInvocation*/, std::string& /*aResamplerConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp::SetResamplerConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aResamplerConfig*/)
{
    ASSERTS();
}

