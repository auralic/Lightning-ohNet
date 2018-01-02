#include "DvAvOpenhomeOrgWebClockConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgWebClockConfig1Cpp::SetPropertyAlive(bool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgWebClockConfig1Cpp::GetPropertyAlive(bool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

bool DvProviderAvOpenhomeOrgWebClockConfig1Cpp::SetPropertyClockConfig(const std::string& aValue)
{
    ASSERT(iPropertyClockConfig != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyClockConfig, buf);
}

void DvProviderAvOpenhomeOrgWebClockConfig1Cpp::GetPropertyClockConfig(std::string& aValue)
{
    ASSERT(iPropertyClockConfig != NULL);
    const Brx& val = iPropertyClockConfig->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgWebClockConfig1Cpp::DvProviderAvOpenhomeOrgWebClockConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "WebClockConfig", 1)
{
    iPropertyAlive = NULL;
    iPropertyClockConfig = NULL;
}

void DvProviderAvOpenhomeOrgWebClockConfig1Cpp::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgWebClockConfig1Cpp::EnablePropertyClockConfig()
{
    iPropertyClockConfig = new PropertyString(new ParameterString("ClockConfig"));
    iService->AddProperty(iPropertyClockConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgWebClockConfig1Cpp::EnableActionGetClockConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetClockConfig");
    action->AddOutputParameter(new ParameterRelated("ClockConfig", *iPropertyClockConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebClockConfig1Cpp::DoGetClockConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebClockConfig1Cpp::EnableActionSetClockConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetClockConfig");
    action->AddInputParameter(new ParameterRelated("ClockConfig", *iPropertyClockConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgWebClockConfig1Cpp::DoSetClockConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgWebClockConfig1Cpp::DoGetClockConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respClockConfig;
    DvInvocationStd invocation(aInvocation);
    GetClockConfig(invocation, respClockConfig);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterClockConfig(aInvocation, "ClockConfig");
    Brn buf_ClockConfig((const TByte*)respClockConfig.c_str(), (TUint)respClockConfig.length());
    respWriterClockConfig.Write(buf_ClockConfig);
    aInvocation.InvocationWriteStringEnd("ClockConfig");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebClockConfig1Cpp::DoSetClockConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ClockConfig;
    aInvocation.InvocationReadString("ClockConfig", buf_ClockConfig);
    std::string ClockConfig((const char*)buf_ClockConfig.Ptr(), buf_ClockConfig.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetClockConfig(invocation, ClockConfig);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgWebClockConfig1Cpp::GetClockConfig(IDvInvocationStd& /*aInvocation*/, std::string& /*aClockConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgWebClockConfig1Cpp::SetClockConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aClockConfig*/)
{
    ASSERTS();
}

