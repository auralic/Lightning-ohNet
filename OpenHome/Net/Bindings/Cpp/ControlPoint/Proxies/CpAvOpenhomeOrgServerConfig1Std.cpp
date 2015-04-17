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


CpProxyAvOpenhomeOrgServerConfig1Cpp::CpProxyAvOpenhomeOrgServerConfig1Cpp(CpDeviceCpp& aDevice)
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

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgServerConfig1Cpp::AlivePropertyChanged);
    iAlive = new PropertyBool(aDevice.Device().GetCpStack().Env(), "Alive", functor);
    AddProperty(iAlive);
}

CpProxyAvOpenhomeOrgServerConfig1Cpp::~CpProxyAvOpenhomeOrgServerConfig1Cpp()
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SyncSetServerName(const std::string& aServerName)
{
    SyncSetServerNameAvOpenhomeOrgServerConfig1Cpp sync(*this);
    BeginSetServerName(aServerName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::BeginSetServerName(const std::string& aServerName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetServerName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetServerName->InputParameters();
    {
        Brn buf((const TByte*)aServerName.c_str(), (TUint)aServerName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionGetServerVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServerVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionGetProgressInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetProgressInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionGetScanVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetScanVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionGetWorkMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWorkMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionSetWorkMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWorkMode->InputParameters();
    {
        Brn buf((const TByte*)aWorkMode.c_str(), (TUint)aWorkMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionDelAllLocalDB, aFunctor);
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionInitHDD, aFunctor);
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionRescan, aFunctor);
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionHandMount, aFunctor);
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionHandUMount, aFunctor);
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionGetSMBConfig, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSMBConfig->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionSetSMBConfig, aFunctor);
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
    iInvocable.InvokeAction(*invocation);
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
    Invocation* invocation = iService->Invocation(*iActionGetDriveMountResult, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDriveMountResult->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
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

void CpProxyAvOpenhomeOrgServerConfig1Cpp::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock->Wait();
    iAliveChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::PropertyAlive(bool& aAlive) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgServerConfig1Cpp::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

