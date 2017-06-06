using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgRendererConfig1 : IDisposable
    {

        /// <summary>
        /// Set the value of the RendererConfig property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyRendererConfig(string aValue);

        /// <summary>
        /// Get a copy of the value of the RendererConfig property
        /// </summary>
        /// <returns>Value of the RendererConfig property.</param>
        string PropertyRendererConfig();

        /// <summary>
        /// Set the value of the ResamplerConfig property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyResamplerConfig(string aValue);

        /// <summary>
        /// Get a copy of the value of the ResamplerConfig property
        /// </summary>
        /// <returns>Value of the ResamplerConfig property.</param>
        string PropertyResamplerConfig();

        /// <summary>
        /// Set the value of the HardwareConfig property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyHardwareConfig(string aValue);

        /// <summary>
        /// Get a copy of the value of the HardwareConfig property
        /// </summary>
        /// <returns>Value of the HardwareConfig property.</param>
        string PropertyHardwareConfig();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:RendererConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgRendererConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgRendererConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetRendererConfig;
        private ActionDelegate iDelegateSetRendererConfig;
        private ActionDelegate iDelegateGetResamplerConfig;
        private ActionDelegate iDelegateSetResamplerConfig;
        private ActionDelegate iDelegateGetHardwareConfig;
        private ActionDelegate iDelegateSetHardwareConfig;
        private ActionDelegate iDelegateGetWiFiList;
        private ActionDelegate iDelegateSetTimeZone;
        private PropertyString iPropertyRendererConfig;
        private PropertyString iPropertyResamplerConfig;
        private PropertyString iPropertyHardwareConfig;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgRendererConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "RendererConfig", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the RendererConfig property.
        /// </summary>
        public void EnablePropertyRendererConfig()
        {
            List<String> allowedValues = new List<String>();
            iPropertyRendererConfig = new PropertyString(new ParameterString("RendererConfig", allowedValues));
            AddProperty(iPropertyRendererConfig);
        }

        /// <summary>
        /// Enable the ResamplerConfig property.
        /// </summary>
        public void EnablePropertyResamplerConfig()
        {
            List<String> allowedValues = new List<String>();
            iPropertyResamplerConfig = new PropertyString(new ParameterString("ResamplerConfig", allowedValues));
            AddProperty(iPropertyResamplerConfig);
        }

        /// <summary>
        /// Enable the HardwareConfig property.
        /// </summary>
        public void EnablePropertyHardwareConfig()
        {
            List<String> allowedValues = new List<String>();
            iPropertyHardwareConfig = new PropertyString(new ParameterString("HardwareConfig", allowedValues));
            AddProperty(iPropertyHardwareConfig);
        }

        /// <summary>
        /// Set the value of the RendererConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRendererConfig has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyRendererConfig(string aValue)
        {
            if (iPropertyRendererConfig == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyRendererConfig, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the RendererConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRendererConfig has previously been called.</remarks>
        /// <returns>Value of the RendererConfig property.</returns>
        public string PropertyRendererConfig()
        {
            if (iPropertyRendererConfig == null)
                throw new PropertyDisabledError();
            return iPropertyRendererConfig.Value();
        }

        /// <summary>
        /// Set the value of the ResamplerConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyResamplerConfig has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyResamplerConfig(string aValue)
        {
            if (iPropertyResamplerConfig == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyResamplerConfig, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ResamplerConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyResamplerConfig has previously been called.</remarks>
        /// <returns>Value of the ResamplerConfig property.</returns>
        public string PropertyResamplerConfig()
        {
            if (iPropertyResamplerConfig == null)
                throw new PropertyDisabledError();
            return iPropertyResamplerConfig.Value();
        }

        /// <summary>
        /// Set the value of the HardwareConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyHardwareConfig has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyHardwareConfig(string aValue)
        {
            if (iPropertyHardwareConfig == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyHardwareConfig, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the HardwareConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyHardwareConfig has previously been called.</remarks>
        /// <returns>Value of the HardwareConfig property.</returns>
        public string PropertyHardwareConfig()
        {
            if (iPropertyHardwareConfig == null)
                throw new PropertyDisabledError();
            return iPropertyHardwareConfig.Value();
        }

        /// <summary>
        /// Signal that the action GetRendererConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetRendererConfig must be overridden if this is called.</remarks>
        protected void EnableActionGetRendererConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetRendererConfig");
            action.AddOutputParameter(new ParameterRelated("RendererConfig", iPropertyRendererConfig));
            iDelegateGetRendererConfig = new ActionDelegate(DoGetRendererConfig);
            EnableAction(action, iDelegateGetRendererConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetRendererConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetRendererConfig must be overridden if this is called.</remarks>
        protected void EnableActionSetRendererConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetRendererConfig");
            action.AddInputParameter(new ParameterRelated("RendererConfig", iPropertyRendererConfig));
            iDelegateSetRendererConfig = new ActionDelegate(DoSetRendererConfig);
            EnableAction(action, iDelegateSetRendererConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetResamplerConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetResamplerConfig must be overridden if this is called.</remarks>
        protected void EnableActionGetResamplerConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetResamplerConfig");
            action.AddOutputParameter(new ParameterRelated("ResamplerConfig", iPropertyResamplerConfig));
            iDelegateGetResamplerConfig = new ActionDelegate(DoGetResamplerConfig);
            EnableAction(action, iDelegateGetResamplerConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetResamplerConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetResamplerConfig must be overridden if this is called.</remarks>
        protected void EnableActionSetResamplerConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetResamplerConfig");
            action.AddInputParameter(new ParameterRelated("ResamplerConfig", iPropertyResamplerConfig));
            iDelegateSetResamplerConfig = new ActionDelegate(DoSetResamplerConfig);
            EnableAction(action, iDelegateSetResamplerConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetHardwareConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetHardwareConfig must be overridden if this is called.</remarks>
        protected void EnableActionGetHardwareConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetHardwareConfig");
            action.AddOutputParameter(new ParameterRelated("HardwareConfig", iPropertyHardwareConfig));
            iDelegateGetHardwareConfig = new ActionDelegate(DoGetHardwareConfig);
            EnableAction(action, iDelegateGetHardwareConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetHardwareConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetHardwareConfig must be overridden if this is called.</remarks>
        protected void EnableActionSetHardwareConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetHardwareConfig");
            action.AddInputParameter(new ParameterRelated("HardwareConfig", iPropertyHardwareConfig));
            iDelegateSetHardwareConfig = new ActionDelegate(DoSetHardwareConfig);
            EnableAction(action, iDelegateSetHardwareConfig, GCHandle.ToIntPtr(iGch));
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
        /// GetRendererConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetRendererConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetRendererConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aRendererConfig"></param>
        protected virtual void GetRendererConfig(IDvInvocation aInvocation, out string aRendererConfig)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetRendererConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetRendererConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetRendererConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aRendererConfig"></param>
        protected virtual void SetRendererConfig(IDvInvocation aInvocation, string aRendererConfig)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetResamplerConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetResamplerConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetResamplerConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aResamplerConfig"></param>
        protected virtual void GetResamplerConfig(IDvInvocation aInvocation, out string aResamplerConfig)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetResamplerConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetResamplerConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetResamplerConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aResamplerConfig"></param>
        protected virtual void SetResamplerConfig(IDvInvocation aInvocation, string aResamplerConfig)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetHardwareConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetHardwareConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetHardwareConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aHardwareConfig"></param>
        protected virtual void GetHardwareConfig(IDvInvocation aInvocation, out string aHardwareConfig)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetHardwareConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetHardwareConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetHardwareConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aHardwareConfig"></param>
        protected virtual void SetHardwareConfig(IDvInvocation aInvocation, string aHardwareConfig)
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

        private static int DoGetRendererConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRendererConfig1 self = (DvProviderAvOpenhomeOrgRendererConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string rendererConfig;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetRendererConfig(invocation, out rendererConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetRendererConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetRendererConfig"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetRendererConfig", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("RendererConfig", rendererConfig);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetRendererConfig", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetRendererConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRendererConfig1 self = (DvProviderAvOpenhomeOrgRendererConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string rendererConfig;
            try
            {
                invocation.ReadStart();
                rendererConfig = invocation.ReadString("RendererConfig");
                invocation.ReadEnd();
                self.SetRendererConfig(invocation, rendererConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetRendererConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetRendererConfig"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetRendererConfig", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetRendererConfig", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetResamplerConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRendererConfig1 self = (DvProviderAvOpenhomeOrgRendererConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string resamplerConfig;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetResamplerConfig(invocation, out resamplerConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetResamplerConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetResamplerConfig"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetResamplerConfig", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ResamplerConfig", resamplerConfig);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetResamplerConfig", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetResamplerConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRendererConfig1 self = (DvProviderAvOpenhomeOrgRendererConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string resamplerConfig;
            try
            {
                invocation.ReadStart();
                resamplerConfig = invocation.ReadString("ResamplerConfig");
                invocation.ReadEnd();
                self.SetResamplerConfig(invocation, resamplerConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetResamplerConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetResamplerConfig"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetResamplerConfig", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetResamplerConfig", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetHardwareConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRendererConfig1 self = (DvProviderAvOpenhomeOrgRendererConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string hardwareConfig;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetHardwareConfig(invocation, out hardwareConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetHardwareConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetHardwareConfig"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetHardwareConfig", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("HardwareConfig", hardwareConfig);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetHardwareConfig", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetHardwareConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRendererConfig1 self = (DvProviderAvOpenhomeOrgRendererConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string hardwareConfig;
            try
            {
                invocation.ReadStart();
                hardwareConfig = invocation.ReadString("HardwareConfig");
                invocation.ReadEnd();
                self.SetHardwareConfig(invocation, hardwareConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetHardwareConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetHardwareConfig"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetHardwareConfig", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetHardwareConfig", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetWiFiList(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRendererConfig1 self = (DvProviderAvOpenhomeOrgRendererConfig1)gch.Target;
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetWiFiList"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetWiFiList", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetWiFiList", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetTimeZone(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRendererConfig1 self = (DvProviderAvOpenhomeOrgRendererConfig1)gch.Target;
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetTimeZone"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetTimeZone", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetTimeZone", e.TargetSite.Name);
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

