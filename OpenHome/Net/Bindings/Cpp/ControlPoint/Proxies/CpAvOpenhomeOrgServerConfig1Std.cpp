#include "CpAvOpenhomeOrgServerConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

#include <string>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncSetPlayCDAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetPlayCDAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetPlayCDAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncSetPlayCDAvOpenhomeOrgServerConfig1Cpp::SyncSetPlayCDAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetPlayCDAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPlayCD(aAsync);
}


class SyncSetServerNameAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetServerNameAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetServerNameAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncSetServerNameAvOpenhomeOrgServerConfig1Cpp::SyncSetServerNameAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetServerNameAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetServerName(aAsync);
}


class SyncGetServerVersionAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetServerVersionAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aServerVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetServerVersionAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    std::string& iServerVersion;
};

SyncGetServerVersionAvOpenhomeOrgServerConfig1Cpp::SyncGetServerVersionAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aServerVersion)
    : iService(aProxy)
    , iServerVersion(aServerVersion)
{
}

void SyncGetServerVersionAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServerVersion(aAsync, iServerVersion);
}


class SyncGetProgressInfoAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetProgressInfoAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aProgress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetProgressInfoAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    std::string& iProgress;
};

SyncGetProgressInfoAvOpenhomeOrgServerConfig1Cpp::SyncGetProgressInfoAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aProgress)
    : iService(aProxy)
    , iProgress(aProgress)
{
}

void SyncGetProgressInfoAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetProgressInfo(aAsync, iProgress);
}


class SyncGetScanVersionAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetScanVersionAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aScanVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetScanVersionAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    std::string& iScanVersion;
};

SyncGetScanVersionAvOpenhomeOrgServerConfig1Cpp::SyncGetScanVersionAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aScanVersion)
    : iService(aProxy)
    , iScanVersion(aScanVersion)
{
}

void SyncGetScanVersionAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetScanVersion(aAsync, iScanVersion);
}


class SyncGetWorkModeAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetWorkModeAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aWorkMode, std::string& aWorkModeList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWorkModeAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    std::string& iWorkMode;
    std::string& iWorkModeList;
};

SyncGetWorkModeAvOpenhomeOrgServerConfig1Cpp::SyncGetWorkModeAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aWorkMode, std::string& aWorkModeList)
    : iService(aProxy)
    , iWorkMode(aWorkMode)
    , iWorkModeList(aWorkModeList)
{
}

void SyncGetWorkModeAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWorkMode(aAsync, iWorkMode, iWorkModeList);
}


class SyncSetWorkModeAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetWorkModeAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetWorkModeAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncSetWorkModeAvOpenhomeOrgServerConfig1Cpp::SyncSetWorkModeAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetWorkModeAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWorkMode(aAsync);
}


class SyncDelAllLocalDBAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncDelAllLocalDBAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDelAllLocalDBAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncDelAllLocalDBAvOpenhomeOrgServerConfig1Cpp::SyncDelAllLocalDBAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncDelAllLocalDBAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelAllLocalDB(aAsync);
}


class SyncInitHDDAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncInitHDDAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInitHDDAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncInitHDDAvOpenhomeOrgServerConfig1Cpp::SyncInitHDDAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncInitHDDAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndInitHDD(aAsync);
}


class SyncRescanAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncRescanAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRescanAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncRescanAvOpenhomeOrgServerConfig1Cpp::SyncRescanAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncRescanAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRescan(aAsync);
}


class SyncHandMountAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncHandMountAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncHandMountAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncHandMountAvOpenhomeOrgServerConfig1Cpp::SyncHandMountAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncHandMountAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndHandMount(aAsync);
}


class SyncHandUMountAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncHandUMountAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncHandUMountAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncHandUMountAvOpenhomeOrgServerConfig1Cpp::SyncHandUMountAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncHandUMountAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndHandUMount(aAsync);
}


class SyncGetDiskInfoAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDiskInfoAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, bool& aIsConnected, std::string& aStatusCode, std::string& aStatusInfo, std::string& aCapacity, std::string& aFileCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDiskInfoAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    bool& iIsConnected;
    std::string& iStatusCode;
    std::string& iStatusInfo;
    std::string& iCapacity;
    std::string& iFileCount;
};

SyncGetDiskInfoAvOpenhomeOrgServerConfig1Cpp::SyncGetDiskInfoAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, bool& aIsConnected, std::string& aStatusCode, std::string& aStatusInfo, std::string& aCapacity, std::string& aFileCount)
    : iService(aProxy)
    , iIsConnected(aIsConnected)
    , iStatusCode(aStatusCode)
    , iStatusInfo(aStatusInfo)
    , iCapacity(aCapacity)
    , iFileCount(aFileCount)
{
}

void SyncGetDiskInfoAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDiskInfo(aAsync, iIsConnected, iStatusCode, iStatusInfo, iCapacity, iFileCount);
}


class SyncGetSMBConfigAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetSMBConfigAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aSMBAddr, std::string& aSMBUserName, std::string& aSMBPassWord);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSMBConfigAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    std::string& iSMBAddr;
    std::string& iSMBUserName;
    std::string& iSMBPassWord;
};

SyncGetSMBConfigAvOpenhomeOrgServerConfig1Cpp::SyncGetSMBConfigAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aSMBAddr, std::string& aSMBUserName, std::string& aSMBPassWord)
    : iService(aProxy)
    , iSMBAddr(aSMBAddr)
    , iSMBUserName(aSMBUserName)
    , iSMBPassWord(aSMBPassWord)
{
}

void SyncGetSMBConfigAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSMBConfig(aAsync, iSMBAddr, iSMBUserName, iSMBPassWord);
}


class SyncSetSMBConfigAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetSMBConfigAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSMBConfigAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncSetSMBConfigAvOpenhomeOrgServerConfig1Cpp::SyncSetSMBConfigAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetSMBConfigAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSMBConfig(aAsync);
}


class SyncGetDriveMountResultAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDriveMountResultAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, bool& aDriveMountResult);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDriveMountResultAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    bool& iDriveMountResult;
};

SyncGetDriveMountResultAvOpenhomeOrgServerConfig1Cpp::SyncGetDriveMountResultAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, bool& aDriveMountResult)
    : iService(aProxy)
    , iDriveMountResult(aDriveMountResult)
{
}

void SyncGetDriveMountResultAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDriveMountResult(aAsync, iDriveMountResult);
}


class SyncEditTrackAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncEditTrackAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncEditTrackAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncEditTrackAvOpenhomeOrgServerConfig1Cpp::SyncEditTrackAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncEditTrackAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndEditTrack(aAsync);
}


class SyncScanVersionDiffAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncScanVersionDiffAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aScanVersionDiffValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncScanVersionDiffAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    std::string& iScanVersionDiffValue;
};

SyncScanVersionDiffAvOpenhomeOrgServerConfig1Cpp::SyncScanVersionDiffAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aScanVersionDiffValue)
    : iService(aProxy)
    , iScanVersionDiffValue(aScanVersionDiffValue)
{
}

void SyncScanVersionDiffAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndScanVersionDiff(aAsync, iScanVersionDiffValue);
}


class SyncGetInitHDDResultAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetInitHDDResultAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, bool& aInitHDDResult);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetInitHDDResultAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    bool& iInitHDDResult;
};

SyncGetInitHDDResultAvOpenhomeOrgServerConfig1Cpp::SyncGetInitHDDResultAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, bool& aInitHDDResult)
    : iService(aProxy)
    , iInitHDDResult(aInitHDDResult)
{
}

void SyncGetInitHDDResultAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetInitHDDResult(aAsync, iInitHDDResult);
}


class SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, bool& aHDDHasInited);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    bool& iHDDHasInited;
};

SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1Cpp::SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, bool& aHDDHasInited)
    : iService(aProxy)
    , iHDDHasInited(aHDDHasInited)
{
}

void SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHDDHasInited(aAsync, iHDDHasInited);
}


class SyncUSBImportAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncUSBImportAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUSBImportAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncUSBImportAvOpenhomeOrgServerConfig1Cpp::SyncUSBImportAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncUSBImportAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUSBImport(aAsync);
}


class SyncGetDISKCapacityAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDISKCapacityAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aDISKTotal, std::string& aDISKUsed, std::string& aDISKAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDISKCapacityAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    std::string& iDISKTotal;
    std::string& iDISKUsed;
    std::string& iDISKAvailable;
};

SyncGetDISKCapacityAvOpenhomeOrgServerConfig1Cpp::SyncGetDISKCapacityAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aDISKTotal, std::string& aDISKUsed, std::string& aDISKAvailable)
    : iService(aProxy)
    , iDISKTotal(aDISKTotal)
    , iDISKUsed(aDISKUsed)
    , iDISKAvailable(aDISKAvailable)
{
}

void SyncGetDISKCapacityAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDISKCapacity(aAsync, iDISKTotal, iDISKUsed, iDISKAvailable);
}


class SyncForceRescanAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncForceRescanAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncForceRescanAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncForceRescanAvOpenhomeOrgServerConfig1Cpp::SyncForceRescanAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncForceRescanAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndForceRescan(aAsync);
}


class SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aScanFile);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    std::string& iScanFile;
};

SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1Cpp::SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aScanFile)
    : iService(aProxy)
    , iScanFile(aScanFile)
{
}

void SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetCurrentScanFile(aAsync, iScanFile);
}


class SyncGetServerConfigAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetServerConfigAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aGetValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetServerConfigAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
    std::string& iGetValue;
};

SyncGetServerConfigAvOpenhomeOrgServerConfig1Cpp::SyncGetServerConfigAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy, std::string& aGetValue)
    : iService(aProxy)
    , iGetValue(aGetValue)
{
}

void SyncGetServerConfigAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServerConfig(aAsync, iGetValue);
}


class SyncSetServerConfigAvOpenhomeOrgServerConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetServerConfigAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetServerConfigAvOpenhomeOrgServerConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgServerConfig1Cpp& iService;
};

SyncSetServerConfigAvOpenhomeOrgServerConfig1Cpp::SyncSetServerConfigAvOpenhomeOrgServerConfig1Cpp(CpProxyAvOpenhomeOrgServerConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetServerConfigAvOpenhomeOrgServerConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetServerConfig(aAsync);
}


CpProxyAvOpenhomeOrgServerConfig1Cpp::CpProxyAvOpenhomeOrgServerConfig1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgServerConfig1Cpp::PlayCDPropertyChanged);
    iPlayCD = new PropertyBool("PlayCD", functor);
    AddProperty(iPlayCD);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgServerConfig1Cpp::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgServerConfig1Cpp::SubscriptValuePropertyChanged);
    iSubscriptValue = new PropertyString("SubscriptValue", functor);
    AddProperty(iSubscriptValue);
}

CpProxyAvOpenhomeOrgServerConfig1Cpp::~CpProxyAvOpenhomeOrgServerConfig1Cpp()
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncSetPlayCD(bool aPlayCD)
{
    SyncSetPlayCDAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginSetPlayCD(aPlayCD, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginSetPlayCD(bool aPlayCD, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetPlayCD, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPlayCD->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPlayCD));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndSetPlayCD(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncSetServerName(const std::string& aServerName)
{
    SyncSetServerNameAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginSetServerName(aServerName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginSetServerName(const std::string& aServerName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetServerName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetServerName->InputParameters();
    {
        Brn buf((const TByte*)aServerName.c_str(), (TUint)aServerName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndSetServerName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetServerVersion(std::string& aServerVersion)
{
    SyncGetServerVersionAvOpenhomeOrgServerConfig1Cpp sync(*this, aServerVersion);
    BeginGetServerVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetServerVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetServerVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServerVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetServerVersion(IAsync& aAsync, std::string& aServerVersion)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aServerVersion.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetProgressInfo(std::string& aProgress)
{
    SyncGetProgressInfoAvOpenhomeOrgServerConfig1Cpp sync(*this, aProgress);
    BeginGetProgressInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetProgressInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetProgressInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetProgressInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetProgressInfo(IAsync& aAsync, std::string& aProgress)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aProgress.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetScanVersion(std::string& aScanVersion)
{
    SyncGetScanVersionAvOpenhomeOrgServerConfig1Cpp sync(*this, aScanVersion);
    BeginGetScanVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetScanVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetScanVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetScanVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetScanVersion(IAsync& aAsync, std::string& aScanVersion)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aScanVersion.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetWorkMode(std::string& aWorkMode, std::string& aWorkModeList)
{
    SyncGetWorkModeAvOpenhomeOrgServerConfig1Cpp sync(*this, aWorkMode, aWorkModeList);
    BeginGetWorkMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetWorkMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetWorkMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWorkMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetWorkMode(IAsync& aAsync, std::string& aWorkMode, std::string& aWorkModeList)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aWorkMode.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aWorkModeList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncSetWorkMode(const std::string& aWorkMode)
{
    SyncSetWorkModeAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginSetWorkMode(aWorkMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginSetWorkMode(const std::string& aWorkMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetWorkMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWorkMode->InputParameters();
    {
        Brn buf((const TByte*)aWorkMode.c_str(), (TUint)aWorkMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndSetWorkMode(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncDelAllLocalDB()
{
    SyncDelAllLocalDBAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginDelAllLocalDB(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginDelAllLocalDB(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDelAllLocalDB, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndDelAllLocalDB(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncInitHDD()
{
    SyncInitHDDAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginInitHDD(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginInitHDD(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInitHDD, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndInitHDD(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncRescan()
{
    SyncRescanAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginRescan(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginRescan(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRescan, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndRescan(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncHandMount()
{
    SyncHandMountAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginHandMount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginHandMount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionHandMount, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndHandMount(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncHandUMount()
{
    SyncHandUMountAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginHandUMount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginHandUMount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionHandUMount, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndHandUMount(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetDiskInfo(bool& aIsConnected, std::string& aStatusCode, std::string& aStatusInfo, std::string& aCapacity, std::string& aFileCount)
{
    SyncGetDiskInfoAvOpenhomeOrgServerConfig1Cpp sync(*this, aIsConnected, aStatusCode, aStatusInfo, aCapacity, aFileCount);
    BeginGetDiskInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetDiskInfo(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetDiskInfo(IAsync& aAsync, bool& aIsConnected, std::string& aStatusCode, std::string& aStatusInfo, std::string& aCapacity, std::string& aFileCount)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aStatusCode.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aStatusInfo.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aCapacity.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aFileCount.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetSMBConfig(std::string& aSMBAddr, std::string& aSMBUserName, std::string& aSMBPassWord)
{
    SyncGetSMBConfigAvOpenhomeOrgServerConfig1Cpp sync(*this, aSMBAddr, aSMBUserName, aSMBPassWord);
    BeginGetSMBConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetSMBConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSMBConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSMBConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetSMBConfig(IAsync& aAsync, std::string& aSMBAddr, std::string& aSMBUserName, std::string& aSMBPassWord)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSMBAddr.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSMBUserName.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSMBPassWord.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncSetSMBConfig(const std::string& aSMBAddr, const std::string& aSMBUserName, const std::string& aSMBPassWord)
{
    SyncSetSMBConfigAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginSetSMBConfig(aSMBAddr, aSMBUserName, aSMBPassWord, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginSetSMBConfig(const std::string& aSMBAddr, const std::string& aSMBUserName, const std::string& aSMBPassWord, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSMBConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSMBConfig->InputParameters();
    {
        Brn buf((const TByte*)aSMBAddr.c_str(), (TUint)aSMBAddr.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aSMBUserName.c_str(), (TUint)aSMBUserName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aSMBPassWord.c_str(), (TUint)aSMBPassWord.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndSetSMBConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetDriveMountResult(bool& aDriveMountResult)
{
    SyncGetDriveMountResultAvOpenhomeOrgServerConfig1Cpp sync(*this, aDriveMountResult);
    BeginGetDriveMountResult(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetDriveMountResult(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDriveMountResult, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDriveMountResult->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetDriveMountResult(IAsync& aAsync, bool& aDriveMountResult)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncEditTrack(const std::string& aEditValue)
{
    SyncEditTrackAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginEditTrack(aEditValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginEditTrack(const std::string& aEditValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionEditTrack, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionEditTrack->InputParameters();
    {
        Brn buf((const TByte*)aEditValue.c_str(), (TUint)aEditValue.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndEditTrack(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncScanVersionDiff(std::string& aScanVersionDiffValue)
{
    SyncScanVersionDiffAvOpenhomeOrgServerConfig1Cpp sync(*this, aScanVersionDiffValue);
    BeginScanVersionDiff(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginScanVersionDiff(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionScanVersionDiff, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionScanVersionDiff->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndScanVersionDiff(IAsync& aAsync, std::string& aScanVersionDiffValue)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aScanVersionDiffValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetInitHDDResult(bool& aInitHDDResult)
{
    SyncGetInitHDDResultAvOpenhomeOrgServerConfig1Cpp sync(*this, aInitHDDResult);
    BeginGetInitHDDResult(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetInitHDDResult(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetInitHDDResult, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetInitHDDResult->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetInitHDDResult(IAsync& aAsync, bool& aInitHDDResult)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetHDDHasInited(bool& aHDDHasInited)
{
    SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1Cpp sync(*this, aHDDHasInited);
    BeginGetHDDHasInited(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetHDDHasInited(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetHDDHasInited, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHDDHasInited->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetHDDHasInited(IAsync& aAsync, bool& aHDDHasInited)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncUSBImport()
{
    SyncUSBImportAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginUSBImport(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginUSBImport(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUSBImport, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndUSBImport(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetDISKCapacity(std::string& aDISKTotal, std::string& aDISKUsed, std::string& aDISKAvailable)
{
    SyncGetDISKCapacityAvOpenhomeOrgServerConfig1Cpp sync(*this, aDISKTotal, aDISKUsed, aDISKAvailable);
    BeginGetDISKCapacity(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetDISKCapacity(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDISKCapacity, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDISKCapacity->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetDISKCapacity(IAsync& aAsync, std::string& aDISKTotal, std::string& aDISKUsed, std::string& aDISKAvailable)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDISKTotal.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDISKUsed.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDISKAvailable.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncForceRescan()
{
    SyncForceRescanAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginForceRescan(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginForceRescan(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionForceRescan, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndForceRescan(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetCurrentScanFile(std::string& aScanFile)
{
    SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1Cpp sync(*this, aScanFile);
    BeginGetCurrentScanFile(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetCurrentScanFile(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetCurrentScanFile, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetCurrentScanFile->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetCurrentScanFile(IAsync& aAsync, std::string& aScanFile)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aScanFile.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncGetServerConfig(std::string& aGetValue)
{
    SyncGetServerConfigAvOpenhomeOrgServerConfig1Cpp sync(*this, aGetValue);
    BeginGetServerConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginGetServerConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetServerConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServerConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndGetServerConfig(IAsync& aAsync, std::string& aGetValue)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aGetValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncSetServerConfig(const std::string& aSetValue)
{
    SyncSetServerConfigAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginSetServerConfig(aSetValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginSetServerConfig(const std::string& aSetValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetServerConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetServerConfig->InputParameters();
    {
        Brn buf((const TByte*)aSetValue.c_str(), (TUint)aSetValue.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::EndSetServerConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SetPropertyPlayCDChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPlayCDChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SetPropertyAliveChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAliveChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SetPropertySubscriptValueChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSubscriptValueChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::PropertyPlayCD(bool& aPlayCD) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPlayCD = iPlayCD->Value();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::PropertyAlive(bool& aAlive) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::PropertySubscriptValue(std::string& aSubscriptValue) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSubscriptValue->Value();
    aSubscriptValue.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::PlayCDPropertyChanged()
{
    ReportEvent(iPlayCDChanged);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SubscriptValuePropertyChanged()
{
    ReportEvent(iSubscriptValueChanged);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgServerConfig1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgServerConfig1Cpp::Version() const
{
  return iCpProxy.Version();
}

