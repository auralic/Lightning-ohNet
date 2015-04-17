#include "DvAvOpenhomeOrgSMBInfo1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderAvOpenhomeOrgSMBInfo1::DvProviderAvOpenhomeOrgSMBInfo1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "SMBInfo", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgSMBInfo1::DvProviderAvOpenhomeOrgSMBInfo1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "SMBInfo", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgSMBInfo1::Construct()
{
}

void DvProviderAvOpenhomeOrgSMBInfo1::EnableActionSetSMBConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSMBConfig");
    action->AddInputParameter(new ParameterString("SMBAddr"));
    action->AddInputParameter(new ParameterString("SMBUserName"));
    action->AddInputParameter(new ParameterString("SMBPassWord"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSMBInfo1::DoSetSMBConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSMBInfo1::EnableActionGetSMBConnectResult()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSMBConnectResult");
    action->AddOutputParameter(new ParameterBool("SMBConnectResult"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSMBInfo1::DoGetSMBConnectResult);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSMBInfo1::EnableActionGetSMBInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSMBInfo");
    action->AddOutputParameter(new ParameterBool("SMBConnectStatus"));
    action->AddOutputParameter(new ParameterString("SMBERRORInfo"));
    action->AddOutputParameter(new ParameterString("SMBCapacity"));
    action->AddOutputParameter(new ParameterString("SMBFileCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSMBInfo1::DoGetSMBInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSMBInfo1::DoSetSMBConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz SMBAddr;
    aInvocation.InvocationReadString("SMBAddr", SMBAddr);
    Brhz SMBUserName;
    aInvocation.InvocationReadString("SMBUserName", SMBUserName);
    Brhz SMBPassWord;
    aInvocation.InvocationReadString("SMBPassWord", SMBPassWord);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetSMBConfig(invocation, SMBAddr, SMBUserName, SMBPassWord);
}

void DvProviderAvOpenhomeOrgSMBInfo1::DoGetSMBConnectResult(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respSMBConnectResult(aInvocation, "SMBConnectResult");
    GetSMBConnectResult(invocation, respSMBConnectResult);
}

void DvProviderAvOpenhomeOrgSMBInfo1::DoGetSMBInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respSMBConnectStatus(aInvocation, "SMBConnectStatus");
    DviInvocationResponseString respSMBERRORInfo(aInvocation, "SMBERRORInfo");
    DviInvocationResponseString respSMBCapacity(aInvocation, "SMBCapacity");
    DviInvocationResponseString respSMBFileCount(aInvocation, "SMBFileCount");
    GetSMBInfo(invocation, respSMBConnectStatus, respSMBERRORInfo, respSMBCapacity, respSMBFileCount);
}

void DvProviderAvOpenhomeOrgSMBInfo1::SetSMBConfig(IDvInvocation& /*aResponse*/, const Brx& /*aSMBAddr*/, const Brx& /*aSMBUserName*/, const Brx& /*aSMBPassWord*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSMBInfo1::GetSMBConnectResult(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aSMBConnectResult*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSMBInfo1::GetSMBInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aSMBConnectStatus*/, IDvInvocationResponseString& /*aSMBERRORInfo*/, IDvInvocationResponseString& /*aSMBCapacity*/, IDvInvocationResponseString& /*aSMBFileCount*/)
{
    ASSERTS();
}

