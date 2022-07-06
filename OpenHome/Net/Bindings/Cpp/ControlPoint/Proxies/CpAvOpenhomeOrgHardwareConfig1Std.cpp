#include "CpAvOpenhomeOrgHardwareConfig1.h"
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


class SyncLogInAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncLogInAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aMessageOut);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncLogInAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iMessageOut;
};

SyncLogInAvOpenhomeOrgHardwareConfig1Cpp::SyncLogInAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aMessageOut)
    : iService(aProxy)
    , iMessageOut(aMessageOut)
{
}

void SyncLogInAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndLogIn(aAsync, iMessageOut);
}


class SyncLogOutAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncLogOutAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncLogOutAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncLogOutAvOpenhomeOrgHardwareConfig1Cpp::SyncLogOutAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncLogOutAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndLogOut(aAsync);
}


class SyncCancelLogInAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncCancelLogInAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCancelLogInAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncCancelLogInAvOpenhomeOrgHardwareConfig1Cpp::SyncCancelLogInAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncCancelLogInAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCancelLogIn(aAsync);
}


class SyncIsAliveAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncIsAliveAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, bool& aAlive);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIsAliveAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    bool& iAlive;
};

SyncIsAliveAvOpenhomeOrgHardwareConfig1Cpp::SyncIsAliveAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, bool& aAlive)
    : iService(aProxy)
    , iAlive(aAlive)
{
}

void SyncIsAliveAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndIsAlive(aAsync, iAlive);
}


class SyncUpdateAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncUpdateAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncUpdateAvOpenhomeOrgHardwareConfig1Cpp::SyncUpdateAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}


class SyncActiveAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncActiveAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncActiveAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncActiveAvOpenhomeOrgHardwareConfig1Cpp::SyncActiveAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncActiveAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndActive(aAsync);
}


class SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aActiveStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iActiveStatus;
};

SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1Cpp::SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aActiveStatus)
    : iService(aProxy)
    , iActiveStatus(aActiveStatus)
{
}

void SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetActiveStatus(aAsync, iActiveStatus);
}


class SyncCheckUpdateAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncCheckUpdateAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCheckUpdateAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncCheckUpdateAvOpenhomeOrgHardwareConfig1Cpp::SyncCheckUpdateAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncCheckUpdateAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckUpdate(aAsync);
}


class SyncResetDisplayAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncResetDisplayAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncResetDisplayAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncResetDisplayAvOpenhomeOrgHardwareConfig1Cpp::SyncResetDisplayAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncResetDisplayAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndResetDisplay(aAsync);
}


class SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aHardWareInfo);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iHardWareInfo;
};

SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1Cpp::SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aHardWareInfo)
    : iService(aProxy)
    , iHardWareInfo(aHardWareInfo)
{
}

void SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHardWareInfo(aAsync, iHardWareInfo);
}


class SyncSetRoomNameAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetRoomNameAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRoomNameAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetRoomNameAvOpenhomeOrgHardwareConfig1Cpp::SyncSetRoomNameAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetRoomNameAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRoomName(aAsync);
}


class SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, bool& aVolumeControl);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    bool& iVolumeControl;
};

SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp::SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, bool& aVolumeControl)
    : iService(aProxy)
    , iVolumeControl(aVolumeControl)
{
}

void SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetVolumeControl(aAsync, iVolumeControl);
}


class SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp::SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeControl(aAsync);
}


class SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aWaitingTime);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iWaitingTime;
};

SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp::SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aWaitingTime)
    : iService(aProxy)
    , iWaitingTime(aWaitingTime)
{
}

void SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWaitingTime(aAsync, iWaitingTime);
}


class SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp::SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWaitingTime(aAsync);
}


class SyncGetOutChannelAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetOutChannelAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, uint32_t& aChannelNum, std::string& aCurrentChannel, std::string& aOutChannel);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetOutChannelAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    uint32_t& iChannelNum;
    std::string& iCurrentChannel;
    std::string& iOutChannel;
};

SyncGetOutChannelAvOpenhomeOrgHardwareConfig1Cpp::SyncGetOutChannelAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, uint32_t& aChannelNum, std::string& aCurrentChannel, std::string& aOutChannel)
    : iService(aProxy)
    , iChannelNum(aChannelNum)
    , iCurrentChannel(aCurrentChannel)
    , iOutChannel(aOutChannel)
{
}

void SyncGetOutChannelAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetOutChannel(aAsync, iChannelNum, iCurrentChannel, iOutChannel);
}


class SyncSetOutChannelAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetOutChannelAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetOutChannelAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetOutChannelAvOpenhomeOrgHardwareConfig1Cpp::SyncSetOutChannelAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetOutChannelAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetOutChannel(aAsync);
}


class SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp::SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetUpnpType(aAsync);
}


class SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aUpnpType);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iUpnpType;
};

SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp::SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aUpnpType)
    : iService(aProxy)
    , iUpnpType(aUpnpType)
{
}

void SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpnpType(aAsync, iUpnpType);
}


class SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp::SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDsdNativeStatus(aAsync);
}


class SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aStatus, std::string& aSampleFormat);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iStatus;
    std::string& iSampleFormat;
};

SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp::SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aStatus, std::string& aSampleFormat)
    : iService(aProxy)
    , iStatus(aStatus)
    , iSampleFormat(aSampleFormat)
{
}

void SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDsdNativeStatus(aAsync, iStatus, iSampleFormat);
}


class SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp::SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPasswordProtect(aAsync);
}


class SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aProtect, std::string& aProtectPassword);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iProtect;
    std::string& iProtectPassword;
};

SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp::SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aProtect, std::string& aProtectPassword)
    : iService(aProxy)
    , iProtect(aProtect)
    , iProtectPassword(aProtectPassword)
{
}

void SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPasswordProtect(aAsync, iProtect, iProtectPassword);
}


class SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aVersion, std::string& aProgress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iVersion;
    std::string& iProgress;
};

SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1Cpp::SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aVersion, std::string& aProgress)
    : iService(aProxy)
    , iVersion(aVersion)
    , iProgress(aProgress)
{
}

void SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateInfo(aAsync, iVersion, iProgress);
}


class SyncGetWirelessListAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetWirelessListAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, uint32_t& aNumber, std::string& aCurrentUse, std::string& aWirelessList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWirelessListAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    uint32_t& iNumber;
    std::string& iCurrentUse;
    std::string& iWirelessList;
};

SyncGetWirelessListAvOpenhomeOrgHardwareConfig1Cpp::SyncGetWirelessListAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, uint32_t& aNumber, std::string& aCurrentUse, std::string& aWirelessList)
    : iService(aProxy)
    , iNumber(aNumber)
    , iCurrentUse(aCurrentUse)
    , iWirelessList(aWirelessList)
{
}

void SyncGetWirelessListAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWirelessList(aAsync, iNumber, iCurrentUse, iWirelessList);
}


class SyncGetIpAddressAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetIpAddressAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aIpAddress, std::string& aNetMask, std::string& aGateWay, std::string& aDNS, std::string& aDHCP);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIpAddressAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iIpAddress;
    std::string& iNetMask;
    std::string& iGateWay;
    std::string& iDNS;
    std::string& iDHCP;
};

SyncGetIpAddressAvOpenhomeOrgHardwareConfig1Cpp::SyncGetIpAddressAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aIpAddress, std::string& aNetMask, std::string& aGateWay, std::string& aDNS, std::string& aDHCP)
    : iService(aProxy)
    , iIpAddress(aIpAddress)
    , iNetMask(aNetMask)
    , iGateWay(aGateWay)
    , iDNS(aDNS)
    , iDHCP(aDHCP)
{
}

void SyncGetIpAddressAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIpAddress(aAsync, iIpAddress, iNetMask, iGateWay, iDNS, iDHCP);
}


class SyncSetNetWorkAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetNetWorkAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetNetWorkAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetNetWorkAvOpenhomeOrgHardwareConfig1Cpp::SyncSetNetWorkAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetNetWorkAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetNetWork(aAsync);
}


class SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, uint32_t& aInterfaceNum, std::string& aCurrentUse, std::string& aInterfaceList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    uint32_t& iInterfaceNum;
    std::string& iCurrentUse;
    std::string& iInterfaceList;
};

SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1Cpp::SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, uint32_t& aInterfaceNum, std::string& aCurrentUse, std::string& aInterfaceList)
    : iService(aProxy)
    , iInterfaceNum(aInterfaceNum)
    , iCurrentUse(aCurrentUse)
    , iInterfaceList(aInterfaceList)
{
}

void SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetNetInterface(aAsync, iInterfaceNum, iCurrentUse, iInterfaceList);
}


class SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, bool& aHaltStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    bool& iHaltStatus;
};

SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp::SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, bool& aHaltStatus)
    : iService(aProxy)
    , iHaltStatus(aHaltStatus)
{
}

void SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHaltStatus(aAsync, iHaltStatus);
}


class SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp::SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetHaltStatus(aAsync);
}


class SyncGetFilterModeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetFilterModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aFilterMode, std::string& aFilterModeList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetFilterModeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iFilterMode;
    std::string& iFilterModeList;
};

SyncGetFilterModeAvOpenhomeOrgHardwareConfig1Cpp::SyncGetFilterModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aFilterMode, std::string& aFilterModeList)
    : iService(aProxy)
    , iFilterMode(aFilterMode)
    , iFilterModeList(aFilterModeList)
{
}

void SyncGetFilterModeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetFilterMode(aAsync, iFilterMode, iFilterModeList);
}


class SyncSetFilterModeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetFilterModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetFilterModeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetFilterModeAvOpenhomeOrgHardwareConfig1Cpp::SyncSetFilterModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetFilterModeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFilterMode(aAsync);
}


class SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp::SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceVisible(aAsync);
}


class SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aVisibleInfo);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iVisibleInfo;
};

SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp::SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aVisibleInfo)
    : iService(aProxy)
    , iVisibleInfo(aVisibleInfo)
{
}

void SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSourceVisible(aAsync, iVisibleInfo);
}


class SyncSetLEDModeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetLEDModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetLEDModeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetLEDModeAvOpenhomeOrgHardwareConfig1Cpp::SyncSetLEDModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetLEDModeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetLEDMode(aAsync);
}


class SyncGetLEDModeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetLEDModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aLEDMode, std::string& aLEDModeList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetLEDModeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iLEDMode;
    std::string& iLEDModeList;
};

SyncGetLEDModeAvOpenhomeOrgHardwareConfig1Cpp::SyncGetLEDModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aLEDMode, std::string& aLEDModeList)
    : iService(aProxy)
    , iLEDMode(aLEDMode)
    , iLEDModeList(aLEDModeList)
{
}

void SyncGetLEDModeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetLEDMode(aAsync, iLEDMode, iLEDModeList);
}


class SyncSetKeyModeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetKeyModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetKeyModeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetKeyModeAvOpenhomeOrgHardwareConfig1Cpp::SyncSetKeyModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetKeyModeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetKeyMode(aAsync);
}


class SyncGetKeyModeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetKeyModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aSideKeyMode, std::string& aMiddleKeyMode, std::string& aKeyModeList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetKeyModeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iSideKeyMode;
    std::string& iMiddleKeyMode;
    std::string& iKeyModeList;
};

SyncGetKeyModeAvOpenhomeOrgHardwareConfig1Cpp::SyncGetKeyModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aSideKeyMode, std::string& aMiddleKeyMode, std::string& aKeyModeList)
    : iService(aProxy)
    , iSideKeyMode(aSideKeyMode)
    , iMiddleKeyMode(aMiddleKeyMode)
    , iKeyModeList(aKeyModeList)
{
}

void SyncGetKeyModeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetKeyMode(aAsync, iSideKeyMode, iMiddleKeyMode, iKeyModeList);
}


class SyncSetBrightnessAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetBrightnessAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBrightnessAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetBrightnessAvOpenhomeOrgHardwareConfig1Cpp::SyncSetBrightnessAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetBrightnessAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBrightness(aAsync);
}


class SyncGetBrightnessAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetBrightnessAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aBrightness, std::string& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetBrightnessAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iBrightness;
    std::string& iList;
};

SyncGetBrightnessAvOpenhomeOrgHardwareConfig1Cpp::SyncGetBrightnessAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aBrightness, std::string& aList)
    : iService(aProxy)
    , iBrightness(aBrightness)
    , iList(aList)
{
}

void SyncGetBrightnessAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetBrightness(aAsync, iBrightness, iList);
}


class SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp::SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDisplayMode(aAsync);
}


class SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aDisplayMode, std::string& aDisplayModeList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    std::string& iDisplayMode;
    std::string& iDisplayModeList;
};

SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp::SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, std::string& aDisplayMode, std::string& aDisplayModeList)
    : iService(aProxy)
    , iDisplayMode(aDisplayMode)
    , iDisplayModeList(aDisplayModeList)
{
}

void SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDisplayMode(aAsync, iDisplayMode, iDisplayModeList);
}


class SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, uint32_t& aPhase);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    uint32_t& iPhase;
};

SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp::SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, uint32_t& aPhase)
    : iService(aProxy)
    , iPhase(aPhase)
{
}

void SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACPhase(aAsync, iPhase);
}


class SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp::SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACPhase(aAsync);
}


class SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, uint32_t& aBalance);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
    uint32_t& iBalance;
};

SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp::SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy, uint32_t& aBalance)
    : iService(aProxy)
    , iBalance(aBalance)
{
}

void SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACBalance(aAsync, iBalance);
}


class SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp::SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACBalance(aAsync);
}


class SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1Cpp::SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetEnableResampler(aAsync);
}


class SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1Cpp::SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetEnableSpeaker(aAsync);
}


class SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp& iService;
};

SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1Cpp::SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1Cpp(CpProxyAvOpenhomeOrgHardwareConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetEnableEqualizer(aAsync);
}


CpProxyAvOpenhomeOrgHardwareConfig1Cpp::CpProxyAvOpenhomeOrgHardwareConfig1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "HardwareConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionLogIn = new Action("LogIn");
    param = new OpenHome::Net::ParameterString("ServiceName");
    iActionLogIn->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("MessageIn");
    iActionLogIn->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("MessageOut");
    iActionLogIn->AddOutputParameter(param);

    iActionLogOut = new Action("LogOut");
    param = new OpenHome::Net::ParameterString("ServiceName");
    iActionLogOut->AddInputParameter(param);

    iActionCancelLogIn = new Action("CancelLogIn");
    param = new OpenHome::Net::ParameterString("ServiceName");
    iActionCancelLogIn->AddInputParameter(param);

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

    iActionGetHaltStatus = new Action("GetHaltStatus");
    param = new OpenHome::Net::ParameterBool("HaltStatus");
    iActionGetHaltStatus->AddOutputParameter(param);

    iActionSetHaltStatus = new Action("SetHaltStatus");
    param = new OpenHome::Net::ParameterBool("HaltStatus");
    iActionSetHaltStatus->AddInputParameter(param);

    iActionGetFilterMode = new Action("GetFilterMode");
    param = new OpenHome::Net::ParameterString("FilterMode");
    iActionGetFilterMode->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("FilterModeList");
    iActionGetFilterMode->AddOutputParameter(param);

    iActionSetFilterMode = new Action("SetFilterMode");
    param = new OpenHome::Net::ParameterString("FilterMode");
    iActionSetFilterMode->AddInputParameter(param);

    iActionSetSourceVisible = new Action("SetSourceVisible");
    param = new OpenHome::Net::ParameterString("SourceName");
    iActionSetSourceVisible->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Visible");
    iActionSetSourceVisible->AddInputParameter(param);

    iActionGetSourceVisible = new Action("GetSourceVisible");
    param = new OpenHome::Net::ParameterString("VisibleInfo");
    iActionGetSourceVisible->AddOutputParameter(param);

    iActionSetLEDMode = new Action("SetLEDMode");
    param = new OpenHome::Net::ParameterString("LEDMode");
    iActionSetLEDMode->AddInputParameter(param);

    iActionGetLEDMode = new Action("GetLEDMode");
    param = new OpenHome::Net::ParameterString("LEDMode");
    iActionGetLEDMode->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("LEDModeList");
    iActionGetLEDMode->AddOutputParameter(param);

    iActionSetKeyMode = new Action("SetKeyMode");
    param = new OpenHome::Net::ParameterString("KeyName");
    iActionSetKeyMode->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("KeyMode");
    iActionSetKeyMode->AddInputParameter(param);

    iActionGetKeyMode = new Action("GetKeyMode");
    param = new OpenHome::Net::ParameterString("SideKeyMode");
    iActionGetKeyMode->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("MiddleKeyMode");
    iActionGetKeyMode->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("KeyModeList");
    iActionGetKeyMode->AddOutputParameter(param);

    iActionSetBrightness = new Action("SetBrightness");
    param = new OpenHome::Net::ParameterString("Brightness");
    iActionSetBrightness->AddInputParameter(param);

    iActionGetBrightness = new Action("GetBrightness");
    param = new OpenHome::Net::ParameterString("Brightness");
    iActionGetBrightness->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("List");
    iActionGetBrightness->AddOutputParameter(param);

    iActionSetDisplayMode = new Action("SetDisplayMode");
    param = new OpenHome::Net::ParameterString("DisplayMode");
    iActionSetDisplayMode->AddInputParameter(param);

    iActionGetDisplayMode = new Action("GetDisplayMode");
    param = new OpenHome::Net::ParameterString("DisplayMode");
    iActionGetDisplayMode->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("DisplayModeList");
    iActionGetDisplayMode->AddOutputParameter(param);

    iActionGetDACPhase = new Action("GetDACPhase");
    param = new OpenHome::Net::ParameterUint("Phase");
    iActionGetDACPhase->AddOutputParameter(param);

    iActionSetDACPhase = new Action("SetDACPhase");
    param = new OpenHome::Net::ParameterUint("Phase");
    iActionSetDACPhase->AddInputParameter(param);

    iActionGetDACBalance = new Action("GetDACBalance");
    param = new OpenHome::Net::ParameterUint("Balance");
    iActionGetDACBalance->AddOutputParameter(param);

    iActionSetDACBalance = new Action("SetDACBalance");
    param = new OpenHome::Net::ParameterUint("Balance");
    iActionSetDACBalance->AddInputParameter(param);

    iActionSetEnableResampler = new Action("SetEnableResampler");
    param = new OpenHome::Net::ParameterBool("EnableResampler");
    iActionSetEnableResampler->AddInputParameter(param);

    iActionSetEnableSpeaker = new Action("SetEnableSpeaker");
    param = new OpenHome::Net::ParameterBool("EnableSpeaker");
    iActionSetEnableSpeaker->AddInputParameter(param);

    iActionSetEnableEqualizer = new Action("SetEnableEqualizer");
    param = new OpenHome::Net::ParameterBool("EnableEqualizer");
    iActionSetEnableEqualizer->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::MessageOutPropertyChanged);
    iMessageOut = new PropertyString("MessageOut", functor);
    AddProperty(iMessageOut);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::RestartPropertyChanged);
    iRestart = new PropertyBool("Restart", functor);
    AddProperty(iRestart);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::NumberPropertyChanged);
    iNumber = new PropertyUint("Number", functor);
    AddProperty(iNumber);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::RoomNamePropertyChanged);
    iRoomName = new PropertyString("RoomName", functor);
    AddProperty(iRoomName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::InterFacePropertyChanged);
    iInterFace = new PropertyString("InterFace", functor);
    AddProperty(iInterFace);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::NetMaskPropertyChanged);
    iNetMask = new PropertyString("NetMask", functor);
    AddProperty(iNetMask);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::GateWayPropertyChanged);
    iGateWay = new PropertyString("GateWay", functor);
    AddProperty(iGateWay);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::DNSPropertyChanged);
    iDNS = new PropertyString("DNS", functor);
    AddProperty(iDNS);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::DHCPPropertyChanged);
    iDHCP = new PropertyString("DHCP", functor);
    AddProperty(iDHCP);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SsidPropertyChanged);
    iSsid = new PropertyString("Ssid", functor);
    AddProperty(iSsid);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PassWordPropertyChanged);
    iPassWord = new PropertyString("PassWord", functor);
    AddProperty(iPassWord);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EncrypTypePropertyChanged);
    iEncrypType = new PropertyString("EncrypType", functor);
    AddProperty(iEncrypType);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::ChannelPropertyChanged);
    iChannel = new PropertyString("Channel", functor);
    AddProperty(iChannel);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::UpnpTypePropertyChanged);
    iUpnpType = new PropertyString("UpnpType", functor);
    AddProperty(iUpnpType);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::StatusPropertyChanged);
    iStatus = new PropertyString("Status", functor);
    AddProperty(iStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SampleFormatPropertyChanged);
    iSampleFormat = new PropertyString("SampleFormat", functor);
    AddProperty(iSampleFormat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::IpAddressPropertyChanged);
    iIpAddress = new PropertyString("IpAddress", functor);
    AddProperty(iIpAddress);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::ProtectPropertyChanged);
    iProtect = new PropertyString("Protect", functor);
    AddProperty(iProtect);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::ProtectPasswordPropertyChanged);
    iProtectPassword = new PropertyString("ProtectPassword", functor);
    AddProperty(iProtectPassword);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::ActiveStatusPropertyChanged);
    iActiveStatus = new PropertyString("ActiveStatus", functor);
    AddProperty(iActiveStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::TimePropertyChanged);
    iTime = new PropertyString("Time", functor);
    AddProperty(iTime);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1Cpp::VolumeControlPropertyChanged);
    iVolumeControl = new PropertyBool("VolumeControl", functor);
    AddProperty(iVolumeControl);
}

CpProxyAvOpenhomeOrgHardwareConfig1Cpp::~CpProxyAvOpenhomeOrgHardwareConfig1Cpp()
{
    DestroyService();
    delete iActionLogIn;
    delete iActionLogOut;
    delete iActionCancelLogIn;
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
    delete iActionGetHaltStatus;
    delete iActionSetHaltStatus;
    delete iActionGetFilterMode;
    delete iActionSetFilterMode;
    delete iActionSetSourceVisible;
    delete iActionGetSourceVisible;
    delete iActionSetLEDMode;
    delete iActionGetLEDMode;
    delete iActionSetKeyMode;
    delete iActionGetKeyMode;
    delete iActionSetBrightness;
    delete iActionGetBrightness;
    delete iActionSetDisplayMode;
    delete iActionGetDisplayMode;
    delete iActionGetDACPhase;
    delete iActionSetDACPhase;
    delete iActionGetDACBalance;
    delete iActionSetDACBalance;
    delete iActionSetEnableResampler;
    delete iActionSetEnableSpeaker;
    delete iActionSetEnableEqualizer;
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncLogIn(const std::string& aServiceName, const std::string& aMessageIn, std::string& aMessageOut)
{
    SyncLogInAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aMessageOut);
    BeginLogIn(aServiceName, aMessageIn, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginLogIn(const std::string& aServiceName, const std::string& aMessageIn, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionLogIn, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionLogIn->InputParameters();
    {
        Brn buf((const TByte*)aServiceName.c_str(), (TUint)aServiceName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aMessageIn.c_str(), (TUint)aMessageIn.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionLogIn->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndLogIn(IAsync& aAsync, std::string& aMessageOut)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("LogIn"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aMessageOut.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncLogOut(const std::string& aServiceName)
{
    SyncLogOutAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginLogOut(aServiceName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginLogOut(const std::string& aServiceName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionLogOut, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionLogOut->InputParameters();
    {
        Brn buf((const TByte*)aServiceName.c_str(), (TUint)aServiceName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndLogOut(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("LogOut"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncCancelLogIn(const std::string& aServiceName)
{
    SyncCancelLogInAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginCancelLogIn(aServiceName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginCancelLogIn(const std::string& aServiceName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCancelLogIn, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionCancelLogIn->InputParameters();
    {
        Brn buf((const TByte*)aServiceName.c_str(), (TUint)aServiceName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndCancelLogIn(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("CancelLogIn"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncIsAlive(bool& aAlive)
{
    SyncIsAliveAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aAlive);
    BeginIsAlive(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginIsAlive(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIsAlive, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIsAlive->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndIsAlive(IAsync& aAsync, bool& aAlive)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncUpdate()
{
    SyncUpdateAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdate, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndUpdate(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncActive(bool aIsSubscribe, const std::string& aRealName, const std::string& aEmail)
{
    SyncActiveAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginActive(aIsSubscribe, aRealName, aEmail, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginActive(bool aIsSubscribe, const std::string& aRealName, const std::string& aEmail, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionActive, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionActive->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aIsSubscribe));
    {
        Brn buf((const TByte*)aRealName.c_str(), (TUint)aRealName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aEmail.c_str(), (TUint)aEmail.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndActive(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetActiveStatus(std::string& aActiveStatus)
{
    SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aActiveStatus);
    BeginGetActiveStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetActiveStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetActiveStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetActiveStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetActiveStatus(IAsync& aAsync, std::string& aActiveStatus)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aActiveStatus.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncCheckUpdate()
{
    SyncCheckUpdateAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginCheckUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginCheckUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCheckUpdate, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndCheckUpdate(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncResetDisplay()
{
    SyncResetDisplayAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginResetDisplay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginResetDisplay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionResetDisplay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndResetDisplay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetHardWareInfo(std::string& aHardWareInfo)
{
    SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aHardWareInfo);
    BeginGetHardWareInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetHardWareInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetHardWareInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHardWareInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetHardWareInfo(IAsync& aAsync, std::string& aHardWareInfo)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aHardWareInfo.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetRoomName(const std::string& aRoomName)
{
    SyncSetRoomNameAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetRoomName(aRoomName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetRoomName(const std::string& aRoomName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetRoomName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRoomName->InputParameters();
    {
        Brn buf((const TByte*)aRoomName.c_str(), (TUint)aRoomName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetRoomName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetVolumeControl(bool& aVolumeControl)
{
    SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aVolumeControl);
    BeginGetVolumeControl(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetVolumeControl(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetVolumeControl, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetVolumeControl->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetVolumeControl(IAsync& aAsync, bool& aVolumeControl)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetVolumeControl(bool aVolumeControl)
{
    SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetVolumeControl(aVolumeControl, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetVolumeControl(bool aVolumeControl, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolumeControl, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeControl->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aVolumeControl));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetVolumeControl(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetWaitingTime(std::string& aWaitingTime)
{
    SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aWaitingTime);
    BeginGetWaitingTime(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetWaitingTime(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetWaitingTime, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWaitingTime->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetWaitingTime(IAsync& aAsync, std::string& aWaitingTime)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aWaitingTime.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetWaitingTime(const std::string& aWaitingTime)
{
    SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetWaitingTime(aWaitingTime, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetWaitingTime(const std::string& aWaitingTime, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetWaitingTime, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWaitingTime->InputParameters();
    {
        Brn buf((const TByte*)aWaitingTime.c_str(), (TUint)aWaitingTime.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetWaitingTime(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetOutChannel(uint32_t& aChannelNum, std::string& aCurrentChannel, std::string& aOutChannel)
{
    SyncGetOutChannelAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aChannelNum, aCurrentChannel, aOutChannel);
    BeginGetOutChannel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetOutChannel(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetOutChannel, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetOutChannel->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetOutChannel(IAsync& aAsync, uint32_t& aChannelNum, std::string& aCurrentChannel, std::string& aOutChannel)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aCurrentChannel.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aOutChannel.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetOutChannel(const std::string& aChannel)
{
    SyncSetOutChannelAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetOutChannel(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetOutChannel(const std::string& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetOutChannel, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetOutChannel->InputParameters();
    {
        Brn buf((const TByte*)aChannel.c_str(), (TUint)aChannel.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetOutChannel(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetUpnpType(const std::string& aUpnpType)
{
    SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetUpnpType(aUpnpType, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetUpnpType(const std::string& aUpnpType, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetUpnpType, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetUpnpType->InputParameters();
    {
        Brn buf((const TByte*)aUpnpType.c_str(), (TUint)aUpnpType.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetUpnpType(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetUpnpType(std::string& aUpnpType)
{
    SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aUpnpType);
    BeginGetUpnpType(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetUpnpType(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpnpType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpnpType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetUpnpType(IAsync& aAsync, std::string& aUpnpType)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUpnpType.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetDsdNativeStatus(const std::string& aStatus, const std::string& aSampleFormat)
{
    SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetDsdNativeStatus(aStatus, aSampleFormat, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetDsdNativeStatus(const std::string& aStatus, const std::string& aSampleFormat, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDsdNativeStatus, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDsdNativeStatus->InputParameters();
    {
        Brn buf((const TByte*)aStatus.c_str(), (TUint)aStatus.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aSampleFormat.c_str(), (TUint)aSampleFormat.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetDsdNativeStatus(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetDsdNativeStatus(std::string& aStatus, std::string& aSampleFormat)
{
    SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aStatus, aSampleFormat);
    BeginGetDsdNativeStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetDsdNativeStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDsdNativeStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDsdNativeStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetDsdNativeStatus(IAsync& aAsync, std::string& aStatus, std::string& aSampleFormat)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aStatus.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSampleFormat.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetPasswordProtect(const std::string& aProtect, const std::string& aProtectPassword)
{
    SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetPasswordProtect(aProtect, aProtectPassword, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetPasswordProtect(const std::string& aProtect, const std::string& aProtectPassword, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetPasswordProtect, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPasswordProtect->InputParameters();
    {
        Brn buf((const TByte*)aProtect.c_str(), (TUint)aProtect.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aProtectPassword.c_str(), (TUint)aProtectPassword.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetPasswordProtect(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetPasswordProtect(std::string& aProtect, std::string& aProtectPassword)
{
    SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aProtect, aProtectPassword);
    BeginGetPasswordProtect(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetPasswordProtect(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPasswordProtect, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPasswordProtect->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetPasswordProtect(IAsync& aAsync, std::string& aProtect, std::string& aProtectPassword)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aProtect.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aProtectPassword.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetUpdateInfo(std::string& aVersion, std::string& aProgress)
{
    SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aVersion, aProgress);
    BeginGetUpdateInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetUpdateInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetUpdateInfo(IAsync& aAsync, std::string& aVersion, std::string& aProgress)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aVersion.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aProgress.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetWirelessList(const std::string& aInterFace, uint32_t& aNumber, std::string& aCurrentUse, std::string& aWirelessList)
{
    SyncGetWirelessListAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aNumber, aCurrentUse, aWirelessList);
    BeginGetWirelessList(aInterFace, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetWirelessList(const std::string& aInterFace, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetWirelessList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetWirelessList->InputParameters();
    {
        Brn buf((const TByte*)aInterFace.c_str(), (TUint)aInterFace.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWirelessList->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetWirelessList(IAsync& aAsync, uint32_t& aNumber, std::string& aCurrentUse, std::string& aWirelessList)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aCurrentUse.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aWirelessList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetIpAddress(const std::string& aInterFace, std::string& aIpAddress, std::string& aNetMask, std::string& aGateWay, std::string& aDNS, std::string& aDHCP)
{
    SyncGetIpAddressAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aIpAddress, aNetMask, aGateWay, aDNS, aDHCP);
    BeginGetIpAddress(aInterFace, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetIpAddress(const std::string& aInterFace, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIpAddress, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetIpAddress->InputParameters();
    {
        Brn buf((const TByte*)aInterFace.c_str(), (TUint)aInterFace.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIpAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetIpAddress(IAsync& aAsync, std::string& aIpAddress, std::string& aNetMask, std::string& aGateWay, std::string& aDNS, std::string& aDHCP)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aIpAddress.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aNetMask.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aGateWay.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDNS.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDHCP.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetNetWork(const std::string& aInterFace, const std::string& aIpAddress, const std::string& aNetMask, const std::string& aGateWay, const std::string& aDNS, const std::string& aSsid, const std::string& aPassWord, const std::string& aEncrypType)
{
    SyncSetNetWorkAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetNetWork(aInterFace, aIpAddress, aNetMask, aGateWay, aDNS, aSsid, aPassWord, aEncrypType, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetNetWork(const std::string& aInterFace, const std::string& aIpAddress, const std::string& aNetMask, const std::string& aGateWay, const std::string& aDNS, const std::string& aSsid, const std::string& aPassWord, const std::string& aEncrypType, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetNetWork, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetNetWork->InputParameters();
    {
        Brn buf((const TByte*)aInterFace.c_str(), (TUint)aInterFace.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aIpAddress.c_str(), (TUint)aIpAddress.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aNetMask.c_str(), (TUint)aNetMask.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aGateWay.c_str(), (TUint)aGateWay.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aDNS.c_str(), (TUint)aDNS.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aSsid.c_str(), (TUint)aSsid.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aPassWord.c_str(), (TUint)aPassWord.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aEncrypType.c_str(), (TUint)aEncrypType.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetNetWork(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetNetInterface(uint32_t& aInterfaceNum, std::string& aCurrentUse, std::string& aInterfaceList)
{
    SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aInterfaceNum, aCurrentUse, aInterfaceList);
    BeginGetNetInterface(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetNetInterface(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetNetInterface, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetNetInterface->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetNetInterface(IAsync& aAsync, uint32_t& aInterfaceNum, std::string& aCurrentUse, std::string& aInterfaceList)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aCurrentUse.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aInterfaceList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetHaltStatus(bool& aHaltStatus)
{
    SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aHaltStatus);
    BeginGetHaltStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetHaltStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetHaltStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHaltStatus->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetHaltStatus(IAsync& aAsync, bool& aHaltStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetHaltStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aHaltStatus = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetHaltStatus(bool aHaltStatus)
{
    SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetHaltStatus(aHaltStatus, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetHaltStatus(bool aHaltStatus, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetHaltStatus, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetHaltStatus->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aHaltStatus));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetHaltStatus(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetHaltStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetFilterMode(std::string& aFilterMode, std::string& aFilterModeList)
{
    SyncGetFilterModeAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aFilterMode, aFilterModeList);
    BeginGetFilterMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetFilterMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetFilterMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetFilterMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetFilterMode(IAsync& aAsync, std::string& aFilterMode, std::string& aFilterModeList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetFilterMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aFilterMode.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aFilterModeList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetFilterMode(const std::string& aFilterMode)
{
    SyncSetFilterModeAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetFilterMode(aFilterMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetFilterMode(const std::string& aFilterMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetFilterMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFilterMode->InputParameters();
    {
        Brn buf((const TByte*)aFilterMode.c_str(), (TUint)aFilterMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetFilterMode(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetFilterMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetSourceVisible(const std::string& aSourceName, bool aVisible)
{
    SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetSourceVisible(aSourceName, aVisible, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetSourceVisible(const std::string& aSourceName, bool aVisible, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSourceVisible, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceVisible->InputParameters();
    {
        Brn buf((const TByte*)aSourceName.c_str(), (TUint)aSourceName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aVisible));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetSourceVisible(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetSourceVisible"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetSourceVisible(std::string& aVisibleInfo)
{
    SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aVisibleInfo);
    BeginGetSourceVisible(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetSourceVisible(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSourceVisible, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSourceVisible->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetSourceVisible(IAsync& aAsync, std::string& aVisibleInfo)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSourceVisible"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aVisibleInfo.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetLEDMode(const std::string& aLEDMode)
{
    SyncSetLEDModeAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetLEDMode(aLEDMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetLEDMode(const std::string& aLEDMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetLEDMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetLEDMode->InputParameters();
    {
        Brn buf((const TByte*)aLEDMode.c_str(), (TUint)aLEDMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetLEDMode(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetLEDMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetLEDMode(std::string& aLEDMode, std::string& aLEDModeList)
{
    SyncGetLEDModeAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aLEDMode, aLEDModeList);
    BeginGetLEDMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetLEDMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetLEDMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetLEDMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetLEDMode(IAsync& aAsync, std::string& aLEDMode, std::string& aLEDModeList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetLEDMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aLEDMode.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aLEDModeList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetKeyMode(const std::string& aKeyName, const std::string& aKeyMode)
{
    SyncSetKeyModeAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetKeyMode(aKeyName, aKeyMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetKeyMode(const std::string& aKeyName, const std::string& aKeyMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetKeyMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetKeyMode->InputParameters();
    {
        Brn buf((const TByte*)aKeyName.c_str(), (TUint)aKeyName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aKeyMode.c_str(), (TUint)aKeyMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetKeyMode(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetKeyMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetKeyMode(std::string& aSideKeyMode, std::string& aMiddleKeyMode, std::string& aKeyModeList)
{
    SyncGetKeyModeAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aSideKeyMode, aMiddleKeyMode, aKeyModeList);
    BeginGetKeyMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetKeyMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetKeyMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetKeyMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetKeyMode(IAsync& aAsync, std::string& aSideKeyMode, std::string& aMiddleKeyMode, std::string& aKeyModeList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetKeyMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSideKeyMode.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aMiddleKeyMode.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aKeyModeList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetBrightness(const std::string& aBrightness)
{
    SyncSetBrightnessAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetBrightness(aBrightness, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetBrightness(const std::string& aBrightness, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBrightness, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBrightness->InputParameters();
    {
        Brn buf((const TByte*)aBrightness.c_str(), (TUint)aBrightness.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetBrightness(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetBrightness"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetBrightness(std::string& aBrightness, std::string& aList)
{
    SyncGetBrightnessAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aBrightness, aList);
    BeginGetBrightness(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetBrightness(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetBrightness, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetBrightness->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetBrightness(IAsync& aAsync, std::string& aBrightness, std::string& aList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetBrightness"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aBrightness.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetDisplayMode(const std::string& aDisplayMode)
{
    SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetDisplayMode(aDisplayMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetDisplayMode(const std::string& aDisplayMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDisplayMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDisplayMode->InputParameters();
    {
        Brn buf((const TByte*)aDisplayMode.c_str(), (TUint)aDisplayMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetDisplayMode(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDisplayMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetDisplayMode(std::string& aDisplayMode, std::string& aDisplayModeList)
{
    SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aDisplayMode, aDisplayModeList);
    BeginGetDisplayMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetDisplayMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDisplayMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDisplayMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetDisplayMode(IAsync& aAsync, std::string& aDisplayMode, std::string& aDisplayModeList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDisplayMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDisplayMode.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDisplayModeList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetDACPhase(uint32_t& aPhase)
{
    SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aPhase);
    BeginGetDACPhase(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetDACPhase(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDACPhase, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACPhase->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetDACPhase(IAsync& aAsync, uint32_t& aPhase)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDACPhase"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aPhase = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetDACPhase(uint32_t aPhase)
{
    SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetDACPhase(aPhase, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetDACPhase(uint32_t aPhase, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDACPhase, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACPhase->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aPhase));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetDACPhase(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDACPhase"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncGetDACBalance(uint32_t& aBalance)
{
    SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp sync(*this, aBalance);
    BeginGetDACBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginGetDACBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDACBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACBalance->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndGetDACBalance(IAsync& aAsync, uint32_t& aBalance)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDACBalance"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aBalance = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetDACBalance(uint32_t aBalance)
{
    SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetDACBalance(aBalance, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetDACBalance(uint32_t aBalance, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDACBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACBalance->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aBalance));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetDACBalance(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDACBalance"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetEnableResampler(bool aEnableResampler)
{
    SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetEnableResampler(aEnableResampler, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetEnableResampler(bool aEnableResampler, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetEnableResampler, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetEnableResampler->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnableResampler));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetEnableResampler(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetEnableResampler"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetEnableSpeaker(bool aEnableSpeaker)
{
    SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetEnableSpeaker(aEnableSpeaker, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetEnableSpeaker(bool aEnableSpeaker, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetEnableSpeaker, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetEnableSpeaker->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnableSpeaker));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetEnableSpeaker(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetEnableSpeaker"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SyncSetEnableEqualizer(bool aEnableEqualizer)
{
    SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1Cpp sync(*this);
    BeginSetEnableEqualizer(aEnableEqualizer, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::BeginSetEnableEqualizer(bool aEnableEqualizer, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetEnableEqualizer, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetEnableEqualizer->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnableEqualizer));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EndSetEnableEqualizer(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetEnableEqualizer"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyMessageOutChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMessageOutChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyAliveChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAliveChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCurrentActionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyRestartChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRestartChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyNumberChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iNumberChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyRoomNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRoomNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyInterFaceChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iInterFaceChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyNetMaskChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iNetMaskChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyGateWayChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iGateWayChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyDNSChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDNSChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyDHCPChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDHCPChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertySsidChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSsidChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyPassWordChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPassWordChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyEncrypTypeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iEncrypTypeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyChannelChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyUpnpTypeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpnpTypeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertySampleFormatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSampleFormatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyIpAddressChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIpAddressChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyProtectChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProtectChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyProtectPasswordChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProtectPasswordChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyActiveStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iActiveStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyTimeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTimeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyVolumeControlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeControlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyMessageOut(std::string& aMessageOut) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iMessageOut->Value();
    aMessageOut.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyAlive(bool& aAlive) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyCurrentAction(uint32_t& aCurrentAction) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyRestart(bool& aRestart) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRestart = iRestart->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyNumber(uint32_t& aNumber) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aNumber = iNumber->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyRoomName(std::string& aRoomName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iRoomName->Value();
    aRoomName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyInterFace(std::string& aInterFace) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iInterFace->Value();
    aInterFace.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyNetMask(std::string& aNetMask) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iNetMask->Value();
    aNetMask.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyGateWay(std::string& aGateWay) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iGateWay->Value();
    aGateWay.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyDNS(std::string& aDNS) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iDNS->Value();
    aDNS.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyDHCP(std::string& aDHCP) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iDHCP->Value();
    aDHCP.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertySsid(std::string& aSsid) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSsid->Value();
    aSsid.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyPassWord(std::string& aPassWord) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iPassWord->Value();
    aPassWord.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyEncrypType(std::string& aEncrypType) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iEncrypType->Value();
    aEncrypType.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyChannel(std::string& aChannel) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iChannel->Value();
    aChannel.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyUpnpType(std::string& aUpnpType) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iUpnpType->Value();
    aUpnpType.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyStatus(std::string& aStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iStatus->Value();
    aStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertySampleFormat(std::string& aSampleFormat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSampleFormat->Value();
    aSampleFormat.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyIpAddress(std::string& aIpAddress) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iIpAddress->Value();
    aIpAddress.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyProtect(std::string& aProtect) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProtect->Value();
    aProtect.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyProtectPassword(std::string& aProtectPassword) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProtectPassword->Value();
    aProtectPassword.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyActiveStatus(std::string& aActiveStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iActiveStatus->Value();
    aActiveStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyTime(std::string& aTime) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iTime->Value();
    aTime.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PropertyVolumeControl(bool& aVolumeControl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeControl = iVolumeControl->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::MessageOutPropertyChanged()
{
    ReportEvent(iMessageOutChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::RestartPropertyChanged()
{
    ReportEvent(iRestartChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::NumberPropertyChanged()
{
    ReportEvent(iNumberChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::RoomNamePropertyChanged()
{
    ReportEvent(iRoomNameChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::InterFacePropertyChanged()
{
    ReportEvent(iInterFaceChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::NetMaskPropertyChanged()
{
    ReportEvent(iNetMaskChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::GateWayPropertyChanged()
{
    ReportEvent(iGateWayChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::DNSPropertyChanged()
{
    ReportEvent(iDNSChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::DHCPPropertyChanged()
{
    ReportEvent(iDHCPChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SsidPropertyChanged()
{
    ReportEvent(iSsidChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::PassWordPropertyChanged()
{
    ReportEvent(iPassWordChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::EncrypTypePropertyChanged()
{
    ReportEvent(iEncrypTypeChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::ChannelPropertyChanged()
{
    ReportEvent(iChannelChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::UpnpTypePropertyChanged()
{
    ReportEvent(iUpnpTypeChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::StatusPropertyChanged()
{
    ReportEvent(iStatusChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SampleFormatPropertyChanged()
{
    ReportEvent(iSampleFormatChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::IpAddressPropertyChanged()
{
    ReportEvent(iIpAddressChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::ProtectPropertyChanged()
{
    ReportEvent(iProtectChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::ProtectPasswordPropertyChanged()
{
    ReportEvent(iProtectPasswordChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::ActiveStatusPropertyChanged()
{
    ReportEvent(iActiveStatusChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::TimePropertyChanged()
{
    ReportEvent(iTimeChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::VolumeControlPropertyChanged()
{
    ReportEvent(iVolumeControlChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgHardwareConfig1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgHardwareConfig1Cpp::Version() const
{
  return iCpProxy.Version();
}

