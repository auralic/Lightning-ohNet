package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgHardwareConfig1
{

    /**
     * Set the value of the Alive property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyAlive(boolean aValue);

    /**
     * Get a copy of the value of the Alive property
     *
     * @return value of the Alive property.
     */
    public boolean getPropertyAlive();

    /**
     * Set the value of the CurrentAction property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyCurrentAction(long aValue);

    /**
     * Get a copy of the value of the CurrentAction property
     *
     * @return value of the CurrentAction property.
     */
    public long getPropertyCurrentAction();

    /**
     * Set the value of the Restart property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyRestart(boolean aValue);

    /**
     * Get a copy of the value of the Restart property
     *
     * @return value of the Restart property.
     */
    public boolean getPropertyRestart();

    /**
     * Set the value of the Number property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyNumber(long aValue);

    /**
     * Get a copy of the value of the Number property
     *
     * @return value of the Number property.
     */
    public long getPropertyNumber();

    /**
     * Set the value of the RoomName property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyRoomName(String aValue);

    /**
     * Get a copy of the value of the RoomName property
     *
     * @return value of the RoomName property.
     */
    public String getPropertyRoomName();

    /**
     * Set the value of the InterFace property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyInterFace(String aValue);

    /**
     * Get a copy of the value of the InterFace property
     *
     * @return value of the InterFace property.
     */
    public String getPropertyInterFace();

    /**
     * Set the value of the NetMask property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyNetMask(String aValue);

    /**
     * Get a copy of the value of the NetMask property
     *
     * @return value of the NetMask property.
     */
    public String getPropertyNetMask();

    /**
     * Set the value of the GateWay property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyGateWay(String aValue);

    /**
     * Get a copy of the value of the GateWay property
     *
     * @return value of the GateWay property.
     */
    public String getPropertyGateWay();

    /**
     * Set the value of the DNS property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyDNS(String aValue);

    /**
     * Get a copy of the value of the DNS property
     *
     * @return value of the DNS property.
     */
    public String getPropertyDNS();

    /**
     * Set the value of the DHCP property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyDHCP(String aValue);

    /**
     * Get a copy of the value of the DHCP property
     *
     * @return value of the DHCP property.
     */
    public String getPropertyDHCP();

    /**
     * Set the value of the Ssid property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertySsid(String aValue);

    /**
     * Get a copy of the value of the Ssid property
     *
     * @return value of the Ssid property.
     */
    public String getPropertySsid();

    /**
     * Set the value of the PassWord property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyPassWord(String aValue);

    /**
     * Get a copy of the value of the PassWord property
     *
     * @return value of the PassWord property.
     */
    public String getPropertyPassWord();

    /**
     * Set the value of the EncrypType property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyEncrypType(String aValue);

    /**
     * Get a copy of the value of the EncrypType property
     *
     * @return value of the EncrypType property.
     */
    public String getPropertyEncrypType();

    /**
     * Set the value of the Channel property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyChannel(String aValue);

    /**
     * Get a copy of the value of the Channel property
     *
     * @return value of the Channel property.
     */
    public String getPropertyChannel();

    /**
     * Set the value of the UpnpType property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyUpnpType(String aValue);

    /**
     * Get a copy of the value of the UpnpType property
     *
     * @return value of the UpnpType property.
     */
    public String getPropertyUpnpType();

    /**
     * Set the value of the Status property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyStatus(String aValue);

    /**
     * Get a copy of the value of the Status property
     *
     * @return value of the Status property.
     */
    public String getPropertyStatus();

    /**
     * Set the value of the SampleFormat property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertySampleFormat(String aValue);

    /**
     * Get a copy of the value of the SampleFormat property
     *
     * @return value of the SampleFormat property.
     */
    public String getPropertySampleFormat();

    /**
     * Set the value of the IpAddress property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyIpAddress(String aValue);

    /**
     * Get a copy of the value of the IpAddress property
     *
     * @return value of the IpAddress property.
     */
    public String getPropertyIpAddress();

    /**
     * Set the value of the Protect property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyProtect(String aValue);

    /**
     * Get a copy of the value of the Protect property
     *
     * @return value of the Protect property.
     */
    public String getPropertyProtect();

    /**
     * Set the value of the ProtectPassword property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyProtectPassword(String aValue);

    /**
     * Get a copy of the value of the ProtectPassword property
     *
     * @return value of the ProtectPassword property.
     */
    public String getPropertyProtectPassword();

    /**
     * Set the value of the ActiveStatus property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyActiveStatus(String aValue);

    /**
     * Get a copy of the value of the ActiveStatus property
     *
     * @return value of the ActiveStatus property.
     */
    public String getPropertyActiveStatus();

    /**
     * Set the value of the Time property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyTime(String aValue);

    /**
     * Get a copy of the value of the Time property
     *
     * @return value of the Time property.
     */
    public String getPropertyTime();

    /**
     * Set the value of the VolumeControl property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyVolumeControl(boolean aValue);

    /**
     * Get a copy of the value of the VolumeControl property
     *
     * @return value of the VolumeControl property.
     */
    public boolean getPropertyVolumeControl();
        
}

/**
 * Provider for the av.openhome.org:HardwareConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgHardwareConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgHardwareConfig1
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

    private IDvInvocationListener iDelegateIsAlive;
    private IDvInvocationListener iDelegateUpdate;
    private IDvInvocationListener iDelegateActive;
    private IDvInvocationListener iDelegateGetActiveStatus;
    private IDvInvocationListener iDelegateCheckUpdate;
    private IDvInvocationListener iDelegateResetDisplay;
    private IDvInvocationListener iDelegateGetHardWareInfo;
    private IDvInvocationListener iDelegateSetRoomName;
    private IDvInvocationListener iDelegateGetVolumeControl;
    private IDvInvocationListener iDelegateSetVolumeControl;
    private IDvInvocationListener iDelegateGetWaitingTime;
    private IDvInvocationListener iDelegateSetWaitingTime;
    private IDvInvocationListener iDelegateGetOutChannel;
    private IDvInvocationListener iDelegateSetOutChannel;
    private IDvInvocationListener iDelegateSetUpnpType;
    private IDvInvocationListener iDelegateGetUpnpType;
    private IDvInvocationListener iDelegateSetDsdNativeStatus;
    private IDvInvocationListener iDelegateGetDsdNativeStatus;
    private IDvInvocationListener iDelegateSetPasswordProtect;
    private IDvInvocationListener iDelegateGetPasswordProtect;
    private IDvInvocationListener iDelegateGetUpdateInfo;
    private IDvInvocationListener iDelegateGetWirelessList;
    private IDvInvocationListener iDelegateGetIpAddress;
    private IDvInvocationListener iDelegateSetNetWork;
    private IDvInvocationListener iDelegateGetNetInterface;
    private PropertyBool iPropertyAlive;
    private PropertyUint iPropertyCurrentAction;
    private PropertyBool iPropertyRestart;
    private PropertyUint iPropertyNumber;
    private PropertyString iPropertyRoomName;
    private PropertyString iPropertyInterFace;
    private PropertyString iPropertyNetMask;
    private PropertyString iPropertyGateWay;
    private PropertyString iPropertyDNS;
    private PropertyString iPropertyDHCP;
    private PropertyString iPropertySsid;
    private PropertyString iPropertyPassWord;
    private PropertyString iPropertyEncrypType;
    private PropertyString iPropertyChannel;
    private PropertyString iPropertyUpnpType;
    private PropertyString iPropertyStatus;
    private PropertyString iPropertySampleFormat;
    private PropertyString iPropertyIpAddress;
    private PropertyString iPropertyProtect;
    private PropertyString iPropertyProtectPassword;
    private PropertyString iPropertyActiveStatus;
    private PropertyString iPropertyTime;
    private PropertyBool iPropertyVolumeControl;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgHardwareConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "HardwareConfig", 1);
    }

    /**
     * Enable the Alive property.
     */
    public void enablePropertyAlive()
    {
        iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
        addProperty(iPropertyAlive);
    }

    /**
     * Enable the CurrentAction property.
     */
    public void enablePropertyCurrentAction()
    {
        iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
        addProperty(iPropertyCurrentAction);
    }

    /**
     * Enable the Restart property.
     */
    public void enablePropertyRestart()
    {
        iPropertyRestart = new PropertyBool(new ParameterBool("Restart"));
        addProperty(iPropertyRestart);
    }

    /**
     * Enable the Number property.
     */
    public void enablePropertyNumber()
    {
        iPropertyNumber = new PropertyUint(new ParameterUint("Number"));
        addProperty(iPropertyNumber);
    }

    /**
     * Enable the RoomName property.
     */
    public void enablePropertyRoomName()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyRoomName = new PropertyString(new ParameterString("RoomName", allowedValues));
        addProperty(iPropertyRoomName);
    }

    /**
     * Enable the InterFace property.
     */
    public void enablePropertyInterFace()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyInterFace = new PropertyString(new ParameterString("InterFace", allowedValues));
        addProperty(iPropertyInterFace);
    }

    /**
     * Enable the NetMask property.
     */
    public void enablePropertyNetMask()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyNetMask = new PropertyString(new ParameterString("NetMask", allowedValues));
        addProperty(iPropertyNetMask);
    }

    /**
     * Enable the GateWay property.
     */
    public void enablePropertyGateWay()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyGateWay = new PropertyString(new ParameterString("GateWay", allowedValues));
        addProperty(iPropertyGateWay);
    }

    /**
     * Enable the DNS property.
     */
    public void enablePropertyDNS()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyDNS = new PropertyString(new ParameterString("DNS", allowedValues));
        addProperty(iPropertyDNS);
    }

    /**
     * Enable the DHCP property.
     */
    public void enablePropertyDHCP()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyDHCP = new PropertyString(new ParameterString("DHCP", allowedValues));
        addProperty(iPropertyDHCP);
    }

    /**
     * Enable the Ssid property.
     */
    public void enablePropertySsid()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertySsid = new PropertyString(new ParameterString("Ssid", allowedValues));
        addProperty(iPropertySsid);
    }

    /**
     * Enable the PassWord property.
     */
    public void enablePropertyPassWord()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyPassWord = new PropertyString(new ParameterString("PassWord", allowedValues));
        addProperty(iPropertyPassWord);
    }

    /**
     * Enable the EncrypType property.
     */
    public void enablePropertyEncrypType()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyEncrypType = new PropertyString(new ParameterString("EncrypType", allowedValues));
        addProperty(iPropertyEncrypType);
    }

    /**
     * Enable the Channel property.
     */
    public void enablePropertyChannel()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyChannel = new PropertyString(new ParameterString("Channel", allowedValues));
        addProperty(iPropertyChannel);
    }

    /**
     * Enable the UpnpType property.
     */
    public void enablePropertyUpnpType()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyUpnpType = new PropertyString(new ParameterString("UpnpType", allowedValues));
        addProperty(iPropertyUpnpType);
    }

    /**
     * Enable the Status property.
     */
    public void enablePropertyStatus()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyStatus = new PropertyString(new ParameterString("Status", allowedValues));
        addProperty(iPropertyStatus);
    }

    /**
     * Enable the SampleFormat property.
     */
    public void enablePropertySampleFormat()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertySampleFormat = new PropertyString(new ParameterString("SampleFormat", allowedValues));
        addProperty(iPropertySampleFormat);
    }

    /**
     * Enable the IpAddress property.
     */
    public void enablePropertyIpAddress()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyIpAddress = new PropertyString(new ParameterString("IpAddress", allowedValues));
        addProperty(iPropertyIpAddress);
    }

    /**
     * Enable the Protect property.
     */
    public void enablePropertyProtect()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyProtect = new PropertyString(new ParameterString("Protect", allowedValues));
        addProperty(iPropertyProtect);
    }

    /**
     * Enable the ProtectPassword property.
     */
    public void enablePropertyProtectPassword()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyProtectPassword = new PropertyString(new ParameterString("ProtectPassword", allowedValues));
        addProperty(iPropertyProtectPassword);
    }

    /**
     * Enable the ActiveStatus property.
     */
    public void enablePropertyActiveStatus()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyActiveStatus = new PropertyString(new ParameterString("ActiveStatus", allowedValues));
        addProperty(iPropertyActiveStatus);
    }

    /**
     * Enable the Time property.
     */
    public void enablePropertyTime()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyTime = new PropertyString(new ParameterString("Time", allowedValues));
        addProperty(iPropertyTime);
    }

    /**
     * Enable the VolumeControl property.
     */
    public void enablePropertyVolumeControl()
    {
        iPropertyVolumeControl = new PropertyBool(new ParameterBool("VolumeControl"));
        addProperty(iPropertyVolumeControl);
    }

    /**
     * Set the value of the Alive property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyAlive(boolean aValue)
    {
        return setPropertyBool(iPropertyAlive, aValue);
    }

    /**
     * Get a copy of the value of the Alive property
     *
     * @return  value of the Alive property.
     */
    public boolean getPropertyAlive()
    {
        return iPropertyAlive.getValue();
    }

    /**
     * Set the value of the CurrentAction property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyCurrentAction(long aValue)
    {
        return setPropertyUint(iPropertyCurrentAction, aValue);
    }

    /**
     * Get a copy of the value of the CurrentAction property
     *
     * @return  value of the CurrentAction property.
     */
    public long getPropertyCurrentAction()
    {
        return iPropertyCurrentAction.getValue();
    }

    /**
     * Set the value of the Restart property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyRestart(boolean aValue)
    {
        return setPropertyBool(iPropertyRestart, aValue);
    }

    /**
     * Get a copy of the value of the Restart property
     *
     * @return  value of the Restart property.
     */
    public boolean getPropertyRestart()
    {
        return iPropertyRestart.getValue();
    }

    /**
     * Set the value of the Number property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyNumber(long aValue)
    {
        return setPropertyUint(iPropertyNumber, aValue);
    }

    /**
     * Get a copy of the value of the Number property
     *
     * @return  value of the Number property.
     */
    public long getPropertyNumber()
    {
        return iPropertyNumber.getValue();
    }

    /**
     * Set the value of the RoomName property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyRoomName(String aValue)
    {
        return setPropertyString(iPropertyRoomName, aValue);
    }

    /**
     * Get a copy of the value of the RoomName property
     *
     * @return  value of the RoomName property.
     */
    public String getPropertyRoomName()
    {
        return iPropertyRoomName.getValue();
    }

    /**
     * Set the value of the InterFace property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyInterFace(String aValue)
    {
        return setPropertyString(iPropertyInterFace, aValue);
    }

    /**
     * Get a copy of the value of the InterFace property
     *
     * @return  value of the InterFace property.
     */
    public String getPropertyInterFace()
    {
        return iPropertyInterFace.getValue();
    }

    /**
     * Set the value of the NetMask property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyNetMask(String aValue)
    {
        return setPropertyString(iPropertyNetMask, aValue);
    }

    /**
     * Get a copy of the value of the NetMask property
     *
     * @return  value of the NetMask property.
     */
    public String getPropertyNetMask()
    {
        return iPropertyNetMask.getValue();
    }

    /**
     * Set the value of the GateWay property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyGateWay(String aValue)
    {
        return setPropertyString(iPropertyGateWay, aValue);
    }

    /**
     * Get a copy of the value of the GateWay property
     *
     * @return  value of the GateWay property.
     */
    public String getPropertyGateWay()
    {
        return iPropertyGateWay.getValue();
    }

    /**
     * Set the value of the DNS property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyDNS(String aValue)
    {
        return setPropertyString(iPropertyDNS, aValue);
    }

    /**
     * Get a copy of the value of the DNS property
     *
     * @return  value of the DNS property.
     */
    public String getPropertyDNS()
    {
        return iPropertyDNS.getValue();
    }

    /**
     * Set the value of the DHCP property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyDHCP(String aValue)
    {
        return setPropertyString(iPropertyDHCP, aValue);
    }

    /**
     * Get a copy of the value of the DHCP property
     *
     * @return  value of the DHCP property.
     */
    public String getPropertyDHCP()
    {
        return iPropertyDHCP.getValue();
    }

    /**
     * Set the value of the Ssid property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertySsid(String aValue)
    {
        return setPropertyString(iPropertySsid, aValue);
    }

    /**
     * Get a copy of the value of the Ssid property
     *
     * @return  value of the Ssid property.
     */
    public String getPropertySsid()
    {
        return iPropertySsid.getValue();
    }

    /**
     * Set the value of the PassWord property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyPassWord(String aValue)
    {
        return setPropertyString(iPropertyPassWord, aValue);
    }

    /**
     * Get a copy of the value of the PassWord property
     *
     * @return  value of the PassWord property.
     */
    public String getPropertyPassWord()
    {
        return iPropertyPassWord.getValue();
    }

    /**
     * Set the value of the EncrypType property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyEncrypType(String aValue)
    {
        return setPropertyString(iPropertyEncrypType, aValue);
    }

    /**
     * Get a copy of the value of the EncrypType property
     *
     * @return  value of the EncrypType property.
     */
    public String getPropertyEncrypType()
    {
        return iPropertyEncrypType.getValue();
    }

    /**
     * Set the value of the Channel property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyChannel(String aValue)
    {
        return setPropertyString(iPropertyChannel, aValue);
    }

    /**
     * Get a copy of the value of the Channel property
     *
     * @return  value of the Channel property.
     */
    public String getPropertyChannel()
    {
        return iPropertyChannel.getValue();
    }

    /**
     * Set the value of the UpnpType property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyUpnpType(String aValue)
    {
        return setPropertyString(iPropertyUpnpType, aValue);
    }

    /**
     * Get a copy of the value of the UpnpType property
     *
     * @return  value of the UpnpType property.
     */
    public String getPropertyUpnpType()
    {
        return iPropertyUpnpType.getValue();
    }

    /**
     * Set the value of the Status property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyStatus(String aValue)
    {
        return setPropertyString(iPropertyStatus, aValue);
    }

    /**
     * Get a copy of the value of the Status property
     *
     * @return  value of the Status property.
     */
    public String getPropertyStatus()
    {
        return iPropertyStatus.getValue();
    }

    /**
     * Set the value of the SampleFormat property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertySampleFormat(String aValue)
    {
        return setPropertyString(iPropertySampleFormat, aValue);
    }

    /**
     * Get a copy of the value of the SampleFormat property
     *
     * @return  value of the SampleFormat property.
     */
    public String getPropertySampleFormat()
    {
        return iPropertySampleFormat.getValue();
    }

    /**
     * Set the value of the IpAddress property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyIpAddress(String aValue)
    {
        return setPropertyString(iPropertyIpAddress, aValue);
    }

    /**
     * Get a copy of the value of the IpAddress property
     *
     * @return  value of the IpAddress property.
     */
    public String getPropertyIpAddress()
    {
        return iPropertyIpAddress.getValue();
    }

    /**
     * Set the value of the Protect property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyProtect(String aValue)
    {
        return setPropertyString(iPropertyProtect, aValue);
    }

    /**
     * Get a copy of the value of the Protect property
     *
     * @return  value of the Protect property.
     */
    public String getPropertyProtect()
    {
        return iPropertyProtect.getValue();
    }

    /**
     * Set the value of the ProtectPassword property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyProtectPassword(String aValue)
    {
        return setPropertyString(iPropertyProtectPassword, aValue);
    }

    /**
     * Get a copy of the value of the ProtectPassword property
     *
     * @return  value of the ProtectPassword property.
     */
    public String getPropertyProtectPassword()
    {
        return iPropertyProtectPassword.getValue();
    }

    /**
     * Set the value of the ActiveStatus property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyActiveStatus(String aValue)
    {
        return setPropertyString(iPropertyActiveStatus, aValue);
    }

    /**
     * Get a copy of the value of the ActiveStatus property
     *
     * @return  value of the ActiveStatus property.
     */
    public String getPropertyActiveStatus()
    {
        return iPropertyActiveStatus.getValue();
    }

    /**
     * Set the value of the Time property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyTime(String aValue)
    {
        return setPropertyString(iPropertyTime, aValue);
    }

    /**
     * Get a copy of the value of the Time property
     *
     * @return  value of the Time property.
     */
    public String getPropertyTime()
    {
        return iPropertyTime.getValue();
    }

    /**
     * Set the value of the VolumeControl property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyVolumeControl(boolean aValue)
    {
        return setPropertyBool(iPropertyVolumeControl, aValue);
    }

    /**
     * Get a copy of the value of the VolumeControl property
     *
     * @return  value of the VolumeControl property.
     */
    public boolean getPropertyVolumeControl()
    {
        return iPropertyVolumeControl.getValue();
    }

    /**
     * Signal that the action IsAlive is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * IsAlive must be overridden if this is called.
     */      
    protected void enableActionIsAlive()
    {
        Action action = new Action("IsAlive");
        action.addOutputParameter(new ParameterRelated("Alive", iPropertyAlive));
        iDelegateIsAlive = new DoIsAlive();
        enableAction(action, iDelegateIsAlive);
    }

    /**
     * Signal that the action Update is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Update must be overridden if this is called.
     */      
    protected void enableActionUpdate()
    {
        Action action = new Action("Update");
        iDelegateUpdate = new DoUpdate();
        enableAction(action, iDelegateUpdate);
    }

    /**
     * Signal that the action Active is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Active must be overridden if this is called.
     */      
    protected void enableActionActive()
    {
        Action action = new Action("Active");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterBool("IsSubscribe"));
        action.addInputParameter(new ParameterString("RealName", allowedValues));
        action.addInputParameter(new ParameterString("Email", allowedValues));
        iDelegateActive = new DoActive();
        enableAction(action, iDelegateActive);
    }

    /**
     * Signal that the action GetActiveStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetActiveStatus must be overridden if this is called.
     */      
    protected void enableActionGetActiveStatus()
    {
        Action action = new Action("GetActiveStatus");
        action.addOutputParameter(new ParameterRelated("ActiveStatus", iPropertyActiveStatus));
        iDelegateGetActiveStatus = new DoGetActiveStatus();
        enableAction(action, iDelegateGetActiveStatus);
    }

    /**
     * Signal that the action CheckUpdate is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * CheckUpdate must be overridden if this is called.
     */      
    protected void enableActionCheckUpdate()
    {
        Action action = new Action("CheckUpdate");
        iDelegateCheckUpdate = new DoCheckUpdate();
        enableAction(action, iDelegateCheckUpdate);
    }

    /**
     * Signal that the action ResetDisplay is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ResetDisplay must be overridden if this is called.
     */      
    protected void enableActionResetDisplay()
    {
        Action action = new Action("ResetDisplay");
        iDelegateResetDisplay = new DoResetDisplay();
        enableAction(action, iDelegateResetDisplay);
    }

    /**
     * Signal that the action GetHardWareInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetHardWareInfo must be overridden if this is called.
     */      
    protected void enableActionGetHardWareInfo()
    {
        Action action = new Action("GetHardWareInfo");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("HardWareInfo", allowedValues));
        iDelegateGetHardWareInfo = new DoGetHardWareInfo();
        enableAction(action, iDelegateGetHardWareInfo);
    }

    /**
     * Signal that the action SetRoomName is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetRoomName must be overridden if this is called.
     */      
    protected void enableActionSetRoomName()
    {
        Action action = new Action("SetRoomName");
        action.addInputParameter(new ParameterRelated("RoomName", iPropertyRoomName));
        iDelegateSetRoomName = new DoSetRoomName();
        enableAction(action, iDelegateSetRoomName);
    }

    /**
     * Signal that the action GetVolumeControl is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetVolumeControl must be overridden if this is called.
     */      
    protected void enableActionGetVolumeControl()
    {
        Action action = new Action("GetVolumeControl");
        action.addOutputParameter(new ParameterRelated("VolumeControl", iPropertyVolumeControl));
        iDelegateGetVolumeControl = new DoGetVolumeControl();
        enableAction(action, iDelegateGetVolumeControl);
    }

    /**
     * Signal that the action SetVolumeControl is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetVolumeControl must be overridden if this is called.
     */      
    protected void enableActionSetVolumeControl()
    {
        Action action = new Action("SetVolumeControl");
        action.addInputParameter(new ParameterRelated("VolumeControl", iPropertyVolumeControl));
        iDelegateSetVolumeControl = new DoSetVolumeControl();
        enableAction(action, iDelegateSetVolumeControl);
    }

    /**
     * Signal that the action GetWaitingTime is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetWaitingTime must be overridden if this is called.
     */      
    protected void enableActionGetWaitingTime()
    {
        Action action = new Action("GetWaitingTime");
        action.addOutputParameter(new ParameterRelated("WaitingTime", iPropertyTime));
        iDelegateGetWaitingTime = new DoGetWaitingTime();
        enableAction(action, iDelegateGetWaitingTime);
    }

    /**
     * Signal that the action SetWaitingTime is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetWaitingTime must be overridden if this is called.
     */      
    protected void enableActionSetWaitingTime()
    {
        Action action = new Action("SetWaitingTime");
        action.addInputParameter(new ParameterRelated("WaitingTime", iPropertyTime));
        iDelegateSetWaitingTime = new DoSetWaitingTime();
        enableAction(action, iDelegateSetWaitingTime);
    }

    /**
     * Signal that the action GetOutChannel is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetOutChannel must be overridden if this is called.
     */      
    protected void enableActionGetOutChannel()
    {
        Action action = new Action("GetOutChannel");
        action.addOutputParameter(new ParameterRelated("ChannelNum", iPropertyNumber));
        action.addOutputParameter(new ParameterRelated("CurrentChannel", iPropertyChannel));
        action.addOutputParameter(new ParameterRelated("OutChannel", iPropertyChannel));
        iDelegateGetOutChannel = new DoGetOutChannel();
        enableAction(action, iDelegateGetOutChannel);
    }

    /**
     * Signal that the action SetOutChannel is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetOutChannel must be overridden if this is called.
     */      
    protected void enableActionSetOutChannel()
    {
        Action action = new Action("SetOutChannel");
        action.addInputParameter(new ParameterRelated("Channel", iPropertyChannel));
        iDelegateSetOutChannel = new DoSetOutChannel();
        enableAction(action, iDelegateSetOutChannel);
    }

    /**
     * Signal that the action SetUpnpType is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetUpnpType must be overridden if this is called.
     */      
    protected void enableActionSetUpnpType()
    {
        Action action = new Action("SetUpnpType");
        action.addInputParameter(new ParameterRelated("UpnpType", iPropertyUpnpType));
        iDelegateSetUpnpType = new DoSetUpnpType();
        enableAction(action, iDelegateSetUpnpType);
    }

    /**
     * Signal that the action GetUpnpType is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetUpnpType must be overridden if this is called.
     */      
    protected void enableActionGetUpnpType()
    {
        Action action = new Action("GetUpnpType");
        action.addOutputParameter(new ParameterRelated("UpnpType", iPropertyUpnpType));
        iDelegateGetUpnpType = new DoGetUpnpType();
        enableAction(action, iDelegateGetUpnpType);
    }

    /**
     * Signal that the action SetDsdNativeStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetDsdNativeStatus must be overridden if this is called.
     */      
    protected void enableActionSetDsdNativeStatus()
    {
        Action action = new Action("SetDsdNativeStatus");
        action.addInputParameter(new ParameterRelated("Status", iPropertyStatus));
        action.addInputParameter(new ParameterRelated("SampleFormat", iPropertySampleFormat));
        iDelegateSetDsdNativeStatus = new DoSetDsdNativeStatus();
        enableAction(action, iDelegateSetDsdNativeStatus);
    }

    /**
     * Signal that the action GetDsdNativeStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetDsdNativeStatus must be overridden if this is called.
     */      
    protected void enableActionGetDsdNativeStatus()
    {
        Action action = new Action("GetDsdNativeStatus");
        action.addOutputParameter(new ParameterRelated("Status", iPropertyStatus));
        action.addOutputParameter(new ParameterRelated("SampleFormat", iPropertySampleFormat));
        iDelegateGetDsdNativeStatus = new DoGetDsdNativeStatus();
        enableAction(action, iDelegateGetDsdNativeStatus);
    }

    /**
     * Signal that the action SetPasswordProtect is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetPasswordProtect must be overridden if this is called.
     */      
    protected void enableActionSetPasswordProtect()
    {
        Action action = new Action("SetPasswordProtect");
        action.addInputParameter(new ParameterRelated("Protect", iPropertyProtect));
        action.addInputParameter(new ParameterRelated("ProtectPassword", iPropertyProtectPassword));
        iDelegateSetPasswordProtect = new DoSetPasswordProtect();
        enableAction(action, iDelegateSetPasswordProtect);
    }

    /**
     * Signal that the action GetPasswordProtect is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetPasswordProtect must be overridden if this is called.
     */      
    protected void enableActionGetPasswordProtect()
    {
        Action action = new Action("GetPasswordProtect");
        action.addOutputParameter(new ParameterRelated("Protect", iPropertyProtect));
        action.addOutputParameter(new ParameterRelated("ProtectPassword", iPropertyProtectPassword));
        iDelegateGetPasswordProtect = new DoGetPasswordProtect();
        enableAction(action, iDelegateGetPasswordProtect);
    }

    /**
     * Signal that the action GetUpdateInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetUpdateInfo must be overridden if this is called.
     */      
    protected void enableActionGetUpdateInfo()
    {
        Action action = new Action("GetUpdateInfo");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("Version", allowedValues));
        action.addOutputParameter(new ParameterString("Progress", allowedValues));
        iDelegateGetUpdateInfo = new DoGetUpdateInfo();
        enableAction(action, iDelegateGetUpdateInfo);
    }

    /**
     * Signal that the action GetWirelessList is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetWirelessList must be overridden if this is called.
     */      
    protected void enableActionGetWirelessList()
    {
        Action action = new Action("GetWirelessList");
        action.addInputParameter(new ParameterRelated("InterFace", iPropertyInterFace));
        action.addOutputParameter(new ParameterRelated("Number", iPropertyNumber));
        action.addOutputParameter(new ParameterRelated("CurrentUse", iPropertySsid));
        action.addOutputParameter(new ParameterRelated("WirelessList", iPropertySsid));
        iDelegateGetWirelessList = new DoGetWirelessList();
        enableAction(action, iDelegateGetWirelessList);
    }

    /**
     * Signal that the action GetIpAddress is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetIpAddress must be overridden if this is called.
     */      
    protected void enableActionGetIpAddress()
    {
        Action action = new Action("GetIpAddress");
        action.addInputParameter(new ParameterRelated("InterFace", iPropertyInterFace));
        action.addOutputParameter(new ParameterRelated("IpAddress", iPropertyIpAddress));
        action.addOutputParameter(new ParameterRelated("NetMask", iPropertyNetMask));
        action.addOutputParameter(new ParameterRelated("GateWay", iPropertyGateWay));
        action.addOutputParameter(new ParameterRelated("DNS", iPropertyDNS));
        action.addOutputParameter(new ParameterRelated("DHCP", iPropertyDHCP));
        iDelegateGetIpAddress = new DoGetIpAddress();
        enableAction(action, iDelegateGetIpAddress);
    }

    /**
     * Signal that the action SetNetWork is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetNetWork must be overridden if this is called.
     */      
    protected void enableActionSetNetWork()
    {
        Action action = new Action("SetNetWork");
        action.addInputParameter(new ParameterRelated("InterFace", iPropertyInterFace));
        action.addInputParameter(new ParameterRelated("IpAddress", iPropertyIpAddress));
        action.addInputParameter(new ParameterRelated("NetMask", iPropertyNetMask));
        action.addInputParameter(new ParameterRelated("GateWay", iPropertyGateWay));
        action.addInputParameter(new ParameterRelated("DNS", iPropertyDNS));
        action.addInputParameter(new ParameterRelated("Ssid", iPropertySsid));
        action.addInputParameter(new ParameterRelated("PassWord", iPropertyPassWord));
        action.addInputParameter(new ParameterRelated("EncrypType", iPropertyEncrypType));
        iDelegateSetNetWork = new DoSetNetWork();
        enableAction(action, iDelegateSetNetWork);
    }

    /**
     * Signal that the action GetNetInterface is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetNetInterface must be overridden if this is called.
     */      
    protected void enableActionGetNetInterface()
    {
        Action action = new Action("GetNetInterface");
        action.addOutputParameter(new ParameterRelated("InterfaceNum", iPropertyNumber));
        action.addOutputParameter(new ParameterRelated("CurrentUse", iPropertyInterFace));
        action.addOutputParameter(new ParameterRelated("InterfaceList", iPropertyInterFace));
        iDelegateGetNetInterface = new DoGetNetInterface();
        enableAction(action, iDelegateGetNetInterface);
    }

    /**
     * IsAlive action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * IsAlive action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionIsAlive} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean isAlive(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Update action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Update action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionUpdate} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void update(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Active action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Active action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionActive} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aIsSubscribe
     * @param aRealName
     * @param aEmail
     */
    protected void active(IDvInvocation aInvocation, boolean aIsSubscribe, String aRealName, String aEmail)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetActiveStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetActiveStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetActiveStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getActiveStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * CheckUpdate action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * CheckUpdate action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionCheckUpdate} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void checkUpdate(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ResetDisplay action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ResetDisplay action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionResetDisplay} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void resetDisplay(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetHardWareInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetHardWareInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetHardWareInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getHardWareInfo(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetRoomName action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetRoomName action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetRoomName} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aRoomName
     */
    protected void setRoomName(IDvInvocation aInvocation, String aRoomName)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetVolumeControl action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetVolumeControl action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetVolumeControl} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getVolumeControl(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetVolumeControl action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetVolumeControl action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetVolumeControl} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aVolumeControl
     */
    protected void setVolumeControl(IDvInvocation aInvocation, boolean aVolumeControl)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetWaitingTime action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetWaitingTime action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetWaitingTime} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getWaitingTime(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetWaitingTime action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetWaitingTime action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetWaitingTime} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aWaitingTime
     */
    protected void setWaitingTime(IDvInvocation aInvocation, String aWaitingTime)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetOutChannel action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetOutChannel action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetOutChannel} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetOutChannel getOutChannel(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetOutChannel action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetOutChannel action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetOutChannel} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aChannel
     */
    protected void setOutChannel(IDvInvocation aInvocation, String aChannel)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetUpnpType action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetUpnpType action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetUpnpType} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aUpnpType
     */
    protected void setUpnpType(IDvInvocation aInvocation, String aUpnpType)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetUpnpType action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetUpnpType action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetUpnpType} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getUpnpType(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetDsdNativeStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetDsdNativeStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetDsdNativeStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aStatus
     * @param aSampleFormat
     */
    protected void setDsdNativeStatus(IDvInvocation aInvocation, String aStatus, String aSampleFormat)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetDsdNativeStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetDsdNativeStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetDsdNativeStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetDsdNativeStatus getDsdNativeStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetPasswordProtect action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetPasswordProtect action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetPasswordProtect} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aProtect
     * @param aProtectPassword
     */
    protected void setPasswordProtect(IDvInvocation aInvocation, String aProtect, String aProtectPassword)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetPasswordProtect action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetPasswordProtect action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetPasswordProtect} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetPasswordProtect getPasswordProtect(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetUpdateInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetUpdateInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetUpdateInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetUpdateInfo getUpdateInfo(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetWirelessList action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetWirelessList action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetWirelessList} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aInterFace
     */
    protected GetWirelessList getWirelessList(IDvInvocation aInvocation, String aInterFace)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetIpAddress action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetIpAddress action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetIpAddress} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aInterFace
     */
    protected GetIpAddress getIpAddress(IDvInvocation aInvocation, String aInterFace)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetNetWork action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetNetWork action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetNetWork} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aInterFace
     * @param aIpAddress
     * @param aNetMask
     * @param aGateWay
     * @param aDNS
     * @param aSsid
     * @param aPassWord
     * @param aEncrypType
     */
    protected void setNetWork(IDvInvocation aInvocation, String aInterFace, String aIpAddress, String aNetMask, String aGateWay, String aDNS, String aSsid, String aPassWord, String aEncrypType)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetNetInterface action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetNetInterface action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetNetInterface} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetNetInterface getNetInterface(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Must be called for each class instance.  Must be called before Core.Library.Close().
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            super.dispose();
            iHandle = 0;
        }
    }


    private class DoIsAlive implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean alive;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 alive = isAlive(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "IsAlive");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeBool("Alive", alive);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoUpdate implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                update(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Update");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoActive implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean isSubscribe;
            String realName;
            String email;
            try
            {
                invocation.readStart();
                isSubscribe = invocation.readBool("IsSubscribe");
                realName = invocation.readString("RealName");
                email = invocation.readString("Email");
                invocation.readEnd();
                active(invocation, isSubscribe, realName, email);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Active");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetActiveStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String activeStatus;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 activeStatus = getActiveStatus(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetActiveStatus");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("ActiveStatus", activeStatus);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoCheckUpdate implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                checkUpdate(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "CheckUpdate");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoResetDisplay implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                resetDisplay(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ResetDisplay");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetHardWareInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String hardWareInfo;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 hardWareInfo = getHardWareInfo(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetHardWareInfo");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("HardWareInfo", hardWareInfo);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetRoomName implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String roomName;
            try
            {
                invocation.readStart();
                roomName = invocation.readString("RoomName");
                invocation.readEnd();
                setRoomName(invocation, roomName);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetRoomName");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetVolumeControl implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean volumeControl;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 volumeControl = getVolumeControl(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetVolumeControl");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeBool("VolumeControl", volumeControl);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetVolumeControl implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean volumeControl;
            try
            {
                invocation.readStart();
                volumeControl = invocation.readBool("VolumeControl");
                invocation.readEnd();
                setVolumeControl(invocation, volumeControl);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetVolumeControl");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetWaitingTime implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String waitingTime;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 waitingTime = getWaitingTime(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetWaitingTime");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("WaitingTime", waitingTime);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetWaitingTime implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String waitingTime;
            try
            {
                invocation.readStart();
                waitingTime = invocation.readString("WaitingTime");
                invocation.readEnd();
                setWaitingTime(invocation, waitingTime);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetWaitingTime");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetOutChannel implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long channelNum;
            String currentChannel;
            String outChannel;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetOutChannel outArgs = getOutChannel(invocation);
            channelNum = outArgs.getChannelNum();
            currentChannel = outArgs.getCurrentChannel();
            outChannel = outArgs.getOutChannel();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetOutChannel");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("ChannelNum", channelNum);
                invocation.writeString("CurrentChannel", currentChannel);
                invocation.writeString("OutChannel", outChannel);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetOutChannel implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String channel;
            try
            {
                invocation.readStart();
                channel = invocation.readString("Channel");
                invocation.readEnd();
                setOutChannel(invocation, channel);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetOutChannel");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetUpnpType implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String upnpType;
            try
            {
                invocation.readStart();
                upnpType = invocation.readString("UpnpType");
                invocation.readEnd();
                setUpnpType(invocation, upnpType);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetUpnpType");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetUpnpType implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String upnpType;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 upnpType = getUpnpType(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetUpnpType");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("UpnpType", upnpType);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetDsdNativeStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String status;
            String sampleFormat;
            try
            {
                invocation.readStart();
                status = invocation.readString("Status");
                sampleFormat = invocation.readString("SampleFormat");
                invocation.readEnd();
                setDsdNativeStatus(invocation, status, sampleFormat);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetDsdNativeStatus");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetDsdNativeStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String status;
            String sampleFormat;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetDsdNativeStatus outArgs = getDsdNativeStatus(invocation);
            status = outArgs.getStatus();
            sampleFormat = outArgs.getSampleFormat();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetDsdNativeStatus");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("Status", status);
                invocation.writeString("SampleFormat", sampleFormat);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetPasswordProtect implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String protect;
            String protectPassword;
            try
            {
                invocation.readStart();
                protect = invocation.readString("Protect");
                protectPassword = invocation.readString("ProtectPassword");
                invocation.readEnd();
                setPasswordProtect(invocation, protect, protectPassword);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetPasswordProtect");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetPasswordProtect implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String protect;
            String protectPassword;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetPasswordProtect outArgs = getPasswordProtect(invocation);
            protect = outArgs.getProtect();
            protectPassword = outArgs.getProtectPassword();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetPasswordProtect");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("Protect", protect);
                invocation.writeString("ProtectPassword", protectPassword);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetUpdateInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String version;
            String progress;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetUpdateInfo outArgs = getUpdateInfo(invocation);
            version = outArgs.getVersion();
            progress = outArgs.getProgress();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetUpdateInfo");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("Version", version);
                invocation.writeString("Progress", progress);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetWirelessList implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String interFace;
            long number;
            String currentUse;
            String wirelessList;
            try
            {
                invocation.readStart();
                interFace = invocation.readString("InterFace");
                invocation.readEnd();

            GetWirelessList outArgs = getWirelessList(invocation, interFace);
            number = outArgs.getNumber();
            currentUse = outArgs.getCurrentUse();
            wirelessList = outArgs.getWirelessList();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetWirelessList");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("Number", number);
                invocation.writeString("CurrentUse", currentUse);
                invocation.writeString("WirelessList", wirelessList);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetIpAddress implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String interFace;
            String ipAddress;
            String netMask;
            String gateWay;
            String dNS;
            String dHCP;
            try
            {
                invocation.readStart();
                interFace = invocation.readString("InterFace");
                invocation.readEnd();

            GetIpAddress outArgs = getIpAddress(invocation, interFace);
            ipAddress = outArgs.getIpAddress();
            netMask = outArgs.getNetMask();
            gateWay = outArgs.getGateWay();
            dNS = outArgs.getDNS();
            dHCP = outArgs.getDHCP();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetIpAddress");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("IpAddress", ipAddress);
                invocation.writeString("NetMask", netMask);
                invocation.writeString("GateWay", gateWay);
                invocation.writeString("DNS", dNS);
                invocation.writeString("DHCP", dHCP);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetNetWork implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String interFace;
            String ipAddress;
            String netMask;
            String gateWay;
            String dNS;
            String ssid;
            String passWord;
            String encrypType;
            try
            {
                invocation.readStart();
                interFace = invocation.readString("InterFace");
                ipAddress = invocation.readString("IpAddress");
                netMask = invocation.readString("NetMask");
                gateWay = invocation.readString("GateWay");
                dNS = invocation.readString("DNS");
                ssid = invocation.readString("Ssid");
                passWord = invocation.readString("PassWord");
                encrypType = invocation.readString("EncrypType");
                invocation.readEnd();
                setNetWork(invocation, interFace, ipAddress, netMask, gateWay, dNS, ssid, passWord, encrypType);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetNetWork");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetNetInterface implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long interfaceNum;
            String currentUse;
            String interfaceList;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetNetInterface outArgs = getNetInterface(invocation);
            interfaceNum = outArgs.getInterfaceNum();
            currentUse = outArgs.getCurrentUse();
            interfaceList = outArgs.getInterfaceList();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetNetInterface");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("InterfaceNum", interfaceNum);
                invocation.writeString("CurrentUse", currentUse);
                invocation.writeString("InterfaceList", interfaceList);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }
}

