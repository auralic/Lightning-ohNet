#include "CpAvOpenhomeOrgServerConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncSetServerNameAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncSetServerNameAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetServerNameAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

SyncSetServerNameAvOpenhomeOrgServerConfig1::SyncSetServerNameAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetServerNameAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetServerName(aAsync);
}


class SyncGetServerVersionAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetServerVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aServerVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetServerVersionAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iServerVersion;
};

SyncGetServerVersionAvOpenhomeOrgServerConfig1::SyncGetServerVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aServerVersion)
    : iService(aProxy)
    , iServerVersion(aServerVersion)
{
}

void SyncGetServerVersionAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServerVersion(aAsync, iServerVersion);
}


class SyncGetProgressInfoAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetProgressInfoAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aProgress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetProgressInfoAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iProgress;
};

SyncGetProgressInfoAvOpenhomeOrgServerConfig1::SyncGetProgressInfoAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aProgress)
    : iService(aProxy)
    , iProgress(aProgress)
{
}

void SyncGetProgressInfoAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetProgressInfo(aAsync, iProgress);
}


class SyncGetScanVersionAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetScanVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aScanVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetScanVersionAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iScanVersion;
};

SyncGetScanVersionAvOpenhomeOrgServerConfig1::SyncGetScanVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aScanVersion)
    : iService(aProxy)
    , iScanVersion(aScanVersion)
{
}

void SyncGetScanVersionAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetScanVersion(aAsync, iScanVersion);
}


class SyncGetWorkModeAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetWorkModeAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aWorkMode, Brh& aWorkModeList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWorkModeAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iWorkMode;
    Brh& iWorkModeList;
};

SyncGetWorkModeAvOpenhomeOrgServerConfig1::SyncGetWorkModeAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aWorkMode, Brh& aWorkModeList)
    : iService(aProxy)
    , iWorkMode(aWorkMode)
    , iWorkModeList(aWorkModeList)
{
}

void SyncGetWorkModeAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWorkMode(aAsync, iWorkMode, iWorkModeList);
}


class SyncSetWorkModeAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncSetWorkModeAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetWorkModeAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

SyncSetWorkModeAvOpenhomeOrgServerConfig1::SyncSetWorkModeAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetWorkModeAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWorkMode(aAsync);
}


class SyncDelAllLocalDBAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncDelAllLocalDBAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDelAllLocalDBAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

SyncDelAllLocalDBAvOpenhomeOrgServerConfig1::SyncDelAllLocalDBAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncDelAllLocalDBAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelAllLocalDB(aAsync);
}


class SyncInitHDDAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncInitHDDAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInitHDDAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

SyncInitHDDAvOpenhomeOrgServerConfig1::SyncInitHDDAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncInitHDDAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInitHDD(aAsync);
}


class SyncRescanAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncRescanAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRescanAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

SyncRescanAvOpenhomeOrgServerConfig1::SyncRescanAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncRescanAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRescan(aAsync);
}


class SyncHandMountAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncHandMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncHandMountAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

SyncHandMountAvOpenhomeOrgServerConfig1::SyncHandMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncHandMountAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndHandMount(aAsync);
}


class SyncHandUMountAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncHandUMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncHandUMountAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

SyncHandUMountAvOpenhomeOrgServerConfig1::SyncHandUMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncHandUMountAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndHandUMount(aAsync);
}


class SyncGetDiskInfoAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetDiskInfoAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aIsConnected, Brh& aStatusCode, Brh& aStatusInfo, Brh& aCapacity, Brh& aFileCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDiskInfoAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    TBool& iIsConnected;
    Brh& iStatusCode;
    Brh& iStatusInfo;
    Brh& iCapacity;
    Brh& iFileCount;
};

SyncGetDiskInfoAvOpenhomeOrgServerConfig1::SyncGetDiskInfoAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aIsConnected, Brh& aStatusCode, Brh& aStatusInfo, Brh& aCapacity, Brh& aFileCount)
    : iService(aProxy)
    , iIsConnected(aIsConnected)
    , iStatusCode(aStatusCode)
    , iStatusInfo(aStatusInfo)
    , iCapacity(aCapacity)
    , iFileCount(aFileCount)
{
}

void SyncGetDiskInfoAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDiskInfo(aAsync, iIsConnected, iStatusCode, iStatusInfo, iCapacity, iFileCount);
}


class SyncGetSMBConfigAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetSMBConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aSMBAddr, Brh& aSMBUserName, Brh& aSMBPassWord);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSMBConfigAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iSMBAddr;
    Brh& iSMBUserName;
    Brh& iSMBPassWord;
};

SyncGetSMBConfigAvOpenhomeOrgServerConfig1::SyncGetSMBConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aSMBAddr, Brh& aSMBUserName, Brh& aSMBPassWord)
    : iService(aProxy)
    , iSMBAddr(aSMBAddr)
    , iSMBUserName(aSMBUserName)
    , iSMBPassWord(aSMBPassWord)
{
}

void SyncGetSMBConfigAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSMBConfig(aAsync, iSMBAddr, iSMBUserName, iSMBPassWord);
}


class SyncSetSMBConfigAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncSetSMBConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSMBConfigAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

SyncSetSMBConfigAvOpenhomeOrgServerConfig1::SyncSetSMBConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetSMBConfigAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSMBConfig(aAsync);
}


class SyncGetDriveMountResultAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetDriveMountResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aDriveMountResult);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDriveMountResultAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    TBool& iDriveMountResult;
};

SyncGetDriveMountResultAvOpenhomeOrgServerConfig1::SyncGetDriveMountResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aDriveMountResult)
    : iService(aProxy)
    , iDriveMountResult(aDriveMountResult)
{
}

void SyncGetDriveMountResultAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDriveMountResult(aAsync, iDriveMountResult);
}


class SyncEditTrackAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncEditTrackAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEditTrackAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

SyncEditTrackAvOpenhomeOrgServerConfig1::SyncEditTrackAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncEditTrackAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndEditTrack(aAsync);
}


class SyncScanVersionDiffAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncScanVersionDiffAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aScanVersionDiffValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncScanVersionDiffAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iScanVersionDiffValue;
};

SyncScanVersionDiffAvOpenhomeOrgServerConfig1::SyncScanVersionDiffAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aScanVersionDiffValue)
    : iService(aProxy)
    , iScanVersionDiffValue(aScanVersionDiffValue)
{
}

void SyncScanVersionDiffAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndScanVersionDiff(aAsync, iScanVersionDiffValue);
}


class SyncGetInitHDDResultAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetInitHDDResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aInitHDDResult);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetInitHDDResultAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    TBool& iInitHDDResult;
};

SyncGetInitHDDResultAvOpenhomeOrgServerConfig1::SyncGetInitHDDResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aInitHDDResult)
    : iService(aProxy)
    , iInitHDDResult(aInitHDDResult)
{
}

void SyncGetInitHDDResultAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetInitHDDResult(aAsync, iInitHDDResult);
}


class SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aHDDHasInited);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    TBool& iHDDHasInited;
};

SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1::SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aHDDHasInited)
    : iService(aProxy)
    , iHDDHasInited(aHDDHasInited)
{
}

void SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHDDHasInited(aAsync, iHDDHasInited);
}


CpProxyAvOpenhomeOrgServerConfig1::CpProxyAvOpenhomeOrgServerConfig1(CpDevice& aDevice)
    : CpProxy("av-openhome-org", "ServerConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionSetServerName = new Action("SetServerName");
    param = new OpenHome::Net::ParameterString("ServerName");
    iActionSetServerName->AddInputParameter(param);

    iActionGetServerVersion = new Action("GetServerVersion");
    param = new OpenHome::Net::ParameterString("ServerVersion");
    iActionGetServerVersion->AddOutputParameter(param);

    iActionGetProgressInfo = new Action("GetProgressInfo");
    param = new OpenHome::Net::ParameterString("Progress");
    iActionGetProgressInfo->AddOutputParameter(param);

    iActionGetScanVersion = new Action("GetScanVersion");
    param = new OpenHome::Net::ParameterString("ScanVersion");
    iActionGetScanVersion->AddOutputParameter(param);

    iActionGetWorkMode = new Action("GetWorkMode");
    param = new OpenHome::Net::ParameterString("WorkMode");
    iActionGetWorkMode->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("WorkModeList");
    iActionGetWorkMode->AddOutputParameter(param);

    iActionSetWorkMode = new Action("SetWorkMode");
    param = new OpenHome::Net::ParameterString("WorkMode");
    iActionSetWorkMode->AddInputParameter(param);

    iActionDelAllLocalDB = new Action("DelAllLocalDB");

    iActionInitHDD = new Action("InitHDD");

    iActionRescan = new Action("Rescan");

    iActionHandMount = new Action("HandMount");

    iActionHandUMount = new Action("HandUMount");

    iActionGetDiskInfo = new Action("GetDiskInfo");
    param = new OpenHome::Net::ParameterBool("IsConnected");
    iActionGetDiskInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("StatusCode");
    iActionGetDiskInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("StatusInfo");
    iActionGetDiskInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Capacity");
    iActionGetDiskInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("FileCount");
    iActionGetDiskInfo->AddOutputParameter(param);

    iActionGetSMBConfig = new Action("GetSMBConfig");
    param = new OpenHome::Net::ParameterString("SMBAddr");
    iActionGetSMBConfig->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("SMBUserName");
    iActionGetSMBConfig->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("SMBPassWord");
    iActionGetSMBConfig->AddOutputParameter(param);

    iActionSetSMBConfig = new Action("SetSMBConfig");
    param = new OpenHome::Net::ParameterString("SMBAddr");
    iActionSetSMBConfig->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("SMBUserName");
    iActionSetSMBConfig->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("SMBPassWord");
    iActionSetSMBConfig->AddInputParameter(param);

    iActionGetDriveMountResult = new Action("GetDriveMountResult");
    param = new OpenHome::Net::ParameterBool("DriveMountResult");
    iActionGetDriveMountResult->AddOutputParameter(param);

    iActionEditTrack = new Action("EditTrack");
    param = new OpenHome::Net::ParameterString("EditValue");
    iActionEditTrack->AddInputParameter(param);

    iActionScanVersionDiff = new Action("ScanVersionDiff");
    param = new OpenHome::Net::ParameterString("ScanVersionDiffValue");
    iActionScanVersionDiff->AddOutputParameter(param);

    iActionGetInitHDDResult = new Action("GetInitHDDResult");
    param = new OpenHome::Net::ParameterBool("InitHDDResult");
    iActionGetInitHDDResult->AddOutputParameter(param);

    iActionGetHDDHasInited = new Action("GetHDDHasInited");
    param = new OpenHome::Net::ParameterBool("HDDHasInited");
    iActionGetHDDHasInited->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgServerConfig1::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
}

CpProxyAvOpenhomeOrgServerConfig1::~CpProxyAvOpenhomeOrgServerConfig1()
{
    DestroyService();
    delete iActionSetServerName;
    delete iActionGetServerVersion;
    delete iActionGetProgressInfo;
    delete iActionGetScanVersion;
    delete iActionGetWorkMode;
    delete iActionSetWorkMode;
    delete iActionDelAllLocalDB;
    delete iActionInitHDD;
    delete iActionRescan;
    delete iActionHandMount;
    delete iActionHandUMount;
    delete iActionGetDiskInfo;
    delete iActionGetSMBConfig;
    delete iActionSetSMBConfig;
    delete iActionGetDriveMountResult;
    delete iActionEditTrack;
    delete iActionScanVersionDiff;
    delete iActionGetInitHDDResult;
    delete iActionGetHDDHasInited;
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncSetServerName(const Brx& aServerName)
{
    SyncSetServerNameAvOpenhomeOrgServerConfig1 sync(*this);
    BeginSetServerName(aServerName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginSetServerName(const Brx& aServerName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetServerName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetServerName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServerName));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndSetServerName(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetServerName"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetServerVersion(Brh& aServerVersion)
{
    SyncGetServerVersionAvOpenhomeOrgServerConfig1 sync(*this, aServerVersion);
    BeginGetServerVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetServerVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetServerVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServerVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetServerVersion(IAsync& aAsync, Brh& aServerVersion)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetServerVersion"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aServerVersion);
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetProgressInfo(Brh& aProgress)
{
    SyncGetProgressInfoAvOpenhomeOrgServerConfig1 sync(*this, aProgress);
    BeginGetProgressInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetProgressInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetProgressInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetProgressInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetProgressInfo(IAsync& aAsync, Brh& aProgress)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetProgressInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aProgress);
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetScanVersion(Brh& aScanVersion)
{
    SyncGetScanVersionAvOpenhomeOrgServerConfig1 sync(*this, aScanVersion);
    BeginGetScanVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetScanVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetScanVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetScanVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetScanVersion(IAsync& aAsync, Brh& aScanVersion)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetScanVersion"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aScanVersion);
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetWorkMode(Brh& aWorkMode, Brh& aWorkModeList)
{
    SyncGetWorkModeAvOpenhomeOrgServerConfig1 sync(*this, aWorkMode, aWorkModeList);
    BeginGetWorkMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetWorkMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetWorkMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWorkMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetWorkMode(IAsync& aAsync, Brh& aWorkMode, Brh& aWorkModeList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetWorkMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aWorkMode);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aWorkModeList);
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncSetWorkMode(const Brx& aWorkMode)
{
    SyncSetWorkModeAvOpenhomeOrgServerConfig1 sync(*this);
    BeginSetWorkMode(aWorkMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginSetWorkMode(const Brx& aWorkMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetWorkMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWorkMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aWorkMode));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndSetWorkMode(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetWorkMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncDelAllLocalDB()
{
    SyncDelAllLocalDBAvOpenhomeOrgServerConfig1 sync(*this);
    BeginDelAllLocalDB(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginDelAllLocalDB(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionDelAllLocalDB, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndDelAllLocalDB(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DelAllLocalDB"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncInitHDD()
{
    SyncInitHDDAvOpenhomeOrgServerConfig1 sync(*this);
    BeginInitHDD(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginInitHDD(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionInitHDD, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndInitHDD(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("InitHDD"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncRescan()
{
    SyncRescanAvOpenhomeOrgServerConfig1 sync(*this);
    BeginRescan(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginRescan(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionRescan, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndRescan(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Rescan"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncHandMount()
{
    SyncHandMountAvOpenhomeOrgServerConfig1 sync(*this);
    BeginHandMount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginHandMount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionHandMount, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndHandMount(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("HandMount"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncHandUMount()
{
    SyncHandUMountAvOpenhomeOrgServerConfig1 sync(*this);
    BeginHandUMount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginHandUMount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionHandUMount, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndHandUMount(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("HandUMount"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetDiskInfo(TBool& aIsConnected, Brh& aStatusCode, Brh& aStatusInfo, Brh& aCapacity, Brh& aFileCount)
{
    SyncGetDiskInfoAvOpenhomeOrgServerConfig1 sync(*this, aIsConnected, aStatusCode, aStatusInfo, aCapacity, aFileCount);
    BeginGetDiskInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetDiskInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetDiskInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDiskInfo->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetDiskInfo(IAsync& aAsync, TBool& aIsConnected, Brh& aStatusCode, Brh& aStatusInfo, Brh& aCapacity, Brh& aFileCount)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDiskInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aIsConnected = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aStatusCode);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aStatusInfo);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aCapacity);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aFileCount);
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetSMBConfig(Brh& aSMBAddr, Brh& aSMBUserName, Brh& aSMBPassWord)
{
    SyncGetSMBConfigAvOpenhomeOrgServerConfig1 sync(*this, aSMBAddr, aSMBUserName, aSMBPassWord);
    BeginGetSMBConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetSMBConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetSMBConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSMBConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetSMBConfig(IAsync& aAsync, Brh& aSMBAddr, Brh& aSMBUserName, Brh& aSMBPassWord)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSMBConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSMBAddr);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSMBUserName);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSMBPassWord);
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord)
{
    SyncSetSMBConfigAvOpenhomeOrgServerConfig1 sync(*this);
    BeginSetSMBConfig(aSMBAddr, aSMBUserName, aSMBPassWord, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetSMBConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSMBConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBAddr));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBUserName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBPassWord));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndSetSMBConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetSMBConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetDriveMountResult(TBool& aDriveMountResult)
{
    SyncGetDriveMountResultAvOpenhomeOrgServerConfig1 sync(*this, aDriveMountResult);
    BeginGetDriveMountResult(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetDriveMountResult(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetDriveMountResult, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDriveMountResult->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetDriveMountResult(IAsync& aAsync, TBool& aDriveMountResult)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDriveMountResult"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aDriveMountResult = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncEditTrack(const Brx& aEditValue)
{
    SyncEditTrackAvOpenhomeOrgServerConfig1 sync(*this);
    BeginEditTrack(aEditValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginEditTrack(const Brx& aEditValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionEditTrack, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEditTrack->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aEditValue));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndEditTrack(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("EditTrack"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncScanVersionDiff(Brh& aScanVersionDiffValue)
{
    SyncScanVersionDiffAvOpenhomeOrgServerConfig1 sync(*this, aScanVersionDiffValue);
    BeginScanVersionDiff(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginScanVersionDiff(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionScanVersionDiff, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionScanVersionDiff->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndScanVersionDiff(IAsync& aAsync, Brh& aScanVersionDiffValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ScanVersionDiff"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aScanVersionDiffValue);
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetInitHDDResult(TBool& aInitHDDResult)
{
    SyncGetInitHDDResultAvOpenhomeOrgServerConfig1 sync(*this, aInitHDDResult);
    BeginGetInitHDDResult(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetInitHDDResult(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetInitHDDResult, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetInitHDDResult->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetInitHDDResult(IAsync& aAsync, TBool& aInitHDDResult)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetInitHDDResult"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aInitHDDResult = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetHDDHasInited(TBool& aHDDHasInited)
{
    SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1 sync(*this, aHDDHasInited);
    BeginGetHDDHasInited(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetHDDHasInited(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetHDDHasInited, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHDDHasInited->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetHDDHasInited(IAsync& aAsync, TBool& aHDDHasInited)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetHDDHasInited"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aHDDHasInited = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgServerConfig1::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock->Wait();
    iAliveChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgServerConfig1::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgServerConfig1::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

