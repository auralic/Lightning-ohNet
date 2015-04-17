#include "CpAvOpenhomeOrgHardwareConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncIsAliveAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncIsAliveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TBool& aAlive);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIsAliveAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TBool& iAlive;
};

SyncIsAliveAvOpenhomeOrgHardwareConfig1::SyncIsAliveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TBool& aAlive)
    : iService(aProxy)
    , iAlive(aAlive)
{
}

void SyncIsAliveAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndIsAlive(aAsync, iAlive);
}


class SyncUpdateAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncUpdateAvOpenhomeOrgHardwareConfig1::SyncUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}


class SyncActiveAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncActiveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncActiveAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncActiveAvOpenhomeOrgHardwareConfig1::SyncActiveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncActiveAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndActive(aAsync);
}


class SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aActiveStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iActiveStatus;
};

SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1::SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aActiveStatus)
    : iService(aProxy)
    , iActiveStatus(aActiveStatus)
{
}

void SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetActiveStatus(aAsync, iActiveStatus);
}


class SyncCheckUpdateAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncCheckUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCheckUpdateAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncCheckUpdateAvOpenhomeOrgHardwareConfig1::SyncCheckUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncCheckUpdateAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckUpdate(aAsync);
}


class SyncResetDisplayAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncResetDisplayAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncResetDisplayAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncResetDisplayAvOpenhomeOrgHardwareConfig1::SyncResetDisplayAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncResetDisplayAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndResetDisplay(aAsync);
}


class SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aHardWareInfo);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iHardWareInfo;
};

SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1::SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aHardWareInfo)
    : iService(aProxy)
    , iHardWareInfo(aHardWareInfo)
{
}

void SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHardWareInfo(aAsync, iHardWareInfo);
}


class SyncSetRoomNameAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetRoomNameAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRoomNameAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncSetRoomNameAvOpenhomeOrgHardwareConfig1::SyncSetRoomNameAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetRoomNameAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRoomName(aAsync);
}


class SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TBool& aVolumeControl);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TBool& iVolumeControl;
};

SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1::SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TBool& aVolumeControl)
    : iService(aProxy)
    , iVolumeControl(aVolumeControl)
{
}

void SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetVolumeControl(aAsync, iVolumeControl);
}


class SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1::SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeControl(aAsync);
}


class SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aWaitingTime);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iWaitingTime;
};

SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1::SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aWaitingTime)
    : iService(aProxy)
    , iWaitingTime(aWaitingTime)
{
}

void SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWaitingTime(aAsync, iWaitingTime);
}


class SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1::SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWaitingTime(aAsync);
}


class SyncGetOutChannelAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetOutChannelAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetOutChannelAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TUint& iChannelNum;
    Brh& iCurrentChannel;
    Brh& iOutChannel;
};

SyncGetOutChannelAvOpenhomeOrgHardwareConfig1::SyncGetOutChannelAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel)
    : iService(aProxy)
    , iChannelNum(aChannelNum)
    , iCurrentChannel(aCurrentChannel)
    , iOutChannel(aOutChannel)
{
}

void SyncGetOutChannelAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetOutChannel(aAsync, iChannelNum, iCurrentChannel, iOutChannel);
}


class SyncSetOutChannelAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetOutChannelAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetOutChannelAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncSetOutChannelAvOpenhomeOrgHardwareConfig1::SyncSetOutChannelAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetOutChannelAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetOutChannel(aAsync);
}


class SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1::SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetUpnpType(aAsync);
}


class SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aUpnpType);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iUpnpType;
};

SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1::SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aUpnpType)
    : iService(aProxy)
    , iUpnpType(aUpnpType)
{
}

void SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpnpType(aAsync, iUpnpType);
}


class SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1::SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDsdNativeStatus(aAsync);
}


class SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aStatus, Brh& aSampleFormat);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iStatus;
    Brh& iSampleFormat;
};

SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1::SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aStatus, Brh& aSampleFormat)
    : iService(aProxy)
    , iStatus(aStatus)
    , iSampleFormat(aSampleFormat)
{
}

void SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDsdNativeStatus(aAsync, iStatus, iSampleFormat);
}


class SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1::SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPasswordProtect(aAsync);
}


class SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aProtect, Brh& aProtectPassword);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iProtect;
    Brh& iProtectPassword;
};

SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1::SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aProtect, Brh& aProtectPassword)
    : iService(aProxy)
    , iProtect(aProtect)
    , iProtectPassword(aProtectPassword)
{
}

void SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPasswordProtect(aAsync, iProtect, iProtectPassword);
}


class SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aVersion, Brh& aProgress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iVersion;
    Brh& iProgress;
};

SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1::SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aVersion, Brh& aProgress)
    : iService(aProxy)
    , iVersion(aVersion)
    , iProgress(aProgress)
{
}

void SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateInfo(aAsync, iVersion, iProgress);
}


class SyncGetWirelessListAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetWirelessListAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWirelessListAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TUint& iNumber;
    Brh& iCurrentUse;
    Brh& iWirelessList;
};

SyncGetWirelessListAvOpenhomeOrgHardwareConfig1::SyncGetWirelessListAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList)
    : iService(aProxy)
    , iNumber(aNumber)
    , iCurrentUse(aCurrentUse)
    , iWirelessList(aWirelessList)
{
}

void SyncGetWirelessListAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWirelessList(aAsync, iNumber, iCurrentUse, iWirelessList);
}


class SyncGetIpAddressAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetIpAddressAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIpAddressAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iIpAddress;
    Brh& iNetMask;
    Brh& iGateWay;
    Brh& iDNS;
    Brh& iDHCP;
};

SyncGetIpAddressAvOpenhomeOrgHardwareConfig1::SyncGetIpAddressAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP)
    : iService(aProxy)
    , iIpAddress(aIpAddress)
    , iNetMask(aNetMask)
    , iGateWay(aGateWay)
    , iDNS(aDNS)
    , iDHCP(aDHCP)
{
}

void SyncGetIpAddressAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIpAddress(aAsync, iIpAddress, iNetMask, iGateWay, iDNS, iDHCP);
}


class SyncSetNetWorkAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetNetWorkAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetNetWorkAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

SyncSetNetWorkAvOpenhomeOrgHardwareConfig1::SyncSetNetWorkAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetNetWorkAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetNetWork(aAsync);
}


class SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TUint& iInterfaceNum;
    Brh& iCurrentUse;
    Brh& iInterfaceList;
};

SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1::SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList)
    : iService(aProxy)
    , iInterfaceNum(aInterfaceNum)
    , iCurrentUse(aCurrentUse)
    , iInterfaceList(aInterfaceList)
{
}

void SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetNetInterface(aAsync, iInterfaceNum, iCurrentUse, iInterfaceList);
}


CpProxyAvOpenhomeOrgHardwareConfig1::CpProxyAvOpenhomeOrgHardwareConfig1(CpDevice& aDevice)
    : CpProxy("av-openhome-org", "HardwareConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionIsAlive = new Action("IsAlive");
    param = new OpenHome::Net::ParameterBool("Alive");
    iActionIsAlive->AddOutputParameter(param);

    iActionUpdate = new Action("Update");

    iActionActive = new Action("Active");
    param = new OpenHome::Net::ParameterBool("IsSubscribe");
    iActionActive->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("RealName");
    iActionActive->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Email");
    iActionActive->AddInputParameter(param);

    iActionGetActiveStatus = new Action("GetActiveStatus");
    param = new OpenHome::Net::ParameterString("ActiveStatus");
    iActionGetActiveStatus->AddOutputParameter(param);

    iActionCheckUpdate = new Action("CheckUpdate");

    iActionResetDisplay = new Action("ResetDisplay");

    iActionGetHardWareInfo = new Action("GetHardWareInfo");
    param = new OpenHome::Net::ParameterString("HardWareInfo");
    iActionGetHardWareInfo->AddOutputParameter(param);

    iActionSetRoomName = new Action("SetRoomName");
    param = new OpenHome::Net::ParameterString("RoomName");
    iActionSetRoomName->AddInputParameter(param);

    iActionGetVolumeControl = new Action("GetVolumeControl");
    param = new OpenHome::Net::ParameterBool("VolumeControl");
    iActionGetVolumeControl->AddOutputParameter(param);

    iActionSetVolumeControl = new Action("SetVolumeControl");
    param = new OpenHome::Net::ParameterBool("VolumeControl");
    iActionSetVolumeControl->AddInputParameter(param);

    iActionGetWaitingTime = new Action("GetWaitingTime");
    param = new OpenHome::Net::ParameterString("WaitingTime");
    iActionGetWaitingTime->AddOutputParameter(param);

    iActionSetWaitingTime = new Action("SetWaitingTime");
    param = new OpenHome::Net::ParameterString("WaitingTime");
    iActionSetWaitingTime->AddInputParameter(param);

    iActionGetOutChannel = new Action("GetOutChannel");
    param = new OpenHome::Net::ParameterUint("ChannelNum");
    iActionGetOutChannel->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("CurrentChannel");
    iActionGetOutChannel->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("OutChannel");
    iActionGetOutChannel->AddOutputParameter(param);

    iActionSetOutChannel = new Action("SetOutChannel");
    param = new OpenHome::Net::ParameterString("Channel");
    iActionSetOutChannel->AddInputParameter(param);

    iActionSetUpnpType = new Action("SetUpnpType");
    param = new OpenHome::Net::ParameterString("UpnpType");
    iActionSetUpnpType->AddInputParameter(param);

    iActionGetUpnpType = new Action("GetUpnpType");
    param = new OpenHome::Net::ParameterString("UpnpType");
    iActionGetUpnpType->AddOutputParameter(param);

    iActionSetDsdNativeStatus = new Action("SetDsdNativeStatus");
    param = new OpenHome::Net::ParameterString("Status");
    iActionSetDsdNativeStatus->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("SampleFormat");
    iActionSetDsdNativeStatus->AddInputParameter(param);

    iActionGetDsdNativeStatus = new Action("GetDsdNativeStatus");
    param = new OpenHome::Net::ParameterString("Status");
    iActionGetDsdNativeStatus->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("SampleFormat");
    iActionGetDsdNativeStatus->AddOutputParameter(param);

    iActionSetPasswordProtect = new Action("SetPasswordProtect");
    param = new OpenHome::Net::ParameterString("Protect");
    iActionSetPasswordProtect->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("ProtectPassword");
    iActionSetPasswordProtect->AddInputParameter(param);

    iActionGetPasswordProtect = new Action("GetPasswordProtect");
    param = new OpenHome::Net::ParameterString("Protect");
    iActionGetPasswordProtect->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("ProtectPassword");
    iActionGetPasswordProtect->AddOutputParameter(param);

    iActionGetUpdateInfo = new Action("GetUpdateInfo");
    param = new OpenHome::Net::ParameterString("Version");
    iActionGetUpdateInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Progress");
    iActionGetUpdateInfo->AddOutputParameter(param);

    iActionGetWirelessList = new Action("GetWirelessList");
    param = new OpenHome::Net::ParameterString("InterFace");
    iActionGetWirelessList->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("Number");
    iActionGetWirelessList->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("CurrentUse");
    iActionGetWirelessList->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("WirelessList");
    iActionGetWirelessList->AddOutputParameter(param);

    iActionGetIpAddress = new Action("GetIpAddress");
    param = new OpenHome::Net::ParameterString("InterFace");
    iActionGetIpAddress->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("IpAddress");
    iActionGetIpAddress->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("NetMask");
    iActionGetIpAddress->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("GateWay");
    iActionGetIpAddress->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("DNS");
    iActionGetIpAddress->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("DHCP");
    iActionGetIpAddress->AddOutputParameter(param);

    iActionSetNetWork = new Action("SetNetWork");
    param = new OpenHome::Net::ParameterString("InterFace");
    iActionSetNetWork->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("IpAddress");
    iActionSetNetWork->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NetMask");
    iActionSetNetWork->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("GateWay");
    iActionSetNetWork->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("DNS");
    iActionSetNetWork->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Ssid");
    iActionSetNetWork->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("PassWord");
    iActionSetNetWork->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("EncrypType");
    iActionSetNetWork->AddInputParameter(param);

    iActionGetNetInterface = new Action("GetNetInterface");
    param = new OpenHome::Net::ParameterUint("InterfaceNum");
    iActionGetNetInterface->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("CurrentUse");
    iActionGetNetInterface->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("InterfaceList");
    iActionGetNetInterface->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::AlivePropertyChanged);
    iAlive = new PropertyBool(aDevice.Device().GetCpStack().Env(), "Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint(aDevice.Device().GetCpStack().Env(), "CurrentAction", functor);
    AddProperty(iCurrentAction);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::RestartPropertyChanged);
    iRestart = new PropertyBool(aDevice.Device().GetCpStack().Env(), "Restart", functor);
    AddProperty(iRestart);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::NumberPropertyChanged);
    iNumber = new PropertyUint(aDevice.Device().GetCpStack().Env(), "Number", functor);
    AddProperty(iNumber);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::RoomNamePropertyChanged);
    iRoomName = new PropertyString(aDevice.Device().GetCpStack().Env(), "RoomName", functor);
    AddProperty(iRoomName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::InterFacePropertyChanged);
    iInterFace = new PropertyString(aDevice.Device().GetCpStack().Env(), "InterFace", functor);
    AddProperty(iInterFace);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::NetMaskPropertyChanged);
    iNetMask = new PropertyString(aDevice.Device().GetCpStack().Env(), "NetMask", functor);
    AddProperty(iNetMask);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::GateWayPropertyChanged);
    iGateWay = new PropertyString(aDevice.Device().GetCpStack().Env(), "GateWay", functor);
    AddProperty(iGateWay);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::DNSPropertyChanged);
    iDNS = new PropertyString(aDevice.Device().GetCpStack().Env(), "DNS", functor);
    AddProperty(iDNS);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::DHCPPropertyChanged);
    iDHCP = new PropertyString(aDevice.Device().GetCpStack().Env(), "DHCP", functor);
    AddProperty(iDHCP);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::SsidPropertyChanged);
    iSsid = new PropertyString(aDevice.Device().GetCpStack().Env(), "Ssid", functor);
    AddProperty(iSsid);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::PassWordPropertyChanged);
    iPassWord = new PropertyString(aDevice.Device().GetCpStack().Env(), "PassWord", functor);
    AddProperty(iPassWord);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::EncrypTypePropertyChanged);
    iEncrypType = new PropertyString(aDevice.Device().GetCpStack().Env(), "EncrypType", functor);
    AddProperty(iEncrypType);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::ChannelPropertyChanged);
    iChannel = new PropertyString(aDevice.Device().GetCpStack().Env(), "Channel", functor);
    AddProperty(iChannel);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::UpnpTypePropertyChanged);
    iUpnpType = new PropertyString(aDevice.Device().GetCpStack().Env(), "UpnpType", functor);
    AddProperty(iUpnpType);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::StatusPropertyChanged);
    iStatus = new PropertyString(aDevice.Device().GetCpStack().Env(), "Status", functor);
    AddProperty(iStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::SampleFormatPropertyChanged);
    iSampleFormat = new PropertyString(aDevice.Device().GetCpStack().Env(), "SampleFormat", functor);
    AddProperty(iSampleFormat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::IpAddressPropertyChanged);
    iIpAddress = new PropertyString(aDevice.Device().GetCpStack().Env(), "IpAddress", functor);
    AddProperty(iIpAddress);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::ProtectPropertyChanged);
    iProtect = new PropertyString(aDevice.Device().GetCpStack().Env(), "Protect", functor);
    AddProperty(iProtect);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::ProtectPasswordPropertyChanged);
    iProtectPassword = new PropertyString(aDevice.Device().GetCpStack().Env(), "ProtectPassword", functor);
    AddProperty(iProtectPassword);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::ActiveStatusPropertyChanged);
    iActiveStatus = new PropertyString(aDevice.Device().GetCpStack().Env(), "ActiveStatus", functor);
    AddProperty(iActiveStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::TimePropertyChanged);
    iTime = new PropertyString(aDevice.Device().GetCpStack().Env(), "Time", functor);
    AddProperty(iTime);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::VolumeControlPropertyChanged);
    iVolumeControl = new PropertyBool(aDevice.Device().GetCpStack().Env(), "VolumeControl", functor);
    AddProperty(iVolumeControl);
}

CpProxyAvOpenhomeOrgHardwareConfig1::~CpProxyAvOpenhomeOrgHardwareConfig1()
{
    DestroyService();
    delete iActionIsAlive;
    delete iActionUpdate;
    delete iActionActive;
    delete iActionGetActiveStatus;
    delete iActionCheckUpdate;
    delete iActionResetDisplay;
    delete iActionGetHardWareInfo;
    delete iActionSetRoomName;
    delete iActionGetVolumeControl;
    delete iActionSetVolumeControl;
    delete iActionGetWaitingTime;
    delete iActionSetWaitingTime;
    delete iActionGetOutChannel;
    delete iActionSetOutChannel;
    delete iActionSetUpnpType;
    delete iActionGetUpnpType;
    delete iActionSetDsdNativeStatus;
    delete iActionGetDsdNativeStatus;
    delete iActionSetPasswordProtect;
    delete iActionGetPasswordProtect;
    delete iActionGetUpdateInfo;
    delete iActionGetWirelessList;
    delete iActionGetIpAddress;
    delete iActionSetNetWork;
    delete iActionGetNetInterface;
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncIsAlive(TBool& aAlive)
{
    SyncIsAliveAvOpenhomeOrgHardwareConfig1 sync(*this, aAlive);
    BeginIsAlive(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginIsAlive(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionIsAlive, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIsAlive->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndIsAlive(IAsync& aAsync, TBool& aAlive)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("IsAlive"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aAlive = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncUpdate()
{
    SyncUpdateAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionUpdate, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndUpdate(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Update"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncActive(TBool aIsSubscribe, const Brx& aRealName, const Brx& aEmail)
{
    SyncActiveAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginActive(aIsSubscribe, aRealName, aEmail, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginActive(TBool aIsSubscribe, const Brx& aRealName, const Brx& aEmail, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionActive, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionActive->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aIsSubscribe));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aRealName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aEmail));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndActive(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Active"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetActiveStatus(Brh& aActiveStatus)
{
    SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1 sync(*this, aActiveStatus);
    BeginGetActiveStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetActiveStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetActiveStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetActiveStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetActiveStatus(IAsync& aAsync, Brh& aActiveStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetActiveStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aActiveStatus);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncCheckUpdate()
{
    SyncCheckUpdateAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginCheckUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginCheckUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionCheckUpdate, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndCheckUpdate(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("CheckUpdate"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncResetDisplay()
{
    SyncResetDisplayAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginResetDisplay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginResetDisplay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionResetDisplay, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndResetDisplay(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ResetDisplay"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetHardWareInfo(Brh& aHardWareInfo)
{
    SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1 sync(*this, aHardWareInfo);
    BeginGetHardWareInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetHardWareInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetHardWareInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHardWareInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetHardWareInfo(IAsync& aAsync, Brh& aHardWareInfo)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetHardWareInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aHardWareInfo);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetRoomName(const Brx& aRoomName)
{
    SyncSetRoomNameAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetRoomName(aRoomName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetRoomName(const Brx& aRoomName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetRoomName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRoomName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aRoomName));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetRoomName(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetRoomName"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetVolumeControl(TBool& aVolumeControl)
{
    SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1 sync(*this, aVolumeControl);
    BeginGetVolumeControl(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetVolumeControl(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetVolumeControl, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetVolumeControl->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetVolumeControl(IAsync& aAsync, TBool& aVolumeControl)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetVolumeControl"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aVolumeControl = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetVolumeControl(TBool aVolumeControl)
{
    SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetVolumeControl(aVolumeControl, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetVolumeControl(TBool aVolumeControl, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetVolumeControl, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeControl->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aVolumeControl));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetVolumeControl(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetVolumeControl"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetWaitingTime(Brh& aWaitingTime)
{
    SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1 sync(*this, aWaitingTime);
    BeginGetWaitingTime(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetWaitingTime(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetWaitingTime, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWaitingTime->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetWaitingTime(IAsync& aAsync, Brh& aWaitingTime)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetWaitingTime"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aWaitingTime);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetWaitingTime(const Brx& aWaitingTime)
{
    SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetWaitingTime(aWaitingTime, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetWaitingTime(const Brx& aWaitingTime, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetWaitingTime, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWaitingTime->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aWaitingTime));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetWaitingTime(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetWaitingTime"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetOutChannel(TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel)
{
    SyncGetOutChannelAvOpenhomeOrgHardwareConfig1 sync(*this, aChannelNum, aCurrentChannel, aOutChannel);
    BeginGetOutChannel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetOutChannel(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetOutChannel, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetOutChannel->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetOutChannel(IAsync& aAsync, TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetOutChannel"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aChannelNum = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aCurrentChannel);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aOutChannel);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetOutChannel(const Brx& aChannel)
{
    SyncSetOutChannelAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetOutChannel(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetOutChannel(const Brx& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetOutChannel, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetOutChannel->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetOutChannel(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetOutChannel"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetUpnpType(const Brx& aUpnpType)
{
    SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetUpnpType(aUpnpType, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetUpnpType(const Brx& aUpnpType, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetUpnpType, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetUpnpType->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUpnpType));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetUpnpType(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetUpnpType"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetUpnpType(Brh& aUpnpType)
{
    SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1 sync(*this, aUpnpType);
    BeginGetUpnpType(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetUpnpType(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetUpnpType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpnpType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetUpnpType(IAsync& aAsync, Brh& aUpnpType)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetUpnpType"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUpnpType);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetDsdNativeStatus(const Brx& aStatus, const Brx& aSampleFormat)
{
    SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetDsdNativeStatus(aStatus, aSampleFormat, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetDsdNativeStatus(const Brx& aStatus, const Brx& aSampleFormat, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetDsdNativeStatus, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDsdNativeStatus->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aStatus));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSampleFormat));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetDsdNativeStatus(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDsdNativeStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetDsdNativeStatus(Brh& aStatus, Brh& aSampleFormat)
{
    SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 sync(*this, aStatus, aSampleFormat);
    BeginGetDsdNativeStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetDsdNativeStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetDsdNativeStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDsdNativeStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetDsdNativeStatus(IAsync& aAsync, Brh& aStatus, Brh& aSampleFormat)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDsdNativeStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aStatus);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSampleFormat);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetPasswordProtect(const Brx& aProtect, const Brx& aProtectPassword)
{
    SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetPasswordProtect(aProtect, aProtectPassword, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetPasswordProtect(const Brx& aProtect, const Brx& aProtectPassword, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetPasswordProtect, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPasswordProtect->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aProtect));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aProtectPassword));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetPasswordProtect(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetPasswordProtect"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetPasswordProtect(Brh& aProtect, Brh& aProtectPassword)
{
    SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1 sync(*this, aProtect, aProtectPassword);
    BeginGetPasswordProtect(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetPasswordProtect(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetPasswordProtect, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPasswordProtect->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetPasswordProtect(IAsync& aAsync, Brh& aProtect, Brh& aProtectPassword)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPasswordProtect"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aProtect);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aProtectPassword);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetUpdateInfo(Brh& aVersion, Brh& aProgress)
{
    SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1 sync(*this, aVersion, aProgress);
    BeginGetUpdateInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetUpdateInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetUpdateInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetUpdateInfo(IAsync& aAsync, Brh& aVersion, Brh& aProgress)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetUpdateInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aVersion);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aProgress);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetWirelessList(const Brx& aInterFace, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList)
{
    SyncGetWirelessListAvOpenhomeOrgHardwareConfig1 sync(*this, aNumber, aCurrentUse, aWirelessList);
    BeginGetWirelessList(aInterFace, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetWirelessList(const Brx& aInterFace, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetWirelessList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetWirelessList->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aInterFace));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWirelessList->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetWirelessList(IAsync& aAsync, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetWirelessList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aNumber = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aCurrentUse);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aWirelessList);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetIpAddress(const Brx& aInterFace, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP)
{
    SyncGetIpAddressAvOpenhomeOrgHardwareConfig1 sync(*this, aIpAddress, aNetMask, aGateWay, aDNS, aDHCP);
    BeginGetIpAddress(aInterFace, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetIpAddress(const Brx& aInterFace, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetIpAddress, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetIpAddress->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aInterFace));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIpAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetIpAddress(IAsync& aAsync, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetIpAddress"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aIpAddress);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aNetMask);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aGateWay);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDNS);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDHCP);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetNetWork(const Brx& aInterFace, const Brx& aIpAddress, const Brx& aNetMask, const Brx& aGateWay, const Brx& aDNS, const Brx& aSsid, const Brx& aPassWord, const Brx& aEncrypType)
{
    SyncSetNetWorkAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetNetWork(aInterFace, aIpAddress, aNetMask, aGateWay, aDNS, aSsid, aPassWord, aEncrypType, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetNetWork(const Brx& aInterFace, const Brx& aIpAddress, const Brx& aNetMask, const Brx& aGateWay, const Brx& aDNS, const Brx& aSsid, const Brx& aPassWord, const Brx& aEncrypType, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetNetWork, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetNetWork->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aInterFace));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aIpAddress));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aNetMask));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGateWay));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDNS));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSsid));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aPassWord));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aEncrypType));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetNetWork(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetNetWork"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetNetInterface(TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList)
{
    SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1 sync(*this, aInterfaceNum, aCurrentUse, aInterfaceList);
    BeginGetNetInterface(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetNetInterface(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetNetInterface, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetNetInterface->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetNetInterface(IAsync& aAsync, TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetNetInterface"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aInterfaceNum = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aCurrentUse);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aInterfaceList);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock->Wait();
    iAliveChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock->Wait();
    iCurrentActionChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyRestartChanged(Functor& aFunctor)
{
    iLock->Wait();
    iRestartChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyNumberChanged(Functor& aFunctor)
{
    iLock->Wait();
    iNumberChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyRoomNameChanged(Functor& aFunctor)
{
    iLock->Wait();
    iRoomNameChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyInterFaceChanged(Functor& aFunctor)
{
    iLock->Wait();
    iInterFaceChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyNetMaskChanged(Functor& aFunctor)
{
    iLock->Wait();
    iNetMaskChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyGateWayChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGateWayChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyDNSChanged(Functor& aFunctor)
{
    iLock->Wait();
    iDNSChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyDHCPChanged(Functor& aFunctor)
{
    iLock->Wait();
    iDHCPChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertySsidChanged(Functor& aFunctor)
{
    iLock->Wait();
    iSsidChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyPassWordChanged(Functor& aFunctor)
{
    iLock->Wait();
    iPassWordChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyEncrypTypeChanged(Functor& aFunctor)
{
    iLock->Wait();
    iEncrypTypeChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyChannelChanged(Functor& aFunctor)
{
    iLock->Wait();
    iChannelChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyUpnpTypeChanged(Functor& aFunctor)
{
    iLock->Wait();
    iUpnpTypeChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyStatusChanged(Functor& aFunctor)
{
    iLock->Wait();
    iStatusChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertySampleFormatChanged(Functor& aFunctor)
{
    iLock->Wait();
    iSampleFormatChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyIpAddressChanged(Functor& aFunctor)
{
    iLock->Wait();
    iIpAddressChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyProtectChanged(Functor& aFunctor)
{
    iLock->Wait();
    iProtectChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyProtectPasswordChanged(Functor& aFunctor)
{
    iLock->Wait();
    iProtectPasswordChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyActiveStatusChanged(Functor& aFunctor)
{
    iLock->Wait();
    iActiveStatusChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyTimeChanged(Functor& aFunctor)
{
    iLock->Wait();
    iTimeChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyVolumeControlChanged(Functor& aFunctor)
{
    iLock->Wait();
    iVolumeControlChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyRestart(TBool& aRestart) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aRestart = iRestart->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyNumber(TUint& aNumber) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aNumber = iNumber->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyRoomName(Brhz& aRoomName) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aRoomName.Set(iRoomName->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyInterFace(Brhz& aInterFace) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aInterFace.Set(iInterFace->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyNetMask(Brhz& aNetMask) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aNetMask.Set(iNetMask->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyGateWay(Brhz& aGateWay) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aGateWay.Set(iGateWay->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyDNS(Brhz& aDNS) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aDNS.Set(iDNS->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyDHCP(Brhz& aDHCP) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aDHCP.Set(iDHCP->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertySsid(Brhz& aSsid) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aSsid.Set(iSsid->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyPassWord(Brhz& aPassWord) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aPassWord.Set(iPassWord->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyEncrypType(Brhz& aEncrypType) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aEncrypType.Set(iEncrypType->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyChannel(Brhz& aChannel) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aChannel.Set(iChannel->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyUpnpType(Brhz& aUpnpType) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aUpnpType.Set(iUpnpType->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyStatus(Brhz& aStatus) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aStatus.Set(iStatus->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertySampleFormat(Brhz& aSampleFormat) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aSampleFormat.Set(iSampleFormat->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyIpAddress(Brhz& aIpAddress) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aIpAddress.Set(iIpAddress->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyProtect(Brhz& aProtect) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aProtect.Set(iProtect->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyProtectPassword(Brhz& aProtectPassword) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aProtectPassword.Set(iProtectPassword->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyActiveStatus(Brhz& aActiveStatus) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aActiveStatus.Set(iActiveStatus->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyTime(Brhz& aTime) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aTime.Set(iTime->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyVolumeControl(TBool& aVolumeControl) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aVolumeControl = iVolumeControl->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::RestartPropertyChanged()
{
    ReportEvent(iRestartChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::NumberPropertyChanged()
{
    ReportEvent(iNumberChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::RoomNamePropertyChanged()
{
    ReportEvent(iRoomNameChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::InterFacePropertyChanged()
{
    ReportEvent(iInterFaceChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::NetMaskPropertyChanged()
{
    ReportEvent(iNetMaskChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::GateWayPropertyChanged()
{
    ReportEvent(iGateWayChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::DNSPropertyChanged()
{
    ReportEvent(iDNSChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::DHCPPropertyChanged()
{
    ReportEvent(iDHCPChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SsidPropertyChanged()
{
    ReportEvent(iSsidChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PassWordPropertyChanged()
{
    ReportEvent(iPassWordChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EncrypTypePropertyChanged()
{
    ReportEvent(iEncrypTypeChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::ChannelPropertyChanged()
{
    ReportEvent(iChannelChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::UpnpTypePropertyChanged()
{
    ReportEvent(iUpnpTypeChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::StatusPropertyChanged()
{
    ReportEvent(iStatusChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SampleFormatPropertyChanged()
{
    ReportEvent(iSampleFormatChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::IpAddressPropertyChanged()
{
    ReportEvent(iIpAddressChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::ProtectPropertyChanged()
{
    ReportEvent(iProtectChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::ProtectPasswordPropertyChanged()
{
    ReportEvent(iProtectPasswordChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::ActiveStatusPropertyChanged()
{
    ReportEvent(iActiveStatusChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::TimePropertyChanged()
{
    ReportEvent(iTimeChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::VolumeControlPropertyChanged()
{
    ReportEvent(iVolumeControlChanged);
}

