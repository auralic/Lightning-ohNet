#include "DvAvOpenhomeOrgWebProcessorConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::SetPropertyAlive(bool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::GetPropertyAlive(bool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

bool DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::SetPropertyProcessorConfig(const std::string& aValue)
{
    ASSERT(iPropertyProcessorConfig != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyProcessorConfig, buf);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::GetPropertyProcessorConfig(std::string& aValue)
{
    ASSERT(iPropertyProcessorConfig != NULL);
    const Brx& val = iPropertyProcessorConfig->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebProcessorConfig", 1)
{
    iPropertyAlive = NULL;
    iPropertyProcessorConfig = NULL;
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::EnablePropertyProcessorConfig()
{
    iPropertyProcessorConfig = new PropertyString(new ParameterString("ProcessorConfig"));
    iService->AddProperty(iPropertyProcessorConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::EnableActionGetProcessorConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetProcessorConfig");
    action->AddOutputParameter(new ParameterRelated("ProcessorConfig", *iPropertyProcessorConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::DoGetProcessorConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::EnableActionSetProcessorConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetProcessorConfig");
    action->AddInputParameter(new ParameterRelated("ProcessorConfig", *iPropertyProcessorConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::DoSetProcessorConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::DoGetProcessorConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respProcessorConfig;
    DvInvocationStd invocation(aInvocation);
    GetProcessorConfig(invocation, respProcessorConfig);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterProcessorConfig(aInvocation, "ProcessorConfig");
    Brn buf_ProcessorConfig((const TByte*)respProcessorConfig.c_str(), (TUint)respProcessorConfig.length());
    respWriterProcessorConfig.Write(buf_ProcessorConfig);
    aInvocation.InvocationWriteStringEnd("ProcessorConfig");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::DoSetProcessorConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ProcessorConfig;
    aInvocation.InvocationReadString("ProcessorConfig", buf_ProcessorConfig);
    std::string ProcessorConfig((const char*)buf_ProcessorConfig.Ptr(), buf_ProcessorConfig.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetProcessorConfig(invocation, ProcessorConfig);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::GetProcessorConfig(IDvInvocationStd& /*aInvocation*/, std::string& /*aProcessorConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp::SetProcessorConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aProcessorConfig*/)
{
    ASSERTS();
}

