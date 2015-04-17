#include "DvAvOpenhomeOrgSMBInfo1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderAvOpenhomeOrgSMBInfo1Cpp::DvProviderAvOpenhomeOrgSMBInfo1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "SMBInfo", 1)
{
}

void DvProviderAvOpenhomeOrgSMBInfo1Cpp::EnableActionSetSMBConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSMBConfig");
    action->AddInputParameter(new ParameterString("SMBAddr"));
    action->AddInputParameter(new ParameterString("SMBUserName"));
    action->AddInputParameter(new ParameterString("SMBPassWord"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSMBInfo1Cpp::DoSetSMBConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSMBInfo1Cpp::EnableActionGetSMBConnectResult()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSMBConnectResult");
    action->AddOutputParameter(new ParameterBool("SMBConnectResult"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSMBInfo1Cpp::DoGetSMBConnectResult);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSMBInfo1Cpp::EnableActionGetSMBInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSMBInfo");
    action->AddOutputParameter(new ParameterBool("SMBConnectStatus"));
    action->AddOutputParameter(new ParameterString("SMBERRORInfo"));
    action->AddOutputParameter(new ParameterString("SMBCapacity"));
    action->AddOutputParameter(new ParameterString("SMBFileCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSMBInfo1Cpp::DoGetSMBInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSMBInfo1Cpp::DoSetSMBConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_SMBAddr;
    aInvocation.InvocationReadString("SMBAddr", buf_SMBAddr);
    std::string SMBAddr((const char*)buf_SMBAddr.Ptr(), buf_SMBAddr.Bytes());
    Brhz buf_SMBUserName;
    aInvocation.InvocationReadString("SMBUserName", buf_SMBUserName);
    std::string SMBUserName((const char*)buf_SMBUserName.Ptr(), buf_SMBUserName.Bytes());
    Brhz buf_SMBPassWord;
    aInvocation.InvocationReadString("SMBPassWord", buf_SMBPassWord);
    std::string SMBPassWord((const char*)buf_SMBPassWord.Ptr(), buf_SMBPassWord.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetSMBConfig(invocation, SMBAddr, SMBUserName, SMBPassWord);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgSMBInfo1Cpp::DoGetSMBConnectResult(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respSMBConnectResult;
    DvInvocationStd invocation(aInvocation);
    GetSMBConnectResult(invocation, respSMBConnectResult);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterSMBConnectResult(aInvocation, "SMBConnectResult");
    respWriterSMBConnectResult.Write(respSMBConnectResult);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgSMBInfo1Cpp::DoGetSMBInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respSMBConnectStatus;
    std::string respSMBERRORInfo;
    std::string respSMBCapacity;
    std::string respSMBFileCount;
    DvInvocationStd invocation(aInvocation);
    GetSMBInfo(invocation, respSMBConnectStatus, respSMBERRORInfo, respSMBCapacity, respSMBFileCount);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterSMBConnectStatus(aInvocation, "SMBConnectStatus");
    respWriterSMBConnectStatus.Write(respSMBConnectStatus);
    DviInvocationResponseString respWriterSMBERRORInfo(aInvocation, "SMBERRORInfo");
    Brn buf_SMBERRORInfo((const TByte*)respSMBERRORInfo.c_str(), (TUint)respSMBERRORInfo.length());
    respWriterSMBERRORInfo.Write(buf_SMBERRORInfo);
    aInvocation.InvocationWriteStringEnd("SMBERRORInfo");
    DviInvocationResponseString respWriterSMBCapacity(aInvocation, "SMBCapacity");
    Brn buf_SMBCapacity((const TByte*)respSMBCapacity.c_str(), (TUint)respSMBCapacity.length());
    respWriterSMBCapacity.Write(buf_SMBCapacity);
    aInvocation.InvocationWriteStringEnd("SMBCapacity");
    DviInvocationResponseString respWriterSMBFileCount(aInvocation, "SMBFileCount");
    Brn buf_SMBFileCount((const TByte*)respSMBFileCount.c_str(), (TUint)respSMBFileCount.length());
    respWriterSMBFileCount.Write(buf_SMBFileCount);
    aInvocation.InvocationWriteStringEnd("SMBFileCount");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgSMBInfo1Cpp::SetSMBConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aSMBAddr*/, const std::string& /*aSMBUserName*/, const std::string& /*aSMBPassWord*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSMBInfo1Cpp::GetSMBConnectResult(IDvInvocationStd& /*aInvocation*/, bool& /*aSMBConnectResult*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSMBInfo1Cpp::GetSMBInfo(IDvInvocationStd& /*aInvocation*/, bool& /*aSMBConnectStatus*/, std::string& /*aSMBERRORInfo*/, std::string& /*aSMBCapacity*/, std::string& /*aSMBFileCount*/)
{
    ASSERTS();
}

