#include "DvAvOpenhomeOrgServerConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgServerConfig1::SetPropertyPlayCD(TBool aValue)
{
    ASSERT(iPropertyPlayCD != NULL);
    return SetPropertyBool(*iPropertyPlayCD, aValue);
}

void DvProviderAvOpenhomeOrgServerConfig1::GetPropertyPlayCD(TBool& aValue)
{
    ASSERT(iPropertyPlayCD != NULL);
    aValue = iPropertyPlayCD->Value();
}

TBool DvProviderAvOpenhomeOrgServerConfig1::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgServerConfig1::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgServerConfig1::SetPropertySubscriptValue(const Brx& aValue)
{
    ASSERT(iPropertySubscriptValue != NULL);
    return SetPropertyString(*iPropertySubscriptValue, aValue);
}

void DvProviderAvOpenhomeOrgServerConfig1::GetPropertySubscriptValue(Brhz& aValue)
{
    ASSERT(iPropertySubscriptValue != NULL);
    aValue.Set(iPropertySubscriptValue->Value());
}

void DvProviderAvOpenhomeOrgServerConfig1::WritePropertySubscriptValue(IWriter& aWriter)
{
    iPropertySubscriptValue->Write(aWriter);
}

DvProviderAvOpenhomeOrgServerConfig1::DvProviderAvOpenhomeOrgServerConfig1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "ServerConfig", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgServerConfig1::DvProviderAvOpenhomeOrgServerConfig1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "ServerConfig", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgServerConfig1::Construct()
{
    iPropertyPlayCD = NULL;
    iPropertyAlive = NULL;
    iPropertySubscriptValue = NULL;
}

void DvProviderAvOpenhomeOrgServerConfig1::EnablePropertyPlayCD()
{
    iPropertyPlayCD = new PropertyBool(new ParameterBool("PlayCD"));
    iService->AddProperty(iPropertyPlayCD); // passes ownership
}

void DvProviderAvOpenhomeOrgServerConfig1::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgServerConfig1::EnablePropertySubscriptValue()
{
    iPropertySubscriptValue = new PropertyString(new ParameterString("SubscriptValue"));
    iService->AddProperty(iPropertySubscriptValue); // passes ownership
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionSetPlayCD()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPlayCD");
    action->AddInputParameter(new ParameterRelated("PlayCD", *iPropertyPlayCD));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoSetPlayCD);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionSetServerName()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetServerName");
    action->AddInputParameter(new ParameterString("ServerName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoSetServerName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetServerVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServerVersion");
    action->AddOutputParameter(new ParameterString("ServerVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetServerVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetProgressInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetProgressInfo");
    action->AddOutputParameter(new ParameterString("Progress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetProgressInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetScanVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetScanVersion");
    action->AddOutputParameter(new ParameterString("ScanVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetScanVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetWorkMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWorkMode");
    action->AddOutputParameter(new ParameterString("WorkMode"));
    action->AddOutputParameter(new ParameterString("WorkModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetWorkMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionSetWorkMode()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetWorkMode");
    action->AddInputParameter(new ParameterString("WorkMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoSetWorkMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionDelAllLocalDB()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DelAllLocalDB");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoDelAllLocalDB);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionInitHDD()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InitHDD");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoInitHDD);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionRescan()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Rescan");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoRescan);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionHandMount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("HandMount");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoHandMount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionHandUMount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("HandUMount");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoHandUMount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetDiskInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDiskInfo");
    action->AddOutputParameter(new ParameterBool("IsConnected"));
    action->AddOutputParameter(new ParameterString("StatusCode"));
    action->AddOutputParameter(new ParameterString("StatusInfo"));
    action->AddOutputParameter(new ParameterString("Capacity"));
    action->AddOutputParameter(new ParameterString("FileCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetDiskInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetSMBConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSMBConfig");
    action->AddOutputParameter(new ParameterString("SMBAddr"));
    action->AddOutputParameter(new ParameterString("SMBUserName"));
    action->AddOutputParameter(new ParameterString("SMBPassWord"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetSMBConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionSetSMBConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSMBConfig");
    action->AddInputParameter(new ParameterString("SMBAddr"));
    action->AddInputParameter(new ParameterString("SMBUserName"));
    action->AddInputParameter(new ParameterString("SMBPassWord"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoSetSMBConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetDriveMountResult()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDriveMountResult");
    action->AddOutputParameter(new ParameterBool("DriveMountResult"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetDriveMountResult);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionEditTrack()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EditTrack");
    action->AddInputParameter(new ParameterString("EditValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoEditTrack);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionScanVersionDiff()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ScanVersionDiff");
    action->AddOutputParameter(new ParameterString("ScanVersionDiffValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoScanVersionDiff);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetInitHDDResult()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetInitHDDResult");
    action->AddOutputParameter(new ParameterBool("InitHDDResult"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetInitHDDResult);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetHDDHasInited()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHDDHasInited");
    action->AddOutputParameter(new ParameterBool("HDDHasInited"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetHDDHasInited);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionUSBImport()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("USBImport");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoUSBImport);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetDISKCapacity()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDISKCapacity");
    action->AddOutputParameter(new ParameterString("DISKTotal"));
    action->AddOutputParameter(new ParameterString("DISKUsed"));
    action->AddOutputParameter(new ParameterString("DISKAvailable"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetDISKCapacity);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionForceRescan()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ForceRescan");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoForceRescan);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetCurrentScanFile()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetCurrentScanFile");
    action->AddOutputParameter(new ParameterString("ScanFile"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetCurrentScanFile);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionGetServerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServerConfig");
    action->AddOutputParameter(new ParameterString("GetValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoGetServerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::EnableActionSetServerConfig()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetServerConfig");
    action->AddInputParameter(new ParameterString("SetValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1::DoSetServerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoSetPlayCD(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool PlayCD = aInvocation.InvocationReadBool("PlayCD");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetPlayCD(invocation, PlayCD);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoSetServerName(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServerName;
    aInvocation.InvocationReadString("ServerName", ServerName);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetServerName(invocation, ServerName);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoGetServerVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respServerVersion(aInvocation, "ServerVersion");
    GetServerVersion(invocation, respServerVersion);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoGetProgressInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respProgress(aInvocation, "Progress");
    GetProgressInfo(invocation, respProgress);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoGetScanVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respScanVersion(aInvocation, "ScanVersion");
    GetScanVersion(invocation, respScanVersion);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoGetWorkMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respWorkMode(aInvocation, "WorkMode");
    DviInvocationResponseString respWorkModeList(aInvocation, "WorkModeList");
    GetWorkMode(invocation, respWorkMode, respWorkModeList);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoSetWorkMode(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz WorkMode;
    aInvocation.InvocationReadString("WorkMode", WorkMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetWorkMode(invocation, WorkMode);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoDelAllLocalDB(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DelAllLocalDB(invocation);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoInitHDD(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    InitHDD(invocation);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoRescan(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Rescan(invocation);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoHandMount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    HandMount(invocation);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoHandUMount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    HandUMount(invocation);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoGetDiskInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respIsConnected(aInvocation, "IsConnected");
    DviInvocationResponseString respStatusCode(aInvocation, "StatusCode");
    DviInvocationResponseString respStatusInfo(aInvocation, "StatusInfo");
    DviInvocationResponseString respCapacity(aInvocation, "Capacity");
    DviInvocationResponseString respFileCount(aInvocation, "FileCount");
    GetDiskInfo(invocation, respIsConnected, respStatusCode, respStatusInfo, respCapacity, respFileCount);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoGetSMBConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSMBAddr(aInvocation, "SMBAddr");
    DviInvocationResponseString respSMBUserName(aInvocation, "SMBUserName");
    DviInvocationResponseString respSMBPassWord(aInvocation, "SMBPassWord");
    GetSMBConfig(invocation, respSMBAddr, respSMBUserName, respSMBPassWord);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoSetSMBConfig(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgServerConfig1::DoGetDriveMountResult(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respDriveMountResult(aInvocation, "DriveMountResult");
    GetDriveMountResult(invocation, respDriveMountResult);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoEditTrack(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz EditValue;
    aInvocation.InvocationReadString("EditValue", EditValue);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    EditTrack(invocation, EditValue);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoScanVersionDiff(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respScanVersionDiffValue(aInvocation, "ScanVersionDiffValue");
    ScanVersionDiff(invocation, respScanVersionDiffValue);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoGetInitHDDResult(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respInitHDDResult(aInvocation, "InitHDDResult");
    GetInitHDDResult(invocation, respInitHDDResult);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoGetHDDHasInited(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respHDDHasInited(aInvocation, "HDDHasInited");
    GetHDDHasInited(invocation, respHDDHasInited);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoUSBImport(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    USBImport(invocation);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoGetDISKCapacity(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respDISKTotal(aInvocation, "DISKTotal");
    DviInvocationResponseString respDISKUsed(aInvocation, "DISKUsed");
    DviInvocationResponseString respDISKAvailable(aInvocation, "DISKAvailable");
    GetDISKCapacity(invocation, respDISKTotal, respDISKUsed, respDISKAvailable);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoForceRescan(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ForceRescan(invocation);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoGetCurrentScanFile(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respScanFile(aInvocation, "ScanFile");
    GetCurrentScanFile(invocation, respScanFile);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoGetServerConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respGetValue(aInvocation, "GetValue");
    GetServerConfig(invocation, respGetValue);
}

void DvProviderAvOpenhomeOrgServerConfig1::DoSetServerConfig(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz SetValue;
    aInvocation.InvocationReadString("SetValue", SetValue);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetServerConfig(invocation, SetValue);
}

void DvProviderAvOpenhomeOrgServerConfig1::SetPlayCD(IDvInvocation& /*aResponse*/, TBool /*aPlayCD*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::SetServerName(IDvInvocation& /*aResponse*/, const Brx& /*aServerName*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetServerVersion(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aServerVersion*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetProgressInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aProgress*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetScanVersion(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aScanVersion*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetWorkMode(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aWorkMode*/, IDvInvocationResponseString& /*aWorkModeList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::SetWorkMode(IDvInvocation& /*aResponse*/, const Brx& /*aWorkMode*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::DelAllLocalDB(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::InitHDD(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::Rescan(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::HandMount(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::HandUMount(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetDiskInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aIsConnected*/, IDvInvocationResponseString& /*aStatusCode*/, IDvInvocationResponseString& /*aStatusInfo*/, IDvInvocationResponseString& /*aCapacity*/, IDvInvocationResponseString& /*aFileCount*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetSMBConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aSMBAddr*/, IDvInvocationResponseString& /*aSMBUserName*/, IDvInvocationResponseString& /*aSMBPassWord*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::SetSMBConfig(IDvInvocation& /*aResponse*/, const Brx& /*aSMBAddr*/, const Brx& /*aSMBUserName*/, const Brx& /*aSMBPassWord*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetDriveMountResult(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aDriveMountResult*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::EditTrack(IDvInvocation& /*aResponse*/, const Brx& /*aEditValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::ScanVersionDiff(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aScanVersionDiffValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetInitHDDResult(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aInitHDDResult*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetHDDHasInited(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aHDDHasInited*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::USBImport(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetDISKCapacity(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aDISKTotal*/, IDvInvocationResponseString& /*aDISKUsed*/, IDvInvocationResponseString& /*aDISKAvailable*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::ForceRescan(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetCurrentScanFile(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aScanFile*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::GetServerConfig(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aGetValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgServerConfig1::SetServerConfig(IDvInvocation& /*aResponse*/, const Brx& /*aSetValue*/)
{
    ASSERTS();
}

