package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgHardwareConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgHardwareConfig1 extends ICpProxy
{
    public String syncLogIn(String aServiceName, String aMessageIn);
    public void beginLogIn(String aServiceName, String aMessageIn, ICpProxyListener aCallback);
    public String endLogIn(long aAsyncHandle);
    public void syncLogOut(String aServiceName);
    public void beginLogOut(String aServiceName, ICpProxyListener aCallback);
    public void endLogOut(long aAsyncHandle);
    public void syncCancelLogIn(String aServiceName);
    public void beginCancelLogIn(String aServiceName, ICpProxyListener aCallback);
    public void endCancelLogIn(long aAsyncHandle);
    public boolean syncIsAlive();
    public void beginIsAlive(ICpProxyListener aCallback);
    public boolean endIsAlive(long aAsyncHandle);
    public void syncUpdate();
    public void beginUpdate(ICpProxyListener aCallback);
    public void endUpdate(long aAsyncHandle);
    public void syncActive(boolean aIsSubscribe, String aRealName, String aEmail);
    public void beginActive(boolean aIsSubscribe, String aRealName, String aEmail, ICpProxyListener aCallback);
    public void endActive(long aAsyncHandle);
    public String syncGetActiveStatus();
    public void beginGetActiveStatus(ICpProxyListener aCallback);
    public String endGetActiveStatus(long aAsyncHandle);
    public void syncCheckUpdate();
    public void beginCheckUpdate(ICpProxyListener aCallback);
    public void endCheckUpdate(long aAsyncHandle);
    public void syncResetDisplay();
    public void beginResetDisplay(ICpProxyListener aCallback);
    public void endResetDisplay(long aAsyncHandle);
    public String syncGetHardWareInfo();
    public void beginGetHardWareInfo(ICpProxyListener aCallback);
    public String endGetHardWareInfo(long aAsyncHandle);
    public void syncSetRoomName(String aRoomName);
    public void beginSetRoomName(String aRoomName, ICpProxyListener aCallback);
    public void endSetRoomName(long aAsyncHandle);
    public boolean syncGetVolumeControl();
    public void beginGetVolumeControl(ICpProxyListener aCallback);
    public boolean endGetVolumeControl(long aAsyncHandle);
    public void syncSetVolumeControl(boolean aVolumeControl);
    public void beginSetVolumeControl(boolean aVolumeControl, ICpProxyListener aCallback);
    public void endSetVolumeControl(long aAsyncHandle);
    public String syncGetWaitingTime();
    public void beginGetWaitingTime(ICpProxyListener aCallback);
    public String endGetWaitingTime(long aAsyncHandle);
    public void syncSetWaitingTime(String aWaitingTime);
    public void beginSetWaitingTime(String aWaitingTime, ICpProxyListener aCallback);
    public void endSetWaitingTime(long aAsyncHandle);
    public GetOutChannel syncGetOutChannel();
    public void beginGetOutChannel(ICpProxyListener aCallback);
    public GetOutChannel endGetOutChannel(long aAsyncHandle);
    public void syncSetOutChannel(String aChannel);
    public void beginSetOutChannel(String aChannel, ICpProxyListener aCallback);
    public void endSetOutChannel(long aAsyncHandle);
    public void syncSetUpnpType(String aUpnpType);
    public void beginSetUpnpType(String aUpnpType, ICpProxyListener aCallback);
    public void endSetUpnpType(long aAsyncHandle);
    public String syncGetUpnpType();
    public void beginGetUpnpType(ICpProxyListener aCallback);
    public String endGetUpnpType(long aAsyncHandle);
    public void syncSetDsdNativeStatus(String aStatus, String aSampleFormat);
    public void beginSetDsdNativeStatus(String aStatus, String aSampleFormat, ICpProxyListener aCallback);
    public void endSetDsdNativeStatus(long aAsyncHandle);
    public GetDsdNativeStatus syncGetDsdNativeStatus();
    public void beginGetDsdNativeStatus(ICpProxyListener aCallback);
    public GetDsdNativeStatus endGetDsdNativeStatus(long aAsyncHandle);
    public void syncSetPasswordProtect(String aProtect, String aProtectPassword);
    public void beginSetPasswordProtect(String aProtect, String aProtectPassword, ICpProxyListener aCallback);
    public void endSetPasswordProtect(long aAsyncHandle);
    public GetPasswordProtect syncGetPasswordProtect();
    public void beginGetPasswordProtect(ICpProxyListener aCallback);
    public GetPasswordProtect endGetPasswordProtect(long aAsyncHandle);
    public GetUpdateInfo syncGetUpdateInfo();
    public void beginGetUpdateInfo(ICpProxyListener aCallback);
    public GetUpdateInfo endGetUpdateInfo(long aAsyncHandle);
    public GetWirelessList syncGetWirelessList(String aInterFace);
    public void beginGetWirelessList(String aInterFace, ICpProxyListener aCallback);
    public GetWirelessList endGetWirelessList(long aAsyncHandle);
    public GetIpAddress syncGetIpAddress(String aInterFace);
    public void beginGetIpAddress(String aInterFace, ICpProxyListener aCallback);
    public GetIpAddress endGetIpAddress(long aAsyncHandle);
    public void syncSetNetWork(String aInterFace, String aIpAddress, String aNetMask, String aGateWay, String aDNS, String aSsid, String aPassWord, String aEncrypType);
    public void beginSetNetWork(String aInterFace, String aIpAddress, String aNetMask, String aGateWay, String aDNS, String aSsid, String aPassWord, String aEncrypType, ICpProxyListener aCallback);
    public void endSetNetWork(long aAsyncHandle);
    public GetNetInterface syncGetNetInterface();
    public void beginGetNetInterface(ICpProxyListener aCallback);
    public GetNetInterface endGetNetInterface(long aAsyncHandle);
    public boolean syncGetHaltStatus();
    public void beginGetHaltStatus(ICpProxyListener aCallback);
    public boolean endGetHaltStatus(long aAsyncHandle);
    public void syncSetHaltStatus(boolean aHaltStatus);
    public void beginSetHaltStatus(boolean aHaltStatus, ICpProxyListener aCallback);
    public void endSetHaltStatus(long aAsyncHandle);
    public GetFilterMode syncGetFilterMode();
    public void beginGetFilterMode(ICpProxyListener aCallback);
    public GetFilterMode endGetFilterMode(long aAsyncHandle);
    public void syncSetFilterMode(String aFilterMode);
    public void beginSetFilterMode(String aFilterMode, ICpProxyListener aCallback);
    public void endSetFilterMode(long aAsyncHandle);
    public void syncSetSourceVisible(String aSourceName, boolean aVisible);
    public void beginSetSourceVisible(String aSourceName, boolean aVisible, ICpProxyListener aCallback);
    public void endSetSourceVisible(long aAsyncHandle);
    public String syncGetSourceVisible();
    public void beginGetSourceVisible(ICpProxyListener aCallback);
    public String endGetSourceVisible(long aAsyncHandle);
    public void syncSetLEDMode(String aLEDMode);
    public void beginSetLEDMode(String aLEDMode, ICpProxyListener aCallback);
    public void endSetLEDMode(long aAsyncHandle);
    public GetLEDMode syncGetLEDMode();
    public void beginGetLEDMode(ICpProxyListener aCallback);
    public GetLEDMode endGetLEDMode(long aAsyncHandle);
    public void syncSetKeyMode(String aKeyName, String aKeyMode);
    public void beginSetKeyMode(String aKeyName, String aKeyMode, ICpProxyListener aCallback);
    public void endSetKeyMode(long aAsyncHandle);
    public GetKeyMode syncGetKeyMode();
    public void beginGetKeyMode(ICpProxyListener aCallback);
    public GetKeyMode endGetKeyMode(long aAsyncHandle);
    public void syncSetBrightness(String aBrightness);
    public void beginSetBrightness(String aBrightness, ICpProxyListener aCallback);
    public void endSetBrightness(long aAsyncHandle);
    public GetBrightness syncGetBrightness();
    public void beginGetBrightness(ICpProxyListener aCallback);
    public GetBrightness endGetBrightness(long aAsyncHandle);
    public void syncSetDisplayMode(String aDisplayMode);
    public void beginSetDisplayMode(String aDisplayMode, ICpProxyListener aCallback);
    public void endSetDisplayMode(long aAsyncHandle);
    public GetDisplayMode syncGetDisplayMode();
    public void beginGetDisplayMode(ICpProxyListener aCallback);
    public GetDisplayMode endGetDisplayMode(long aAsyncHandle);
    public long syncGetDACPhase();
    public void beginGetDACPhase(ICpProxyListener aCallback);
    public long endGetDACPhase(long aAsyncHandle);
    public void syncSetDACPhase(long aPhase);
    public void beginSetDACPhase(long aPhase, ICpProxyListener aCallback);
    public void endSetDACPhase(long aAsyncHandle);
    public long syncGetDACBalance();
    public void beginGetDACBalance(ICpProxyListener aCallback);
    public long endGetDACBalance(long aAsyncHandle);
    public void syncSetDACBalance(long aBalance);
    public void beginSetDACBalance(long aBalance, ICpProxyListener aCallback);
    public void endSetDACBalance(long aAsyncHandle);
    public void syncSetEnableResampler(boolean aEnableResampler);
    public void beginSetEnableResampler(boolean aEnableResampler, ICpProxyListener aCallback);
    public void endSetEnableResampler(long aAsyncHandle);
    public void syncSetEnableSpeaker(boolean aEnableSpeaker);
    public void beginSetEnableSpeaker(boolean aEnableSpeaker, ICpProxyListener aCallback);
    public void endSetEnableSpeaker(long aAsyncHandle);
    public void syncSetEnableEqualizer(boolean aEnableEqualizer);
    public void beginSetEnableEqualizer(boolean aEnableEqualizer, ICpProxyListener aCallback);
    public void endSetEnableEqualizer(long aAsyncHandle);
    public void syncSetEnableDirac(boolean aEnableDirac);
    public void beginSetEnableDirac(boolean aEnableDirac, ICpProxyListener aCallback);
    public void endSetEnableDirac(long aAsyncHandle);
    public void setPropertyMessageOutChanged(IPropertyChangeListener aMessageOutChanged);
    public String getPropertyMessageOut();
    public void setPropertyAliveChanged(IPropertyChangeListener aAliveChanged);
    public boolean getPropertyAlive();
    public void setPropertyCurrentActionChanged(IPropertyChangeListener aCurrentActionChanged);
    public long getPropertyCurrentAction();
    public void setPropertyRestartChanged(IPropertyChangeListener aRestartChanged);
    public boolean getPropertyRestart();
    public void setPropertyNumberChanged(IPropertyChangeListener aNumberChanged);
    public long getPropertyNumber();
    public void setPropertyRoomNameChanged(IPropertyChangeListener aRoomNameChanged);
    public String getPropertyRoomName();
    public void setPropertyInterFaceChanged(IPropertyChangeListener aInterFaceChanged);
    public String getPropertyInterFace();
    public void setPropertyNetMaskChanged(IPropertyChangeListener aNetMaskChanged);
    public String getPropertyNetMask();
    public void setPropertyGateWayChanged(IPropertyChangeListener aGateWayChanged);
    public String getPropertyGateWay();
    public void setPropertyDNSChanged(IPropertyChangeListener aDNSChanged);
    public String getPropertyDNS();
    public void setPropertyDHCPChanged(IPropertyChangeListener aDHCPChanged);
    public String getPropertyDHCP();
    public void setPropertySsidChanged(IPropertyChangeListener aSsidChanged);
    public String getPropertySsid();
    public void setPropertyPassWordChanged(IPropertyChangeListener aPassWordChanged);
    public String getPropertyPassWord();
    public void setPropertyEncrypTypeChanged(IPropertyChangeListener aEncrypTypeChanged);
    public String getPropertyEncrypType();
    public void setPropertyChannelChanged(IPropertyChangeListener aChannelChanged);
    public String getPropertyChannel();
    public void setPropertyUpnpTypeChanged(IPropertyChangeListener aUpnpTypeChanged);
    public String getPropertyUpnpType();
    public void setPropertyStatusChanged(IPropertyChangeListener aStatusChanged);
    public String getPropertyStatus();
    public void setPropertySampleFormatChanged(IPropertyChangeListener aSampleFormatChanged);
    public String getPropertySampleFormat();
    public void setPropertyIpAddressChanged(IPropertyChangeListener aIpAddressChanged);
    public String getPropertyIpAddress();
    public void setPropertyProtectChanged(IPropertyChangeListener aProtectChanged);
    public String getPropertyProtect();
    public void setPropertyProtectPasswordChanged(IPropertyChangeListener aProtectPasswordChanged);
    public String getPropertyProtectPassword();
    public void setPropertyActiveStatusChanged(IPropertyChangeListener aActiveStatusChanged);
    public String getPropertyActiveStatus();
    public void setPropertyTimeChanged(IPropertyChangeListener aTimeChanged);
    public String getPropertyTime();
    public void setPropertyVolumeControlChanged(IPropertyChangeListener aVolumeControlChanged);
    public boolean getPropertyVolumeControl();
}

class SyncLogInAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iMessageOut;

    public SyncLogInAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getMessageOut()
    {
        return iMessageOut;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endLogIn(aAsyncHandle);
        
        iMessageOut = result;
    }
}

class SyncLogOutAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncLogOutAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endLogOut(aAsyncHandle);
        
    }
}

class SyncCancelLogInAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncCancelLogInAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endCancelLogIn(aAsyncHandle);
        
    }
}

class SyncIsAliveAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private boolean iAlive;

    public SyncIsAliveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getAlive()
    {
        return iAlive;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endIsAlive(aAsyncHandle);
        
        iAlive = result;
    }
}

class SyncUpdateAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endUpdate(aAsyncHandle);
        
    }
}

class SyncActiveAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncActiveAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endActive(aAsyncHandle);
        
    }
}

class SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iActiveStatus;

    public SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getActiveStatus()
    {
        return iActiveStatus;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetActiveStatus(aAsyncHandle);
        
        iActiveStatus = result;
    }
}

class SyncCheckUpdateAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncCheckUpdateAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endCheckUpdate(aAsyncHandle);
        
    }
}

class SyncResetDisplayAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncResetDisplayAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endResetDisplay(aAsyncHandle);
        
    }
}

class SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iHardWareInfo;

    public SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getHardWareInfo()
    {
        return iHardWareInfo;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetHardWareInfo(aAsyncHandle);
        
        iHardWareInfo = result;
    }
}

class SyncSetRoomNameAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetRoomNameAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetRoomName(aAsyncHandle);
        
    }
}

class SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private boolean iVolumeControl;

    public SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getVolumeControl()
    {
        return iVolumeControl;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetVolumeControl(aAsyncHandle);
        
        iVolumeControl = result;
    }
}

class SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetVolumeControl(aAsyncHandle);
        
    }
}

class SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iWaitingTime;

    public SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getWaitingTime()
    {
        return iWaitingTime;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetWaitingTime(aAsyncHandle);
        
        iWaitingTime = result;
    }
}

class SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetWaitingTime(aAsyncHandle);
        
    }
}

class SyncGetOutChannelAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private long iChannelNum;
    private String iCurrentChannel;
    private String iOutChannel;

    public SyncGetOutChannelAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public long getChannelNum()
    {
        return iChannelNum;
    }
    public String getCurrentChannel()
    {
        return iCurrentChannel;
    }
    public String getOutChannel()
    {
        return iOutChannel;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetOutChannel result = iService.endGetOutChannel(aAsyncHandle);
        
        iChannelNum = result.getChannelNum();
        iCurrentChannel = result.getCurrentChannel();
        iOutChannel = result.getOutChannel();
    }
}

class SyncSetOutChannelAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetOutChannelAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetOutChannel(aAsyncHandle);
        
    }
}

class SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetUpnpType(aAsyncHandle);
        
    }
}

class SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iUpnpType;

    public SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getUpnpType()
    {
        return iUpnpType;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetUpnpType(aAsyncHandle);
        
        iUpnpType = result;
    }
}

class SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetDsdNativeStatus(aAsyncHandle);
        
    }
}

class SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iStatus;
    private String iSampleFormat;

    public SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getStatus()
    {
        return iStatus;
    }
    public String getSampleFormat()
    {
        return iSampleFormat;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetDsdNativeStatus result = iService.endGetDsdNativeStatus(aAsyncHandle);
        
        iStatus = result.getStatus();
        iSampleFormat = result.getSampleFormat();
    }
}

class SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetPasswordProtect(aAsyncHandle);
        
    }
}

class SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iProtect;
    private String iProtectPassword;

    public SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getProtect()
    {
        return iProtect;
    }
    public String getProtectPassword()
    {
        return iProtectPassword;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetPasswordProtect result = iService.endGetPasswordProtect(aAsyncHandle);
        
        iProtect = result.getProtect();
        iProtectPassword = result.getProtectPassword();
    }
}

class SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iVersion;
    private String iProgress;

    public SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getVersion()
    {
        return iVersion;
    }
    public String getProgress()
    {
        return iProgress;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetUpdateInfo result = iService.endGetUpdateInfo(aAsyncHandle);
        
        iVersion = result.getVersion();
        iProgress = result.getProgress();
    }
}

class SyncGetWirelessListAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private long iNumber;
    private String iCurrentUse;
    private String iWirelessList;

    public SyncGetWirelessListAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public long getNumber()
    {
        return iNumber;
    }
    public String getCurrentUse()
    {
        return iCurrentUse;
    }
    public String getWirelessList()
    {
        return iWirelessList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetWirelessList result = iService.endGetWirelessList(aAsyncHandle);
        
        iNumber = result.getNumber();
        iCurrentUse = result.getCurrentUse();
        iWirelessList = result.getWirelessList();
    }
}

class SyncGetIpAddressAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
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
    public String getIpAddress()
    {
        return iIpAddress;
    }
    public String getNetMask()
    {
        return iNetMask;
    }
    public String getGateWay()
    {
        return iGateWay;
    }
    public String getDNS()
    {
        return iDNS;
    }
    public String getDHCP()
    {
        return iDHCP;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetIpAddress result = iService.endGetIpAddress(aAsyncHandle);
        
        iIpAddress = result.getIpAddress();
        iNetMask = result.getNetMask();
        iGateWay = result.getGateWay();
        iDNS = result.getDNS();
        iDHCP = result.getDHCP();
    }
}

class SyncSetNetWorkAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetNetWorkAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetNetWork(aAsyncHandle);
        
    }
}

class SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private long iInterfaceNum;
    private String iCurrentUse;
    private String iInterfaceList;

    public SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public long getInterfaceNum()
    {
        return iInterfaceNum;
    }
    public String getCurrentUse()
    {
        return iCurrentUse;
    }
    public String getInterfaceList()
    {
        return iInterfaceList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetNetInterface result = iService.endGetNetInterface(aAsyncHandle);
        
        iInterfaceNum = result.getInterfaceNum();
        iCurrentUse = result.getCurrentUse();
        iInterfaceList = result.getInterfaceList();
    }
}

class SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private boolean iHaltStatus;

    public SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getHaltStatus()
    {
        return iHaltStatus;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetHaltStatus(aAsyncHandle);
        
        iHaltStatus = result;
    }
}

class SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetHaltStatus(aAsyncHandle);
        
    }
}

class SyncGetFilterModeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iFilterMode;
    private String iFilterModeList;

    public SyncGetFilterModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getFilterMode()
    {
        return iFilterMode;
    }
    public String getFilterModeList()
    {
        return iFilterModeList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetFilterMode result = iService.endGetFilterMode(aAsyncHandle);
        
        iFilterMode = result.getFilterMode();
        iFilterModeList = result.getFilterModeList();
    }
}

class SyncSetFilterModeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetFilterModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetFilterMode(aAsyncHandle);
        
    }
}

class SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetSourceVisible(aAsyncHandle);
        
    }
}

class SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iVisibleInfo;

    public SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getVisibleInfo()
    {
        return iVisibleInfo;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetSourceVisible(aAsyncHandle);
        
        iVisibleInfo = result;
    }
}

class SyncSetLEDModeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetLEDModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetLEDMode(aAsyncHandle);
        
    }
}

class SyncGetLEDModeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iLEDMode;
    private String iLEDModeList;

    public SyncGetLEDModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getLEDMode()
    {
        return iLEDMode;
    }
    public String getLEDModeList()
    {
        return iLEDModeList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetLEDMode result = iService.endGetLEDMode(aAsyncHandle);
        
        iLEDMode = result.getLEDMode();
        iLEDModeList = result.getLEDModeList();
    }
}

class SyncSetKeyModeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetKeyModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetKeyMode(aAsyncHandle);
        
    }
}

class SyncGetKeyModeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iSideKeyMode;
    private String iMiddleKeyMode;
    private String iKeyModeList;

    public SyncGetKeyModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getSideKeyMode()
    {
        return iSideKeyMode;
    }
    public String getMiddleKeyMode()
    {
        return iMiddleKeyMode;
    }
    public String getKeyModeList()
    {
        return iKeyModeList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetKeyMode result = iService.endGetKeyMode(aAsyncHandle);
        
        iSideKeyMode = result.getSideKeyMode();
        iMiddleKeyMode = result.getMiddleKeyMode();
        iKeyModeList = result.getKeyModeList();
    }
}

class SyncSetBrightnessAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetBrightnessAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetBrightness(aAsyncHandle);
        
    }
}

class SyncGetBrightnessAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iBrightness;
    private String iList;

    public SyncGetBrightnessAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getBrightness()
    {
        return iBrightness;
    }
    public String getList()
    {
        return iList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetBrightness result = iService.endGetBrightness(aAsyncHandle);
        
        iBrightness = result.getBrightness();
        iList = result.getList();
    }
}

class SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetDisplayMode(aAsyncHandle);
        
    }
}

class SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private String iDisplayMode;
    private String iDisplayModeList;

    public SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getDisplayMode()
    {
        return iDisplayMode;
    }
    public String getDisplayModeList()
    {
        return iDisplayModeList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetDisplayMode result = iService.endGetDisplayMode(aAsyncHandle);
        
        iDisplayMode = result.getDisplayMode();
        iDisplayModeList = result.getDisplayModeList();
    }
}

class SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private long iPhase;

    public SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public long getPhase()
    {
        return iPhase;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetDACPhase(aAsyncHandle);
        
        iPhase = result;
    }
}

class SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetDACPhase(aAsyncHandle);
        
    }
}

class SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;
    private long iBalance;

    public SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    public long getBalance()
    {
        return iBalance;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetDACBalance(aAsyncHandle);
        
        iBalance = result;
    }
}

class SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetDACBalance(aAsyncHandle);
        
    }
}

class SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetEnableResampler(aAsyncHandle);
        
    }
}

class SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetEnableSpeaker(aAsyncHandle);
        
    }
}

class SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetEnableEqualizer(aAsyncHandle);
        
    }
}

class SyncSetEnableDiracAvOpenhomeOrgHardwareConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgHardwareConfig1 iService;

    public SyncSetEnableDiracAvOpenhomeOrgHardwareConfig1(CpProxyAvOpenhomeOrgHardwareConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetEnableDirac(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:HardwareConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgHardwareConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgHardwareConfig1
{

    public class GetOutChannel
    {
        private long iChannelNum;
        private String iCurrentChannel;
        private String iOutChannel;

        public GetOutChannel(
            long aChannelNum,
            String aCurrentChannel,
            String aOutChannel
        )
        {
            iChannelNum = aChannelNum;
            iCurrentChannel = aCurrentChannel;
            iOutChannel = aOutChannel;
        }
        public long getChannelNum()
        {
            return iChannelNum;
        }
        public String getCurrentChannel()
        {
            return iCurrentChannel;
        }
        public String getOutChannel()
        {
            return iOutChannel;
        }
    }

    public class GetDsdNativeStatus
    {
        private String iStatus;
        private String iSampleFormat;

        public GetDsdNativeStatus(
            String aStatus,
            String aSampleFormat
        )
        {
            iStatus = aStatus;
            iSampleFormat = aSampleFormat;
        }
        public String getStatus()
        {
            return iStatus;
        }
        public String getSampleFormat()
        {
            return iSampleFormat;
        }
    }

    public class GetPasswordProtect
    {
        private String iProtect;
        private String iProtectPassword;

        public GetPasswordProtect(
            String aProtect,
            String aProtectPassword
        )
        {
            iProtect = aProtect;
            iProtectPassword = aProtectPassword;
        }
        public String getProtect()
        {
            return iProtect;
        }
        public String getProtectPassword()
        {
            return iProtectPassword;
        }
    }

    public class GetUpdateInfo
    {
        private String iVersion;
        private String iProgress;

        public GetUpdateInfo(
            String aVersion,
            String aProgress
        )
        {
            iVersion = aVersion;
            iProgress = aProgress;
        }
        public String getVersion()
        {
            return iVersion;
        }
        public String getProgress()
        {
            return iProgress;
        }
    }

    public class GetWirelessList
    {
        private long iNumber;
        private String iCurrentUse;
        private String iWirelessList;

        public GetWirelessList(
            long aNumber,
            String aCurrentUse,
            String aWirelessList
        )
        {
            iNumber = aNumber;
            iCurrentUse = aCurrentUse;
            iWirelessList = aWirelessList;
        }
        public long getNumber()
        {
            return iNumber;
        }
        public String getCurrentUse()
        {
            return iCurrentUse;
        }
        public String getWirelessList()
        {
            return iWirelessList;
        }
    }

    public class GetIpAddress
    {
        private String iIpAddress;
        private String iNetMask;
        private String iGateWay;
        private String iDNS;
        private String iDHCP;

        public GetIpAddress(
            String aIpAddress,
            String aNetMask,
            String aGateWay,
            String aDNS,
            String aDHCP
        )
        {
            iIpAddress = aIpAddress;
            iNetMask = aNetMask;
            iGateWay = aGateWay;
            iDNS = aDNS;
            iDHCP = aDHCP;
        }
        public String getIpAddress()
        {
            return iIpAddress;
        }
        public String getNetMask()
        {
            return iNetMask;
        }
        public String getGateWay()
        {
            return iGateWay;
        }
        public String getDNS()
        {
            return iDNS;
        }
        public String getDHCP()
        {
            return iDHCP;
        }
    }

    public class GetNetInterface
    {
        private long iInterfaceNum;
        private String iCurrentUse;
        private String iInterfaceList;

        public GetNetInterface(
            long aInterfaceNum,
            String aCurrentUse,
            String aInterfaceList
        )
        {
            iInterfaceNum = aInterfaceNum;
            iCurrentUse = aCurrentUse;
            iInterfaceList = aInterfaceList;
        }
        public long getInterfaceNum()
        {
            return iInterfaceNum;
        }
        public String getCurrentUse()
        {
            return iCurrentUse;
        }
        public String getInterfaceList()
        {
            return iInterfaceList;
        }
    }

    public class GetFilterMode
    {
        private String iFilterMode;
        private String iFilterModeList;

        public GetFilterMode(
            String aFilterMode,
            String aFilterModeList
        )
        {
            iFilterMode = aFilterMode;
            iFilterModeList = aFilterModeList;
        }
        public String getFilterMode()
        {
            return iFilterMode;
        }
        public String getFilterModeList()
        {
            return iFilterModeList;
        }
    }

    public class GetLEDMode
    {
        private String iLEDMode;
        private String iLEDModeList;

        public GetLEDMode(
            String aLEDMode,
            String aLEDModeList
        )
        {
            iLEDMode = aLEDMode;
            iLEDModeList = aLEDModeList;
        }
        public String getLEDMode()
        {
            return iLEDMode;
        }
        public String getLEDModeList()
        {
            return iLEDModeList;
        }
    }

    public class GetKeyMode
    {
        private String iSideKeyMode;
        private String iMiddleKeyMode;
        private String iKeyModeList;

        public GetKeyMode(
            String aSideKeyMode,
            String aMiddleKeyMode,
            String aKeyModeList
        )
        {
            iSideKeyMode = aSideKeyMode;
            iMiddleKeyMode = aMiddleKeyMode;
            iKeyModeList = aKeyModeList;
        }
        public String getSideKeyMode()
        {
            return iSideKeyMode;
        }
        public String getMiddleKeyMode()
        {
            return iMiddleKeyMode;
        }
        public String getKeyModeList()
        {
            return iKeyModeList;
        }
    }

    public class GetBrightness
    {
        private String iBrightness;
        private String iList;

        public GetBrightness(
            String aBrightness,
            String aList
        )
        {
            iBrightness = aBrightness;
            iList = aList;
        }
        public String getBrightness()
        {
            return iBrightness;
        }
        public String getList()
        {
            return iList;
        }
    }

    public class GetDisplayMode
    {
        private String iDisplayMode;
        private String iDisplayModeList;

        public GetDisplayMode(
            String aDisplayMode,
            String aDisplayModeList
        )
        {
            iDisplayMode = aDisplayMode;
            iDisplayModeList = aDisplayModeList;
        }
        public String getDisplayMode()
        {
            return iDisplayMode;
        }
        public String getDisplayModeList()
        {
            return iDisplayModeList;
        }
    }

    private Action iActionLogIn;
    private Action iActionLogOut;
    private Action iActionCancelLogIn;
    private Action iActionIsAlive;
    private Action iActionUpdate;
    private Action iActionActive;
    private Action iActionGetActiveStatus;
    private Action iActionCheckUpdate;
    private Action iActionResetDisplay;
    private Action iActionGetHardWareInfo;
    private Action iActionSetRoomName;
    private Action iActionGetVolumeControl;
    private Action iActionSetVolumeControl;
    private Action iActionGetWaitingTime;
    private Action iActionSetWaitingTime;
    private Action iActionGetOutChannel;
    private Action iActionSetOutChannel;
    private Action iActionSetUpnpType;
    private Action iActionGetUpnpType;
    private Action iActionSetDsdNativeStatus;
    private Action iActionGetDsdNativeStatus;
    private Action iActionSetPasswordProtect;
    private Action iActionGetPasswordProtect;
    private Action iActionGetUpdateInfo;
    private Action iActionGetWirelessList;
    private Action iActionGetIpAddress;
    private Action iActionSetNetWork;
    private Action iActionGetNetInterface;
    private Action iActionGetHaltStatus;
    private Action iActionSetHaltStatus;
    private Action iActionGetFilterMode;
    private Action iActionSetFilterMode;
    private Action iActionSetSourceVisible;
    private Action iActionGetSourceVisible;
    private Action iActionSetLEDMode;
    private Action iActionGetLEDMode;
    private Action iActionSetKeyMode;
    private Action iActionGetKeyMode;
    private Action iActionSetBrightness;
    private Action iActionGetBrightness;
    private Action iActionSetDisplayMode;
    private Action iActionGetDisplayMode;
    private Action iActionGetDACPhase;
    private Action iActionSetDACPhase;
    private Action iActionGetDACBalance;
    private Action iActionSetDACBalance;
    private Action iActionSetEnableResampler;
    private Action iActionSetEnableSpeaker;
    private Action iActionSetEnableEqualizer;
    private Action iActionSetEnableDirac;
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
    private IPropertyChangeListener iMessageOutChanged;
    private IPropertyChangeListener iAliveChanged;
    private IPropertyChangeListener iCurrentActionChanged;
    private IPropertyChangeListener iRestartChanged;
    private IPropertyChangeListener iNumberChanged;
    private IPropertyChangeListener iRoomNameChanged;
    private IPropertyChangeListener iInterFaceChanged;
    private IPropertyChangeListener iNetMaskChanged;
    private IPropertyChangeListener iGateWayChanged;
    private IPropertyChangeListener iDNSChanged;
    private IPropertyChangeListener iDHCPChanged;
    private IPropertyChangeListener iSsidChanged;
    private IPropertyChangeListener iPassWordChanged;
    private IPropertyChangeListener iEncrypTypeChanged;
    private IPropertyChangeListener iChannelChanged;
    private IPropertyChangeListener iUpnpTypeChanged;
    private IPropertyChangeListener iStatusChanged;
    private IPropertyChangeListener iSampleFormatChanged;
    private IPropertyChangeListener iIpAddressChanged;
    private IPropertyChangeListener iProtectChanged;
    private IPropertyChangeListener iProtectPasswordChanged;
    private IPropertyChangeListener iActiveStatusChanged;
    private IPropertyChangeListener iTimeChanged;
    private IPropertyChangeListener iVolumeControlChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgHardwareConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "HardwareConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionLogIn = new Action("LogIn");
        param = new ParameterString("ServiceName", allowedValues);
        iActionLogIn.addInputParameter(param);
        param = new ParameterString("MessageIn", allowedValues);
        iActionLogIn.addInputParameter(param);
        param = new ParameterString("MessageOut", allowedValues);
        iActionLogIn.addOutputParameter(param);

        iActionLogOut = new Action("LogOut");
        param = new ParameterString("ServiceName", allowedValues);
        iActionLogOut.addInputParameter(param);

        iActionCancelLogIn = new Action("CancelLogIn");
        param = new ParameterString("ServiceName", allowedValues);
        iActionCancelLogIn.addInputParameter(param);

        iActionIsAlive = new Action("IsAlive");
        param = new ParameterBool("Alive");
        iActionIsAlive.addOutputParameter(param);

        iActionUpdate = new Action("Update");

        iActionActive = new Action("Active");
        param = new ParameterBool("IsSubscribe");
        iActionActive.addInputParameter(param);
        param = new ParameterString("RealName", allowedValues);
        iActionActive.addInputParameter(param);
        param = new ParameterString("Email", allowedValues);
        iActionActive.addInputParameter(param);

        iActionGetActiveStatus = new Action("GetActiveStatus");
        param = new ParameterString("ActiveStatus", allowedValues);
        iActionGetActiveStatus.addOutputParameter(param);

        iActionCheckUpdate = new Action("CheckUpdate");

        iActionResetDisplay = new Action("ResetDisplay");

        iActionGetHardWareInfo = new Action("GetHardWareInfo");
        param = new ParameterString("HardWareInfo", allowedValues);
        iActionGetHardWareInfo.addOutputParameter(param);

        iActionSetRoomName = new Action("SetRoomName");
        param = new ParameterString("RoomName", allowedValues);
        iActionSetRoomName.addInputParameter(param);

        iActionGetVolumeControl = new Action("GetVolumeControl");
        param = new ParameterBool("VolumeControl");
        iActionGetVolumeControl.addOutputParameter(param);

        iActionSetVolumeControl = new Action("SetVolumeControl");
        param = new ParameterBool("VolumeControl");
        iActionSetVolumeControl.addInputParameter(param);

        iActionGetWaitingTime = new Action("GetWaitingTime");
        param = new ParameterString("WaitingTime", allowedValues);
        iActionGetWaitingTime.addOutputParameter(param);

        iActionSetWaitingTime = new Action("SetWaitingTime");
        param = new ParameterString("WaitingTime", allowedValues);
        iActionSetWaitingTime.addInputParameter(param);

        iActionGetOutChannel = new Action("GetOutChannel");
        param = new ParameterUint("ChannelNum");
        iActionGetOutChannel.addOutputParameter(param);
        param = new ParameterString("CurrentChannel", allowedValues);
        iActionGetOutChannel.addOutputParameter(param);
        param = new ParameterString("OutChannel", allowedValues);
        iActionGetOutChannel.addOutputParameter(param);

        iActionSetOutChannel = new Action("SetOutChannel");
        param = new ParameterString("Channel", allowedValues);
        iActionSetOutChannel.addInputParameter(param);

        iActionSetUpnpType = new Action("SetUpnpType");
        param = new ParameterString("UpnpType", allowedValues);
        iActionSetUpnpType.addInputParameter(param);

        iActionGetUpnpType = new Action("GetUpnpType");
        param = new ParameterString("UpnpType", allowedValues);
        iActionGetUpnpType.addOutputParameter(param);

        iActionSetDsdNativeStatus = new Action("SetDsdNativeStatus");
        param = new ParameterString("Status", allowedValues);
        iActionSetDsdNativeStatus.addInputParameter(param);
        param = new ParameterString("SampleFormat", allowedValues);
        iActionSetDsdNativeStatus.addInputParameter(param);

        iActionGetDsdNativeStatus = new Action("GetDsdNativeStatus");
        param = new ParameterString("Status", allowedValues);
        iActionGetDsdNativeStatus.addOutputParameter(param);
        param = new ParameterString("SampleFormat", allowedValues);
        iActionGetDsdNativeStatus.addOutputParameter(param);

        iActionSetPasswordProtect = new Action("SetPasswordProtect");
        param = new ParameterString("Protect", allowedValues);
        iActionSetPasswordProtect.addInputParameter(param);
        param = new ParameterString("ProtectPassword", allowedValues);
        iActionSetPasswordProtect.addInputParameter(param);

        iActionGetPasswordProtect = new Action("GetPasswordProtect");
        param = new ParameterString("Protect", allowedValues);
        iActionGetPasswordProtect.addOutputParameter(param);
        param = new ParameterString("ProtectPassword", allowedValues);
        iActionGetPasswordProtect.addOutputParameter(param);

        iActionGetUpdateInfo = new Action("GetUpdateInfo");
        param = new ParameterString("Version", allowedValues);
        iActionGetUpdateInfo.addOutputParameter(param);
        param = new ParameterString("Progress", allowedValues);
        iActionGetUpdateInfo.addOutputParameter(param);

        iActionGetWirelessList = new Action("GetWirelessList");
        param = new ParameterString("InterFace", allowedValues);
        iActionGetWirelessList.addInputParameter(param);
        param = new ParameterUint("Number");
        iActionGetWirelessList.addOutputParameter(param);
        param = new ParameterString("CurrentUse", allowedValues);
        iActionGetWirelessList.addOutputParameter(param);
        param = new ParameterString("WirelessList", allowedValues);
        iActionGetWirelessList.addOutputParameter(param);

        iActionGetIpAddress = new Action("GetIpAddress");
        param = new ParameterString("InterFace", allowedValues);
        iActionGetIpAddress.addInputParameter(param);
        param = new ParameterString("IpAddress", allowedValues);
        iActionGetIpAddress.addOutputParameter(param);
        param = new ParameterString("NetMask", allowedValues);
        iActionGetIpAddress.addOutputParameter(param);
        param = new ParameterString("GateWay", allowedValues);
        iActionGetIpAddress.addOutputParameter(param);
        param = new ParameterString("DNS", allowedValues);
        iActionGetIpAddress.addOutputParameter(param);
        param = new ParameterString("DHCP", allowedValues);
        iActionGetIpAddress.addOutputParameter(param);

        iActionSetNetWork = new Action("SetNetWork");
        param = new ParameterString("InterFace", allowedValues);
        iActionSetNetWork.addInputParameter(param);
        param = new ParameterString("IpAddress", allowedValues);
        iActionSetNetWork.addInputParameter(param);
        param = new ParameterString("NetMask", allowedValues);
        iActionSetNetWork.addInputParameter(param);
        param = new ParameterString("GateWay", allowedValues);
        iActionSetNetWork.addInputParameter(param);
        param = new ParameterString("DNS", allowedValues);
        iActionSetNetWork.addInputParameter(param);
        param = new ParameterString("Ssid", allowedValues);
        iActionSetNetWork.addInputParameter(param);
        param = new ParameterString("PassWord", allowedValues);
        iActionSetNetWork.addInputParameter(param);
        param = new ParameterString("EncrypType", allowedValues);
        iActionSetNetWork.addInputParameter(param);

        iActionGetNetInterface = new Action("GetNetInterface");
        param = new ParameterUint("InterfaceNum");
        iActionGetNetInterface.addOutputParameter(param);
        param = new ParameterString("CurrentUse", allowedValues);
        iActionGetNetInterface.addOutputParameter(param);
        param = new ParameterString("InterfaceList", allowedValues);
        iActionGetNetInterface.addOutputParameter(param);

        iActionGetHaltStatus = new Action("GetHaltStatus");
        param = new ParameterBool("HaltStatus");
        iActionGetHaltStatus.addOutputParameter(param);

        iActionSetHaltStatus = new Action("SetHaltStatus");
        param = new ParameterBool("HaltStatus");
        iActionSetHaltStatus.addInputParameter(param);

        iActionGetFilterMode = new Action("GetFilterMode");
        param = new ParameterString("FilterMode", allowedValues);
        iActionGetFilterMode.addOutputParameter(param);
        param = new ParameterString("FilterModeList", allowedValues);
        iActionGetFilterMode.addOutputParameter(param);

        iActionSetFilterMode = new Action("SetFilterMode");
        param = new ParameterString("FilterMode", allowedValues);
        iActionSetFilterMode.addInputParameter(param);

        iActionSetSourceVisible = new Action("SetSourceVisible");
        param = new ParameterString("SourceName", allowedValues);
        iActionSetSourceVisible.addInputParameter(param);
        param = new ParameterBool("Visible");
        iActionSetSourceVisible.addInputParameter(param);

        iActionGetSourceVisible = new Action("GetSourceVisible");
        param = new ParameterString("VisibleInfo", allowedValues);
        iActionGetSourceVisible.addOutputParameter(param);

        iActionSetLEDMode = new Action("SetLEDMode");
        param = new ParameterString("LEDMode", allowedValues);
        iActionSetLEDMode.addInputParameter(param);

        iActionGetLEDMode = new Action("GetLEDMode");
        param = new ParameterString("LEDMode", allowedValues);
        iActionGetLEDMode.addOutputParameter(param);
        param = new ParameterString("LEDModeList", allowedValues);
        iActionGetLEDMode.addOutputParameter(param);

        iActionSetKeyMode = new Action("SetKeyMode");
        param = new ParameterString("KeyName", allowedValues);
        iActionSetKeyMode.addInputParameter(param);
        param = new ParameterString("KeyMode", allowedValues);
        iActionSetKeyMode.addInputParameter(param);

        iActionGetKeyMode = new Action("GetKeyMode");
        param = new ParameterString("SideKeyMode", allowedValues);
        iActionGetKeyMode.addOutputParameter(param);
        param = new ParameterString("MiddleKeyMode", allowedValues);
        iActionGetKeyMode.addOutputParameter(param);
        param = new ParameterString("KeyModeList", allowedValues);
        iActionGetKeyMode.addOutputParameter(param);

        iActionSetBrightness = new Action("SetBrightness");
        param = new ParameterString("Brightness", allowedValues);
        iActionSetBrightness.addInputParameter(param);

        iActionGetBrightness = new Action("GetBrightness");
        param = new ParameterString("Brightness", allowedValues);
        iActionGetBrightness.addOutputParameter(param);
        param = new ParameterString("List", allowedValues);
        iActionGetBrightness.addOutputParameter(param);

        iActionSetDisplayMode = new Action("SetDisplayMode");
        param = new ParameterString("DisplayMode", allowedValues);
        iActionSetDisplayMode.addInputParameter(param);

        iActionGetDisplayMode = new Action("GetDisplayMode");
        param = new ParameterString("DisplayMode", allowedValues);
        iActionGetDisplayMode.addOutputParameter(param);
        param = new ParameterString("DisplayModeList", allowedValues);
        iActionGetDisplayMode.addOutputParameter(param);

        iActionGetDACPhase = new Action("GetDACPhase");
        param = new ParameterUint("Phase");
        iActionGetDACPhase.addOutputParameter(param);

        iActionSetDACPhase = new Action("SetDACPhase");
        param = new ParameterUint("Phase");
        iActionSetDACPhase.addInputParameter(param);

        iActionGetDACBalance = new Action("GetDACBalance");
        param = new ParameterUint("Balance");
        iActionGetDACBalance.addOutputParameter(param);

        iActionSetDACBalance = new Action("SetDACBalance");
        param = new ParameterUint("Balance");
        iActionSetDACBalance.addInputParameter(param);

        iActionSetEnableResampler = new Action("SetEnableResampler");
        param = new ParameterBool("EnableResampler");
        iActionSetEnableResampler.addInputParameter(param);

        iActionSetEnableSpeaker = new Action("SetEnableSpeaker");
        param = new ParameterBool("EnableSpeaker");
        iActionSetEnableSpeaker.addInputParameter(param);

        iActionSetEnableEqualizer = new Action("SetEnableEqualizer");
        param = new ParameterBool("EnableEqualizer");
        iActionSetEnableEqualizer.addInputParameter(param);

        iActionSetEnableDirac = new Action("SetEnableDirac");
        param = new ParameterBool("EnableDirac");
        iActionSetEnableDirac.addInputParameter(param);

        iMessageOutChanged = new PropertyChangeListener();
        iMessageOut = new PropertyString("MessageOut",
            new PropertyChangeListener() {
                public void notifyChange() {
                    messageOutPropertyChanged();
                }
            }
        );
        addProperty(iMessageOut);
        iAliveChanged = new PropertyChangeListener();
        iAlive = new PropertyBool("Alive",
            new PropertyChangeListener() {
                public void notifyChange() {
                    alivePropertyChanged();
                }
            }
        );
        addProperty(iAlive);
        iCurrentActionChanged = new PropertyChangeListener();
        iCurrentAction = new PropertyUint("CurrentAction",
            new PropertyChangeListener() {
                public void notifyChange() {
                    currentActionPropertyChanged();
                }
            }
        );
        addProperty(iCurrentAction);
        iRestartChanged = new PropertyChangeListener();
        iRestart = new PropertyBool("Restart",
            new PropertyChangeListener() {
                public void notifyChange() {
                    restartPropertyChanged();
                }
            }
        );
        addProperty(iRestart);
        iNumberChanged = new PropertyChangeListener();
        iNumber = new PropertyUint("Number",
            new PropertyChangeListener() {
                public void notifyChange() {
                    numberPropertyChanged();
                }
            }
        );
        addProperty(iNumber);
        iRoomNameChanged = new PropertyChangeListener();
        iRoomName = new PropertyString("RoomName",
            new PropertyChangeListener() {
                public void notifyChange() {
                    roomNamePropertyChanged();
                }
            }
        );
        addProperty(iRoomName);
        iInterFaceChanged = new PropertyChangeListener();
        iInterFace = new PropertyString("InterFace",
            new PropertyChangeListener() {
                public void notifyChange() {
                    interFacePropertyChanged();
                }
            }
        );
        addProperty(iInterFace);
        iNetMaskChanged = new PropertyChangeListener();
        iNetMask = new PropertyString("NetMask",
            new PropertyChangeListener() {
                public void notifyChange() {
                    netMaskPropertyChanged();
                }
            }
        );
        addProperty(iNetMask);
        iGateWayChanged = new PropertyChangeListener();
        iGateWay = new PropertyString("GateWay",
            new PropertyChangeListener() {
                public void notifyChange() {
                    gateWayPropertyChanged();
                }
            }
        );
        addProperty(iGateWay);
        iDNSChanged = new PropertyChangeListener();
        iDNS = new PropertyString("DNS",
            new PropertyChangeListener() {
                public void notifyChange() {
                    dNSPropertyChanged();
                }
            }
        );
        addProperty(iDNS);
        iDHCPChanged = new PropertyChangeListener();
        iDHCP = new PropertyString("DHCP",
            new PropertyChangeListener() {
                public void notifyChange() {
                    dHCPPropertyChanged();
                }
            }
        );
        addProperty(iDHCP);
        iSsidChanged = new PropertyChangeListener();
        iSsid = new PropertyString("Ssid",
            new PropertyChangeListener() {
                public void notifyChange() {
                    ssidPropertyChanged();
                }
            }
        );
        addProperty(iSsid);
        iPassWordChanged = new PropertyChangeListener();
        iPassWord = new PropertyString("PassWord",
            new PropertyChangeListener() {
                public void notifyChange() {
                    passWordPropertyChanged();
                }
            }
        );
        addProperty(iPassWord);
        iEncrypTypeChanged = new PropertyChangeListener();
        iEncrypType = new PropertyString("EncrypType",
            new PropertyChangeListener() {
                public void notifyChange() {
                    encrypTypePropertyChanged();
                }
            }
        );
        addProperty(iEncrypType);
        iChannelChanged = new PropertyChangeListener();
        iChannel = new PropertyString("Channel",
            new PropertyChangeListener() {
                public void notifyChange() {
                    channelPropertyChanged();
                }
            }
        );
        addProperty(iChannel);
        iUpnpTypeChanged = new PropertyChangeListener();
        iUpnpType = new PropertyString("UpnpType",
            new PropertyChangeListener() {
                public void notifyChange() {
                    upnpTypePropertyChanged();
                }
            }
        );
        addProperty(iUpnpType);
        iStatusChanged = new PropertyChangeListener();
        iStatus = new PropertyString("Status",
            new PropertyChangeListener() {
                public void notifyChange() {
                    statusPropertyChanged();
                }
            }
        );
        addProperty(iStatus);
        iSampleFormatChanged = new PropertyChangeListener();
        iSampleFormat = new PropertyString("SampleFormat",
            new PropertyChangeListener() {
                public void notifyChange() {
                    sampleFormatPropertyChanged();
                }
            }
        );
        addProperty(iSampleFormat);
        iIpAddressChanged = new PropertyChangeListener();
        iIpAddress = new PropertyString("IpAddress",
            new PropertyChangeListener() {
                public void notifyChange() {
                    ipAddressPropertyChanged();
                }
            }
        );
        addProperty(iIpAddress);
        iProtectChanged = new PropertyChangeListener();
        iProtect = new PropertyString("Protect",
            new PropertyChangeListener() {
                public void notifyChange() {
                    protectPropertyChanged();
                }
            }
        );
        addProperty(iProtect);
        iProtectPasswordChanged = new PropertyChangeListener();
        iProtectPassword = new PropertyString("ProtectPassword",
            new PropertyChangeListener() {
                public void notifyChange() {
                    protectPasswordPropertyChanged();
                }
            }
        );
        addProperty(iProtectPassword);
        iActiveStatusChanged = new PropertyChangeListener();
        iActiveStatus = new PropertyString("ActiveStatus",
            new PropertyChangeListener() {
                public void notifyChange() {
                    activeStatusPropertyChanged();
                }
            }
        );
        addProperty(iActiveStatus);
        iTimeChanged = new PropertyChangeListener();
        iTime = new PropertyString("Time",
            new PropertyChangeListener() {
                public void notifyChange() {
                    timePropertyChanged();
                }
            }
        );
        addProperty(iTime);
        iVolumeControlChanged = new PropertyChangeListener();
        iVolumeControl = new PropertyBool("VolumeControl",
            new PropertyChangeListener() {
                public void notifyChange() {
                    volumeControlPropertyChanged();
                }
            }
        );
        addProperty(iVolumeControl);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncLogIn(String aServiceName, String aMessageIn)
    {
        SyncLogInAvOpenhomeOrgHardwareConfig1 sync = new SyncLogInAvOpenhomeOrgHardwareConfig1(this);
        beginLogIn(aServiceName, aMessageIn, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getMessageOut();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endLogIn}.
     * 
     * @param aServiceName
     * @param aMessageIn
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginLogIn(String aServiceName, String aMessageIn, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionLogIn, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionLogIn.getInputParameter(inIndex++), aServiceName));
        invocation.addInput(new ArgumentString((ParameterString)iActionLogIn.getInputParameter(inIndex++), aMessageIn));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionLogIn.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginLogIn} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginLogIn} method.
     * @return the result of the previously invoked action.
     */
    public String endLogIn(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String messageOut = Invocation.getOutputString(aAsyncHandle, index++);
        return messageOut;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncLogOut(String aServiceName)
    {
        SyncLogOutAvOpenhomeOrgHardwareConfig1 sync = new SyncLogOutAvOpenhomeOrgHardwareConfig1(this);
        beginLogOut(aServiceName, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endLogOut}.
     * 
     * @param aServiceName
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginLogOut(String aServiceName, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionLogOut, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionLogOut.getInputParameter(inIndex++), aServiceName));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginLogOut} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginLogOut} method.
     */
    public void endLogOut(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncCancelLogIn(String aServiceName)
    {
        SyncCancelLogInAvOpenhomeOrgHardwareConfig1 sync = new SyncCancelLogInAvOpenhomeOrgHardwareConfig1(this);
        beginCancelLogIn(aServiceName, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endCancelLogIn}.
     * 
     * @param aServiceName
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginCancelLogIn(String aServiceName, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionCancelLogIn, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionCancelLogIn.getInputParameter(inIndex++), aServiceName));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginCancelLogIn} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginCancelLogIn} method.
     */
    public void endCancelLogIn(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncIsAlive()
    {
        SyncIsAliveAvOpenhomeOrgHardwareConfig1 sync = new SyncIsAliveAvOpenhomeOrgHardwareConfig1(this);
        beginIsAlive(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getAlive();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endIsAlive}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginIsAlive(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionIsAlive, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionIsAlive.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginIsAlive} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginIsAlive} method.
     * @return the result of the previously invoked action.
     */
    public boolean endIsAlive(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean alive = Invocation.getOutputBool(aAsyncHandle, index++);
        return alive;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncUpdate()
    {
        SyncUpdateAvOpenhomeOrgHardwareConfig1 sync = new SyncUpdateAvOpenhomeOrgHardwareConfig1(this);
        beginUpdate(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endUpdate}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginUpdate(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionUpdate, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginUpdate} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginUpdate} method.
     */
    public void endUpdate(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncActive(boolean aIsSubscribe, String aRealName, String aEmail)
    {
        SyncActiveAvOpenhomeOrgHardwareConfig1 sync = new SyncActiveAvOpenhomeOrgHardwareConfig1(this);
        beginActive(aIsSubscribe, aRealName, aEmail, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endActive}.
     * 
     * @param aIsSubscribe
     * @param aRealName
     * @param aEmail
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginActive(boolean aIsSubscribe, String aRealName, String aEmail, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionActive, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionActive.getInputParameter(inIndex++), aIsSubscribe));
        invocation.addInput(new ArgumentString((ParameterString)iActionActive.getInputParameter(inIndex++), aRealName));
        invocation.addInput(new ArgumentString((ParameterString)iActionActive.getInputParameter(inIndex++), aEmail));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginActive} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginActive} method.
     */
    public void endActive(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetActiveStatus()
    {
        SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1 sync = new SyncGetActiveStatusAvOpenhomeOrgHardwareConfig1(this);
        beginGetActiveStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getActiveStatus();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetActiveStatus}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetActiveStatus(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetActiveStatus, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetActiveStatus.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetActiveStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetActiveStatus} method.
     * @return the result of the previously invoked action.
     */
    public String endGetActiveStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String activeStatus = Invocation.getOutputString(aAsyncHandle, index++);
        return activeStatus;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncCheckUpdate()
    {
        SyncCheckUpdateAvOpenhomeOrgHardwareConfig1 sync = new SyncCheckUpdateAvOpenhomeOrgHardwareConfig1(this);
        beginCheckUpdate(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endCheckUpdate}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginCheckUpdate(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionCheckUpdate, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginCheckUpdate} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginCheckUpdate} method.
     */
    public void endCheckUpdate(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncResetDisplay()
    {
        SyncResetDisplayAvOpenhomeOrgHardwareConfig1 sync = new SyncResetDisplayAvOpenhomeOrgHardwareConfig1(this);
        beginResetDisplay(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endResetDisplay}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginResetDisplay(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionResetDisplay, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginResetDisplay} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginResetDisplay} method.
     */
    public void endResetDisplay(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetHardWareInfo()
    {
        SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1 sync = new SyncGetHardWareInfoAvOpenhomeOrgHardwareConfig1(this);
        beginGetHardWareInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getHardWareInfo();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetHardWareInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetHardWareInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetHardWareInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetHardWareInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetHardWareInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetHardWareInfo} method.
     * @return the result of the previously invoked action.
     */
    public String endGetHardWareInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String hardWareInfo = Invocation.getOutputString(aAsyncHandle, index++);
        return hardWareInfo;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetRoomName(String aRoomName)
    {
        SyncSetRoomNameAvOpenhomeOrgHardwareConfig1 sync = new SyncSetRoomNameAvOpenhomeOrgHardwareConfig1(this);
        beginSetRoomName(aRoomName, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetRoomName}.
     * 
     * @param aRoomName
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetRoomName(String aRoomName, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetRoomName, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetRoomName.getInputParameter(inIndex++), aRoomName));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetRoomName} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetRoomName} method.
     */
    public void endSetRoomName(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncGetVolumeControl()
    {
        SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1 sync = new SyncGetVolumeControlAvOpenhomeOrgHardwareConfig1(this);
        beginGetVolumeControl(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getVolumeControl();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetVolumeControl}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetVolumeControl(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetVolumeControl, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetVolumeControl.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetVolumeControl} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetVolumeControl} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetVolumeControl(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean volumeControl = Invocation.getOutputBool(aAsyncHandle, index++);
        return volumeControl;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetVolumeControl(boolean aVolumeControl)
    {
        SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1 sync = new SyncSetVolumeControlAvOpenhomeOrgHardwareConfig1(this);
        beginSetVolumeControl(aVolumeControl, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetVolumeControl}.
     * 
     * @param aVolumeControl
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetVolumeControl(boolean aVolumeControl, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetVolumeControl, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetVolumeControl.getInputParameter(inIndex++), aVolumeControl));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetVolumeControl} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetVolumeControl} method.
     */
    public void endSetVolumeControl(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetWaitingTime()
    {
        SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetWaitingTimeAvOpenhomeOrgHardwareConfig1(this);
        beginGetWaitingTime(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getWaitingTime();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetWaitingTime}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetWaitingTime(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetWaitingTime, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetWaitingTime.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetWaitingTime} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetWaitingTime} method.
     * @return the result of the previously invoked action.
     */
    public String endGetWaitingTime(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String waitingTime = Invocation.getOutputString(aAsyncHandle, index++);
        return waitingTime;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetWaitingTime(String aWaitingTime)
    {
        SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetWaitingTimeAvOpenhomeOrgHardwareConfig1(this);
        beginSetWaitingTime(aWaitingTime, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetWaitingTime}.
     * 
     * @param aWaitingTime
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetWaitingTime(String aWaitingTime, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetWaitingTime, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetWaitingTime.getInputParameter(inIndex++), aWaitingTime));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetWaitingTime} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetWaitingTime} method.
     */
    public void endSetWaitingTime(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetOutChannel syncGetOutChannel()
    {
        SyncGetOutChannelAvOpenhomeOrgHardwareConfig1 sync = new SyncGetOutChannelAvOpenhomeOrgHardwareConfig1(this);
        beginGetOutChannel(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetOutChannel(
            sync.getChannelNum(),
            sync.getCurrentChannel(),
            sync.getOutChannel()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetOutChannel}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetOutChannel(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetOutChannel, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetOutChannel.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetOutChannel.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetOutChannel.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetOutChannel} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetOutChannel} method.
     * @return the result of the previously invoked action.
     */
    public GetOutChannel endGetOutChannel(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long channelNum = Invocation.getOutputUint(aAsyncHandle, index++);
        String currentChannel = Invocation.getOutputString(aAsyncHandle, index++);
        String outChannel = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetOutChannel(
            channelNum,
            currentChannel,
            outChannel
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetOutChannel(String aChannel)
    {
        SyncSetOutChannelAvOpenhomeOrgHardwareConfig1 sync = new SyncSetOutChannelAvOpenhomeOrgHardwareConfig1(this);
        beginSetOutChannel(aChannel, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetOutChannel}.
     * 
     * @param aChannel
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetOutChannel(String aChannel, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetOutChannel, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetOutChannel.getInputParameter(inIndex++), aChannel));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetOutChannel} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetOutChannel} method.
     */
    public void endSetOutChannel(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetUpnpType(String aUpnpType)
    {
        SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetUpnpTypeAvOpenhomeOrgHardwareConfig1(this);
        beginSetUpnpType(aUpnpType, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetUpnpType}.
     * 
     * @param aUpnpType
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetUpnpType(String aUpnpType, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetUpnpType, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetUpnpType.getInputParameter(inIndex++), aUpnpType));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetUpnpType} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetUpnpType} method.
     */
    public void endSetUpnpType(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetUpnpType()
    {
        SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetUpnpTypeAvOpenhomeOrgHardwareConfig1(this);
        beginGetUpnpType(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getUpnpType();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetUpnpType}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetUpnpType(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetUpnpType, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetUpnpType.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetUpnpType} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetUpnpType} method.
     * @return the result of the previously invoked action.
     */
    public String endGetUpnpType(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String upnpType = Invocation.getOutputString(aAsyncHandle, index++);
        return upnpType;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetDsdNativeStatus(String aStatus, String aSampleFormat)
    {
        SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 sync = new SyncSetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(this);
        beginSetDsdNativeStatus(aStatus, aSampleFormat, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetDsdNativeStatus}.
     * 
     * @param aStatus
     * @param aSampleFormat
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetDsdNativeStatus(String aStatus, String aSampleFormat, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetDsdNativeStatus, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetDsdNativeStatus.getInputParameter(inIndex++), aStatus));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetDsdNativeStatus.getInputParameter(inIndex++), aSampleFormat));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetDsdNativeStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetDsdNativeStatus} method.
     */
    public void endSetDsdNativeStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetDsdNativeStatus syncGetDsdNativeStatus()
    {
        SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1 sync = new SyncGetDsdNativeStatusAvOpenhomeOrgHardwareConfig1(this);
        beginGetDsdNativeStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetDsdNativeStatus(
            sync.getStatus(),
            sync.getSampleFormat()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDsdNativeStatus}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDsdNativeStatus(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDsdNativeStatus, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDsdNativeStatus.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDsdNativeStatus.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDsdNativeStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDsdNativeStatus} method.
     * @return the result of the previously invoked action.
     */
    public GetDsdNativeStatus endGetDsdNativeStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String status = Invocation.getOutputString(aAsyncHandle, index++);
        String sampleFormat = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetDsdNativeStatus(
            status,
            sampleFormat
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetPasswordProtect(String aProtect, String aProtectPassword)
    {
        SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1 sync = new SyncSetPasswordProtectAvOpenhomeOrgHardwareConfig1(this);
        beginSetPasswordProtect(aProtect, aProtectPassword, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetPasswordProtect}.
     * 
     * @param aProtect
     * @param aProtectPassword
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetPasswordProtect(String aProtect, String aProtectPassword, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetPasswordProtect, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetPasswordProtect.getInputParameter(inIndex++), aProtect));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetPasswordProtect.getInputParameter(inIndex++), aProtectPassword));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetPasswordProtect} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetPasswordProtect} method.
     */
    public void endSetPasswordProtect(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetPasswordProtect syncGetPasswordProtect()
    {
        SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1 sync = new SyncGetPasswordProtectAvOpenhomeOrgHardwareConfig1(this);
        beginGetPasswordProtect(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetPasswordProtect(
            sync.getProtect(),
            sync.getProtectPassword()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetPasswordProtect}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetPasswordProtect(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetPasswordProtect, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetPasswordProtect.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetPasswordProtect.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetPasswordProtect} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetPasswordProtect} method.
     * @return the result of the previously invoked action.
     */
    public GetPasswordProtect endGetPasswordProtect(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String protect = Invocation.getOutputString(aAsyncHandle, index++);
        String protectPassword = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetPasswordProtect(
            protect,
            protectPassword
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetUpdateInfo syncGetUpdateInfo()
    {
        SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1 sync = new SyncGetUpdateInfoAvOpenhomeOrgHardwareConfig1(this);
        beginGetUpdateInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetUpdateInfo(
            sync.getVersion(),
            sync.getProgress()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetUpdateInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetUpdateInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetUpdateInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetUpdateInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetUpdateInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetUpdateInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetUpdateInfo} method.
     * @return the result of the previously invoked action.
     */
    public GetUpdateInfo endGetUpdateInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String version = Invocation.getOutputString(aAsyncHandle, index++);
        String progress = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetUpdateInfo(
            version,
            progress
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetWirelessList syncGetWirelessList(String aInterFace)
    {
        SyncGetWirelessListAvOpenhomeOrgHardwareConfig1 sync = new SyncGetWirelessListAvOpenhomeOrgHardwareConfig1(this);
        beginGetWirelessList(aInterFace, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetWirelessList(
            sync.getNumber(),
            sync.getCurrentUse(),
            sync.getWirelessList()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetWirelessList}.
     * 
     * @param aInterFace
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetWirelessList(String aInterFace, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetWirelessList, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionGetWirelessList.getInputParameter(inIndex++), aInterFace));
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetWirelessList.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetWirelessList.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetWirelessList.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetWirelessList} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetWirelessList} method.
     * @return the result of the previously invoked action.
     */
    public GetWirelessList endGetWirelessList(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long number = Invocation.getOutputUint(aAsyncHandle, index++);
        String currentUse = Invocation.getOutputString(aAsyncHandle, index++);
        String wirelessList = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetWirelessList(
            number,
            currentUse,
            wirelessList
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetIpAddress syncGetIpAddress(String aInterFace)
    {
        SyncGetIpAddressAvOpenhomeOrgHardwareConfig1 sync = new SyncGetIpAddressAvOpenhomeOrgHardwareConfig1(this);
        beginGetIpAddress(aInterFace, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetIpAddress(
            sync.getIpAddress(),
            sync.getNetMask(),
            sync.getGateWay(),
            sync.getDNS(),
            sync.getDHCP()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetIpAddress}.
     * 
     * @param aInterFace
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetIpAddress(String aInterFace, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetIpAddress, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionGetIpAddress.getInputParameter(inIndex++), aInterFace));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetIpAddress.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetIpAddress.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetIpAddress.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetIpAddress.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetIpAddress.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetIpAddress} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetIpAddress} method.
     * @return the result of the previously invoked action.
     */
    public GetIpAddress endGetIpAddress(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String ipAddress = Invocation.getOutputString(aAsyncHandle, index++);
        String netMask = Invocation.getOutputString(aAsyncHandle, index++);
        String gateWay = Invocation.getOutputString(aAsyncHandle, index++);
        String dNS = Invocation.getOutputString(aAsyncHandle, index++);
        String dHCP = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetIpAddress(
            ipAddress,
            netMask,
            gateWay,
            dNS,
            dHCP
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetNetWork(String aInterFace, String aIpAddress, String aNetMask, String aGateWay, String aDNS, String aSsid, String aPassWord, String aEncrypType)
    {
        SyncSetNetWorkAvOpenhomeOrgHardwareConfig1 sync = new SyncSetNetWorkAvOpenhomeOrgHardwareConfig1(this);
        beginSetNetWork(aInterFace, aIpAddress, aNetMask, aGateWay, aDNS, aSsid, aPassWord, aEncrypType, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetNetWork}.
     * 
     * @param aInterFace
     * @param aIpAddress
     * @param aNetMask
     * @param aGateWay
     * @param aDNS
     * @param aSsid
     * @param aPassWord
     * @param aEncrypType
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetNetWork(String aInterFace, String aIpAddress, String aNetMask, String aGateWay, String aDNS, String aSsid, String aPassWord, String aEncrypType, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetNetWork, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetWork.getInputParameter(inIndex++), aInterFace));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetWork.getInputParameter(inIndex++), aIpAddress));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetWork.getInputParameter(inIndex++), aNetMask));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetWork.getInputParameter(inIndex++), aGateWay));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetWork.getInputParameter(inIndex++), aDNS));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetWork.getInputParameter(inIndex++), aSsid));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetWork.getInputParameter(inIndex++), aPassWord));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetWork.getInputParameter(inIndex++), aEncrypType));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetNetWork} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetNetWork} method.
     */
    public void endSetNetWork(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetNetInterface syncGetNetInterface()
    {
        SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1 sync = new SyncGetNetInterfaceAvOpenhomeOrgHardwareConfig1(this);
        beginGetNetInterface(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetNetInterface(
            sync.getInterfaceNum(),
            sync.getCurrentUse(),
            sync.getInterfaceList()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetNetInterface}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetNetInterface(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetNetInterface, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetNetInterface.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetNetInterface.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetNetInterface.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetNetInterface} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetNetInterface} method.
     * @return the result of the previously invoked action.
     */
    public GetNetInterface endGetNetInterface(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long interfaceNum = Invocation.getOutputUint(aAsyncHandle, index++);
        String currentUse = Invocation.getOutputString(aAsyncHandle, index++);
        String interfaceList = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetNetInterface(
            interfaceNum,
            currentUse,
            interfaceList
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncGetHaltStatus()
    {
        SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1 sync = new SyncGetHaltStatusAvOpenhomeOrgHardwareConfig1(this);
        beginGetHaltStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getHaltStatus();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetHaltStatus}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetHaltStatus(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetHaltStatus, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetHaltStatus.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetHaltStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetHaltStatus} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetHaltStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean haltStatus = Invocation.getOutputBool(aAsyncHandle, index++);
        return haltStatus;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetHaltStatus(boolean aHaltStatus)
    {
        SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1 sync = new SyncSetHaltStatusAvOpenhomeOrgHardwareConfig1(this);
        beginSetHaltStatus(aHaltStatus, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetHaltStatus}.
     * 
     * @param aHaltStatus
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetHaltStatus(boolean aHaltStatus, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetHaltStatus, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetHaltStatus.getInputParameter(inIndex++), aHaltStatus));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetHaltStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetHaltStatus} method.
     */
    public void endSetHaltStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetFilterMode syncGetFilterMode()
    {
        SyncGetFilterModeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetFilterModeAvOpenhomeOrgHardwareConfig1(this);
        beginGetFilterMode(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetFilterMode(
            sync.getFilterMode(),
            sync.getFilterModeList()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetFilterMode}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetFilterMode(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetFilterMode, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetFilterMode.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetFilterMode.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetFilterMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetFilterMode} method.
     * @return the result of the previously invoked action.
     */
    public GetFilterMode endGetFilterMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String filterMode = Invocation.getOutputString(aAsyncHandle, index++);
        String filterModeList = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetFilterMode(
            filterMode,
            filterModeList
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetFilterMode(String aFilterMode)
    {
        SyncSetFilterModeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetFilterModeAvOpenhomeOrgHardwareConfig1(this);
        beginSetFilterMode(aFilterMode, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetFilterMode}.
     * 
     * @param aFilterMode
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetFilterMode(String aFilterMode, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetFilterMode, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetFilterMode.getInputParameter(inIndex++), aFilterMode));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetFilterMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetFilterMode} method.
     */
    public void endSetFilterMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetSourceVisible(String aSourceName, boolean aVisible)
    {
        SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1 sync = new SyncSetSourceVisibleAvOpenhomeOrgHardwareConfig1(this);
        beginSetSourceVisible(aSourceName, aVisible, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetSourceVisible}.
     * 
     * @param aSourceName
     * @param aVisible
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetSourceVisible(String aSourceName, boolean aVisible, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetSourceVisible, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetSourceVisible.getInputParameter(inIndex++), aSourceName));
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetSourceVisible.getInputParameter(inIndex++), aVisible));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetSourceVisible} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetSourceVisible} method.
     */
    public void endSetSourceVisible(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetSourceVisible()
    {
        SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1 sync = new SyncGetSourceVisibleAvOpenhomeOrgHardwareConfig1(this);
        beginGetSourceVisible(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getVisibleInfo();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetSourceVisible}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetSourceVisible(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetSourceVisible, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSourceVisible.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetSourceVisible} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetSourceVisible} method.
     * @return the result of the previously invoked action.
     */
    public String endGetSourceVisible(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String visibleInfo = Invocation.getOutputString(aAsyncHandle, index++);
        return visibleInfo;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetLEDMode(String aLEDMode)
    {
        SyncSetLEDModeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetLEDModeAvOpenhomeOrgHardwareConfig1(this);
        beginSetLEDMode(aLEDMode, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetLEDMode}.
     * 
     * @param aLEDMode
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetLEDMode(String aLEDMode, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetLEDMode, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetLEDMode.getInputParameter(inIndex++), aLEDMode));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetLEDMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetLEDMode} method.
     */
    public void endSetLEDMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetLEDMode syncGetLEDMode()
    {
        SyncGetLEDModeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetLEDModeAvOpenhomeOrgHardwareConfig1(this);
        beginGetLEDMode(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetLEDMode(
            sync.getLEDMode(),
            sync.getLEDModeList()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetLEDMode}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetLEDMode(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetLEDMode, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetLEDMode.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetLEDMode.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetLEDMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetLEDMode} method.
     * @return the result of the previously invoked action.
     */
    public GetLEDMode endGetLEDMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String lEDMode = Invocation.getOutputString(aAsyncHandle, index++);
        String lEDModeList = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetLEDMode(
            lEDMode,
            lEDModeList
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetKeyMode(String aKeyName, String aKeyMode)
    {
        SyncSetKeyModeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetKeyModeAvOpenhomeOrgHardwareConfig1(this);
        beginSetKeyMode(aKeyName, aKeyMode, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetKeyMode}.
     * 
     * @param aKeyName
     * @param aKeyMode
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetKeyMode(String aKeyName, String aKeyMode, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetKeyMode, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetKeyMode.getInputParameter(inIndex++), aKeyName));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetKeyMode.getInputParameter(inIndex++), aKeyMode));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetKeyMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetKeyMode} method.
     */
    public void endSetKeyMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetKeyMode syncGetKeyMode()
    {
        SyncGetKeyModeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetKeyModeAvOpenhomeOrgHardwareConfig1(this);
        beginGetKeyMode(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetKeyMode(
            sync.getSideKeyMode(),
            sync.getMiddleKeyMode(),
            sync.getKeyModeList()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetKeyMode}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetKeyMode(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetKeyMode, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetKeyMode.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetKeyMode.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetKeyMode.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetKeyMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetKeyMode} method.
     * @return the result of the previously invoked action.
     */
    public GetKeyMode endGetKeyMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String sideKeyMode = Invocation.getOutputString(aAsyncHandle, index++);
        String middleKeyMode = Invocation.getOutputString(aAsyncHandle, index++);
        String keyModeList = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetKeyMode(
            sideKeyMode,
            middleKeyMode,
            keyModeList
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetBrightness(String aBrightness)
    {
        SyncSetBrightnessAvOpenhomeOrgHardwareConfig1 sync = new SyncSetBrightnessAvOpenhomeOrgHardwareConfig1(this);
        beginSetBrightness(aBrightness, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetBrightness}.
     * 
     * @param aBrightness
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetBrightness(String aBrightness, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetBrightness, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetBrightness.getInputParameter(inIndex++), aBrightness));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetBrightness} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetBrightness} method.
     */
    public void endSetBrightness(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetBrightness syncGetBrightness()
    {
        SyncGetBrightnessAvOpenhomeOrgHardwareConfig1 sync = new SyncGetBrightnessAvOpenhomeOrgHardwareConfig1(this);
        beginGetBrightness(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetBrightness(
            sync.getBrightness(),
            sync.getList()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetBrightness}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetBrightness(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetBrightness, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetBrightness.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetBrightness.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetBrightness} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetBrightness} method.
     * @return the result of the previously invoked action.
     */
    public GetBrightness endGetBrightness(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String brightness = Invocation.getOutputString(aAsyncHandle, index++);
        String list = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetBrightness(
            brightness,
            list
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetDisplayMode(String aDisplayMode)
    {
        SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1 sync = new SyncSetDisplayModeAvOpenhomeOrgHardwareConfig1(this);
        beginSetDisplayMode(aDisplayMode, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetDisplayMode}.
     * 
     * @param aDisplayMode
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetDisplayMode(String aDisplayMode, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetDisplayMode, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetDisplayMode.getInputParameter(inIndex++), aDisplayMode));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetDisplayMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetDisplayMode} method.
     */
    public void endSetDisplayMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetDisplayMode syncGetDisplayMode()
    {
        SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1 sync = new SyncGetDisplayModeAvOpenhomeOrgHardwareConfig1(this);
        beginGetDisplayMode(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetDisplayMode(
            sync.getDisplayMode(),
            sync.getDisplayModeList()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDisplayMode}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDisplayMode(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDisplayMode, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDisplayMode.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDisplayMode.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDisplayMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDisplayMode} method.
     * @return the result of the previously invoked action.
     */
    public GetDisplayMode endGetDisplayMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String displayMode = Invocation.getOutputString(aAsyncHandle, index++);
        String displayModeList = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetDisplayMode(
            displayMode,
            displayModeList
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncGetDACPhase()
    {
        SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1 sync = new SyncGetDACPhaseAvOpenhomeOrgHardwareConfig1(this);
        beginGetDACPhase(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getPhase();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDACPhase}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDACPhase(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDACPhase, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetDACPhase.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDACPhase} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDACPhase} method.
     * @return the result of the previously invoked action.
     */
    public long endGetDACPhase(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long phase = Invocation.getOutputUint(aAsyncHandle, index++);
        return phase;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetDACPhase(long aPhase)
    {
        SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1 sync = new SyncSetDACPhaseAvOpenhomeOrgHardwareConfig1(this);
        beginSetDACPhase(aPhase, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetDACPhase}.
     * 
     * @param aPhase
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetDACPhase(long aPhase, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetDACPhase, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetDACPhase.getInputParameter(inIndex++), aPhase));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetDACPhase} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetDACPhase} method.
     */
    public void endSetDACPhase(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncGetDACBalance()
    {
        SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1 sync = new SyncGetDACBalanceAvOpenhomeOrgHardwareConfig1(this);
        beginGetDACBalance(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getBalance();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDACBalance}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDACBalance(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDACBalance, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetDACBalance.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDACBalance} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDACBalance} method.
     * @return the result of the previously invoked action.
     */
    public long endGetDACBalance(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long balance = Invocation.getOutputUint(aAsyncHandle, index++);
        return balance;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetDACBalance(long aBalance)
    {
        SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1 sync = new SyncSetDACBalanceAvOpenhomeOrgHardwareConfig1(this);
        beginSetDACBalance(aBalance, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetDACBalance}.
     * 
     * @param aBalance
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetDACBalance(long aBalance, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetDACBalance, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetDACBalance.getInputParameter(inIndex++), aBalance));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetDACBalance} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetDACBalance} method.
     */
    public void endSetDACBalance(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetEnableResampler(boolean aEnableResampler)
    {
        SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1 sync = new SyncSetEnableResamplerAvOpenhomeOrgHardwareConfig1(this);
        beginSetEnableResampler(aEnableResampler, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetEnableResampler}.
     * 
     * @param aEnableResampler
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetEnableResampler(boolean aEnableResampler, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetEnableResampler, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetEnableResampler.getInputParameter(inIndex++), aEnableResampler));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetEnableResampler} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetEnableResampler} method.
     */
    public void endSetEnableResampler(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetEnableSpeaker(boolean aEnableSpeaker)
    {
        SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1 sync = new SyncSetEnableSpeakerAvOpenhomeOrgHardwareConfig1(this);
        beginSetEnableSpeaker(aEnableSpeaker, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetEnableSpeaker}.
     * 
     * @param aEnableSpeaker
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetEnableSpeaker(boolean aEnableSpeaker, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetEnableSpeaker, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetEnableSpeaker.getInputParameter(inIndex++), aEnableSpeaker));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetEnableSpeaker} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetEnableSpeaker} method.
     */
    public void endSetEnableSpeaker(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetEnableEqualizer(boolean aEnableEqualizer)
    {
        SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1 sync = new SyncSetEnableEqualizerAvOpenhomeOrgHardwareConfig1(this);
        beginSetEnableEqualizer(aEnableEqualizer, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetEnableEqualizer}.
     * 
     * @param aEnableEqualizer
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetEnableEqualizer(boolean aEnableEqualizer, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetEnableEqualizer, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetEnableEqualizer.getInputParameter(inIndex++), aEnableEqualizer));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetEnableEqualizer} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetEnableEqualizer} method.
     */
    public void endSetEnableEqualizer(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetEnableDirac(boolean aEnableDirac)
    {
        SyncSetEnableDiracAvOpenhomeOrgHardwareConfig1 sync = new SyncSetEnableDiracAvOpenhomeOrgHardwareConfig1(this);
        beginSetEnableDirac(aEnableDirac, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetEnableDirac}.
     * 
     * @param aEnableDirac
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetEnableDirac(boolean aEnableDirac, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetEnableDirac, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetEnableDirac.getInputParameter(inIndex++), aEnableDirac));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetEnableDirac} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetEnableDirac} method.
     */
    public void endSetEnableDirac(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the MessageOut state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aMessageOutChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyMessageOutChanged(IPropertyChangeListener aMessageOutChanged)
    {
        synchronized (iPropertyLock)
        {
            iMessageOutChanged = aMessageOutChanged;
        }
    }

    private void messageOutPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iMessageOutChanged);
        }
    }
    /**
     * Set a delegate to be run when the Alive state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aAliveChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyAliveChanged(IPropertyChangeListener aAliveChanged)
    {
        synchronized (iPropertyLock)
        {
            iAliveChanged = aAliveChanged;
        }
    }

    private void alivePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iAliveChanged);
        }
    }
    /**
     * Set a delegate to be run when the CurrentAction state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aCurrentActionChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCurrentActionChanged(IPropertyChangeListener aCurrentActionChanged)
    {
        synchronized (iPropertyLock)
        {
            iCurrentActionChanged = aCurrentActionChanged;
        }
    }

    private void currentActionPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCurrentActionChanged);
        }
    }
    /**
     * Set a delegate to be run when the Restart state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aRestartChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyRestartChanged(IPropertyChangeListener aRestartChanged)
    {
        synchronized (iPropertyLock)
        {
            iRestartChanged = aRestartChanged;
        }
    }

    private void restartPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iRestartChanged);
        }
    }
    /**
     * Set a delegate to be run when the Number state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aNumberChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyNumberChanged(IPropertyChangeListener aNumberChanged)
    {
        synchronized (iPropertyLock)
        {
            iNumberChanged = aNumberChanged;
        }
    }

    private void numberPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iNumberChanged);
        }
    }
    /**
     * Set a delegate to be run when the RoomName state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aRoomNameChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyRoomNameChanged(IPropertyChangeListener aRoomNameChanged)
    {
        synchronized (iPropertyLock)
        {
            iRoomNameChanged = aRoomNameChanged;
        }
    }

    private void roomNamePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iRoomNameChanged);
        }
    }
    /**
     * Set a delegate to be run when the InterFace state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aInterFaceChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyInterFaceChanged(IPropertyChangeListener aInterFaceChanged)
    {
        synchronized (iPropertyLock)
        {
            iInterFaceChanged = aInterFaceChanged;
        }
    }

    private void interFacePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iInterFaceChanged);
        }
    }
    /**
     * Set a delegate to be run when the NetMask state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aNetMaskChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyNetMaskChanged(IPropertyChangeListener aNetMaskChanged)
    {
        synchronized (iPropertyLock)
        {
            iNetMaskChanged = aNetMaskChanged;
        }
    }

    private void netMaskPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iNetMaskChanged);
        }
    }
    /**
     * Set a delegate to be run when the GateWay state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aGateWayChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyGateWayChanged(IPropertyChangeListener aGateWayChanged)
    {
        synchronized (iPropertyLock)
        {
            iGateWayChanged = aGateWayChanged;
        }
    }

    private void gateWayPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iGateWayChanged);
        }
    }
    /**
     * Set a delegate to be run when the DNS state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aDNSChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyDNSChanged(IPropertyChangeListener aDNSChanged)
    {
        synchronized (iPropertyLock)
        {
            iDNSChanged = aDNSChanged;
        }
    }

    private void dNSPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iDNSChanged);
        }
    }
    /**
     * Set a delegate to be run when the DHCP state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aDHCPChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyDHCPChanged(IPropertyChangeListener aDHCPChanged)
    {
        synchronized (iPropertyLock)
        {
            iDHCPChanged = aDHCPChanged;
        }
    }

    private void dHCPPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iDHCPChanged);
        }
    }
    /**
     * Set a delegate to be run when the Ssid state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aSsidChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertySsidChanged(IPropertyChangeListener aSsidChanged)
    {
        synchronized (iPropertyLock)
        {
            iSsidChanged = aSsidChanged;
        }
    }

    private void ssidPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iSsidChanged);
        }
    }
    /**
     * Set a delegate to be run when the PassWord state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aPassWordChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyPassWordChanged(IPropertyChangeListener aPassWordChanged)
    {
        synchronized (iPropertyLock)
        {
            iPassWordChanged = aPassWordChanged;
        }
    }

    private void passWordPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iPassWordChanged);
        }
    }
    /**
     * Set a delegate to be run when the EncrypType state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aEncrypTypeChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyEncrypTypeChanged(IPropertyChangeListener aEncrypTypeChanged)
    {
        synchronized (iPropertyLock)
        {
            iEncrypTypeChanged = aEncrypTypeChanged;
        }
    }

    private void encrypTypePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iEncrypTypeChanged);
        }
    }
    /**
     * Set a delegate to be run when the Channel state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aChannelChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyChannelChanged(IPropertyChangeListener aChannelChanged)
    {
        synchronized (iPropertyLock)
        {
            iChannelChanged = aChannelChanged;
        }
    }

    private void channelPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iChannelChanged);
        }
    }
    /**
     * Set a delegate to be run when the UpnpType state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aUpnpTypeChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyUpnpTypeChanged(IPropertyChangeListener aUpnpTypeChanged)
    {
        synchronized (iPropertyLock)
        {
            iUpnpTypeChanged = aUpnpTypeChanged;
        }
    }

    private void upnpTypePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iUpnpTypeChanged);
        }
    }
    /**
     * Set a delegate to be run when the Status state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aStatusChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyStatusChanged(IPropertyChangeListener aStatusChanged)
    {
        synchronized (iPropertyLock)
        {
            iStatusChanged = aStatusChanged;
        }
    }

    private void statusPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iStatusChanged);
        }
    }
    /**
     * Set a delegate to be run when the SampleFormat state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aSampleFormatChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertySampleFormatChanged(IPropertyChangeListener aSampleFormatChanged)
    {
        synchronized (iPropertyLock)
        {
            iSampleFormatChanged = aSampleFormatChanged;
        }
    }

    private void sampleFormatPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iSampleFormatChanged);
        }
    }
    /**
     * Set a delegate to be run when the IpAddress state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aIpAddressChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyIpAddressChanged(IPropertyChangeListener aIpAddressChanged)
    {
        synchronized (iPropertyLock)
        {
            iIpAddressChanged = aIpAddressChanged;
        }
    }

    private void ipAddressPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iIpAddressChanged);
        }
    }
    /**
     * Set a delegate to be run when the Protect state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aProtectChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyProtectChanged(IPropertyChangeListener aProtectChanged)
    {
        synchronized (iPropertyLock)
        {
            iProtectChanged = aProtectChanged;
        }
    }

    private void protectPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iProtectChanged);
        }
    }
    /**
     * Set a delegate to be run when the ProtectPassword state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aProtectPasswordChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyProtectPasswordChanged(IPropertyChangeListener aProtectPasswordChanged)
    {
        synchronized (iPropertyLock)
        {
            iProtectPasswordChanged = aProtectPasswordChanged;
        }
    }

    private void protectPasswordPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iProtectPasswordChanged);
        }
    }
    /**
     * Set a delegate to be run when the ActiveStatus state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aActiveStatusChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyActiveStatusChanged(IPropertyChangeListener aActiveStatusChanged)
    {
        synchronized (iPropertyLock)
        {
            iActiveStatusChanged = aActiveStatusChanged;
        }
    }

    private void activeStatusPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iActiveStatusChanged);
        }
    }
    /**
     * Set a delegate to be run when the Time state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aTimeChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyTimeChanged(IPropertyChangeListener aTimeChanged)
    {
        synchronized (iPropertyLock)
        {
            iTimeChanged = aTimeChanged;
        }
    }

    private void timePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iTimeChanged);
        }
    }
    /**
     * Set a delegate to be run when the VolumeControl state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param aVolumeControlChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyVolumeControlChanged(IPropertyChangeListener aVolumeControlChanged)
    {
        synchronized (iPropertyLock)
        {
            iVolumeControlChanged = aVolumeControlChanged;
        }
    }

    private void volumeControlPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iVolumeControlChanged);
        }
    }

    /**
     * Query the value of the MessageOut property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the MessageOut property.
     */
    public String getPropertyMessageOut()
    {
        propertyReadLock();
        String val = iMessageOut.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Alive property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Alive property.
     */
    public boolean getPropertyAlive()
    {
        propertyReadLock();
        boolean val = iAlive.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the CurrentAction property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CurrentAction property.
     */
    public long getPropertyCurrentAction()
    {
        propertyReadLock();
        long val = iCurrentAction.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Restart property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Restart property.
     */
    public boolean getPropertyRestart()
    {
        propertyReadLock();
        boolean val = iRestart.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Number property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Number property.
     */
    public long getPropertyNumber()
    {
        propertyReadLock();
        long val = iNumber.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the RoomName property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the RoomName property.
     */
    public String getPropertyRoomName()
    {
        propertyReadLock();
        String val = iRoomName.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the InterFace property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the InterFace property.
     */
    public String getPropertyInterFace()
    {
        propertyReadLock();
        String val = iInterFace.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the NetMask property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the NetMask property.
     */
    public String getPropertyNetMask()
    {
        propertyReadLock();
        String val = iNetMask.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the GateWay property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the GateWay property.
     */
    public String getPropertyGateWay()
    {
        propertyReadLock();
        String val = iGateWay.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the DNS property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the DNS property.
     */
    public String getPropertyDNS()
    {
        propertyReadLock();
        String val = iDNS.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the DHCP property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the DHCP property.
     */
    public String getPropertyDHCP()
    {
        propertyReadLock();
        String val = iDHCP.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Ssid property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Ssid property.
     */
    public String getPropertySsid()
    {
        propertyReadLock();
        String val = iSsid.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the PassWord property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the PassWord property.
     */
    public String getPropertyPassWord()
    {
        propertyReadLock();
        String val = iPassWord.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the EncrypType property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the EncrypType property.
     */
    public String getPropertyEncrypType()
    {
        propertyReadLock();
        String val = iEncrypType.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Channel property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Channel property.
     */
    public String getPropertyChannel()
    {
        propertyReadLock();
        String val = iChannel.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the UpnpType property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the UpnpType property.
     */
    public String getPropertyUpnpType()
    {
        propertyReadLock();
        String val = iUpnpType.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Status property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Status property.
     */
    public String getPropertyStatus()
    {
        propertyReadLock();
        String val = iStatus.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the SampleFormat property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the SampleFormat property.
     */
    public String getPropertySampleFormat()
    {
        propertyReadLock();
        String val = iSampleFormat.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the IpAddress property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the IpAddress property.
     */
    public String getPropertyIpAddress()
    {
        propertyReadLock();
        String val = iIpAddress.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Protect property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Protect property.
     */
    public String getPropertyProtect()
    {
        propertyReadLock();
        String val = iProtect.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the ProtectPassword property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ProtectPassword property.
     */
    public String getPropertyProtectPassword()
    {
        propertyReadLock();
        String val = iProtectPassword.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the ActiveStatus property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ActiveStatus property.
     */
    public String getPropertyActiveStatus()
    {
        propertyReadLock();
        String val = iActiveStatus.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Time property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Time property.
     */
    public String getPropertyTime()
    {
        propertyReadLock();
        String val = iTime.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the VolumeControl property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the VolumeControl property.
     */
    public boolean getPropertyVolumeControl()
    {
        propertyReadLock();
        boolean val = iVolumeControl.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Dispose of this control point proxy.
     * Must be called for each class instance.
     * Must be called before <tt>Library.close()</tt>.
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            disposeProxy();
            iHandle = 0;
            iActionLogIn.destroy();
            iActionLogOut.destroy();
            iActionCancelLogIn.destroy();
            iActionIsAlive.destroy();
            iActionUpdate.destroy();
            iActionActive.destroy();
            iActionGetActiveStatus.destroy();
            iActionCheckUpdate.destroy();
            iActionResetDisplay.destroy();
            iActionGetHardWareInfo.destroy();
            iActionSetRoomName.destroy();
            iActionGetVolumeControl.destroy();
            iActionSetVolumeControl.destroy();
            iActionGetWaitingTime.destroy();
            iActionSetWaitingTime.destroy();
            iActionGetOutChannel.destroy();
            iActionSetOutChannel.destroy();
            iActionSetUpnpType.destroy();
            iActionGetUpnpType.destroy();
            iActionSetDsdNativeStatus.destroy();
            iActionGetDsdNativeStatus.destroy();
            iActionSetPasswordProtect.destroy();
            iActionGetPasswordProtect.destroy();
            iActionGetUpdateInfo.destroy();
            iActionGetWirelessList.destroy();
            iActionGetIpAddress.destroy();
            iActionSetNetWork.destroy();
            iActionGetNetInterface.destroy();
            iActionGetHaltStatus.destroy();
            iActionSetHaltStatus.destroy();
            iActionGetFilterMode.destroy();
            iActionSetFilterMode.destroy();
            iActionSetSourceVisible.destroy();
            iActionGetSourceVisible.destroy();
            iActionSetLEDMode.destroy();
            iActionGetLEDMode.destroy();
            iActionSetKeyMode.destroy();
            iActionGetKeyMode.destroy();
            iActionSetBrightness.destroy();
            iActionGetBrightness.destroy();
            iActionSetDisplayMode.destroy();
            iActionGetDisplayMode.destroy();
            iActionGetDACPhase.destroy();
            iActionSetDACPhase.destroy();
            iActionGetDACBalance.destroy();
            iActionSetDACBalance.destroy();
            iActionSetEnableResampler.destroy();
            iActionSetEnableSpeaker.destroy();
            iActionSetEnableEqualizer.destroy();
            iActionSetEnableDirac.destroy();
            iMessageOut.destroy();
            iAlive.destroy();
            iCurrentAction.destroy();
            iRestart.destroy();
            iNumber.destroy();
            iRoomName.destroy();
            iInterFace.destroy();
            iNetMask.destroy();
            iGateWay.destroy();
            iDNS.destroy();
            iDHCP.destroy();
            iSsid.destroy();
            iPassWord.destroy();
            iEncrypType.destroy();
            iChannel.destroy();
            iUpnpType.destroy();
            iStatus.destroy();
            iSampleFormat.destroy();
            iIpAddress.destroy();
            iProtect.destroy();
            iProtectPassword.destroy();
            iActiveStatus.destroy();
            iTime.destroy();
            iVolumeControl.destroy();
        }
    }
}

