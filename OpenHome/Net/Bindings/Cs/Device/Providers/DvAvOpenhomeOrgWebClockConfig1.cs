using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgWebClockConfig1 : IDisposable
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
        /// Set the value of the ClockConfig property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyClockConfig(string aValue);

        /// <summary>
        /// Get a copy of the value of the ClockConfig property
        /// </summary>
        /// <returns>Value of the ClockConfig property.</param>
        string PropertyClockConfig();
    }
    /// <summary>
    /// Provider for the av.openhome.org:WebClockConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgWebClockConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgWebClockConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetClockConfig;
        private ActionDelegate iDelegateSetClockConfig;
        private PropertyBool iPropertyAlive;
        private PropertyString iPropertyClockConfig;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgWebClockConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "WebClockConfig", 1)
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
        /// Enable the ClockConfig property.
        /// </summary>
        public void EnablePropertyClockConfig()
        {
            List<String> allowedValues = new List<String>();
            iPropertyClockConfig = new PropertyString(new ParameterString("ClockConfig", allowedValues));
            AddProperty(iPropertyClockConfig);
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
        /// Set the value of the ClockConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyClockConfig has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyClockConfig(string aValue)
        {
            if (iPropertyClockConfig == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyClockConfig, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ClockConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyClockConfig has previously been called.</remarks>
        /// <returns>Value of the ClockConfig property.</returns>
        public string PropertyClockConfig()
        {
            if (iPropertyClockConfig == null)
                throw new PropertyDisabledError();
            return iPropertyClockConfig.Value();
        }

        /// <summary>
        /// Signal that the action GetClockConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetClockConfig must be overridden if this is called.</remarks>
        protected void EnableActionGetClockConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetClockConfig");
            action.AddOutputParameter(new ParameterRelated("ClockConfig", iPropertyClockConfig));
            iDelegateGetClockConfig = new ActionDelegate(DoGetClockConfig);
            EnableAction(action, iDelegateGetClockConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetClockConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetClockConfig must be overridden if this is called.</remarks>
        protected void EnableActionSetClockConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetClockConfig");
            action.AddInputParameter(new ParameterRelated("ClockConfig", iPropertyClockConfig));
            iDelegateSetClockConfig = new ActionDelegate(DoSetClockConfig);
            EnableAction(action, iDelegateSetClockConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetClockConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetClockConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetClockConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aClockConfig"></param>
        protected virtual void GetClockConfig(IDvInvocation aInvocation, out string aClockConfig)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetClockConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetClockConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetClockConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aClockConfig"></param>
        protected virtual void SetClockConfig(IDvInvocation aInvocation, string aClockConfig)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetClockConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebClockConfig1 self = (DvProviderAvOpenhomeOrgWebClockConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string clockConfig;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetClockConfig(invocation, out clockConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetClockConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetClockConfig" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetClockConfig" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ClockConfig", clockConfig);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetClockConfig" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetClockConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebClockConfig1 self = (DvProviderAvOpenhomeOrgWebClockConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string clockConfig;
            try
            {
                invocation.ReadStart();
                clockConfig = invocation.ReadString("ClockConfig");
                invocation.ReadEnd();
                self.SetClockConfig(invocation, clockConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetClockConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetClockConfig" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetClockConfig" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetClockConfig" });
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

