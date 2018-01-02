using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgWebDACConfig1 : IDisposable
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
        /// Set the value of the DACConfig property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyDACConfig(string aValue);

        /// <summary>
        /// Get a copy of the value of the DACConfig property
        /// </summary>
        /// <returns>Value of the DACConfig property.</param>
        string PropertyDACConfig();

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
    /// Provider for the av.openhome.org:WebDACConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgWebDACConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgWebDACConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetDACConfig;
        private ActionDelegate iDelegateSetDACConfig;
        private PropertyBool iPropertyAlive;
        private PropertyString iPropertyDACConfig;
        private PropertyUint iPropertyCurrentAction;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgWebDACConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "WebDACConfig", 1)
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
        /// Enable the DACConfig property.
        /// </summary>
        public void EnablePropertyDACConfig()
        {
            List<String> allowedValues = new List<String>();
            iPropertyDACConfig = new PropertyString(new ParameterString("DACConfig", allowedValues));
            AddProperty(iPropertyDACConfig);
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
        /// Set the value of the DACConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDACConfig has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyDACConfig(string aValue)
        {
            if (iPropertyDACConfig == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyDACConfig, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the DACConfig property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDACConfig has previously been called.</remarks>
        /// <returns>Value of the DACConfig property.</returns>
        public string PropertyDACConfig()
        {
            if (iPropertyDACConfig == null)
                throw new PropertyDisabledError();
            return iPropertyDACConfig.Value();
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
        /// Signal that the action GetDACConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDACConfig must be overridden if this is called.</remarks>
        protected void EnableActionGetDACConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDACConfig");
            action.AddOutputParameter(new ParameterRelated("DACConfig", iPropertyDACConfig));
            iDelegateGetDACConfig = new ActionDelegate(DoGetDACConfig);
            EnableAction(action, iDelegateGetDACConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetDACConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetDACConfig must be overridden if this is called.</remarks>
        protected void EnableActionSetDACConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetDACConfig");
            action.AddInputParameter(new ParameterRelated("DACConfig", iPropertyDACConfig));
            iDelegateSetDACConfig = new ActionDelegate(DoSetDACConfig);
            EnableAction(action, iDelegateSetDACConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetDACConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDACConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDACConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDACConfig"></param>
        protected virtual void GetDACConfig(IDvInvocation aInvocation, out string aDACConfig)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetDACConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetDACConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetDACConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDACConfig"></param>
        protected virtual void SetDACConfig(IDvInvocation aInvocation, string aDACConfig)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetDACConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebDACConfig1 self = (DvProviderAvOpenhomeOrgWebDACConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string dACConfig;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDACConfig(invocation, out dACConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDACConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetDACConfig"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDACConfig", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("DACConfig", dACConfig);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDACConfig", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetDACConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebDACConfig1 self = (DvProviderAvOpenhomeOrgWebDACConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string dACConfig;
            try
            {
                invocation.ReadStart();
                dACConfig = invocation.ReadString("DACConfig");
                invocation.ReadEnd();
                self.SetDACConfig(invocation, dACConfig);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetDACConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetDACConfig"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetDACConfig", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetDACConfig", e.TargetSite.Name);
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

