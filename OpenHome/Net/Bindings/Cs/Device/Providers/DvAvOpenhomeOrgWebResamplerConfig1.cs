using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgWebResamplerConfig1 : IDisposable
    {

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
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:WebResamplerConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgWebResamplerConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgWebResamplerConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetResamplerConfig;
        private ActionDelegate iDelegateSetResamplerConfig;
        private PropertyString iPropertyResamplerConfig;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgWebResamplerConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "WebResamplerConfig", 1)
        {
            iGch = GCHandle.Alloc(this);
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

        private static int DoGetResamplerConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgWebResamplerConfig1 self = (DvProviderAvOpenhomeOrgWebResamplerConfig1)gch.Target;
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
            DvProviderAvOpenhomeOrgWebResamplerConfig1 self = (DvProviderAvOpenhomeOrgWebResamplerConfig1)gch.Target;
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

