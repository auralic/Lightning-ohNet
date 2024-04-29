using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgWebDeviceConfig1 : IDisposable
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
        /// Set the value of the DeviceConfig property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyDeviceConfig(string aValue);

        /// <summary>
        /// Get a copy of the value of the DeviceConfig property
        /// </summary>
        /// <returns>Value of the DeviceConfig property.</param>
        string PropertyDeviceConfig();

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
    }
    /// <summary>
    /// Provider for the av.openhome.org:WebDeviceConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgWebDeviceConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgWebDeviceConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetDeviceConfig;
        private ActionDelegate iDelegateSetDeviceConfig;
        private ActionDelegate iDelegateGetWiFiList;
        private ActionDelegate iDelegateSetTimeZone;
        private ActionDelegate iDelegateGetServiceLocation;
        private PropertyBool iPropertyAlive;
        private PropertyString iPropertyDeviceConfig;
        private PropertyUint iPropertyCurrentAction;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgWebDeviceConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "WebDeviceConfig", 1)
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
        /// Enable the DeviceConfig property.
        /// </summary>
        public void EnablePropertyDeviceConfig()
        {
            List<String> allowedValues = new List<String>();
            iPropertyDeviceConfig = new PropertyString(new ParameterString("DeviceConfig", allowedValues));
            AddProperty(iPropertyDeviceConfig);
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
        /// Set the value of the DeviceConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDeviceConfig has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyDeviceConfig(string aValue)
        {
            if (iPropertyDeviceConfig == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyDeviceConfig, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the DeviceConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDeviceConfig has previously been called.</remarks>
        /// <returns>Value of the DeviceConfig property.</returns>
        public string PropertyDeviceConfig()
        {
            if (iPropertyDeviceConfig == null)
                throw new PropertyDisabledError();
            return iPropertyDeviceConfig.Value();
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
        /// Signal that the action GetDeviceConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDeviceConfig must be overridden if this is called.</remarks>
        protected void EnableActionGetDeviceConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDeviceConfig");
            action.AddOutputParameter(new ParameterRelated("DeviceConfig", iPropertyDeviceConfig));
            iDelegateGetDeviceConfig = new ActionDelegate(DoGetDeviceConfig);
            EnableAction(action, iDelegateGetDeviceConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetDeviceConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetDeviceConfig must be overridden if this is called.</remarks>
        protected void EnableActionSetDeviceConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetDeviceConfig");
            action.AddInputParameter(new ParameterRelated("DeviceConfig", iPropertyDeviceConfig));
            iDelegateSetDeviceConfig = new ActionDelegate(DoSetDeviceConfig);
            EnableAction(action, iDelegateSetDeviceConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetWiFiList is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetWiFiList must be overridden if this is called.</remarks>
        protected void EnableActionGetWiFiList()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetWiFiList");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("WiFiList", allowedValues));
            iDelegateGetWiFiList = new ActionDelegate(DoGetWiFiList);
            EnableAction(action, iDelegateGetWiFiList, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetTimeZone is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetTimeZone must be overridden if this is called.</remarks>
        protected void EnableActionSetTimeZone()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetTimeZone");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("TimeZone", allowedValues));
            action.AddInputParameter(new ParameterString("CurrentTime", allowedValues));
            action.AddInputParameter(new ParameterString("TimeStamp", allowedValues));
            iDelegateSetTimeZone = new ActionDelegate(DoSetTimeZone);
            EnableAction(action, iDelegateSetTimeZone, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetServiceLocation is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetServiceLocation must be overridden if this is called.</remarks>
        protected void EnableActionGetServiceLocation()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetServiceLocation");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("ServiceLoaction", allowedValues));
            iDelegateGetServiceLocation = new ActionDelegate(DoGetServiceLocation);
            EnableAction(action, iDelegateGetServiceLocation, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetDeviceConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDeviceConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDeviceConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDeviceConfig"></param>
        protected virtual void GetDeviceConfig(IDvInvocation aInvocation, out string aDeviceConfig)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetDeviceConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetDeviceConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetDeviceConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDeviceConfig"></param>
        protected virtual void SetDeviceConfig(IDvInvocation aInvocation, string aDeviceConfig)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetWiFiList action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetWiFiList action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetWiFiList was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aWiFiList"></param>
        protected virtual void GetWiFiList(IDvInvocation aInvocation, out string aWiFiList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetTimeZone action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetTimeZone action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetTimeZone was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aTimeZone"></param>
        /// <param name="aCurrentTime"></param>
        /// <param name="aTimeStamp"></param>
        protected virtual void SetTimeZone(IDvInvocation aInvocation, string aTimeZone, string aCurrentTime, string aTimeStamp)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetServiceLocation action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetServiceLocation action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetServiceLocation was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceLoaction"></param>
        protected virtual void GetServiceLocation(IDvInvocation aInvocation, out string aServiceLoaction)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetDeviceConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebDeviceConfig1 self = (DvProviderAvOpenhomeOrgWebDeviceConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string deviceConfig;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDeviceConfig(invocation, out deviceConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDeviceConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetDeviceConfig" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDeviceConfig" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("DeviceConfig", deviceConfig);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDeviceConfig" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetDeviceConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebDeviceConfig1 self = (DvProviderAvOpenhomeOrgWebDeviceConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string deviceConfig;
            try
            {
                invocation.ReadStart();
                deviceConfig = invocation.ReadString("DeviceConfig");
                invocation.ReadEnd();
                self.SetDeviceConfig(invocation, deviceConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetDeviceConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetDeviceConfig" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDeviceConfig" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDeviceConfig" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetWiFiList(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebDeviceConfig1 self = (DvProviderAvOpenhomeOrgWebDeviceConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string wiFiList;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetWiFiList(invocation, out wiFiList);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetWiFiList");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetWiFiList" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetWiFiList" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("WiFiList", wiFiList);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetWiFiList" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetTimeZone(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebDeviceConfig1 self = (DvProviderAvOpenhomeOrgWebDeviceConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string timeZone;
            string currentTime;
            string timeStamp;
            try
            {
                invocation.ReadStart();
                timeZone = invocation.ReadString("TimeZone");
                currentTime = invocation.ReadString("CurrentTime");
                timeStamp = invocation.ReadString("TimeStamp");
                invocation.ReadEnd();
                self.SetTimeZone(invocation, timeZone, currentTime, timeStamp);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetTimeZone");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetTimeZone" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetTimeZone" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetTimeZone" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetServiceLocation(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebDeviceConfig1 self = (DvProviderAvOpenhomeOrgWebDeviceConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceLoaction;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetServiceLocation(invocation, out serviceLoaction);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetServiceLocation");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetServiceLocation" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetServiceLocation" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ServiceLoaction", serviceLoaction);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetServiceLocation" });
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

