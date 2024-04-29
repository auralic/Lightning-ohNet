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
        /// Set the value of the MessageOut property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyMessageOut(string aValue);

        /// <summary>
        /// Get a copy of the value of the MessageOut property
        /// </summary>
        /// <returns>Value of the MessageOut property.</param>
        string PropertyMessageOut();

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
        private ActionDelegate iDelegateLogIn;
        private ActionDelegate iDelegateLogOut;
        private ActionDelegate iDelegateCancelLogIn;
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
        private ActionDelegate iDelegateGetFilterMode;
        private ActionDelegate iDelegateSetFilterMode;
        private ActionDelegate iDelegateSetSourceVisible;
        private ActionDelegate iDelegateGetSourceVisible;
        private ActionDelegate iDelegateSetLEDMode;
        private ActionDelegate iDelegateGetLEDMode;
        private ActionDelegate iDelegateSetKeyMode;
        private ActionDelegate iDelegateGetKeyMode;
        private ActionDelegate iDelegateSetBrightness;
        private ActionDelegate iDelegateGetBrightness;
        private ActionDelegate iDelegateSetDisplayMode;
        private ActionDelegate iDelegateGetDisplayMode;
        private ActionDelegate iDelegateGetDACPhase;
        private ActionDelegate iDelegateSetDACPhase;
        private ActionDelegate iDelegateGetDACBalance;
        private ActionDelegate iDelegateSetDACBalance;
        private ActionDelegate iDelegateSetEnableResampler;
        private ActionDelegate iDelegateSetEnableSpeaker;
        private ActionDelegate iDelegateSetEnableEqualizer;
        private ActionDelegate iDelegateSetEnableDirac;
        private PropertyString iPropertyMessageOut;
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
        /// Enable the MessageOut property.
        /// </summary>
        public void EnablePropertyMessageOut()
        {
            List<String> allowedValues = new List<String>();
            iPropertyMessageOut = new PropertyString(new ParameterString("MessageOut", allowedValues));
            AddProperty(iPropertyMessageOut);
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
        /// Set the value of the MessageOut property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMessageOut has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyMessageOut(string aValue)
        {
            if (iPropertyMessageOut == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyMessageOut, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the MessageOut property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMessageOut has previously been called.</remarks>
        /// <returns>Value of the MessageOut property.</returns>
        public string PropertyMessageOut()
        {
            if (iPropertyMessageOut == null)
                throw new PropertyDisabledError();
            return iPropertyMessageOut.Value();
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
        /// Signal that the action LogIn is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// LogIn must be overridden if this is called.</remarks>
        protected void EnableActionLogIn()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("LogIn");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServiceName", allowedValues));
            action.AddInputParameter(new ParameterString("MessageIn", allowedValues));
            action.AddOutputParameter(new ParameterRelated("MessageOut", iPropertyMessageOut));
            iDelegateLogIn = new ActionDelegate(DoLogIn);
            EnableAction(action, iDelegateLogIn, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action LogOut is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// LogOut must be overridden if this is called.</remarks>
        protected void EnableActionLogOut()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("LogOut");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServiceName", allowedValues));
            iDelegateLogOut = new ActionDelegate(DoLogOut);
            EnableAction(action, iDelegateLogOut, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action CancelLogIn is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// CancelLogIn must be overridden if this is called.</remarks>
        protected void EnableActionCancelLogIn()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("CancelLogIn");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServiceName", allowedValues));
            iDelegateCancelLogIn = new ActionDelegate(DoCancelLogIn);
            EnableAction(action, iDelegateCancelLogIn, GCHandle.ToIntPtr(iGch));
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
        /// Signal that the action GetFilterMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetFilterMode must be overridden if this is called.</remarks>
        protected void EnableActionGetFilterMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetFilterMode");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("FilterMode", allowedValues));
            action.AddOutputParameter(new ParameterString("FilterModeList", allowedValues));
            iDelegateGetFilterMode = new ActionDelegate(DoGetFilterMode);
            EnableAction(action, iDelegateGetFilterMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetFilterMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetFilterMode must be overridden if this is called.</remarks>
        protected void EnableActionSetFilterMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetFilterMode");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("FilterMode", allowedValues));
            iDelegateSetFilterMode = new ActionDelegate(DoSetFilterMode);
            EnableAction(action, iDelegateSetFilterMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetSourceVisible is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetSourceVisible must be overridden if this is called.</remarks>
        protected void EnableActionSetSourceVisible()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetSourceVisible");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("SourceName", allowedValues));
            action.AddInputParameter(new ParameterBool("Visible"));
            iDelegateSetSourceVisible = new ActionDelegate(DoSetSourceVisible);
            EnableAction(action, iDelegateSetSourceVisible, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetSourceVisible is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetSourceVisible must be overridden if this is called.</remarks>
        protected void EnableActionGetSourceVisible()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetSourceVisible");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("VisibleInfo", allowedValues));
            iDelegateGetSourceVisible = new ActionDelegate(DoGetSourceVisible);
            EnableAction(action, iDelegateGetSourceVisible, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetLEDMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetLEDMode must be overridden if this is called.</remarks>
        protected void EnableActionSetLEDMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetLEDMode");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("LEDMode", allowedValues));
            iDelegateSetLEDMode = new ActionDelegate(DoSetLEDMode);
            EnableAction(action, iDelegateSetLEDMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetLEDMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetLEDMode must be overridden if this is called.</remarks>
        protected void EnableActionGetLEDMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetLEDMode");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("LEDMode", allowedValues));
            action.AddOutputParameter(new ParameterString("LEDModeList", allowedValues));
            iDelegateGetLEDMode = new ActionDelegate(DoGetLEDMode);
            EnableAction(action, iDelegateGetLEDMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetKeyMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetKeyMode must be overridden if this is called.</remarks>
        protected void EnableActionSetKeyMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetKeyMode");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("KeyName", allowedValues));
            action.AddInputParameter(new ParameterString("KeyMode", allowedValues));
            iDelegateSetKeyMode = new ActionDelegate(DoSetKeyMode);
            EnableAction(action, iDelegateSetKeyMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetKeyMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetKeyMode must be overridden if this is called.</remarks>
        protected void EnableActionGetKeyMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetKeyMode");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("SideKeyMode", allowedValues));
            action.AddOutputParameter(new ParameterString("MiddleKeyMode", allowedValues));
            action.AddOutputParameter(new ParameterString("KeyModeList", allowedValues));
            iDelegateGetKeyMode = new ActionDelegate(DoGetKeyMode);
            EnableAction(action, iDelegateGetKeyMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetBrightness is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetBrightness must be overridden if this is called.</remarks>
        protected void EnableActionSetBrightness()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetBrightness");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Brightness", allowedValues));
            iDelegateSetBrightness = new ActionDelegate(DoSetBrightness);
            EnableAction(action, iDelegateSetBrightness, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetBrightness is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetBrightness must be overridden if this is called.</remarks>
        protected void EnableActionGetBrightness()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetBrightness");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("Brightness", allowedValues));
            action.AddOutputParameter(new ParameterString("List", allowedValues));
            iDelegateGetBrightness = new ActionDelegate(DoGetBrightness);
            EnableAction(action, iDelegateGetBrightness, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetDisplayMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetDisplayMode must be overridden if this is called.</remarks>
        protected void EnableActionSetDisplayMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetDisplayMode");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("DisplayMode", allowedValues));
            iDelegateSetDisplayMode = new ActionDelegate(DoSetDisplayMode);
            EnableAction(action, iDelegateSetDisplayMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetDisplayMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDisplayMode must be overridden if this is called.</remarks>
        protected void EnableActionGetDisplayMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDisplayMode");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("DisplayMode", allowedValues));
            action.AddOutputParameter(new ParameterString("DisplayModeList", allowedValues));
            iDelegateGetDisplayMode = new ActionDelegate(DoGetDisplayMode);
            EnableAction(action, iDelegateGetDisplayMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetDACPhase is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDACPhase must be overridden if this is called.</remarks>
        protected void EnableActionGetDACPhase()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDACPhase");
            action.AddOutputParameter(new ParameterUint("Phase"));
            iDelegateGetDACPhase = new ActionDelegate(DoGetDACPhase);
            EnableAction(action, iDelegateGetDACPhase, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetDACPhase is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetDACPhase must be overridden if this is called.</remarks>
        protected void EnableActionSetDACPhase()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetDACPhase");
            action.AddInputParameter(new ParameterUint("Phase"));
            iDelegateSetDACPhase = new ActionDelegate(DoSetDACPhase);
            EnableAction(action, iDelegateSetDACPhase, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetDACBalance is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDACBalance must be overridden if this is called.</remarks>
        protected void EnableActionGetDACBalance()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDACBalance");
            action.AddOutputParameter(new ParameterUint("Balance"));
            iDelegateGetDACBalance = new ActionDelegate(DoGetDACBalance);
            EnableAction(action, iDelegateGetDACBalance, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetDACBalance is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetDACBalance must be overridden if this is called.</remarks>
        protected void EnableActionSetDACBalance()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetDACBalance");
            action.AddInputParameter(new ParameterUint("Balance"));
            iDelegateSetDACBalance = new ActionDelegate(DoSetDACBalance);
            EnableAction(action, iDelegateSetDACBalance, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetEnableResampler is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetEnableResampler must be overridden if this is called.</remarks>
        protected void EnableActionSetEnableResampler()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetEnableResampler");
            action.AddInputParameter(new ParameterBool("EnableResampler"));
            iDelegateSetEnableResampler = new ActionDelegate(DoSetEnableResampler);
            EnableAction(action, iDelegateSetEnableResampler, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetEnableSpeaker is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetEnableSpeaker must be overridden if this is called.</remarks>
        protected void EnableActionSetEnableSpeaker()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetEnableSpeaker");
            action.AddInputParameter(new ParameterBool("EnableSpeaker"));
            iDelegateSetEnableSpeaker = new ActionDelegate(DoSetEnableSpeaker);
            EnableAction(action, iDelegateSetEnableSpeaker, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetEnableEqualizer is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetEnableEqualizer must be overridden if this is called.</remarks>
        protected void EnableActionSetEnableEqualizer()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetEnableEqualizer");
            action.AddInputParameter(new ParameterBool("EnableEqualizer"));
            iDelegateSetEnableEqualizer = new ActionDelegate(DoSetEnableEqualizer);
            EnableAction(action, iDelegateSetEnableEqualizer, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetEnableDirac is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetEnableDirac must be overridden if this is called.</remarks>
        protected void EnableActionSetEnableDirac()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetEnableDirac");
            action.AddInputParameter(new ParameterBool("EnableDirac"));
            iDelegateSetEnableDirac = new ActionDelegate(DoSetEnableDirac);
            EnableAction(action, iDelegateSetEnableDirac, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// LogIn action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// LogIn action for the owning device.
        ///
        /// Must be implemented iff EnableActionLogIn was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceName"></param>
        /// <param name="aMessageIn"></param>
        /// <param name="aMessageOut"></param>
        protected virtual void LogIn(IDvInvocation aInvocation, string aServiceName, string aMessageIn, out string aMessageOut)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// LogOut action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// LogOut action for the owning device.
        ///
        /// Must be implemented iff EnableActionLogOut was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceName"></param>
        protected virtual void LogOut(IDvInvocation aInvocation, string aServiceName)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// CancelLogIn action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// CancelLogIn action for the owning device.
        ///
        /// Must be implemented iff EnableActionCancelLogIn was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceName"></param>
        protected virtual void CancelLogIn(IDvInvocation aInvocation, string aServiceName)
        {
            throw (new ActionDisabledError());
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

        /// <summary>
        /// GetFilterMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetFilterMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetFilterMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aFilterMode"></param>
        /// <param name="aFilterModeList"></param>
        protected virtual void GetFilterMode(IDvInvocation aInvocation, out string aFilterMode, out string aFilterModeList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetFilterMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetFilterMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetFilterMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aFilterMode"></param>
        protected virtual void SetFilterMode(IDvInvocation aInvocation, string aFilterMode)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetSourceVisible action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetSourceVisible action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetSourceVisible was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSourceName"></param>
        /// <param name="aVisible"></param>
        protected virtual void SetSourceVisible(IDvInvocation aInvocation, string aSourceName, bool aVisible)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetSourceVisible action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetSourceVisible action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetSourceVisible was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aVisibleInfo"></param>
        protected virtual void GetSourceVisible(IDvInvocation aInvocation, out string aVisibleInfo)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetLEDMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetLEDMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetLEDMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aLEDMode"></param>
        protected virtual void SetLEDMode(IDvInvocation aInvocation, string aLEDMode)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetLEDMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetLEDMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetLEDMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aLEDMode"></param>
        /// <param name="aLEDModeList"></param>
        protected virtual void GetLEDMode(IDvInvocation aInvocation, out string aLEDMode, out string aLEDModeList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetKeyMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetKeyMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetKeyMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aKeyName"></param>
        /// <param name="aKeyMode"></param>
        protected virtual void SetKeyMode(IDvInvocation aInvocation, string aKeyName, string aKeyMode)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetKeyMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetKeyMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetKeyMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSideKeyMode"></param>
        /// <param name="aMiddleKeyMode"></param>
        /// <param name="aKeyModeList"></param>
        protected virtual void GetKeyMode(IDvInvocation aInvocation, out string aSideKeyMode, out string aMiddleKeyMode, out string aKeyModeList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetBrightness action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetBrightness action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetBrightness was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aBrightness"></param>
        protected virtual void SetBrightness(IDvInvocation aInvocation, string aBrightness)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetBrightness action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetBrightness action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetBrightness was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aBrightness"></param>
        /// <param name="aList"></param>
        protected virtual void GetBrightness(IDvInvocation aInvocation, out string aBrightness, out string aList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetDisplayMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetDisplayMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetDisplayMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDisplayMode"></param>
        protected virtual void SetDisplayMode(IDvInvocation aInvocation, string aDisplayMode)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetDisplayMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDisplayMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDisplayMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDisplayMode"></param>
        /// <param name="aDisplayModeList"></param>
        protected virtual void GetDisplayMode(IDvInvocation aInvocation, out string aDisplayMode, out string aDisplayModeList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetDACPhase action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDACPhase action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDACPhase was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aPhase"></param>
        protected virtual void GetDACPhase(IDvInvocation aInvocation, out uint aPhase)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetDACPhase action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetDACPhase action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetDACPhase was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aPhase"></param>
        protected virtual void SetDACPhase(IDvInvocation aInvocation, uint aPhase)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetDACBalance action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDACBalance action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDACBalance was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aBalance"></param>
        protected virtual void GetDACBalance(IDvInvocation aInvocation, out uint aBalance)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetDACBalance action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetDACBalance action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetDACBalance was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aBalance"></param>
        protected virtual void SetDACBalance(IDvInvocation aInvocation, uint aBalance)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetEnableResampler action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetEnableResampler action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetEnableResampler was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aEnableResampler"></param>
        protected virtual void SetEnableResampler(IDvInvocation aInvocation, bool aEnableResampler)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetEnableSpeaker action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetEnableSpeaker action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetEnableSpeaker was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aEnableSpeaker"></param>
        protected virtual void SetEnableSpeaker(IDvInvocation aInvocation, bool aEnableSpeaker)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetEnableEqualizer action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetEnableEqualizer action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetEnableEqualizer was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aEnableEqualizer"></param>
        protected virtual void SetEnableEqualizer(IDvInvocation aInvocation, bool aEnableEqualizer)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetEnableDirac action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetEnableDirac action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetEnableDirac was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aEnableDirac"></param>
        protected virtual void SetEnableDirac(IDvInvocation aInvocation, bool aEnableDirac)
        {
            throw (new ActionDisabledError());
        }

        private static int DoLogIn(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceName;
            string messageIn;
            string messageOut;
            try
            {
                invocation.ReadStart();
                serviceName = invocation.ReadString("ServiceName");
                messageIn = invocation.ReadString("MessageIn");
                invocation.ReadEnd();
                self.LogIn(invocation, serviceName, messageIn, out messageOut);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "LogIn");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "LogIn" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "LogIn" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("MessageOut", messageOut);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "LogIn" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoLogOut(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceName;
            try
            {
                invocation.ReadStart();
                serviceName = invocation.ReadString("ServiceName");
                invocation.ReadEnd();
                self.LogOut(invocation, serviceName);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "LogOut");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "LogOut" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "LogOut" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "LogOut" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoCancelLogIn(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceName;
            try
            {
                invocation.ReadStart();
                serviceName = invocation.ReadString("ServiceName");
                invocation.ReadEnd();
                self.CancelLogIn(invocation, serviceName);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "CancelLogIn");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "CancelLogIn" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "CancelLogIn" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "CancelLogIn" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "IsAlive" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "IsAlive" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "IsAlive" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Update" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Update" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Update" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Active" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Active" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Active" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetActiveStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetActiveStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetActiveStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "CheckUpdate" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "CheckUpdate" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "CheckUpdate" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ResetDisplay" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ResetDisplay" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ResetDisplay" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetHardWareInfo" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetHardWareInfo" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetHardWareInfo" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetRoomName" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetRoomName" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetRoomName" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetVolumeControl" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetVolumeControl" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetVolumeControl" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetVolumeControl" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetVolumeControl" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetVolumeControl" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetWaitingTime" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetWaitingTime" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetWaitingTime" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetWaitingTime" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetWaitingTime" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetWaitingTime" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetOutChannel" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetOutChannel" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetOutChannel" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetOutChannel" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetOutChannel" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetOutChannel" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetUpnpType" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetUpnpType" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetUpnpType" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetUpnpType" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetUpnpType" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetUpnpType" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetDsdNativeStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDsdNativeStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDsdNativeStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetDsdNativeStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDsdNativeStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDsdNativeStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetPasswordProtect" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetPasswordProtect" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetPasswordProtect" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetPasswordProtect" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetPasswordProtect" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetPasswordProtect" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetUpdateInfo" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetUpdateInfo" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetUpdateInfo" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetWirelessList" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetWirelessList" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetWirelessList" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetIpAddress" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetIpAddress" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetIpAddress" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetNetWork" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetNetWork" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetNetWork" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetNetInterface" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetNetInterface" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetNetInterface" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetHaltStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetHaltStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetHaltStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetHaltStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetHaltStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetHaltStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetFilterMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string filterMode;
            string filterModeList;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetFilterMode(invocation, out filterMode, out filterModeList);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetFilterMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetFilterMode" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetFilterMode" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("FilterMode", filterMode);
                invocation.WriteString("FilterModeList", filterModeList);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetFilterMode" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetFilterMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string filterMode;
            try
            {
                invocation.ReadStart();
                filterMode = invocation.ReadString("FilterMode");
                invocation.ReadEnd();
                self.SetFilterMode(invocation, filterMode);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetFilterMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetFilterMode" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetFilterMode" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetFilterMode" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetSourceVisible(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string sourceName;
            bool visible;
            try
            {
                invocation.ReadStart();
                sourceName = invocation.ReadString("SourceName");
                visible = invocation.ReadBool("Visible");
                invocation.ReadEnd();
                self.SetSourceVisible(invocation, sourceName, visible);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetSourceVisible");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetSourceVisible" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetSourceVisible" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetSourceVisible" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetSourceVisible(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string visibleInfo;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetSourceVisible(invocation, out visibleInfo);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetSourceVisible");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetSourceVisible" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSourceVisible" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("VisibleInfo", visibleInfo);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSourceVisible" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetLEDMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string lEDMode;
            try
            {
                invocation.ReadStart();
                lEDMode = invocation.ReadString("LEDMode");
                invocation.ReadEnd();
                self.SetLEDMode(invocation, lEDMode);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetLEDMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetLEDMode" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetLEDMode" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetLEDMode" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetLEDMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string lEDMode;
            string lEDModeList;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetLEDMode(invocation, out lEDMode, out lEDModeList);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetLEDMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetLEDMode" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetLEDMode" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("LEDMode", lEDMode);
                invocation.WriteString("LEDModeList", lEDModeList);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetLEDMode" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetKeyMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string keyName;
            string keyMode;
            try
            {
                invocation.ReadStart();
                keyName = invocation.ReadString("KeyName");
                keyMode = invocation.ReadString("KeyMode");
                invocation.ReadEnd();
                self.SetKeyMode(invocation, keyName, keyMode);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetKeyMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetKeyMode" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetKeyMode" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetKeyMode" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetKeyMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string sideKeyMode;
            string middleKeyMode;
            string keyModeList;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetKeyMode(invocation, out sideKeyMode, out middleKeyMode, out keyModeList);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetKeyMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetKeyMode" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetKeyMode" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("SideKeyMode", sideKeyMode);
                invocation.WriteString("MiddleKeyMode", middleKeyMode);
                invocation.WriteString("KeyModeList", keyModeList);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetKeyMode" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetBrightness(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string brightness;
            try
            {
                invocation.ReadStart();
                brightness = invocation.ReadString("Brightness");
                invocation.ReadEnd();
                self.SetBrightness(invocation, brightness);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetBrightness");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetBrightness" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetBrightness" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetBrightness" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetBrightness(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string brightness;
            string list;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetBrightness(invocation, out brightness, out list);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetBrightness");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetBrightness" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetBrightness" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Brightness", brightness);
                invocation.WriteString("List", list);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetBrightness" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetDisplayMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string displayMode;
            try
            {
                invocation.ReadStart();
                displayMode = invocation.ReadString("DisplayMode");
                invocation.ReadEnd();
                self.SetDisplayMode(invocation, displayMode);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetDisplayMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetDisplayMode" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDisplayMode" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDisplayMode" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetDisplayMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string displayMode;
            string displayModeList;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDisplayMode(invocation, out displayMode, out displayModeList);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDisplayMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetDisplayMode" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDisplayMode" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("DisplayMode", displayMode);
                invocation.WriteString("DisplayModeList", displayModeList);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDisplayMode" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetDACPhase(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint phase;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDACPhase(invocation, out phase);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDACPhase");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetDACPhase" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDACPhase" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Phase", phase);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDACPhase" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetDACPhase(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint phase;
            try
            {
                invocation.ReadStart();
                phase = invocation.ReadUint("Phase");
                invocation.ReadEnd();
                self.SetDACPhase(invocation, phase);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetDACPhase");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetDACPhase" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDACPhase" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDACPhase" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetDACBalance(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint balance;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDACBalance(invocation, out balance);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDACBalance");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetDACBalance" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDACBalance" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Balance", balance);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDACBalance" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetDACBalance(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint balance;
            try
            {
                invocation.ReadStart();
                balance = invocation.ReadUint("Balance");
                invocation.ReadEnd();
                self.SetDACBalance(invocation, balance);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetDACBalance");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetDACBalance" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDACBalance" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDACBalance" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetEnableResampler(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool enableResampler;
            try
            {
                invocation.ReadStart();
                enableResampler = invocation.ReadBool("EnableResampler");
                invocation.ReadEnd();
                self.SetEnableResampler(invocation, enableResampler);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetEnableResampler");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetEnableResampler" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetEnableResampler" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetEnableResampler" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetEnableSpeaker(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool enableSpeaker;
            try
            {
                invocation.ReadStart();
                enableSpeaker = invocation.ReadBool("EnableSpeaker");
                invocation.ReadEnd();
                self.SetEnableSpeaker(invocation, enableSpeaker);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetEnableSpeaker");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetEnableSpeaker" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetEnableSpeaker" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetEnableSpeaker" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetEnableEqualizer(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool enableEqualizer;
            try
            {
                invocation.ReadStart();
                enableEqualizer = invocation.ReadBool("EnableEqualizer");
                invocation.ReadEnd();
                self.SetEnableEqualizer(invocation, enableEqualizer);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetEnableEqualizer");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetEnableEqualizer" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetEnableEqualizer" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetEnableEqualizer" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetEnableDirac(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgHardwareConfig1 self = (DvProviderAvOpenhomeOrgHardwareConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool enableDirac;
            try
            {
                invocation.ReadStart();
                enableDirac = invocation.ReadBool("EnableDirac");
                invocation.ReadEnd();
                self.SetEnableDirac(invocation, enableDirac);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetEnableDirac");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetEnableDirac" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetEnableDirac" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetEnableDirac" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
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

