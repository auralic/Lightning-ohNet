using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgDACConfig1 : IDisposable
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
    /// Provider for the av.openhome.org:DACConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgDACConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgDACConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetFilterMode;
        private ActionDelegate iDelegateSetFilterMode;
        private ActionDelegate iDelegateGetDACPhase;
        private ActionDelegate iDelegateSetDACPhase;
        private ActionDelegate iDelegateGetDACBalance;
        private ActionDelegate iDelegateSetDACBalance;
        private ActionDelegate iDelegateGetWaitingTime;
        private ActionDelegate iDelegateSetWaitingTime;
        private PropertyUint iPropertyCurrentAction;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgDACConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "DACConfig", 1)
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
        /// Signal that the action GetWaitingTime is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetWaitingTime must be overridden if this is called.</remarks>
        protected void EnableActionGetWaitingTime()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetWaitingTime");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("WaitingTime", allowedValues));
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
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("WaitingTime", allowedValues));
            iDelegateSetWaitingTime = new ActionDelegate(DoSetWaitingTime);
            EnableAction(action, iDelegateSetWaitingTime, GCHandle.ToIntPtr(iGch));
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

        private static int DoGetFilterMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDACConfig1 self = (DvProviderAvOpenhomeOrgDACConfig1)gch.Target;
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetFilterMode"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetFilterMode", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetFilterMode", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetFilterMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDACConfig1 self = (DvProviderAvOpenhomeOrgDACConfig1)gch.Target;
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetFilterMode"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetFilterMode", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetFilterMode", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetDACPhase(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDACConfig1 self = (DvProviderAvOpenhomeOrgDACConfig1)gch.Target;
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetDACPhase"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDACPhase", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDACPhase", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetDACPhase(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDACConfig1 self = (DvProviderAvOpenhomeOrgDACConfig1)gch.Target;
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetDACPhase"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetDACPhase", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetDACPhase", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetDACBalance(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDACConfig1 self = (DvProviderAvOpenhomeOrgDACConfig1)gch.Target;
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetDACBalance"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDACBalance", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDACBalance", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetDACBalance(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDACConfig1 self = (DvProviderAvOpenhomeOrgDACConfig1)gch.Target;
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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetDACBalance"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetDACBalance", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetDACBalance", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetWaitingTime(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDACConfig1 self = (DvProviderAvOpenhomeOrgDACConfig1)gch.Target;
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
            DvProviderAvOpenhomeOrgDACConfig1 self = (DvProviderAvOpenhomeOrgDACConfig1)gch.Target;
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

