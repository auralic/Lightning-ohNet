#include "DvAvOpenhomeOrgWebRendererConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::SetPropertyAlive(bool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::GetPropertyAlive(bool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

bool DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::SetPropertyRendererConfig(const std::string& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyRendererConfig, buf);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::GetPropertyRendererConfig(std::string& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    const Brx& val = iPropertyRendererConfig->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::SetPropertyCurrentAction(uint32_t aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::GetPropertyCurrentAction(uint32_t& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::DvProviderAvOpenhomeOrgWebRendererConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebRendererConfig", 1)
{
    iPropertyAlive = NULL;
    iPropertyRendererConfig = NULL;
    iPropertyCurrentAction = NULL;
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::EnablePropertyRendererConfig()
{
    iPropertyRendererConfig = new PropertyString(new ParameterString("RendererConfig"));
    iService->AddProperty(iPropertyRendererConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::EnableActionGetRendererConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRendererConfig");
    action->AddOutputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::DoGetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::EnableActionSetRendererConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRendererConfig");
    action->AddInputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::DoSetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::DoGetRendererConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respRendererConfig;
    DvInvocationStd invocation(aInvocation);
    GetRendererConfig(invocation, respRendererConfig);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterRendererConfig(aInvocation, "RendererConfig");
    Brn buf_RendererConfig((const TByte*)respRendererConfig.c_str(), (TUint)respRendererConfig.length());
    respWriterRendererConfig.Write(buf_RendererConfig);
    aInvocation.InvocationWriteStringEnd("RendererConfig");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::DoSetRendererConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_RendererConfig;
    aInvocation.InvocationReadString("RendererConfig", buf_RendererConfig);
    std::string RendererConfig((const char*)buf_RendererConfig.Ptr(), buf_RendererConfig.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetRendererConfig(invocation, RendererConfig);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::GetRendererConfig(IDvInvocationStd& /*aInvocation*/, std::string& /*aRendererConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebRendererConfig1Cpp::SetRendererConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aRendererConfig*/)
{
    ASSERTS();
}

