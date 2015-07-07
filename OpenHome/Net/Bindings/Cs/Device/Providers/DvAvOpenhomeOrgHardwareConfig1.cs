using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgHardwareConfig1 : IDisposable
    {

        /// <summary>
        /// Set the value of the Alive property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyAlive(bool aValue);

        /// <summary>
        /// Get a copy of the value of the Alive property
        /// </summary>
        /// <returns>Value of the Alive property.</param>
        bool PropertyAlive();

        /// <summary>
        /// Set the value of the CurrentAction property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyCurrentAction(uint aValue);

        /// <summary>
        /// Get a copy of the value of the CurrentAction property
        /// </summary>
        /// <returns>Value of the CurrentAction property.</param>
        uint PropertyCurrentAction();

        /// <summary>
        /// Set the value of the Restart property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyRestart(bool aValue);

        /// <summary>
        /// Get a copy of the value of the Restart property
        /// </summary>
        /// <returns>Value of the Restart property.</param>
        bool PropertyRestart();

        /// <summary>
        /// Set the value of the Number property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyNumber(uint aValue);

        /// <summary>
        /// Get a copy of the value of the Number property
        /// </summary>
        /// <returns>Value of the Number property.</param>
        uint PropertyNumber();

        /// <summary>
        /// Set the value of the RoomName property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyRoomName(string aValue);

        /// <summary>
        /// Get a copy of the value of the RoomName property
        /// </summary>
        /// <returns>Value of the RoomName property.</param>
        string PropertyRoomName();

        /// <summary>
        /// Set the value of the InterFace property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyInterFace(string aValue);

        /// <summary>
        /// Get a copy of the value of the InterFace property
        /// </summary>
        /// <returns>Value of the InterFace property.</param>
        string PropertyInterFace();

        /// <summary>
        /// Set the value of the NetMask property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyNetMask(string aValue);

        /// <summary>
        /// Get a copy of the value of the NetMask property
        /// </summary>
        /// <returns>Value of the NetMask property.</param>
        string PropertyNetMask();

        /// <summary>
        /// Set the value of the GateWay property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyGateWay(string aValue);

        /// <summary>
        /// Get a copy of the value of the GateWay property
        /// </summary>
        /// <returns>Value of the GateWay property.</param>
        string PropertyGateWay();

        /// <summary>
        /// Set the value of the DNS property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyDNS(string aValue);

        /// <summary>
        /// Get a copy of the value of the DNS property
        /// </summary>
        /// <returns>Value of the DNS property.</param>
        string PropertyDNS();

        /// <summary>
        /// Set the value of the DHCP property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyDHCP(string aValue);

        /// <summary>
        /// Get a copy of the value of the DHCP property
        /// </summary>
        /// <returns>Value of the DHCP property.</param>
        string PropertyDHCP();

        /// <summary>
        /// Set the value of the Ssid property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertySsid(string aValue);

        /// <summary>
        /// Get a copy of the value of the Ssid property
        /// </summary>
        /// <returns>Value of the Ssid property.</param>
        string PropertySsid();

        /// <summary>
        /// Set the value of the PassWord property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyPassWord(string aValue);

        /// <summary>
        /// Get a copy of the value of the PassWord property
        /// </summary>
        /// <returns>Value of the PassWord property.</param>
        string PropertyPassWord();

        /// <summary>
        /// Set the value of the EncrypType property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyEncrypType(string aValue);

        /// <summary>
        /// Get a copy of the value of the EncrypType property
        /// </summary>
        /// <returns>Value of the EncrypType property.</param>
        string PropertyEncrypType();

        /// <summary>
        /// Set the value of the Channel property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyChannel(string aValue);

        /// <summary>
        /// Get a copy of the value of the Channel property
        /// </summary>
        /// <returns>Value of the Channel property.</param>
        string PropertyChannel();

        /// <summary>
        /// Set the value of the UpnpType property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUpnpType(string aValue);

        /// <summary>
        /// Get a copy of the value of the UpnpType property
        /// </summary>
        /// <returns>Value of the UpnpType property.</param>
        string PropertyUpnpType();

        /// <summary>
        /// Set the value of the Status property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyStatus(string aValue);

        /// <summary>
        /// Get a copy of the value of the Status property
        /// </summary>
        /// <returns>Value of the Status property.</param>
        string PropertyStatus();

        /// <summary>
        /// Set the value of the SampleFormat property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertySampleFormat(string aValue);

        /// <summary>
        /// Get a copy of the value of the SampleFormat property
        /// </summary>
        /// <returns>Value of the SampleFormat property.</param>
        string PropertySampleFormat();

        /// <summary>
        /// Set the value of the IpAddress property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyIpAddress(string aValue);

        /// <summary>
        /// Get a copy of the value of the IpAddress property
        /// </summary>
        /// <returns>Value of the IpAddress property.</param>
        string PropertyIpAddress();

        /// <summary>
        /// Set the value of the Protect property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyProtect(string aValue);

        /// <summary>
        /// Get a copy of the value of the Protect property
        /// </summary>
        /// <returns>Value of the Protect property.</param>
        string PropertyProtect();

        /// <summary>
        /// Set the value of the ProtectPassword property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyProtectPassword(string aValue);

        /// <summary>
        /// Get a copy of the value of the ProtectPassword property
        /// </summary>
        /// <returns>Value of the ProtectPassword property.</param>
        string PropertyProtectPassword();

        /// <summary>
        /// Set the value of the ActiveStatus property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyActiveStatus(string aValue);

        /// <summary>
        /// Get a copy of the value of the ActiveStatus property
        /// </summary>
        /// <returns>Value of the ActiveStatus property.</param>
        string PropertyActiveStatus();

        /// <summary>
        /// Set the value of the Time property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyTime(string aValue);

        /// <summary>
        /// Get a copy of the value of the Time property
        /// </summary>
        /// <returns>Value of the Time property.</param>
        string PropertyTime();

        /// <summary>
        /// Set the value of the VolumeControl property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyVolumeControl(bool aValue);

        /// <summary>
        /// Get a copy of the value of the VolumeControl property
        /// </summary>
        /// <returns>Value of the VolumeControl property.</param>
        bool PropertyVolumeControl();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:HardwareConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgHardwareConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgHardwareConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateIsAlive;
        private ActionDelegate iDelegateUpdate;
        private ActionDelegate iDelegateActive;
        private ActionDelegate iDelegateGetActiveStatus;
        private ActionDelegate iDelegateCheckUpdate;
        private ActionDelegate iDelegateResetDisplay;
        private ActionDelegate iDelegateGetHardWareInfo;
        private ActionDelegate iDelegateSetRoomName;
        private ActionDelegate iDelegateGetVolumeControl;
        private ActionDelegate iDelegateSetVolumeControl;
        private ActionDelegate iDelegateGetWaitingTime;
        private ActionDelegate iDelegateSetWaitingTime;
        private ActionDelegate iDelegateGetOutChannel;
        private ActionDelegate iDelegateSetOutChannel;
        private ActionDelegate iDelegateSetUpnpType;
        private ActionDelegate iDelegateGetUpnpType;
        private ActionDelegate iDelegateSetDsdNativeStatus;
        private ActionDelegate iDelegateGetDsdNativeStatus;
        private ActionDelegate iDelegateSetPasswordProtect;
        private ActionDelegate iDelegateGetPasswordProtect;
        private ActionDelegate iDelegateGetUpdateInfo;
        private ActionDelegate iDelegateGetWirelessList;
        private ActionDelegate iDelegateGetIpAddress;
        private ActionDelegate iDelegateSetNetWork;
        private ActionDelegate iDelegateGetNetInterface;
        private ActionDelegate iDelegateGetHaltStatus;
        private ActionDelegate iDelegateSetHaltStatus;
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

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgHardwareConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "HardwareConfig", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Alive property.
        /// </summary>
        public void EnablePropertyAlive()
        {
            iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
            AddProperty(iPropertyAlive);
        }

        /// <summary>
        /// Enable the CurrentAction property.
        /// </summary>
        public void EnablePropertyCurrentAction()
        {
            iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
            AddProperty(iPropertyCurrentAction);
        }

        /// <summary>
        /// Enable the Restart property.
        /// </summary>
        public void EnablePropertyRestart()
        {
            iPropertyRestart = new PropertyBool(new ParameterBool("Restart"));
            AddProperty(iPropertyRestart);
        }

        /// <summary>
        /// Enable the Number property.
        /// </summary>
        public void EnablePropertyNumber()
        {
            iPropertyNumber = new PropertyUint(new ParameterUint("Number"));
            AddProperty(iPropertyNumber);
        }

        /// <summary>
        /// Enable the RoomName property.
        /// </summary>
        public void EnablePropertyRoomName()
        {
            List<String> allowedValues = new List<String>();
            iPropertyRoomName = new PropertyString(new ParameterString("RoomName", allowedValues));
            AddProperty(iPropertyRoomName);
        }

        /// <summary>
        /// Enable the InterFace property.
        /// </summary>
        public void EnablePropertyInterFace()
        {
            List<String> allowedValues = new List<String>();
            iPropertyInterFace = new PropertyString(new ParameterString("InterFace", allowedValues));
            AddProperty(iPropertyInterFace);
        }

        /// <summary>
        /// Enable the NetMask property.
        /// </summary>
        public void EnablePropertyNetMask()
        {
            List<String> allowedValues = new List<String>();
            iPropertyNetMask = new PropertyString(new ParameterString("NetMask", allowedValues));
            AddProperty(iPropertyNetMask);
        }

        /// <summary>
        /// Enable the GateWay property.
        /// </summary>
        public void EnablePropertyGateWay()
        {
            List<String> allowedValues = new List<String>();
            iPropertyGateWay = new PropertyString(new ParameterString("GateWay", allowedValues));
            AddProperty(iPropertyGateWay);
        }

        /// <summary>
        /// Enable the DNS property.
        /// </summary>
        public void EnablePropertyDNS()
        {
            List<String> allowedValues = new List<String>();
            iPropertyDNS = new PropertyString(new ParameterString("DNS", allowedValues));
            AddProperty(iPropertyDNS);
        }

        /// <summary>
        /// Enable the DHCP property.
        /// </summary>
        public void EnablePropertyDHCP()
        {
            List<String> allowedValues = new List<String>();
            iPropertyDHCP = new PropertyString(new ParameterString("DHCP", allowedValues));
            AddProperty(iPropertyDHCP);
        }

        /// <summary>
        /// Enable the Ssid property.
        /// </summary>
        public void EnablePropertySsid()
        {
            List<String> allowedValues = new List<String>();
            iPropertySsid = new PropertyString(new ParameterString("Ssid", allowedValues));
            AddProperty(iPropertySsid);
        }

        /// <summary>
        /// Enable the PassWord property.
        /// </summary>
        public void EnablePropertyPassWord()
        {
            List<String> allowedValues = new List<String>();
            iPropertyPassWord = new PropertyString(new ParameterString("PassWord", allowedValues));
            AddProperty(iPropertyPassWord);
        }

        /// <summary>
        /// Enable the EncrypType property.
        /// </summary>
        public void EnablePropertyEncrypType()
        {
            List<String> allowedValues = new List<String>();
            iPropertyEncrypType = new PropertyString(new ParameterString("EncrypType", allowedValues));
            AddProperty(iPropertyEncrypType);
        }

        /// <summary>
        /// Enable the Channel property.
        /// </summary>
        public void EnablePropertyChannel()
        {
            List<String> allowedValues = new List<String>();
            iPropertyChannel = new PropertyString(new ParameterString("Channel", allowedValues));
            AddProperty(iPropertyChannel);
        }

        /// <summary>
        /// Enable the UpnpType property.
        /// </summary>
        public void EnablePropertyUpnpType()
        {
            List<String> allowedValues = new List<String>();
            iPropertyUpnpType = new PropertyString(new ParameterString("UpnpType", allowedValues));
            AddProperty(iPropertyUpnpType);
        }

        /// <summary>
        /// Enable the Status property.
        /// </summary>
        public void EnablePropertyStatus()
        {
            List<String> allowedValues = new List<String>();
            iPropertyStatus = new PropertyString(new ParameterString("Status", allowedValues));
            AddProperty(iPropertyStatus);
        }

        /// <summary>
        /// Enable the SampleFormat property.
        /// </summary>
        public void EnablePropertySampleFormat()
        {
            List<String> allowedValues = new List<String>();
            iPropertySampleFormat = new PropertyString(new ParameterString("SampleFormat", allowedValues));
            AddProperty(iPropertySampleFormat);
        }

        /// <summary>
        /// Enable the IpAddress property.
        /// </summary>
        public void EnablePropertyIpAddress()
        {
            List<String> allowedValues = new List<String>();
            iPropertyIpAddress = new PropertyString(new ParameterString("IpAddress", allowedValues));
            AddProperty(iPropertyIpAddress);
        }

        /// <summary>
        /// Enable the Protect property.
        /// </summary>
        public void EnablePropertyProtect()
        {
            List<String> allowedValues = new List<String>();
            iPropertyProtect = new PropertyString(new ParameterString("Protect", allowedValues));
            AddProperty(iPropertyProtect);
        }

        /// <summary>
        /// Enable the ProtectPassword property.
        /// </summary>
        public void EnablePropertyProtectPassword()
        {
            List<String> allowedValues = new List<String>();
            iPropertyProtectPassword = new PropertyString(new ParameterString("ProtectPassword", allowedValues));
            AddProperty(iPropertyProtectPassword);
        }

        /// <summary>
        /// Enable the ActiveStatus property.
        /// </summary>
        public void EnablePropertyActiveStatus()
        {
            List<String> allowedValues = new List<String>();
            iPropertyActiveStatus = new PropertyString(new ParameterString("ActiveStatus", allowedValues));
            AddProperty(iPropertyActiveStatus);
        }

        /// <summary>
        /// Enable the Time property.
        /// </summary>
        public void EnablePropertyTime()
        {
            List<String> allowedValues = new List<String>();
            iPropertyTime = new PropertyString(new ParameterString("Time", allowedValues));
            AddProperty(iPropertyTime);
        }

        /// <summary>
        /// Enable the VolumeControl property.
        /// </summary>
        public void EnablePropertyVolumeControl()
        {
            iPropertyVolumeControl = new PropertyBool(new ParameterBool("VolumeControl"));
            AddProperty(iPropertyVolumeControl);
        }

        /// <summary>
        /// Set the value of the Alive property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAlive has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyAlive(bool aValue)
        {
            if (iPropertyAlive == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyAlive, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Alive property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAlive has previously been called.</remarks>
        /// <returns>Value of the Alive property.</returns>
        public bool PropertyAlive()
        {
            if (iPropertyAlive == null)
                throw new PropertyDisabledError();
            return iPropertyAlive.Value();
        }

        /// <summary>
        /// Set the value of the CurrentAction property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCurrentAction has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyCurrentAction(uint aValue)
        {
            if (iPropertyCurrentAction == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyCurrentAction, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the CurrentAction property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCurrentAction has previously been called.</remarks>
        /// <returns>Value of the CurrentAction property.</returns>
        public uint PropertyCurrentAction()
        {
            if (iPropertyCurrentAction == null)
                throw new PropertyDisabledError();
            return iPropertyCurrentAction.Value();
        }

        /// <summary>
        /// Set the value of the Restart property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRestart has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyRestart(bool aValue)
        {
            if (iPropertyRestart == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyRestart, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Restart property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRestart has previously been called.</remarks>
        /// <returns>Value of the Restart property.</returns>
        public bool PropertyRestart()
        {
            if (iPropertyRestart == null)
                throw new PropertyDisabledError();
            return iPropertyRestart.Value();
        }

        /// <summary>
        /// Set the value of the Number property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyNumber has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyNumber(uint aValue)
        {
            if (iPropertyNumber == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyNumber, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Number property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyNumber has previously been called.</remarks>
        /// <returns>Value of the Number property.</returns>
        public uint PropertyNumber()
        {
            if (iPropertyNumber == null)
                throw new PropertyDisabledError();
            return iPropertyNumber.Value();
        }

        /// <summary>
        /// Set the value of the RoomName property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRoomName has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyRoomName(string aValue)
        {
            if (iPropertyRoomName == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyRoomName, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the RoomName property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRoomName has previously been called.</remarks>
        /// <returns>Value of the RoomName property.</returns>
        public string PropertyRoomName()
        {
            if (iPropertyRoomName == null)
                throw new PropertyDisabledError();
            return iPropertyRoomName.Value();
        }

        /// <summary>
        /// Set the value of the InterFace property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyInterFace has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyInterFace(string aValue)
        {
            if (iPropertyInterFace == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyInterFace, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the InterFace property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyInterFace has previously been called.</remarks>
        /// <returns>Value of the InterFace property.</returns>
        public string PropertyInterFace()
        {
            if (iPropertyInterFace == null)
                throw new PropertyDisabledError();
            return iPropertyInterFace.Value();
        }

        /// <summary>
        /// Set the value of the NetMask property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyNetMask has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyNetMask(string aValue)
        {
            if (iPropertyNetMask == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyNetMask, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the NetMask property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyNetMask has previously been called.</remarks>
        /// <returns>Value of the NetMask property.</returns>
        public string PropertyNetMask()
        {
            if (iPropertyNetMask == null)
                throw new PropertyDisabledError();
            return iPropertyNetMask.Value();
        }

        /// <summary>
        /// Set the value of the GateWay property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGateWay has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyGateWay(string aValue)
        {
            if (iPropertyGateWay == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyGateWay, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the GateWay property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGateWay has previously been called.</remarks>
        /// <returns>Value of the GateWay property.</returns>
        public string PropertyGateWay()
        {
            if (iPropertyGateWay == null)
                throw new PropertyDisabledError();
            return iPropertyGateWay.Value();
        }

        /// <summary>
        /// Set the value of the DNS property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDNS has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyDNS(string aValue)
        {
            if (iPropertyDNS == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyDNS, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the DNS property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDNS has previously been called.</remarks>
        /// <returns>Value of the DNS property.</returns>
        public string PropertyDNS()
        {
            if (iPropertyDNS == null)
                throw new PropertyDisabledError();
            return iPropertyDNS.Value();
        }

        /// <summary>
        /// Set the value of the DHCP property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDHCP has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyDHCP(string aValue)
        {
            if (iPropertyDHCP == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyDHCP, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the DHCP property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDHCP has previously been called.</remarks>
        /// <returns>Value of the DHCP property.</returns>
        public string PropertyDHCP()
        {
            if (iPropertyDHCP == null)
                throw new PropertyDisabledError();
            return iPropertyDHCP.Value();
        }

        /// <summary>
        /// Set the value of the Ssid property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySsid has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertySsid(string aValue)
        {
            if (iPropertySsid == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertySsid, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Ssid property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySsid has previously been called.</remarks>
        /// <returns>Value of the Ssid property.</returns>
        public string PropertySsid()
        {
            if (iPropertySsid == null)
                throw new PropertyDisabledError();
            return iPropertySsid.Value();
        }

        /// <summary>
        /// Set the value of the PassWord property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPassWord has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyPassWord(string aValue)
        {
            if (iPropertyPassWord == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyPassWord, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the PassWord property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPassWord has previously been called.</remarks>
        /// <returns>Value of the PassWord property.</returns>
        public string PropertyPassWord()
        {
            if (iPropertyPassWord == null)
                throw new PropertyDisabledError();
            return iPropertyPassWord.Value();
        }

        /// <summary>
        /// Set the value of the EncrypType property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyEncrypType has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyEncrypType(string aValue)
        {
            if (iPropertyEncrypType == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyEncrypType, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the EncrypType property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyEncrypType has previously been called.</remarks>
        /// <returns>Value of the EncrypType property.</returns>
        public string PropertyEncrypType()
        {
            if (iPropertyEncrypType == null)
                throw new PropertyDisabledError();
            return iPropertyEncrypType.Value();
        }

        /// <summary>
        /// Set the value of the Channel property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyChannel has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyChannel(string aValue)
        {
            if (iPropertyChannel == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyChannel, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Channel property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyChannel has previously been called.</remarks>
        /// <returns>Value of the Channel property.</returns>
        public string PropertyChannel()
        {
            if (iPropertyChannel == null)
                throw new PropertyDisabledError();
            return iPropertyChannel.Value();
        }

        /// <summary>
        /// Set the value of the UpnpType property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpnpType has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUpnpType(string aValue)
        {
            if (iPropertyUpnpType == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyUpnpType, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UpnpType property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpnpType has previously been called.</remarks>
        /// <returns>Value of the UpnpType property.</returns>
        public string PropertyUpnpType()
        {
            if (iPropertyUpnpType == null)
                throw new PropertyDisabledError();
            return iPropertyUpnpType.Value();
        }

        /// <summary>
        /// Set the value of the Status property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyStatus has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyStatus(string aValue)
        {
            if (iPropertyStatus == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyStatus, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Status property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyStatus has previously been called.</remarks>
        /// <returns>Value of the Status property.</returns>
        public string PropertyStatus()
        {
            if (iPropertyStatus == null)
                throw new PropertyDisabledError();
            return iPropertyStatus.Value();
        }

        /// <summary>
        /// Set the value of the SampleFormat property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySampleFormat has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertySampleFormat(string aValue)
        {
            if (iPropertySampleFormat == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertySampleFormat, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the SampleFormat property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySampleFormat has previously been called.</remarks>
        /// <returns>Value of the SampleFormat property.</returns>
        public string PropertySampleFormat()
        {
            if (iPropertySampleFormat == null)
                throw new PropertyDisabledError();
            return iPropertySampleFormat.Value();
        }

        /// <summary>
        /// Set the value of the IpAddress property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyIpAddress has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyIpAddress(string aValue)
        {
            if (iPropertyIpAddress == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyIpAddress, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the IpAddress property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyIpAddress has previously been called.</remarks>
        /// <returns>Value of the IpAddress property.</returns>
        public string PropertyIpAddress()
        {
            if (iPropertyIpAddress == null)
                throw new PropertyDisabledError();
            return iPropertyIpAddress.Value();
        }

        /// <summary>
        /// Set the value of the Protect property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyProtect has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyProtect(string aValue)
        {
            if (iPropertyProtect == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyProtect, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Protect property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyProtect has previously been called.</remarks>
        /// <returns>Value of the Protect property.</returns>
        public string PropertyProtect()
        {
            if (iPropertyProtect == null)
                throw new PropertyDisabledError();
            return iPropertyProtect.Value();
        }

        /// <summary>
        /// Set the value of the ProtectPassword property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyProtectPassword has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyProtectPassword(string aValue)
        {
            if (iPropertyProtectPassword == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyProtectPassword, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ProtectPassword property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyProtectPassword has previously been called.</remarks>
        /// <returns>Value of the ProtectPassword property.</returns>
        public string PropertyProtectPassword()
        {
            if (iPropertyProtectPassword == null)
                throw new PropertyDisabledError();
            return iPropertyProtectPassword.Value();
        }

        /// <summary>
        /// Set the value of the ActiveStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyActiveStatus has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyActiveStatus(string aValue)
        {
            if (iPropertyActiveStatus == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyActiveStatus, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ActiveStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyActiveStatus has previously been called.</remarks>
        /// <returns>Value of the ActiveStatus property.</returns>
        public string PropertyActiveStatus()
        {
            if (iPropertyActiveStatus == null)
                throw new PropertyDisabledError();
            return iPropertyActiveStatus.Value();
        }

        /// <summary>
        /// Set the value of the Time property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyTime has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyTime(string aValue)
        {
            if (iPropertyTime == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyTime, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Time property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyTime has previously been called.</remarks>
        /// <returns>Value of the Time property.</returns>
        public string PropertyTime()
        {
            if (iPropertyTime == null)
                throw new PropertyDisabledError();
            return iPropertyTime.Value();
        }

        /// <summary>
        /// Set the value of the VolumeControl property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeControl has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyVolumeControl(bool aValue)
        {
            if (iPropertyVolumeControl == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyVolumeControl, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the VolumeControl property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeControl has previously been called.</remarks>
        /// <returns>Value of the VolumeControl property.</returns>
        public bool PropertyVolumeControl()
        {
            if (iPropertyVolumeControl == null)
                throw new PropertyDisabledError();
            return iPropertyVolumeControl.Value();
        }

        /// <summary>
        /// Signal that the action IsAlive is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// IsAlive must be overridden if this is called.</remarks>
        protected void EnableActionIsAlive()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("IsAlive");
            action.AddOutputParameter(new ParameterRelated("Alive", iPropertyAlive));
            iDelegateIsAlive = new ActionDelegate(DoIsAlive);
            EnableAction(action, iDelegateIsAlive, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Update is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Update must be overridden if this is called.</remarks>
        protected void EnableActionUpdate()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Update");
            iDelegateUpdate = new ActionDelegate(DoUpdate);
            EnableAction(action, iDelegateUpdate, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Active is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Active must be overridden if this is called.</remarks>
        protected void EnableActionActive()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Active");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterBool("IsSubscribe"));
            action.AddInputParameter(new ParameterString("RealName", allowedValues));
            action.AddInputParameter(new ParameterString("Email", allowedValues));
            iDelegateActive = new ActionDelegate(DoActive);
            EnableAction(action, iDelegateActive, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetActiveStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetActiveStatus must be overridden if this is called.</remarks>
        protected void EnableActionGetActiveStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetActiveStatus");
            action.AddOutputParameter(new ParameterRelated("ActiveStatus", iPropertyActiveStatus));
            iDelegateGetActiveStatus = new ActionDelegate(DoGetActiveStatus);
            EnableAction(action, iDelegateGetActiveStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action CheckUpdate is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// CheckUpdate must be overridden if this is called.</remarks>
        protected void EnableActionCheckUpdate()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("CheckUpdate");
            iDelegateCheckUpdate = new ActionDelegate(DoCheckUpdate);
            EnableAction(action, iDelegateCheckUpdate, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ResetDisplay is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ResetDisplay must be overridden if this is called.</remarks>
        protected void EnableActionResetDisplay()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ResetDisplay");
            iDelegateResetDisplay = new ActionDelegate(DoResetDisplay);
            EnableAction(action, iDelegateResetDisplay, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetHardWareInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetHardWareInfo must be overridden if this is called.</remarks>
        protected void EnableActionGetHardWareInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetHardWareInfo");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("HardWareInfo", allowedValues));
            iDelegateGetHardWareInfo = new ActionDelegate(DoGetHardWareInfo);
            EnableAction(action, iDelegateGetHardWareInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetRoomName is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetRoomName must be overridden if this is called.</remarks>
        protected void EnableActionSetRoomName()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetRoomName");
            action.AddInputParameter(new ParameterRelated("RoomName", iPropertyRoomName));
            iDelegateSetRoomName = new ActionDelegate(DoSetRoomName);
            EnableAction(action, iDelegateSetRoomName, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetVolumeControl is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetVolumeControl must be overridden if this is called.</remarks>
        protected void EnableActionGetVolumeControl()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetVolumeControl");
            action.AddOutputParameter(new ParameterRelated("VolumeControl", iPropertyVolumeControl));
            iDelegateGetVolumeControl = new ActionDelegate(DoGetVolumeControl);
            EnableAction(action, iDelegateGetVolumeControl, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetVolumeControl is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetVolumeControl must be overridden if this is called.</remarks>
        protected void EnableActionSetVolumeControl()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetVolumeControl");
            action.AddInputParameter(new ParameterRelated("VolumeControl", iPropertyVolumeControl));
            iDelegateSetVolumeControl = new ActionDelegate(DoSetVolumeControl);
            EnableAction(action, iDelegateSetVolumeControl, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetWaitingTime is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetWaitingTime must be overridden if this is called.</remarks>
        protected void EnableActionGetWaitingTime()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetWaitingTime");
            action.AddOutputParameter(new ParameterRelated("WaitingTime", iPropertyTime));
            iDelegateGetWaitingTime = new ActionDelegate(DoGetWaitingTime);
            EnableAction(action, iDelegateGetWaitingTime, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetWaitingTime is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetWaitingTime must be overridden if this is called.</remarks>
        protected void EnableActionSetWaitingTime()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetWaitingTime");
            action.AddInputParameter(new ParameterRelated("WaitingTime", iPropertyTime));
            iDelegateSetWaitingTime = new ActionDelegate(DoSetWaitingTime);
            EnableAction(action, iDelegateSetWaitingTime, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetOutChannel is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetOutChannel must be overridden if this is called.</remarks>
        protected void EnableActionGetOutChannel()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetOutChannel");
            action.AddOutputParameter(new ParameterRelated("ChannelNum", iPropertyNumber));
            action.AddOutputParameter(new ParameterRelated("CurrentChannel", iPropertyChannel));
            action.AddOutputParameter(new ParameterRelated("OutChannel", iPropertyChannel));
            iDelegateGetOutChannel = new ActionDelegate(DoGetOutChannel);
            EnableAction(action, iDelegateGetOutChannel, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetOutChannel is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetOutChannel must be overridden if this is called.</remarks>
        protected void EnableActionSetOutChannel()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetOutChannel");
            action.AddInputParameter(new ParameterRelated("Channel", iPropertyChannel));
            iDelegateSetOutChannel = new ActionDelegate(DoSetOutChannel);
            EnableAction(action, iDelegateSetOutChannel, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetUpnpType is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetUpnpType must be overridden if this is called.</remarks>
        protected void EnableActionSetUpnpType()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetUpnpType");
            action.AddInputParameter(new ParameterRelated("UpnpType", iPropertyUpnpType));
            iDelegateSetUpnpType = new ActionDelegate(DoSetUpnpType);
            EnableAction(action, iDelegateSetUpnpType, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetUpnpType is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetUpnpType must be overridden if this is called.</remarks>
        protected void EnableActionGetUpnpType()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetUpnpType");
            action.AddOutputParameter(new ParameterRelated("UpnpType", iPropertyUpnpType));
            iDelegateGetUpnpType = new ActionDelegate(DoGetUpnpType);
            EnableAction(action, iDelegateGetUpnpType, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetDsdNativeStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetDsdNativeStatus must be overridden if this is called.</remarks>
        protected void EnableActionSetDsdNativeStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetDsdNativeStatus");
            action.AddInputParameter(new ParameterRelated("Status", iPropertyStatus));
            action.AddInputParameter(new ParameterRelated("SampleFormat", iPropertySampleFormat));
            iDelegateSetDsdNativeStatus = new ActionDelegate(DoSetDsdNativeStatus);
            EnableAction(action, iDelegateSetDsdNativeStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetDsdNativeStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDsdNativeStatus must be overridden if this is called.</remarks>
        protected void EnableActionGetDsdNativeStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDsdNativeStatus");
            action.AddOutputParameter(new ParameterRelated("Status", iPropertyStatus));
            action.AddOutputParameter(new ParameterRelated("SampleFormat", iPropertySampleFormat));
            iDelegateGetDsdNativeStatus = new ActionDelegate(DoGetDsdNativeStatus);
            EnableAction(action, iDelegateGetDsdNativeStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetPasswordProtect is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetPasswordProtect must be overridden if this is called.</remarks>
        protected void EnableActionSetPasswordProtect()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetPasswordProtect");
            action.AddInputParameter(new ParameterRelated("Protect", iPropertyProtect));
            action.AddInputParameter(new ParameterRelated("ProtectPassword", iPropertyProtectPassword));
            iDelegateSetPasswordProtect = new ActionDelegate(DoSetPasswordProtect);
            EnableAction(action, iDelegateSetPasswordProtect, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetPasswordProtect is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetPasswordProtect must be overridden if this is called.</remarks>
        protected void EnableActionGetPasswordProtect()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetPasswordProtect");
            action.AddOutputParameter(new ParameterRelated("Protect", iPropertyProtect));
            action.AddOutputParameter(new ParameterRelated("ProtectPassword", iPropertyProtectPassword));
            iDelegateGetPasswordProtect = new ActionDelegate(DoGetPasswordProtect);
            EnableAction(action, iDelegateGetPasswordProtect, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetUpdateInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetUpdateInfo must be overridden if this is called.</remarks>
        protected void EnableActionGetUpdateInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetUpdateInfo");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("Version", allowedValues));
            action.AddOutputParameter(new ParameterString("Progress", allowedValues));
            iDelegateGetUpdateInfo = new ActionDelegate(DoGetUpdateInfo);
            EnableAction(action, iDelegateGetUpdateInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetWirelessList is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetWirelessList must be overridden if this is called.</remarks>
        protected void EnableActionGetWirelessList()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetWirelessList");
            action.AddInputParameter(new ParameterRelated("InterFace", iPropertyInterFace));
            action.AddOutputParameter(new ParameterRelated("Number", iPropertyNumber));
            action.AddOutputParameter(new ParameterRelated("CurrentUse", iPropertySsid));
            action.AddOutputParameter(new ParameterRelated("WirelessList", iPropertySsid));
            iDelegateGetWirelessList = new ActionDelegate(DoGetWirelessList);
            EnableAction(action, iDelegateGetWirelessList, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetIpAddress is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetIpAddress must be overridden if this is called.</remarks>
        protected void EnableActionGetIpAddress()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetIpAddress");
            action.AddInputParameter(new ParameterRelated("InterFace", iPropertyInterFace));
            action.AddOutputParameter(new ParameterRelated("IpAddress", iPropertyIpAddress));
            action.AddOutputParameter(new ParameterRelated("NetMask", iPropertyNetMask));
            action.AddOutputParameter(new ParameterRelated("GateWay", iPropertyGateWay));
            action.AddOutputParameter(new ParameterRelated("DNS", iPropertyDNS));
            action.AddOutputParameter(new ParameterRelated("DHCP", iPropertyDHCP));
            iDelegateGetIpAddress = new ActionDelegate(DoGetIpAddress);
            EnableAction(action, iDelegateGetIpAddress, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetNetWork is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetNetWork must be overridden if this is called.</remarks>
        protected void EnableActionSetNetWork()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetNetWork");
            action.AddInputParameter(new ParameterRelated("InterFace", iPropertyInterFace));
            action.AddInputParameter(new ParameterRelated("IpAddress", iPropertyIpAddress));
            action.AddInputParameter(new ParameterRelated("NetMask", iPropertyNetMask));
            action.AddInputParameter(new ParameterRelated("GateWay", iPropertyGateWay));
            action.AddInputParameter(new ParameterRelated("DNS", iPropertyDNS));
            action.AddInputParameter(new ParameterRelated("Ssid", iPropertySsid));
            action.AddInputParameter(new ParameterRelated("PassWord", iPropertyPassWord));
            action.AddInputParameter(new ParameterRelated("EncrypType", iPropertyEncrypType));
            iDelegateSetNetWork = new ActionDelegate(DoSetNetWork);
            EnableAction(action, iDelegateSetNetWork, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetNetInterface is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetNetInterface must be overridden if this is called.</remarks>
        protected void EnableActionGetNetInterface()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetNetInterface");
            action.AddOutputParameter(new ParameterRelated("InterfaceNum", iPropertyNumber));
            action.AddOutputParameter(new ParameterRelated("CurrentUse", iPropertyInterFace));
            action.AddOutputParameter(new ParameterRelated("InterfaceList", iPropertyInterFace));
            iDelegateGetNetInterface = new ActionDelegate(DoGetNetInterface);
            EnableAction(action, iDelegateGetNetInterface, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetHaltStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetHaltStatus must be overridden if this is called.</remarks>
        protected void EnableActionGetHaltStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetHaltStatus");
            action.AddOutputParameter(new ParameterBool("HaltStatus"));
            iDelegateGetHaltStatus = new ActionDelegate(DoGetHaltStatus);
            EnableAction(action, iDelegateGetHaltStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetHaltStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetHaltStatus must be overridden if this is called.</remarks>
        protected void EnableActionSetHaltStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetHaltStatus");
            action.AddInputParameter(new ParameterBool("HaltStatus"));
            iDelegateSetHaltStatus = new ActionDelegate(DoSetHaltStatus);
            EnableAction(action, iDelegateSetHaltStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// IsAlive action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// IsAlive action for the owning device.
        ///
        /// Must be implemented iff EnableActionIsAlive was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aAlive"></param>
        protected virtual void IsAlive(IDvInvocation aInvocation, out bool aAlive)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Update action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Update action for the owning device.
        ///
        /// Must be implemented iff EnableActionUpdate was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Update(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Active action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Active action for the owning device.
        ///
        /// Must be implemented iff EnableActionActive was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aIsSubscribe"></param>
        /// <param name="aRealName"></param>
        /// <param name="aEmail"></param>
        protected virtual void Active(IDvInvocation aInvocation, bool aIsSubscribe, string aRealName, string aEmail)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetActiveStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetActiveStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetActiveStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aActiveStatus"></param>
        protected virtual void GetActiveStatus(IDvInvocation aInvocation, out string aActiveStatus)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// CheckUpdate action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// CheckUpdate action for the owning device.
        ///
        /// Must be implemented iff EnableActionCheckUpdate was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void CheckUpdate(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ResetDisplay action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ResetDisplay action for the owning device.
        ///
        /// Must be implemented iff EnableActionResetDisplay was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void ResetDisplay(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetHardWareInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetHardWareInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetHardWareInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aHardWareInfo"></param>
        protected virtual void GetHardWareInfo(IDvInvocation aInvocation, out string aHardWareInfo)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetRoomName action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetRoomName action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetRoomName was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aRoomName"></param>
        protected virtual void SetRoomName(IDvInvocation aInvocation, string aRoomName)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetVolumeControl action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetVolumeControl action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetVolumeControl was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aVolumeControl"></param>
        protected virtual void GetVolumeControl(IDvInvocation aInvocation, out bool aVolumeControl)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetVolumeControl action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetVolumeControl action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetVolumeControl was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aVolumeControl"></param>
        protected virtual void SetVolumeControl(IDvInvocation aInvocation, bool aVolumeControl)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetWaitingTime action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetWaitingTime action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetWaitingTime was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aWaitingTime"></param>
        protected virtual void GetWaitingTime(IDvInvocation aInvocation, out string aWaitingTime)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetWaitingTime action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetWaitingTime action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetWaitingTime was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aWaitingTime"></param>
        protected virtual void SetWaitingTime(IDvInvocation aInvocation, string aWaitingTime)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetOutChannel action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetOutChannel action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetOutChannel was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aChannelNum"></param>
        /// <param name="aCurrentChannel"></param>
        /// <param name="aOutChannel"></param>
        protected virtual void GetOutChannel(IDvInvocation aInvocation, out uint aChannelNum, out string aCurrentChannel, out string aOutChannel)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetOutChannel action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetOutChannel action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetOutChannel was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aChannel"></param>
        protected virtual void SetOutChannel(IDvInvocation aInvocation, string aChannel)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetUpnpType action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetUpnpType action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetUpnpType was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aUpnpType"></param>
        protected virtual void SetUpnpType(IDvInvocation aInvocation, string aUpnpType)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetUpnpType action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetUpnpType action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetUpnpType was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aUpnpType"></param>
        protected virtual void GetUpnpType(IDvInvocation aInvocation, out string aUpnpType)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetDsdNativeStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetDsdNativeStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetDsdNativeStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aStatus"></param>
        /// <param name="aSampleFormat"></param>
        protected virtual void SetDsdNativeStatus(IDvInvocation aInvocation, string aStatus, string aSampleFormat)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetDsdNativeStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDsdNativeStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDsdNativeStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aStatus"></param>
        /// <param name="aSampleFormat"></param>
        protected virtual void GetDsdNativeStatus(IDvInvocation aInvocation, out string aStatus, out string aSampleFormat)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetPasswordProtect action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetPasswordProtect action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetPasswordProtect was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aProtect"></param>
        /// <param name="aProtectPassword"></param>
        protected virtual void SetPasswordProtect(IDvInvocation aInvocation, string aProtect, string aProtectPassword)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetPasswordProtect action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetPasswordProtect action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetPasswordProtect was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aProtect"></param>
        /// <param name="aProtectPassword"></param>
        protected virtual void GetPasswordProtect(IDvInvocation aInvocation, out string aProtect, out string aProtectPassword)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetUpdateInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetUpdateInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetUpdateInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aVersion"></param>
        /// <param name="aProgress"></param>
        protected virtual void GetUpdateInfo(IDvInvocation aInvocation, out string aVersion, out string aProgress)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetWirelessList action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetWirelessList action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetWirelessList was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aInterFace"></param>
        /// <param name="aNumber"></param>
        /// <param name="aCurrentUse"></param>
        /// <param name="aWirelessList"></param>
        protected virtual void GetWirelessList(IDvInvocation aInvocation, string aInterFace, out uint aNumber, out string aCurrentUse, out string aWirelessList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetIpAddress action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetIpAddress action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetIpAddress was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aInterFace"></param>
        /// <param name="aIpAddress"></param>
        /// <param name="aNetMask"></param>
        /// <param name="aGateWay"></param>
        /// <param name="aDNS"></param>
        /// <param name="aDHCP"></param>
        protected virtual void GetIpAddress(IDvInvocation aInvocation, string aInterFace, out string aIpAddress, out string aNetMask, out string aGateWay, out string aDNS, out string aDHCP)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetNetWork action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetNetWork action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetNetWork was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aInterFace"></param>
        /// <param name="aIpAddress"></param>
        /// <param name="aNetMask"></param>
        /// <param name="aGateWay"></param>
        /// <param name="aDNS"></param>
        /// <param name="aSsid"></param>
        /// <param name="aPassWord"></param>
        /// <param name="aEncrypType"></param>
        protected virtual void SetNetWork(IDvInvocation aInvocation, string aInterFace, string aIpAddress, string aNetMask, string aGateWay, string aDNS, string aSsid, string aPassWord, string aEncrypType)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetNetInterface action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetNetInterface action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetNetInterface was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aInterfaceNum"></param>
        /// <param name="aCurrentUse"></param>
        /// <param name="aInterfaceList"></param>
        protected virtual void GetNetInterface(IDvInvocation aInvocation, out uint aInterfaceNum, out string aCurrentUse, out string aInterfaceList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetHaltStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetHaltStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetHaltStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aHaltStatus"></param>
        protected virtual void GetHaltStatus(IDvInvocation aInvocation, out bool aHaltStatus)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetHaltStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetHaltStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetHaltStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aHaltStatus"></param>
        protected virtual void SetHaltStatus(IDvInvocation aInvocation, bool aHaltStatus)
        {
            throw (new ActionDisabledError());
        }

        private static int DoIsAlive(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool alive;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.IsAlive(invocation, out alive);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "IsAlive");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "IsAlive"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "IsAlive", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("Alive", alive);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "IsAlive", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoUpdate(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Update(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Update");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "Update"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Update", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Update", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoActive(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool isSubscribe;
            string realName;
            string email;
            try
            {
                invocation.ReadStart();
                isSubscribe = invocation.ReadBool("IsSubscribe");
                realName = invocation.ReadString("RealName");
                email = invocation.ReadString("Email");
                invocation.ReadEnd();
                self.Active(invocation, isSubscribe, realName, email);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Active");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "Active"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Active", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Active", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetActiveStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string activeStatus;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetActiveStatus(invocation, out activeStatus);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetActiveStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetActiveStatus"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetActiveStatus", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ActiveStatus", activeStatus);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetActiveStatus", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoCheckUpdate(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.CheckUpdate(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "CheckUpdate");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "CheckUpdate"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "CheckUpdate", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "CheckUpdate", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoResetDisplay(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ResetDisplay(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ResetDisplay");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "ResetDisplay"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "ResetDisplay", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "ResetDisplay", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetHardWareInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string hardWareInfo;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetHardWareInfo(invocation, out hardWareInfo);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetHardWareInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetHardWareInfo"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetHardWareInfo", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("HardWareInfo", hardWareInfo);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetHardWareInfo", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetRoomName(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string roomName;
            try
            {
                invocation.ReadStart();
                roomName = invocation.ReadString("RoomName");
                invocation.ReadEnd();
                self.SetRoomName(invocation, roomName);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetRoomName");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetRoomName"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetRoomName", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetRoomName", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetVolumeControl(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool volumeControl;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetVolumeControl(invocation, out volumeControl);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetVolumeControl");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetVolumeControl"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetVolumeControl", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("VolumeControl", volumeControl);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetVolumeControl", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetVolumeControl(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool volumeControl;
            try
            {
                invocation.ReadStart();
                volumeControl = invocation.ReadBool("VolumeControl");
                invocation.ReadEnd();
                self.SetVolumeControl(invocation, volumeControl);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetVolumeControl");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetVolumeControl"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetVolumeControl", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetVolumeControl", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetWaitingTime(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string waitingTime;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetWaitingTime(invocation, out waitingTime);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetWaitingTime");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetWaitingTime"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetWaitingTime", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("WaitingTime", waitingTime);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetWaitingTime", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetWaitingTime(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string waitingTime;
            try
            {
                invocation.ReadStart();
                waitingTime = invocation.ReadString("WaitingTime");
                invocation.ReadEnd();
                self.SetWaitingTime(invocation, waitingTime);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetWaitingTime");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetWaitingTime"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetWaitingTime", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetWaitingTime", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetOutChannel(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint channelNum;
            string currentChannel;
            string outChannel;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetOutChannel(invocation, out channelNum, out currentChannel, out outChannel);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetOutChannel");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetOutChannel"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetOutChannel", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("ChannelNum", channelNum);
                invocation.WriteString("CurrentChannel", currentChannel);
                invocation.WriteString("OutChannel", outChannel);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetOutChannel", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetOutChannel(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string channel;
            try
            {
                invocation.ReadStart();
                channel = invocation.ReadString("Channel");
                invocation.ReadEnd();
                self.SetOutChannel(invocation, channel);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetOutChannel");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetOutChannel"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetOutChannel", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetOutChannel", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetUpnpType(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string upnpType;
            try
            {
                invocation.ReadStart();
                upnpType = invocation.ReadString("UpnpType");
                invocation.ReadEnd();
                self.SetUpnpType(invocation, upnpType);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetUpnpType");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetUpnpType"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetUpnpType", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetUpnpType", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetUpnpType(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string upnpType;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetUpnpType(invocation, out upnpType);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetUpnpType");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetUpnpType"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetUpnpType", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("UpnpType", upnpType);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetUpnpType", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetDsdNativeStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string status;
            string sampleFormat;
            try
            {
                invocation.ReadStart();
                status = invocation.ReadString("Status");
                sampleFormat = invocation.ReadString("SampleFormat");
                invocation.ReadEnd();
                self.SetDsdNativeStatus(invocation, status, sampleFormat);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetDsdNativeStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetDsdNativeStatus"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetDsdNativeStatus", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetDsdNativeStatus", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetDsdNativeStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string status;
            string sampleFormat;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDsdNativeStatus(invocation, out status, out sampleFormat);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDsdNativeStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetDsdNativeStatus"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDsdNativeStatus", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Status", status);
                invocation.WriteString("SampleFormat", sampleFormat);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDsdNativeStatus", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetPasswordProtect(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string protect;
            string protectPassword;
            try
            {
                invocation.ReadStart();
                protect = invocation.ReadString("Protect");
                protectPassword = invocation.ReadString("ProtectPassword");
                invocation.ReadEnd();
                self.SetPasswordProtect(invocation, protect, protectPassword);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetPasswordProtect");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetPasswordProtect"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetPasswordProtect", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetPasswordProtect", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetPasswordProtect(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string protect;
            string protectPassword;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetPasswordProtect(invocation, out protect, out protectPassword);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetPasswordProtect");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetPasswordProtect"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetPasswordProtect", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Protect", protect);
                invocation.WriteString("ProtectPassword", protectPassword);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetPasswordProtect", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetUpdateInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string version;
            string progress;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetUpdateInfo(invocation, out version, out progress);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetUpdateInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetUpdateInfo"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetUpdateInfo", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Version", version);
                invocation.WriteString("Progress", progress);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetUpdateInfo", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetWirelessList(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string interFace;
            uint number;
            string currentUse;
            string wirelessList;
            try
            {
                invocation.ReadStart();
                interFace = invocation.ReadString("InterFace");
                invocation.ReadEnd();
                self.GetWirelessList(invocation, interFace, out number, out currentUse, out wirelessList);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetWirelessList");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetWirelessList"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetWirelessList", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Number", number);
                invocation.WriteString("CurrentUse", currentUse);
                invocation.WriteString("WirelessList", wirelessList);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetWirelessList", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetIpAddress(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string interFace;
            string ipAddress;
            string netMask;
            string gateWay;
            string dNS;
            string dHCP;
            try
            {
                invocation.ReadStart();
                interFace = invocation.ReadString("InterFace");
                invocation.ReadEnd();
                self.GetIpAddress(invocation, interFace, out ipAddress, out netMask, out gateWay, out dNS, out dHCP);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetIpAddress");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetIpAddress"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetIpAddress", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("IpAddress", ipAddress);
                invocation.WriteString("NetMask", netMask);
                invocation.WriteString("GateWay", gateWay);
                invocation.WriteString("DNS", dNS);
                invocation.WriteString("DHCP", dHCP);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetIpAddress", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetNetWork(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string interFace;
            string ipAddress;
            string netMask;
            string gateWay;
            string dNS;
            string ssid;
            string passWord;
            string encrypType;
            try
            {
                invocation.ReadStart();
                interFace = invocation.ReadString("InterFace");
                ipAddress = invocation.ReadString("IpAddress");
                netMask = invocation.ReadString("NetMask");
                gateWay = invocation.ReadString("GateWay");
                dNS = invocation.ReadString("DNS");
                ssid = invocation.ReadString("Ssid");
                passWord = invocation.ReadString("PassWord");
                encrypType = invocation.ReadString("EncrypType");
                invocation.ReadEnd();
                self.SetNetWork(invocation, interFace, ipAddress, netMask, gateWay, dNS, ssid, passWord, encrypType);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetNetWork");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetNetWork"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetNetWork", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetNetWork", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetNetInterface(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint interfaceNum;
            string currentUse;
            string interfaceList;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetNetInterface(invocation, out interfaceNum, out currentUse, out interfaceList);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetNetInterface");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetNetInterface"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetNetInterface", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("InterfaceNum", interfaceNum);
                invocation.WriteString("CurrentUse", currentUse);
                invocation.WriteString("InterfaceList", interfaceList);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetNetInterface", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetHaltStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool haltStatus;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetHaltStatus(invocation, out haltStatus);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetHaltStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetHaltStatus"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetHaltStatus", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("HaltStatus", haltStatus);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetHaltStatus", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetHaltStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool haltStatus;
            try
            {
                invocation.ReadStart();
                haltStatus = invocation.ReadBool("HaltStatus");
                invocation.ReadEnd();
                self.SetHaltStatus(invocation, haltStatus);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetHaltStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetHaltStatus"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetHaltStatus", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetHaltStatus", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        /// <summary>
        /// Must be called for each class instance.  Must be called before Core.Library.Close().
        /// </summary>
        public virtual void Dispose()
        {
            if (DisposeProvider())
                iGch.Free();
        }
    }
}

