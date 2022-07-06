using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgMessageCenter1 : IDisposable
    {

        /// <summary>
        /// Set the value of the Message property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyMessage(string aValue);

        /// <summary>
        /// Get a copy of the value of the Message property
        /// </summary>
        /// <returns>Value of the Message property.</param>
        string PropertyMessage();

        /// <summary>
        /// Set the value of the MessageID property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyMessageID(uint aValue);

        /// <summary>
        /// Get a copy of the value of the MessageID property
        /// </summary>
        /// <returns>Value of the MessageID property.</param>
        uint PropertyMessageID();
    }
    /// <summary>
    /// Provider for the av.openhome.org:MessageCenter:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgMessageCenter1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgMessageCenter1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetMessage;
        private PropertyString iPropertyMessage;
        private PropertyUint iPropertyMessageID;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgMessageCenter1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "MessageCenter", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Message property.
        /// </summary>
        public void EnablePropertyMessage()
        {
            List<String> allowedValues = new List<String>();
            iPropertyMessage = new PropertyString(new ParameterString("Message", allowedValues));
            AddProperty(iPropertyMessage);
        }

        /// <summary>
        /// Enable the MessageID property.
        /// </summary>
        public void EnablePropertyMessageID()
        {
            iPropertyMessageID = new PropertyUint(new ParameterUint("MessageID"));
            AddProperty(iPropertyMessageID);
        }

        /// <summary>
        /// Set the value of the Message property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMessage has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyMessage(string aValue)
        {
            if (iPropertyMessage == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyMessage, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Message property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMessage has previously been called.</remarks>
        /// <returns>Value of the Message property.</returns>
        public string PropertyMessage()
        {
            if (iPropertyMessage == null)
                throw new PropertyDisabledError();
            return iPropertyMessage.Value();
        }

        /// <summary>
        /// Set the value of the MessageID property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMessageID has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyMessageID(uint aValue)
        {
            if (iPropertyMessageID == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyMessageID, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the MessageID property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMessageID has previously been called.</remarks>
        /// <returns>Value of the MessageID property.</returns>
        public uint PropertyMessageID()
        {
            if (iPropertyMessageID == null)
                throw new PropertyDisabledError();
            return iPropertyMessageID.Value();
        }

        /// <summary>
        /// Signal that the action GetMessage is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetMessage must be overridden if this is called.</remarks>
        protected void EnableActionGetMessage()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetMessage");
            action.AddOutputParameter(new ParameterRelated("Message", iPropertyMessage));
            action.AddOutputParameter(new ParameterRelated("MessageID", iPropertyMessageID));
            iDelegateGetMessage = new ActionDelegate(DoGetMessage);
            EnableAction(action, iDelegateGetMessage, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetMessage action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetMessage action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetMessage was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aMessage"></param>
        /// <param name="aMessageID"></param>
        protected virtual void GetMessage(IDvInvocation aInvocation, out string aMessage, out uint aMessageID)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetMessage(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgMessageCenter1 self = (DvProviderAvOpenhomeOrgMessageCenter1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string message;
            uint messageID;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetMessage(invocation, out message, out messageID);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetMessage");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetMessage" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetMessage" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Message", message);
                invocation.WriteUint("MessageID", messageID);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetMessage" });
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

