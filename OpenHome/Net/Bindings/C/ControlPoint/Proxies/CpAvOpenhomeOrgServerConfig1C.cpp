#include "CpAvOpenhomeOrgServerConfig1.h"
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/C/CpProxyCPrivate.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class CpProxyAvOpenhomeOrgServerConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgServerConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgServerConfig1C();
    //CpProxyAvOpenhomeOrgServerConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgServerConfig1*>(iProxy); }

    void SyncSetServerName(const Brx& aServerName);
    void BeginSetServerName(const Brx& aServerName, FunctorAsync& aFunctor);
    void EndSetServerName(IAsync& aAsync);

    void SyncGetServerVersion(Brh& aServerVersion);
    void BeginGetServerVersion(FunctorAsync& aFunctor);
    void EndGetServerVersion(IAsync& aAsync, Brh& aServerVersion);

    void SyncGetProgressInfo(Brh& aProgress);
    void BeginGetProgressInfo(FunctorAsync& aFunctor);
    void EndGetProgressInfo(IAsync& aAsync, Brh& aProgress);

    void SyncGetScanVersion(Brh& aScanVersion);
    void BeginGetScanVersion(FunctorAsync& aFunctor);
    void EndGetScanVersion(IAsync& aAsync, Brh& aScanVersion);

    void SyncGetWorkMode(Brh& aWorkMode, Brh& aWorkModeList);
    void BeginGetWorkMode(FunctorAsync& aFunctor);
    void EndGetWorkMode(IAsync& aAsync, Brh& aWorkMode, Brh& aWorkModeList);

    void SyncSetWorkMode(const Brx& aWorkMode);
    void BeginSetWorkMode(const Brx& aWorkMode, FunctorAsync& aFunctor);
    void EndSetWorkMode(IAsync& aAsync);

    void SyncDelAllLocalDB();
    void BeginDelAllLocalDB(FunctorAsync& aFunctor);
    void EndDelAllLocalDB(IAsync& aAsync);

    void SyncInitHDD();
    void BeginInitHDD(FunctorAsync& aFunctor);
    void EndInitHDD(IAsync& aAsync);

    void SyncRescan();
    void BeginRescan(FunctorAsync& aFunctor);
    void EndRescan(IAsync& aAsync);

    void SyncHandMount();
    void BeginHandMount(FunctorAsync& aFunctor);
    void EndHandMount(IAsync& aAsync);

    void SyncHandUMount();
    void BeginHandUMount(FunctorAsync& aFunctor);
    void EndHandUMount(IAsync& aAsync);

    void SyncGetDiskInfo(TBool& aIsConnected, Brh& aStatusCode, Brh& aStatusInfo, Brh& aCapacity, Brh& aFileCount);
    void BeginGetDiskInfo(FunctorAsync& aFunctor);
    void EndGetDiskInfo(IAsync& aAsync, TBool& aIsConnected, Brh& aStatusCode, Brh& aStatusInfo, Brh& aCapacity, Brh& aFileCount);

    void SyncGetSMBConfig(Brh& aSMBAddr, Brh& aSMBUserName, Brh& aSMBPassWord);
    void BeginGetSMBConfig(FunctorAsync& aFunctor);
    void EndGetSMBConfig(IAsync& aAsync, Brh& aSMBAddr, Brh& aSMBUserName, Brh& aSMBPassWord);

    void SyncSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord);
    void BeginSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord, FunctorAsync& aFunctor);
    void EndSetSMBConfig(IAsync& aAsync);

    void SyncGetDriveMountResult(TBool& aDriveMountResult);
    void BeginGetDriveMountResult(FunctorAsync& aFunctor);
    void EndGetDriveMountResult(IAsync& aAsync, TBool& aDriveMountResult);

    void SetPropertyAliveChanged(Functor& aFunctor);

    void PropertyAlive(TBool& aAlive) const;
private:
    void AlivePropertyChanged();
private:
    Mutex iLock;
    Action* iActionSetServerName;
    Action* iActionGetServerVersion;
    Action* iActionGetProgressInfo;
    Action* iActionGetScanVersion;
    Action* iActionGetWorkMode;
    Action* iActionSetWorkMode;
    Action* iActionDelAllLocalDB;
    Action* iActionInitHDD;
    Action* iActionRescan;
    Action* iActionHandMount;
    Action* iActionHandUMount;
    Action* iActionGetDiskInfo;
    Action* iActionGetSMBConfig;
    Action* iActionSetSMBConfig;
    Action* iActionGetDriveMountResult;
    PropertyBool* iAlive;
    Functor iAliveChanged;
};


class SyncSetServerNameAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncSetServerNameAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetServerNameAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
};

SyncSetServerNameAvOpenhomeOrgServerConfig1C::SyncSetServerNameAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetServerNameAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetServerName(aAsync);
}


class SyncGetServerVersionAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncGetServerVersionAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, Brh& aServerVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetServerVersionAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
    Brh& iServerVersion;
};

SyncGetServerVersionAvOpenhomeOrgServerConfig1C::SyncGetServerVersionAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, Brh& aServerVersion)
    : iService(aProxy)
    , iServerVersion(aServerVersion)
{
}

void SyncGetServerVersionAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServerVersion(aAsync, iServerVersion);
}


class SyncGetProgressInfoAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncGetProgressInfoAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, Brh& aProgress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetProgressInfoAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
    Brh& iProgress;
};

SyncGetProgressInfoAvOpenhomeOrgServerConfig1C::SyncGetProgressInfoAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, Brh& aProgress)
    : iService(aProxy)
    , iProgress(aProgress)
{
}

void SyncGetProgressInfoAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetProgressInfo(aAsync, iProgress);
}


class SyncGetScanVersionAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncGetScanVersionAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, Brh& aScanVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetScanVersionAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
    Brh& iScanVersion;
};

SyncGetScanVersionAvOpenhomeOrgServerConfig1C::SyncGetScanVersionAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, Brh& aScanVersion)
    : iService(aProxy)
    , iScanVersion(aScanVersion)
{
}

void SyncGetScanVersionAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetScanVersion(aAsync, iScanVersion);
}


class SyncGetWorkModeAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncGetWorkModeAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, Brh& aWorkMode, Brh& aWorkModeList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWorkModeAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
    Brh& iWorkMode;
    Brh& iWorkModeList;
};

SyncGetWorkModeAvOpenhomeOrgServerConfig1C::SyncGetWorkModeAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, Brh& aWorkMode, Brh& aWorkModeList)
    : iService(aProxy)
    , iWorkMode(aWorkMode)
    , iWorkModeList(aWorkModeList)
{
}

void SyncGetWorkModeAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWorkMode(aAsync, iWorkMode, iWorkModeList);
}


class SyncSetWorkModeAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncSetWorkModeAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetWorkModeAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
};

SyncSetWorkModeAvOpenhomeOrgServerConfig1C::SyncSetWorkModeAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetWorkModeAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWorkMode(aAsync);
}


class SyncDelAllLocalDBAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncDelAllLocalDBAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDelAllLocalDBAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
};

SyncDelAllLocalDBAvOpenhomeOrgServerConfig1C::SyncDelAllLocalDBAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncDelAllLocalDBAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelAllLocalDB(aAsync);
}


class SyncInitHDDAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncInitHDDAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInitHDDAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
};

SyncInitHDDAvOpenhomeOrgServerConfig1C::SyncInitHDDAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncInitHDDAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndInitHDD(aAsync);
}


class SyncRescanAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncRescanAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRescanAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
};

SyncRescanAvOpenhomeOrgServerConfig1C::SyncRescanAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncRescanAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRescan(aAsync);
}


class SyncHandMountAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncHandMountAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncHandMountAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
};

SyncHandMountAvOpenhomeOrgServerConfig1C::SyncHandMountAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncHandMountAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndHandMount(aAsync);
}


class SyncHandUMountAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncHandUMountAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncHandUMountAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
};

SyncHandUMountAvOpenhomeOrgServerConfig1C::SyncHandUMountAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncHandUMountAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndHandUMount(aAsync);
}


class SyncGetDiskInfoAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncGetDiskInfoAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, TBool& aIsConnected, Brh& aStatusCode, Brh& aStatusInfo, Brh& aCapacity, Brh& aFileCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDiskInfoAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
    TBool& iIsConnected;
    Brh& iStatusCode;
    Brh& iStatusInfo;
    Brh& iCapacity;
    Brh& iFileCount;
};

SyncGetDiskInfoAvOpenhomeOrgServerConfig1C::SyncGetDiskInfoAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, TBool& aIsConnected, Brh& aStatusCode, Brh& aStatusInfo, Brh& aCapacity, Brh& aFileCount)
    : iService(aProxy)
    , iIsConnected(aIsConnected)
    , iStatusCode(aStatusCode)
    , iStatusInfo(aStatusInfo)
    , iCapacity(aCapacity)
    , iFileCount(aFileCount)
{
}

void SyncGetDiskInfoAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDiskInfo(aAsync, iIsConnected, iStatusCode, iStatusInfo, iCapacity, iFileCount);
}


class SyncGetSMBConfigAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncGetSMBConfigAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, Brh& aSMBAddr, Brh& aSMBUserName, Brh& aSMBPassWord);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSMBConfigAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
    Brh& iSMBAddr;
    Brh& iSMBUserName;
    Brh& iSMBPassWord;
};

SyncGetSMBConfigAvOpenhomeOrgServerConfig1C::SyncGetSMBConfigAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, Brh& aSMBAddr, Brh& aSMBUserName, Brh& aSMBPassWord)
    : iService(aProxy)
    , iSMBAddr(aSMBAddr)
    , iSMBUserName(aSMBUserName)
    , iSMBPassWord(aSMBPassWord)
{
}

void SyncGetSMBConfigAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSMBConfig(aAsync, iSMBAddr, iSMBUserName, iSMBPassWord);
}


class SyncSetSMBConfigAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncSetSMBConfigAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSMBConfigAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
};

SyncSetSMBConfigAvOpenhomeOrgServerConfig1C::SyncSetSMBConfigAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSMBConfigAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSMBConfig(aAsync);
}


class SyncGetDriveMountResultAvOpenhomeOrgServerConfig1C : public SyncProxyAction
{
public:
    SyncGetDriveMountResultAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, TBool& aDriveMountResult);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDriveMountResultAvOpenhomeOrgServerConfig1C() {};
private:
    CpProxyAvOpenhomeOrgServerConfig1C& iService;
    TBool& iDriveMountResult;
};

SyncGetDriveMountResultAvOpenhomeOrgServerConfig1C::SyncGetDriveMountResultAvOpenhomeOrgServerConfig1C(CpProxyAvOpenhomeOrgServerConfig1C& aProxy, TBool& aDriveMountResult)
    : iService(aProxy)
    , iDriveMountResult(aDriveMountResult)
{
}

void SyncGetDriveMountResultAvOpenhomeOrgServerConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDriveMountResult(aAsync, iDriveMountResult);
}

CpProxyAvOpenhomeOrgServerConfig1C::CpProxyAvOpenhomeOrgServerConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "ServerConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgServerConfig1C::AlivePropertyChanged);
    iAlive = new PropertyBool(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "Alive", functor);
    AddProperty(iAlive);
}

CpProxyAvOpenhomeOrgServerConfig1C::~CpProxyAvOpenhomeOrgServerConfig1C()
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
}

void CpProxyAvOpenhomeOrgServerConfig1C::SyncSetServerName(const Brx& aServerName)
{
    SyncSetServerNameAvOpenhomeOrgServerConfig1C sync(*this);
    BeginSetServerName(aServerName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginSetServerName(const Brx& aServerName, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetServerName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetServerName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServerName));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndSetServerName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncGetServerVersion(Brh& aServerVersion)
{
    SyncGetServerVersionAvOpenhomeOrgServerConfig1C sync(*this, aServerVersion);
    BeginGetServerVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginGetServerVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetServerVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServerVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndGetServerVersion(IAsync& aAsync, Brh& aServerVersion)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncGetProgressInfo(Brh& aProgress)
{
    SyncGetProgressInfoAvOpenhomeOrgServerConfig1C sync(*this, aProgress);
    BeginGetProgressInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginGetProgressInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetProgressInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetProgressInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndGetProgressInfo(IAsync& aAsync, Brh& aProgress)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncGetScanVersion(Brh& aScanVersion)
{
    SyncGetScanVersionAvOpenhomeOrgServerConfig1C sync(*this, aScanVersion);
    BeginGetScanVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginGetScanVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetScanVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetScanVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndGetScanVersion(IAsync& aAsync, Brh& aScanVersion)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncGetWorkMode(Brh& aWorkMode, Brh& aWorkModeList)
{
    SyncGetWorkModeAvOpenhomeOrgServerConfig1C sync(*this, aWorkMode, aWorkModeList);
    BeginGetWorkMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginGetWorkMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetWorkMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWorkMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndGetWorkMode(IAsync& aAsync, Brh& aWorkMode, Brh& aWorkModeList)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncSetWorkMode(const Brx& aWorkMode)
{
    SyncSetWorkModeAvOpenhomeOrgServerConfig1C sync(*this);
    BeginSetWorkMode(aWorkMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginSetWorkMode(const Brx& aWorkMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetWorkMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWorkMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aWorkMode));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndSetWorkMode(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncDelAllLocalDB()
{
    SyncDelAllLocalDBAvOpenhomeOrgServerConfig1C sync(*this);
    BeginDelAllLocalDB(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginDelAllLocalDB(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDelAllLocalDB, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndDelAllLocalDB(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncInitHDD()
{
    SyncInitHDDAvOpenhomeOrgServerConfig1C sync(*this);
    BeginInitHDD(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginInitHDD(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionInitHDD, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndInitHDD(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncRescan()
{
    SyncRescanAvOpenhomeOrgServerConfig1C sync(*this);
    BeginRescan(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginRescan(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRescan, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndRescan(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncHandMount()
{
    SyncHandMountAvOpenhomeOrgServerConfig1C sync(*this);
    BeginHandMount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginHandMount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionHandMount, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndHandMount(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncHandUMount()
{
    SyncHandUMountAvOpenhomeOrgServerConfig1C sync(*this);
    BeginHandUMount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginHandUMount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionHandUMount, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndHandUMount(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncGetDiskInfo(TBool& aIsConnected, Brh& aStatusCode, Brh& aStatusInfo, Brh& aCapacity, Brh& aFileCount)
{
    SyncGetDiskInfoAvOpenhomeOrgServerConfig1C sync(*this, aIsConnected, aStatusCode, aStatusInfo, aCapacity, aFileCount);
    BeginGetDiskInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginGetDiskInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDiskInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDiskInfo->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndGetDiskInfo(IAsync& aAsync, TBool& aIsConnected, Brh& aStatusCode, Brh& aStatusInfo, Brh& aCapacity, Brh& aFileCount)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncGetSMBConfig(Brh& aSMBAddr, Brh& aSMBUserName, Brh& aSMBPassWord)
{
    SyncGetSMBConfigAvOpenhomeOrgServerConfig1C sync(*this, aSMBAddr, aSMBUserName, aSMBPassWord);
    BeginGetSMBConfig(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginGetSMBConfig(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSMBConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSMBConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndGetSMBConfig(IAsync& aAsync, Brh& aSMBAddr, Brh& aSMBUserName, Brh& aSMBPassWord)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord)
{
    SyncSetSMBConfigAvOpenhomeOrgServerConfig1C sync(*this);
    BeginSetSMBConfig(aSMBAddr, aSMBUserName, aSMBPassWord, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSMBConfig, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSMBConfig->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBAddr));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBUserName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSMBPassWord));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndSetSMBConfig(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SyncGetDriveMountResult(TBool& aDriveMountResult)
{
    SyncGetDriveMountResultAvOpenhomeOrgServerConfig1C sync(*this, aDriveMountResult);
    BeginGetDriveMountResult(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1C::BeginGetDriveMountResult(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDriveMountResult, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDriveMountResult->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgServerConfig1C::EndGetDriveMountResult(IAsync& aAsync, TBool& aDriveMountResult)
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

void CpProxyAvOpenhomeOrgServerConfig1C::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAliveChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgServerConfig1C::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgServerConfig1C::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgServerConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgServerConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncSetServerName(THandle aHandle, const char* aServerName)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServerName(aServerName);
    int32_t err = 0;
    try {
        proxyC->SyncSetServerName(buf_aServerName);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginSetServerName(THandle aHandle, const char* aServerName, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServerName(aServerName);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetServerName(buf_aServerName, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndSetServerName(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetServerName(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncGetServerVersion(THandle aHandle, char** aServerVersion)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServerVersion;
    int32_t err = 0;
    try {
        proxyC->SyncGetServerVersion(buf_aServerVersion);
        *aServerVersion = buf_aServerVersion.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aServerVersion = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginGetServerVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetServerVersion(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndGetServerVersion(THandle aHandle, OhNetHandleAsync aAsync, char** aServerVersion)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aServerVersion;
    *aServerVersion = NULL;
    try {
        proxyC->EndGetServerVersion(*async, buf_aServerVersion);
        *aServerVersion = buf_aServerVersion.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncGetProgressInfo(THandle aHandle, char** aProgress)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aProgress;
    int32_t err = 0;
    try {
        proxyC->SyncGetProgressInfo(buf_aProgress);
        *aProgress = buf_aProgress.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aProgress = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginGetProgressInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetProgressInfo(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndGetProgressInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aProgress)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aProgress;
    *aProgress = NULL;
    try {
        proxyC->EndGetProgressInfo(*async, buf_aProgress);
        *aProgress = buf_aProgress.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncGetScanVersion(THandle aHandle, char** aScanVersion)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aScanVersion;
    int32_t err = 0;
    try {
        proxyC->SyncGetScanVersion(buf_aScanVersion);
        *aScanVersion = buf_aScanVersion.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aScanVersion = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginGetScanVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetScanVersion(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndGetScanVersion(THandle aHandle, OhNetHandleAsync aAsync, char** aScanVersion)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aScanVersion;
    *aScanVersion = NULL;
    try {
        proxyC->EndGetScanVersion(*async, buf_aScanVersion);
        *aScanVersion = buf_aScanVersion.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncGetWorkMode(THandle aHandle, char** aWorkMode, char** aWorkModeList)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aWorkMode;
    Brh buf_aWorkModeList;
    int32_t err = 0;
    try {
        proxyC->SyncGetWorkMode(buf_aWorkMode, buf_aWorkModeList);
        *aWorkMode = buf_aWorkMode.Extract();
        *aWorkModeList = buf_aWorkModeList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aWorkMode = NULL;
        *aWorkModeList = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginGetWorkMode(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetWorkMode(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndGetWorkMode(THandle aHandle, OhNetHandleAsync aAsync, char** aWorkMode, char** aWorkModeList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aWorkMode;
    *aWorkMode = NULL;
    Brh buf_aWorkModeList;
    *aWorkModeList = NULL;
    try {
        proxyC->EndGetWorkMode(*async, buf_aWorkMode, buf_aWorkModeList);
        *aWorkMode = buf_aWorkMode.Extract();
        *aWorkModeList = buf_aWorkModeList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncSetWorkMode(THandle aHandle, const char* aWorkMode)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aWorkMode(aWorkMode);
    int32_t err = 0;
    try {
        proxyC->SyncSetWorkMode(buf_aWorkMode);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginSetWorkMode(THandle aHandle, const char* aWorkMode, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aWorkMode(aWorkMode);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetWorkMode(buf_aWorkMode, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndSetWorkMode(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetWorkMode(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncDelAllLocalDB(THandle aHandle)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncDelAllLocalDB();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginDelAllLocalDB(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDelAllLocalDB(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndDelAllLocalDB(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndDelAllLocalDB(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncInitHDD(THandle aHandle)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncInitHDD();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginInitHDD(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginInitHDD(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndInitHDD(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndInitHDD(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncRescan(THandle aHandle)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncRescan();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginRescan(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRescan(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndRescan(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndRescan(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncHandMount(THandle aHandle)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncHandMount();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginHandMount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginHandMount(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndHandMount(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndHandMount(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncHandUMount(THandle aHandle)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncHandUMount();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginHandUMount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginHandUMount(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndHandUMount(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndHandUMount(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncGetDiskInfo(THandle aHandle, uint32_t* aIsConnected, char** aStatusCode, char** aStatusInfo, char** aCapacity, char** aFileCount)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool IsConnected;
    Brh buf_aStatusCode;
    Brh buf_aStatusInfo;
    Brh buf_aCapacity;
    Brh buf_aFileCount;
    int32_t err = 0;
    try {
        proxyC->SyncGetDiskInfo(IsConnected, buf_aStatusCode, buf_aStatusInfo, buf_aCapacity, buf_aFileCount);
        *aIsConnected = IsConnected? 1 : 0;
        *aStatusCode = buf_aStatusCode.Extract();
        *aStatusInfo = buf_aStatusInfo.Extract();
        *aCapacity = buf_aCapacity.Extract();
        *aFileCount = buf_aFileCount.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aIsConnected = false;
        *aStatusCode = NULL;
        *aStatusInfo = NULL;
        *aCapacity = NULL;
        *aFileCount = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginGetDiskInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDiskInfo(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndGetDiskInfo(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aIsConnected, char** aStatusCode, char** aStatusInfo, char** aCapacity, char** aFileCount)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool IsConnected;
    Brh buf_aStatusCode;
    *aStatusCode = NULL;
    Brh buf_aStatusInfo;
    *aStatusInfo = NULL;
    Brh buf_aCapacity;
    *aCapacity = NULL;
    Brh buf_aFileCount;
    *aFileCount = NULL;
    try {
        proxyC->EndGetDiskInfo(*async, IsConnected, buf_aStatusCode, buf_aStatusInfo, buf_aCapacity, buf_aFileCount);
        *aIsConnected = IsConnected? 1 : 0;
        *aStatusCode = buf_aStatusCode.Extract();
        *aStatusInfo = buf_aStatusInfo.Extract();
        *aCapacity = buf_aCapacity.Extract();
        *aFileCount = buf_aFileCount.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncGetSMBConfig(THandle aHandle, char** aSMBAddr, char** aSMBUserName, char** aSMBPassWord)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSMBAddr;
    Brh buf_aSMBUserName;
    Brh buf_aSMBPassWord;
    int32_t err = 0;
    try {
        proxyC->SyncGetSMBConfig(buf_aSMBAddr, buf_aSMBUserName, buf_aSMBPassWord);
        *aSMBAddr = buf_aSMBAddr.Extract();
        *aSMBUserName = buf_aSMBUserName.Extract();
        *aSMBPassWord = buf_aSMBPassWord.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aSMBAddr = NULL;
        *aSMBUserName = NULL;
        *aSMBPassWord = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginGetSMBConfig(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSMBConfig(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndGetSMBConfig(THandle aHandle, OhNetHandleAsync aAsync, char** aSMBAddr, char** aSMBUserName, char** aSMBPassWord)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aSMBAddr;
    *aSMBAddr = NULL;
    Brh buf_aSMBUserName;
    *aSMBUserName = NULL;
    Brh buf_aSMBPassWord;
    *aSMBPassWord = NULL;
    try {
        proxyC->EndGetSMBConfig(*async, buf_aSMBAddr, buf_aSMBUserName, buf_aSMBPassWord);
        *aSMBAddr = buf_aSMBAddr.Extract();
        *aSMBUserName = buf_aSMBUserName.Extract();
        *aSMBPassWord = buf_aSMBPassWord.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncSetSMBConfig(THandle aHandle, const char* aSMBAddr, const char* aSMBUserName, const char* aSMBPassWord)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSMBAddr(aSMBAddr);
    Brh buf_aSMBUserName(aSMBUserName);
    Brh buf_aSMBPassWord(aSMBPassWord);
    int32_t err = 0;
    try {
        proxyC->SyncSetSMBConfig(buf_aSMBAddr, buf_aSMBUserName, buf_aSMBPassWord);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginSetSMBConfig(THandle aHandle, const char* aSMBAddr, const char* aSMBUserName, const char* aSMBPassWord, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSMBAddr(aSMBAddr);
    Brh buf_aSMBUserName(aSMBUserName);
    Brh buf_aSMBPassWord(aSMBPassWord);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSMBConfig(buf_aSMBAddr, buf_aSMBUserName, buf_aSMBPassWord, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndSetSMBConfig(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetSMBConfig(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1SyncGetDriveMountResult(THandle aHandle, uint32_t* aDriveMountResult)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool DriveMountResult;
    int32_t err = 0;
    try {
        proxyC->SyncGetDriveMountResult(DriveMountResult);
        *aDriveMountResult = DriveMountResult? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aDriveMountResult = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1BeginGetDriveMountResult(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDriveMountResult(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgServerConfig1EndGetDriveMountResult(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aDriveMountResult)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool DriveMountResult;
    try {
        proxyC->EndGetDriveMountResult(*async, DriveMountResult);
        *aDriveMountResult = DriveMountResult? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1SetPropertyAliveChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAliveChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgServerConfig1PropertyAlive(THandle aHandle, uint32_t* aAlive)
{
    CpProxyAvOpenhomeOrgServerConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgServerConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Alive;
    proxyC->PropertyAlive(Alive);
    *aAlive = Alive? 1 : 0;
}

