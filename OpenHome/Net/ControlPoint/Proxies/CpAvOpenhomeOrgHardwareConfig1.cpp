#include "CpAvOpenhomeOrgHardwareConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncLogInAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncLogInAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aMessageOut);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iMessageOut;
};

class SyncLogOutAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncLogOutAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncCancelLogInAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncCancelLogInAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncIsAliveAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncIsAliveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TBool& aAlive);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TBool& iAlive;
};

class SyncUpdateAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncActiveAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncActiveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aActiveStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iActiveStatus;
};

class SyncCheckUpdateAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncCheckUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncResetDisplayAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncResetDisplayAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aHardWareInfo);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iHardWareInfo;
};

class SyncSetRoomNameAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetRoomNameAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TBool& aVolumeControl);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TBool& iVolumeControl;
};

class SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aWaitingTime);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iWaitingTime;
};

class SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetOutChannelAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetOutChannelAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TUint& iChannelNum;
    Brh& iCurrentChannel;
    Brh& iOutChannel;
};

class SyncSetOutChannelAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetOutChannelAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aUpnpType);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iUpnpType;
};

class SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aStatus, Brh& aSampleFormat);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iStatus;
    Brh& iSampleFormat;
};

class SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aProtect, Brh& aProtectPassword);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iProtect;
    Brh& iProtectPassword;
};

class SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aVersion, Brh& aProgress);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iVersion;
    Brh& iProgress;
};

class SyncGetWirelessListAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetWirelessListAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TUint& iNumber;
    Brh& iCurrentUse;
    Brh& iWirelessList;
};

class SyncGetIpAddressAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetIpAddressAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iIpAddress;
    Brh& iNetMask;
    Brh& iGateWay;
    Brh& iDNS;
    Brh& iDHCP;
};

class SyncSetNetWorkAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetNetWorkAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TUint& iInterfaceNum;
    Brh& iCurrentUse;
    Brh& iInterfaceList;
};

class SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TBool& aHaltStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TBool& iHaltStatus;
};

class SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetFilterModeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetFilterModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aFilterMode, Brh& aFilterModeList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iFilterMode;
    Brh& iFilterModeList;
};

class SyncSetFilterModeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetFilterModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aVisibleInfo);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iVisibleInfo;
};

class SyncSetLEDModeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetLEDModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetLEDModeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetLEDModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aLEDMode, Brh& aLEDModeList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iLEDMode;
    Brh& iLEDModeList;
};

class SyncSetKeyModeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetKeyModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetKeyModeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetKeyModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aSideKeyMode, Brh& aMiddleKeyMode, Brh& aKeyModeList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iSideKeyMode;
    Brh& iMiddleKeyMode;
    Brh& iKeyModeList;
};

class SyncSetBrightnessAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetBrightnessAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetBrightnessAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetBrightnessAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aBrightness, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iBrightness;
    Brh& iList;
};

class SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aDisplayMode, Brh& aDisplayModeList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    Brh& iDisplayMode;
    Brh& iDisplayModeList;
};

class SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aPhase);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TUint& iPhase;
};

class SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aBalance);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
    TUint& iBalance;
};

class SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

class SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1 : public SyncProxyAction
{
public:
    SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgHardwareConfig1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncLogInAvOpenhomeOrgHardwareConfig1

SyncLogInAvOpenhomeOrgHardwareConfig1::SyncLogInAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aMessageOut)
    : iService(aProxy)
    , iMessageOut(aMessageOut)
{
}

void SyncLogInAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndLogIn(aAsync, iMessageOut);
}

// SyncLogOutAvOpenhomeOrgHardwareConfig1

SyncLogOutAvOpenhomeOrgHardwareConfig1::SyncLogOutAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncLogOutAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndLogOut(aAsync);
}

// SyncCancelLogInAvOpenhomeOrgHardwareConfig1

SyncCancelLogInAvOpenhomeOrgHardwareConfig1::SyncCancelLogInAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncCancelLogInAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndCancelLogIn(aAsync);
}

// SyncIsAliveAvOpenhomeOrgHardwareConfig1

SyncIsAliveAvOpenhomeOrgHardwareConfig1::SyncIsAliveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TBool& aAlive)
    : iService(aProxy)
    , iAlive(aAlive)
{
}

void SyncIsAliveAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndIsAlive(aAsync, iAlive);
}

// SyncUpdateAvOpenhomeOrgHardwareConfig1

SyncUpdateAvOpenhomeOrgHardwareConfig1::SyncUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}

// SyncActiveAvOpenhomeOrgHardwareConfig1

SyncActiveAvOpenhomeOrgHardwareConfig1::SyncActiveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncActiveAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndActive(aAsync);
}

// SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1

SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1::SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aActiveStatus)
    : iService(aProxy)
    , iActiveStatus(aActiveStatus)
{
}

void SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetActiveStatus(aAsync, iActiveStatus);
}

// SyncCheckUpdateAvOpenhomeOrgHardwareConfig1

SyncCheckUpdateAvOpenhomeOrgHardwareConfig1::SyncCheckUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncCheckUpdateAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckUpdate(aAsync);
}

// SyncResetDisplayAvOpenhomeOrgHardwareConfig1

SyncResetDisplayAvOpenhomeOrgHardwareConfig1::SyncResetDisplayAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncResetDisplayAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndResetDisplay(aAsync);
}

// SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1

SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1::SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aHardWareInfo)
    : iService(aProxy)
    , iHardWareInfo(aHardWareInfo)
{
}

void SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHardWareInfo(aAsync, iHardWareInfo);
}

// SyncSetRoomNameAvOpenhomeOrgHardwareConfig1

SyncSetRoomNameAvOpenhomeOrgHardwareConfig1::SyncSetRoomNameAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetRoomNameAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRoomName(aAsync);
}

// SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1

SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1::SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TBool& aVolumeControl)
    : iService(aProxy)
    , iVolumeControl(aVolumeControl)
{
}

void SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetVolumeControl(aAsync, iVolumeControl);
}

// SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1

SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1::SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeControl(aAsync);
}

// SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1

SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1::SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aWaitingTime)
    : iService(aProxy)
    , iWaitingTime(aWaitingTime)
{
}

void SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWaitingTime(aAsync, iWaitingTime);
}

// SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1

SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1::SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWaitingTime(aAsync);
}

// SyncGetOutChannelAvOpenhomeOrgHardwareConfig1

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

// SyncSetOutChannelAvOpenhomeOrgHardwareConfig1

SyncSetOutChannelAvOpenhomeOrgHardwareConfig1::SyncSetOutChannelAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetOutChannelAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetOutChannel(aAsync);
}

// SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1

SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1::SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetUpnpType(aAsync);
}

// SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1

SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1::SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aUpnpType)
    : iService(aProxy)
    , iUpnpType(aUpnpType)
{
}

void SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpnpType(aAsync, iUpnpType);
}

// SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1

SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1::SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDsdNativeStatus(aAsync);
}

// SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1

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

// SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1

SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1::SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPasswordProtect(aAsync);
}

// SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1

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

// SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1

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

// SyncGetWirelessListAvOpenhomeOrgHardwareConfig1

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

// SyncGetIpAddressAvOpenhomeOrgHardwareConfig1

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

// SyncSetNetWorkAvOpenhomeOrgHardwareConfig1

SyncSetNetWorkAvOpenhomeOrgHardwareConfig1::SyncSetNetWorkAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetNetWorkAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetNetWork(aAsync);
}

// SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1

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

// SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1

SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1::SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TBool& aHaltStatus)
    : iService(aProxy)
    , iHaltStatus(aHaltStatus)
{
}

void SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHaltStatus(aAsync, iHaltStatus);
}

// SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1

SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1::SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetHaltStatus(aAsync);
}

// SyncGetFilterModeAvOpenhomeOrgHardwareConfig1

SyncGetFilterModeAvOpenhomeOrgHardwareConfig1::SyncGetFilterModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aFilterMode, Brh& aFilterModeList)
    : iService(aProxy)
    , iFilterMode(aFilterMode)
    , iFilterModeList(aFilterModeList)
{
}

void SyncGetFilterModeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetFilterMode(aAsync, iFilterMode, iFilterModeList);
}

// SyncSetFilterModeAvOpenhomeOrgHardwareConfig1

SyncSetFilterModeAvOpenhomeOrgHardwareConfig1::SyncSetFilterModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetFilterModeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFilterMode(aAsync);
}

// SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1

SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1::SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceVisible(aAsync);
}

// SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1

SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1::SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aVisibleInfo)
    : iService(aProxy)
    , iVisibleInfo(aVisibleInfo)
{
}

void SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSourceVisible(aAsync, iVisibleInfo);
}

// SyncSetLEDModeAvOpenhomeOrgHardwareConfig1

SyncSetLEDModeAvOpenhomeOrgHardwareConfig1::SyncSetLEDModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetLEDModeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetLEDMode(aAsync);
}

// SyncGetLEDModeAvOpenhomeOrgHardwareConfig1

SyncGetLEDModeAvOpenhomeOrgHardwareConfig1::SyncGetLEDModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aLEDMode, Brh& aLEDModeList)
    : iService(aProxy)
    , iLEDMode(aLEDMode)
    , iLEDModeList(aLEDModeList)
{
}

void SyncGetLEDModeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetLEDMode(aAsync, iLEDMode, iLEDModeList);
}

// SyncSetKeyModeAvOpenhomeOrgHardwareConfig1

SyncSetKeyModeAvOpenhomeOrgHardwareConfig1::SyncSetKeyModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetKeyModeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetKeyMode(aAsync);
}

// SyncGetKeyModeAvOpenhomeOrgHardwareConfig1

SyncGetKeyModeAvOpenhomeOrgHardwareConfig1::SyncGetKeyModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aSideKeyMode, Brh& aMiddleKeyMode, Brh& aKeyModeList)
    : iService(aProxy)
    , iSideKeyMode(aSideKeyMode)
    , iMiddleKeyMode(aMiddleKeyMode)
    , iKeyModeList(aKeyModeList)
{
}

void SyncGetKeyModeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetKeyMode(aAsync, iSideKeyMode, iMiddleKeyMode, iKeyModeList);
}

// SyncSetBrightnessAvOpenhomeOrgHardwareConfig1

SyncSetBrightnessAvOpenhomeOrgHardwareConfig1::SyncSetBrightnessAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetBrightnessAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBrightness(aAsync);
}

// SyncGetBrightnessAvOpenhomeOrgHardwareConfig1

SyncGetBrightnessAvOpenhomeOrgHardwareConfig1::SyncGetBrightnessAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aBrightness, Brh& aList)
    : iService(aProxy)
    , iBrightness(aBrightness)
    , iList(aList)
{
}

void SyncGetBrightnessAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetBrightness(aAsync, iBrightness, iList);
}

// SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1

SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1::SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDisplayMode(aAsync);
}

// SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1

SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1::SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, Brh& aDisplayMode, Brh& aDisplayModeList)
    : iService(aProxy)
    , iDisplayMode(aDisplayMode)
    , iDisplayModeList(aDisplayModeList)
{
}

void SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDisplayMode(aAsync, iDisplayMode, iDisplayModeList);
}

// SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1

SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1::SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aPhase)
    : iService(aProxy)
    , iPhase(aPhase)
{
}

void SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACPhase(aAsync, iPhase);
}

// SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1

SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1::SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACPhase(aAsync);
}

// SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1

SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1::SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy, TUint& aBalance)
    : iService(aProxy)
    , iBalance(aBalance)
{
}

void SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDACBalance(aAsync, iBalance);
}

// SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1

SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1::SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDACBalance(aAsync);
}

// SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1

SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1::SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetEnableResampler(aAsync);
}

// SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1

SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1::SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetEnableSpeaker(aAsync);
}

// SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1

SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1::SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetEnableEqualizer(aAsync);
}


// CpProxyAvOpenhomeOrgHardwareConfig1

CpProxyAvOpenhomeOrgHardwareConfig1::CpProxyAvOpenhomeOrgHardwareConfig1(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::MessageOutPropertyChanged);
    iMessageOut = new PropertyString("MessageOut", functor);
    AddProperty(iMessageOut);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::AlivePropertyChanged);
    iAlive = new PropertyBool("Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint("CurrentAction", functor);
    AddProperty(iCurrentAction);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::RestartPropertyChanged);
    iRestart = new PropertyBool("Restart", functor);
    AddProperty(iRestart);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::NumberPropertyChanged);
    iNumber = new PropertyUint("Number", functor);
    AddProperty(iNumber);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::RoomNamePropertyChanged);
    iRoomName = new PropertyString("RoomName", functor);
    AddProperty(iRoomName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::InterFacePropertyChanged);
    iInterFace = new PropertyString("InterFace", functor);
    AddProperty(iInterFace);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::NetMaskPropertyChanged);
    iNetMask = new PropertyString("NetMask", functor);
    AddProperty(iNetMask);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::GateWayPropertyChanged);
    iGateWay = new PropertyString("GateWay", functor);
    AddProperty(iGateWay);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::DNSPropertyChanged);
    iDNS = new PropertyString("DNS", functor);
    AddProperty(iDNS);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::DHCPPropertyChanged);
    iDHCP = new PropertyString("DHCP", functor);
    AddProperty(iDHCP);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::SsidPropertyChanged);
    iSsid = new PropertyString("Ssid", functor);
    AddProperty(iSsid);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::PassWordPropertyChanged);
    iPassWord = new PropertyString("PassWord", functor);
    AddProperty(iPassWord);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::EncrypTypePropertyChanged);
    iEncrypType = new PropertyString("EncrypType", functor);
    AddProperty(iEncrypType);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::ChannelPropertyChanged);
    iChannel = new PropertyString("Channel", functor);
    AddProperty(iChannel);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::UpnpTypePropertyChanged);
    iUpnpType = new PropertyString("UpnpType", functor);
    AddProperty(iUpnpType);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::StatusPropertyChanged);
    iStatus = new PropertyString("Status", functor);
    AddProperty(iStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::SampleFormatPropertyChanged);
    iSampleFormat = new PropertyString("SampleFormat", functor);
    AddProperty(iSampleFormat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::IpAddressPropertyChanged);
    iIpAddress = new PropertyString("IpAddress", functor);
    AddProperty(iIpAddress);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::ProtectPropertyChanged);
    iProtect = new PropertyString("Protect", functor);
    AddProperty(iProtect);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::ProtectPasswordPropertyChanged);
    iProtectPassword = new PropertyString("ProtectPassword", functor);
    AddProperty(iProtectPassword);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::ActiveStatusPropertyChanged);
    iActiveStatus = new PropertyString("ActiveStatus", functor);
    AddProperty(iActiveStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::TimePropertyChanged);
    iTime = new PropertyString("Time", functor);
    AddProperty(iTime);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1::VolumeControlPropertyChanged);
    iVolumeControl = new PropertyBool("VolumeControl", functor);
    AddProperty(iVolumeControl);
}

CpProxyAvOpenhomeOrgHardwareConfig1::~CpProxyAvOpenhomeOrgHardwareConfig1()
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncLogIn(const Brx& aServiceName, const Brx& aMessageIn, Brh& aMessageOut)
{
    SyncLogInAvOpenhomeOrgHardwareConfig1 sync(*this, aMessageOut);
    BeginLogIn(aServiceName, aMessageIn, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginLogIn(const Brx& aServiceName, const Brx& aMessageIn, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionLogIn, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionLogIn->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMessageIn));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionLogIn->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndLogIn(IAsync& aAsync, Brh& aMessageOut)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMessageOut);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncLogOut(const Brx& aServiceName)
{
    SyncLogOutAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginLogOut(aServiceName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginLogOut(const Brx& aServiceName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionLogOut, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionLogOut->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceName));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndLogOut(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncCancelLogIn(const Brx& aServiceName)
{
    SyncCancelLogInAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginCancelLogIn(aServiceName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginCancelLogIn(const Brx& aServiceName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCancelLogIn, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionCancelLogIn->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceName));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndCancelLogIn(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncIsAlive(TBool& aAlive)
{
    SyncIsAliveAvOpenhomeOrgHardwareConfig1 sync(*this, aAlive);
    BeginIsAlive(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginIsAlive(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIsAlive, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIsAlive->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdate, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionActive, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionActive->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aIsSubscribe));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aRealName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aEmail));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetActiveStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetActiveStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCheckUpdate, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionResetDisplay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetHardWareInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHardWareInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetRoomName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRoomName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aRoomName));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetVolumeControl, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetVolumeControl->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolumeControl, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeControl->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aVolumeControl));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetWaitingTime, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWaitingTime->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetWaitingTime, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWaitingTime->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aWaitingTime));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetOutChannel, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetOutChannel->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetOutChannel, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetOutChannel->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetUpnpType, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetUpnpType->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUpnpType));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpnpType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpnpType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDsdNativeStatus, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDsdNativeStatus->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aStatus));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSampleFormat));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDsdNativeStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDsdNativeStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetPasswordProtect, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPasswordProtect->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aProtect));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aProtectPassword));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPasswordProtect, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPasswordProtect->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetWirelessList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetWirelessList->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aInterFace));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWirelessList->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIpAddress, aFunctor);
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
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetNetWork, aFunctor);
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
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetNetInterface, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetNetInterface->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetHaltStatus(TBool& aHaltStatus)
{
    SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1 sync(*this, aHaltStatus);
    BeginGetHaltStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetHaltStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetHaltStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHaltStatus->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetHaltStatus(IAsync& aAsync, TBool& aHaltStatus)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetHaltStatus(TBool aHaltStatus)
{
    SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetHaltStatus(aHaltStatus, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetHaltStatus(TBool aHaltStatus, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetHaltStatus, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetHaltStatus->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aHaltStatus));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetHaltStatus(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetFilterMode(Brh& aFilterMode, Brh& aFilterModeList)
{
    SyncGetFilterModeAvOpenhomeOrgHardwareConfig1 sync(*this, aFilterMode, aFilterModeList);
    BeginGetFilterMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetFilterMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetFilterMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetFilterMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetFilterMode(IAsync& aAsync, Brh& aFilterMode, Brh& aFilterModeList)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aFilterMode);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aFilterModeList);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetFilterMode(const Brx& aFilterMode)
{
    SyncSetFilterModeAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetFilterMode(aFilterMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetFilterMode(const Brx& aFilterMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetFilterMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFilterMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFilterMode));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetFilterMode(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetSourceVisible(const Brx& aSourceName, TBool aVisible)
{
    SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetSourceVisible(aSourceName, aVisible, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetSourceVisible(const Brx& aSourceName, TBool aVisible, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSourceVisible, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceVisible->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSourceName));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aVisible));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetSourceVisible(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetSourceVisible(Brh& aVisibleInfo)
{
    SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1 sync(*this, aVisibleInfo);
    BeginGetSourceVisible(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetSourceVisible(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSourceVisible, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSourceVisible->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetSourceVisible(IAsync& aAsync, Brh& aVisibleInfo)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aVisibleInfo);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetLEDMode(const Brx& aLEDMode)
{
    SyncSetLEDModeAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetLEDMode(aLEDMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetLEDMode(const Brx& aLEDMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetLEDMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetLEDMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aLEDMode));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetLEDMode(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetLEDMode(Brh& aLEDMode, Brh& aLEDModeList)
{
    SyncGetLEDModeAvOpenhomeOrgHardwareConfig1 sync(*this, aLEDMode, aLEDModeList);
    BeginGetLEDMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetLEDMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetLEDMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetLEDMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetLEDMode(IAsync& aAsync, Brh& aLEDMode, Brh& aLEDModeList)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aLEDMode);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aLEDModeList);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetKeyMode(const Brx& aKeyName, const Brx& aKeyMode)
{
    SyncSetKeyModeAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetKeyMode(aKeyName, aKeyMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetKeyMode(const Brx& aKeyName, const Brx& aKeyMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetKeyMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetKeyMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aKeyName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aKeyMode));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetKeyMode(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetKeyMode(Brh& aSideKeyMode, Brh& aMiddleKeyMode, Brh& aKeyModeList)
{
    SyncGetKeyModeAvOpenhomeOrgHardwareConfig1 sync(*this, aSideKeyMode, aMiddleKeyMode, aKeyModeList);
    BeginGetKeyMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetKeyMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetKeyMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetKeyMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetKeyMode(IAsync& aAsync, Brh& aSideKeyMode, Brh& aMiddleKeyMode, Brh& aKeyModeList)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSideKeyMode);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMiddleKeyMode);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aKeyModeList);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetBrightness(const Brx& aBrightness)
{
    SyncSetBrightnessAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetBrightness(aBrightness, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetBrightness(const Brx& aBrightness, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBrightness, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBrightness->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aBrightness));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetBrightness(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetBrightness(Brh& aBrightness, Brh& aList)
{
    SyncGetBrightnessAvOpenhomeOrgHardwareConfig1 sync(*this, aBrightness, aList);
    BeginGetBrightness(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetBrightness(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetBrightness, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetBrightness->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetBrightness(IAsync& aAsync, Brh& aBrightness, Brh& aList)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aBrightness);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aList);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetDisplayMode(const Brx& aDisplayMode)
{
    SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetDisplayMode(aDisplayMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetDisplayMode(const Brx& aDisplayMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDisplayMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDisplayMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDisplayMode));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetDisplayMode(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetDisplayMode(Brh& aDisplayMode, Brh& aDisplayModeList)
{
    SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1 sync(*this, aDisplayMode, aDisplayModeList);
    BeginGetDisplayMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetDisplayMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDisplayMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDisplayMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetDisplayMode(IAsync& aAsync, Brh& aDisplayMode, Brh& aDisplayModeList)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDisplayMode);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDisplayModeList);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetDACPhase(TUint& aPhase)
{
    SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1 sync(*this, aPhase);
    BeginGetDACPhase(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetDACPhase(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDACPhase, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACPhase->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetDACPhase(IAsync& aAsync, TUint& aPhase)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetDACPhase(TUint aPhase)
{
    SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetDACPhase(aPhase, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetDACPhase(TUint aPhase, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDACPhase, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACPhase->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aPhase));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetDACPhase(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncGetDACBalance(TUint& aBalance)
{
    SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1 sync(*this, aBalance);
    BeginGetDACBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginGetDACBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDACBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDACBalance->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndGetDACBalance(IAsync& aAsync, TUint& aBalance)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetDACBalance(TUint aBalance)
{
    SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetDACBalance(aBalance, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetDACBalance(TUint aBalance, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDACBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDACBalance->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aBalance));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetDACBalance(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetEnableResampler(TBool aEnableResampler)
{
    SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetEnableResampler(aEnableResampler, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetEnableResampler(TBool aEnableResampler, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetEnableResampler, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetEnableResampler->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnableResampler));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetEnableResampler(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetEnableSpeaker(TBool aEnableSpeaker)
{
    SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetEnableSpeaker(aEnableSpeaker, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetEnableSpeaker(TBool aEnableSpeaker, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetEnableSpeaker, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetEnableSpeaker->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnableSpeaker));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetEnableSpeaker(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SyncSetEnableEqualizer(TBool aEnableEqualizer)
{
    SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1 sync(*this);
    BeginSetEnableEqualizer(aEnableEqualizer, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::BeginSetEnableEqualizer(TBool aEnableEqualizer, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetEnableEqualizer, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetEnableEqualizer->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnableEqualizer));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::EndSetEnableEqualizer(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyMessageOutChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMessageOutChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyAliveChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAliveChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCurrentActionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyRestartChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRestartChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyNumberChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iNumberChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyRoomNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRoomNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyInterFaceChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iInterFaceChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyNetMaskChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iNetMaskChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyGateWayChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iGateWayChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyDNSChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDNSChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyDHCPChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDHCPChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertySsidChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSsidChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyPassWordChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPassWordChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyEncrypTypeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iEncrypTypeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyChannelChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyUpnpTypeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpnpTypeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertySampleFormatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSampleFormatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyIpAddressChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIpAddressChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyProtectChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProtectChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyProtectPasswordChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProtectPasswordChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyActiveStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iActiveStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyTimeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTimeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyVolumeControlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeControlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyMessageOut(Brhz& aMessageOut) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMessageOut.Set(iMessageOut->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyRestart(TBool& aRestart) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRestart = iRestart->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyNumber(TUint& aNumber) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aNumber = iNumber->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyRoomName(Brhz& aRoomName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRoomName.Set(iRoomName->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyInterFace(Brhz& aInterFace) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aInterFace.Set(iInterFace->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyNetMask(Brhz& aNetMask) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aNetMask.Set(iNetMask->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyGateWay(Brhz& aGateWay) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aGateWay.Set(iGateWay->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyDNS(Brhz& aDNS) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDNS.Set(iDNS->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyDHCP(Brhz& aDHCP) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDHCP.Set(iDHCP->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertySsid(Brhz& aSsid) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSsid.Set(iSsid->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyPassWord(Brhz& aPassWord) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPassWord.Set(iPassWord->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyEncrypType(Brhz& aEncrypType) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aEncrypType.Set(iEncrypType->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyChannel(Brhz& aChannel) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aChannel.Set(iChannel->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyUpnpType(Brhz& aUpnpType) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpnpType.Set(iUpnpType->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyStatus(Brhz& aStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStatus.Set(iStatus->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertySampleFormat(Brhz& aSampleFormat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSampleFormat.Set(iSampleFormat->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyIpAddress(Brhz& aIpAddress) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIpAddress.Set(iIpAddress->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyProtect(Brhz& aProtect) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProtect.Set(iProtect->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyProtectPassword(Brhz& aProtectPassword) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProtectPassword.Set(iProtectPassword->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyActiveStatus(Brhz& aActiveStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aActiveStatus.Set(iActiveStatus->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyTime(Brhz& aTime) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTime.Set(iTime->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1::PropertyVolumeControl(TBool& aVolumeControl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeControl = iVolumeControl->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::MessageOutPropertyChanged()
{
    ReportEvent(iMessageOutChanged);
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


void CpProxyAvOpenhomeOrgHardwareConfig1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgHardwareConfig1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgHardwareConfig1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgHardwareConfig1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgHardwareConfig1::Version() const
{
  return iCpProxy.Version();
}


