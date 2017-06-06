#include "DvAvOpenhomeOrgRendererConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgRendererConfig1Cpp::SetPropertyRendererConfig(const std::string& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyRendererConfig, buf);
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::GetPropertyRendererConfig(std::string& aValue)
{
    ASSERT(iPropertyRendererConfig != NULL);
    const Brx& val = iPropertyRendererConfig->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgRendererConfig1Cpp::SetPropertyResamplerConfig(const std::string& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyResamplerConfig, buf);
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::GetPropertyResamplerConfig(std::string& aValue)
{
    ASSERT(iPropertyResamplerConfig != NULL);
    const Brx& val = iPropertyResamplerConfig->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgRendererConfig1Cpp::SetPropertyHardwareConfig(const std::string& aValue)
{
    ASSERT(iPropertyHardwareConfig != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyHardwareConfig, buf);
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::GetPropertyHardwareConfig(std::string& aValue)
{
    ASSERT(iPropertyHardwareConfig != NULL);
    const Brx& val = iPropertyHardwareConfig->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgRendererConfig1Cpp::DvProviderAvOpenhomeOrgRendererConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "RendererConfig", 1)
{
    iPropertyRendererConfig = NULL;
    iPropertyResamplerConfig = NULL;
    iPropertyHardwareConfig = NULL;
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::EnablePropertyRendererConfig()
{
    iPropertyRendererConfig = new PropertyString(new ParameterString("RendererConfig"));
    iService->AddProperty(iPropertyRendererConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::EnablePropertyResamplerConfig()
{
    iPropertyResamplerConfig = new PropertyString(new ParameterString("ResamplerConfig"));
    iService->AddProperty(iPropertyResamplerConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::EnablePropertyHardwareConfig()
{
    iPropertyHardwareConfig = new PropertyString(new ParameterString("HardwareConfig"));
    iService->AddProperty(iPropertyHardwareConfig); // passes ownership
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::EnableActionGetRendererConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRendererConfig");
    action->AddOutputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoGetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::EnableActionSetRendererConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRendererConfig");
    action->AddInputParameter(new ParameterRelated("RendererConfig", *iPropertyRendererConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoSetRendererConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::EnableActionGetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetResamplerConfig");
    action->AddOutputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoGetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::EnableActionSetResamplerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetResamplerConfig");
    action->AddInputParameter(new ParameterRelated("ResamplerConfig", *iPropertyResamplerConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoSetResamplerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::EnableActionGetHardwareConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHardwareConfig");
    action->AddOutputParameter(new ParameterRelated("HardwareConfig", *iPropertyHardwareConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoGetHardwareConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::EnableActionSetHardwareConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetHardwareConfig");
    action->AddInputParameter(new ParameterRelated("HardwareConfig", *iPropertyHardwareConfig));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoSetHardwareConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::EnableActionGetWiFiList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWiFiList");
    action->AddOutputParameter(new ParameterString("WiFiList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoGetWiFiList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::EnableActionSetTimeZone()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTimeZone");
    action->AddInputParameter(new ParameterString("TimeZone"));
    action->AddInputParameter(new ParameterString("CurrentTime"));
    action->AddInputParameter(new ParameterString("TimeStamp"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoSetTimeZone);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoGetRendererConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoSetRendererConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoGetResamplerConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoSetResamplerConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoGetHardwareConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respHardwareConfig;
    DvInvocationStd invocation(aInvocation);
    GetHardwareConfig(invocation, respHardwareConfig);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterHardwareConfig(aInvocation, "HardwareConfig");
    Brn buf_HardwareConfig((const TByte*)respHardwareConfig.c_str(), (TUint)respHardwareConfig.length());
    respWriterHardwareConfig.Write(buf_HardwareConfig);
    aInvocation.InvocationWriteStringEnd("HardwareConfig");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoSetHardwareConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_HardwareConfig;
    aInvocation.InvocationReadString("HardwareConfig", buf_HardwareConfig);
    std::string HardwareConfig((const char*)buf_HardwareConfig.Ptr(), buf_HardwareConfig.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetHardwareConfig(invocation, HardwareConfig);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoGetWiFiList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respWiFiList;
    DvInvocationStd invocation(aInvocation);
    GetWiFiList(invocation, respWiFiList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterWiFiList(aInvocation, "WiFiList");
    Brn buf_WiFiList((const TByte*)respWiFiList.c_str(), (TUint)respWiFiList.length());
    respWriterWiFiList.Write(buf_WiFiList);
    aInvocation.InvocationWriteStringEnd("WiFiList");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::DoSetTimeZone(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_TimeZone;
    aInvocation.InvocationReadString("TimeZone", buf_TimeZone);
    std::string TimeZone((const char*)buf_TimeZone.Ptr(), buf_TimeZone.Bytes());
    Brhz buf_CurrentTime;
    aInvocation.InvocationReadString("CurrentTime", buf_CurrentTime);
    std::string CurrentTime((const char*)buf_CurrentTime.Ptr(), buf_CurrentTime.Bytes());
    Brhz buf_TimeStamp;
    aInvocation.InvocationReadString("TimeStamp", buf_TimeStamp);
    std::string TimeStamp((const char*)buf_TimeStamp.Ptr(), buf_TimeStamp.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetTimeZone(invocation, TimeZone, CurrentTime, TimeStamp);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::GetRendererConfig(IDvInvocationStd& /*aInvocation*/, std::string& /*aRendererConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::SetRendererConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aRendererConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::GetResamplerConfig(IDvInvocationStd& /*aInvocation*/, std::string& /*aResamplerConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::SetResamplerConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aResamplerConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::GetHardwareConfig(IDvInvocationStd& /*aInvocation*/, std::string& /*aHardwareConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::SetHardwareConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aHardwareConfig*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::GetWiFiList(IDvInvocationStd& /*aInvocation*/, std::string& /*aWiFiList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRendererConfig1Cpp::SetTimeZone(IDvInvocationStd& /*aInvocation*/, const std::string& /*aTimeZone*/, const std::string& /*aCurrentTime*/, const std::string& /*aTimeStamp*/)
{
    ASSERTS();
}

