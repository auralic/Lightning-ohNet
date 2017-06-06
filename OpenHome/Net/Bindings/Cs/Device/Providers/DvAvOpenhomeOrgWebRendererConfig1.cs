using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgWebRendererConfig1 : IDisposable
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
    /// Provider for the av.openhome.org:WebRendererConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgWebRendererConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgWebRendererConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetRendererConfig;
        private ActionDelegate iDelegateSetRendererConfig;
        private PropertyBool iPropertyAlive;
        private PropertyString iPropertyRendererConfig;
        private PropertyUint iPropertyCurrentAction;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgWebRendererConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "WebRendererConfig", 1)
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
        /// Enable the RendererConfig property.
        /// </summary>
        public void EnablePropertyRendererConfig()
        {
            List<String> allowedValues = new List<String>();
            iPropertyRendererConfig = new PropertyString(new ParameterString("RendererConfig", allowedValues));
            AddProperty(iPropertyRendererConfig);
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

        private static int DoGetRendererConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebRendererConfig1 self = (DvProviderAvOpenhomeOrgWebRendererConfig1)gch.Target;
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
            DvProviderAvOpenhomeOrgWebRendererConfig1 self = (DvProviderAvOpenhomeOrgWebRendererConfig1)gch.Target;
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

