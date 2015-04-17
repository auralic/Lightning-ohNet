#include "DvAvOpenhomeOrgUSBInfo1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderAvOpenhomeOrgUSBInfo1::DvProviderAvOpenhomeOrgUSBInfo1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "USBInfo", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgUSBInfo1::DvProviderAvOpenhomeOrgUSBInfo1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "USBInfo", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgUSBInfo1::Construct()
{
}

void DvProviderAvOpenhomeOrgUSBInfo1::EnableActionGetUSBInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUSBInfo");
    action->AddOutputParameter(new ParameterBool("USBPlugStatus"));
    action->AddOutputParameter(new ParameterString("USBERRORInfo"));
    action->AddOutputParameter(new ParameterString("USBCapacity"));
    action->AddOutputParameter(new ParameterString("USBFileCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgUSBInfo1::DoGetUSBInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgUSBInfo1::DoGetUSBInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respUSBPlugStatus(aInvocation, "USBPlugStatus");
    DviInvocationResponseString respUSBERRORInfo(aInvocation, "USBERRORInfo");
    DviInvocationResponseString respUSBCapacity(aInvocation, "USBCapacity");
    DviInvocationResponseString respUSBFileCount(aInvocation, "USBFileCount");
    GetUSBInfo(invocation, respUSBPlugStatus, respUSBERRORInfo, respUSBCapacity, respUSBFileCount);
}

void DvProviderAvOpenhomeOrgUSBInfo1::GetUSBInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aUSBPlugStatus*/, IDvInvocationResponseString& /*aUSBERRORInfo*/, IDvInvocationResponseString& /*aUSBCapacity*/, IDvInvocationResponseString& /*aUSBFileCount*/)
{
    ASSERTS();
}

