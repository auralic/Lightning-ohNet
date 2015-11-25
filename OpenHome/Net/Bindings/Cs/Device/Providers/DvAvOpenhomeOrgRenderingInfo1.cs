using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgRenderingInfo1 : IDisposable
    {

        /// <summary>
        /// Set the value of the Info property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyInfo(string aValue);

        /// <summary>
        /// Get a copy of the value of the Info property
        /// </summary>
        /// <returns>Value of the Info property.</param>
        string PropertyInfo();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:RenderingInfo:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgRenderingInfo1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgRenderingInfo1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetEntireInfo;
        private PropertyString iPropertyInfo;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgRenderingInfo1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "RenderingInfo", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Info property.
        /// </summary>
        public void EnablePropertyInfo()
        {
            List<String> allowedValues = new List<String>();
            iPropertyInfo = new PropertyString(new ParameterString("Info", allowedValues));
            AddProperty(iPropertyInfo);
        }

        /// <summary>
        /// Set the value of the Info property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyInfo has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyInfo(string aValue)
        {
            if (iPropertyInfo == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyInfo, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Info property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyInfo has previously been called.</remarks>
        /// <returns>Value of the Info property.</returns>
        public string PropertyInfo()
        {
            if (iPropertyInfo == null)
                throw new PropertyDisabledError();
            return iPropertyInfo.Value();
        }

        /// <summary>
        /// Signal that the action GetEntireInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetEntireInfo must be overridden if this is called.</remarks>
        protected void EnableActionGetEntireInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetEntireInfo");
            action.AddOutputParameter(new ParameterRelated("Info", iPropertyInfo));
            iDelegateGetEntireInfo = new ActionDelegate(DoGetEntireInfo);
            EnableAction(action, iDelegateGetEntireInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetEntireInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetEntireInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetEntireInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aInfo"></param>
        protected virtual void GetEntireInfo(IDvInvocation aInvocation, out string aInfo)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetEntireInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRenderingInfo1 self = (DvProviderAvOpenhomeOrgRenderingInfo1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string info;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetEntireInfo(invocation, out info);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetEntireInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetEntireInfo"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetEntireInfo", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Info", info);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetEntireInfo", e.TargetSite.Name);
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

