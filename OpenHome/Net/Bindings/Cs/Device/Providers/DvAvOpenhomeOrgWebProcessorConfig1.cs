using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgWebProcessorConfig1 : IDisposable
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
        /// Set the value of the ProcessorConfig property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyProcessorConfig(string aValue);

        /// <summary>
        /// Get a copy of the value of the ProcessorConfig property
        /// </summary>
        /// <returns>Value of the ProcessorConfig property.</param>
        string PropertyProcessorConfig();
    }
    /// <summary>
    /// Provider for the av.openhome.org:WebProcessorConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgWebProcessorConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgWebProcessorConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetProcessorConfig;
        private ActionDelegate iDelegateSetProcessorConfig;
        private PropertyBool iPropertyAlive;
        private PropertyString iPropertyProcessorConfig;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgWebProcessorConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "WebProcessorConfig", 1)
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
        /// Enable the ProcessorConfig property.
        /// </summary>
        public void EnablePropertyProcessorConfig()
        {
            List<String> allowedValues = new List<String>();
            iPropertyProcessorConfig = new PropertyString(new ParameterString("ProcessorConfig", allowedValues));
            AddProperty(iPropertyProcessorConfig);
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
        /// Set the value of the ProcessorConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyProcessorConfig has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyProcessorConfig(string aValue)
        {
            if (iPropertyProcessorConfig == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyProcessorConfig, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ProcessorConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyProcessorConfig has previously been called.</remarks>
        /// <returns>Value of the ProcessorConfig property.</returns>
        public string PropertyProcessorConfig()
        {
            if (iPropertyProcessorConfig == null)
                throw new PropertyDisabledError();
            return iPropertyProcessorConfig.Value();
        }

        /// <summary>
        /// Signal that the action GetProcessorConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetProcessorConfig must be overridden if this is called.</remarks>
        protected void EnableActionGetProcessorConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetProcessorConfig");
            action.AddOutputParameter(new ParameterRelated("ProcessorConfig", iPropertyProcessorConfig));
            iDelegateGetProcessorConfig = new ActionDelegate(DoGetProcessorConfig);
            EnableAction(action, iDelegateGetProcessorConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetProcessorConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetProcessorConfig must be overridden if this is called.</remarks>
        protected void EnableActionSetProcessorConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetProcessorConfig");
            action.AddInputParameter(new ParameterRelated("ProcessorConfig", iPropertyProcessorConfig));
            iDelegateSetProcessorConfig = new ActionDelegate(DoSetProcessorConfig);
            EnableAction(action, iDelegateSetProcessorConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetProcessorConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetProcessorConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetProcessorConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aProcessorConfig"></param>
        protected virtual void GetProcessorConfig(IDvInvocation aInvocation, out string aProcessorConfig)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetProcessorConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetProcessorConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetProcessorConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aProcessorConfig"></param>
        protected virtual void SetProcessorConfig(IDvInvocation aInvocation, string aProcessorConfig)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetProcessorConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebProcessorConfig1 self = (DvProviderAvOpenhomeOrgWebProcessorConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string processorConfig;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetProcessorConfig(invocation, out processorConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetProcessorConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetProcessorConfig" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetProcessorConfig" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ProcessorConfig", processorConfig);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetProcessorConfig" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetProcessorConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebProcessorConfig1 self = (DvProviderAvOpenhomeOrgWebProcessorConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string processorConfig;
            try
            {
                invocation.ReadStart();
                processorConfig = invocation.ReadString("ProcessorConfig");
                invocation.ReadEnd();
                self.SetProcessorConfig(invocation, processorConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetProcessorConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetProcessorConfig" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetProcessorConfig" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetProcessorConfig" });
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

