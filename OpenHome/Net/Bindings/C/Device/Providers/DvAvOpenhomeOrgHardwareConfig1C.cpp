#include "DvAvOpenhomeOrgHardwareConfig1.h"
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

class DvProviderAvOpenhomeOrgHardwareConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgHardwareConfig1C(DvDeviceC aDevice);
    TBool SetPropertyMessageOut(const Brx& aValue);
    void GetPropertyMessageOut(Brhz& aValue);
    TBool SetPropertyAlive(TBool aValue);
    void GetPropertyAlive(TBool& aValue);
    TBool SetPropertyCurrentAction(TUint aValue);
    void GetPropertyCurrentAction(TUint& aValue);
    TBool SetPropertyRestart(TBool aValue);
    void GetPropertyRestart(TBool& aValue);
    TBool SetPropertyNumber(TUint aValue);
    void GetPropertyNumber(TUint& aValue);
    TBool SetPropertyRoomName(const Brx& aValue);
    void GetPropertyRoomName(Brhz& aValue);
    TBool SetPropertyInterFace(const Brx& aValue);
    void GetPropertyInterFace(Brhz& aValue);
    TBool SetPropertyNetMask(const Brx& aValue);
    void GetPropertyNetMask(Brhz& aValue);
    TBool SetPropertyGateWay(const Brx& aValue);
    void GetPropertyGateWay(Brhz& aValue);
    TBool SetPropertyDNS(const Brx& aValue);
    void GetPropertyDNS(Brhz& aValue);
    TBool SetPropertyDHCP(const Brx& aValue);
    void GetPropertyDHCP(Brhz& aValue);
    TBool SetPropertySsid(const Brx& aValue);
    void GetPropertySsid(Brhz& aValue);
    TBool SetPropertyPassWord(const Brx& aValue);
    void GetPropertyPassWord(Brhz& aValue);
    TBool SetPropertyEncrypType(const Brx& aValue);
    void GetPropertyEncrypType(Brhz& aValue);
    TBool SetPropertyChannel(const Brx& aValue);
    void GetPropertyChannel(Brhz& aValue);
    TBool SetPropertyUpnpType(const Brx& aValue);
    void GetPropertyUpnpType(Brhz& aValue);
    TBool SetPropertyStatus(const Brx& aValue);
    void GetPropertyStatus(Brhz& aValue);
    TBool SetPropertySampleFormat(const Brx& aValue);
    void GetPropertySampleFormat(Brhz& aValue);
    TBool SetPropertyIpAddress(const Brx& aValue);
    void GetPropertyIpAddress(Brhz& aValue);
    TBool SetPropertyProtect(const Brx& aValue);
    void GetPropertyProtect(Brhz& aValue);
    TBool SetPropertyProtectPassword(const Brx& aValue);
    void GetPropertyProtectPassword(Brhz& aValue);
    TBool SetPropertyActiveStatus(const Brx& aValue);
    void GetPropertyActiveStatus(Brhz& aValue);
    TBool SetPropertyTime(const Brx& aValue);
    void GetPropertyTime(Brhz& aValue);
    TBool SetPropertyVolumeControl(TBool aValue);
    void GetPropertyVolumeControl(TBool& aValue);
    void EnablePropertyMessageOut();
    void EnablePropertyAlive();
    void EnablePropertyCurrentAction();
    void EnablePropertyRestart();
    void EnablePropertyNumber();
    void EnablePropertyRoomName();
    void EnablePropertyInterFace();
    void EnablePropertyNetMask();
    void EnablePropertyGateWay();
    void EnablePropertyDNS();
    void EnablePropertyDHCP();
    void EnablePropertySsid();
    void EnablePropertyPassWord();
    void EnablePropertyEncrypType();
    void EnablePropertyChannel();
    void EnablePropertyUpnpType();
    void EnablePropertyStatus();
    void EnablePropertySampleFormat();
    void EnablePropertyIpAddress();
    void EnablePropertyProtect();
    void EnablePropertyProtectPassword();
    void EnablePropertyActiveStatus();
    void EnablePropertyTime();
    void EnablePropertyVolumeControl();
    void EnableActionLogIn(CallbackHardwareConfig1LogIn aCallback, void* aPtr);
    void EnableActionLogOut(CallbackHardwareConfig1LogOut aCallback, void* aPtr);
    void EnableActionCancelLogIn(CallbackHardwareConfig1CancelLogIn aCallback, void* aPtr);
    void EnableActionIsAlive(CallbackHardwareConfig1IsAlive aCallback, void* aPtr);
    void EnableActionUpdate(CallbackHardwareConfig1Update aCallback, void* aPtr);
    void EnableActionActive(CallbackHardwareConfig1Active aCallback, void* aPtr);
    void EnableActionGetActiveStatus(CallbackHardwareConfig1GetActiveStatus aCallback, void* aPtr);
    void EnableActionCheckUpdate(CallbackHardwareConfig1CheckUpdate aCallback, void* aPtr);
    void EnableActionResetDisplay(CallbackHardwareConfig1ResetDisplay aCallback, void* aPtr);
    void EnableActionGetHardWareInfo(CallbackHardwareConfig1GetHardWareInfo aCallback, void* aPtr);
    void EnableActionSetRoomName(CallbackHardwareConfig1SetRoomName aCallback, void* aPtr);
    void EnableActionGetVolumeControl(CallbackHardwareConfig1GetVolumeControl aCallback, void* aPtr);
    void EnableActionSetVolumeControl(CallbackHardwareConfig1SetVolumeControl aCallback, void* aPtr);
    void EnableActionGetWaitingTime(CallbackHardwareConfig1GetWaitingTime aCallback, void* aPtr);
    void EnableActionSetWaitingTime(CallbackHardwareConfig1SetWaitingTime aCallback, void* aPtr);
    void EnableActionGetOutChannel(CallbackHardwareConfig1GetOutChannel aCallback, void* aPtr);
    void EnableActionSetOutChannel(CallbackHardwareConfig1SetOutChannel aCallback, void* aPtr);
    void EnableActionSetUpnpType(CallbackHardwareConfig1SetUpnpType aCallback, void* aPtr);
    void EnableActionGetUpnpType(CallbackHardwareConfig1GetUpnpType aCallback, void* aPtr);
    void EnableActionSetDsdNativeStatus(CallbackHardwareConfig1SetDsdNativeStatus aCallback, void* aPtr);
    void EnableActionGetDsdNativeStatus(CallbackHardwareConfig1GetDsdNativeStatus aCallback, void* aPtr);
    void EnableActionSetPasswordProtect(CallbackHardwareConfig1SetPasswordProtect aCallback, void* aPtr);
    void EnableActionGetPasswordProtect(CallbackHardwareConfig1GetPasswordProtect aCallback, void* aPtr);
    void EnableActionGetUpdateInfo(CallbackHardwareConfig1GetUpdateInfo aCallback, void* aPtr);
    void EnableActionGetWirelessList(CallbackHardwareConfig1GetWirelessList aCallback, void* aPtr);
    void EnableActionGetIpAddress(CallbackHardwareConfig1GetIpAddress aCallback, void* aPtr);
    void EnableActionSetNetWork(CallbackHardwareConfig1SetNetWork aCallback, void* aPtr);
    void EnableActionGetNetInterface(CallbackHardwareConfig1GetNetInterface aCallback, void* aPtr);
    void EnableActionGetHaltStatus(CallbackHardwareConfig1GetHaltStatus aCallback, void* aPtr);
    void EnableActionSetHaltStatus(CallbackHardwareConfig1SetHaltStatus aCallback, void* aPtr);
    void EnableActionGetFilterMode(CallbackHardwareConfig1GetFilterMode aCallback, void* aPtr);
    void EnableActionSetFilterMode(CallbackHardwareConfig1SetFilterMode aCallback, void* aPtr);
    void EnableActionSetSourceVisible(CallbackHardwareConfig1SetSourceVisible aCallback, void* aPtr);
    void EnableActionGetSourceVisible(CallbackHardwareConfig1GetSourceVisible aCallback, void* aPtr);
    void EnableActionSetLEDMode(CallbackHardwareConfig1SetLEDMode aCallback, void* aPtr);
    void EnableActionGetLEDMode(CallbackHardwareConfig1GetLEDMode aCallback, void* aPtr);
    void EnableActionSetKeyMode(CallbackHardwareConfig1SetKeyMode aCallback, void* aPtr);
    void EnableActionGetKeyMode(CallbackHardwareConfig1GetKeyMode aCallback, void* aPtr);
    void EnableActionSetBrightness(CallbackHardwareConfig1SetBrightness aCallback, void* aPtr);
    void EnableActionGetBrightness(CallbackHardwareConfig1GetBrightness aCallback, void* aPtr);
    void EnableActionSetDisplayMode(CallbackHardwareConfig1SetDisplayMode aCallback, void* aPtr);
    void EnableActionGetDisplayMode(CallbackHardwareConfig1GetDisplayMode aCallback, void* aPtr);
    void EnableActionGetDACPhase(CallbackHardwareConfig1GetDACPhase aCallback, void* aPtr);
    void EnableActionSetDACPhase(CallbackHardwareConfig1SetDACPhase aCallback, void* aPtr);
    void EnableActionGetDACBalance(CallbackHardwareConfig1GetDACBalance aCallback, void* aPtr);
    void EnableActionSetDACBalance(CallbackHardwareConfig1SetDACBalance aCallback, void* aPtr);
    void EnableActionSetEnableResampler(CallbackHardwareConfig1SetEnableResampler aCallback, void* aPtr);
    void EnableActionSetEnableSpeaker(CallbackHardwareConfig1SetEnableSpeaker aCallback, void* aPtr);
    void EnableActionSetEnableEqualizer(CallbackHardwareConfig1SetEnableEqualizer aCallback, void* aPtr);
    void EnableActionSetEnableDirac(CallbackHardwareConfig1SetEnableDirac aCallback, void* aPtr);
private:
    void DoLogIn(IDviInvocation& aInvocation);
    void DoLogOut(IDviInvocation& aInvocation);
    void DoCancelLogIn(IDviInvocation& aInvocation);
    void DoIsAlive(IDviInvocation& aInvocation);
    void DoUpdate(IDviInvocation& aInvocation);
    void DoActive(IDviInvocation& aInvocation);
    void DoGetActiveStatus(IDviInvocation& aInvocation);
    void DoCheckUpdate(IDviInvocation& aInvocation);
    void DoResetDisplay(IDviInvocation& aInvocation);
    void DoGetHardWareInfo(IDviInvocation& aInvocation);
    void DoSetRoomName(IDviInvocation& aInvocation);
    void DoGetVolumeControl(IDviInvocation& aInvocation);
    void DoSetVolumeControl(IDviInvocation& aInvocation);
    void DoGetWaitingTime(IDviInvocation& aInvocation);
    void DoSetWaitingTime(IDviInvocation& aInvocation);
    void DoGetOutChannel(IDviInvocation& aInvocation);
    void DoSetOutChannel(IDviInvocation& aInvocation);
    void DoSetUpnpType(IDviInvocation& aInvocation);
    void DoGetUpnpType(IDviInvocation& aInvocation);
    void DoSetDsdNativeStatus(IDviInvocation& aInvocation);
    void DoGetDsdNativeStatus(IDviInvocation& aInvocation);
    void DoSetPasswordProtect(IDviInvocation& aInvocation);
    void DoGetPasswordProtect(IDviInvocation& aInvocation);
    void DoGetUpdateInfo(IDviInvocation& aInvocation);
    void DoGetWirelessList(IDviInvocation& aInvocation);
    void DoGetIpAddress(IDviInvocation& aInvocation);
    void DoSetNetWork(IDviInvocation& aInvocation);
    void DoGetNetInterface(IDviInvocation& aInvocation);
    void DoGetHaltStatus(IDviInvocation& aInvocation);
    void DoSetHaltStatus(IDviInvocation& aInvocation);
    void DoGetFilterMode(IDviInvocation& aInvocation);
    void DoSetFilterMode(IDviInvocation& aInvocation);
    void DoSetSourceVisible(IDviInvocation& aInvocation);
    void DoGetSourceVisible(IDviInvocation& aInvocation);
    void DoSetLEDMode(IDviInvocation& aInvocation);
    void DoGetLEDMode(IDviInvocation& aInvocation);
    void DoSetKeyMode(IDviInvocation& aInvocation);
    void DoGetKeyMode(IDviInvocation& aInvocation);
    void DoSetBrightness(IDviInvocation& aInvocation);
    void DoGetBrightness(IDviInvocation& aInvocation);
    void DoSetDisplayMode(IDviInvocation& aInvocation);
    void DoGetDisplayMode(IDviInvocation& aInvocation);
    void DoGetDACPhase(IDviInvocation& aInvocation);
    void DoSetDACPhase(IDviInvocation& aInvocation);
    void DoGetDACBalance(IDviInvocation& aInvocation);
    void DoSetDACBalance(IDviInvocation& aInvocation);
    void DoSetEnableResampler(IDviInvocation& aInvocation);
    void DoSetEnableSpeaker(IDviInvocation& aInvocation);
    void DoSetEnableEqualizer(IDviInvocation& aInvocation);
    void DoSetEnableDirac(IDviInvocation& aInvocation);
private:
    CallbackHardwareConfig1LogIn iCallbackLogIn;
    void* iPtrLogIn;
    CallbackHardwareConfig1LogOut iCallbackLogOut;
    void* iPtrLogOut;
    CallbackHardwareConfig1CancelLogIn iCallbackCancelLogIn;
    void* iPtrCancelLogIn;
    CallbackHardwareConfig1IsAlive iCallbackIsAlive;
    void* iPtrIsAlive;
    CallbackHardwareConfig1Update iCallbackUpdate;
    void* iPtrUpdate;
    CallbackHardwareConfig1Active iCallbackActive;
    void* iPtrActive;
    CallbackHardwareConfig1GetActiveStatus iCallbackGetActiveStatus;
    void* iPtrGetActiveStatus;
    CallbackHardwareConfig1CheckUpdate iCallbackCheckUpdate;
    void* iPtrCheckUpdate;
    CallbackHardwareConfig1ResetDisplay iCallbackResetDisplay;
    void* iPtrResetDisplay;
    CallbackHardwareConfig1GetHardWareInfo iCallbackGetHardWareInfo;
    void* iPtrGetHardWareInfo;
    CallbackHardwareConfig1SetRoomName iCallbackSetRoomName;
    void* iPtrSetRoomName;
    CallbackHardwareConfig1GetVolumeControl iCallbackGetVolumeControl;
    void* iPtrGetVolumeControl;
    CallbackHardwareConfig1SetVolumeControl iCallbackSetVolumeControl;
    void* iPtrSetVolumeControl;
    CallbackHardwareConfig1GetWaitingTime iCallbackGetWaitingTime;
    void* iPtrGetWaitingTime;
    CallbackHardwareConfig1SetWaitingTime iCallbackSetWaitingTime;
    void* iPtrSetWaitingTime;
    CallbackHardwareConfig1GetOutChannel iCallbackGetOutChannel;
    void* iPtrGetOutChannel;
    CallbackHardwareConfig1SetOutChannel iCallbackSetOutChannel;
    void* iPtrSetOutChannel;
    CallbackHardwareConfig1SetUpnpType iCallbackSetUpnpType;
    void* iPtrSetUpnpType;
    CallbackHardwareConfig1GetUpnpType iCallbackGetUpnpType;
    void* iPtrGetUpnpType;
    CallbackHardwareConfig1SetDsdNativeStatus iCallbackSetDsdNativeStatus;
    void* iPtrSetDsdNativeStatus;
    CallbackHardwareConfig1GetDsdNativeStatus iCallbackGetDsdNativeStatus;
    void* iPtrGetDsdNativeStatus;
    CallbackHardwareConfig1SetPasswordProtect iCallbackSetPasswordProtect;
    void* iPtrSetPasswordProtect;
    CallbackHardwareConfig1GetPasswordProtect iCallbackGetPasswordProtect;
    void* iPtrGetPasswordProtect;
    CallbackHardwareConfig1GetUpdateInfo iCallbackGetUpdateInfo;
    void* iPtrGetUpdateInfo;
    CallbackHardwareConfig1GetWirelessList iCallbackGetWirelessList;
    void* iPtrGetWirelessList;
    CallbackHardwareConfig1GetIpAddress iCallbackGetIpAddress;
    void* iPtrGetIpAddress;
    CallbackHardwareConfig1SetNetWork iCallbackSetNetWork;
    void* iPtrSetNetWork;
    CallbackHardwareConfig1GetNetInterface iCallbackGetNetInterface;
    void* iPtrGetNetInterface;
    CallbackHardwareConfig1GetHaltStatus iCallbackGetHaltStatus;
    void* iPtrGetHaltStatus;
    CallbackHardwareConfig1SetHaltStatus iCallbackSetHaltStatus;
    void* iPtrSetHaltStatus;
    CallbackHardwareConfig1GetFilterMode iCallbackGetFilterMode;
    void* iPtrGetFilterMode;
    CallbackHardwareConfig1SetFilterMode iCallbackSetFilterMode;
    void* iPtrSetFilterMode;
    CallbackHardwareConfig1SetSourceVisible iCallbackSetSourceVisible;
    void* iPtrSetSourceVisible;
    CallbackHardwareConfig1GetSourceVisible iCallbackGetSourceVisible;
    void* iPtrGetSourceVisible;
    CallbackHardwareConfig1SetLEDMode iCallbackSetLEDMode;
    void* iPtrSetLEDMode;
    CallbackHardwareConfig1GetLEDMode iCallbackGetLEDMode;
    void* iPtrGetLEDMode;
    CallbackHardwareConfig1SetKeyMode iCallbackSetKeyMode;
    void* iPtrSetKeyMode;
    CallbackHardwareConfig1GetKeyMode iCallbackGetKeyMode;
    void* iPtrGetKeyMode;
    CallbackHardwareConfig1SetBrightness iCallbackSetBrightness;
    void* iPtrSetBrightness;
    CallbackHardwareConfig1GetBrightness iCallbackGetBrightness;
    void* iPtrGetBrightness;
    CallbackHardwareConfig1SetDisplayMode iCallbackSetDisplayMode;
    void* iPtrSetDisplayMode;
    CallbackHardwareConfig1GetDisplayMode iCallbackGetDisplayMode;
    void* iPtrGetDisplayMode;
    CallbackHardwareConfig1GetDACPhase iCallbackGetDACPhase;
    void* iPtrGetDACPhase;
    CallbackHardwareConfig1SetDACPhase iCallbackSetDACPhase;
    void* iPtrSetDACPhase;
    CallbackHardwareConfig1GetDACBalance iCallbackGetDACBalance;
    void* iPtrGetDACBalance;
    CallbackHardwareConfig1SetDACBalance iCallbackSetDACBalance;
    void* iPtrSetDACBalance;
    CallbackHardwareConfig1SetEnableResampler iCallbackSetEnableResampler;
    void* iPtrSetEnableResampler;
    CallbackHardwareConfig1SetEnableSpeaker iCallbackSetEnableSpeaker;
    void* iPtrSetEnableSpeaker;
    CallbackHardwareConfig1SetEnableEqualizer iCallbackSetEnableEqualizer;
    void* iPtrSetEnableEqualizer;
    CallbackHardwareConfig1SetEnableDirac iCallbackSetEnableDirac;
    void* iPtrSetEnableDirac;
    PropertyString* iPropertyMessageOut;
    PropertyBool* iPropertyAlive;
    PropertyUint* iPropertyCurrentAction;
    PropertyBool* iPropertyRestart;
    PropertyUint* iPropertyNumber;
    PropertyString* iPropertyRoomName;
    PropertyString* iPropertyInterFace;
    PropertyString* iPropertyNetMask;
    PropertyString* iPropertyGateWay;
    PropertyString* iPropertyDNS;
    PropertyString* iPropertyDHCP;
    PropertyString* iPropertySsid;
    PropertyString* iPropertyPassWord;
    PropertyString* iPropertyEncrypType;
    PropertyString* iPropertyChannel;
    PropertyString* iPropertyUpnpType;
    PropertyString* iPropertyStatus;
    PropertyString* iPropertySampleFormat;
    PropertyString* iPropertyIpAddress;
    PropertyString* iPropertyProtect;
    PropertyString* iPropertyProtectPassword;
    PropertyString* iPropertyActiveStatus;
    PropertyString* iPropertyTime;
    PropertyBool* iPropertyVolumeControl;
};

DvProviderAvOpenhomeOrgHardwareConfig1C::DvProviderAvOpenhomeOrgHardwareConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "HardwareConfig", 1)
{
    iPropertyMessageOut = NULL;
    iPropertyAlive = NULL;
    iPropertyCurrentAction = NULL;
    iPropertyRestart = NULL;
    iPropertyNumber = NULL;
    iPropertyRoomName = NULL;
    iPropertyInterFace = NULL;
    iPropertyNetMask = NULL;
    iPropertyGateWay = NULL;
    iPropertyDNS = NULL;
    iPropertyDHCP = NULL;
    iPropertySsid = NULL;
    iPropertyPassWord = NULL;
    iPropertyEncrypType = NULL;
    iPropertyChannel = NULL;
    iPropertyUpnpType = NULL;
    iPropertyStatus = NULL;
    iPropertySampleFormat = NULL;
    iPropertyIpAddress = NULL;
    iPropertyProtect = NULL;
    iPropertyProtectPassword = NULL;
    iPropertyActiveStatus = NULL;
    iPropertyTime = NULL;
    iPropertyVolumeControl = NULL;
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyMessageOut(const Brx& aValue)
{
    ASSERT(iPropertyMessageOut != NULL);
    return SetPropertyString(*iPropertyMessageOut, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyMessageOut(Brhz& aValue)
{
    ASSERT(iPropertyMessageOut != NULL);
    aValue.Set(iPropertyMessageOut->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyAlive(TBool aValue)
{
    ASSERT(iPropertyAlive != NULL);
    return SetPropertyBool(*iPropertyAlive, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyAlive(TBool& aValue)
{
    ASSERT(iPropertyAlive != NULL);
    aValue = iPropertyAlive->Value();
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyCurrentAction(TUint aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    return SetPropertyUint(*iPropertyCurrentAction, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyCurrentAction(TUint& aValue)
{
    ASSERT(iPropertyCurrentAction != NULL);
    aValue = iPropertyCurrentAction->Value();
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyRestart(TBool aValue)
{
    ASSERT(iPropertyRestart != NULL);
    return SetPropertyBool(*iPropertyRestart, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyRestart(TBool& aValue)
{
    ASSERT(iPropertyRestart != NULL);
    aValue = iPropertyRestart->Value();
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyNumber(TUint aValue)
{
    ASSERT(iPropertyNumber != NULL);
    return SetPropertyUint(*iPropertyNumber, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyNumber(TUint& aValue)
{
    ASSERT(iPropertyNumber != NULL);
    aValue = iPropertyNumber->Value();
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyRoomName(const Brx& aValue)
{
    ASSERT(iPropertyRoomName != NULL);
    return SetPropertyString(*iPropertyRoomName, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyRoomName(Brhz& aValue)
{
    ASSERT(iPropertyRoomName != NULL);
    aValue.Set(iPropertyRoomName->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyInterFace(const Brx& aValue)
{
    ASSERT(iPropertyInterFace != NULL);
    return SetPropertyString(*iPropertyInterFace, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyInterFace(Brhz& aValue)
{
    ASSERT(iPropertyInterFace != NULL);
    aValue.Set(iPropertyInterFace->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyNetMask(const Brx& aValue)
{
    ASSERT(iPropertyNetMask != NULL);
    return SetPropertyString(*iPropertyNetMask, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyNetMask(Brhz& aValue)
{
    ASSERT(iPropertyNetMask != NULL);
    aValue.Set(iPropertyNetMask->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyGateWay(const Brx& aValue)
{
    ASSERT(iPropertyGateWay != NULL);
    return SetPropertyString(*iPropertyGateWay, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyGateWay(Brhz& aValue)
{
    ASSERT(iPropertyGateWay != NULL);
    aValue.Set(iPropertyGateWay->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyDNS(const Brx& aValue)
{
    ASSERT(iPropertyDNS != NULL);
    return SetPropertyString(*iPropertyDNS, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyDNS(Brhz& aValue)
{
    ASSERT(iPropertyDNS != NULL);
    aValue.Set(iPropertyDNS->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyDHCP(const Brx& aValue)
{
    ASSERT(iPropertyDHCP != NULL);
    return SetPropertyString(*iPropertyDHCP, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyDHCP(Brhz& aValue)
{
    ASSERT(iPropertyDHCP != NULL);
    aValue.Set(iPropertyDHCP->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertySsid(const Brx& aValue)
{
    ASSERT(iPropertySsid != NULL);
    return SetPropertyString(*iPropertySsid, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertySsid(Brhz& aValue)
{
    ASSERT(iPropertySsid != NULL);
    aValue.Set(iPropertySsid->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyPassWord(const Brx& aValue)
{
    ASSERT(iPropertyPassWord != NULL);
    return SetPropertyString(*iPropertyPassWord, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyPassWord(Brhz& aValue)
{
    ASSERT(iPropertyPassWord != NULL);
    aValue.Set(iPropertyPassWord->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyEncrypType(const Brx& aValue)
{
    ASSERT(iPropertyEncrypType != NULL);
    return SetPropertyString(*iPropertyEncrypType, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyEncrypType(Brhz& aValue)
{
    ASSERT(iPropertyEncrypType != NULL);
    aValue.Set(iPropertyEncrypType->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyChannel(const Brx& aValue)
{
    ASSERT(iPropertyChannel != NULL);
    return SetPropertyString(*iPropertyChannel, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyChannel(Brhz& aValue)
{
    ASSERT(iPropertyChannel != NULL);
    aValue.Set(iPropertyChannel->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyUpnpType(const Brx& aValue)
{
    ASSERT(iPropertyUpnpType != NULL);
    return SetPropertyString(*iPropertyUpnpType, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyUpnpType(Brhz& aValue)
{
    ASSERT(iPropertyUpnpType != NULL);
    aValue.Set(iPropertyUpnpType->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyStatus(const Brx& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    return SetPropertyString(*iPropertyStatus, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyStatus(Brhz& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    aValue.Set(iPropertyStatus->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertySampleFormat(const Brx& aValue)
{
    ASSERT(iPropertySampleFormat != NULL);
    return SetPropertyString(*iPropertySampleFormat, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertySampleFormat(Brhz& aValue)
{
    ASSERT(iPropertySampleFormat != NULL);
    aValue.Set(iPropertySampleFormat->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyIpAddress(const Brx& aValue)
{
    ASSERT(iPropertyIpAddress != NULL);
    return SetPropertyString(*iPropertyIpAddress, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyIpAddress(Brhz& aValue)
{
    ASSERT(iPropertyIpAddress != NULL);
    aValue.Set(iPropertyIpAddress->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyProtect(const Brx& aValue)
{
    ASSERT(iPropertyProtect != NULL);
    return SetPropertyString(*iPropertyProtect, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyProtect(Brhz& aValue)
{
    ASSERT(iPropertyProtect != NULL);
    aValue.Set(iPropertyProtect->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyProtectPassword(const Brx& aValue)
{
    ASSERT(iPropertyProtectPassword != NULL);
    return SetPropertyString(*iPropertyProtectPassword, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyProtectPassword(Brhz& aValue)
{
    ASSERT(iPropertyProtectPassword != NULL);
    aValue.Set(iPropertyProtectPassword->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyActiveStatus(const Brx& aValue)
{
    ASSERT(iPropertyActiveStatus != NULL);
    return SetPropertyString(*iPropertyActiveStatus, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyActiveStatus(Brhz& aValue)
{
    ASSERT(iPropertyActiveStatus != NULL);
    aValue.Set(iPropertyActiveStatus->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyTime(const Brx& aValue)
{
    ASSERT(iPropertyTime != NULL);
    return SetPropertyString(*iPropertyTime, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyTime(Brhz& aValue)
{
    ASSERT(iPropertyTime != NULL);
    aValue.Set(iPropertyTime->Value());
}

TBool DvProviderAvOpenhomeOrgHardwareConfig1C::SetPropertyVolumeControl(TBool aValue)
{
    ASSERT(iPropertyVolumeControl != NULL);
    return SetPropertyBool(*iPropertyVolumeControl, aValue);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::GetPropertyVolumeControl(TBool& aValue)
{
    ASSERT(iPropertyVolumeControl != NULL);
    aValue = iPropertyVolumeControl->Value();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyMessageOut()
{
    iPropertyMessageOut = new PropertyString(new ParameterString("MessageOut"));
    iService->AddProperty(iPropertyMessageOut); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyAlive()
{
    iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
    iService->AddProperty(iPropertyAlive); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyCurrentAction()
{
    iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
    iService->AddProperty(iPropertyCurrentAction); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyRestart()
{
    iPropertyRestart = new PropertyBool(new ParameterBool("Restart"));
    iService->AddProperty(iPropertyRestart); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyNumber()
{
    iPropertyNumber = new PropertyUint(new ParameterUint("Number"));
    iService->AddProperty(iPropertyNumber); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyRoomName()
{
    iPropertyRoomName = new PropertyString(new ParameterString("RoomName"));
    iService->AddProperty(iPropertyRoomName); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyInterFace()
{
    iPropertyInterFace = new PropertyString(new ParameterString("InterFace"));
    iService->AddProperty(iPropertyInterFace); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyNetMask()
{
    iPropertyNetMask = new PropertyString(new ParameterString("NetMask"));
    iService->AddProperty(iPropertyNetMask); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyGateWay()
{
    iPropertyGateWay = new PropertyString(new ParameterString("GateWay"));
    iService->AddProperty(iPropertyGateWay); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyDNS()
{
    iPropertyDNS = new PropertyString(new ParameterString("DNS"));
    iService->AddProperty(iPropertyDNS); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyDHCP()
{
    iPropertyDHCP = new PropertyString(new ParameterString("DHCP"));
    iService->AddProperty(iPropertyDHCP); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertySsid()
{
    iPropertySsid = new PropertyString(new ParameterString("Ssid"));
    iService->AddProperty(iPropertySsid); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyPassWord()
{
    iPropertyPassWord = new PropertyString(new ParameterString("PassWord"));
    iService->AddProperty(iPropertyPassWord); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyEncrypType()
{
    iPropertyEncrypType = new PropertyString(new ParameterString("EncrypType"));
    iService->AddProperty(iPropertyEncrypType); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyChannel()
{
    iPropertyChannel = new PropertyString(new ParameterString("Channel"));
    iService->AddProperty(iPropertyChannel); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyUpnpType()
{
    iPropertyUpnpType = new PropertyString(new ParameterString("UpnpType"));
    iService->AddProperty(iPropertyUpnpType); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyStatus()
{
    iPropertyStatus = new PropertyString(new ParameterString("Status"));
    iService->AddProperty(iPropertyStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertySampleFormat()
{
    iPropertySampleFormat = new PropertyString(new ParameterString("SampleFormat"));
    iService->AddProperty(iPropertySampleFormat); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyIpAddress()
{
    iPropertyIpAddress = new PropertyString(new ParameterString("IpAddress"));
    iService->AddProperty(iPropertyIpAddress); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyProtect()
{
    iPropertyProtect = new PropertyString(new ParameterString("Protect"));
    iService->AddProperty(iPropertyProtect); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyProtectPassword()
{
    iPropertyProtectPassword = new PropertyString(new ParameterString("ProtectPassword"));
    iService->AddProperty(iPropertyProtectPassword); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyActiveStatus()
{
    iPropertyActiveStatus = new PropertyString(new ParameterString("ActiveStatus"));
    iService->AddProperty(iPropertyActiveStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyTime()
{
    iPropertyTime = new PropertyString(new ParameterString("Time"));
    iService->AddProperty(iPropertyTime); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnablePropertyVolumeControl()
{
    iPropertyVolumeControl = new PropertyBool(new ParameterBool("VolumeControl"));
    iService->AddProperty(iPropertyVolumeControl); // passes ownership
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionLogIn(CallbackHardwareConfig1LogIn aCallback, void* aPtr)
{
    iCallbackLogIn = aCallback;
    iPtrLogIn = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("LogIn");
    action->AddInputParameter(new ParameterString("ServiceName"));
    action->AddInputParameter(new ParameterString("MessageIn"));
    action->AddOutputParameter(new ParameterRelated("MessageOut", *iPropertyMessageOut));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoLogIn);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionLogOut(CallbackHardwareConfig1LogOut aCallback, void* aPtr)
{
    iCallbackLogOut = aCallback;
    iPtrLogOut = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("LogOut");
    action->AddInputParameter(new ParameterString("ServiceName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoLogOut);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionCancelLogIn(CallbackHardwareConfig1CancelLogIn aCallback, void* aPtr)
{
    iCallbackCancelLogIn = aCallback;
    iPtrCancelLogIn = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CancelLogIn");
    action->AddInputParameter(new ParameterString("ServiceName"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoCancelLogIn);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionIsAlive(CallbackHardwareConfig1IsAlive aCallback, void* aPtr)
{
    iCallbackIsAlive = aCallback;
    iPtrIsAlive = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IsAlive");
    action->AddOutputParameter(new ParameterRelated("Alive", *iPropertyAlive));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoIsAlive);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionUpdate(CallbackHardwareConfig1Update aCallback, void* aPtr)
{
    iCallbackUpdate = aCallback;
    iPtrUpdate = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Update");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoUpdate);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionActive(CallbackHardwareConfig1Active aCallback, void* aPtr)
{
    iCallbackActive = aCallback;
    iPtrActive = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Active");
    action->AddInputParameter(new ParameterBool("IsSubscribe"));
    action->AddInputParameter(new ParameterString("RealName"));
    action->AddInputParameter(new ParameterString("Email"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoActive);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetActiveStatus(CallbackHardwareConfig1GetActiveStatus aCallback, void* aPtr)
{
    iCallbackGetActiveStatus = aCallback;
    iPtrGetActiveStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetActiveStatus");
    action->AddOutputParameter(new ParameterRelated("ActiveStatus", *iPropertyActiveStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetActiveStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionCheckUpdate(CallbackHardwareConfig1CheckUpdate aCallback, void* aPtr)
{
    iCallbackCheckUpdate = aCallback;
    iPtrCheckUpdate = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckUpdate");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoCheckUpdate);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionResetDisplay(CallbackHardwareConfig1ResetDisplay aCallback, void* aPtr)
{
    iCallbackResetDisplay = aCallback;
    iPtrResetDisplay = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ResetDisplay");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoResetDisplay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetHardWareInfo(CallbackHardwareConfig1GetHardWareInfo aCallback, void* aPtr)
{
    iCallbackGetHardWareInfo = aCallback;
    iPtrGetHardWareInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHardWareInfo");
    action->AddOutputParameter(new ParameterString("HardWareInfo"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetHardWareInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetRoomName(CallbackHardwareConfig1SetRoomName aCallback, void* aPtr)
{
    iCallbackSetRoomName = aCallback;
    iPtrSetRoomName = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRoomName");
    action->AddInputParameter(new ParameterRelated("RoomName", *iPropertyRoomName));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetRoomName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetVolumeControl(CallbackHardwareConfig1GetVolumeControl aCallback, void* aPtr)
{
    iCallbackGetVolumeControl = aCallback;
    iPtrGetVolumeControl = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetVolumeControl");
    action->AddOutputParameter(new ParameterRelated("VolumeControl", *iPropertyVolumeControl));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetVolumeControl);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetVolumeControl(CallbackHardwareConfig1SetVolumeControl aCallback, void* aPtr)
{
    iCallbackSetVolumeControl = aCallback;
    iPtrSetVolumeControl = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolumeControl");
    action->AddInputParameter(new ParameterRelated("VolumeControl", *iPropertyVolumeControl));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetVolumeControl);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetWaitingTime(CallbackHardwareConfig1GetWaitingTime aCallback, void* aPtr)
{
    iCallbackGetWaitingTime = aCallback;
    iPtrGetWaitingTime = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWaitingTime");
    action->AddOutputParameter(new ParameterRelated("WaitingTime", *iPropertyTime));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetWaitingTime(CallbackHardwareConfig1SetWaitingTime aCallback, void* aPtr)
{
    iCallbackSetWaitingTime = aCallback;
    iPtrSetWaitingTime = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetWaitingTime");
    action->AddInputParameter(new ParameterRelated("WaitingTime", *iPropertyTime));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetWaitingTime);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetOutChannel(CallbackHardwareConfig1GetOutChannel aCallback, void* aPtr)
{
    iCallbackGetOutChannel = aCallback;
    iPtrGetOutChannel = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetOutChannel");
    action->AddOutputParameter(new ParameterRelated("ChannelNum", *iPropertyNumber));
    action->AddOutputParameter(new ParameterRelated("CurrentChannel", *iPropertyChannel));
    action->AddOutputParameter(new ParameterRelated("OutChannel", *iPropertyChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetOutChannel);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetOutChannel(CallbackHardwareConfig1SetOutChannel aCallback, void* aPtr)
{
    iCallbackSetOutChannel = aCallback;
    iPtrSetOutChannel = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetOutChannel");
    action->AddInputParameter(new ParameterRelated("Channel", *iPropertyChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetOutChannel);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetUpnpType(CallbackHardwareConfig1SetUpnpType aCallback, void* aPtr)
{
    iCallbackSetUpnpType = aCallback;
    iPtrSetUpnpType = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetUpnpType");
    action->AddInputParameter(new ParameterRelated("UpnpType", *iPropertyUpnpType));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetUpnpType);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetUpnpType(CallbackHardwareConfig1GetUpnpType aCallback, void* aPtr)
{
    iCallbackGetUpnpType = aCallback;
    iPtrGetUpnpType = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpnpType");
    action->AddOutputParameter(new ParameterRelated("UpnpType", *iPropertyUpnpType));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetUpnpType);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetDsdNativeStatus(CallbackHardwareConfig1SetDsdNativeStatus aCallback, void* aPtr)
{
    iCallbackSetDsdNativeStatus = aCallback;
    iPtrSetDsdNativeStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDsdNativeStatus");
    action->AddInputParameter(new ParameterRelated("Status", *iPropertyStatus));
    action->AddInputParameter(new ParameterRelated("SampleFormat", *iPropertySampleFormat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetDsdNativeStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetDsdNativeStatus(CallbackHardwareConfig1GetDsdNativeStatus aCallback, void* aPtr)
{
    iCallbackGetDsdNativeStatus = aCallback;
    iPtrGetDsdNativeStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDsdNativeStatus");
    action->AddOutputParameter(new ParameterRelated("Status", *iPropertyStatus));
    action->AddOutputParameter(new ParameterRelated("SampleFormat", *iPropertySampleFormat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetDsdNativeStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetPasswordProtect(CallbackHardwareConfig1SetPasswordProtect aCallback, void* aPtr)
{
    iCallbackSetPasswordProtect = aCallback;
    iPtrSetPasswordProtect = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPasswordProtect");
    action->AddInputParameter(new ParameterRelated("Protect", *iPropertyProtect));
    action->AddInputParameter(new ParameterRelated("ProtectPassword", *iPropertyProtectPassword));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetPasswordProtect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetPasswordProtect(CallbackHardwareConfig1GetPasswordProtect aCallback, void* aPtr)
{
    iCallbackGetPasswordProtect = aCallback;
    iPtrGetPasswordProtect = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPasswordProtect");
    action->AddOutputParameter(new ParameterRelated("Protect", *iPropertyProtect));
    action->AddOutputParameter(new ParameterRelated("ProtectPassword", *iPropertyProtectPassword));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetPasswordProtect);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetUpdateInfo(CallbackHardwareConfig1GetUpdateInfo aCallback, void* aPtr)
{
    iCallbackGetUpdateInfo = aCallback;
    iPtrGetUpdateInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateInfo");
    action->AddOutputParameter(new ParameterString("Version"));
    action->AddOutputParameter(new ParameterString("Progress"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetUpdateInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetWirelessList(CallbackHardwareConfig1GetWirelessList aCallback, void* aPtr)
{
    iCallbackGetWirelessList = aCallback;
    iPtrGetWirelessList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetWirelessList");
    action->AddInputParameter(new ParameterRelated("InterFace", *iPropertyInterFace));
    action->AddOutputParameter(new ParameterRelated("Number", *iPropertyNumber));
    action->AddOutputParameter(new ParameterRelated("CurrentUse", *iPropertySsid));
    action->AddOutputParameter(new ParameterRelated("WirelessList", *iPropertySsid));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetWirelessList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetIpAddress(CallbackHardwareConfig1GetIpAddress aCallback, void* aPtr)
{
    iCallbackGetIpAddress = aCallback;
    iPtrGetIpAddress = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIpAddress");
    action->AddInputParameter(new ParameterRelated("InterFace", *iPropertyInterFace));
    action->AddOutputParameter(new ParameterRelated("IpAddress", *iPropertyIpAddress));
    action->AddOutputParameter(new ParameterRelated("NetMask", *iPropertyNetMask));
    action->AddOutputParameter(new ParameterRelated("GateWay", *iPropertyGateWay));
    action->AddOutputParameter(new ParameterRelated("DNS", *iPropertyDNS));
    action->AddOutputParameter(new ParameterRelated("DHCP", *iPropertyDHCP));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetIpAddress);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetNetWork(CallbackHardwareConfig1SetNetWork aCallback, void* aPtr)
{
    iCallbackSetNetWork = aCallback;
    iPtrSetNetWork = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetNetWork");
    action->AddInputParameter(new ParameterRelated("InterFace", *iPropertyInterFace));
    action->AddInputParameter(new ParameterRelated("IpAddress", *iPropertyIpAddress));
    action->AddInputParameter(new ParameterRelated("NetMask", *iPropertyNetMask));
    action->AddInputParameter(new ParameterRelated("GateWay", *iPropertyGateWay));
    action->AddInputParameter(new ParameterRelated("DNS", *iPropertyDNS));
    action->AddInputParameter(new ParameterRelated("Ssid", *iPropertySsid));
    action->AddInputParameter(new ParameterRelated("PassWord", *iPropertyPassWord));
    action->AddInputParameter(new ParameterRelated("EncrypType", *iPropertyEncrypType));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetNetWork);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetNetInterface(CallbackHardwareConfig1GetNetInterface aCallback, void* aPtr)
{
    iCallbackGetNetInterface = aCallback;
    iPtrGetNetInterface = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetNetInterface");
    action->AddOutputParameter(new ParameterRelated("InterfaceNum", *iPropertyNumber));
    action->AddOutputParameter(new ParameterRelated("CurrentUse", *iPropertyInterFace));
    action->AddOutputParameter(new ParameterRelated("InterfaceList", *iPropertyInterFace));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetNetInterface);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetHaltStatus(CallbackHardwareConfig1GetHaltStatus aCallback, void* aPtr)
{
    iCallbackGetHaltStatus = aCallback;
    iPtrGetHaltStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetHaltStatus");
    action->AddOutputParameter(new ParameterBool("HaltStatus"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetHaltStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetHaltStatus(CallbackHardwareConfig1SetHaltStatus aCallback, void* aPtr)
{
    iCallbackSetHaltStatus = aCallback;
    iPtrSetHaltStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetHaltStatus");
    action->AddInputParameter(new ParameterBool("HaltStatus"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetHaltStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetFilterMode(CallbackHardwareConfig1GetFilterMode aCallback, void* aPtr)
{
    iCallbackGetFilterMode = aCallback;
    iPtrGetFilterMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetFilterMode");
    action->AddOutputParameter(new ParameterString("FilterMode"));
    action->AddOutputParameter(new ParameterString("FilterModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetFilterMode(CallbackHardwareConfig1SetFilterMode aCallback, void* aPtr)
{
    iCallbackSetFilterMode = aCallback;
    iPtrSetFilterMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFilterMode");
    action->AddInputParameter(new ParameterString("FilterMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetFilterMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetSourceVisible(CallbackHardwareConfig1SetSourceVisible aCallback, void* aPtr)
{
    iCallbackSetSourceVisible = aCallback;
    iPtrSetSourceVisible = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceVisible");
    action->AddInputParameter(new ParameterString("SourceName"));
    action->AddInputParameter(new ParameterBool("Visible"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetSourceVisible);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetSourceVisible(CallbackHardwareConfig1GetSourceVisible aCallback, void* aPtr)
{
    iCallbackGetSourceVisible = aCallback;
    iPtrGetSourceVisible = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSourceVisible");
    action->AddOutputParameter(new ParameterString("VisibleInfo"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetSourceVisible);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetLEDMode(CallbackHardwareConfig1SetLEDMode aCallback, void* aPtr)
{
    iCallbackSetLEDMode = aCallback;
    iPtrSetLEDMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetLEDMode");
    action->AddInputParameter(new ParameterString("LEDMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetLEDMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetLEDMode(CallbackHardwareConfig1GetLEDMode aCallback, void* aPtr)
{
    iCallbackGetLEDMode = aCallback;
    iPtrGetLEDMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetLEDMode");
    action->AddOutputParameter(new ParameterString("LEDMode"));
    action->AddOutputParameter(new ParameterString("LEDModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetLEDMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetKeyMode(CallbackHardwareConfig1SetKeyMode aCallback, void* aPtr)
{
    iCallbackSetKeyMode = aCallback;
    iPtrSetKeyMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetKeyMode");
    action->AddInputParameter(new ParameterString("KeyName"));
    action->AddInputParameter(new ParameterString("KeyMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetKeyMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetKeyMode(CallbackHardwareConfig1GetKeyMode aCallback, void* aPtr)
{
    iCallbackGetKeyMode = aCallback;
    iPtrGetKeyMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetKeyMode");
    action->AddOutputParameter(new ParameterString("SideKeyMode"));
    action->AddOutputParameter(new ParameterString("MiddleKeyMode"));
    action->AddOutputParameter(new ParameterString("KeyModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetKeyMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetBrightness(CallbackHardwareConfig1SetBrightness aCallback, void* aPtr)
{
    iCallbackSetBrightness = aCallback;
    iPtrSetBrightness = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetBrightness");
    action->AddInputParameter(new ParameterString("Brightness"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetBrightness);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetBrightness(CallbackHardwareConfig1GetBrightness aCallback, void* aPtr)
{
    iCallbackGetBrightness = aCallback;
    iPtrGetBrightness = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetBrightness");
    action->AddOutputParameter(new ParameterString("Brightness"));
    action->AddOutputParameter(new ParameterString("List"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetBrightness);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetDisplayMode(CallbackHardwareConfig1SetDisplayMode aCallback, void* aPtr)
{
    iCallbackSetDisplayMode = aCallback;
    iPtrSetDisplayMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDisplayMode");
    action->AddInputParameter(new ParameterString("DisplayMode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetDisplayMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetDisplayMode(CallbackHardwareConfig1GetDisplayMode aCallback, void* aPtr)
{
    iCallbackGetDisplayMode = aCallback;
    iPtrGetDisplayMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDisplayMode");
    action->AddOutputParameter(new ParameterString("DisplayMode"));
    action->AddOutputParameter(new ParameterString("DisplayModeList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetDisplayMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetDACPhase(CallbackHardwareConfig1GetDACPhase aCallback, void* aPtr)
{
    iCallbackGetDACPhase = aCallback;
    iPtrGetDACPhase = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDACPhase");
    action->AddOutputParameter(new ParameterUint("Phase"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetDACPhase);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetDACPhase(CallbackHardwareConfig1SetDACPhase aCallback, void* aPtr)
{
    iCallbackSetDACPhase = aCallback;
    iPtrSetDACPhase = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDACPhase");
    action->AddInputParameter(new ParameterUint("Phase"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetDACPhase);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionGetDACBalance(CallbackHardwareConfig1GetDACBalance aCallback, void* aPtr)
{
    iCallbackGetDACBalance = aCallback;
    iPtrGetDACBalance = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDACBalance");
    action->AddOutputParameter(new ParameterUint("Balance"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetDACBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetDACBalance(CallbackHardwareConfig1SetDACBalance aCallback, void* aPtr)
{
    iCallbackSetDACBalance = aCallback;
    iPtrSetDACBalance = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDACBalance");
    action->AddInputParameter(new ParameterUint("Balance"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetDACBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetEnableResampler(CallbackHardwareConfig1SetEnableResampler aCallback, void* aPtr)
{
    iCallbackSetEnableResampler = aCallback;
    iPtrSetEnableResampler = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetEnableResampler");
    action->AddInputParameter(new ParameterBool("EnableResampler"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetEnableResampler);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetEnableSpeaker(CallbackHardwareConfig1SetEnableSpeaker aCallback, void* aPtr)
{
    iCallbackSetEnableSpeaker = aCallback;
    iPtrSetEnableSpeaker = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetEnableSpeaker");
    action->AddInputParameter(new ParameterBool("EnableSpeaker"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetEnableSpeaker);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetEnableEqualizer(CallbackHardwareConfig1SetEnableEqualizer aCallback, void* aPtr)
{
    iCallbackSetEnableEqualizer = aCallback;
    iPtrSetEnableEqualizer = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetEnableEqualizer");
    action->AddInputParameter(new ParameterBool("EnableEqualizer"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetEnableEqualizer);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::EnableActionSetEnableDirac(CallbackHardwareConfig1SetEnableDirac aCallback, void* aPtr)
{
    iCallbackSetEnableDirac = aCallback;
    iPtrSetEnableDirac = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetEnableDirac");
    action->AddInputParameter(new ParameterBool("EnableDirac"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetEnableDirac);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoLogIn(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ServiceName;
    aInvocation.InvocationReadString("ServiceName", ServiceName);
    Brhz MessageIn;
    aInvocation.InvocationReadString("MessageIn", MessageIn);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* MessageOut;
    ASSERT(iCallbackLogIn != NULL);
    if (0 != iCallbackLogIn(iPtrLogIn, invocationC, invocationCPtr, (const char*)ServiceName.Ptr(), (const char*)MessageIn.Ptr(), &MessageOut)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respMessageOut(aInvocation, "MessageOut");
    invocation.StartResponse();
    Brhz bufMessageOut((const TChar*)MessageOut);
    OhNetFreeExternal(MessageOut);
    respMessageOut.Write(bufMessageOut);
    respMessageOut.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoLogOut(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ServiceName;
    aInvocation.InvocationReadString("ServiceName", ServiceName);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackLogOut != NULL);
    if (0 != iCallbackLogOut(iPtrLogOut, invocationC, invocationCPtr, (const char*)ServiceName.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoCancelLogIn(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ServiceName;
    aInvocation.InvocationReadString("ServiceName", ServiceName);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackCancelLogIn != NULL);
    if (0 != iCallbackCancelLogIn(iPtrCancelLogIn, invocationC, invocationCPtr, (const char*)ServiceName.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoIsAlive(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Alive;
    ASSERT(iCallbackIsAlive != NULL);
    if (0 != iCallbackIsAlive(iPtrIsAlive, invocationC, invocationCPtr, &Alive)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respAlive(aInvocation, "Alive");
    invocation.StartResponse();
    respAlive.Write((Alive!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoUpdate(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackUpdate != NULL);
    if (0 != iCallbackUpdate(iPtrUpdate, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoActive(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool IsSubscribe = aInvocation.InvocationReadBool("IsSubscribe");
    Brhz RealName;
    aInvocation.InvocationReadString("RealName", RealName);
    Brhz Email;
    aInvocation.InvocationReadString("Email", Email);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackActive != NULL);
    if (0 != iCallbackActive(iPtrActive, invocationC, invocationCPtr, IsSubscribe, (const char*)RealName.Ptr(), (const char*)Email.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetActiveStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ActiveStatus;
    ASSERT(iCallbackGetActiveStatus != NULL);
    if (0 != iCallbackGetActiveStatus(iPtrGetActiveStatus, invocationC, invocationCPtr, &ActiveStatus)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respActiveStatus(aInvocation, "ActiveStatus");
    invocation.StartResponse();
    Brhz bufActiveStatus((const TChar*)ActiveStatus);
    OhNetFreeExternal(ActiveStatus);
    respActiveStatus.Write(bufActiveStatus);
    respActiveStatus.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoCheckUpdate(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackCheckUpdate != NULL);
    if (0 != iCallbackCheckUpdate(iPtrCheckUpdate, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoResetDisplay(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackResetDisplay != NULL);
    if (0 != iCallbackResetDisplay(iPtrResetDisplay, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetHardWareInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* HardWareInfo;
    ASSERT(iCallbackGetHardWareInfo != NULL);
    if (0 != iCallbackGetHardWareInfo(iPtrGetHardWareInfo, invocationC, invocationCPtr, &HardWareInfo)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respHardWareInfo(aInvocation, "HardWareInfo");
    invocation.StartResponse();
    Brhz bufHardWareInfo((const TChar*)HardWareInfo);
    OhNetFreeExternal(HardWareInfo);
    respHardWareInfo.Write(bufHardWareInfo);
    respHardWareInfo.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetRoomName(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz RoomName;
    aInvocation.InvocationReadString("RoomName", RoomName);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetRoomName != NULL);
    if (0 != iCallbackSetRoomName(iPtrSetRoomName, invocationC, invocationCPtr, (const char*)RoomName.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetVolumeControl(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t VolumeControl;
    ASSERT(iCallbackGetVolumeControl != NULL);
    if (0 != iCallbackGetVolumeControl(iPtrGetVolumeControl, invocationC, invocationCPtr, &VolumeControl)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respVolumeControl(aInvocation, "VolumeControl");
    invocation.StartResponse();
    respVolumeControl.Write((VolumeControl!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetVolumeControl(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool VolumeControl = aInvocation.InvocationReadBool("VolumeControl");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetVolumeControl != NULL);
    if (0 != iCallbackSetVolumeControl(iPtrSetVolumeControl, invocationC, invocationCPtr, VolumeControl)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetWaitingTime(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* WaitingTime;
    ASSERT(iCallbackGetWaitingTime != NULL);
    if (0 != iCallbackGetWaitingTime(iPtrGetWaitingTime, invocationC, invocationCPtr, &WaitingTime)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respWaitingTime(aInvocation, "WaitingTime");
    invocation.StartResponse();
    Brhz bufWaitingTime((const TChar*)WaitingTime);
    OhNetFreeExternal(WaitingTime);
    respWaitingTime.Write(bufWaitingTime);
    respWaitingTime.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetWaitingTime(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz WaitingTime;
    aInvocation.InvocationReadString("WaitingTime", WaitingTime);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetWaitingTime != NULL);
    if (0 != iCallbackSetWaitingTime(iPtrSetWaitingTime, invocationC, invocationCPtr, (const char*)WaitingTime.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetOutChannel(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t ChannelNum;
    char* CurrentChannel;
    char* OutChannel;
    ASSERT(iCallbackGetOutChannel != NULL);
    if (0 != iCallbackGetOutChannel(iPtrGetOutChannel, invocationC, invocationCPtr, &ChannelNum, &CurrentChannel, &OutChannel)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respChannelNum(aInvocation, "ChannelNum");
    DviInvocationResponseString respCurrentChannel(aInvocation, "CurrentChannel");
    DviInvocationResponseString respOutChannel(aInvocation, "OutChannel");
    invocation.StartResponse();
    respChannelNum.Write(ChannelNum);
    Brhz bufCurrentChannel((const TChar*)CurrentChannel);
    OhNetFreeExternal(CurrentChannel);
    respCurrentChannel.Write(bufCurrentChannel);
    respCurrentChannel.WriteFlush();
    Brhz bufOutChannel((const TChar*)OutChannel);
    OhNetFreeExternal(OutChannel);
    respOutChannel.Write(bufOutChannel);
    respOutChannel.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetOutChannel(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetOutChannel != NULL);
    if (0 != iCallbackSetOutChannel(iPtrSetOutChannel, invocationC, invocationCPtr, (const char*)Channel.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetUpnpType(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz UpnpType;
    aInvocation.InvocationReadString("UpnpType", UpnpType);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetUpnpType != NULL);
    if (0 != iCallbackSetUpnpType(iPtrSetUpnpType, invocationC, invocationCPtr, (const char*)UpnpType.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetUpnpType(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* UpnpType;
    ASSERT(iCallbackGetUpnpType != NULL);
    if (0 != iCallbackGetUpnpType(iPtrGetUpnpType, invocationC, invocationCPtr, &UpnpType)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respUpnpType(aInvocation, "UpnpType");
    invocation.StartResponse();
    Brhz bufUpnpType((const TChar*)UpnpType);
    OhNetFreeExternal(UpnpType);
    respUpnpType.Write(bufUpnpType);
    respUpnpType.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetDsdNativeStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Status;
    aInvocation.InvocationReadString("Status", Status);
    Brhz SampleFormat;
    aInvocation.InvocationReadString("SampleFormat", SampleFormat);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetDsdNativeStatus != NULL);
    if (0 != iCallbackSetDsdNativeStatus(iPtrSetDsdNativeStatus, invocationC, invocationCPtr, (const char*)Status.Ptr(), (const char*)SampleFormat.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetDsdNativeStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Status;
    char* SampleFormat;
    ASSERT(iCallbackGetDsdNativeStatus != NULL);
    if (0 != iCallbackGetDsdNativeStatus(iPtrGetDsdNativeStatus, invocationC, invocationCPtr, &Status, &SampleFormat)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respStatus(aInvocation, "Status");
    DviInvocationResponseString respSampleFormat(aInvocation, "SampleFormat");
    invocation.StartResponse();
    Brhz bufStatus((const TChar*)Status);
    OhNetFreeExternal(Status);
    respStatus.Write(bufStatus);
    respStatus.WriteFlush();
    Brhz bufSampleFormat((const TChar*)SampleFormat);
    OhNetFreeExternal(SampleFormat);
    respSampleFormat.Write(bufSampleFormat);
    respSampleFormat.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetPasswordProtect(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Protect;
    aInvocation.InvocationReadString("Protect", Protect);
    Brhz ProtectPassword;
    aInvocation.InvocationReadString("ProtectPassword", ProtectPassword);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetPasswordProtect != NULL);
    if (0 != iCallbackSetPasswordProtect(iPtrSetPasswordProtect, invocationC, invocationCPtr, (const char*)Protect.Ptr(), (const char*)ProtectPassword.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetPasswordProtect(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Protect;
    char* ProtectPassword;
    ASSERT(iCallbackGetPasswordProtect != NULL);
    if (0 != iCallbackGetPasswordProtect(iPtrGetPasswordProtect, invocationC, invocationCPtr, &Protect, &ProtectPassword)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respProtect(aInvocation, "Protect");
    DviInvocationResponseString respProtectPassword(aInvocation, "ProtectPassword");
    invocation.StartResponse();
    Brhz bufProtect((const TChar*)Protect);
    OhNetFreeExternal(Protect);
    respProtect.Write(bufProtect);
    respProtect.WriteFlush();
    Brhz bufProtectPassword((const TChar*)ProtectPassword);
    OhNetFreeExternal(ProtectPassword);
    respProtectPassword.Write(bufProtectPassword);
    respProtectPassword.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetUpdateInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Version;
    char* Progress;
    ASSERT(iCallbackGetUpdateInfo != NULL);
    if (0 != iCallbackGetUpdateInfo(iPtrGetUpdateInfo, invocationC, invocationCPtr, &Version, &Progress)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respVersion(aInvocation, "Version");
    DviInvocationResponseString respProgress(aInvocation, "Progress");
    invocation.StartResponse();
    Brhz bufVersion((const TChar*)Version);
    OhNetFreeExternal(Version);
    respVersion.Write(bufVersion);
    respVersion.WriteFlush();
    Brhz bufProgress((const TChar*)Progress);
    OhNetFreeExternal(Progress);
    respProgress.Write(bufProgress);
    respProgress.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetWirelessList(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz InterFace;
    aInvocation.InvocationReadString("InterFace", InterFace);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Number;
    char* CurrentUse;
    char* WirelessList;
    ASSERT(iCallbackGetWirelessList != NULL);
    if (0 != iCallbackGetWirelessList(iPtrGetWirelessList, invocationC, invocationCPtr, (const char*)InterFace.Ptr(), &Number, &CurrentUse, &WirelessList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respNumber(aInvocation, "Number");
    DviInvocationResponseString respCurrentUse(aInvocation, "CurrentUse");
    DviInvocationResponseString respWirelessList(aInvocation, "WirelessList");
    invocation.StartResponse();
    respNumber.Write(Number);
    Brhz bufCurrentUse((const TChar*)CurrentUse);
    OhNetFreeExternal(CurrentUse);
    respCurrentUse.Write(bufCurrentUse);
    respCurrentUse.WriteFlush();
    Brhz bufWirelessList((const TChar*)WirelessList);
    OhNetFreeExternal(WirelessList);
    respWirelessList.Write(bufWirelessList);
    respWirelessList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetIpAddress(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz InterFace;
    aInvocation.InvocationReadString("InterFace", InterFace);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* IpAddress;
    char* NetMask;
    char* GateWay;
    char* DNS;
    char* DHCP;
    ASSERT(iCallbackGetIpAddress != NULL);
    if (0 != iCallbackGetIpAddress(iPtrGetIpAddress, invocationC, invocationCPtr, (const char*)InterFace.Ptr(), &IpAddress, &NetMask, &GateWay, &DNS, &DHCP)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respIpAddress(aInvocation, "IpAddress");
    DviInvocationResponseString respNetMask(aInvocation, "NetMask");
    DviInvocationResponseString respGateWay(aInvocation, "GateWay");
    DviInvocationResponseString respDNS(aInvocation, "DNS");
    DviInvocationResponseString respDHCP(aInvocation, "DHCP");
    invocation.StartResponse();
    Brhz bufIpAddress((const TChar*)IpAddress);
    OhNetFreeExternal(IpAddress);
    respIpAddress.Write(bufIpAddress);
    respIpAddress.WriteFlush();
    Brhz bufNetMask((const TChar*)NetMask);
    OhNetFreeExternal(NetMask);
    respNetMask.Write(bufNetMask);
    respNetMask.WriteFlush();
    Brhz bufGateWay((const TChar*)GateWay);
    OhNetFreeExternal(GateWay);
    respGateWay.Write(bufGateWay);
    respGateWay.WriteFlush();
    Brhz bufDNS((const TChar*)DNS);
    OhNetFreeExternal(DNS);
    respDNS.Write(bufDNS);
    respDNS.WriteFlush();
    Brhz bufDHCP((const TChar*)DHCP);
    OhNetFreeExternal(DHCP);
    respDHCP.Write(bufDHCP);
    respDHCP.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetNetWork(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz InterFace;
    aInvocation.InvocationReadString("InterFace", InterFace);
    Brhz IpAddress;
    aInvocation.InvocationReadString("IpAddress", IpAddress);
    Brhz NetMask;
    aInvocation.InvocationReadString("NetMask", NetMask);
    Brhz GateWay;
    aInvocation.InvocationReadString("GateWay", GateWay);
    Brhz DNS;
    aInvocation.InvocationReadString("DNS", DNS);
    Brhz Ssid;
    aInvocation.InvocationReadString("Ssid", Ssid);
    Brhz PassWord;
    aInvocation.InvocationReadString("PassWord", PassWord);
    Brhz EncrypType;
    aInvocation.InvocationReadString("EncrypType", EncrypType);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetNetWork != NULL);
    if (0 != iCallbackSetNetWork(iPtrSetNetWork, invocationC, invocationCPtr, (const char*)InterFace.Ptr(), (const char*)IpAddress.Ptr(), (const char*)NetMask.Ptr(), (const char*)GateWay.Ptr(), (const char*)DNS.Ptr(), (const char*)Ssid.Ptr(), (const char*)PassWord.Ptr(), (const char*)EncrypType.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetNetInterface(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t InterfaceNum;
    char* CurrentUse;
    char* InterfaceList;
    ASSERT(iCallbackGetNetInterface != NULL);
    if (0 != iCallbackGetNetInterface(iPtrGetNetInterface, invocationC, invocationCPtr, &InterfaceNum, &CurrentUse, &InterfaceList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respInterfaceNum(aInvocation, "InterfaceNum");
    DviInvocationResponseString respCurrentUse(aInvocation, "CurrentUse");
    DviInvocationResponseString respInterfaceList(aInvocation, "InterfaceList");
    invocation.StartResponse();
    respInterfaceNum.Write(InterfaceNum);
    Brhz bufCurrentUse((const TChar*)CurrentUse);
    OhNetFreeExternal(CurrentUse);
    respCurrentUse.Write(bufCurrentUse);
    respCurrentUse.WriteFlush();
    Brhz bufInterfaceList((const TChar*)InterfaceList);
    OhNetFreeExternal(InterfaceList);
    respInterfaceList.Write(bufInterfaceList);
    respInterfaceList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetHaltStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t HaltStatus;
    ASSERT(iCallbackGetHaltStatus != NULL);
    if (0 != iCallbackGetHaltStatus(iPtrGetHaltStatus, invocationC, invocationCPtr, &HaltStatus)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respHaltStatus(aInvocation, "HaltStatus");
    invocation.StartResponse();
    respHaltStatus.Write((HaltStatus!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetHaltStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool HaltStatus = aInvocation.InvocationReadBool("HaltStatus");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetHaltStatus != NULL);
    if (0 != iCallbackSetHaltStatus(iPtrSetHaltStatus, invocationC, invocationCPtr, HaltStatus)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetFilterMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* FilterMode;
    char* FilterModeList;
    ASSERT(iCallbackGetFilterMode != NULL);
    if (0 != iCallbackGetFilterMode(iPtrGetFilterMode, invocationC, invocationCPtr, &FilterMode, &FilterModeList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respFilterMode(aInvocation, "FilterMode");
    DviInvocationResponseString respFilterModeList(aInvocation, "FilterModeList");
    invocation.StartResponse();
    Brhz bufFilterMode((const TChar*)FilterMode);
    OhNetFreeExternal(FilterMode);
    respFilterMode.Write(bufFilterMode);
    respFilterMode.WriteFlush();
    Brhz bufFilterModeList((const TChar*)FilterModeList);
    OhNetFreeExternal(FilterModeList);
    respFilterModeList.Write(bufFilterModeList);
    respFilterModeList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetFilterMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz FilterMode;
    aInvocation.InvocationReadString("FilterMode", FilterMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetFilterMode != NULL);
    if (0 != iCallbackSetFilterMode(iPtrSetFilterMode, invocationC, invocationCPtr, (const char*)FilterMode.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetSourceVisible(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz SourceName;
    aInvocation.InvocationReadString("SourceName", SourceName);
    TBool Visible = aInvocation.InvocationReadBool("Visible");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetSourceVisible != NULL);
    if (0 != iCallbackSetSourceVisible(iPtrSetSourceVisible, invocationC, invocationCPtr, (const char*)SourceName.Ptr(), Visible)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetSourceVisible(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* VisibleInfo;
    ASSERT(iCallbackGetSourceVisible != NULL);
    if (0 != iCallbackGetSourceVisible(iPtrGetSourceVisible, invocationC, invocationCPtr, &VisibleInfo)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respVisibleInfo(aInvocation, "VisibleInfo");
    invocation.StartResponse();
    Brhz bufVisibleInfo((const TChar*)VisibleInfo);
    OhNetFreeExternal(VisibleInfo);
    respVisibleInfo.Write(bufVisibleInfo);
    respVisibleInfo.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetLEDMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz LEDMode;
    aInvocation.InvocationReadString("LEDMode", LEDMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetLEDMode != NULL);
    if (0 != iCallbackSetLEDMode(iPtrSetLEDMode, invocationC, invocationCPtr, (const char*)LEDMode.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetLEDMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* LEDMode;
    char* LEDModeList;
    ASSERT(iCallbackGetLEDMode != NULL);
    if (0 != iCallbackGetLEDMode(iPtrGetLEDMode, invocationC, invocationCPtr, &LEDMode, &LEDModeList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respLEDMode(aInvocation, "LEDMode");
    DviInvocationResponseString respLEDModeList(aInvocation, "LEDModeList");
    invocation.StartResponse();
    Brhz bufLEDMode((const TChar*)LEDMode);
    OhNetFreeExternal(LEDMode);
    respLEDMode.Write(bufLEDMode);
    respLEDMode.WriteFlush();
    Brhz bufLEDModeList((const TChar*)LEDModeList);
    OhNetFreeExternal(LEDModeList);
    respLEDModeList.Write(bufLEDModeList);
    respLEDModeList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetKeyMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz KeyName;
    aInvocation.InvocationReadString("KeyName", KeyName);
    Brhz KeyMode;
    aInvocation.InvocationReadString("KeyMode", KeyMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetKeyMode != NULL);
    if (0 != iCallbackSetKeyMode(iPtrSetKeyMode, invocationC, invocationCPtr, (const char*)KeyName.Ptr(), (const char*)KeyMode.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetKeyMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* SideKeyMode;
    char* MiddleKeyMode;
    char* KeyModeList;
    ASSERT(iCallbackGetKeyMode != NULL);
    if (0 != iCallbackGetKeyMode(iPtrGetKeyMode, invocationC, invocationCPtr, &SideKeyMode, &MiddleKeyMode, &KeyModeList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respSideKeyMode(aInvocation, "SideKeyMode");
    DviInvocationResponseString respMiddleKeyMode(aInvocation, "MiddleKeyMode");
    DviInvocationResponseString respKeyModeList(aInvocation, "KeyModeList");
    invocation.StartResponse();
    Brhz bufSideKeyMode((const TChar*)SideKeyMode);
    OhNetFreeExternal(SideKeyMode);
    respSideKeyMode.Write(bufSideKeyMode);
    respSideKeyMode.WriteFlush();
    Brhz bufMiddleKeyMode((const TChar*)MiddleKeyMode);
    OhNetFreeExternal(MiddleKeyMode);
    respMiddleKeyMode.Write(bufMiddleKeyMode);
    respMiddleKeyMode.WriteFlush();
    Brhz bufKeyModeList((const TChar*)KeyModeList);
    OhNetFreeExternal(KeyModeList);
    respKeyModeList.Write(bufKeyModeList);
    respKeyModeList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetBrightness(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Brightness;
    aInvocation.InvocationReadString("Brightness", Brightness);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetBrightness != NULL);
    if (0 != iCallbackSetBrightness(iPtrSetBrightness, invocationC, invocationCPtr, (const char*)Brightness.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetBrightness(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Brightness;
    char* List;
    ASSERT(iCallbackGetBrightness != NULL);
    if (0 != iCallbackGetBrightness(iPtrGetBrightness, invocationC, invocationCPtr, &Brightness, &List)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respBrightness(aInvocation, "Brightness");
    DviInvocationResponseString respList(aInvocation, "List");
    invocation.StartResponse();
    Brhz bufBrightness((const TChar*)Brightness);
    OhNetFreeExternal(Brightness);
    respBrightness.Write(bufBrightness);
    respBrightness.WriteFlush();
    Brhz bufList((const TChar*)List);
    OhNetFreeExternal(List);
    respList.Write(bufList);
    respList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetDisplayMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz DisplayMode;
    aInvocation.InvocationReadString("DisplayMode", DisplayMode);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetDisplayMode != NULL);
    if (0 != iCallbackSetDisplayMode(iPtrSetDisplayMode, invocationC, invocationCPtr, (const char*)DisplayMode.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetDisplayMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* DisplayMode;
    char* DisplayModeList;
    ASSERT(iCallbackGetDisplayMode != NULL);
    if (0 != iCallbackGetDisplayMode(iPtrGetDisplayMode, invocationC, invocationCPtr, &DisplayMode, &DisplayModeList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respDisplayMode(aInvocation, "DisplayMode");
    DviInvocationResponseString respDisplayModeList(aInvocation, "DisplayModeList");
    invocation.StartResponse();
    Brhz bufDisplayMode((const TChar*)DisplayMode);
    OhNetFreeExternal(DisplayMode);
    respDisplayMode.Write(bufDisplayMode);
    respDisplayMode.WriteFlush();
    Brhz bufDisplayModeList((const TChar*)DisplayModeList);
    OhNetFreeExternal(DisplayModeList);
    respDisplayModeList.Write(bufDisplayModeList);
    respDisplayModeList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetDACPhase(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Phase;
    ASSERT(iCallbackGetDACPhase != NULL);
    if (0 != iCallbackGetDACPhase(iPtrGetDACPhase, invocationC, invocationCPtr, &Phase)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respPhase(aInvocation, "Phase");
    invocation.StartResponse();
    respPhase.Write(Phase);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetDACPhase(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Phase = aInvocation.InvocationReadUint("Phase");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetDACPhase != NULL);
    if (0 != iCallbackSetDACPhase(iPtrSetDACPhase, invocationC, invocationCPtr, Phase)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoGetDACBalance(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Balance;
    ASSERT(iCallbackGetDACBalance != NULL);
    if (0 != iCallbackGetDACBalance(iPtrGetDACBalance, invocationC, invocationCPtr, &Balance)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respBalance(aInvocation, "Balance");
    invocation.StartResponse();
    respBalance.Write(Balance);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetDACBalance(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Balance = aInvocation.InvocationReadUint("Balance");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetDACBalance != NULL);
    if (0 != iCallbackSetDACBalance(iPtrSetDACBalance, invocationC, invocationCPtr, Balance)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetEnableResampler(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool EnableResampler = aInvocation.InvocationReadBool("EnableResampler");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetEnableResampler != NULL);
    if (0 != iCallbackSetEnableResampler(iPtrSetEnableResampler, invocationC, invocationCPtr, EnableResampler)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetEnableSpeaker(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool EnableSpeaker = aInvocation.InvocationReadBool("EnableSpeaker");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetEnableSpeaker != NULL);
    if (0 != iCallbackSetEnableSpeaker(iPtrSetEnableSpeaker, invocationC, invocationCPtr, EnableSpeaker)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetEnableEqualizer(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool EnableEqualizer = aInvocation.InvocationReadBool("EnableEqualizer");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetEnableEqualizer != NULL);
    if (0 != iCallbackSetEnableEqualizer(iPtrSetEnableEqualizer, invocationC, invocationCPtr, EnableEqualizer)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgHardwareConfig1C::DoSetEnableDirac(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool EnableDirac = aInvocation.InvocationReadBool("EnableDirac");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetEnableDirac != NULL);
    if (0 != iCallbackSetEnableDirac(iPtrSetEnableDirac, invocationC, invocationCPtr, EnableDirac)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgHardwareConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgHardwareConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionLogIn(THandle aProvider, CallbackHardwareConfig1LogIn aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionLogIn(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionLogOut(THandle aProvider, CallbackHardwareConfig1LogOut aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionLogOut(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionCancelLogIn(THandle aProvider, CallbackHardwareConfig1CancelLogIn aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionCancelLogIn(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionIsAlive(THandle aProvider, CallbackHardwareConfig1IsAlive aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionIsAlive(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionUpdate(THandle aProvider, CallbackHardwareConfig1Update aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionUpdate(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionActive(THandle aProvider, CallbackHardwareConfig1Active aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionActive(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetActiveStatus(THandle aProvider, CallbackHardwareConfig1GetActiveStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetActiveStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionCheckUpdate(THandle aProvider, CallbackHardwareConfig1CheckUpdate aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionCheckUpdate(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionResetDisplay(THandle aProvider, CallbackHardwareConfig1ResetDisplay aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionResetDisplay(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetHardWareInfo(THandle aProvider, CallbackHardwareConfig1GetHardWareInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetHardWareInfo(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetRoomName(THandle aProvider, CallbackHardwareConfig1SetRoomName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetRoomName(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetVolumeControl(THandle aProvider, CallbackHardwareConfig1GetVolumeControl aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetVolumeControl(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetVolumeControl(THandle aProvider, CallbackHardwareConfig1SetVolumeControl aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetVolumeControl(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetWaitingTime(THandle aProvider, CallbackHardwareConfig1GetWaitingTime aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetWaitingTime(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetWaitingTime(THandle aProvider, CallbackHardwareConfig1SetWaitingTime aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetWaitingTime(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetOutChannel(THandle aProvider, CallbackHardwareConfig1GetOutChannel aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetOutChannel(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetOutChannel(THandle aProvider, CallbackHardwareConfig1SetOutChannel aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetOutChannel(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetUpnpType(THandle aProvider, CallbackHardwareConfig1SetUpnpType aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetUpnpType(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetUpnpType(THandle aProvider, CallbackHardwareConfig1GetUpnpType aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetUpnpType(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetDsdNativeStatus(THandle aProvider, CallbackHardwareConfig1SetDsdNativeStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetDsdNativeStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetDsdNativeStatus(THandle aProvider, CallbackHardwareConfig1GetDsdNativeStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetDsdNativeStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetPasswordProtect(THandle aProvider, CallbackHardwareConfig1SetPasswordProtect aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetPasswordProtect(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetPasswordProtect(THandle aProvider, CallbackHardwareConfig1GetPasswordProtect aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetPasswordProtect(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetUpdateInfo(THandle aProvider, CallbackHardwareConfig1GetUpdateInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetUpdateInfo(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetWirelessList(THandle aProvider, CallbackHardwareConfig1GetWirelessList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetWirelessList(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetIpAddress(THandle aProvider, CallbackHardwareConfig1GetIpAddress aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetIpAddress(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetNetWork(THandle aProvider, CallbackHardwareConfig1SetNetWork aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetNetWork(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetNetInterface(THandle aProvider, CallbackHardwareConfig1GetNetInterface aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetNetInterface(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetHaltStatus(THandle aProvider, CallbackHardwareConfig1GetHaltStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetHaltStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetHaltStatus(THandle aProvider, CallbackHardwareConfig1SetHaltStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetHaltStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetFilterMode(THandle aProvider, CallbackHardwareConfig1GetFilterMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetFilterMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetFilterMode(THandle aProvider, CallbackHardwareConfig1SetFilterMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetFilterMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetSourceVisible(THandle aProvider, CallbackHardwareConfig1SetSourceVisible aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetSourceVisible(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetSourceVisible(THandle aProvider, CallbackHardwareConfig1GetSourceVisible aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetSourceVisible(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetLEDMode(THandle aProvider, CallbackHardwareConfig1SetLEDMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetLEDMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetLEDMode(THandle aProvider, CallbackHardwareConfig1GetLEDMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetLEDMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetKeyMode(THandle aProvider, CallbackHardwareConfig1SetKeyMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetKeyMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetKeyMode(THandle aProvider, CallbackHardwareConfig1GetKeyMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetKeyMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetBrightness(THandle aProvider, CallbackHardwareConfig1SetBrightness aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetBrightness(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetBrightness(THandle aProvider, CallbackHardwareConfig1GetBrightness aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetBrightness(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetDisplayMode(THandle aProvider, CallbackHardwareConfig1SetDisplayMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetDisplayMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetDisplayMode(THandle aProvider, CallbackHardwareConfig1GetDisplayMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetDisplayMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetDACPhase(THandle aProvider, CallbackHardwareConfig1GetDACPhase aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetDACPhase(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetDACPhase(THandle aProvider, CallbackHardwareConfig1SetDACPhase aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetDACPhase(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetDACBalance(THandle aProvider, CallbackHardwareConfig1GetDACBalance aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionGetDACBalance(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetDACBalance(THandle aProvider, CallbackHardwareConfig1SetDACBalance aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetDACBalance(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetEnableResampler(THandle aProvider, CallbackHardwareConfig1SetEnableResampler aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetEnableResampler(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetEnableSpeaker(THandle aProvider, CallbackHardwareConfig1SetEnableSpeaker aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetEnableSpeaker(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetEnableEqualizer(THandle aProvider, CallbackHardwareConfig1SetEnableEqualizer aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetEnableEqualizer(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetEnableDirac(THandle aProvider, CallbackHardwareConfig1SetEnableDirac aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnableActionSetEnableDirac(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyMessageOut(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyMessageOut(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyMessageOut(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyMessageOut(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyAlive((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyAlive(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyCurrentAction(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyCurrentAction(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyRestart(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyRestart((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyRestart(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyRestart(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyNumber(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyNumber(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyNumber(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyNumber(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyRoomName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyRoomName(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyRoomName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyRoomName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyInterFace(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyInterFace(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyInterFace(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyInterFace(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyNetMask(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyNetMask(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyNetMask(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyNetMask(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyGateWay(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyGateWay(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyGateWay(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyGateWay(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyDNS(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyDNS(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyDNS(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyDNS(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyDHCP(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyDHCP(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyDHCP(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyDHCP(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertySsid(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertySsid(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertySsid(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertySsid(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyPassWord(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyPassWord(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyPassWord(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyPassWord(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyEncrypType(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyEncrypType(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyEncrypType(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyEncrypType(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyChannel(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyChannel(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyChannel(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyChannel(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyUpnpType(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyUpnpType(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyUpnpType(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyUpnpType(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertySampleFormat(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertySampleFormat(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertySampleFormat(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertySampleFormat(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyIpAddress(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyIpAddress(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyIpAddress(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyIpAddress(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyProtect(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyProtect(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyProtect(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyProtect(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyProtectPassword(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyProtectPassword(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyProtectPassword(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyProtectPassword(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyActiveStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyActiveStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyActiveStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyActiveStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyTime(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyTime(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyTime(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyTime(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyVolumeControl(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->SetPropertyVolumeControl((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyVolumeControl(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->GetPropertyVolumeControl(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyMessageOut(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyMessageOut();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyAlive(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyAlive();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyCurrentAction(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyCurrentAction();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyRestart(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyRestart();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyNumber(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyNumber();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyRoomName(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyRoomName();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyInterFace(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyInterFace();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyNetMask(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyNetMask();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyGateWay(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyGateWay();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyDNS(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyDNS();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyDHCP(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyDHCP();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertySsid(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertySsid();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyPassWord(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyPassWord();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyEncrypType(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyEncrypType();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyChannel(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyChannel();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyUpnpType(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyUpnpType();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyStatus();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertySampleFormat(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertySampleFormat();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyIpAddress(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyIpAddress();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyProtect(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyProtect();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyProtectPassword(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyProtectPassword();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyActiveStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyActiveStatus();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyTime(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyTime();
}

void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyVolumeControl(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgHardwareConfig1C*>(aProvider)->EnablePropertyVolumeControl();
}

