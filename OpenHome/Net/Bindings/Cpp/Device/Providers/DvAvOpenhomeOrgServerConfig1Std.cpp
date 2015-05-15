#include "DvAvOpenhomeOrgServerConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgServerConfig1Cpp::SetPropertyAlive(bool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::GetPropertyAlive(bool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

DvProviderAvOpenhomeOrgServerConfig1Cpp::DvProviderAvOpenhomeOrgServerConfig1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "ServerConfig", 1)
{
    iPropertyAlive = NULL;
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(iDvStack.Env(), new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionSetServerName()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetServerName");
    action->AddInputParameter(new ParameterString("ServerName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoSetServerName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionGetServerVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServerVersion");
    action->AddOutputParameter(new ParameterString("ServerVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetServerVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionGetProgressInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetProgressInfo");
    action->AddOutputParameter(new ParameterString("Progress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetProgressInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionGetScanVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetScanVersion");
    action->AddOutputParameter(new ParameterString("ScanVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetScanVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionGetWorkMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWorkMode");
    action->AddOutputParameter(new ParameterString("WorkMode"));
    action->AddOutputParameter(new ParameterString("WorkModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetWorkMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionSetWorkMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetWorkMode");
    action->AddInputParameter(new ParameterString("WorkMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoSetWorkMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionDelAllLocalDB()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DelAllLocalDB");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoDelAllLocalDB);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionInitHDD()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InitHDD");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoInitHDD);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionRescan()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Rescan");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoRescan);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionHandMount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("HandMount");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoHandMount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionHandUMount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("HandUMount");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoHandUMount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionGetDiskInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDiskInfo");
    action->AddOutputParameter(new ParameterBool("IsConnected"));
    action->AddOutputParameter(new ParameterString("StatusCode"));
    action->AddOutputParameter(new ParameterString("StatusInfo"));
    action->AddOutputParameter(new ParameterString("Capacity"));
    action->AddOutputParameter(new ParameterString("FileCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetDiskInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionGetSMBConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSMBConfig");
    action->AddOutputParameter(new ParameterString("SMBAddr"));
    action->AddOutputParameter(new ParameterString("SMBUserName"));
    action->AddOutputParameter(new ParameterString("SMBPassWord"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetSMBConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionSetSMBConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSMBConfig");
    action->AddInputParameter(new ParameterString("SMBAddr"));
    action->AddInputParameter(new ParameterString("SMBUserName"));
    action->AddInputParameter(new ParameterString("SMBPassWord"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoSetSMBConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionGetDriveMountResult()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDriveMountResult");
    action->AddOutputParameter(new ParameterBool("DriveMountResult"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetDriveMountResult);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionEditTrack()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EditTrack");
    action->AddInputParameter(new ParameterString("EditValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoEditTrack);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionScanVersionDiff()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ScanVersionDiff");
    action->AddOutputParameter(new ParameterString("ScanVersionDiffValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoScanVersionDiff);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionGetInitHDDResult()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetInitHDDResult");
    action->AddOutputParameter(new ParameterBool("InitHDDResult"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetInitHDDResult);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EnableActionGetHDDHasInited()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHDDHasInited");
    action->AddOutputParameter(new ParameterBool("HDDHasInited"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetHDDHasInited);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoSetServerName(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ServerName;
    aInvocation.InvocationReadString("ServerName", buf_ServerName);
    std::string ServerName((const char*)buf_ServerName.Ptr(), buf_ServerName.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetServerName(invocation, ServerName);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetServerVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respServerVersion;
    DvInvocationStd invocation(aInvocation);
    GetServerVersion(invocation, respServerVersion);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterServerVersion(aInvocation, "ServerVersion");
    Brn buf_ServerVersion((const TByte*)respServerVersion.c_str(), (TUint)respServerVersion.length());
    respWriterServerVersion.Write(buf_ServerVersion);
    aInvocation.InvocationWriteStringEnd("ServerVersion");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetProgressInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respProgress;
    DvInvocationStd invocation(aInvocation);
    GetProgressInfo(invocation, respProgress);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterProgress(aInvocation, "Progress");
    Brn buf_Progress((const TByte*)respProgress.c_str(), (TUint)respProgress.length());
    respWriterProgress.Write(buf_Progress);
    aInvocation.InvocationWriteStringEnd("Progress");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetScanVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respScanVersion;
    DvInvocationStd invocation(aInvocation);
    GetScanVersion(invocation, respScanVersion);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterScanVersion(aInvocation, "ScanVersion");
    Brn buf_ScanVersion((const TByte*)respScanVersion.c_str(), (TUint)respScanVersion.length());
    respWriterScanVersion.Write(buf_ScanVersion);
    aInvocation.InvocationWriteStringEnd("ScanVersion");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetWorkMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respWorkMode;
    std::string respWorkModeList;
    DvInvocationStd invocation(aInvocation);
    GetWorkMode(invocation, respWorkMode, respWorkModeList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterWorkMode(aInvocation, "WorkMode");
    Brn buf_WorkMode((const TByte*)respWorkMode.c_str(), (TUint)respWorkMode.length());
    respWriterWorkMode.Write(buf_WorkMode);
    aInvocation.InvocationWriteStringEnd("WorkMode");
    DviInvocationResponseString respWriterWorkModeList(aInvocation, "WorkModeList");
    Brn buf_WorkModeList((const TByte*)respWorkModeList.c_str(), (TUint)respWorkModeList.length());
    respWriterWorkModeList.Write(buf_WorkModeList);
    aInvocation.InvocationWriteStringEnd("WorkModeList");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoSetWorkMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_WorkMode;
    aInvocation.InvocationReadString("WorkMode", buf_WorkMode);
    std::string WorkMode((const char*)buf_WorkMode.Ptr(), buf_WorkMode.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetWorkMode(invocation, WorkMode);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoDelAllLocalDB(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    DelAllLocalDB(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoInitHDD(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    InitHDD(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoRescan(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Rescan(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoHandMount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    HandMount(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoHandUMount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    HandUMount(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetDiskInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respIsConnected;
    std::string respStatusCode;
    std::string respStatusInfo;
    std::string respCapacity;
    std::string respFileCount;
    DvInvocationStd invocation(aInvocation);
    GetDiskInfo(invocation, respIsConnected, respStatusCode, respStatusInfo, respCapacity, respFileCount);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterIsConnected(aInvocation, "IsConnected");
    respWriterIsConnected.Write(respIsConnected);
    DviInvocationResponseString respWriterStatusCode(aInvocation, "StatusCode");
    Brn buf_StatusCode((const TByte*)respStatusCode.c_str(), (TUint)respStatusCode.length());
    respWriterStatusCode.Write(buf_StatusCode);
    aInvocation.InvocationWriteStringEnd("StatusCode");
    DviInvocationResponseString respWriterStatusInfo(aInvocation, "StatusInfo");
    Brn buf_StatusInfo((const TByte*)respStatusInfo.c_str(), (TUint)respStatusInfo.length());
    respWriterStatusInfo.Write(buf_StatusInfo);
    aInvocation.InvocationWriteStringEnd("StatusInfo");
    DviInvocationResponseString respWriterCapacity(aInvocation, "Capacity");
    Brn buf_Capacity((const TByte*)respCapacity.c_str(), (TUint)respCapacity.length());
    respWriterCapacity.Write(buf_Capacity);
    aInvocation.InvocationWriteStringEnd("Capacity");
    DviInvocationResponseString respWriterFileCount(aInvocation, "FileCount");
    Brn buf_FileCount((const TByte*)respFileCount.c_str(), (TUint)respFileCount.length());
    respWriterFileCount.Write(buf_FileCount);
    aInvocation.InvocationWriteStringEnd("FileCount");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetSMBConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respSMBAddr;
    std::string respSMBUserName;
    std::string respSMBPassWord;
    DvInvocationStd invocation(aInvocation);
    GetSMBConfig(invocation, respSMBAddr, respSMBUserName, respSMBPassWord);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterSMBAddr(aInvocation, "SMBAddr");
    Brn buf_SMBAddr((const TByte*)respSMBAddr.c_str(), (TUint)respSMBAddr.length());
    respWriterSMBAddr.Write(buf_SMBAddr);
    aInvocation.InvocationWriteStringEnd("SMBAddr");
    DviInvocationResponseString respWriterSMBUserName(aInvocation, "SMBUserName");
    Brn buf_SMBUserName((const TByte*)respSMBUserName.c_str(), (TUint)respSMBUserName.length());
    respWriterSMBUserName.Write(buf_SMBUserName);
    aInvocation.InvocationWriteStringEnd("SMBUserName");
    DviInvocationResponseString respWriterSMBPassWord(aInvocation, "SMBPassWord");
    Brn buf_SMBPassWord((const TByte*)respSMBPassWord.c_str(), (TUint)respSMBPassWord.length());
    respWriterSMBPassWord.Write(buf_SMBPassWord);
    aInvocation.InvocationWriteStringEnd("SMBPassWord");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoSetSMBConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetDriveMountResult(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respDriveMountResult;
    DvInvocationStd invocation(aInvocation);
    GetDriveMountResult(invocation, respDriveMountResult);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterDriveMountResult(aInvocation, "DriveMountResult");
    respWriterDriveMountResult.Write(respDriveMountResult);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoEditTrack(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_EditValue;
    aInvocation.InvocationReadString("EditValue", buf_EditValue);
    std::string EditValue((const char*)buf_EditValue.Ptr(), buf_EditValue.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    EditTrack(invocation, EditValue);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoScanVersionDiff(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respScanVersionDiffValue;
    DvInvocationStd invocation(aInvocation);
    ScanVersionDiff(invocation, respScanVersionDiffValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterScanVersionDiffValue(aInvocation, "ScanVersionDiffValue");
    Brn buf_ScanVersionDiffValue((const TByte*)respScanVersionDiffValue.c_str(), (TUint)respScanVersionDiffValue.length());
    respWriterScanVersionDiffValue.Write(buf_ScanVersionDiffValue);
    aInvocation.InvocationWriteStringEnd("ScanVersionDiffValue");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetInitHDDResult(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respInitHDDResult;
    DvInvocationStd invocation(aInvocation);
    GetInitHDDResult(invocation, respInitHDDResult);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterInitHDDResult(aInvocation, "InitHDDResult");
    respWriterInitHDDResult.Write(respInitHDDResult);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DoGetHDDHasInited(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respHDDHasInited;
    DvInvocationStd invocation(aInvocation);
    GetHDDHasInited(invocation, respHDDHasInited);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterHDDHasInited(aInvocation, "HDDHasInited");
    respWriterHDDHasInited.Write(respHDDHasInited);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::SetServerName(IDvInvocationStd& /*aInvocation*/, const std::string& /*aServerName*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::GetServerVersion(IDvInvocationStd& /*aInvocation*/, std::string& /*aServerVersion*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::GetProgressInfo(IDvInvocationStd& /*aInvocation*/, std::string& /*aProgress*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::GetScanVersion(IDvInvocationStd& /*aInvocation*/, std::string& /*aScanVersion*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::GetWorkMode(IDvInvocationStd& /*aInvocation*/, std::string& /*aWorkMode*/, std::string& /*aWorkModeList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::SetWorkMode(IDvInvocationStd& /*aInvocation*/, const std::string& /*aWorkMode*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::DelAllLocalDB(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::InitHDD(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::Rescan(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::HandMount(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::HandUMount(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::GetDiskInfo(IDvInvocationStd& /*aInvocation*/, bool& /*aIsConnected*/, std::string& /*aStatusCode*/, std::string& /*aStatusInfo*/, std::string& /*aCapacity*/, std::string& /*aFileCount*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::GetSMBConfig(IDvInvocationStd& /*aInvocation*/, std::string& /*aSMBAddr*/, std::string& /*aSMBUserName*/, std::string& /*aSMBPassWord*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::SetSMBConfig(IDvInvocationStd& /*aInvocation*/, const std::string& /*aSMBAddr*/, const std::string& /*aSMBUserName*/, const std::string& /*aSMBPassWord*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::GetDriveMountResult(IDvInvocationStd& /*aInvocation*/, bool& /*aDriveMountResult*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::EditTrack(IDvInvocationStd& /*aInvocation*/, const std::string& /*aEditValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::ScanVersionDiff(IDvInvocationStd& /*aInvocation*/, std::string& /*aScanVersionDiffValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::GetInitHDDResult(IDvInvocationStd& /*aInvocation*/, bool& /*aInitHDDResult*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1Cpp::GetHDDHasInited(IDvInvocationStd& /*aInvocation*/, bool& /*aHDDHasInited*/)
{
    ASSERTS();
}

