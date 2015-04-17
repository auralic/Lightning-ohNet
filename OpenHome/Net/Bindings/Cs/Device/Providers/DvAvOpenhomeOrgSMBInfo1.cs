using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgSMBInfo1 : IDisposable
    {
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:SMBInfo:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgSMBInfo1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgSMBInfo1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateSetSMBConfig;
        private ActionDelegate iDelegateGetSMBConnectResult;
        private ActionDelegate iDelegateGetSMBInfo;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgSMBInfo1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "SMBInfo", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Signal that the action SetSMBConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetSMBConfig must be overridden if this is called.</remarks>
        protected void EnableActionSetSMBConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetSMBConfig");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("SMBAddr", allowedValues));
            action.AddInputParameter(new ParameterString("SMBUserName", allowedValues));
            action.AddInputParameter(new ParameterString("SMBPassWord", allowedValues));
            iDelegateSetSMBConfig = new ActionDelegate(DoSetSMBConfig);
            EnableAction(action, iDelegateSetSMBConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetSMBConnectResult is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetSMBConnectResult must be overridden if this is called.</remarks>
        protected void EnableActionGetSMBConnectResult()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetSMBConnectResult");
            action.AddOutputParameter(new ParameterBool("SMBConnectResult"));
            iDelegateGetSMBConnectResult = new ActionDelegate(DoGetSMBConnectResult);
            EnableAction(action, iDelegateGetSMBConnectResult, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetSMBInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetSMBInfo must be overridden if this is called.</remarks>
        protected void EnableActionGetSMBInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetSMBInfo");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterBool("SMBConnectStatus"));
            action.AddOutputParameter(new ParameterString("SMBERRORInfo", allowedValues));
            action.AddOutputParameter(new ParameterString("SMBCapacity", allowedValues));
            action.AddOutputParameter(new ParameterString("SMBFileCount", allowedValues));
            iDelegateGetSMBInfo = new ActionDelegate(DoGetSMBInfo);
            EnableAction(action, iDelegateGetSMBInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// SetSMBConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetSMBConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetSMBConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSMBAddr"></param>
        /// <param name="aSMBUserName"></param>
        /// <param name="aSMBPassWord"></param>
        protected virtual void SetSMBConfig(IDvInvocation aInvocation, string aSMBAddr, string aSMBUserName, string aSMBPassWord)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetSMBConnectResult action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetSMBConnectResult action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetSMBConnectResult was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSMBConnectResult"></param>
        protected virtual void GetSMBConnectResult(IDvInvocation aInvocation, out bool aSMBConnectResult)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetSMBInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetSMBInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetSMBInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSMBConnectStatus"></param>
        /// <param name="aSMBERRORInfo"></param>
        /// <param name="aSMBCapacity"></param>
        /// <param name="aSMBFileCount"></param>
        protected virtual void GetSMBInfo(IDvInvocation aInvocation, out bool aSMBConnectStatus, out string aSMBERRORInfo, out string aSMBCapacity, out string aSMBFileCount)
        {
            throw (new ActionDisabledError());
        }

        private static int DoSetSMBConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgSMBInfo1 self = (DvProviderAvOpenhomeOrgSMBInfo1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string sMBAddr;
            string sMBUserName;
            string sMBPassWord;
            try
            {
                invocation.ReadStart();
                sMBAddr = invocation.ReadString("SMBAddr");
                sMBUserName = invocation.ReadString("SMBUserName");
                sMBPassWord = invocation.ReadString("SMBPassWord");
                invocation.ReadEnd();
                self.SetSMBConfig(invocation, sMBAddr, sMBUserName, sMBPassWord);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetSMBConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetSMBConfig"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetSMBConfig", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetSMBConfig", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetSMBConnectResult(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgSMBInfo1 self = (DvProviderAvOpenhomeOrgSMBInfo1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool sMBConnectResult;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetSMBConnectResult(invocation, out sMBConnectResult);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetSMBConnectResult");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetSMBConnectResult"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetSMBConnectResult", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("SMBConnectResult", sMBConnectResult);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetSMBConnectResult", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetSMBInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgSMBInfo1 self = (DvProviderAvOpenhomeOrgSMBInfo1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool sMBConnectStatus;
            string sMBERRORInfo;
            string sMBCapacity;
            string sMBFileCount;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetSMBInfo(invocation, out sMBConnectStatus, out sMBERRORInfo, out sMBCapacity, out sMBFileCount);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetSMBInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetSMBInfo"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetSMBInfo", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("SMBConnectStatus", sMBConnectStatus);
                invocation.WriteString("SMBERRORInfo", sMBERRORInfo);
                invocation.WriteString("SMBCapacity", sMBCapacity);
                invocation.WriteString("SMBFileCount", sMBFileCount);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetSMBInfo", e.TargetSite.Name);
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

