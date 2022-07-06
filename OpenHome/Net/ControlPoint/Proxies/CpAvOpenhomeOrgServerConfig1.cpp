#include "CpAvOpenhomeOrgServerConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncSetPlayCDAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncSetPlayCDAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncSetServerNameAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncSetServerNameAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncGetServerVersionAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetServerVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aServerVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iServerVersion;
};

class SyncGetProgressInfoAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetProgressInfoAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aProgress);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iProgress;
};

class SyncGetScanVersionAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetScanVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aScanVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iScanVersion;
};

class SyncGetWorkModeAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetWorkModeAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aWorkMode, Brh& aWorkModeList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iWorkMode;
    Brh& iWorkModeList;
};

class SyncSetWorkModeAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncSetWorkModeAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncDelAllLocalDBAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncDelAllLocalDBAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncInitHDDAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncInitHDDAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncRescanAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncRescanAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncHandMountAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncHandMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncHandUMountAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncHandUMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncGetDiskInfoAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetDiskInfoAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aIsConnected, Brh& aStatusCode, Brh& aStatusInfo, Brh& aCapacity, Brh& aFileCount);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    TBool& iIsConnected;
    Brh& iStatusCode;
    Brh& iStatusInfo;
    Brh& iCapacity;
    Brh& iFileCount;
};

class SyncGetSMBConfigAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetSMBConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aSMBAddr, Brh& aSMBUserName, Brh& aSMBPassWord);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iSMBAddr;
    Brh& iSMBUserName;
    Brh& iSMBPassWord;
};

class SyncSetSMBConfigAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncSetSMBConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncGetDriveMountResultAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetDriveMountResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aDriveMountResult);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    TBool& iDriveMountResult;
};

class SyncEditTrackAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncEditTrackAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncScanVersionDiffAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncScanVersionDiffAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aScanVersionDiffValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iScanVersionDiffValue;
};

class SyncGetInitHDDResultAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetInitHDDResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aInitHDDResult);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    TBool& iInitHDDResult;
};

class SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aHDDHasInited);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    TBool& iHDDHasInited;
};

class SyncUSBImportAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncUSBImportAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncGetDISKCapacityAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetDISKCapacityAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aDISKTotal, Brh& aDISKUsed, Brh& aDISKAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iDISKTotal;
    Brh& iDISKUsed;
    Brh& iDISKAvailable;
};

class SyncForceRescanAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncForceRescanAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

class SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aScanFile);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iScanFile;
};

class SyncGetServerConfigAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncGetServerConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aGetValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
    Brh& iGetValue;
};

class SyncSetServerConfigAvOpenhomeOrgServerConfig1 : public SyncProxyAction
{
public:
    SyncSetServerConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgServerConfig1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncSetPlayCDAvOpenhomeOrgServerConfig1

SyncSetPlayCDAvOpenhomeOrgServerConfig1::SyncSetPlayCDAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetPlayCDAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPlayCD(aAsync);
}

// SyncSetServerNameAvOpenhomeOrgServerConfig1

SyncSetServerNameAvOpenhomeOrgServerConfig1::SyncSetServerNameAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetServerNameAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetServerName(aAsync);
}

// SyncGetServerVersionAvOpenhomeOrgServerConfig1

SyncGetServerVersionAvOpenhomeOrgServerConfig1::SyncGetServerVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aServerVersion)
    : iService(aProxy)
    , iServerVersion(aServerVersion)
{
}

void SyncGetServerVersionAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServerVersion(aAsync, iServerVersion);
}

// SyncGetProgressInfoAvOpenhomeOrgServerConfig1

SyncGetProgressInfoAvOpenhomeOrgServerConfig1::SyncGetProgressInfoAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aProgress)
    : iService(aProxy)
    , iProgress(aProgress)
{
}

void SyncGetProgressInfoAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetProgressInfo(aAsync, iProgress);
}

// SyncGetScanVersionAvOpenhomeOrgServerConfig1

SyncGetScanVersionAvOpenhomeOrgServerConfig1::SyncGetScanVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aScanVersion)
    : iService(aProxy)
    , iScanVersion(aScanVersion)
{
}

void SyncGetScanVersionAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetScanVersion(aAsync, iScanVersion);
}

// SyncGetWorkModeAvOpenhomeOrgServerConfig1

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

// SyncSetWorkModeAvOpenhomeOrgServerConfig1

SyncSetWorkModeAvOpenhomeOrgServerConfig1::SyncSetWorkModeAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetWorkModeAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWorkMode(aAsync);
}

// SyncDelAllLocalDBAvOpenhomeOrgServerConfig1

SyncDelAllLocalDBAvOpenhomeOrgServerConfig1::SyncDelAllLocalDBAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncDelAllLocalDBAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelAllLocalDB(aAsync);
}

// SyncInitHDDAvOpenhomeOrgServerConfig1

SyncInitHDDAvOpenhomeOrgServerConfig1::SyncInitHDDAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncInitHDDAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInitHDD(aAsync);
}

// SyncRescanAvOpenhomeOrgServerConfig1

SyncRescanAvOpenhomeOrgServerConfig1::SyncRescanAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncRescanAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRescan(aAsync);
}

// SyncHandMountAvOpenhomeOrgServerConfig1

SyncHandMountAvOpenhomeOrgServerConfig1::SyncHandMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncHandMountAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndHandMount(aAsync);
}

// SyncHandUMountAvOpenhomeOrgServerConfig1

SyncHandUMountAvOpenhomeOrgServerConfig1::SyncHandUMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncHandUMountAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndHandUMount(aAsync);
}

// SyncGetDiskInfoAvOpenhomeOrgServerConfig1

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

// SyncGetSMBConfigAvOpenhomeOrgServerConfig1

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

// SyncSetSMBConfigAvOpenhomeOrgServerConfig1

SyncSetSMBConfigAvOpenhomeOrgServerConfig1::SyncSetSMBConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetSMBConfigAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSMBConfig(aAsync);
}

// SyncGetDriveMountResultAvOpenhomeOrgServerConfig1

SyncGetDriveMountResultAvOpenhomeOrgServerConfig1::SyncGetDriveMountResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aDriveMountResult)
    : iService(aProxy)
    , iDriveMountResult(aDriveMountResult)
{
}

void SyncGetDriveMountResultAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDriveMountResult(aAsync, iDriveMountResult);
}

// SyncEditTrackAvOpenhomeOrgServerConfig1

SyncEditTrackAvOpenhomeOrgServerConfig1::SyncEditTrackAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncEditTrackAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndEditTrack(aAsync);
}

// SyncScanVersionDiffAvOpenhomeOrgServerConfig1

SyncScanVersionDiffAvOpenhomeOrgServerConfig1::SyncScanVersionDiffAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aScanVersionDiffValue)
    : iService(aProxy)
    , iScanVersionDiffValue(aScanVersionDiffValue)
{
}

void SyncScanVersionDiffAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndScanVersionDiff(aAsync, iScanVersionDiffValue);
}

// SyncGetInitHDDResultAvOpenhomeOrgServerConfig1

SyncGetInitHDDResultAvOpenhomeOrgServerConfig1::SyncGetInitHDDResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aInitHDDResult)
    : iService(aProxy)
    , iInitHDDResult(aInitHDDResult)
{
}

void SyncGetInitHDDResultAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetInitHDDResult(aAsync, iInitHDDResult);
}

// SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1

SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1::SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, TBool& aHDDHasInited)
    : iService(aProxy)
    , iHDDHasInited(aHDDHasInited)
{
}

void SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHDDHasInited(aAsync, iHDDHasInited);
}

// SyncUSBImportAvOpenhomeOrgServerConfig1

SyncUSBImportAvOpenhomeOrgServerConfig1::SyncUSBImportAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncUSBImportAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndUSBImport(aAsync);
}

// SyncGetDISKCapacityAvOpenhomeOrgServerConfig1

SyncGetDISKCapacityAvOpenhomeOrgServerConfig1::SyncGetDISKCapacityAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aDISKTotal, Brh& aDISKUsed, Brh& aDISKAvailable)
    : iService(aProxy)
    , iDISKTotal(aDISKTotal)
    , iDISKUsed(aDISKUsed)
    , iDISKAvailable(aDISKAvailable)
{
}

void SyncGetDISKCapacityAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDISKCapacity(aAsync, iDISKTotal, iDISKUsed, iDISKAvailable);
}

// SyncForceRescanAvOpenhomeOrgServerConfig1

SyncForceRescanAvOpenhomeOrgServerConfig1::SyncForceRescanAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncForceRescanAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndForceRescan(aAsync);
}

// SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1

SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1::SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aScanFile)
    : iService(aProxy)
    , iScanFile(aScanFile)
{
}

void SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetCurrentScanFile(aAsync, iScanFile);
}

// SyncGetServerConfigAvOpenhomeOrgServerConfig1

SyncGetServerConfigAvOpenhomeOrgServerConfig1::SyncGetServerConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy, Brh& aGetValue)
    : iService(aProxy)
    , iGetValue(aGetValue)
{
}

void SyncGetServerConfigAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServerConfig(aAsync, iGetValue);
}

// SyncSetServerConfigAvOpenhomeOrgServerConfig1

SyncSetServerConfigAvOpenhomeOrgServerConfig1::SyncSetServerConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetServerConfigAvOpenhomeOrgServerConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetServerConfig(aAsync);
}


// CpProxyAvOpenhomeOrgServerConfig1

CpProxyAvOpenhomeOrgServerConfig1::CpProxyAvOpenhomeOrgServerConfig1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "ServerConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionSetPlayCD = new Action("SetPlayCD");
    param = new OpenHome::Net::ParameterBool("PlayCD");
    iActionSetPlayCD->AddInputParameter(param);

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

    iActionUSBImport = new Action("USBImport");

    iActionGetDISKCapacity = new Action("GetDISKCapacity");
    param = new OpenHome::Net::ParameterString("DISKTotal");
    iActionGetDISKCapacity->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("DISKUsed");
    iActionGetDISKCapacity->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("DISKAvailable");
    iActionGetDISKCapacity->AddOutputParameter(param);

    iActionForceRescan = new Action("ForceRescan");

    iActionGetCurrentScanFile = new Action("GetCurrentScanFile");
    param = new OpenHome::Net::ParameterString("ScanFile");
    iActionGetCurrentScanFile->AddOutputParameter(param);

    iActionGetServerConfig = new Action("GetServerConfig");
    param = new OpenHome::Net::ParameterString("GetValue");
    iActionGetServerConfig->AddOutputParameter(param);

    iActionSetServerConfig = new Action("SetServerConfig");
    param = new OpenHome::Net::ParameterString("SetValue");
    iActionSetServerConfig->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgServerConfig1::PlayCDPropertyChanged);
    iPlayCD = new PropertyBool("PlayCD", functor);
    AddProperty(iPlayCD);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgServerConfig1::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgServerConfig1::SubscriptValuePropertyChanged);
    iSubscriptValue = new PropertyString("SubscriptValue", functor);
    AddProperty(iSubscriptValue);
}

CpProxyAvOpenhomeOrgServerConfig1::~CpProxyAvOpenhomeOrgServerConfig1()
{
    DestroyService();
    delete iActionSetPlayCD;
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
    delete iActionUSBImport;
    delete iActionGetDISKCapacity;
    delete iActionForceRescan;
    delete iActionGetCurrentScanFile;
    delete iActionGetServerConfig;
    delete iActionSetServerConfig;
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncSetPlayCD(TBool aPlayCD)
{
    SyncSetPlayCDAvOpenhomeOrgServerConfig1 sync(*this);
    BeginSetPlayCD(aPlayCD, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginSetPlayCD(TBool aPlayCD, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetPlayCD, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPlayCD->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPlayCD));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndSetPlayCD(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetPlayCD"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncSetServerName(const Brx& aServerName)
{
    SyncSetServerNameAvOpenhomeOrgServerConfig1 sync(*this);
    BeginSetServerName(aServerName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginSetServerName(const Brx& aServerName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetServerName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetServerName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServerName));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetServerVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServerVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetProgressInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetProgressInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetScanVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetScanVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetWorkMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWorkMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetWorkMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWorkMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aWorkMode));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDelAllLocalDB, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInitHDD, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRescan, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionHandMount, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionHandUMount, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDiskInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDiskInfo->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSMBConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSMBConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSMBConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSMBConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBAddr));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBUserName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBPassWord));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDriveMountResult, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDriveMountResult->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionEditTrack, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEditTrack->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aEditValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionScanVersionDiff, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionScanVersionDiff->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetInitHDDResult, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetInitHDDResult->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetHDDHasInited, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHDDHasInited->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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

void CpProxyAvOpenhomeOrgServerConfig1::SyncUSBImport()
{
    SyncUSBImportAvOpenhomeOrgServerConfig1 sync(*this);
    BeginUSBImport(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginUSBImport(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUSBImport, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndUSBImport(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("USBImport"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetDISKCapacity(Brh& aDISKTotal, Brh& aDISKUsed, Brh& aDISKAvailable)
{
    SyncGetDISKCapacityAvOpenhomeOrgServerConfig1 sync(*this, aDISKTotal, aDISKUsed, aDISKAvailable);
    BeginGetDISKCapacity(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetDISKCapacity(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDISKCapacity, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDISKCapacity->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetDISKCapacity(IAsync& aAsync, Brh& aDISKTotal, Brh& aDISKUsed, Brh& aDISKAvailable)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDISKCapacity"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDISKTotal);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDISKUsed);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDISKAvailable);
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncForceRescan()
{
    SyncForceRescanAvOpenhomeOrgServerConfig1 sync(*this);
    BeginForceRescan(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginForceRescan(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionForceRescan, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndForceRescan(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ForceRescan"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetCurrentScanFile(Brh& aScanFile)
{
    SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1 sync(*this, aScanFile);
    BeginGetCurrentScanFile(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetCurrentScanFile(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetCurrentScanFile, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetCurrentScanFile->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetCurrentScanFile(IAsync& aAsync, Brh& aScanFile)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetCurrentScanFile"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aScanFile);
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncGetServerConfig(Brh& aGetValue)
{
    SyncGetServerConfigAvOpenhomeOrgServerConfig1 sync(*this, aGetValue);
    BeginGetServerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginGetServerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetServerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndGetServerConfig(IAsync& aAsync, Brh& aGetValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetServerConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aGetValue);
}

void CpProxyAvOpenhomeOrgServerConfig1::SyncSetServerConfig(const Brx& aSetValue)
{
    SyncSetServerConfigAvOpenhomeOrgServerConfig1 sync(*this);
    BeginSetServerConfig(aSetValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1::BeginSetServerConfig(const Brx& aSetValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetServerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetServerConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSetValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1::EndSetServerConfig(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetServerConfig"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgServerConfig1::SetPropertyPlayCDChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPlayCDChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgServerConfig1::SetPropertyAliveChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAliveChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgServerConfig1::SetPropertySubscriptValueChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSubscriptValueChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgServerConfig1::PropertyPlayCD(TBool& aPlayCD) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPlayCD = iPlayCD->Value();
}

void CpProxyAvOpenhomeOrgServerConfig1::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgServerConfig1::PropertySubscriptValue(Brhz& aSubscriptValue) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSubscriptValue.Set(iSubscriptValue->Value());
}

void CpProxyAvOpenhomeOrgServerConfig1::PlayCDPropertyChanged()
{
    ReportEvent(iPlayCDChanged);
}

void CpProxyAvOpenhomeOrgServerConfig1::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgServerConfig1::SubscriptValuePropertyChanged()
{
    ReportEvent(iSubscriptValueChanged);
}


void CpProxyAvOpenhomeOrgServerConfig1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgServerConfig1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgServerConfig1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgServerConfig1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgServerConfig1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgServerConfig1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgServerConfig1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgServerConfig1::Version() const
{
  return iCpProxy.Version();
}


