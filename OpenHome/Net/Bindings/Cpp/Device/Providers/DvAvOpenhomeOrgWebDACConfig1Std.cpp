#include "DvAvOpenhomeOrgWebDACConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgWebDACConfig1Cpp::SetPropertyAlive(bool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::GetPropertyAlive(bool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

bool DvProviderAvOpenhomeOrgWebDACConfig1Cpp::SetPropertyDACConfig(const std::string& aValue)
{
    ASSERT(iPropertyDACConfig != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyDACConfig, buf);
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::GetPropertyDACConfig(std::string& aValue)
{
    ASSERT(iPropertyDACConfig != NULL);
    const Brx& val = iPropertyDACConfig->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgWebDACConfig1Cpp::SetPropertyCurrentAction(uint32_t aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::GetPropertyCurrentAction(uint32_t& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

DvProviderAvOpenhomeOrgWebDACConfig1Cpp::DvProviderAvOpenhomeOrgWebDACConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebDACConfig", 1)
{
    iPropertyAlive = NULL;
    iPropertyDACConfig = NULL;
    iPropertyCurrentAction = NULL;
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::EnablePropertyDACConfig()
{
    iPropertyDACConfig = new PropertyString(new ParameterString("DACConfig"));
    iService->AddProperty(iPropertyDACConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::EnableActionGetDACConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDACConfig");
    action->AddOutputParameter(new ParameterRelated("DACConfig", *iPropertyDACConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDACConfig1Cpp::DoGetDACConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::EnableActionSetDACConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDACConfig");
    action->AddInputParameter(new ParameterRelated("DACConfig", *iPropertyDACConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebDACConfig1Cpp::DoSetDACConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::DoGetDACConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respDACConfig;
    DvInvocationStd invocation(aInvocation);
    GetDACConfig(invocation, respDACConfig);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterDACConfig(aInvocation, "DACConfig");
    Brn buf_DACConfig((const TByte*)respDACConfig.c_str(), (TUint)respDACConfig.length());
    respWriterDACConfig.Write(buf_DACConfig);
    aInvocation.InvocationWriteStringEnd("DACConfig");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::DoSetDACConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_DACConfig;
    aInvocation.InvocationReadString("DACConfig", buf_DACConfig);
    std::string DACConfig((const char*)buf_DACConfig.Ptr(), buf_DACConfig.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetDACConfig(invocation, DACConfig);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::GetDACConfig(IDvInvocationStd& /*aInvocation*/, std::string& /*aDACConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebDACConfig1Cpp::SetDACConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDACConfig*/)
{
    ASSERTS();
}

