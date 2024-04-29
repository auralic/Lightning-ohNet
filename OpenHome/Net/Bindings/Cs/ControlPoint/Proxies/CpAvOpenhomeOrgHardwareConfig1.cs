using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgHardwareConfig1 : ICpProxy, IDisposable
    {
        void SyncLogIn(String aServiceName, String aMessageIn, out String aMessageOut);
        void BeginLogIn(String aServiceName, String aMessageIn, CpProxy.CallbackAsyncComplete aCallback);
        void EndLogIn(IntPtr aAsyncHandle, out String aMessageOut);
        void SyncLogOut(String aServiceName);
        void BeginLogOut(String aServiceName, CpProxy.CallbackAsyncComplete aCallback);
        void EndLogOut(IntPtr aAsyncHandle);
        void SyncCancelLogIn(String aServiceName);
        void BeginCancelLogIn(String aServiceName, CpProxy.CallbackAsyncComplete aCallback);
        void EndCancelLogIn(IntPtr aAsyncHandle);
        void SyncIsAlive(out bool aAlive);
        void BeginIsAlive(CpProxy.CallbackAsyncComplete aCallback);
        void EndIsAlive(IntPtr aAsyncHandle, out bool aAlive);
        void SyncUpdate();
        void BeginUpdate(CpProxy.CallbackAsyncComplete aCallback);
        void EndUpdate(IntPtr aAsyncHandle);
        void SyncActive(bool aIsSubscribe, String aRealName, String aEmail);
        void BeginActive(bool aIsSubscribe, String aRealName, String aEmail, CpProxy.CallbackAsyncComplete aCallback);
        void EndActive(IntPtr aAsyncHandle);
        void SyncGetActiveStatus(out String aActiveStatus);
        void BeginGetActiveStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetActiveStatus(IntPtr aAsyncHandle, out String aActiveStatus);
        void SyncCheckUpdate();
        void BeginCheckUpdate(CpProxy.CallbackAsyncComplete aCallback);
        void EndCheckUpdate(IntPtr aAsyncHandle);
        void SyncResetDisplay();
        void BeginResetDisplay(CpProxy.CallbackAsyncComplete aCallback);
        void EndResetDisplay(IntPtr aAsyncHandle);
        void SyncGetHardWareInfo(out String aHardWareInfo);
        void BeginGetHardWareInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetHardWareInfo(IntPtr aAsyncHandle, out String aHardWareInfo);
        void SyncSetRoomName(String aRoomName);
        void BeginSetRoomName(String aRoomName, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetRoomName(IntPtr aAsyncHandle);
        void SyncGetVolumeControl(out bool aVolumeControl);
        void BeginGetVolumeControl(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetVolumeControl(IntPtr aAsyncHandle, out bool aVolumeControl);
        void SyncSetVolumeControl(bool aVolumeControl);
        void BeginSetVolumeControl(bool aVolumeControl, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetVolumeControl(IntPtr aAsyncHandle);
        void SyncGetWaitingTime(out String aWaitingTime);
        void BeginGetWaitingTime(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetWaitingTime(IntPtr aAsyncHandle, out String aWaitingTime);
        void SyncSetWaitingTime(String aWaitingTime);
        void BeginSetWaitingTime(String aWaitingTime, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetWaitingTime(IntPtr aAsyncHandle);
        void SyncGetOutChannel(out uint aChannelNum, out String aCurrentChannel, out String aOutChannel);
        void BeginGetOutChannel(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetOutChannel(IntPtr aAsyncHandle, out uint aChannelNum, out String aCurrentChannel, out String aOutChannel);
        void SyncSetOutChannel(String aChannel);
        void BeginSetOutChannel(String aChannel, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetOutChannel(IntPtr aAsyncHandle);
        void SyncSetUpnpType(String aUpnpType);
        void BeginSetUpnpType(String aUpnpType, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetUpnpType(IntPtr aAsyncHandle);
        void SyncGetUpnpType(out String aUpnpType);
        void BeginGetUpnpType(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetUpnpType(IntPtr aAsyncHandle, out String aUpnpType);
        void SyncSetDsdNativeStatus(String aStatus, String aSampleFormat);
        void BeginSetDsdNativeStatus(String aStatus, String aSampleFormat, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetDsdNativeStatus(IntPtr aAsyncHandle);
        void SyncGetDsdNativeStatus(out String aStatus, out String aSampleFormat);
        void BeginGetDsdNativeStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDsdNativeStatus(IntPtr aAsyncHandle, out String aStatus, out String aSampleFormat);
        void SyncSetPasswordProtect(String aProtect, String aProtectPassword);
        void BeginSetPasswordProtect(String aProtect, String aProtectPassword, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetPasswordProtect(IntPtr aAsyncHandle);
        void SyncGetPasswordProtect(out String aProtect, out String aProtectPassword);
        void BeginGetPasswordProtect(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetPasswordProtect(IntPtr aAsyncHandle, out String aProtect, out String aProtectPassword);
        void SyncGetUpdateInfo(out String aVersion, out String aProgress);
        void BeginGetUpdateInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetUpdateInfo(IntPtr aAsyncHandle, out String aVersion, out String aProgress);
        void SyncGetWirelessList(String aInterFace, out uint aNumber, out String aCurrentUse, out String aWirelessList);
        void BeginGetWirelessList(String aInterFace, CpProxy.CallbackAsyncComplete aCallback);
        void EndGetWirelessList(IntPtr aAsyncHandle, out uint aNumber, out String aCurrentUse, out String aWirelessList);
        void SyncGetIpAddress(String aInterFace, out String aIpAddress, out String aNetMask, out String aGateWay, out String aDNS, out String aDHCP);
        void BeginGetIpAddress(String aInterFace, CpProxy.CallbackAsyncComplete aCallback);
        void EndGetIpAddress(IntPtr aAsyncHandle, out String aIpAddress, out String aNetMask, out String aGateWay, out String aDNS, out String aDHCP);
        void SyncSetNetWork(String aInterFace, String aIpAddress, String aNetMask, String aGateWay, String aDNS, String aSsid, String aPassWord, String aEncrypType);
        void BeginSetNetWork(String aInterFace, String aIpAddress, String aNetMask, String aGateWay, String aDNS, String aSsid, String aPassWord, String aEncrypType, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetNetWork(IntPtr aAsyncHandle);
        void SyncGetNetInterface(out uint aInterfaceNum, out String aCurrentUse, out String aInterfaceList);
        void BeginGetNetInterface(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetNetInterface(IntPtr aAsyncHandle, out uint aInterfaceNum, out String aCurrentUse, out String aInterfaceList);
        void SyncGetHaltStatus(out bool aHaltStatus);
        void BeginGetHaltStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetHaltStatus(IntPtr aAsyncHandle, out bool aHaltStatus);
        void SyncSetHaltStatus(bool aHaltStatus);
        void BeginSetHaltStatus(bool aHaltStatus, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetHaltStatus(IntPtr aAsyncHandle);
        void SyncGetFilterMode(out String aFilterMode, out String aFilterModeList);
        void BeginGetFilterMode(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetFilterMode(IntPtr aAsyncHandle, out String aFilterMode, out String aFilterModeList);
        void SyncSetFilterMode(String aFilterMode);
        void BeginSetFilterMode(String aFilterMode, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetFilterMode(IntPtr aAsyncHandle);
        void SyncSetSourceVisible(String aSourceName, bool aVisible);
        void BeginSetSourceVisible(String aSourceName, bool aVisible, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetSourceVisible(IntPtr aAsyncHandle);
        void SyncGetSourceVisible(out String aVisibleInfo);
        void BeginGetSourceVisible(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSourceVisible(IntPtr aAsyncHandle, out String aVisibleInfo);
        void SyncSetLEDMode(String aLEDMode);
        void BeginSetLEDMode(String aLEDMode, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetLEDMode(IntPtr aAsyncHandle);
        void SyncGetLEDMode(out String aLEDMode, out String aLEDModeList);
        void BeginGetLEDMode(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetLEDMode(IntPtr aAsyncHandle, out String aLEDMode, out String aLEDModeList);
        void SyncSetKeyMode(String aKeyName, String aKeyMode);
        void BeginSetKeyMode(String aKeyName, String aKeyMode, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetKeyMode(IntPtr aAsyncHandle);
        void SyncGetKeyMode(out String aSideKeyMode, out String aMiddleKeyMode, out String aKeyModeList);
        void BeginGetKeyMode(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetKeyMode(IntPtr aAsyncHandle, out String aSideKeyMode, out String aMiddleKeyMode, out String aKeyModeList);
        void SyncSetBrightness(String aBrightness);
        void BeginSetBrightness(String aBrightness, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetBrightness(IntPtr aAsyncHandle);
        void SyncGetBrightness(out String aBrightness, out String aList);
        void BeginGetBrightness(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetBrightness(IntPtr aAsyncHandle, out String aBrightness, out String aList);
        void SyncSetDisplayMode(String aDisplayMode);
        void BeginSetDisplayMode(String aDisplayMode, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetDisplayMode(IntPtr aAsyncHandle);
        void SyncGetDisplayMode(out String aDisplayMode, out String aDisplayModeList);
        void BeginGetDisplayMode(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDisplayMode(IntPtr aAsyncHandle, out String aDisplayMode, out String aDisplayModeList);
        void SyncGetDACPhase(out uint aPhase);
        void BeginGetDACPhase(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDACPhase(IntPtr aAsyncHandle, out uint aPhase);
        void SyncSetDACPhase(uint aPhase);
        void BeginSetDACPhase(uint aPhase, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetDACPhase(IntPtr aAsyncHandle);
        void SyncGetDACBalance(out uint aBalance);
        void BeginGetDACBalance(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDACBalance(IntPtr aAsyncHandle, out uint aBalance);
        void SyncSetDACBalance(uint aBalance);
        void BeginSetDACBalance(uint aBalance, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetDACBalance(IntPtr aAsyncHandle);
        void SyncSetEnableResampler(bool aEnableResampler);
        void BeginSetEnableResampler(bool aEnableResampler, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetEnableResampler(IntPtr aAsyncHandle);
        void SyncSetEnableSpeaker(bool aEnableSpeaker);
        void BeginSetEnableSpeaker(bool aEnableSpeaker, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetEnableSpeaker(IntPtr aAsyncHandle);
        void SyncSetEnableEqualizer(bool aEnableEqualizer);
        void BeginSetEnableEqualizer(bool aEnableEqualizer, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetEnableEqualizer(IntPtr aAsyncHandle);
        void SyncSetEnableDirac(bool aEnableDirac);
        void BeginSetEnableDirac(bool aEnableDirac, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetEnableDirac(IntPtr aAsyncHandle);
        void SetPropertyMessageOutChanged(System.Action aMessageOutChanged);
        String PropertyMessageOut();
        void SetPropertyAliveChanged(System.Action aAliveChanged);
        bool PropertyAlive();
        void SetPropertyCurrentActionChanged(System.Action aCurrentActionChanged);
        uint PropertyCurrentAction();
        void SetPropertyRestartChanged(System.Action aRestartChanged);
        bool PropertyRestart();
        void SetPropertyNumberChanged(System.Action aNumberChanged);
        uint PropertyNumber();
        void SetPropertyRoomNameChanged(System.Action aRoomNameChanged);
        String PropertyRoomName();
        void SetPropertyInterFaceChanged(System.Action aInterFaceChanged);
        String PropertyInterFace();
        void SetPropertyNetMaskChanged(System.Action aNetMaskChanged);
        String PropertyNetMask();
        void SetPropertyGateWayChanged(System.Action aGateWayChanged);
        String PropertyGateWay();
        void SetPropertyDNSChanged(System.Action aDNSChanged);
        String PropertyDNS();
        void SetPropertyDHCPChanged(System.Action aDHCPChanged);
        String PropertyDHCP();
        void SetPropertySsidChanged(System.Action aSsidChanged);
        String PropertySsid();
        void SetPropertyPassWordChanged(System.Action aPassWordChanged);
        String PropertyPassWord();
        void SetPropertyEncrypTypeChanged(System.Action aEncrypTypeChanged);
        String PropertyEncrypType();
        void SetPropertyChannelChanged(System.Action aChannelChanged);
        String PropertyChannel();
        void SetPropertyUpnpTypeChanged(System.Action aUpnpTypeChanged);
        String PropertyUpnpType();
        void SetPropertyStatusChanged(System.Action aStatusChanged);
        String PropertyStatus();
        void SetPropertySampleFormatChanged(System.Action aSampleFormatChanged);
        String PropertySampleFormat();
        void SetPropertyIpAddressChanged(System.Action aIpAddressChanged);
        String PropertyIpAddress();
        void SetPropertyProtectChanged(System.Action aProtectChanged);
        String PropertyProtect();
        void SetPropertyProtectPasswordChanged(System.Action aProtectPasswordChanged);
        String PropertyProtectPassword();
        void SetPropertyActiveStatusChanged(System.Action aActiveStatusChanged);
        String PropertyActiveStatus();
        void SetPropertyTimeChanged(System.Action aTimeChanged);
        String PropertyTime();
        void SetPropertyVolumeControlChanged(System.Action aVolumeControlChanged);
        bool PropertyVolumeControl();
    }

    internal class SyncLogInAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iMessageOut;

        public SyncLogInAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String MessageOut()
        {
            return iMessageOut;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndLogIn(aAsyncHandle, out iMessageOut);
        }
    };

    internal class SyncLogOutAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncLogOutAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndLogOut(aAsyncHandle);
        }
    };

    internal class SyncCancelLogInAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncCancelLogInAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndCancelLogIn(aAsyncHandle);
        }
    };

    internal class SyncIsAliveAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private bool iAlive;

        public SyncIsAliveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public bool Alive()
        {
            return iAlive;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndIsAlive(aAsyncHandle, out iAlive);
        }
    };

    internal class SyncUpdateAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndUpdate(aAsyncHandle);
        }
    };

    internal class SyncActiveAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncActiveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndActive(aAsyncHandle);
        }
    };

    internal class SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iActiveStatus;

        public SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String ActiveStatus()
        {
            return iActiveStatus;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetActiveStatus(aAsyncHandle, out iActiveStatus);
        }
    };

    internal class SyncCheckUpdateAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncCheckUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndCheckUpdate(aAsyncHandle);
        }
    };

    internal class SyncResetDisplayAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncResetDisplayAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndResetDisplay(aAsyncHandle);
        }
    };

    internal class SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iHardWareInfo;

        public SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String HardWareInfo()
        {
            return iHardWareInfo;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetHardWareInfo(aAsyncHandle, out iHardWareInfo);
        }
    };

    internal class SyncSetRoomNameAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetRoomNameAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetRoomName(aAsyncHandle);
        }
    };

    internal class SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private bool iVolumeControl;

        public SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public bool VolumeControl()
        {
            return iVolumeControl;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetVolumeControl(aAsyncHandle, out iVolumeControl);
        }
    };

    internal class SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetVolumeControl(aAsyncHandle);
        }
    };

    internal class SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iWaitingTime;

        public SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String WaitingTime()
        {
            return iWaitingTime;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetWaitingTime(aAsyncHandle, out iWaitingTime);
        }
    };

    internal class SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetWaitingTime(aAsyncHandle);
        }
    };

    internal class SyncGetOutChannelAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private uint iChannelNum;
        private String iCurrentChannel;
        private String iOutChannel;

        public SyncGetOutChannelAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public uint ChannelNum()
        {
            return iChannelNum;
        }
        public String CurrentChannel()
        {
            return iCurrentChannel;
        }
        public String OutChannel()
        {
            return iOutChannel;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetOutChannel(aAsyncHandle, out iChannelNum, out iCurrentChannel, out iOutChannel);
        }
    };

    internal class SyncSetOutChannelAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetOutChannelAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetOutChannel(aAsyncHandle);
        }
    };

    internal class SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetUpnpType(aAsyncHandle);
        }
    };

    internal class SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iUpnpType;

        public SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String UpnpType()
        {
            return iUpnpType;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetUpnpType(aAsyncHandle, out iUpnpType);
        }
    };

    internal class SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetDsdNativeStatus(aAsyncHandle);
        }
    };

    internal class SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iStatus;
        private String iSampleFormat;

        public SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String Status()
        {
            return iStatus;
        }
        public String SampleFormat()
        {
            return iSampleFormat;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDsdNativeStatus(aAsyncHandle, out iStatus, out iSampleFormat);
        }
    };

    internal class SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetPasswordProtect(aAsyncHandle);
        }
    };

    internal class SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iProtect;
        private String iProtectPassword;

        public SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String Protect()
        {
            return iProtect;
        }
        public String ProtectPassword()
        {
            return iProtectPassword;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetPasswordProtect(aAsyncHandle, out iProtect, out iProtectPassword);
        }
    };

    internal class SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iVersion;
        private String iProgress;

        public SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String Version()
        {
            return iVersion;
        }
        public String Progress()
        {
            return iProgress;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetUpdateInfo(aAsyncHandle, out iVersion, out iProgress);
        }
    };

    internal class SyncGetWirelessListAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private uint iNumber;
        private String iCurrentUse;
        private String iWirelessList;

        public SyncGetWirelessListAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public uint Number()
        {
            return iNumber;
        }
        public String CurrentUse()
        {
            return iCurrentUse;
        }
        public String WirelessList()
        {
            return iWirelessList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetWirelessList(aAsyncHandle, out iNumber, out iCurrentUse, out iWirelessList);
        }
    };

    internal class SyncGetIpAddressAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iIpAddress;
        private String iNetMask;
        private String iGateWay;
        private String iDNS;
        private String iDHCP;

        public SyncGetIpAddressAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String IpAddress()
        {
            return iIpAddress;
        }
        public String NetMask()
        {
            return iNetMask;
        }
        public String GateWay()
        {
            return iGateWay;
        }
        public String DNS()
        {
            return iDNS;
        }
        public String DHCP()
        {
            return iDHCP;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetIpAddress(aAsyncHandle, out iIpAddress, out iNetMask, out iGateWay, out iDNS, out iDHCP);
        }
    };

    internal class SyncSetNetWorkAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetNetWorkAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetNetWork(aAsyncHandle);
        }
    };

    internal class SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private uint iInterfaceNum;
        private String iCurrentUse;
        private String iInterfaceList;

        public SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public uint InterfaceNum()
        {
            return iInterfaceNum;
        }
        public String CurrentUse()
        {
            return iCurrentUse;
        }
        public String InterfaceList()
        {
            return iInterfaceList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetNetInterface(aAsyncHandle, out iInterfaceNum, out iCurrentUse, out iInterfaceList);
        }
    };

    internal class SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private bool iHaltStatus;

        public SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public bool HaltStatus()
        {
            return iHaltStatus;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetHaltStatus(aAsyncHandle, out iHaltStatus);
        }
    };

    internal class SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetHaltStatus(aAsyncHandle);
        }
    };

    internal class SyncGetFilterModeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iFilterMode;
        private String iFilterModeList;

        public SyncGetFilterModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String FilterMode()
        {
            return iFilterMode;
        }
        public String FilterModeList()
        {
            return iFilterModeList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetFilterMode(aAsyncHandle, out iFilterMode, out iFilterModeList);
        }
    };

    internal class SyncSetFilterModeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetFilterModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetFilterMode(aAsyncHandle);
        }
    };

    internal class SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetSourceVisible(aAsyncHandle);
        }
    };

    internal class SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iVisibleInfo;

        public SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String VisibleInfo()
        {
            return iVisibleInfo;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetSourceVisible(aAsyncHandle, out iVisibleInfo);
        }
    };

    internal class SyncSetLEDModeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetLEDModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetLEDMode(aAsyncHandle);
        }
    };

    internal class SyncGetLEDModeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iLEDMode;
        private String iLEDModeList;

        public SyncGetLEDModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String LEDMode()
        {
            return iLEDMode;
        }
        public String LEDModeList()
        {
            return iLEDModeList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetLEDMode(aAsyncHandle, out iLEDMode, out iLEDModeList);
        }
    };

    internal class SyncSetKeyModeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetKeyModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetKeyMode(aAsyncHandle);
        }
    };

    internal class SyncGetKeyModeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iSideKeyMode;
        private String iMiddleKeyMode;
        private String iKeyModeList;

        public SyncGetKeyModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String SideKeyMode()
        {
            return iSideKeyMode;
        }
        public String MiddleKeyMode()
        {
            return iMiddleKeyMode;
        }
        public String KeyModeList()
        {
            return iKeyModeList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetKeyMode(aAsyncHandle, out iSideKeyMode, out iMiddleKeyMode, out iKeyModeList);
        }
    };

    internal class SyncSetBrightnessAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetBrightnessAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetBrightness(aAsyncHandle);
        }
    };

    internal class SyncGetBrightnessAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iBrightness;
        private String iList;

        public SyncGetBrightnessAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String Brightness()
        {
            return iBrightness;
        }
        public String List()
        {
            return iList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetBrightness(aAsyncHandle, out iBrightness, out iList);
        }
    };

    internal class SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetDisplayMode(aAsyncHandle);
        }
    };

    internal class SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private String iDisplayMode;
        private String iDisplayModeList;

        public SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String DisplayMode()
        {
            return iDisplayMode;
        }
        public String DisplayModeList()
        {
            return iDisplayModeList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDisplayMode(aAsyncHandle, out iDisplayMode, out iDisplayModeList);
        }
    };

    internal class SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private uint iPhase;

        public SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public uint Phase()
        {
            return iPhase;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDACPhase(aAsyncHandle, out iPhase);
        }
    };

    internal class SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetDACPhase(aAsyncHandle);
        }
    };

    internal class SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
        private uint iBalance;

        public SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        public uint Balance()
        {
            return iBalance;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDACBalance(aAsyncHandle, out iBalance);
        }
    };

    internal class SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetDACBalance(aAsyncHandle);
        }
    };

    internal class SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetEnableResampler(aAsyncHandle);
        }
    };

    internal class SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetEnableSpeaker(aAsyncHandle);
        }
    };

    internal class SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetEnableEqualizer(aAsyncHandle);
        }
    };

    internal class SyncSetEnableDiracAvOpenhomeOrgHardwareConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

        public SyncSetEnableDiracAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetEnableDirac(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:HardwareConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgHardwareConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgHardwareConfig1
    {
        private OpenHome.Net.Core.Action iActionLogIn;
        private OpenHome.Net.Core.Action iActionLogOut;
        private OpenHome.Net.Core.Action iActionCancelLogIn;
        private OpenHome.Net.Core.Action iActionIsAlive;
        private OpenHome.Net.Core.Action iActionUpdate;
        private OpenHome.Net.Core.Action iActionActive;
        private OpenHome.Net.Core.Action iActionGetActiveStatus;
        private OpenHome.Net.Core.Action iActionCheckUpdate;
        private OpenHome.Net.Core.Action iActionResetDisplay;
        private OpenHome.Net.Core.Action iActionGetHardWareInfo;
        private OpenHome.Net.Core.Action iActionSetRoomName;
        private OpenHome.Net.Core.Action iActionGetVolumeControl;
        private OpenHome.Net.Core.Action iActionSetVolumeControl;
        private OpenHome.Net.Core.Action iActionGetWaitingTime;
        private OpenHome.Net.Core.Action iActionSetWaitingTime;
        private OpenHome.Net.Core.Action iActionGetOutChannel;
        private OpenHome.Net.Core.Action iActionSetOutChannel;
        private OpenHome.Net.Core.Action iActionSetUpnpType;
        private OpenHome.Net.Core.Action iActionGetUpnpType;
        private OpenHome.Net.Core.Action iActionSetDsdNativeStatus;
        private OpenHome.Net.Core.Action iActionGetDsdNativeStatus;
        private OpenHome.Net.Core.Action iActionSetPasswordProtect;
        private OpenHome.Net.Core.Action iActionGetPasswordProtect;
        private OpenHome.Net.Core.Action iActionGetUpdateInfo;
        private OpenHome.Net.Core.Action iActionGetWirelessList;
        private OpenHome.Net.Core.Action iActionGetIpAddress;
        private OpenHome.Net.Core.Action iActionSetNetWork;
        private OpenHome.Net.Core.Action iActionGetNetInterface;
        private OpenHome.Net.Core.Action iActionGetHaltStatus;
        private OpenHome.Net.Core.Action iActionSetHaltStatus;
        private OpenHome.Net.Core.Action iActionGetFilterMode;
        private OpenHome.Net.Core.Action iActionSetFilterMode;
        private OpenHome.Net.Core.Action iActionSetSourceVisible;
        private OpenHome.Net.Core.Action iActionGetSourceVisible;
        private OpenHome.Net.Core.Action iActionSetLEDMode;
        private OpenHome.Net.Core.Action iActionGetLEDMode;
        private OpenHome.Net.Core.Action iActionSetKeyMode;
        private OpenHome.Net.Core.Action iActionGetKeyMode;
        private OpenHome.Net.Core.Action iActionSetBrightness;
        private OpenHome.Net.Core.Action iActionGetBrightness;
        private OpenHome.Net.Core.Action iActionSetDisplayMode;
        private OpenHome.Net.Core.Action iActionGetDisplayMode;
        private OpenHome.Net.Core.Action iActionGetDACPhase;
        private OpenHome.Net.Core.Action iActionSetDACPhase;
        private OpenHome.Net.Core.Action iActionGetDACBalance;
        private OpenHome.Net.Core.Action iActionSetDACBalance;
        private OpenHome.Net.Core.Action iActionSetEnableResampler;
        private OpenHome.Net.Core.Action iActionSetEnableSpeaker;
        private OpenHome.Net.Core.Action iActionSetEnableEqualizer;
        private OpenHome.Net.Core.Action iActionSetEnableDirac;
        private PropertyString iMessageOut;
        private PropertyBool iAlive;
        private PropertyUint iCurrentAction;
        private PropertyBool iRestart;
        private PropertyUint iNumber;
        private PropertyString iRoomName;
        private PropertyString iInterFace;
        private PropertyString iNetMask;
        private PropertyString iGateWay;
        private PropertyString iDNS;
        private PropertyString iDHCP;
        private PropertyString iSsid;
        private PropertyString iPassWord;
        private PropertyString iEncrypType;
        private PropertyString iChannel;
        private PropertyString iUpnpType;
        private PropertyString iStatus;
        private PropertyString iSampleFormat;
        private PropertyString iIpAddress;
        private PropertyString iProtect;
        private PropertyString iProtectPassword;
        private PropertyString iActiveStatus;
        private PropertyString iTime;
        private PropertyBool iVolumeControl;
        private System.Action iMessageOutChanged;
        private System.Action iAliveChanged;
        private System.Action iCurrentActionChanged;
        private System.Action iRestartChanged;
        private System.Action iNumberChanged;
        private System.Action iRoomNameChanged;
        private System.Action iInterFaceChanged;
        private System.Action iNetMaskChanged;
        private System.Action iGateWayChanged;
        private System.Action iDNSChanged;
        private System.Action iDHCPChanged;
        private System.Action iSsidChanged;
        private System.Action iPassWordChanged;
        private System.Action iEncrypTypeChanged;
        private System.Action iChannelChanged;
        private System.Action iUpnpTypeChanged;
        private System.Action iStatusChanged;
        private System.Action iSampleFormatChanged;
        private System.Action iIpAddressChanged;
        private System.Action iProtectChanged;
        private System.Action iProtectPasswordChanged;
        private System.Action iActiveStatusChanged;
        private System.Action iTimeChanged;
        private System.Action iVolumeControlChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgHardwareConfig1(ICpDevice aDevice)
            : base("av-openhome-org", "HardwareConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionLogIn = new OpenHome.Net.Core.Action("LogIn");
            param = new ParameterString("ServiceName", allowedValues);
            iActionLogIn.AddInputParameter(param);
            param = new ParameterString("MessageIn", allowedValues);
            iActionLogIn.AddInputParameter(param);
            param = new ParameterString("MessageOut", allowedValues);
            iActionLogIn.AddOutputParameter(param);

            iActionLogOut = new OpenHome.Net.Core.Action("LogOut");
            param = new ParameterString("ServiceName", allowedValues);
            iActionLogOut.AddInputParameter(param);

            iActionCancelLogIn = new OpenHome.Net.Core.Action("CancelLogIn");
            param = new ParameterString("ServiceName", allowedValues);
            iActionCancelLogIn.AddInputParameter(param);

            iActionIsAlive = new OpenHome.Net.Core.Action("IsAlive");
            param = new ParameterBool("Alive");
            iActionIsAlive.AddOutputParameter(param);

            iActionUpdate = new OpenHome.Net.Core.Action("Update");

            iActionActive = new OpenHome.Net.Core.Action("Active");
            param = new ParameterBool("IsSubscribe");
            iActionActive.AddInputParameter(param);
            param = new ParameterString("RealName", allowedValues);
            iActionActive.AddInputParameter(param);
            param = new ParameterString("Email", allowedValues);
            iActionActive.AddInputParameter(param);

            iActionGetActiveStatus = new OpenHome.Net.Core.Action("GetActiveStatus");
            param = new ParameterString("ActiveStatus", allowedValues);
            iActionGetActiveStatus.AddOutputParameter(param);

            iActionCheckUpdate = new OpenHome.Net.Core.Action("CheckUpdate");

            iActionResetDisplay = new OpenHome.Net.Core.Action("ResetDisplay");

            iActionGetHardWareInfo = new OpenHome.Net.Core.Action("GetHardWareInfo");
            param = new ParameterString("HardWareInfo", allowedValues);
            iActionGetHardWareInfo.AddOutputParameter(param);

            iActionSetRoomName = new OpenHome.Net.Core.Action("SetRoomName");
            param = new ParameterString("RoomName", allowedValues);
            iActionSetRoomName.AddInputParameter(param);

            iActionGetVolumeControl = new OpenHome.Net.Core.Action("GetVolumeControl");
            param = new ParameterBool("VolumeControl");
            iActionGetVolumeControl.AddOutputParameter(param);

            iActionSetVolumeControl = new OpenHome.Net.Core.Action("SetVolumeControl");
            param = new ParameterBool("VolumeControl");
            iActionSetVolumeControl.AddInputParameter(param);

            iActionGetWaitingTime = new OpenHome.Net.Core.Action("GetWaitingTime");
            param = new ParameterString("WaitingTime", allowedValues);
            iActionGetWaitingTime.AddOutputParameter(param);

            iActionSetWaitingTime = new OpenHome.Net.Core.Action("SetWaitingTime");
            param = new ParameterString("WaitingTime", allowedValues);
            iActionSetWaitingTime.AddInputParameter(param);

            iActionGetOutChannel = new OpenHome.Net.Core.Action("GetOutChannel");
            param = new ParameterUint("ChannelNum");
            iActionGetOutChannel.AddOutputParameter(param);
            param = new ParameterString("CurrentChannel", allowedValues);
            iActionGetOutChannel.AddOutputParameter(param);
            param = new ParameterString("OutChannel", allowedValues);
            iActionGetOutChannel.AddOutputParameter(param);

            iActionSetOutChannel = new OpenHome.Net.Core.Action("SetOutChannel");
            param = new ParameterString("Channel", allowedValues);
            iActionSetOutChannel.AddInputParameter(param);

            iActionSetUpnpType = new OpenHome.Net.Core.Action("SetUpnpType");
            param = new ParameterString("UpnpType", allowedValues);
            iActionSetUpnpType.AddInputParameter(param);

            iActionGetUpnpType = new OpenHome.Net.Core.Action("GetUpnpType");
            param = new ParameterString("UpnpType", allowedValues);
            iActionGetUpnpType.AddOutputParameter(param);

            iActionSetDsdNativeStatus = new OpenHome.Net.Core.Action("SetDsdNativeStatus");
            param = new ParameterString("Status", allowedValues);
            iActionSetDsdNativeStatus.AddInputParameter(param);
            param = new ParameterString("SampleFormat", allowedValues);
            iActionSetDsdNativeStatus.AddInputParameter(param);

            iActionGetDsdNativeStatus = new OpenHome.Net.Core.Action("GetDsdNativeStatus");
            param = new ParameterString("Status", allowedValues);
            iActionGetDsdNativeStatus.AddOutputParameter(param);
            param = new ParameterString("SampleFormat", allowedValues);
            iActionGetDsdNativeStatus.AddOutputParameter(param);

            iActionSetPasswordProtect = new OpenHome.Net.Core.Action("SetPasswordProtect");
            param = new ParameterString("Protect", allowedValues);
            iActionSetPasswordProtect.AddInputParameter(param);
            param = new ParameterString("ProtectPassword", allowedValues);
            iActionSetPasswordProtect.AddInputParameter(param);

            iActionGetPasswordProtect = new OpenHome.Net.Core.Action("GetPasswordProtect");
            param = new ParameterString("Protect", allowedValues);
            iActionGetPasswordProtect.AddOutputParameter(param);
            param = new ParameterString("ProtectPassword", allowedValues);
            iActionGetPasswordProtect.AddOutputParameter(param);

            iActionGetUpdateInfo = new OpenHome.Net.Core.Action("GetUpdateInfo");
            param = new ParameterString("Version", allowedValues);
            iActionGetUpdateInfo.AddOutputParameter(param);
            param = new ParameterString("Progress", allowedValues);
            iActionGetUpdateInfo.AddOutputParameter(param);

            iActionGetWirelessList = new OpenHome.Net.Core.Action("GetWirelessList");
            param = new ParameterString("InterFace", allowedValues);
            iActionGetWirelessList.AddInputParameter(param);
            param = new ParameterUint("Number");
            iActionGetWirelessList.AddOutputParameter(param);
            param = new ParameterString("CurrentUse", allowedValues);
            iActionGetWirelessList.AddOutputParameter(param);
            param = new ParameterString("WirelessList", allowedValues);
            iActionGetWirelessList.AddOutputParameter(param);

            iActionGetIpAddress = new OpenHome.Net.Core.Action("GetIpAddress");
            param = new ParameterString("InterFace", allowedValues);
            iActionGetIpAddress.AddInputParameter(param);
            param = new ParameterString("IpAddress", allowedValues);
            iActionGetIpAddress.AddOutputParameter(param);
            param = new ParameterString("NetMask", allowedValues);
            iActionGetIpAddress.AddOutputParameter(param);
            param = new ParameterString("GateWay", allowedValues);
            iActionGetIpAddress.AddOutputParameter(param);
            param = new ParameterString("DNS", allowedValues);
            iActionGetIpAddress.AddOutputParameter(param);
            param = new ParameterString("DHCP", allowedValues);
            iActionGetIpAddress.AddOutputParameter(param);

            iActionSetNetWork = new OpenHome.Net.Core.Action("SetNetWork");
            param = new ParameterString("InterFace", allowedValues);
            iActionSetNetWork.AddInputParameter(param);
            param = new ParameterString("IpAddress", allowedValues);
            iActionSetNetWork.AddInputParameter(param);
            param = new ParameterString("NetMask", allowedValues);
            iActionSetNetWork.AddInputParameter(param);
            param = new ParameterString("GateWay", allowedValues);
            iActionSetNetWork.AddInputParameter(param);
            param = new ParameterString("DNS", allowedValues);
            iActionSetNetWork.AddInputParameter(param);
            param = new ParameterString("Ssid", allowedValues);
            iActionSetNetWork.AddInputParameter(param);
            param = new ParameterString("PassWord", allowedValues);
            iActionSetNetWork.AddInputParameter(param);
            param = new ParameterString("EncrypType", allowedValues);
            iActionSetNetWork.AddInputParameter(param);

            iActionGetNetInterface = new OpenHome.Net.Core.Action("GetNetInterface");
            param = new ParameterUint("InterfaceNum");
            iActionGetNetInterface.AddOutputParameter(param);
            param = new ParameterString("CurrentUse", allowedValues);
            iActionGetNetInterface.AddOutputParameter(param);
            param = new ParameterString("InterfaceList", allowedValues);
            iActionGetNetInterface.AddOutputParameter(param);

            iActionGetHaltStatus = new OpenHome.Net.Core.Action("GetHaltStatus");
            param = new ParameterBool("HaltStatus");
            iActionGetHaltStatus.AddOutputParameter(param);

            iActionSetHaltStatus = new OpenHome.Net.Core.Action("SetHaltStatus");
            param = new ParameterBool("HaltStatus");
            iActionSetHaltStatus.AddInputParameter(param);

            iActionGetFilterMode = new OpenHome.Net.Core.Action("GetFilterMode");
            param = new ParameterString("FilterMode", allowedValues);
            iActionGetFilterMode.AddOutputParameter(param);
            param = new ParameterString("FilterModeList", allowedValues);
            iActionGetFilterMode.AddOutputParameter(param);

            iActionSetFilterMode = new OpenHome.Net.Core.Action("SetFilterMode");
            param = new ParameterString("FilterMode", allowedValues);
            iActionSetFilterMode.AddInputParameter(param);

            iActionSetSourceVisible = new OpenHome.Net.Core.Action("SetSourceVisible");
            param = new ParameterString("SourceName", allowedValues);
            iActionSetSourceVisible.AddInputParameter(param);
            param = new ParameterBool("Visible");
            iActionSetSourceVisible.AddInputParameter(param);

            iActionGetSourceVisible = new OpenHome.Net.Core.Action("GetSourceVisible");
            param = new ParameterString("VisibleInfo", allowedValues);
            iActionGetSourceVisible.AddOutputParameter(param);

            iActionSetLEDMode = new OpenHome.Net.Core.Action("SetLEDMode");
            param = new ParameterString("LEDMode", allowedValues);
            iActionSetLEDMode.AddInputParameter(param);

            iActionGetLEDMode = new OpenHome.Net.Core.Action("GetLEDMode");
            param = new ParameterString("LEDMode", allowedValues);
            iActionGetLEDMode.AddOutputParameter(param);
            param = new ParameterString("LEDModeList", allowedValues);
            iActionGetLEDMode.AddOutputParameter(param);

            iActionSetKeyMode = new OpenHome.Net.Core.Action("SetKeyMode");
            param = new ParameterString("KeyName", allowedValues);
            iActionSetKeyMode.AddInputParameter(param);
            param = new ParameterString("KeyMode", allowedValues);
            iActionSetKeyMode.AddInputParameter(param);

            iActionGetKeyMode = new OpenHome.Net.Core.Action("GetKeyMode");
            param = new ParameterString("SideKeyMode", allowedValues);
            iActionGetKeyMode.AddOutputParameter(param);
            param = new ParameterString("MiddleKeyMode", allowedValues);
            iActionGetKeyMode.AddOutputParameter(param);
            param = new ParameterString("KeyModeList", allowedValues);
            iActionGetKeyMode.AddOutputParameter(param);

            iActionSetBrightness = new OpenHome.Net.Core.Action("SetBrightness");
            param = new ParameterString("Brightness", allowedValues);
            iActionSetBrightness.AddInputParameter(param);

            iActionGetBrightness = new OpenHome.Net.Core.Action("GetBrightness");
            param = new ParameterString("Brightness", allowedValues);
            iActionGetBrightness.AddOutputParameter(param);
            param = new ParameterString("List", allowedValues);
            iActionGetBrightness.AddOutputParameter(param);

            iActionSetDisplayMode = new OpenHome.Net.Core.Action("SetDisplayMode");
            param = new ParameterString("DisplayMode", allowedValues);
            iActionSetDisplayMode.AddInputParameter(param);

            iActionGetDisplayMode = new OpenHome.Net.Core.Action("GetDisplayMode");
            param = new ParameterString("DisplayMode", allowedValues);
            iActionGetDisplayMode.AddOutputParameter(param);
            param = new ParameterString("DisplayModeList", allowedValues);
            iActionGetDisplayMode.AddOutputParameter(param);

            iActionGetDACPhase = new OpenHome.Net.Core.Action("GetDACPhase");
            param = new ParameterUint("Phase");
            iActionGetDACPhase.AddOutputParameter(param);

            iActionSetDACPhase = new OpenHome.Net.Core.Action("SetDACPhase");
            param = new ParameterUint("Phase");
            iActionSetDACPhase.AddInputParameter(param);

            iActionGetDACBalance = new OpenHome.Net.Core.Action("GetDACBalance");
            param = new ParameterUint("Balance");
            iActionGetDACBalance.AddOutputParameter(param);

            iActionSetDACBalance = new OpenHome.Net.Core.Action("SetDACBalance");
            param = new ParameterUint("Balance");
            iActionSetDACBalance.AddInputParameter(param);

            iActionSetEnableResampler = new OpenHome.Net.Core.Action("SetEnableResampler");
            param = new ParameterBool("EnableResampler");
            iActionSetEnableResampler.AddInputParameter(param);

            iActionSetEnableSpeaker = new OpenHome.Net.Core.Action("SetEnableSpeaker");
            param = new ParameterBool("EnableSpeaker");
            iActionSetEnableSpeaker.AddInputParameter(param);

            iActionSetEnableEqualizer = new OpenHome.Net.Core.Action("SetEnableEqualizer");
            param = new ParameterBool("EnableEqualizer");
            iActionSetEnableEqualizer.AddInputParameter(param);

            iActionSetEnableDirac = new OpenHome.Net.Core.Action("SetEnableDirac");
            param = new ParameterBool("EnableDirac");
            iActionSetEnableDirac.AddInputParameter(param);

            iMessageOut = new PropertyString("MessageOut", MessageOutPropertyChanged);
            AddProperty(iMessageOut);
            iAlive = new PropertyBool("Alive", AlivePropertyChanged);
            AddProperty(iAlive);
            iCurrentAction = new PropertyUint("CurrentAction", CurrentActionPropertyChanged);
            AddProperty(iCurrentAction);
            iRestart = new PropertyBool("Restart", RestartPropertyChanged);
            AddProperty(iRestart);
            iNumber = new PropertyUint("Number", NumberPropertyChanged);
            AddProperty(iNumber);
            iRoomName = new PropertyString("RoomName", RoomNamePropertyChanged);
            AddProperty(iRoomName);
            iInterFace = new PropertyString("InterFace", InterFacePropertyChanged);
            AddProperty(iInterFace);
            iNetMask = new PropertyString("NetMask", NetMaskPropertyChanged);
            AddProperty(iNetMask);
            iGateWay = new PropertyString("GateWay", GateWayPropertyChanged);
            AddProperty(iGateWay);
            iDNS = new PropertyString("DNS", DNSPropertyChanged);
            AddProperty(iDNS);
            iDHCP = new PropertyString("DHCP", DHCPPropertyChanged);
            AddProperty(iDHCP);
            iSsid = new PropertyString("Ssid", SsidPropertyChanged);
            AddProperty(iSsid);
            iPassWord = new PropertyString("PassWord", PassWordPropertyChanged);
            AddProperty(iPassWord);
            iEncrypType = new PropertyString("EncrypType", EncrypTypePropertyChanged);
            AddProperty(iEncrypType);
            iChannel = new PropertyString("Channel", ChannelPropertyChanged);
            AddProperty(iChannel);
            iUpnpType = new PropertyString("UpnpType", UpnpTypePropertyChanged);
            AddProperty(iUpnpType);
            iStatus = new PropertyString("Status", StatusPropertyChanged);
            AddProperty(iStatus);
            iSampleFormat = new PropertyString("SampleFormat", SampleFormatPropertyChanged);
            AddProperty(iSampleFormat);
            iIpAddress = new PropertyString("IpAddress", IpAddressPropertyChanged);
            AddProperty(iIpAddress);
            iProtect = new PropertyString("Protect", ProtectPropertyChanged);
            AddProperty(iProtect);
            iProtectPassword = new PropertyString("ProtectPassword", ProtectPasswordPropertyChanged);
            AddProperty(iProtectPassword);
            iActiveStatus = new PropertyString("ActiveStatus", ActiveStatusPropertyChanged);
            AddProperty(iActiveStatus);
            iTime = new PropertyString("Time", TimePropertyChanged);
            AddProperty(iTime);
            iVolumeControl = new PropertyBool("VolumeControl", VolumeControlPropertyChanged);
            AddProperty(iVolumeControl);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aServiceName"></param>
        /// <param name="aMessageIn"></param>
        /// <param name="aMessageOut"></param>
        public void SyncLogIn(String aServiceName, String aMessageIn, out String aMessageOut)
        {
            SyncLogInAvOpenhomeOrgHardwareConfig1 sync = new SyncLogInAvOpenhomeOrgHardwareConfig1(this);
            BeginLogIn(aServiceName, aMessageIn, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aMessageOut = sync.MessageOut();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndLogIn().</remarks>
        /// <param name="aServiceName"></param>
        /// <param name="aMessageIn"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginLogIn(String aServiceName, String aMessageIn, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionLogIn, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionLogIn.InputParameter(inIndex++), aServiceName));
            invocation.AddInput(new ArgumentString((ParameterString)iActionLogIn.InputParameter(inIndex++), aMessageIn));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionLogIn.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aMessageOut"></param>
        public void EndLogIn(IntPtr aAsyncHandle, out String aMessageOut)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aMessageOut = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aServiceName"></param>
        public void SyncLogOut(String aServiceName)
        {
            SyncLogOutAvOpenhomeOrgHardwareConfig1 sync = new SyncLogOutAvOpenhomeOrgHardwareConfig1(this);
            BeginLogOut(aServiceName, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndLogOut().</remarks>
        /// <param name="aServiceName"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginLogOut(String aServiceName, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionLogOut, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionLogOut.InputParameter(inIndex++), aServiceName));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndLogOut(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aServiceName"></param>
        public void SyncCancelLogIn(String aServiceName)
        {
            SyncCancelLogInAvOpenhomeOrgHardwareConfig1 sync = new SyncCancelLogInAvOpenhomeOrgHardwareConfig1(this);
            BeginCancelLogIn(aServiceName, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndCancelLogIn().</remarks>
        /// <param name="aServiceName"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginCancelLogIn(String aServiceName, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionCancelLogIn, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionCancelLogIn.InputParameter(inIndex++), aServiceName));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndCancelLogIn(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aAlive"></param>
        public void SyncIsAlive(out bool aAlive)
        {
            SyncIsAliveAvOpenhomeOrgHardwareConfig1 sync = new SyncIsAliveAvOpenhomeOrgHardwareConfig1(this);
            BeginIsAlive(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aAlive = sync.Alive();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndIsAlive().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginIsAlive(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionIsAlive, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionIsAlive.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aAlive"></param>
        public void EndIsAlive(IntPtr aAsyncHandle, out bool aAlive)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aAlive = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncUpdate()
        {
            SyncUpdateAvOpenhomeOrgHardwareConfig1 sync = new SyncUpdateAvOpenhomeOrgHardwareConfig1(this);
            BeginUpdate(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndUpdate().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginUpdate(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionUpdate, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndUpdate(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aIsSubscribe"></param>
        /// <param name="aRealName"></param>
        /// <param name="aEmail"></param>
        public void SyncActive(bool aIsSubscribe, String aRealName, String aEmail)
        {
            SyncActiveAvOpenhomeOrgHardwareConfig1 sync = new SyncActiveAvOpenhomeOrgHardwareConfig1(this);
            BeginActive(aIsSubscribe, aRealName, aEmail, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndActive().</remarks>
        /// <param name="aIsSubscribe"></param>
        /// <param name="aRealName"></param>
        /// <param name="aEmail"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginActive(bool aIsSubscribe, String aRealName, String aEmail, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionActive, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionActive.InputParameter(inIndex++), aIsSubscribe));
            invocation.AddInput(new ArgumentString((ParameterString)iActionActive.InputParameter(inIndex++), aRealName));
            invocation.AddInput(new ArgumentString((ParameterString)iActionActive.InputParameter(inIndex++), aEmail));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndActive(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aActiveStatus"></param>
        public void SyncGetActiveStatus(out String aActiveStatus)
        {
            SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1 sync = new SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1(this);
            BeginGetActiveStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aActiveStatus = sync.ActiveStatus();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetActiveStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetActiveStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetActiveStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetActiveStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aActiveStatus"></param>
        public void EndGetActiveStatus(IntPtr aAsyncHandle, out String aActiveStatus)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aActiveStatus = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncCheckUpdate()
        {
            SyncCheckUpdateAvOpenhomeOrgHardwareConfig1 sync = new SyncCheckUpdateAvOpenhomeOrgHardwareConfig1(this);
            BeginCheckUpdate(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndCheckUpdate().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginCheckUpdate(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionCheckUpdate, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndCheckUpdate(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncResetDisplay()
        {
            SyncResetDisplayAvOpenhomeOrgHardwareConfig1 sync = new SyncResetDisplayAvOpenhomeOrgHardwareConfig1(this);
            BeginResetDisplay(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndResetDisplay().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginResetDisplay(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionResetDisplay, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndResetDisplay(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aHardWareInfo"></param>
        public void SyncGetHardWareInfo(out String aHardWareInfo)
        {
            SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1 sync = new SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1(this);
            BeginGetHardWareInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aHardWareInfo = sync.HardWareInfo();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetHardWareInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetHardWareInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetHardWareInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetHardWareInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aHardWareInfo"></param>
        public void EndGetHardWareInfo(IntPtr aAsyncHandle, out String aHardWareInfo)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aHardWareInfo = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aRoomName"></param>
        public void SyncSetRoomName(String aRoomName)
        {
            SyncSetRoomNameAvOpenhomeOrgHardwareConfig1 sync = new SyncSetRoomNameAvOpenhomeOrgHardwareConfig1(this);
            BeginSetRoomName(aRoomName, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetRoomName().</remarks>
        /// <param name="aRoomName"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetRoomName(String aRoomName, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetRoomName, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetRoomName.InputParameter(inIndex++), aRoomName));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetRoomName(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aVolumeControl"></param>
        public void SyncGetVolumeControl(out bool aVolumeControl)
        {
            SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1 sync = new SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1(this);
            BeginGetVolumeControl(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aVolumeControl = sync.VolumeControl();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetVolumeControl().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetVolumeControl(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetVolumeControl, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetVolumeControl.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aVolumeControl"></param>
        public void EndGetVolumeControl(IntPtr aAsyncHandle, out bool aVolumeControl)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aVolumeControl = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aVolumeControl"></param>
        public void SyncSetVolumeControl(bool aVolumeControl)
        {
            SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1 sync = new SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1(this);
            BeginSetVolumeControl(aVolumeControl, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetVolumeControl().</remarks>
        /// <param name="aVolumeControl"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetVolumeControl(bool aVolumeControl, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetVolumeControl, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetVolumeControl.InputParameter(inIndex++), aVolumeControl));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetVolumeControl(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aWaitingTime"></param>
        public void SyncGetWaitingTime(out String aWaitingTime)
        {
            SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1(this);
            BeginGetWaitingTime(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aWaitingTime = sync.WaitingTime();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetWaitingTime().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetWaitingTime(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetWaitingTime, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetWaitingTime.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aWaitingTime"></param>
        public void EndGetWaitingTime(IntPtr aAsyncHandle, out String aWaitingTime)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aWaitingTime = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aWaitingTime"></param>
        public void SyncSetWaitingTime(String aWaitingTime)
        {
            SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1(this);
            BeginSetWaitingTime(aWaitingTime, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetWaitingTime().</remarks>
        /// <param name="aWaitingTime"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetWaitingTime(String aWaitingTime, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetWaitingTime, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetWaitingTime.InputParameter(inIndex++), aWaitingTime));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetWaitingTime(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aChannelNum"></param>
        /// <param name="aCurrentChannel"></param>
        /// <param name="aOutChannel"></param>
        public void SyncGetOutChannel(out uint aChannelNum, out String aCurrentChannel, out String aOutChannel)
        {
            SyncGetOutChannelAvOpenhomeOrgHardwareConfig1 sync = new SyncGetOutChannelAvOpenhomeOrgHardwareConfig1(this);
            BeginGetOutChannel(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aChannelNum = sync.ChannelNum();
            aCurrentChannel = sync.CurrentChannel();
            aOutChannel = sync.OutChannel();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetOutChannel().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetOutChannel(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetOutChannel, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetOutChannel.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetOutChannel.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetOutChannel.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aChannelNum"></param>
        /// <param name="aCurrentChannel"></param>
        /// <param name="aOutChannel"></param>
        public void EndGetOutChannel(IntPtr aAsyncHandle, out uint aChannelNum, out String aCurrentChannel, out String aOutChannel)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aChannelNum = Invocation.OutputUint(aAsyncHandle, index++);
            aCurrentChannel = Invocation.OutputString(aAsyncHandle, index++);
            aOutChannel = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aChannel"></param>
        public void SyncSetOutChannel(String aChannel)
        {
            SyncSetOutChannelAvOpenhomeOrgHardwareConfig1 sync = new SyncSetOutChannelAvOpenhomeOrgHardwareConfig1(this);
            BeginSetOutChannel(aChannel, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetOutChannel().</remarks>
        /// <param name="aChannel"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetOutChannel(String aChannel, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetOutChannel, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetOutChannel.InputParameter(inIndex++), aChannel));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetOutChannel(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aUpnpType"></param>
        public void SyncSetUpnpType(String aUpnpType)
        {
            SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1(this);
            BeginSetUpnpType(aUpnpType, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetUpnpType().</remarks>
        /// <param name="aUpnpType"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetUpnpType(String aUpnpType, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetUpnpType, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetUpnpType.InputParameter(inIndex++), aUpnpType));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetUpnpType(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aUpnpType"></param>
        public void SyncGetUpnpType(out String aUpnpType)
        {
            SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1(this);
            BeginGetUpnpType(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aUpnpType = sync.UpnpType();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetUpnpType().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetUpnpType(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetUpnpType, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetUpnpType.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aUpnpType"></param>
        public void EndGetUpnpType(IntPtr aAsyncHandle, out String aUpnpType)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aUpnpType = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aStatus"></param>
        /// <param name="aSampleFormat"></param>
        public void SyncSetDsdNativeStatus(String aStatus, String aSampleFormat)
        {
            SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 sync = new SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(this);
            BeginSetDsdNativeStatus(aStatus, aSampleFormat, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetDsdNativeStatus().</remarks>
        /// <param name="aStatus"></param>
        /// <param name="aSampleFormat"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetDsdNativeStatus(String aStatus, String aSampleFormat, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetDsdNativeStatus, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetDsdNativeStatus.InputParameter(inIndex++), aStatus));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetDsdNativeStatus.InputParameter(inIndex++), aSampleFormat));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetDsdNativeStatus(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aStatus"></param>
        /// <param name="aSampleFormat"></param>
        public void SyncGetDsdNativeStatus(out String aStatus, out String aSampleFormat)
        {
            SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 sync = new SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(this);
            BeginGetDsdNativeStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aStatus = sync.Status();
            aSampleFormat = sync.SampleFormat();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDsdNativeStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDsdNativeStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDsdNativeStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDsdNativeStatus.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDsdNativeStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aStatus"></param>
        /// <param name="aSampleFormat"></param>
        public void EndGetDsdNativeStatus(IntPtr aAsyncHandle, out String aStatus, out String aSampleFormat)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aStatus = Invocation.OutputString(aAsyncHandle, index++);
            aSampleFormat = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aProtect"></param>
        /// <param name="aProtectPassword"></param>
        public void SyncSetPasswordProtect(String aProtect, String aProtectPassword)
        {
            SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1 sync = new SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1(this);
            BeginSetPasswordProtect(aProtect, aProtectPassword, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetPasswordProtect().</remarks>
        /// <param name="aProtect"></param>
        /// <param name="aProtectPassword"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetPasswordProtect(String aProtect, String aProtectPassword, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetPasswordProtect, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetPasswordProtect.InputParameter(inIndex++), aProtect));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetPasswordProtect.InputParameter(inIndex++), aProtectPassword));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetPasswordProtect(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aProtect"></param>
        /// <param name="aProtectPassword"></param>
        public void SyncGetPasswordProtect(out String aProtect, out String aProtectPassword)
        {
            SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1 sync = new SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1(this);
            BeginGetPasswordProtect(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aProtect = sync.Protect();
            aProtectPassword = sync.ProtectPassword();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetPasswordProtect().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetPasswordProtect(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetPasswordProtect, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetPasswordProtect.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetPasswordProtect.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aProtect"></param>
        /// <param name="aProtectPassword"></param>
        public void EndGetPasswordProtect(IntPtr aAsyncHandle, out String aProtect, out String aProtectPassword)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aProtect = Invocation.OutputString(aAsyncHandle, index++);
            aProtectPassword = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aVersion"></param>
        /// <param name="aProgress"></param>
        public void SyncGetUpdateInfo(out String aVersion, out String aProgress)
        {
            SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1 sync = new SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1(this);
            BeginGetUpdateInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aVersion = sync.Version();
            aProgress = sync.Progress();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetUpdateInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetUpdateInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetUpdateInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetUpdateInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetUpdateInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aVersion"></param>
        /// <param name="aProgress"></param>
        public void EndGetUpdateInfo(IntPtr aAsyncHandle, out String aVersion, out String aProgress)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aVersion = Invocation.OutputString(aAsyncHandle, index++);
            aProgress = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aInterFace"></param>
        /// <param name="aNumber"></param>
        /// <param name="aCurrentUse"></param>
        /// <param name="aWirelessList"></param>
        public void SyncGetWirelessList(String aInterFace, out uint aNumber, out String aCurrentUse, out String aWirelessList)
        {
            SyncGetWirelessListAvOpenhomeOrgHardwareConfig1 sync = new SyncGetWirelessListAvOpenhomeOrgHardwareConfig1(this);
            BeginGetWirelessList(aInterFace, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aNumber = sync.Number();
            aCurrentUse = sync.CurrentUse();
            aWirelessList = sync.WirelessList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetWirelessList().</remarks>
        /// <param name="aInterFace"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetWirelessList(String aInterFace, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetWirelessList, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionGetWirelessList.InputParameter(inIndex++), aInterFace));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetWirelessList.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetWirelessList.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetWirelessList.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aNumber"></param>
        /// <param name="aCurrentUse"></param>
        /// <param name="aWirelessList"></param>
        public void EndGetWirelessList(IntPtr aAsyncHandle, out uint aNumber, out String aCurrentUse, out String aWirelessList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aNumber = Invocation.OutputUint(aAsyncHandle, index++);
            aCurrentUse = Invocation.OutputString(aAsyncHandle, index++);
            aWirelessList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aInterFace"></param>
        /// <param name="aIpAddress"></param>
        /// <param name="aNetMask"></param>
        /// <param name="aGateWay"></param>
        /// <param name="aDNS"></param>
        /// <param name="aDHCP"></param>
        public void SyncGetIpAddress(String aInterFace, out String aIpAddress, out String aNetMask, out String aGateWay, out String aDNS, out String aDHCP)
        {
            SyncGetIpAddressAvOpenhomeOrgHardwareConfig1 sync = new SyncGetIpAddressAvOpenhomeOrgHardwareConfig1(this);
            BeginGetIpAddress(aInterFace, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aIpAddress = sync.IpAddress();
            aNetMask = sync.NetMask();
            aGateWay = sync.GateWay();
            aDNS = sync.DNS();
            aDHCP = sync.DHCP();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetIpAddress().</remarks>
        /// <param name="aInterFace"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetIpAddress(String aInterFace, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetIpAddress, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionGetIpAddress.InputParameter(inIndex++), aInterFace));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetIpAddress.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetIpAddress.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetIpAddress.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetIpAddress.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetIpAddress.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aIpAddress"></param>
        /// <param name="aNetMask"></param>
        /// <param name="aGateWay"></param>
        /// <param name="aDNS"></param>
        /// <param name="aDHCP"></param>
        public void EndGetIpAddress(IntPtr aAsyncHandle, out String aIpAddress, out String aNetMask, out String aGateWay, out String aDNS, out String aDHCP)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aIpAddress = Invocation.OutputString(aAsyncHandle, index++);
            aNetMask = Invocation.OutputString(aAsyncHandle, index++);
            aGateWay = Invocation.OutputString(aAsyncHandle, index++);
            aDNS = Invocation.OutputString(aAsyncHandle, index++);
            aDHCP = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aInterFace"></param>
        /// <param name="aIpAddress"></param>
        /// <param name="aNetMask"></param>
        /// <param name="aGateWay"></param>
        /// <param name="aDNS"></param>
        /// <param name="aSsid"></param>
        /// <param name="aPassWord"></param>
        /// <param name="aEncrypType"></param>
        public void SyncSetNetWork(String aInterFace, String aIpAddress, String aNetMask, String aGateWay, String aDNS, String aSsid, String aPassWord, String aEncrypType)
        {
            SyncSetNetWorkAvOpenhomeOrgHardwareConfig1 sync = new SyncSetNetWorkAvOpenhomeOrgHardwareConfig1(this);
            BeginSetNetWork(aInterFace, aIpAddress, aNetMask, aGateWay, aDNS, aSsid, aPassWord, aEncrypType, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetNetWork().</remarks>
        /// <param name="aInterFace"></param>
        /// <param name="aIpAddress"></param>
        /// <param name="aNetMask"></param>
        /// <param name="aGateWay"></param>
        /// <param name="aDNS"></param>
        /// <param name="aSsid"></param>
        /// <param name="aPassWord"></param>
        /// <param name="aEncrypType"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetNetWork(String aInterFace, String aIpAddress, String aNetMask, String aGateWay, String aDNS, String aSsid, String aPassWord, String aEncrypType, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetNetWork, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetWork.InputParameter(inIndex++), aInterFace));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetWork.InputParameter(inIndex++), aIpAddress));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetWork.InputParameter(inIndex++), aNetMask));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetWork.InputParameter(inIndex++), aGateWay));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetWork.InputParameter(inIndex++), aDNS));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetWork.InputParameter(inIndex++), aSsid));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetWork.InputParameter(inIndex++), aPassWord));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetWork.InputParameter(inIndex++), aEncrypType));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetNetWork(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aInterfaceNum"></param>
        /// <param name="aCurrentUse"></param>
        /// <param name="aInterfaceList"></param>
        public void SyncGetNetInterface(out uint aInterfaceNum, out String aCurrentUse, out String aInterfaceList)
        {
            SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1 sync = new SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1(this);
            BeginGetNetInterface(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aInterfaceNum = sync.InterfaceNum();
            aCurrentUse = sync.CurrentUse();
            aInterfaceList = sync.InterfaceList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetNetInterface().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetNetInterface(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetNetInterface, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetNetInterface.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetNetInterface.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetNetInterface.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aInterfaceNum"></param>
        /// <param name="aCurrentUse"></param>
        /// <param name="aInterfaceList"></param>
        public void EndGetNetInterface(IntPtr aAsyncHandle, out uint aInterfaceNum, out String aCurrentUse, out String aInterfaceList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aInterfaceNum = Invocation.OutputUint(aAsyncHandle, index++);
            aCurrentUse = Invocation.OutputString(aAsyncHandle, index++);
            aInterfaceList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aHaltStatus"></param>
        public void SyncGetHaltStatus(out bool aHaltStatus)
        {
            SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1 sync = new SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1(this);
            BeginGetHaltStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aHaltStatus = sync.HaltStatus();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetHaltStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetHaltStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetHaltStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetHaltStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aHaltStatus"></param>
        public void EndGetHaltStatus(IntPtr aAsyncHandle, out bool aHaltStatus)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aHaltStatus = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aHaltStatus"></param>
        public void SyncSetHaltStatus(bool aHaltStatus)
        {
            SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1 sync = new SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1(this);
            BeginSetHaltStatus(aHaltStatus, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetHaltStatus().</remarks>
        /// <param name="aHaltStatus"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetHaltStatus(bool aHaltStatus, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetHaltStatus, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetHaltStatus.InputParameter(inIndex++), aHaltStatus));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetHaltStatus(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aFilterMode"></param>
        /// <param name="aFilterModeList"></param>
        public void SyncGetFilterMode(out String aFilterMode, out String aFilterModeList)
        {
            SyncGetFilterModeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetFilterModeAvOpenhomeOrgHardwareConfig1(this);
            BeginGetFilterMode(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aFilterMode = sync.FilterMode();
            aFilterModeList = sync.FilterModeList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetFilterMode().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetFilterMode(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetFilterMode, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetFilterMode.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetFilterMode.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aFilterMode"></param>
        /// <param name="aFilterModeList"></param>
        public void EndGetFilterMode(IntPtr aAsyncHandle, out String aFilterMode, out String aFilterModeList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aFilterMode = Invocation.OutputString(aAsyncHandle, index++);
            aFilterModeList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aFilterMode"></param>
        public void SyncSetFilterMode(String aFilterMode)
        {
            SyncSetFilterModeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetFilterModeAvOpenhomeOrgHardwareConfig1(this);
            BeginSetFilterMode(aFilterMode, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetFilterMode().</remarks>
        /// <param name="aFilterMode"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetFilterMode(String aFilterMode, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetFilterMode, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetFilterMode.InputParameter(inIndex++), aFilterMode));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetFilterMode(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSourceName"></param>
        /// <param name="aVisible"></param>
        public void SyncSetSourceVisible(String aSourceName, bool aVisible)
        {
            SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1 sync = new SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1(this);
            BeginSetSourceVisible(aSourceName, aVisible, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetSourceVisible().</remarks>
        /// <param name="aSourceName"></param>
        /// <param name="aVisible"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetSourceVisible(String aSourceName, bool aVisible, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetSourceVisible, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetSourceVisible.InputParameter(inIndex++), aSourceName));
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetSourceVisible.InputParameter(inIndex++), aVisible));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetSourceVisible(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aVisibleInfo"></param>
        public void SyncGetSourceVisible(out String aVisibleInfo)
        {
            SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1 sync = new SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1(this);
            BeginGetSourceVisible(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aVisibleInfo = sync.VisibleInfo();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetSourceVisible().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetSourceVisible(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetSourceVisible, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSourceVisible.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aVisibleInfo"></param>
        public void EndGetSourceVisible(IntPtr aAsyncHandle, out String aVisibleInfo)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aVisibleInfo = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aLEDMode"></param>
        public void SyncSetLEDMode(String aLEDMode)
        {
            SyncSetLEDModeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetLEDModeAvOpenhomeOrgHardwareConfig1(this);
            BeginSetLEDMode(aLEDMode, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetLEDMode().</remarks>
        /// <param name="aLEDMode"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetLEDMode(String aLEDMode, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetLEDMode, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetLEDMode.InputParameter(inIndex++), aLEDMode));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetLEDMode(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aLEDMode"></param>
        /// <param name="aLEDModeList"></param>
        public void SyncGetLEDMode(out String aLEDMode, out String aLEDModeList)
        {
            SyncGetLEDModeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetLEDModeAvOpenhomeOrgHardwareConfig1(this);
            BeginGetLEDMode(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aLEDMode = sync.LEDMode();
            aLEDModeList = sync.LEDModeList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetLEDMode().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetLEDMode(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetLEDMode, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetLEDMode.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetLEDMode.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aLEDMode"></param>
        /// <param name="aLEDModeList"></param>
        public void EndGetLEDMode(IntPtr aAsyncHandle, out String aLEDMode, out String aLEDModeList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aLEDMode = Invocation.OutputString(aAsyncHandle, index++);
            aLEDModeList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aKeyName"></param>
        /// <param name="aKeyMode"></param>
        public void SyncSetKeyMode(String aKeyName, String aKeyMode)
        {
            SyncSetKeyModeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetKeyModeAvOpenhomeOrgHardwareConfig1(this);
            BeginSetKeyMode(aKeyName, aKeyMode, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetKeyMode().</remarks>
        /// <param name="aKeyName"></param>
        /// <param name="aKeyMode"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetKeyMode(String aKeyName, String aKeyMode, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetKeyMode, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetKeyMode.InputParameter(inIndex++), aKeyName));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetKeyMode.InputParameter(inIndex++), aKeyMode));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetKeyMode(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSideKeyMode"></param>
        /// <param name="aMiddleKeyMode"></param>
        /// <param name="aKeyModeList"></param>
        public void SyncGetKeyMode(out String aSideKeyMode, out String aMiddleKeyMode, out String aKeyModeList)
        {
            SyncGetKeyModeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetKeyModeAvOpenhomeOrgHardwareConfig1(this);
            BeginGetKeyMode(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSideKeyMode = sync.SideKeyMode();
            aMiddleKeyMode = sync.MiddleKeyMode();
            aKeyModeList = sync.KeyModeList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetKeyMode().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetKeyMode(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetKeyMode, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetKeyMode.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetKeyMode.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetKeyMode.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSideKeyMode"></param>
        /// <param name="aMiddleKeyMode"></param>
        /// <param name="aKeyModeList"></param>
        public void EndGetKeyMode(IntPtr aAsyncHandle, out String aSideKeyMode, out String aMiddleKeyMode, out String aKeyModeList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSideKeyMode = Invocation.OutputString(aAsyncHandle, index++);
            aMiddleKeyMode = Invocation.OutputString(aAsyncHandle, index++);
            aKeyModeList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aBrightness"></param>
        public void SyncSetBrightness(String aBrightness)
        {
            SyncSetBrightnessAvOpenhomeOrgHardwareConfig1 sync = new SyncSetBrightnessAvOpenhomeOrgHardwareConfig1(this);
            BeginSetBrightness(aBrightness, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetBrightness().</remarks>
        /// <param name="aBrightness"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetBrightness(String aBrightness, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetBrightness, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetBrightness.InputParameter(inIndex++), aBrightness));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetBrightness(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aBrightness"></param>
        /// <param name="aList"></param>
        public void SyncGetBrightness(out String aBrightness, out String aList)
        {
            SyncGetBrightnessAvOpenhomeOrgHardwareConfig1 sync = new SyncGetBrightnessAvOpenhomeOrgHardwareConfig1(this);
            BeginGetBrightness(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aBrightness = sync.Brightness();
            aList = sync.List();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetBrightness().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetBrightness(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetBrightness, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetBrightness.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetBrightness.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aBrightness"></param>
        /// <param name="aList"></param>
        public void EndGetBrightness(IntPtr aAsyncHandle, out String aBrightness, out String aList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aBrightness = Invocation.OutputString(aAsyncHandle, index++);
            aList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDisplayMode"></param>
        public void SyncSetDisplayMode(String aDisplayMode)
        {
            SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1(this);
            BeginSetDisplayMode(aDisplayMode, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetDisplayMode().</remarks>
        /// <param name="aDisplayMode"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetDisplayMode(String aDisplayMode, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetDisplayMode, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetDisplayMode.InputParameter(inIndex++), aDisplayMode));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetDisplayMode(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDisplayMode"></param>
        /// <param name="aDisplayModeList"></param>
        public void SyncGetDisplayMode(out String aDisplayMode, out String aDisplayModeList)
        {
            SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1(this);
            BeginGetDisplayMode(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aDisplayMode = sync.DisplayMode();
            aDisplayModeList = sync.DisplayModeList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDisplayMode().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDisplayMode(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDisplayMode, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDisplayMode.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDisplayMode.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aDisplayMode"></param>
        /// <param name="aDisplayModeList"></param>
        public void EndGetDisplayMode(IntPtr aAsyncHandle, out String aDisplayMode, out String aDisplayModeList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aDisplayMode = Invocation.OutputString(aAsyncHandle, index++);
            aDisplayModeList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aPhase"></param>
        public void SyncGetDACPhase(out uint aPhase)
        {
            SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1 sync = new SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1(this);
            BeginGetDACPhase(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aPhase = sync.Phase();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDACPhase().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDACPhase(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDACPhase, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetDACPhase.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aPhase"></param>
        public void EndGetDACPhase(IntPtr aAsyncHandle, out uint aPhase)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aPhase = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aPhase"></param>
        public void SyncSetDACPhase(uint aPhase)
        {
            SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1 sync = new SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1(this);
            BeginSetDACPhase(aPhase, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetDACPhase().</remarks>
        /// <param name="aPhase"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetDACPhase(uint aPhase, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetDACPhase, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSetDACPhase.InputParameter(inIndex++), aPhase));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetDACPhase(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aBalance"></param>
        public void SyncGetDACBalance(out uint aBalance)
        {
            SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1 sync = new SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1(this);
            BeginGetDACBalance(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aBalance = sync.Balance();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDACBalance().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDACBalance(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDACBalance, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetDACBalance.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aBalance"></param>
        public void EndGetDACBalance(IntPtr aAsyncHandle, out uint aBalance)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aBalance = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aBalance"></param>
        public void SyncSetDACBalance(uint aBalance)
        {
            SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1 sync = new SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1(this);
            BeginSetDACBalance(aBalance, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetDACBalance().</remarks>
        /// <param name="aBalance"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetDACBalance(uint aBalance, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetDACBalance, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSetDACBalance.InputParameter(inIndex++), aBalance));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetDACBalance(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aEnableResampler"></param>
        public void SyncSetEnableResampler(bool aEnableResampler)
        {
            SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1 sync = new SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1(this);
            BeginSetEnableResampler(aEnableResampler, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetEnableResampler().</remarks>
        /// <param name="aEnableResampler"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetEnableResampler(bool aEnableResampler, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetEnableResampler, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetEnableResampler.InputParameter(inIndex++), aEnableResampler));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetEnableResampler(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aEnableSpeaker"></param>
        public void SyncSetEnableSpeaker(bool aEnableSpeaker)
        {
            SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1 sync = new SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1(this);
            BeginSetEnableSpeaker(aEnableSpeaker, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetEnableSpeaker().</remarks>
        /// <param name="aEnableSpeaker"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetEnableSpeaker(bool aEnableSpeaker, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetEnableSpeaker, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetEnableSpeaker.InputParameter(inIndex++), aEnableSpeaker));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetEnableSpeaker(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aEnableEqualizer"></param>
        public void SyncSetEnableEqualizer(bool aEnableEqualizer)
        {
            SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1 sync = new SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1(this);
            BeginSetEnableEqualizer(aEnableEqualizer, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetEnableEqualizer().</remarks>
        /// <param name="aEnableEqualizer"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetEnableEqualizer(bool aEnableEqualizer, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetEnableEqualizer, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetEnableEqualizer.InputParameter(inIndex++), aEnableEqualizer));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetEnableEqualizer(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aEnableDirac"></param>
        public void SyncSetEnableDirac(bool aEnableDirac)
        {
            SyncSetEnableDiracAvOpenhomeOrgHardwareConfig1 sync = new SyncSetEnableDiracAvOpenhomeOrgHardwareConfig1(this);
            BeginSetEnableDirac(aEnableDirac, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetEnableDirac().</remarks>
        /// <param name="aEnableDirac"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetEnableDirac(bool aEnableDirac, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetEnableDirac, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetEnableDirac.InputParameter(inIndex++), aEnableDirac));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetEnableDirac(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the MessageOut state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aMessageOutChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyMessageOutChanged(System.Action aMessageOutChanged)
        {
            lock (iPropertyLock)
            {
                iMessageOutChanged = aMessageOutChanged;
            }
        }

        private void MessageOutPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iMessageOutChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Alive state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aAliveChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyAliveChanged(System.Action aAliveChanged)
        {
            lock (iPropertyLock)
            {
                iAliveChanged = aAliveChanged;
            }
        }

        private void AlivePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iAliveChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CurrentAction state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aCurrentActionChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCurrentActionChanged(System.Action aCurrentActionChanged)
        {
            lock (iPropertyLock)
            {
                iCurrentActionChanged = aCurrentActionChanged;
            }
        }

        private void CurrentActionPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCurrentActionChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Restart state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aRestartChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyRestartChanged(System.Action aRestartChanged)
        {
            lock (iPropertyLock)
            {
                iRestartChanged = aRestartChanged;
            }
        }

        private void RestartPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iRestartChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Number state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aNumberChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyNumberChanged(System.Action aNumberChanged)
        {
            lock (iPropertyLock)
            {
                iNumberChanged = aNumberChanged;
            }
        }

        private void NumberPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iNumberChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the RoomName state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aRoomNameChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyRoomNameChanged(System.Action aRoomNameChanged)
        {
            lock (iPropertyLock)
            {
                iRoomNameChanged = aRoomNameChanged;
            }
        }

        private void RoomNamePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iRoomNameChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the InterFace state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aInterFaceChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyInterFaceChanged(System.Action aInterFaceChanged)
        {
            lock (iPropertyLock)
            {
                iInterFaceChanged = aInterFaceChanged;
            }
        }

        private void InterFacePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iInterFaceChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the NetMask state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aNetMaskChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyNetMaskChanged(System.Action aNetMaskChanged)
        {
            lock (iPropertyLock)
            {
                iNetMaskChanged = aNetMaskChanged;
            }
        }

        private void NetMaskPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iNetMaskChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the GateWay state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aGateWayChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyGateWayChanged(System.Action aGateWayChanged)
        {
            lock (iPropertyLock)
            {
                iGateWayChanged = aGateWayChanged;
            }
        }

        private void GateWayPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iGateWayChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the DNS state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aDNSChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyDNSChanged(System.Action aDNSChanged)
        {
            lock (iPropertyLock)
            {
                iDNSChanged = aDNSChanged;
            }
        }

        private void DNSPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iDNSChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the DHCP state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aDHCPChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyDHCPChanged(System.Action aDHCPChanged)
        {
            lock (iPropertyLock)
            {
                iDHCPChanged = aDHCPChanged;
            }
        }

        private void DHCPPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iDHCPChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Ssid state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aSsidChanged">The delegate to run when the state variable changes</param>
        public void SetPropertySsidChanged(System.Action aSsidChanged)
        {
            lock (iPropertyLock)
            {
                iSsidChanged = aSsidChanged;
            }
        }

        private void SsidPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iSsidChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the PassWord state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aPassWordChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyPassWordChanged(System.Action aPassWordChanged)
        {
            lock (iPropertyLock)
            {
                iPassWordChanged = aPassWordChanged;
            }
        }

        private void PassWordPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iPassWordChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the EncrypType state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aEncrypTypeChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyEncrypTypeChanged(System.Action aEncrypTypeChanged)
        {
            lock (iPropertyLock)
            {
                iEncrypTypeChanged = aEncrypTypeChanged;
            }
        }

        private void EncrypTypePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iEncrypTypeChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Channel state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aChannelChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyChannelChanged(System.Action aChannelChanged)
        {
            lock (iPropertyLock)
            {
                iChannelChanged = aChannelChanged;
            }
        }

        private void ChannelPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iChannelChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the UpnpType state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aUpnpTypeChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUpnpTypeChanged(System.Action aUpnpTypeChanged)
        {
            lock (iPropertyLock)
            {
                iUpnpTypeChanged = aUpnpTypeChanged;
            }
        }

        private void UpnpTypePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUpnpTypeChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Status state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aStatusChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyStatusChanged(System.Action aStatusChanged)
        {
            lock (iPropertyLock)
            {
                iStatusChanged = aStatusChanged;
            }
        }

        private void StatusPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iStatusChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the SampleFormat state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aSampleFormatChanged">The delegate to run when the state variable changes</param>
        public void SetPropertySampleFormatChanged(System.Action aSampleFormatChanged)
        {
            lock (iPropertyLock)
            {
                iSampleFormatChanged = aSampleFormatChanged;
            }
        }

        private void SampleFormatPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iSampleFormatChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the IpAddress state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aIpAddressChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyIpAddressChanged(System.Action aIpAddressChanged)
        {
            lock (iPropertyLock)
            {
                iIpAddressChanged = aIpAddressChanged;
            }
        }

        private void IpAddressPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iIpAddressChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Protect state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aProtectChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyProtectChanged(System.Action aProtectChanged)
        {
            lock (iPropertyLock)
            {
                iProtectChanged = aProtectChanged;
            }
        }

        private void ProtectPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iProtectChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ProtectPassword state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aProtectPasswordChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyProtectPasswordChanged(System.Action aProtectPasswordChanged)
        {
            lock (iPropertyLock)
            {
                iProtectPasswordChanged = aProtectPasswordChanged;
            }
        }

        private void ProtectPasswordPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iProtectPasswordChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ActiveStatus state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aActiveStatusChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyActiveStatusChanged(System.Action aActiveStatusChanged)
        {
            lock (iPropertyLock)
            {
                iActiveStatusChanged = aActiveStatusChanged;
            }
        }

        private void ActiveStatusPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iActiveStatusChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Time state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aTimeChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyTimeChanged(System.Action aTimeChanged)
        {
            lock (iPropertyLock)
            {
                iTimeChanged = aTimeChanged;
            }
        }

        private void TimePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iTimeChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the VolumeControl state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.</remarks>
        /// <param name="aVolumeControlChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyVolumeControlChanged(System.Action aVolumeControlChanged)
        {
            lock (iPropertyLock)
            {
                iVolumeControlChanged = aVolumeControlChanged;
            }
        }

        private void VolumeControlPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iVolumeControlChanged);
            }
        }

        /// <summary>
        /// Query the value of the MessageOut property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the MessageOut property</returns>
        public String PropertyMessageOut()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iMessageOut.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Alive property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Alive property</returns>
        public bool PropertyAlive()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iAlive.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the CurrentAction property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CurrentAction property</returns>
        public uint PropertyCurrentAction()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iCurrentAction.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Restart property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Restart property</returns>
        public bool PropertyRestart()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iRestart.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Number property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Number property</returns>
        public uint PropertyNumber()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iNumber.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the RoomName property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the RoomName property</returns>
        public String PropertyRoomName()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iRoomName.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the InterFace property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the InterFace property</returns>
        public String PropertyInterFace()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iInterFace.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the NetMask property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the NetMask property</returns>
        public String PropertyNetMask()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iNetMask.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the GateWay property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the GateWay property</returns>
        public String PropertyGateWay()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iGateWay.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the DNS property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the DNS property</returns>
        public String PropertyDNS()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iDNS.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the DHCP property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the DHCP property</returns>
        public String PropertyDHCP()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iDHCP.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Ssid property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Ssid property</returns>
        public String PropertySsid()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iSsid.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the PassWord property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the PassWord property</returns>
        public String PropertyPassWord()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iPassWord.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the EncrypType property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the EncrypType property</returns>
        public String PropertyEncrypType()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iEncrypType.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Channel property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Channel property</returns>
        public String PropertyChannel()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iChannel.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the UpnpType property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the UpnpType property</returns>
        public String PropertyUpnpType()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iUpnpType.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Status property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Status property</returns>
        public String PropertyStatus()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iStatus.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the SampleFormat property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the SampleFormat property</returns>
        public String PropertySampleFormat()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iSampleFormat.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the IpAddress property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the IpAddress property</returns>
        public String PropertyIpAddress()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iIpAddress.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Protect property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Protect property</returns>
        public String PropertyProtect()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iProtect.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the ProtectPassword property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ProtectPassword property</returns>
        public String PropertyProtectPassword()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iProtectPassword.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the ActiveStatus property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ActiveStatus property</returns>
        public String PropertyActiveStatus()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iActiveStatus.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Time property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Time property</returns>
        public String PropertyTime()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iTime.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the VolumeControl property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the VolumeControl property</returns>
        public bool PropertyVolumeControl()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iVolumeControl.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Must be called for each class instance.  Must be called before Core.Library.Close().
        /// </summary>
        public void Dispose()
        {
            lock (this)
            {
                if (iHandle == IntPtr.Zero)
                    return;
                DisposeProxy();
                iHandle = IntPtr.Zero;
            }
            iActionLogIn.Dispose();
            iActionLogOut.Dispose();
            iActionCancelLogIn.Dispose();
            iActionIsAlive.Dispose();
            iActionUpdate.Dispose();
            iActionActive.Dispose();
            iActionGetActiveStatus.Dispose();
            iActionCheckUpdate.Dispose();
            iActionResetDisplay.Dispose();
            iActionGetHardWareInfo.Dispose();
            iActionSetRoomName.Dispose();
            iActionGetVolumeControl.Dispose();
            iActionSetVolumeControl.Dispose();
            iActionGetWaitingTime.Dispose();
            iActionSetWaitingTime.Dispose();
            iActionGetOutChannel.Dispose();
            iActionSetOutChannel.Dispose();
            iActionSetUpnpType.Dispose();
            iActionGetUpnpType.Dispose();
            iActionSetDsdNativeStatus.Dispose();
            iActionGetDsdNativeStatus.Dispose();
            iActionSetPasswordProtect.Dispose();
            iActionGetPasswordProtect.Dispose();
            iActionGetUpdateInfo.Dispose();
            iActionGetWirelessList.Dispose();
            iActionGetIpAddress.Dispose();
            iActionSetNetWork.Dispose();
            iActionGetNetInterface.Dispose();
            iActionGetHaltStatus.Dispose();
            iActionSetHaltStatus.Dispose();
            iActionGetFilterMode.Dispose();
            iActionSetFilterMode.Dispose();
            iActionSetSourceVisible.Dispose();
            iActionGetSourceVisible.Dispose();
            iActionSetLEDMode.Dispose();
            iActionGetLEDMode.Dispose();
            iActionSetKeyMode.Dispose();
            iActionGetKeyMode.Dispose();
            iActionSetBrightness.Dispose();
            iActionGetBrightness.Dispose();
            iActionSetDisplayMode.Dispose();
            iActionGetDisplayMode.Dispose();
            iActionGetDACPhase.Dispose();
            iActionSetDACPhase.Dispose();
            iActionGetDACBalance.Dispose();
            iActionSetDACBalance.Dispose();
            iActionSetEnableResampler.Dispose();
            iActionSetEnableSpeaker.Dispose();
            iActionSetEnableEqualizer.Dispose();
            iActionSetEnableDirac.Dispose();
            iMessageOut.Dispose();
            iAlive.Dispose();
            iCurrentAction.Dispose();
            iRestart.Dispose();
            iNumber.Dispose();
            iRoomName.Dispose();
            iInterFace.Dispose();
            iNetMask.Dispose();
            iGateWay.Dispose();
            iDNS.Dispose();
            iDHCP.Dispose();
            iSsid.Dispose();
            iPassWord.Dispose();
            iEncrypType.Dispose();
            iChannel.Dispose();
            iUpnpType.Dispose();
            iStatus.Dispose();
            iSampleFormat.Dispose();
            iIpAddress.Dispose();
            iProtect.Dispose();
            iProtectPassword.Dispose();
            iActiveStatus.Dispose();
            iTime.Dispose();
            iVolumeControl.Dispose();
        }
    }
}

