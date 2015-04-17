#include "CpAvOpenhomeOrgHardwareConfig1.h"
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

class CpProxyAvOpenhomeOrgHardwareConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgHardwareConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgHardwareConfig1C();
    //CpProxyAvOpenhomeOrgHardwareConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgHardwareConfig1*>(iProxy); }

    void SyncIsAlive(TBool& aAlive);
    void BeginIsAlive(FunctorAsync& aFunctor);
    void EndIsAlive(IAsync& aAsync, TBool& aAlive);

    void SyncUpdate();
    void BeginUpdate(FunctorAsync& aFunctor);
    void EndUpdate(IAsync& aAsync);

    void SyncActive(const Brx& aCountry, const Brx& aRealName, const Brx& aEmail);
    void BeginActive(const Brx& aCountry, const Brx& aRealName, const Brx& aEmail, FunctorAsync& aFunctor);
    void EndActive(IAsync& aAsync);

    void SyncGetActiveStatus(Brh& aActiveStatus);
    void BeginGetActiveStatus(FunctorAsync& aFunctor);
    void EndGetActiveStatus(IAsync& aAsync, Brh& aActiveStatus);

    void SyncCheckUpdate();
    void BeginCheckUpdate(FunctorAsync& aFunctor);
    void EndCheckUpdate(IAsync& aAsync);

    void SyncGetHardWareInfo(Brh& aHardWareInfo);
    void BeginGetHardWareInfo(FunctorAsync& aFunctor);
    void EndGetHardWareInfo(IAsync& aAsync, Brh& aHardWareInfo);

    void SyncSetRoomName(const Brx& aRoomName);
    void BeginSetRoomName(const Brx& aRoomName, FunctorAsync& aFunctor);
    void EndSetRoomName(IAsync& aAsync);

    void SyncGetVolumeControl(TBool& aVolumeControl);
    void BeginGetVolumeControl(FunctorAsync& aFunctor);
    void EndGetVolumeControl(IAsync& aAsync, TBool& aVolumeControl);

    void SyncSetVolumeControl(TBool aVolumeControl);
    void BeginSetVolumeControl(TBool aVolumeControl, FunctorAsync& aFunctor);
    void EndSetVolumeControl(IAsync& aAsync);

    void SyncGetWaitingTime(Brh& aWaitingTime);
    void BeginGetWaitingTime(FunctorAsync& aFunctor);
    void EndGetWaitingTime(IAsync& aAsync, Brh& aWaitingTime);

    void SyncSetWaitingTime(const Brx& aWaitingTime);
    void BeginSetWaitingTime(const Brx& aWaitingTime, FunctorAsync& aFunctor);
    void EndSetWaitingTime(IAsync& aAsync);

    void SyncGetOutChannel(TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel);
    void BeginGetOutChannel(FunctorAsync& aFunctor);
    void EndGetOutChannel(IAsync& aAsync, TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel);

    void SyncSetOutChannel(const Brx& aChannel);
    void BeginSetOutChannel(const Brx& aChannel, FunctorAsync& aFunctor);
    void EndSetOutChannel(IAsync& aAsync);

    void SyncSetUpnpType(const Brx& aUpnpType);
    void BeginSetUpnpType(const Brx& aUpnpType, FunctorAsync& aFunctor);
    void EndSetUpnpType(IAsync& aAsync);

    void SyncGetUpnpType(Brh& aUpnpType);
    void BeginGetUpnpType(FunctorAsync& aFunctor);
    void EndGetUpnpType(IAsync& aAsync, Brh& aUpnpType);

    void SyncSetDsdNativeStatus(const Brx& aStatus, const Brx& aSampleFormat);
    void BeginSetDsdNativeStatus(const Brx& aStatus, const Brx& aSampleFormat, FunctorAsync& aFunctor);
    void EndSetDsdNativeStatus(IAsync& aAsync);

    void SyncGetDsdNativeStatus(Brh& aStatus, Brh& aSampleFormat);
    void BeginGetDsdNativeStatus(FunctorAsync& aFunctor);
    void EndGetDsdNativeStatus(IAsync& aAsync, Brh& aStatus, Brh& aSampleFormat);

    void SyncSetPasswordProtect(const Brx& aProtect, const Brx& aProtectPassword);
    void BeginSetPasswordProtect(const Brx& aProtect, const Brx& aProtectPassword, FunctorAsync& aFunctor);
    void EndSetPasswordProtect(IAsync& aAsync);

    void SyncGetPasswordProtect(Brh& aProtect, Brh& aProtectPassword);
    void BeginGetPasswordProtect(FunctorAsync& aFunctor);
    void EndGetPasswordProtect(IAsync& aAsync, Brh& aProtect, Brh& aProtectPassword);

    void SyncGetUpdateInfo(Brh& aVersion, Brh& aProgress);
    void BeginGetUpdateInfo(FunctorAsync& aFunctor);
    void EndGetUpdateInfo(IAsync& aAsync, Brh& aVersion, Brh& aProgress);

    void SyncGetWirelessList(const Brx& aInterFace, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList);
    void BeginGetWirelessList(const Brx& aInterFace, FunctorAsync& aFunctor);
    void EndGetWirelessList(IAsync& aAsync, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList);

    void SyncGetIpAddress(const Brx& aInterFace, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP);
    void BeginGetIpAddress(const Brx& aInterFace, FunctorAsync& aFunctor);
    void EndGetIpAddress(IAsync& aAsync, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP);

    void SyncSetNetWork(const Brx& aInterFace, const Brx& aIpAddress, const Brx& aNetMask, const Brx& aGateWay, const Brx& aDNS, const Brx& aSsid, const Brx& aPassWord, const Brx& aEncrypType);
    void BeginSetNetWork(const Brx& aInterFace, const Brx& aIpAddress, const Brx& aNetMask, const Brx& aGateWay, const Brx& aDNS, const Brx& aSsid, const Brx& aPassWord, const Brx& aEncrypType, FunctorAsync& aFunctor);
    void EndSetNetWork(IAsync& aAsync);

    void SyncGetNetInterface(TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList);
    void BeginGetNetInterface(FunctorAsync& aFunctor);
    void EndGetNetInterface(IAsync& aAsync, TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList);

    void SetPropertyAliveChanged(Functor& aFunctor);
    void SetPropertyCurrentActionChanged(Functor& aFunctor);
    void SetPropertyRestartChanged(Functor& aFunctor);
    void SetPropertyNumberChanged(Functor& aFunctor);
    void SetPropertyRoomNameChanged(Functor& aFunctor);
    void SetPropertyInterFaceChanged(Functor& aFunctor);
    void SetPropertyNetMaskChanged(Functor& aFunctor);
    void SetPropertyGateWayChanged(Functor& aFunctor);
    void SetPropertyDNSChanged(Functor& aFunctor);
    void SetPropertyDHCPChanged(Functor& aFunctor);
    void SetPropertySsidChanged(Functor& aFunctor);
    void SetPropertyPassWordChanged(Functor& aFunctor);
    void SetPropertyEncrypTypeChanged(Functor& aFunctor);
    void SetPropertyChannelChanged(Functor& aFunctor);
    void SetPropertyUpnpTypeChanged(Functor& aFunctor);
    void SetPropertyStatusChanged(Functor& aFunctor);
    void SetPropertySampleFormatChanged(Functor& aFunctor);
    void SetPropertyIpAddressChanged(Functor& aFunctor);
    void SetPropertyProtectChanged(Functor& aFunctor);
    void SetPropertyProtectPasswordChanged(Functor& aFunctor);
    void SetPropertyTimeChanged(Functor& aFunctor);
    void SetPropertyVolumeControlChanged(Functor& aFunctor);

    void PropertyAlive(TBool& aAlive) const;
    void PropertyCurrentAction(TUint& aCurrentAction) const;
    void PropertyRestart(TBool& aRestart) const;
    void PropertyNumber(TUint& aNumber) const;
    void PropertyRoomName(Brhz& aRoomName) const;
    void PropertyInterFace(Brhz& aInterFace) const;
    void PropertyNetMask(Brhz& aNetMask) const;
    void PropertyGateWay(Brhz& aGateWay) const;
    void PropertyDNS(Brhz& aDNS) const;
    void PropertyDHCP(Brhz& aDHCP) const;
    void PropertySsid(Brhz& aSsid) const;
    void PropertyPassWord(Brhz& aPassWord) const;
    void PropertyEncrypType(Brhz& aEncrypType) const;
    void PropertyChannel(Brhz& aChannel) const;
    void PropertyUpnpType(Brhz& aUpnpType) const;
    void PropertyStatus(Brhz& aStatus) const;
    void PropertySampleFormat(Brhz& aSampleFormat) const;
    void PropertyIpAddress(Brhz& aIpAddress) const;
    void PropertyProtect(Brhz& aProtect) const;
    void PropertyProtectPassword(Brhz& aProtectPassword) const;
    void PropertyTime(Brhz& aTime) const;
    void PropertyVolumeControl(TBool& aVolumeControl) const;
private:
    void AlivePropertyChanged();
    void CurrentActionPropertyChanged();
    void RestartPropertyChanged();
    void NumberPropertyChanged();
    void RoomNamePropertyChanged();
    void InterFacePropertyChanged();
    void NetMaskPropertyChanged();
    void GateWayPropertyChanged();
    void DNSPropertyChanged();
    void DHCPPropertyChanged();
    void SsidPropertyChanged();
    void PassWordPropertyChanged();
    void EncrypTypePropertyChanged();
    void ChannelPropertyChanged();
    void UpnpTypePropertyChanged();
    void StatusPropertyChanged();
    void SampleFormatPropertyChanged();
    void IpAddressPropertyChanged();
    void ProtectPropertyChanged();
    void ProtectPasswordPropertyChanged();
    void TimePropertyChanged();
    void VolumeControlPropertyChanged();
private:
    Mutex iLock;
    Action* iActionIsAlive;
    Action* iActionUpdate;
    Action* iActionActive;
    Action* iActionGetActiveStatus;
    Action* iActionCheckUpdate;
    Action* iActionGetHardWareInfo;
    Action* iActionSetRoomName;
    Action* iActionGetVolumeControl;
    Action* iActionSetVolumeControl;
    Action* iActionGetWaitingTime;
    Action* iActionSetWaitingTime;
    Action* iActionGetOutChannel;
    Action* iActionSetOutChannel;
    Action* iActionSetUpnpType;
    Action* iActionGetUpnpType;
    Action* iActionSetDsdNativeStatus;
    Action* iActionGetDsdNativeStatus;
    Action* iActionSetPasswordProtect;
    Action* iActionGetPasswordProtect;
    Action* iActionGetUpdateInfo;
    Action* iActionGetWirelessList;
    Action* iActionGetIpAddress;
    Action* iActionSetNetWork;
    Action* iActionGetNetInterface;
    PropertyBool* iAlive;
    PropertyUint* iCurrentAction;
    PropertyBool* iRestart;
    PropertyUint* iNumber;
    PropertyString* iRoomName;
    PropertyString* iInterFace;
    PropertyString* iNetMask;
    PropertyString* iGateWay;
    PropertyString* iDNS;
    PropertyString* iDHCP;
    PropertyString* iSsid;
    PropertyString* iPassWord;
    PropertyString* iEncrypType;
    PropertyString* iChannel;
    PropertyString* iUpnpType;
    PropertyString* iStatus;
    PropertyString* iSampleFormat;
    PropertyString* iIpAddress;
    PropertyString* iProtect;
    PropertyString* iProtectPassword;
    PropertyString* iTime;
    PropertyBool* iVolumeControl;
    Functor iAliveChanged;
    Functor iCurrentActionChanged;
    Functor iRestartChanged;
    Functor iNumberChanged;
    Functor iRoomNameChanged;
    Functor iInterFaceChanged;
    Functor iNetMaskChanged;
    Functor iGateWayChanged;
    Functor iDNSChanged;
    Functor iDHCPChanged;
    Functor iSsidChanged;
    Functor iPassWordChanged;
    Functor iEncrypTypeChanged;
    Functor iChannelChanged;
    Functor iUpnpTypeChanged;
    Functor iStatusChanged;
    Functor iSampleFormatChanged;
    Functor iIpAddressChanged;
    Functor iProtectChanged;
    Functor iProtectPasswordChanged;
    Functor iTimeChanged;
    Functor iVolumeControlChanged;
};


class SyncIsAliveAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncIsAliveAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, TBool& aAlive);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIsAliveAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    TBool& iAlive;
};

SyncIsAliveAvOpenhomeOrgHardwareConfig1C::SyncIsAliveAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, TBool& aAlive)
    : iService(aProxy)
    , iAlive(aAlive)
{
}

void SyncIsAliveAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndIsAlive(aAsync, iAlive);
}


class SyncUpdateAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncUpdateAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
};

SyncUpdateAvOpenhomeOrgHardwareConfig1C::SyncUpdateAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}


class SyncActiveAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncActiveAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncActiveAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
};

SyncActiveAvOpenhomeOrgHardwareConfig1C::SyncActiveAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncActiveAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndActive(aAsync);
}


class SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aActiveStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    Brh& iActiveStatus;
};

SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1C::SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aActiveStatus)
    : iService(aProxy)
    , iActiveStatus(aActiveStatus)
{
}

void SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetActiveStatus(aAsync, iActiveStatus);
}


class SyncCheckUpdateAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncCheckUpdateAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCheckUpdateAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
};

SyncCheckUpdateAvOpenhomeOrgHardwareConfig1C::SyncCheckUpdateAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncCheckUpdateAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckUpdate(aAsync);
}


class SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aHardWareInfo);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    Brh& iHardWareInfo;
};

SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1C::SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aHardWareInfo)
    : iService(aProxy)
    , iHardWareInfo(aHardWareInfo)
{
}

void SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetHardWareInfo(aAsync, iHardWareInfo);
}


class SyncSetRoomNameAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncSetRoomNameAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRoomNameAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
};

SyncSetRoomNameAvOpenhomeOrgHardwareConfig1C::SyncSetRoomNameAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetRoomNameAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRoomName(aAsync);
}


class SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, TBool& aVolumeControl);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    TBool& iVolumeControl;
};

SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1C::SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, TBool& aVolumeControl)
    : iService(aProxy)
    , iVolumeControl(aVolumeControl)
{
}

void SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetVolumeControl(aAsync, iVolumeControl);
}


class SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
};

SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1C::SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeControl(aAsync);
}


class SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aWaitingTime);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    Brh& iWaitingTime;
};

SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1C::SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aWaitingTime)
    : iService(aProxy)
    , iWaitingTime(aWaitingTime)
{
}

void SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWaitingTime(aAsync, iWaitingTime);
}


class SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
};

SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1C::SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetWaitingTime(aAsync);
}


class SyncGetOutChannelAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetOutChannelAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetOutChannelAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    TUint& iChannelNum;
    Brh& iCurrentChannel;
    Brh& iOutChannel;
};

SyncGetOutChannelAvOpenhomeOrgHardwareConfig1C::SyncGetOutChannelAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel)
    : iService(aProxy)
    , iChannelNum(aChannelNum)
    , iCurrentChannel(aCurrentChannel)
    , iOutChannel(aOutChannel)
{
}

void SyncGetOutChannelAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetOutChannel(aAsync, iChannelNum, iCurrentChannel, iOutChannel);
}


class SyncSetOutChannelAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncSetOutChannelAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetOutChannelAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
};

SyncSetOutChannelAvOpenhomeOrgHardwareConfig1C::SyncSetOutChannelAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetOutChannelAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetOutChannel(aAsync);
}


class SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
};

SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1C::SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetUpnpType(aAsync);
}


class SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aUpnpType);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    Brh& iUpnpType;
};

SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1C::SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aUpnpType)
    : iService(aProxy)
    , iUpnpType(aUpnpType)
{
}

void SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpnpType(aAsync, iUpnpType);
}


class SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
};

SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C::SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDsdNativeStatus(aAsync);
}


class SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aStatus, Brh& aSampleFormat);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    Brh& iStatus;
    Brh& iSampleFormat;
};

SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C::SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aStatus, Brh& aSampleFormat)
    : iService(aProxy)
    , iStatus(aStatus)
    , iSampleFormat(aSampleFormat)
{
}

void SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDsdNativeStatus(aAsync, iStatus, iSampleFormat);
}


class SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
};

SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1C::SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPasswordProtect(aAsync);
}


class SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aProtect, Brh& aProtectPassword);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    Brh& iProtect;
    Brh& iProtectPassword;
};

SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1C::SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aProtect, Brh& aProtectPassword)
    : iService(aProxy)
    , iProtect(aProtect)
    , iProtectPassword(aProtectPassword)
{
}

void SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPasswordProtect(aAsync, iProtect, iProtectPassword);
}


class SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aVersion, Brh& aProgress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    Brh& iVersion;
    Brh& iProgress;
};

SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1C::SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aVersion, Brh& aProgress)
    : iService(aProxy)
    , iVersion(aVersion)
    , iProgress(aProgress)
{
}

void SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateInfo(aAsync, iVersion, iProgress);
}


class SyncGetWirelessListAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetWirelessListAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetWirelessListAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    TUint& iNumber;
    Brh& iCurrentUse;
    Brh& iWirelessList;
};

SyncGetWirelessListAvOpenhomeOrgHardwareConfig1C::SyncGetWirelessListAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList)
    : iService(aProxy)
    , iNumber(aNumber)
    , iCurrentUse(aCurrentUse)
    , iWirelessList(aWirelessList)
{
}

void SyncGetWirelessListAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetWirelessList(aAsync, iNumber, iCurrentUse, iWirelessList);
}


class SyncGetIpAddressAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetIpAddressAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIpAddressAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    Brh& iIpAddress;
    Brh& iNetMask;
    Brh& iGateWay;
    Brh& iDNS;
    Brh& iDHCP;
};

SyncGetIpAddressAvOpenhomeOrgHardwareConfig1C::SyncGetIpAddressAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP)
    : iService(aProxy)
    , iIpAddress(aIpAddress)
    , iNetMask(aNetMask)
    , iGateWay(aGateWay)
    , iDNS(aDNS)
    , iDHCP(aDHCP)
{
}

void SyncGetIpAddressAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIpAddress(aAsync, iIpAddress, iNetMask, iGateWay, iDNS, iDHCP);
}


class SyncSetNetWorkAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncSetNetWorkAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetNetWorkAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
};

SyncSetNetWorkAvOpenhomeOrgHardwareConfig1C::SyncSetNetWorkAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetNetWorkAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetNetWork(aAsync);
}


class SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1C : public SyncProxyAction
{
public:
    SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1C() {};
private:
    CpProxyAvOpenhomeOrgHardwareConfig1C& iService;
    TUint& iInterfaceNum;
    Brh& iCurrentUse;
    Brh& iInterfaceList;
};

SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1C::SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1C(CpProxyAvOpenhomeOrgHardwareConfig1C& aProxy, TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList)
    : iService(aProxy)
    , iInterfaceNum(aInterfaceNum)
    , iCurrentUse(aCurrentUse)
    , iInterfaceList(aInterfaceList)
{
}

void SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetNetInterface(aAsync, iInterfaceNum, iCurrentUse, iInterfaceList);
}

CpProxyAvOpenhomeOrgHardwareConfig1C::CpProxyAvOpenhomeOrgHardwareConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "HardwareConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionIsAlive = new Action("IsAlive");
    param = new OpenHome::Net::ParameterBool("Alive");
    iActionIsAlive->AddOutputParameter(param);

    iActionUpdate = new Action("Update");

    iActionActive = new Action("Active");
    param = new OpenHome::Net::ParameterString("Country");
    iActionActive->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("RealName");
    iActionActive->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Email");
    iActionActive->AddInputParameter(param);

    iActionGetActiveStatus = new Action("GetActiveStatus");
    param = new OpenHome::Net::ParameterString("ActiveStatus");
    iActionGetActiveStatus->AddOutputParameter(param);

    iActionCheckUpdate = new Action("CheckUpdate");

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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::AlivePropertyChanged);
    iAlive = new PropertyBool(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "Alive", functor);
    AddProperty(iAlive);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::CurrentActionPropertyChanged);
    iCurrentAction = new PropertyUint(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "CurrentAction", functor);
    AddProperty(iCurrentAction);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::RestartPropertyChanged);
    iRestart = new PropertyBool(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "Restart", functor);
    AddProperty(iRestart);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::NumberPropertyChanged);
    iNumber = new PropertyUint(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "Number", functor);
    AddProperty(iNumber);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::RoomNamePropertyChanged);
    iRoomName = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "RoomName", functor);
    AddProperty(iRoomName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::InterFacePropertyChanged);
    iInterFace = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "InterFace", functor);
    AddProperty(iInterFace);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::NetMaskPropertyChanged);
    iNetMask = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "NetMask", functor);
    AddProperty(iNetMask);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::GateWayPropertyChanged);
    iGateWay = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "GateWay", functor);
    AddProperty(iGateWay);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::DNSPropertyChanged);
    iDNS = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "DNS", functor);
    AddProperty(iDNS);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::DHCPPropertyChanged);
    iDHCP = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "DHCP", functor);
    AddProperty(iDHCP);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::SsidPropertyChanged);
    iSsid = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "Ssid", functor);
    AddProperty(iSsid);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::PassWordPropertyChanged);
    iPassWord = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "PassWord", functor);
    AddProperty(iPassWord);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::EncrypTypePropertyChanged);
    iEncrypType = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "EncrypType", functor);
    AddProperty(iEncrypType);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::ChannelPropertyChanged);
    iChannel = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "Channel", functor);
    AddProperty(iChannel);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::UpnpTypePropertyChanged);
    iUpnpType = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "UpnpType", functor);
    AddProperty(iUpnpType);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::StatusPropertyChanged);
    iStatus = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "Status", functor);
    AddProperty(iStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::SampleFormatPropertyChanged);
    iSampleFormat = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "SampleFormat", functor);
    AddProperty(iSampleFormat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::IpAddressPropertyChanged);
    iIpAddress = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "IpAddress", functor);
    AddProperty(iIpAddress);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::ProtectPropertyChanged);
    iProtect = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "Protect", functor);
    AddProperty(iProtect);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::ProtectPasswordPropertyChanged);
    iProtectPassword = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "ProtectPassword", functor);
    AddProperty(iProtectPassword);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::TimePropertyChanged);
    iTime = new PropertyString(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "Time", functor);
    AddProperty(iTime);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgHardwareConfig1C::VolumeControlPropertyChanged);
    iVolumeControl = new PropertyBool(reinterpret_cast<CpiDevice*>(aDevice)->GetCpStack().Env(), "VolumeControl", functor);
    AddProperty(iVolumeControl);
}

CpProxyAvOpenhomeOrgHardwareConfig1C::~CpProxyAvOpenhomeOrgHardwareConfig1C()
{
    DestroyService();
    delete iActionIsAlive;
    delete iActionUpdate;
    delete iActionActive;
    delete iActionGetActiveStatus;
    delete iActionCheckUpdate;
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncIsAlive(TBool& aAlive)
{
    SyncIsAliveAvOpenhomeOrgHardwareConfig1C sync(*this, aAlive);
    BeginIsAlive(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginIsAlive(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionIsAlive, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIsAlive->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndIsAlive(IAsync& aAsync, TBool& aAlive)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncUpdate()
{
    SyncUpdateAvOpenhomeOrgHardwareConfig1C sync(*this);
    BeginUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUpdate, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndUpdate(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncActive(const Brx& aCountry, const Brx& aRealName, const Brx& aEmail)
{
    SyncActiveAvOpenhomeOrgHardwareConfig1C sync(*this);
    BeginActive(aCountry, aRealName, aEmail, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginActive(const Brx& aCountry, const Brx& aRealName, const Brx& aEmail, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionActive, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionActive->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCountry));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aRealName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aEmail));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndActive(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetActiveStatus(Brh& aActiveStatus)
{
    SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1C sync(*this, aActiveStatus);
    BeginGetActiveStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetActiveStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetActiveStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetActiveStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetActiveStatus(IAsync& aAsync, Brh& aActiveStatus)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncCheckUpdate()
{
    SyncCheckUpdateAvOpenhomeOrgHardwareConfig1C sync(*this);
    BeginCheckUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginCheckUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionCheckUpdate, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndCheckUpdate(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetHardWareInfo(Brh& aHardWareInfo)
{
    SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1C sync(*this, aHardWareInfo);
    BeginGetHardWareInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetHardWareInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetHardWareInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetHardWareInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetHardWareInfo(IAsync& aAsync, Brh& aHardWareInfo)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncSetRoomName(const Brx& aRoomName)
{
    SyncSetRoomNameAvOpenhomeOrgHardwareConfig1C sync(*this);
    BeginSetRoomName(aRoomName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginSetRoomName(const Brx& aRoomName, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetRoomName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRoomName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aRoomName));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndSetRoomName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetVolumeControl(TBool& aVolumeControl)
{
    SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1C sync(*this, aVolumeControl);
    BeginGetVolumeControl(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetVolumeControl(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetVolumeControl, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetVolumeControl->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetVolumeControl(IAsync& aAsync, TBool& aVolumeControl)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncSetVolumeControl(TBool aVolumeControl)
{
    SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1C sync(*this);
    BeginSetVolumeControl(aVolumeControl, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginSetVolumeControl(TBool aVolumeControl, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetVolumeControl, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeControl->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aVolumeControl));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndSetVolumeControl(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetWaitingTime(Brh& aWaitingTime)
{
    SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1C sync(*this, aWaitingTime);
    BeginGetWaitingTime(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetWaitingTime(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetWaitingTime, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWaitingTime->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetWaitingTime(IAsync& aAsync, Brh& aWaitingTime)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncSetWaitingTime(const Brx& aWaitingTime)
{
    SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1C sync(*this);
    BeginSetWaitingTime(aWaitingTime, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginSetWaitingTime(const Brx& aWaitingTime, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetWaitingTime, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetWaitingTime->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aWaitingTime));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndSetWaitingTime(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetOutChannel(TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel)
{
    SyncGetOutChannelAvOpenhomeOrgHardwareConfig1C sync(*this, aChannelNum, aCurrentChannel, aOutChannel);
    BeginGetOutChannel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetOutChannel(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetOutChannel, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetOutChannel->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetOutChannel(IAsync& aAsync, TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncSetOutChannel(const Brx& aChannel)
{
    SyncSetOutChannelAvOpenhomeOrgHardwareConfig1C sync(*this);
    BeginSetOutChannel(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginSetOutChannel(const Brx& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetOutChannel, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetOutChannel->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndSetOutChannel(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncSetUpnpType(const Brx& aUpnpType)
{
    SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1C sync(*this);
    BeginSetUpnpType(aUpnpType, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginSetUpnpType(const Brx& aUpnpType, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetUpnpType, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetUpnpType->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUpnpType));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndSetUpnpType(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetUpnpType(Brh& aUpnpType)
{
    SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1C sync(*this, aUpnpType);
    BeginGetUpnpType(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetUpnpType(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetUpnpType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpnpType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetUpnpType(IAsync& aAsync, Brh& aUpnpType)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncSetDsdNativeStatus(const Brx& aStatus, const Brx& aSampleFormat)
{
    SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C sync(*this);
    BeginSetDsdNativeStatus(aStatus, aSampleFormat, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginSetDsdNativeStatus(const Brx& aStatus, const Brx& aSampleFormat, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetDsdNativeStatus, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDsdNativeStatus->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aStatus));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSampleFormat));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndSetDsdNativeStatus(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetDsdNativeStatus(Brh& aStatus, Brh& aSampleFormat)
{
    SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1C sync(*this, aStatus, aSampleFormat);
    BeginGetDsdNativeStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetDsdNativeStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDsdNativeStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDsdNativeStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetDsdNativeStatus(IAsync& aAsync, Brh& aStatus, Brh& aSampleFormat)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncSetPasswordProtect(const Brx& aProtect, const Brx& aProtectPassword)
{
    SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1C sync(*this);
    BeginSetPasswordProtect(aProtect, aProtectPassword, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginSetPasswordProtect(const Brx& aProtect, const Brx& aProtectPassword, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetPasswordProtect, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPasswordProtect->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aProtect));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aProtectPassword));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndSetPasswordProtect(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetPasswordProtect(Brh& aProtect, Brh& aProtectPassword)
{
    SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1C sync(*this, aProtect, aProtectPassword);
    BeginGetPasswordProtect(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetPasswordProtect(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetPasswordProtect, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPasswordProtect->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetPasswordProtect(IAsync& aAsync, Brh& aProtect, Brh& aProtectPassword)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetUpdateInfo(Brh& aVersion, Brh& aProgress)
{
    SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1C sync(*this, aVersion, aProgress);
    BeginGetUpdateInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetUpdateInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetUpdateInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetUpdateInfo(IAsync& aAsync, Brh& aVersion, Brh& aProgress)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetWirelessList(const Brx& aInterFace, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList)
{
    SyncGetWirelessListAvOpenhomeOrgHardwareConfig1C sync(*this, aNumber, aCurrentUse, aWirelessList);
    BeginGetWirelessList(aInterFace, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetWirelessList(const Brx& aInterFace, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetWirelessList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetWirelessList->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aInterFace));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetWirelessList->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetWirelessList(IAsync& aAsync, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetIpAddress(const Brx& aInterFace, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP)
{
    SyncGetIpAddressAvOpenhomeOrgHardwareConfig1C sync(*this, aIpAddress, aNetMask, aGateWay, aDNS, aDHCP);
    BeginGetIpAddress(aInterFace, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetIpAddress(const Brx& aInterFace, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetIpAddress, aFunctor);
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
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetIpAddress(IAsync& aAsync, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncSetNetWork(const Brx& aInterFace, const Brx& aIpAddress, const Brx& aNetMask, const Brx& aGateWay, const Brx& aDNS, const Brx& aSsid, const Brx& aPassWord, const Brx& aEncrypType)
{
    SyncSetNetWorkAvOpenhomeOrgHardwareConfig1C sync(*this);
    BeginSetNetWork(aInterFace, aIpAddress, aNetMask, aGateWay, aDNS, aSsid, aPassWord, aEncrypType, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginSetNetWork(const Brx& aInterFace, const Brx& aIpAddress, const Brx& aNetMask, const Brx& aGateWay, const Brx& aDNS, const Brx& aSsid, const Brx& aPassWord, const Brx& aEncrypType, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetNetWork, aFunctor);
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
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndSetNetWork(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SyncGetNetInterface(TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList)
{
    SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1C sync(*this, aInterfaceNum, aCurrentUse, aInterfaceList);
    BeginGetNetInterface(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::BeginGetNetInterface(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetNetInterface, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetNetInterface->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EndGetNetInterface(IAsync& aAsync, TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList)
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

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyAliveChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAliveChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyCurrentActionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCurrentActionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyRestartChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRestartChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyNumberChanged(Functor& aFunctor)
{
    iLock.Wait();
    iNumberChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyRoomNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRoomNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyInterFaceChanged(Functor& aFunctor)
{
    iLock.Wait();
    iInterFaceChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyNetMaskChanged(Functor& aFunctor)
{
    iLock.Wait();
    iNetMaskChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyGateWayChanged(Functor& aFunctor)
{
    iLock.Wait();
    iGateWayChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyDNSChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDNSChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyDHCPChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDHCPChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertySsidChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSsidChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyPassWordChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPassWordChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyEncrypTypeChanged(Functor& aFunctor)
{
    iLock.Wait();
    iEncrypTypeChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyChannelChanged(Functor& aFunctor)
{
    iLock.Wait();
    iChannelChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyUpnpTypeChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpnpTypeChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertySampleFormatChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSampleFormatChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyIpAddressChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIpAddressChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyProtectChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProtectChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyProtectPasswordChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProtectPasswordChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyTimeChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTimeChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SetPropertyVolumeControlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeControlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyAlive(TBool& aAlive) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aAlive = iAlive->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyCurrentAction(TUint& aCurrentAction) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aCurrentAction = iCurrentAction->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyRestart(TBool& aRestart) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aRestart = iRestart->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyNumber(TUint& aNumber) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aNumber = iNumber->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyRoomName(Brhz& aRoomName) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aRoomName.Set(iRoomName->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyInterFace(Brhz& aInterFace) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aInterFace.Set(iInterFace->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyNetMask(Brhz& aNetMask) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aNetMask.Set(iNetMask->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyGateWay(Brhz& aGateWay) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aGateWay.Set(iGateWay->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyDNS(Brhz& aDNS) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aDNS.Set(iDNS->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyDHCP(Brhz& aDHCP) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aDHCP.Set(iDHCP->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertySsid(Brhz& aSsid) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aSsid.Set(iSsid->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyPassWord(Brhz& aPassWord) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aPassWord.Set(iPassWord->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyEncrypType(Brhz& aEncrypType) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aEncrypType.Set(iEncrypType->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyChannel(Brhz& aChannel) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aChannel.Set(iChannel->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyUpnpType(Brhz& aUpnpType) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aUpnpType.Set(iUpnpType->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyStatus(Brhz& aStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aStatus.Set(iStatus->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertySampleFormat(Brhz& aSampleFormat) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aSampleFormat.Set(iSampleFormat->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyIpAddress(Brhz& aIpAddress) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aIpAddress.Set(iIpAddress->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyProtect(Brhz& aProtect) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aProtect.Set(iProtect->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyProtectPassword(Brhz& aProtectPassword) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aProtectPassword.Set(iProtectPassword->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyTime(Brhz& aTime) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aTime.Set(iTime->Value());
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PropertyVolumeControl(TBool& aVolumeControl) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aVolumeControl = iVolumeControl->Value();
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::AlivePropertyChanged()
{
    ReportEvent(iAliveChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::CurrentActionPropertyChanged()
{
    ReportEvent(iCurrentActionChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::RestartPropertyChanged()
{
    ReportEvent(iRestartChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::NumberPropertyChanged()
{
    ReportEvent(iNumberChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::RoomNamePropertyChanged()
{
    ReportEvent(iRoomNameChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::InterFacePropertyChanged()
{
    ReportEvent(iInterFaceChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::NetMaskPropertyChanged()
{
    ReportEvent(iNetMaskChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::GateWayPropertyChanged()
{
    ReportEvent(iGateWayChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::DNSPropertyChanged()
{
    ReportEvent(iDNSChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::DHCPPropertyChanged()
{
    ReportEvent(iDHCPChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SsidPropertyChanged()
{
    ReportEvent(iSsidChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::PassWordPropertyChanged()
{
    ReportEvent(iPassWordChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::EncrypTypePropertyChanged()
{
    ReportEvent(iEncrypTypeChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::ChannelPropertyChanged()
{
    ReportEvent(iChannelChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::UpnpTypePropertyChanged()
{
    ReportEvent(iUpnpTypeChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::StatusPropertyChanged()
{
    ReportEvent(iStatusChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::SampleFormatPropertyChanged()
{
    ReportEvent(iSampleFormatChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::IpAddressPropertyChanged()
{
    ReportEvent(iIpAddressChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::ProtectPropertyChanged()
{
    ReportEvent(iProtectChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::ProtectPasswordPropertyChanged()
{
    ReportEvent(iProtectPasswordChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::TimePropertyChanged()
{
    ReportEvent(iTimeChanged);
}

void CpProxyAvOpenhomeOrgHardwareConfig1C::VolumeControlPropertyChanged()
{
    ReportEvent(iVolumeControlChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgHardwareConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgHardwareConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncIsAlive(THandle aHandle, uint32_t* aAlive)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Alive;
    int32_t err = 0;
    try {
        proxyC->SyncIsAlive(Alive);
        *aAlive = Alive? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aAlive = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginIsAlive(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginIsAlive(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndIsAlive(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aAlive)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Alive;
    try {
        proxyC->EndIsAlive(*async, Alive);
        *aAlive = Alive? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncUpdate(THandle aHandle)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncUpdate();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginUpdate(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUpdate(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndUpdate(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndUpdate(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncActive(THandle aHandle, const char* aCountry, const char* aRealName, const char* aEmail)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aCountry(aCountry);
    Brh buf_aRealName(aRealName);
    Brh buf_aEmail(aEmail);
    int32_t err = 0;
    try {
        proxyC->SyncActive(buf_aCountry, buf_aRealName, buf_aEmail);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginActive(THandle aHandle, const char* aCountry, const char* aRealName, const char* aEmail, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aCountry(aCountry);
    Brh buf_aRealName(aRealName);
    Brh buf_aEmail(aEmail);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginActive(buf_aCountry, buf_aRealName, buf_aEmail, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndActive(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndActive(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetActiveStatus(THandle aHandle, char** aActiveStatus)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aActiveStatus;
    int32_t err = 0;
    try {
        proxyC->SyncGetActiveStatus(buf_aActiveStatus);
        *aActiveStatus = buf_aActiveStatus.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aActiveStatus = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetActiveStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetActiveStatus(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetActiveStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aActiveStatus)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aActiveStatus;
    *aActiveStatus = NULL;
    try {
        proxyC->EndGetActiveStatus(*async, buf_aActiveStatus);
        *aActiveStatus = buf_aActiveStatus.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncCheckUpdate(THandle aHandle)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncCheckUpdate();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginCheckUpdate(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginCheckUpdate(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndCheckUpdate(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndCheckUpdate(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetHardWareInfo(THandle aHandle, char** aHardWareInfo)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aHardWareInfo;
    int32_t err = 0;
    try {
        proxyC->SyncGetHardWareInfo(buf_aHardWareInfo);
        *aHardWareInfo = buf_aHardWareInfo.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aHardWareInfo = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetHardWareInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetHardWareInfo(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetHardWareInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aHardWareInfo)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aHardWareInfo;
    *aHardWareInfo = NULL;
    try {
        proxyC->EndGetHardWareInfo(*async, buf_aHardWareInfo);
        *aHardWareInfo = buf_aHardWareInfo.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetRoomName(THandle aHandle, const char* aRoomName)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aRoomName(aRoomName);
    int32_t err = 0;
    try {
        proxyC->SyncSetRoomName(buf_aRoomName);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetRoomName(THandle aHandle, const char* aRoomName, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aRoomName(aRoomName);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetRoomName(buf_aRoomName, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetRoomName(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetRoomName(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetVolumeControl(THandle aHandle, uint32_t* aVolumeControl)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool VolumeControl;
    int32_t err = 0;
    try {
        proxyC->SyncGetVolumeControl(VolumeControl);
        *aVolumeControl = VolumeControl? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aVolumeControl = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetVolumeControl(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetVolumeControl(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetVolumeControl(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVolumeControl)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool VolumeControl;
    try {
        proxyC->EndGetVolumeControl(*async, VolumeControl);
        *aVolumeControl = VolumeControl? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetVolumeControl(THandle aHandle, uint32_t aVolumeControl)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetVolumeControl((aVolumeControl==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetVolumeControl(THandle aHandle, uint32_t aVolumeControl, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetVolumeControl((aVolumeControl==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetVolumeControl(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetVolumeControl(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetWaitingTime(THandle aHandle, char** aWaitingTime)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aWaitingTime;
    int32_t err = 0;
    try {
        proxyC->SyncGetWaitingTime(buf_aWaitingTime);
        *aWaitingTime = buf_aWaitingTime.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aWaitingTime = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetWaitingTime(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetWaitingTime(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetWaitingTime(THandle aHandle, OhNetHandleAsync aAsync, char** aWaitingTime)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aWaitingTime;
    *aWaitingTime = NULL;
    try {
        proxyC->EndGetWaitingTime(*async, buf_aWaitingTime);
        *aWaitingTime = buf_aWaitingTime.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetWaitingTime(THandle aHandle, const char* aWaitingTime)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aWaitingTime(aWaitingTime);
    int32_t err = 0;
    try {
        proxyC->SyncSetWaitingTime(buf_aWaitingTime);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetWaitingTime(THandle aHandle, const char* aWaitingTime, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aWaitingTime(aWaitingTime);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetWaitingTime(buf_aWaitingTime, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetWaitingTime(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetWaitingTime(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetOutChannel(THandle aHandle, uint32_t* aChannelNum, char** aCurrentChannel, char** aOutChannel)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aCurrentChannel;
    Brh buf_aOutChannel;
    int32_t err = 0;
    try {
        proxyC->SyncGetOutChannel(*aChannelNum, buf_aCurrentChannel, buf_aOutChannel);
        *aCurrentChannel = buf_aCurrentChannel.Extract();
        *aOutChannel = buf_aOutChannel.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aChannelNum = 0;
        *aCurrentChannel = NULL;
        *aOutChannel = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetOutChannel(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetOutChannel(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetOutChannel(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aChannelNum, char** aCurrentChannel, char** aOutChannel)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aCurrentChannel;
    *aCurrentChannel = NULL;
    Brh buf_aOutChannel;
    *aOutChannel = NULL;
    try {
        proxyC->EndGetOutChannel(*async, *aChannelNum, buf_aCurrentChannel, buf_aOutChannel);
        *aCurrentChannel = buf_aCurrentChannel.Extract();
        *aOutChannel = buf_aOutChannel.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetOutChannel(THandle aHandle, const char* aChannel)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    int32_t err = 0;
    try {
        proxyC->SyncSetOutChannel(buf_aChannel);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetOutChannel(THandle aHandle, const char* aChannel, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetOutChannel(buf_aChannel, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetOutChannel(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetOutChannel(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetUpnpType(THandle aHandle, const char* aUpnpType)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUpnpType(aUpnpType);
    int32_t err = 0;
    try {
        proxyC->SyncSetUpnpType(buf_aUpnpType);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetUpnpType(THandle aHandle, const char* aUpnpType, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUpnpType(aUpnpType);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetUpnpType(buf_aUpnpType, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetUpnpType(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetUpnpType(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetUpnpType(THandle aHandle, char** aUpnpType)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUpnpType;
    int32_t err = 0;
    try {
        proxyC->SyncGetUpnpType(buf_aUpnpType);
        *aUpnpType = buf_aUpnpType.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aUpnpType = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetUpnpType(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetUpnpType(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetUpnpType(THandle aHandle, OhNetHandleAsync aAsync, char** aUpnpType)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aUpnpType;
    *aUpnpType = NULL;
    try {
        proxyC->EndGetUpnpType(*async, buf_aUpnpType);
        *aUpnpType = buf_aUpnpType.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetDsdNativeStatus(THandle aHandle, const char* aStatus, const char* aSampleFormat)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aStatus(aStatus);
    Brh buf_aSampleFormat(aSampleFormat);
    int32_t err = 0;
    try {
        proxyC->SyncSetDsdNativeStatus(buf_aStatus, buf_aSampleFormat);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetDsdNativeStatus(THandle aHandle, const char* aStatus, const char* aSampleFormat, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aStatus(aStatus);
    Brh buf_aSampleFormat(aSampleFormat);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetDsdNativeStatus(buf_aStatus, buf_aSampleFormat, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetDsdNativeStatus(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetDsdNativeStatus(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetDsdNativeStatus(THandle aHandle, char** aStatus, char** aSampleFormat)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aStatus;
    Brh buf_aSampleFormat;
    int32_t err = 0;
    try {
        proxyC->SyncGetDsdNativeStatus(buf_aStatus, buf_aSampleFormat);
        *aStatus = buf_aStatus.Extract();
        *aSampleFormat = buf_aSampleFormat.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aStatus = NULL;
        *aSampleFormat = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetDsdNativeStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDsdNativeStatus(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetDsdNativeStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aStatus, char** aSampleFormat)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aStatus;
    *aStatus = NULL;
    Brh buf_aSampleFormat;
    *aSampleFormat = NULL;
    try {
        proxyC->EndGetDsdNativeStatus(*async, buf_aStatus, buf_aSampleFormat);
        *aStatus = buf_aStatus.Extract();
        *aSampleFormat = buf_aSampleFormat.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetPasswordProtect(THandle aHandle, const char* aProtect, const char* aProtectPassword)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aProtect(aProtect);
    Brh buf_aProtectPassword(aProtectPassword);
    int32_t err = 0;
    try {
        proxyC->SyncSetPasswordProtect(buf_aProtect, buf_aProtectPassword);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetPasswordProtect(THandle aHandle, const char* aProtect, const char* aProtectPassword, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aProtect(aProtect);
    Brh buf_aProtectPassword(aProtectPassword);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetPasswordProtect(buf_aProtect, buf_aProtectPassword, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetPasswordProtect(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetPasswordProtect(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetPasswordProtect(THandle aHandle, char** aProtect, char** aProtectPassword)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aProtect;
    Brh buf_aProtectPassword;
    int32_t err = 0;
    try {
        proxyC->SyncGetPasswordProtect(buf_aProtect, buf_aProtectPassword);
        *aProtect = buf_aProtect.Extract();
        *aProtectPassword = buf_aProtectPassword.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aProtect = NULL;
        *aProtectPassword = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetPasswordProtect(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetPasswordProtect(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetPasswordProtect(THandle aHandle, OhNetHandleAsync aAsync, char** aProtect, char** aProtectPassword)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aProtect;
    *aProtect = NULL;
    Brh buf_aProtectPassword;
    *aProtectPassword = NULL;
    try {
        proxyC->EndGetPasswordProtect(*async, buf_aProtect, buf_aProtectPassword);
        *aProtect = buf_aProtect.Extract();
        *aProtectPassword = buf_aProtectPassword.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetUpdateInfo(THandle aHandle, char** aVersion, char** aProgress)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aVersion;
    Brh buf_aProgress;
    int32_t err = 0;
    try {
        proxyC->SyncGetUpdateInfo(buf_aVersion, buf_aProgress);
        *aVersion = buf_aVersion.Extract();
        *aProgress = buf_aProgress.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aVersion = NULL;
        *aProgress = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetUpdateInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetUpdateInfo(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetUpdateInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aVersion, char** aProgress)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aVersion;
    *aVersion = NULL;
    Brh buf_aProgress;
    *aProgress = NULL;
    try {
        proxyC->EndGetUpdateInfo(*async, buf_aVersion, buf_aProgress);
        *aVersion = buf_aVersion.Extract();
        *aProgress = buf_aProgress.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetWirelessList(THandle aHandle, const char* aInterFace, uint32_t* aNumber, char** aCurrentUse, char** aWirelessList)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aInterFace(aInterFace);
    Brh buf_aCurrentUse;
    Brh buf_aWirelessList;
    int32_t err = 0;
    try {
        proxyC->SyncGetWirelessList(buf_aInterFace, *aNumber, buf_aCurrentUse, buf_aWirelessList);
        *aCurrentUse = buf_aCurrentUse.Extract();
        *aWirelessList = buf_aWirelessList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aNumber = 0;
        *aCurrentUse = NULL;
        *aWirelessList = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetWirelessList(THandle aHandle, const char* aInterFace, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aInterFace(aInterFace);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetWirelessList(buf_aInterFace, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetWirelessList(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aNumber, char** aCurrentUse, char** aWirelessList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aCurrentUse;
    *aCurrentUse = NULL;
    Brh buf_aWirelessList;
    *aWirelessList = NULL;
    try {
        proxyC->EndGetWirelessList(*async, *aNumber, buf_aCurrentUse, buf_aWirelessList);
        *aCurrentUse = buf_aCurrentUse.Extract();
        *aWirelessList = buf_aWirelessList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetIpAddress(THandle aHandle, const char* aInterFace, char** aIpAddress, char** aNetMask, char** aGateWay, char** aDNS, char** aDHCP)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aInterFace(aInterFace);
    Brh buf_aIpAddress;
    Brh buf_aNetMask;
    Brh buf_aGateWay;
    Brh buf_aDNS;
    Brh buf_aDHCP;
    int32_t err = 0;
    try {
        proxyC->SyncGetIpAddress(buf_aInterFace, buf_aIpAddress, buf_aNetMask, buf_aGateWay, buf_aDNS, buf_aDHCP);
        *aIpAddress = buf_aIpAddress.Extract();
        *aNetMask = buf_aNetMask.Extract();
        *aGateWay = buf_aGateWay.Extract();
        *aDNS = buf_aDNS.Extract();
        *aDHCP = buf_aDHCP.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aIpAddress = NULL;
        *aNetMask = NULL;
        *aGateWay = NULL;
        *aDNS = NULL;
        *aDHCP = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetIpAddress(THandle aHandle, const char* aInterFace, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aInterFace(aInterFace);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetIpAddress(buf_aInterFace, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetIpAddress(THandle aHandle, OhNetHandleAsync aAsync, char** aIpAddress, char** aNetMask, char** aGateWay, char** aDNS, char** aDHCP)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aIpAddress;
    *aIpAddress = NULL;
    Brh buf_aNetMask;
    *aNetMask = NULL;
    Brh buf_aGateWay;
    *aGateWay = NULL;
    Brh buf_aDNS;
    *aDNS = NULL;
    Brh buf_aDHCP;
    *aDHCP = NULL;
    try {
        proxyC->EndGetIpAddress(*async, buf_aIpAddress, buf_aNetMask, buf_aGateWay, buf_aDNS, buf_aDHCP);
        *aIpAddress = buf_aIpAddress.Extract();
        *aNetMask = buf_aNetMask.Extract();
        *aGateWay = buf_aGateWay.Extract();
        *aDNS = buf_aDNS.Extract();
        *aDHCP = buf_aDHCP.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetNetWork(THandle aHandle, const char* aInterFace, const char* aIpAddress, const char* aNetMask, const char* aGateWay, const char* aDNS, const char* aSsid, const char* aPassWord, const char* aEncrypType)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aInterFace(aInterFace);
    Brh buf_aIpAddress(aIpAddress);
    Brh buf_aNetMask(aNetMask);
    Brh buf_aGateWay(aGateWay);
    Brh buf_aDNS(aDNS);
    Brh buf_aSsid(aSsid);
    Brh buf_aPassWord(aPassWord);
    Brh buf_aEncrypType(aEncrypType);
    int32_t err = 0;
    try {
        proxyC->SyncSetNetWork(buf_aInterFace, buf_aIpAddress, buf_aNetMask, buf_aGateWay, buf_aDNS, buf_aSsid, buf_aPassWord, buf_aEncrypType);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetNetWork(THandle aHandle, const char* aInterFace, const char* aIpAddress, const char* aNetMask, const char* aGateWay, const char* aDNS, const char* aSsid, const char* aPassWord, const char* aEncrypType, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aInterFace(aInterFace);
    Brh buf_aIpAddress(aIpAddress);
    Brh buf_aNetMask(aNetMask);
    Brh buf_aGateWay(aGateWay);
    Brh buf_aDNS(aDNS);
    Brh buf_aSsid(aSsid);
    Brh buf_aPassWord(aPassWord);
    Brh buf_aEncrypType(aEncrypType);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetNetWork(buf_aInterFace, buf_aIpAddress, buf_aNetMask, buf_aGateWay, buf_aDNS, buf_aSsid, buf_aPassWord, buf_aEncrypType, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetNetWork(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetNetWork(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetNetInterface(THandle aHandle, uint32_t* aInterfaceNum, char** aCurrentUse, char** aInterfaceList)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aCurrentUse;
    Brh buf_aInterfaceList;
    int32_t err = 0;
    try {
        proxyC->SyncGetNetInterface(*aInterfaceNum, buf_aCurrentUse, buf_aInterfaceList);
        *aCurrentUse = buf_aCurrentUse.Extract();
        *aInterfaceList = buf_aInterfaceList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aInterfaceNum = 0;
        *aCurrentUse = NULL;
        *aInterfaceList = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetNetInterface(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetNetInterface(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetNetInterface(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aInterfaceNum, char** aCurrentUse, char** aInterfaceList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aCurrentUse;
    *aCurrentUse = NULL;
    Brh buf_aInterfaceList;
    *aInterfaceList = NULL;
    try {
        proxyC->EndGetNetInterface(*async, *aInterfaceNum, buf_aCurrentUse, buf_aInterfaceList);
        *aCurrentUse = buf_aCurrentUse.Extract();
        *aInterfaceList = buf_aInterfaceList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyAliveChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAliveChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyCurrentActionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCurrentActionChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyRestartChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRestartChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyNumberChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyNumberChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyRoomNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRoomNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyInterFaceChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyInterFaceChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyNetMaskChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyNetMaskChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyGateWayChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyGateWayChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyDNSChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDNSChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyDHCPChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDHCPChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertySsidChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySsidChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyPassWordChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPassWordChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyEncrypTypeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyEncrypTypeChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyChannelChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyChannelChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyUpnpTypeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpnpTypeChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyStatusChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertySampleFormatChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySampleFormatChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyIpAddressChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIpAddressChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyProtectChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProtectChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyProtectPasswordChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProtectPasswordChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyTimeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTimeChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyVolumeControlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeControlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyAlive(THandle aHandle, uint32_t* aAlive)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Alive;
    proxyC->PropertyAlive(Alive);
    *aAlive = Alive? 1 : 0;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyCurrentAction(THandle aHandle, uint32_t* aCurrentAction)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyCurrentAction(*aCurrentAction);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyRestart(THandle aHandle, uint32_t* aRestart)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Restart;
    proxyC->PropertyRestart(Restart);
    *aRestart = Restart? 1 : 0;
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyNumber(THandle aHandle, uint32_t* aNumber)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyNumber(*aNumber);
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyRoomName(THandle aHandle, char** aRoomName)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aRoomName;
    proxyC->PropertyRoomName(buf_aRoomName);
    *aRoomName = buf_aRoomName.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyInterFace(THandle aHandle, char** aInterFace)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aInterFace;
    proxyC->PropertyInterFace(buf_aInterFace);
    *aInterFace = buf_aInterFace.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyNetMask(THandle aHandle, char** aNetMask)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aNetMask;
    proxyC->PropertyNetMask(buf_aNetMask);
    *aNetMask = buf_aNetMask.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyGateWay(THandle aHandle, char** aGateWay)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aGateWay;
    proxyC->PropertyGateWay(buf_aGateWay);
    *aGateWay = buf_aGateWay.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyDNS(THandle aHandle, char** aDNS)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aDNS;
    proxyC->PropertyDNS(buf_aDNS);
    *aDNS = buf_aDNS.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyDHCP(THandle aHandle, char** aDHCP)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aDHCP;
    proxyC->PropertyDHCP(buf_aDHCP);
    *aDHCP = buf_aDHCP.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertySsid(THandle aHandle, char** aSsid)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aSsid;
    proxyC->PropertySsid(buf_aSsid);
    *aSsid = buf_aSsid.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyPassWord(THandle aHandle, char** aPassWord)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aPassWord;
    proxyC->PropertyPassWord(buf_aPassWord);
    *aPassWord = buf_aPassWord.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyEncrypType(THandle aHandle, char** aEncrypType)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aEncrypType;
    proxyC->PropertyEncrypType(buf_aEncrypType);
    *aEncrypType = buf_aEncrypType.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyChannel(THandle aHandle, char** aChannel)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aChannel;
    proxyC->PropertyChannel(buf_aChannel);
    *aChannel = buf_aChannel.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyUpnpType(THandle aHandle, char** aUpnpType)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aUpnpType;
    proxyC->PropertyUpnpType(buf_aUpnpType);
    *aUpnpType = buf_aUpnpType.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyStatus(THandle aHandle, char** aStatus)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aStatus;
    proxyC->PropertyStatus(buf_aStatus);
    *aStatus = buf_aStatus.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertySampleFormat(THandle aHandle, char** aSampleFormat)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aSampleFormat;
    proxyC->PropertySampleFormat(buf_aSampleFormat);
    *aSampleFormat = buf_aSampleFormat.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyIpAddress(THandle aHandle, char** aIpAddress)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aIpAddress;
    proxyC->PropertyIpAddress(buf_aIpAddress);
    *aIpAddress = buf_aIpAddress.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyProtect(THandle aHandle, char** aProtect)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProtect;
    proxyC->PropertyProtect(buf_aProtect);
    *aProtect = buf_aProtect.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyProtectPassword(THandle aHandle, char** aProtectPassword)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProtectPassword;
    proxyC->PropertyProtectPassword(buf_aProtectPassword);
    *aProtectPassword = buf_aProtectPassword.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyTime(THandle aHandle, char** aTime)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aTime;
    proxyC->PropertyTime(buf_aTime);
    *aTime = buf_aTime.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyVolumeControl(THandle aHandle, uint32_t* aVolumeControl)
{
    CpProxyAvOpenhomeOrgHardwareConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgHardwareConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool VolumeControl;
    proxyC->PropertyVolumeControl(VolumeControl);
    *aVolumeControl = VolumeControl? 1 : 0;
}

