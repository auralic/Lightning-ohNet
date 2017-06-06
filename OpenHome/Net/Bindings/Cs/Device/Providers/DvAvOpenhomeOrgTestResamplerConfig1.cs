using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgTestResamplerConfig1 : IDisposable
    {

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
    /// Provider for the av.openhome.org:TestResamplerConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgTestResamplerConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgTestResamplerConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateSetResamplerConfig;
        private ActionDelegate iDelegateGetResamplerConfig;
        private ActionDelegate iDelegateSetPCMAutoDetect;
        private ActionDelegate iDelegateGetPCMAutoDetect;
        private ActionDelegate iDelegateSetDSDtoPCM;
        private ActionDelegate iDelegateGetDSDtoPCM;
        private PropertyUint iPropertyCurrentAction;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgTestResamplerConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "TestResamplerConfig", 1)
        {
            iGch = GCHandle.Alloc(this);
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
        /// Signal that the action SetResamplerConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetResamplerConfig must be overridden if this is called.</remarks>
        protected void EnableActionSetResamplerConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetResamplerConfig");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ResamplerConfig", allowedValues));
            iDelegateSetResamplerConfig = new ActionDelegate(DoSetResamplerConfig);
            EnableAction(action, iDelegateSetResamplerConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetResamplerConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetResamplerConfig must be overridden if this is called.</remarks>
        protected void EnableActionGetResamplerConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetResamplerConfig");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("ResamplerConfig", allowedValues));
            iDelegateGetResamplerConfig = new ActionDelegate(DoGetResamplerConfig);
            EnableAction(action, iDelegateGetResamplerConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetPCMAutoDetect is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetPCMAutoDetect must be overridden if this is called.</remarks>
        protected void EnableActionSetPCMAutoDetect()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetPCMAutoDetect");
            action.AddInputParameter(new ParameterBool("PCMAutoDetect"));
            iDelegateSetPCMAutoDetect = new ActionDelegate(DoSetPCMAutoDetect);
            EnableAction(action, iDelegateSetPCMAutoDetect, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetPCMAutoDetect is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetPCMAutoDetect must be overridden if this is called.</remarks>
        protected void EnableActionGetPCMAutoDetect()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetPCMAutoDetect");
            action.AddOutputParameter(new ParameterBool("PCMAutoDetect"));
            iDelegateGetPCMAutoDetect = new ActionDelegate(DoGetPCMAutoDetect);
            EnableAction(action, iDelegateGetPCMAutoDetect, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetDSDtoPCM is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetDSDtoPCM must be overridden if this is called.</remarks>
        protected void EnableActionSetDSDtoPCM()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetDSDtoPCM");
            action.AddInputParameter(new ParameterBool("DSDtoPCM"));
            iDelegateSetDSDtoPCM = new ActionDelegate(DoSetDSDtoPCM);
            EnableAction(action, iDelegateSetDSDtoPCM, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetDSDtoPCM is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDSDtoPCM must be overridden if this is called.</remarks>
        protected void EnableActionGetDSDtoPCM()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDSDtoPCM");
            action.AddOutputParameter(new ParameterBool("DSDtoPCM"));
            iDelegateGetDSDtoPCM = new ActionDelegate(DoGetDSDtoPCM);
            EnableAction(action, iDelegateGetDSDtoPCM, GCHandle.ToIntPtr(iGch));
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
        /// SetPCMAutoDetect action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetPCMAutoDetect action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetPCMAutoDetect was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aPCMAutoDetect"></param>
        protected virtual void SetPCMAutoDetect(IDvInvocation aInvocation, bool aPCMAutoDetect)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetPCMAutoDetect action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetPCMAutoDetect action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetPCMAutoDetect was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aPCMAutoDetect"></param>
        protected virtual void GetPCMAutoDetect(IDvInvocation aInvocation, out bool aPCMAutoDetect)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetDSDtoPCM action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetDSDtoPCM action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetDSDtoPCM was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDSDtoPCM"></param>
        protected virtual void SetDSDtoPCM(IDvInvocation aInvocation, bool aDSDtoPCM)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetDSDtoPCM action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDSDtoPCM action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDSDtoPCM was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDSDtoPCM"></param>
        protected virtual void GetDSDtoPCM(IDvInvocation aInvocation, out bool aDSDtoPCM)
        {
            throw (new ActionDisabledError());
        }

        private static int DoSetResamplerConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTestResamplerConfig1 self = (DvProviderAvOpenhomeOrgTestResamplerConfig1)gch.Target;
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

        private static int DoGetResamplerConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTestResamplerConfig1 self = (DvProviderAvOpenhomeOrgTestResamplerConfig1)gch.Target;
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

        private static int DoSetPCMAutoDetect(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTestResamplerConfig1 self = (DvProviderAvOpenhomeOrgTestResamplerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool pCMAutoDetect;
            try
            {
                invocation.ReadStart();
                pCMAutoDetect = invocation.ReadBool("PCMAutoDetect");
                invocation.ReadEnd();
                self.SetPCMAutoDetect(invocation, pCMAutoDetect);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetPCMAutoDetect");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetPCMAutoDetect"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetPCMAutoDetect", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetPCMAutoDetect", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetPCMAutoDetect(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTestResamplerConfig1 self = (DvProviderAvOpenhomeOrgTestResamplerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool pCMAutoDetect;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetPCMAutoDetect(invocation, out pCMAutoDetect);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetPCMAutoDetect");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetPCMAutoDetect"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetPCMAutoDetect", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("PCMAutoDetect", pCMAutoDetect);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetPCMAutoDetect", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetDSDtoPCM(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTestResamplerConfig1 self = (DvProviderAvOpenhomeOrgTestResamplerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool dSDtoPCM;
            try
            {
                invocation.ReadStart();
                dSDtoPCM = invocation.ReadBool("DSDtoPCM");
                invocation.ReadEnd();
                self.SetDSDtoPCM(invocation, dSDtoPCM);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetDSDtoPCM");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetDSDtoPCM"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetDSDtoPCM", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetDSDtoPCM", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetDSDtoPCM(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTestResamplerConfig1 self = (DvProviderAvOpenhomeOrgTestResamplerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool dSDtoPCM;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDSDtoPCM(invocation, out dSDtoPCM);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDSDtoPCM");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetDSDtoPCM"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDSDtoPCM", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("DSDtoPCM", dSDtoPCM);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDSDtoPCM", e.TargetSite.Name);
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

