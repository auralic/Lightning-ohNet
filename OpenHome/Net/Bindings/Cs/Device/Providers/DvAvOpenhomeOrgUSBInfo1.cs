using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgUSBInfo1 : IDisposable
    {
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:USBInfo:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgUSBInfo1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgUSBInfo1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetUSBInfo;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgUSBInfo1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "USBInfo", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Signal that the action GetUSBInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetUSBInfo must be overridden if this is called.</remarks>
        protected void EnableActionGetUSBInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetUSBInfo");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterBool("USBPlugStatus"));
            action.AddOutputParameter(new ParameterString("USBERRORInfo", allowedValues));
            action.AddOutputParameter(new ParameterString("USBCapacity", allowedValues));
            action.AddOutputParameter(new ParameterString("USBFileCount", allowedValues));
            iDelegateGetUSBInfo = new ActionDelegate(DoGetUSBInfo);
            EnableAction(action, iDelegateGetUSBInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetUSBInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetUSBInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetUSBInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aUSBPlugStatus"></param>
        /// <param name="aUSBERRORInfo"></param>
        /// <param name="aUSBCapacity"></param>
        /// <param name="aUSBFileCount"></param>
        protected virtual void GetUSBInfo(IDvInvocation aInvocation, out bool aUSBPlugStatus, out string aUSBERRORInfo, out string aUSBCapacity, out string aUSBFileCount)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetUSBInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgUSBInfo1 self = (DvProviderAvOpenhomeOrgUSBInfo1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool uSBPlugStatus;
            string uSBERRORInfo;
            string uSBCapacity;
            string uSBFileCount;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetUSBInfo(invocation, out uSBPlugStatus, out uSBERRORInfo, out uSBCapacity, out uSBFileCount);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetUSBInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetUSBInfo"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetUSBInfo", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("USBPlugStatus", uSBPlugStatus);
                invocation.WriteString("USBERRORInfo", uSBERRORInfo);
                invocation.WriteString("USBCapacity", uSBCapacity);
                invocation.WriteString("USBFileCount", uSBFileCount);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetUSBInfo", e.TargetSite.Name);
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

