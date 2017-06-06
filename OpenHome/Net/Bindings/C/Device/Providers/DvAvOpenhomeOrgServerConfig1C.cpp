#include "DvAvOpenhomeOrgServerConfig1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/C/DviDeviceC.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/C/DvInvocation.h>
#include <OpenHome/Net/C/DvInvocationPrivate.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class DvProviderAvOpenhomeOrgServerConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgServerConfig1C(DvDeviceC aDevice);
    TBool SetPropertyAlive(TBool aValue);
    void GetPropertyAlive(TBool& aValue);
    TBool SetPropertySubscriptValue(const Brx& aValue);
    void GetPropertySubscriptValue(Brhz& aValue);
    void EnablePropertyAlive();
    void EnablePropertySubscriptValue();
    void EnableActionSetServerName(CallbackServerConfig1SetServerName aCallback, void* aPtr);
    void EnableActionGetServerVersion(CallbackServerConfig1GetServerVersion aCallback, void* aPtr);
    void EnableActionGetProgressInfo(CallbackServerConfig1GetProgressInfo aCallback, void* aPtr);
    void EnableActionGetScanVersion(CallbackServerConfig1GetScanVersion aCallback, void* aPtr);
    void EnableActionGetWorkMode(CallbackServerConfig1GetWorkMode aCallback, void* aPtr);
    void EnableActionSetWorkMode(CallbackServerConfig1SetWorkMode aCallback, void* aPtr);
    void EnableActionDelAllLocalDB(CallbackServerConfig1DelAllLocalDB aCallback, void* aPtr);
    void EnableActionInitHDD(CallbackServerConfig1InitHDD aCallback, void* aPtr);
    void EnableActionRescan(CallbackServerConfig1Rescan aCallback, void* aPtr);
    void EnableActionHandMount(CallbackServerConfig1HandMount aCallback, void* aPtr);
    void EnableActionHandUMount(CallbackServerConfig1HandUMount aCallback, void* aPtr);
    void EnableActionGetDiskInfo(CallbackServerConfig1GetDiskInfo aCallback, void* aPtr);
    void EnableActionGetSMBConfig(CallbackServerConfig1GetSMBConfig aCallback, void* aPtr);
    void EnableActionSetSMBConfig(CallbackServerConfig1SetSMBConfig aCallback, void* aPtr);
    void EnableActionGetDriveMountResult(CallbackServerConfig1GetDriveMountResult aCallback, void* aPtr);
    void EnableActionEditTrack(CallbackServerConfig1EditTrack aCallback, void* aPtr);
    void EnableActionScanVersionDiff(CallbackServerConfig1ScanVersionDiff aCallback, void* aPtr);
    void EnableActionGetInitHDDResult(CallbackServerConfig1GetInitHDDResult aCallback, void* aPtr);
    void EnableActionGetHDDHasInited(CallbackServerConfig1GetHDDHasInited aCallback, void* aPtr);
    void EnableActionUSBImport(CallbackServerConfig1USBImport aCallback, void* aPtr);
    void EnableActionGetDISKCapacity(CallbackServerConfig1GetDISKCapacity aCallback, void* aPtr);
    void EnableActionForceRescan(CallbackServerConfig1ForceRescan aCallback, void* aPtr);
    void EnableActionGetCurrentScanFile(CallbackServerConfig1GetCurrentScanFile aCallback, void* aPtr);
    void EnableActionGetServerConfig(CallbackServerConfig1GetServerConfig aCallback, void* aPtr);
    void EnableActionSetServerConfig(CallbackServerConfig1SetServerConfig aCallback, void* aPtr);
private:
    void DoSetServerName(IDviInvocation& aInvocation);
    void DoGetServerVersion(IDviInvocation& aInvocation);
    void DoGetProgressInfo(IDviInvocation& aInvocation);
    void DoGetScanVersion(IDviInvocation& aInvocation);
    void DoGetWorkMode(IDviInvocation& aInvocation);
    void DoSetWorkMode(IDviInvocation& aInvocation);
    void DoDelAllLocalDB(IDviInvocation& aInvocation);
    void DoInitHDD(IDviInvocation& aInvocation);
    void DoRescan(IDviInvocation& aInvocation);
    void DoHandMount(IDviInvocation& aInvocation);
    void DoHandUMount(IDviInvocation& aInvocation);
    void DoGetDiskInfo(IDviInvocation& aInvocation);
    void DoGetSMBConfig(IDviInvocation& aInvocation);
    void DoSetSMBConfig(IDviInvocation& aInvocation);
    void DoGetDriveMountResult(IDviInvocation& aInvocation);
    void DoEditTrack(IDviInvocation& aInvocation);
    void DoScanVersionDiff(IDviInvocation& aInvocation);
    void DoGetInitHDDResult(IDviInvocation& aInvocation);
    void DoGetHDDHasInited(IDviInvocation& aInvocation);
    void DoUSBImport(IDviInvocation& aInvocation);
    void DoGetDISKCapacity(IDviInvocation& aInvocation);
    void DoForceRescan(IDviInvocation& aInvocation);
    void DoGetCurrentScanFile(IDviInvocation& aInvocation);
    void DoGetServerConfig(IDviInvocation& aInvocation);
    void DoSetServerConfig(IDviInvocation& aInvocation);
private:
    CallbackServerConfig1SetServerName iCallbackSetServerName;
    void* iPtrSetServerName;
    CallbackServerConfig1GetServerVersion iCallbackGetServerVersion;
    void* iPtrGetServerVersion;
    CallbackServerConfig1GetProgressInfo iCallbackGetProgressInfo;
    void* iPtrGetProgressInfo;
    CallbackServerConfig1GetScanVersion iCallbackGetScanVersion;
    void* iPtrGetScanVersion;
    CallbackServerConfig1GetWorkMode iCallbackGetWorkMode;
    void* iPtrGetWorkMode;
    CallbackServerConfig1SetWorkMode iCallbackSetWorkMode;
    void* iPtrSetWorkMode;
    CallbackServerConfig1DelAllLocalDB iCallbackDelAllLocalDB;
    void* iPtrDelAllLocalDB;
    CallbackServerConfig1InitHDD iCallbackInitHDD;
    void* iPtrInitHDD;
    CallbackServerConfig1Rescan iCallbackRescan;
    void* iPtrRescan;
    CallbackServerConfig1HandMount iCallbackHandMount;
    void* iPtrHandMount;
    CallbackServerConfig1HandUMount iCallbackHandUMount;
    void* iPtrHandUMount;
    CallbackServerConfig1GetDiskInfo iCallbackGetDiskInfo;
    void* iPtrGetDiskInfo;
    CallbackServerConfig1GetSMBConfig iCallbackGetSMBConfig;
    void* iPtrGetSMBConfig;
    CallbackServerConfig1SetSMBConfig iCallbackSetSMBConfig;
    void* iPtrSetSMBConfig;
    CallbackServerConfig1GetDriveMountResult iCallbackGetDriveMountResult;
    void* iPtrGetDriveMountResult;
    CallbackServerConfig1EditTrack iCallbackEditTrack;
    void* iPtrEditTrack;
    CallbackServerConfig1ScanVersionDiff iCallbackScanVersionDiff;
    void* iPtrScanVersionDiff;
    CallbackServerConfig1GetInitHDDResult iCallbackGetInitHDDResult;
    void* iPtrGetInitHDDResult;
    CallbackServerConfig1GetHDDHasInited iCallbackGetHDDHasInited;
    void* iPtrGetHDDHasInited;
    CallbackServerConfig1USBImport iCallbackUSBImport;
    void* iPtrUSBImport;
    CallbackServerConfig1GetDISKCapacity iCallbackGetDISKCapacity;
    void* iPtrGetDISKCapacity;
    CallbackServerConfig1ForceRescan iCallbackForceRescan;
    void* iPtrForceRescan;
    CallbackServerConfig1GetCurrentScanFile iCallbackGetCurrentScanFile;
    void* iPtrGetCurrentScanFile;
    CallbackServerConfig1GetServerConfig iCallbackGetServerConfig;
    void* iPtrGetServerConfig;
    CallbackServerConfig1SetServerConfig iCallbackSetServerConfig;
    void* iPtrSetServerConfig;
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertySubscriptValue;
};

DvProviderAvOpenhomeOrgServerConfig1C::DvProviderAvOpenhomeOrgServerConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "ServerConfig", 1)
{
    iPropertyAlive = NULL;
    iPropertySubscriptValue = NULL;
}

TBool DvProviderAvOpenhomeOrgServerConfig1C::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgServerConfig1C::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgServerConfig1C::SetPropertySubscriptValue(const Brx& aValue)
{
    ASSERT(iPropertySubscriptValue != NULL);
    return SetPropertyString(*iPropertySubscriptValue, aValue);
}

void DvProviderAvOpenhomeOrgServerConfig1C::GetPropertySubscriptValue(Brhz& aValue)
{
    ASSERT(iPropertySubscriptValue != NULL);
    aValue.Set(iPropertySubscriptValue->Value());
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnablePropertySubscriptValue()
{
    iPropertySubscriptValue = new PropertyString(new ParameterString("SubscriptValue"));
    iService->AddProperty(iPropertySubscriptValue); // passes ownership
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionSetServerName(CallbackServerConfig1SetServerName aCallback, void* aPtr)
{
    iCallbackSetServerName = aCallback;
    iPtrSetServerName = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetServerName");
    action->AddInputParameter(new ParameterString("ServerName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoSetServerName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetServerVersion(CallbackServerConfig1GetServerVersion aCallback, void* aPtr)
{
    iCallbackGetServerVersion = aCallback;
    iPtrGetServerVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServerVersion");
    action->AddOutputParameter(new ParameterString("ServerVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetServerVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetProgressInfo(CallbackServerConfig1GetProgressInfo aCallback, void* aPtr)
{
    iCallbackGetProgressInfo = aCallback;
    iPtrGetProgressInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetProgressInfo");
    action->AddOutputParameter(new ParameterString("Progress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetProgressInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetScanVersion(CallbackServerConfig1GetScanVersion aCallback, void* aPtr)
{
    iCallbackGetScanVersion = aCallback;
    iPtrGetScanVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetScanVersion");
    action->AddOutputParameter(new ParameterString("ScanVersion"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetScanVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetWorkMode(CallbackServerConfig1GetWorkMode aCallback, void* aPtr)
{
    iCallbackGetWorkMode = aCallback;
    iPtrGetWorkMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWorkMode");
    action->AddOutputParameter(new ParameterString("WorkMode"));
    action->AddOutputParameter(new ParameterString("WorkModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetWorkMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionSetWorkMode(CallbackServerConfig1SetWorkMode aCallback, void* aPtr)
{
    iCallbackSetWorkMode = aCallback;
    iPtrSetWorkMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetWorkMode");
    action->AddInputParameter(new ParameterString("WorkMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoSetWorkMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionDelAllLocalDB(CallbackServerConfig1DelAllLocalDB aCallback, void* aPtr)
{
    iCallbackDelAllLocalDB = aCallback;
    iPtrDelAllLocalDB = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DelAllLocalDB");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoDelAllLocalDB);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionInitHDD(CallbackServerConfig1InitHDD aCallback, void* aPtr)
{
    iCallbackInitHDD = aCallback;
    iPtrInitHDD = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InitHDD");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoInitHDD);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionRescan(CallbackServerConfig1Rescan aCallback, void* aPtr)
{
    iCallbackRescan = aCallback;
    iPtrRescan = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Rescan");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoRescan);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionHandMount(CallbackServerConfig1HandMount aCallback, void* aPtr)
{
    iCallbackHandMount = aCallback;
    iPtrHandMount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("HandMount");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoHandMount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionHandUMount(CallbackServerConfig1HandUMount aCallback, void* aPtr)
{
    iCallbackHandUMount = aCallback;
    iPtrHandUMount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("HandUMount");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoHandUMount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetDiskInfo(CallbackServerConfig1GetDiskInfo aCallback, void* aPtr)
{
    iCallbackGetDiskInfo = aCallback;
    iPtrGetDiskInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDiskInfo");
    action->AddOutputParameter(new ParameterBool("IsConnected"));
    action->AddOutputParameter(new ParameterString("StatusCode"));
    action->AddOutputParameter(new ParameterString("StatusInfo"));
    action->AddOutputParameter(new ParameterString("Capacity"));
    action->AddOutputParameter(new ParameterString("FileCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetDiskInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetSMBConfig(CallbackServerConfig1GetSMBConfig aCallback, void* aPtr)
{
    iCallbackGetSMBConfig = aCallback;
    iPtrGetSMBConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSMBConfig");
    action->AddOutputParameter(new ParameterString("SMBAddr"));
    action->AddOutputParameter(new ParameterString("SMBUserName"));
    action->AddOutputParameter(new ParameterString("SMBPassWord"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetSMBConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionSetSMBConfig(CallbackServerConfig1SetSMBConfig aCallback, void* aPtr)
{
    iCallbackSetSMBConfig = aCallback;
    iPtrSetSMBConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSMBConfig");
    action->AddInputParameter(new ParameterString("SMBAddr"));
    action->AddInputParameter(new ParameterString("SMBUserName"));
    action->AddInputParameter(new ParameterString("SMBPassWord"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoSetSMBConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetDriveMountResult(CallbackServerConfig1GetDriveMountResult aCallback, void* aPtr)
{
    iCallbackGetDriveMountResult = aCallback;
    iPtrGetDriveMountResult = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDriveMountResult");
    action->AddOutputParameter(new ParameterBool("DriveMountResult"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetDriveMountResult);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionEditTrack(CallbackServerConfig1EditTrack aCallback, void* aPtr)
{
    iCallbackEditTrack = aCallback;
    iPtrEditTrack = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("EditTrack");
    action->AddInputParameter(new ParameterString("EditValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoEditTrack);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionScanVersionDiff(CallbackServerConfig1ScanVersionDiff aCallback, void* aPtr)
{
    iCallbackScanVersionDiff = aCallback;
    iPtrScanVersionDiff = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ScanVersionDiff");
    action->AddOutputParameter(new ParameterString("ScanVersionDiffValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoScanVersionDiff);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetInitHDDResult(CallbackServerConfig1GetInitHDDResult aCallback, void* aPtr)
{
    iCallbackGetInitHDDResult = aCallback;
    iPtrGetInitHDDResult = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetInitHDDResult");
    action->AddOutputParameter(new ParameterBool("InitHDDResult"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetInitHDDResult);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetHDDHasInited(CallbackServerConfig1GetHDDHasInited aCallback, void* aPtr)
{
    iCallbackGetHDDHasInited = aCallback;
    iPtrGetHDDHasInited = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHDDHasInited");
    action->AddOutputParameter(new ParameterBool("HDDHasInited"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetHDDHasInited);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionUSBImport(CallbackServerConfig1USBImport aCallback, void* aPtr)
{
    iCallbackUSBImport = aCallback;
    iPtrUSBImport = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("USBImport");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoUSBImport);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetDISKCapacity(CallbackServerConfig1GetDISKCapacity aCallback, void* aPtr)
{
    iCallbackGetDISKCapacity = aCallback;
    iPtrGetDISKCapacity = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDISKCapacity");
    action->AddOutputParameter(new ParameterString("DISKTotal"));
    action->AddOutputParameter(new ParameterString("DISKUsed"));
    action->AddOutputParameter(new ParameterString("DISKAvailable"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetDISKCapacity);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionForceRescan(CallbackServerConfig1ForceRescan aCallback, void* aPtr)
{
    iCallbackForceRescan = aCallback;
    iPtrForceRescan = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ForceRescan");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoForceRescan);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetCurrentScanFile(CallbackServerConfig1GetCurrentScanFile aCallback, void* aPtr)
{
    iCallbackGetCurrentScanFile = aCallback;
    iPtrGetCurrentScanFile = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetCurrentScanFile");
    action->AddOutputParameter(new ParameterString("ScanFile"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetCurrentScanFile);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionGetServerConfig(CallbackServerConfig1GetServerConfig aCallback, void* aPtr)
{
    iCallbackGetServerConfig = aCallback;
    iPtrGetServerConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServerConfig");
    action->AddOutputParameter(new ParameterString("GetValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoGetServerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::EnableActionSetServerConfig(CallbackServerConfig1SetServerConfig aCallback, void* aPtr)
{
    iCallbackSetServerConfig = aCallback;
    iPtrSetServerConfig = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetServerConfig");
    action->AddInputParameter(new ParameterString("SetValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgServerConfig1C::DoSetServerConfig);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoSetServerName(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ServerName;
    aInvocation.InvocationReadString("ServerName", ServerName);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetServerName != NULL);
    if (0 != iCallbackSetServerName(iPtrSetServerName, invocationC, invocationCPtr, (const char*)ServerName.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetServerVersion(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ServerVersion;
    ASSERT(iCallbackGetServerVersion != NULL);
    if (0 != iCallbackGetServerVersion(iPtrGetServerVersion, invocationC, invocationCPtr, &ServerVersion)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respServerVersion(aInvocation, "ServerVersion");
    invocation.StartResponse();
    Brhz bufServerVersion((const TChar*)ServerVersion);
    OhNetFreeExternal(ServerVersion);
    respServerVersion.Write(bufServerVersion);
    respServerVersion.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetProgressInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Progress;
    ASSERT(iCallbackGetProgressInfo != NULL);
    if (0 != iCallbackGetProgressInfo(iPtrGetProgressInfo, invocationC, invocationCPtr, &Progress)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respProgress(aInvocation, "Progress");
    invocation.StartResponse();
    Brhz bufProgress((const TChar*)Progress);
    OhNetFreeExternal(Progress);
    respProgress.Write(bufProgress);
    respProgress.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetScanVersion(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ScanVersion;
    ASSERT(iCallbackGetScanVersion != NULL);
    if (0 != iCallbackGetScanVersion(iPtrGetScanVersion, invocationC, invocationCPtr, &ScanVersion)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respScanVersion(aInvocation, "ScanVersion");
    invocation.StartResponse();
    Brhz bufScanVersion((const TChar*)ScanVersion);
    OhNetFreeExternal(ScanVersion);
    respScanVersion.Write(bufScanVersion);
    respScanVersion.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetWorkMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* WorkMode;
    char* WorkModeList;
    ASSERT(iCallbackGetWorkMode != NULL);
    if (0 != iCallbackGetWorkMode(iPtrGetWorkMode, invocationC, invocationCPtr, &WorkMode, &WorkModeList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respWorkMode(aInvocation, "WorkMode");
    DviInvocationResponseString respWorkModeList(aInvocation, "WorkModeList");
    invocation.StartResponse();
    Brhz bufWorkMode((const TChar*)WorkMode);
    OhNetFreeExternal(WorkMode);
    respWorkMode.Write(bufWorkMode);
    respWorkMode.WriteFlush();
    Brhz bufWorkModeList((const TChar*)WorkModeList);
    OhNetFreeExternal(WorkModeList);
    respWorkModeList.Write(bufWorkModeList);
    respWorkModeList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoSetWorkMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz WorkMode;
    aInvocation.InvocationReadString("WorkMode", WorkMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetWorkMode != NULL);
    if (0 != iCallbackSetWorkMode(iPtrSetWorkMode, invocationC, invocationCPtr, (const char*)WorkMode.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoDelAllLocalDB(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackDelAllLocalDB != NULL);
    if (0 != iCallbackDelAllLocalDB(iPtrDelAllLocalDB, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoInitHDD(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackInitHDD != NULL);
    if (0 != iCallbackInitHDD(iPtrInitHDD, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoRescan(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackRescan != NULL);
    if (0 != iCallbackRescan(iPtrRescan, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoHandMount(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackHandMount != NULL);
    if (0 != iCallbackHandMount(iPtrHandMount, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoHandUMount(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackHandUMount != NULL);
    if (0 != iCallbackHandUMount(iPtrHandUMount, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetDiskInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t IsConnected;
    char* StatusCode;
    char* StatusInfo;
    char* Capacity;
    char* FileCount;
    ASSERT(iCallbackGetDiskInfo != NULL);
    if (0 != iCallbackGetDiskInfo(iPtrGetDiskInfo, invocationC, invocationCPtr, &IsConnected, &StatusCode, &StatusInfo, &Capacity, &FileCount)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respIsConnected(aInvocation, "IsConnected");
    DviInvocationResponseString respStatusCode(aInvocation, "StatusCode");
    DviInvocationResponseString respStatusInfo(aInvocation, "StatusInfo");
    DviInvocationResponseString respCapacity(aInvocation, "Capacity");
    DviInvocationResponseString respFileCount(aInvocation, "FileCount");
    invocation.StartResponse();
    respIsConnected.Write((IsConnected!=0));
    Brhz bufStatusCode((const TChar*)StatusCode);
    OhNetFreeExternal(StatusCode);
    respStatusCode.Write(bufStatusCode);
    respStatusCode.WriteFlush();
    Brhz bufStatusInfo((const TChar*)StatusInfo);
    OhNetFreeExternal(StatusInfo);
    respStatusInfo.Write(bufStatusInfo);
    respStatusInfo.WriteFlush();
    Brhz bufCapacity((const TChar*)Capacity);
    OhNetFreeExternal(Capacity);
    respCapacity.Write(bufCapacity);
    respCapacity.WriteFlush();
    Brhz bufFileCount((const TChar*)FileCount);
    OhNetFreeExternal(FileCount);
    respFileCount.Write(bufFileCount);
    respFileCount.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetSMBConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* SMBAddr;
    char* SMBUserName;
    char* SMBPassWord;
    ASSERT(iCallbackGetSMBConfig != NULL);
    if (0 != iCallbackGetSMBConfig(iPtrGetSMBConfig, invocationC, invocationCPtr, &SMBAddr, &SMBUserName, &SMBPassWord)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respSMBAddr(aInvocation, "SMBAddr");
    DviInvocationResponseString respSMBUserName(aInvocation, "SMBUserName");
    DviInvocationResponseString respSMBPassWord(aInvocation, "SMBPassWord");
    invocation.StartResponse();
    Brhz bufSMBAddr((const TChar*)SMBAddr);
    OhNetFreeExternal(SMBAddr);
    respSMBAddr.Write(bufSMBAddr);
    respSMBAddr.WriteFlush();
    Brhz bufSMBUserName((const TChar*)SMBUserName);
    OhNetFreeExternal(SMBUserName);
    respSMBUserName.Write(bufSMBUserName);
    respSMBUserName.WriteFlush();
    Brhz bufSMBPassWord((const TChar*)SMBPassWord);
    OhNetFreeExternal(SMBPassWord);
    respSMBPassWord.Write(bufSMBPassWord);
    respSMBPassWord.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoSetSMBConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz SMBAddr;
    aInvocation.InvocationReadString("SMBAddr", SMBAddr);
    Brhz SMBUserName;
    aInvocation.InvocationReadString("SMBUserName", SMBUserName);
    Brhz SMBPassWord;
    aInvocation.InvocationReadString("SMBPassWord", SMBPassWord);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetSMBConfig != NULL);
    if (0 != iCallbackSetSMBConfig(iPtrSetSMBConfig, invocationC, invocationCPtr, (const char*)SMBAddr.Ptr(), (const char*)SMBUserName.Ptr(), (const char*)SMBPassWord.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetDriveMountResult(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t DriveMountResult;
    ASSERT(iCallbackGetDriveMountResult != NULL);
    if (0 != iCallbackGetDriveMountResult(iPtrGetDriveMountResult, invocationC, invocationCPtr, &DriveMountResult)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respDriveMountResult(aInvocation, "DriveMountResult");
    invocation.StartResponse();
    respDriveMountResult.Write((DriveMountResult!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoEditTrack(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz EditValue;
    aInvocation.InvocationReadString("EditValue", EditValue);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackEditTrack != NULL);
    if (0 != iCallbackEditTrack(iPtrEditTrack, invocationC, invocationCPtr, (const char*)EditValue.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoScanVersionDiff(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ScanVersionDiffValue;
    ASSERT(iCallbackScanVersionDiff != NULL);
    if (0 != iCallbackScanVersionDiff(iPtrScanVersionDiff, invocationC, invocationCPtr, &ScanVersionDiffValue)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respScanVersionDiffValue(aInvocation, "ScanVersionDiffValue");
    invocation.StartResponse();
    Brhz bufScanVersionDiffValue((const TChar*)ScanVersionDiffValue);
    OhNetFreeExternal(ScanVersionDiffValue);
    respScanVersionDiffValue.Write(bufScanVersionDiffValue);
    respScanVersionDiffValue.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetInitHDDResult(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t InitHDDResult;
    ASSERT(iCallbackGetInitHDDResult != NULL);
    if (0 != iCallbackGetInitHDDResult(iPtrGetInitHDDResult, invocationC, invocationCPtr, &InitHDDResult)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respInitHDDResult(aInvocation, "InitHDDResult");
    invocation.StartResponse();
    respInitHDDResult.Write((InitHDDResult!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetHDDHasInited(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t HDDHasInited;
    ASSERT(iCallbackGetHDDHasInited != NULL);
    if (0 != iCallbackGetHDDHasInited(iPtrGetHDDHasInited, invocationC, invocationCPtr, &HDDHasInited)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respHDDHasInited(aInvocation, "HDDHasInited");
    invocation.StartResponse();
    respHDDHasInited.Write((HDDHasInited!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoUSBImport(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackUSBImport != NULL);
    if (0 != iCallbackUSBImport(iPtrUSBImport, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetDISKCapacity(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* DISKTotal;
    char* DISKUsed;
    char* DISKAvailable;
    ASSERT(iCallbackGetDISKCapacity != NULL);
    if (0 != iCallbackGetDISKCapacity(iPtrGetDISKCapacity, invocationC, invocationCPtr, &DISKTotal, &DISKUsed, &DISKAvailable)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respDISKTotal(aInvocation, "DISKTotal");
    DviInvocationResponseString respDISKUsed(aInvocation, "DISKUsed");
    DviInvocationResponseString respDISKAvailable(aInvocation, "DISKAvailable");
    invocation.StartResponse();
    Brhz bufDISKTotal((const TChar*)DISKTotal);
    OhNetFreeExternal(DISKTotal);
    respDISKTotal.Write(bufDISKTotal);
    respDISKTotal.WriteFlush();
    Brhz bufDISKUsed((const TChar*)DISKUsed);
    OhNetFreeExternal(DISKUsed);
    respDISKUsed.Write(bufDISKUsed);
    respDISKUsed.WriteFlush();
    Brhz bufDISKAvailable((const TChar*)DISKAvailable);
    OhNetFreeExternal(DISKAvailable);
    respDISKAvailable.Write(bufDISKAvailable);
    respDISKAvailable.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoForceRescan(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackForceRescan != NULL);
    if (0 != iCallbackForceRescan(iPtrForceRescan, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetCurrentScanFile(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ScanFile;
    ASSERT(iCallbackGetCurrentScanFile != NULL);
    if (0 != iCallbackGetCurrentScanFile(iPtrGetCurrentScanFile, invocationC, invocationCPtr, &ScanFile)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respScanFile(aInvocation, "ScanFile");
    invocation.StartResponse();
    Brhz bufScanFile((const TChar*)ScanFile);
    OhNetFreeExternal(ScanFile);
    respScanFile.Write(bufScanFile);
    respScanFile.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoGetServerConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* GetValue;
    ASSERT(iCallbackGetServerConfig != NULL);
    if (0 != iCallbackGetServerConfig(iPtrGetServerConfig, invocationC, invocationCPtr, &GetValue)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respGetValue(aInvocation, "GetValue");
    invocation.StartResponse();
    Brhz bufGetValue((const TChar*)GetValue);
    OhNetFreeExternal(GetValue);
    respGetValue.Write(bufGetValue);
    respGetValue.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgServerConfig1C::DoSetServerConfig(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz SetValue;
    aInvocation.InvocationReadString("SetValue", SetValue);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetServerConfig != NULL);
    if (0 != iCallbackSetServerConfig(iPtrSetServerConfig, invocationC, invocationCPtr, (const char*)SetValue.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgServerConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgServerConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionSetServerName(THandle aProvider, CallbackServerConfig1SetServerName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionSetServerName(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetServerVersion(THandle aProvider, CallbackServerConfig1GetServerVersion aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetServerVersion(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetProgressInfo(THandle aProvider, CallbackServerConfig1GetProgressInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetProgressInfo(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetScanVersion(THandle aProvider, CallbackServerConfig1GetScanVersion aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetScanVersion(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetWorkMode(THandle aProvider, CallbackServerConfig1GetWorkMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetWorkMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionSetWorkMode(THandle aProvider, CallbackServerConfig1SetWorkMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionSetWorkMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionDelAllLocalDB(THandle aProvider, CallbackServerConfig1DelAllLocalDB aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionDelAllLocalDB(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionInitHDD(THandle aProvider, CallbackServerConfig1InitHDD aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionInitHDD(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionRescan(THandle aProvider, CallbackServerConfig1Rescan aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionRescan(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionHandMount(THandle aProvider, CallbackServerConfig1HandMount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionHandMount(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionHandUMount(THandle aProvider, CallbackServerConfig1HandUMount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionHandUMount(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetDiskInfo(THandle aProvider, CallbackServerConfig1GetDiskInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetDiskInfo(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetSMBConfig(THandle aProvider, CallbackServerConfig1GetSMBConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetSMBConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionSetSMBConfig(THandle aProvider, CallbackServerConfig1SetSMBConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionSetSMBConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetDriveMountResult(THandle aProvider, CallbackServerConfig1GetDriveMountResult aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetDriveMountResult(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionEditTrack(THandle aProvider, CallbackServerConfig1EditTrack aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionEditTrack(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionScanVersionDiff(THandle aProvider, CallbackServerConfig1ScanVersionDiff aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionScanVersionDiff(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetInitHDDResult(THandle aProvider, CallbackServerConfig1GetInitHDDResult aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetInitHDDResult(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetHDDHasInited(THandle aProvider, CallbackServerConfig1GetHDDHasInited aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetHDDHasInited(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionUSBImport(THandle aProvider, CallbackServerConfig1USBImport aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionUSBImport(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetDISKCapacity(THandle aProvider, CallbackServerConfig1GetDISKCapacity aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetDISKCapacity(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionForceRescan(THandle aProvider, CallbackServerConfig1ForceRescan aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionForceRescan(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetCurrentScanFile(THandle aProvider, CallbackServerConfig1GetCurrentScanFile aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetCurrentScanFile(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetServerConfig(THandle aProvider, CallbackServerConfig1GetServerConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionGetServerConfig(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionSetServerConfig(THandle aProvider, CallbackServerConfig1SetServerConfig aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnableActionSetServerConfig(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgServerConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->SetPropertyAlive((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->GetPropertyAlive(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgServerConfig1SetPropertySubscriptValue(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->SetPropertySubscriptValue(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1GetPropertySubscriptValue(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->GetPropertySubscriptValue(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnablePropertyAlive(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnablePropertyAlive();
}

void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnablePropertySubscriptValue(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgServerConfig1C*>(aProvider)->EnablePropertySubscriptValue();
}

