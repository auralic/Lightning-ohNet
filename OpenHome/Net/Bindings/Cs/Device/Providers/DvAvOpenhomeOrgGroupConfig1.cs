using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgGroupConfig1 : IDisposable
    {

        /// <summary>
        /// Set the value of the GroupMode property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyGroupMode(string aValue);

        /// <summary>
        /// Get a copy of the value of the GroupMode property
        /// </summary>
        /// <returns>Value of the GroupMode property.</param>
        string PropertyGroupMode();

        /// <summary>
        /// Set the value of the GroupName property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyGroupName(string aValue);

        /// <summary>
        /// Get a copy of the value of the GroupName property
        /// </summary>
        /// <returns>Value of the GroupName property.</param>
        string PropertyGroupName();

        /// <summary>
        /// Set the value of the GroupID property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyGroupID(string aValue);

        /// <summary>
        /// Get a copy of the value of the GroupID property
        /// </summary>
        /// <returns>Value of the GroupID property.</param>
        string PropertyGroupID();

        /// <summary>
        /// Set the value of the GroupVolume property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyGroupVolume(uint aValue);

        /// <summary>
        /// Get a copy of the value of the GroupVolume property
        /// </summary>
        /// <returns>Value of the GroupVolume property.</param>
        uint PropertyGroupVolume();

        /// <summary>
        /// Set the value of the GroupMute property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyGroupMute(bool aValue);

        /// <summary>
        /// Get a copy of the value of the GroupMute property
        /// </summary>
        /// <returns>Value of the GroupMute property.</param>
        bool PropertyGroupMute();

        /// <summary>
        /// Set the value of the GroupStatus property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyGroupStatus(string aValue);

        /// <summary>
        /// Get a copy of the value of the GroupStatus property
        /// </summary>
        /// <returns>Value of the GroupStatus property.</param>
        string PropertyGroupStatus();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:GroupConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgGroupConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgGroupConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateSetGroupMode;
        private ActionDelegate iDelegateGetGroupMode;
        private ActionDelegate iDelegateSetGroupVolume;
        private ActionDelegate iDelegateGetGroupVolume;
        private ActionDelegate iDelegateSetGroupMute;
        private ActionDelegate iDelegateGetGroupMute;
        private ActionDelegate iDelegateGetGroupStatus;
        private ActionDelegate iDelegateSetGroupStatus;
        private PropertyString iPropertyGroupMode;
        private PropertyString iPropertyGroupName;
        private PropertyString iPropertyGroupID;
        private PropertyUint iPropertyGroupVolume;
        private PropertyBool iPropertyGroupMute;
        private PropertyString iPropertyGroupStatus;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgGroupConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "GroupConfig", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the GroupMode property.
        /// </summary>
        public void EnablePropertyGroupMode()
        {
            List<String> allowedValues = new List<String>();
            allowedValues.Add("Master");
            allowedValues.Add("Slave");
            allowedValues.Add("None");
            iPropertyGroupMode = new PropertyString(new ParameterString("GroupMode", allowedValues));
            AddProperty(iPropertyGroupMode);
            allowedValues.Clear();
        }

        /// <summary>
        /// Enable the GroupName property.
        /// </summary>
        public void EnablePropertyGroupName()
        {
            List<String> allowedValues = new List<String>();
            iPropertyGroupName = new PropertyString(new ParameterString("GroupName", allowedValues));
            AddProperty(iPropertyGroupName);
        }

        /// <summary>
        /// Enable the GroupID property.
        /// </summary>
        public void EnablePropertyGroupID()
        {
            List<String> allowedValues = new List<String>();
            iPropertyGroupID = new PropertyString(new ParameterString("GroupID", allowedValues));
            AddProperty(iPropertyGroupID);
        }

        /// <summary>
        /// Enable the GroupVolume property.
        /// </summary>
        public void EnablePropertyGroupVolume()
        {
            iPropertyGroupVolume = new PropertyUint(new ParameterUint("GroupVolume"));
            AddProperty(iPropertyGroupVolume);
        }

        /// <summary>
        /// Enable the GroupMute property.
        /// </summary>
        public void EnablePropertyGroupMute()
        {
            iPropertyGroupMute = new PropertyBool(new ParameterBool("GroupMute"));
            AddProperty(iPropertyGroupMute);
        }

        /// <summary>
        /// Enable the GroupStatus property.
        /// </summary>
        public void EnablePropertyGroupStatus()
        {
            List<String> allowedValues = new List<String>();
            iPropertyGroupStatus = new PropertyString(new ParameterString("GroupStatus", allowedValues));
            AddProperty(iPropertyGroupStatus);
        }

        /// <summary>
        /// Set the value of the GroupMode property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupMode has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyGroupMode(string aValue)
        {
            if (iPropertyGroupMode == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyGroupMode, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the GroupMode property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupMode has previously been called.</remarks>
        /// <returns>Value of the GroupMode property.</returns>
        public string PropertyGroupMode()
        {
            if (iPropertyGroupMode == null)
                throw new PropertyDisabledError();
            return iPropertyGroupMode.Value();
        }

        /// <summary>
        /// Set the value of the GroupName property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupName has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyGroupName(string aValue)
        {
            if (iPropertyGroupName == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyGroupName, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the GroupName property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupName has previously been called.</remarks>
        /// <returns>Value of the GroupName property.</returns>
        public string PropertyGroupName()
        {
            if (iPropertyGroupName == null)
                throw new PropertyDisabledError();
            return iPropertyGroupName.Value();
        }

        /// <summary>
        /// Set the value of the GroupID property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupID has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyGroupID(string aValue)
        {
            if (iPropertyGroupID == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyGroupID, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the GroupID property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupID has previously been called.</remarks>
        /// <returns>Value of the GroupID property.</returns>
        public string PropertyGroupID()
        {
            if (iPropertyGroupID == null)
                throw new PropertyDisabledError();
            return iPropertyGroupID.Value();
        }

        /// <summary>
        /// Set the value of the GroupVolume property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupVolume has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyGroupVolume(uint aValue)
        {
            if (iPropertyGroupVolume == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyGroupVolume, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the GroupVolume property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupVolume has previously been called.</remarks>
        /// <returns>Value of the GroupVolume property.</returns>
        public uint PropertyGroupVolume()
        {
            if (iPropertyGroupVolume == null)
                throw new PropertyDisabledError();
            return iPropertyGroupVolume.Value();
        }

        /// <summary>
        /// Set the value of the GroupMute property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupMute has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyGroupMute(bool aValue)
        {
            if (iPropertyGroupMute == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyGroupMute, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the GroupMute property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupMute has previously been called.</remarks>
        /// <returns>Value of the GroupMute property.</returns>
        public bool PropertyGroupMute()
        {
            if (iPropertyGroupMute == null)
                throw new PropertyDisabledError();
            return iPropertyGroupMute.Value();
        }

        /// <summary>
        /// Set the value of the GroupStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupStatus has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyGroupStatus(string aValue)
        {
            if (iPropertyGroupStatus == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyGroupStatus, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the GroupStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyGroupStatus has previously been called.</remarks>
        /// <returns>Value of the GroupStatus property.</returns>
        public string PropertyGroupStatus()
        {
            if (iPropertyGroupStatus == null)
                throw new PropertyDisabledError();
            return iPropertyGroupStatus.Value();
        }

        /// <summary>
        /// Signal that the action SetGroupMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetGroupMode must be overridden if this is called.</remarks>
        protected void EnableActionSetGroupMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetGroupMode");
            action.AddInputParameter(new ParameterRelated("GroupMode", iPropertyGroupMode));
            action.AddInputParameter(new ParameterRelated("GroupID", iPropertyGroupID));
            action.AddInputParameter(new ParameterRelated("GroupName", iPropertyGroupName));
            iDelegateSetGroupMode = new ActionDelegate(DoSetGroupMode);
            EnableAction(action, iDelegateSetGroupMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetGroupMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetGroupMode must be overridden if this is called.</remarks>
        protected void EnableActionGetGroupMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetGroupMode");
            action.AddOutputParameter(new ParameterRelated("GroupMode", iPropertyGroupMode));
            action.AddOutputParameter(new ParameterRelated("GroupID", iPropertyGroupID));
            action.AddOutputParameter(new ParameterRelated("GroupName", iPropertyGroupName));
            iDelegateGetGroupMode = new ActionDelegate(DoGetGroupMode);
            EnableAction(action, iDelegateGetGroupMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetGroupVolume is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetGroupVolume must be overridden if this is called.</remarks>
        protected void EnableActionSetGroupVolume()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetGroupVolume");
            action.AddInputParameter(new ParameterRelated("GroupVolume", iPropertyGroupVolume));
            iDelegateSetGroupVolume = new ActionDelegate(DoSetGroupVolume);
            EnableAction(action, iDelegateSetGroupVolume, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetGroupVolume is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetGroupVolume must be overridden if this is called.</remarks>
        protected void EnableActionGetGroupVolume()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetGroupVolume");
            action.AddOutputParameter(new ParameterRelated("GroupVolume", iPropertyGroupVolume));
            iDelegateGetGroupVolume = new ActionDelegate(DoGetGroupVolume);
            EnableAction(action, iDelegateGetGroupVolume, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetGroupMute is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetGroupMute must be overridden if this is called.</remarks>
        protected void EnableActionSetGroupMute()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetGroupMute");
            action.AddInputParameter(new ParameterRelated("GroupMute", iPropertyGroupMute));
            iDelegateSetGroupMute = new ActionDelegate(DoSetGroupMute);
            EnableAction(action, iDelegateSetGroupMute, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetGroupMute is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetGroupMute must be overridden if this is called.</remarks>
        protected void EnableActionGetGroupMute()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetGroupMute");
            action.AddOutputParameter(new ParameterRelated("GroupMute", iPropertyGroupMute));
            iDelegateGetGroupMute = new ActionDelegate(DoGetGroupMute);
            EnableAction(action, iDelegateGetGroupMute, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetGroupStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetGroupStatus must be overridden if this is called.</remarks>
        protected void EnableActionGetGroupStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetGroupStatus");
            action.AddOutputParameter(new ParameterRelated("GroupStatus", iPropertyGroupStatus));
            iDelegateGetGroupStatus = new ActionDelegate(DoGetGroupStatus);
            EnableAction(action, iDelegateGetGroupStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetGroupStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetGroupStatus must be overridden if this is called.</remarks>
        protected void EnableActionSetGroupStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetGroupStatus");
            action.AddInputParameter(new ParameterRelated("GroupStatus", iPropertyGroupStatus));
            iDelegateSetGroupStatus = new ActionDelegate(DoSetGroupStatus);
            EnableAction(action, iDelegateSetGroupStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// SetGroupMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetGroupMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetGroupMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aGroupMode"></param>
        /// <param name="aGroupID"></param>
        /// <param name="aGroupName"></param>
        protected virtual void SetGroupMode(IDvInvocation aInvocation, string aGroupMode, string aGroupID, string aGroupName)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetGroupMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetGroupMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetGroupMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aGroupMode"></param>
        /// <param name="aGroupID"></param>
        /// <param name="aGroupName"></param>
        protected virtual void GetGroupMode(IDvInvocation aInvocation, out string aGroupMode, out string aGroupID, out string aGroupName)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetGroupVolume action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetGroupVolume action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetGroupVolume was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aGroupVolume"></param>
        protected virtual void SetGroupVolume(IDvInvocation aInvocation, uint aGroupVolume)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetGroupVolume action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetGroupVolume action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetGroupVolume was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aGroupVolume"></param>
        protected virtual void GetGroupVolume(IDvInvocation aInvocation, out uint aGroupVolume)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetGroupMute action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetGroupMute action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetGroupMute was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aGroupMute"></param>
        protected virtual void SetGroupMute(IDvInvocation aInvocation, bool aGroupMute)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetGroupMute action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetGroupMute action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetGroupMute was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aGroupMute"></param>
        protected virtual void GetGroupMute(IDvInvocation aInvocation, out bool aGroupMute)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetGroupStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetGroupStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetGroupStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aGroupStatus"></param>
        protected virtual void GetGroupStatus(IDvInvocation aInvocation, out string aGroupStatus)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetGroupStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetGroupStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetGroupStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aGroupStatus"></param>
        protected virtual void SetGroupStatus(IDvInvocation aInvocation, string aGroupStatus)
        {
            throw (new ActionDisabledError());
        }

        private static int DoSetGroupMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgGroupConfig1 self = (DvProviderAvOpenhomeOrgGroupConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string groupMode;
            string groupID;
            string groupName;
            try
            {
                invocation.ReadStart();
                groupMode = invocation.ReadString("GroupMode");
                groupID = invocation.ReadString("GroupID");
                groupName = invocation.ReadString("GroupName");
                invocation.ReadEnd();
                self.SetGroupMode(invocation, groupMode, groupID, groupName);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetGroupMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetGroupMode"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetGroupMode", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetGroupMode", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetGroupMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgGroupConfig1 self = (DvProviderAvOpenhomeOrgGroupConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string groupMode;
            string groupID;
            string groupName;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetGroupMode(invocation, out groupMode, out groupID, out groupName);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetGroupMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetGroupMode"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetGroupMode", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("GroupMode", groupMode);
                invocation.WriteString("GroupID", groupID);
                invocation.WriteString("GroupName", groupName);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetGroupMode", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetGroupVolume(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgGroupConfig1 self = (DvProviderAvOpenhomeOrgGroupConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint groupVolume;
            try
            {
                invocation.ReadStart();
                groupVolume = invocation.ReadUint("GroupVolume");
                invocation.ReadEnd();
                self.SetGroupVolume(invocation, groupVolume);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetGroupVolume");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetGroupVolume"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetGroupVolume", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetGroupVolume", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetGroupVolume(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgGroupConfig1 self = (DvProviderAvOpenhomeOrgGroupConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint groupVolume;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetGroupVolume(invocation, out groupVolume);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetGroupVolume");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetGroupVolume"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetGroupVolume", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("GroupVolume", groupVolume);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetGroupVolume", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetGroupMute(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgGroupConfig1 self = (DvProviderAvOpenhomeOrgGroupConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool groupMute;
            try
            {
                invocation.ReadStart();
                groupMute = invocation.ReadBool("GroupMute");
                invocation.ReadEnd();
                self.SetGroupMute(invocation, groupMute);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetGroupMute");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetGroupMute"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetGroupMute", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetGroupMute", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetGroupMute(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgGroupConfig1 self = (DvProviderAvOpenhomeOrgGroupConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool groupMute;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetGroupMute(invocation, out groupMute);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetGroupMute");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetGroupMute"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetGroupMute", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("GroupMute", groupMute);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetGroupMute", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetGroupStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgGroupConfig1 self = (DvProviderAvOpenhomeOrgGroupConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string groupStatus;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetGroupStatus(invocation, out groupStatus);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetGroupStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetGroupStatus"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetGroupStatus", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("GroupStatus", groupStatus);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetGroupStatus", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetGroupStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgGroupConfig1 self = (DvProviderAvOpenhomeOrgGroupConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string groupStatus;
            try
            {
                invocation.ReadStart();
                groupStatus = invocation.ReadString("GroupStatus");
                invocation.ReadEnd();
                self.SetGroupStatus(invocation, groupStatus);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetGroupStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetGroupStatus"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetGroupStatus", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetGroupStatus", e.TargetSite.Name);
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

