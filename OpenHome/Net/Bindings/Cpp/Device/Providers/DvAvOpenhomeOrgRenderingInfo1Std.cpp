#include "DvAvOpenhomeOrgRenderingInfo1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgRenderingInfo1Cpp::SetPropertyInfo(const std::string& aValue)
{
    ASSERT(iPropertyInfo != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyInfo, buf);
}

void DvProviderAvOpenhomeOrgRenderingInfo1Cpp::GetPropertyInfo(std::string& aValue)
{
    ASSERT(iPropertyInfo != NULL);
    const Brx& val = iPropertyInfo->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgRenderingInfo1Cpp::DvProviderAvOpenhomeOrgRenderingInfo1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "RenderingInfo", 1)
{
    iPropertyInfo = NULL;
}

void DvProviderAvOpenhomeOrgRenderingInfo1Cpp::EnablePropertyInfo()
{
    iPropertyInfo = new PropertyString(new ParameterString("Info"));
    iService->AddProperty(iPropertyInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgRenderingInfo1Cpp::EnableActionGetEntireInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetEntireInfo");
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyInfo));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRenderingInfo1Cpp::DoGetEntireInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRenderingInfo1Cpp::DoGetEntireInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respInfo;
    DvInvocationStd invocation(aInvocation);
    GetEntireInfo(invocation, respInfo);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterInfo(aInvocation, "Info");
    Brn buf_Info((const TByte*)respInfo.c_str(), (TUint)respInfo.length());
    respWriterInfo.Write(buf_Info);
    aInvocation.InvocationWriteStringEnd("Info");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgRenderingInfo1Cpp::GetEntireInfo(IDvInvocationStd& /*aInvocation*/, std::string& /*aInfo*/)
{
    ASSERTS();
}

