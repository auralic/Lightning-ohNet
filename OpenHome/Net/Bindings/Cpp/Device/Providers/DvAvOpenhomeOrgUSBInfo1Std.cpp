#include "DvAvOpenhomeOrgUSBInfo1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderAvOpenhomeOrgUSBInfo1Cpp::DvProviderAvOpenhomeOrgUSBInfo1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "USBInfo", 1)
{
}

void DvProviderAvOpenhomeOrgUSBInfo1Cpp::EnableActionGetUSBInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUSBInfo");
    action->AddOutputParameter(new ParameterBool("USBPlugStatus"));
    action->AddOutputParameter(new ParameterString("USBERRORInfo"));
    action->AddOutputParameter(new ParameterString("USBCapacity"));
    action->AddOutputParameter(new ParameterString("USBFileCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgUSBInfo1Cpp::DoGetUSBInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgUSBInfo1Cpp::DoGetUSBInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respUSBPlugStatus;
    std::string respUSBERRORInfo;
    std::string respUSBCapacity;
    std::string respUSBFileCount;
    DvInvocationStd invocation(aInvocation);
    GetUSBInfo(invocation, respUSBPlugStatus, respUSBERRORInfo, respUSBCapacity, respUSBFileCount);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterUSBPlugStatus(aInvocation, "USBPlugStatus");
    respWriterUSBPlugStatus.Write(respUSBPlugStatus);
    DviInvocationResponseString respWriterUSBERRORInfo(aInvocation, "USBERRORInfo");
    Brn buf_USBERRORInfo((const TByte*)respUSBERRORInfo.c_str(), (TUint)respUSBERRORInfo.length());
    respWriterUSBERRORInfo.Write(buf_USBERRORInfo);
    aInvocation.InvocationWriteStringEnd("USBERRORInfo");
    DviInvocationResponseString respWriterUSBCapacity(aInvocation, "USBCapacity");
    Brn buf_USBCapacity((const TByte*)respUSBCapacity.c_str(), (TUint)respUSBCapacity.length());
    respWriterUSBCapacity.Write(buf_USBCapacity);
    aInvocation.InvocationWriteStringEnd("USBCapacity");
    DviInvocationResponseString respWriterUSBFileCount(aInvocation, "USBFileCount");
    Brn buf_USBFileCount((const TByte*)respUSBFileCount.c_str(), (TUint)respUSBFileCount.length());
    respWriterUSBFileCount.Write(buf_USBFileCount);
    aInvocation.InvocationWriteStringEnd("USBFileCount");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgUSBInfo1Cpp::GetUSBInfo(IDvInvocationStd& /*aInvocation*/, bool& /*aUSBPlugStatus*/, std::string& /*aUSBERRORInfo*/, std::string& /*aUSBCapacity*/, std::string& /*aUSBFileCount*/)
{
    ASSERTS();
}

