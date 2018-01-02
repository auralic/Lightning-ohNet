using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgRoon1 : IDisposable
    {

        /// <summary>
        /// Set the value of the TransportState property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyTransportState(string aValue);

        /// <summary>
        /// Get a copy of the value of the TransportState property
        /// </summary>
        /// <returns>Value of the TransportState property.</param>
        string PropertyTransportState();

        /// <summary>
        /// Set the value of the Repeat property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyRepeat(bool aValue);

        /// <summary>
        /// Get a copy of the value of the Repeat property
        /// </summary>
        /// <returns>Value of the Repeat property.</param>
        bool PropertyRepeat();

        /// <summary>
        /// Set the value of the RepeatOne property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyRepeatOne(bool aValue);

        /// <summary>
        /// Get a copy of the value of the RepeatOne property
        /// </summary>
        /// <returns>Value of the RepeatOne property.</param>
        bool PropertyRepeatOne();

        /// <summary>
        /// Set the value of the Shuffle property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyShuffle(bool aValue);

        /// <summary>
        /// Get a copy of the value of the Shuffle property
        /// </summary>
        /// <returns>Value of the Shuffle property.</param>
        bool PropertyShuffle();

        /// <summary>
        /// Set the value of the UpdateCover property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUpdateCover(bool aValue);

        /// <summary>
        /// Get a copy of the value of the UpdateCover property
        /// </summary>
        /// <returns>Value of the UpdateCover property.</param>
        bool PropertyUpdateCover();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:Roon:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgRoon1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgRoon1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegatePlay;
        private ActionDelegate iDelegatePause;
        private ActionDelegate iDelegatePlayPause;
        private ActionDelegate iDelegateStop;
        private ActionDelegate iDelegateNext;
        private ActionDelegate iDelegatePrevious;
        private ActionDelegate iDelegateToggleShuffle;
        private ActionDelegate iDelegateToggleLoop;
        private ActionDelegate iDelegateRepeat;
        private ActionDelegate iDelegateShuffle;
        private ActionDelegate iDelegateSeekSecondAbsolute;
        private ActionDelegate iDelegateSeekSecondRelative;
        private ActionDelegate iDelegateTransportState;
        private PropertyString iPropertyTransportState;
        private PropertyBool iPropertyRepeat;
        private PropertyBool iPropertyRepeatOne;
        private PropertyBool iPropertyShuffle;
        private PropertyBool iPropertyUpdateCover;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgRoon1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "Roon", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the TransportState property.
        /// </summary>
        public void EnablePropertyTransportState()
        {
            List<String> allowedValues = new List<String>();
            allowedValues.Add("Playing");
            allowedValues.Add("Paused");
            allowedValues.Add("Stopped");
            allowedValues.Add("Buffering");
            iPropertyTransportState = new PropertyString(new ParameterString("TransportState", allowedValues));
            AddProperty(iPropertyTransportState);
            allowedValues.Clear();
        }

        /// <summary>
        /// Enable the Repeat property.
        /// </summary>
        public void EnablePropertyRepeat()
        {
            iPropertyRepeat = new PropertyBool(new ParameterBool("Repeat"));
            AddProperty(iPropertyRepeat);
        }

        /// <summary>
        /// Enable the RepeatOne property.
        /// </summary>
        public void EnablePropertyRepeatOne()
        {
            iPropertyRepeatOne = new PropertyBool(new ParameterBool("RepeatOne"));
            AddProperty(iPropertyRepeatOne);
        }

        /// <summary>
        /// Enable the Shuffle property.
        /// </summary>
        public void EnablePropertyShuffle()
        {
            iPropertyShuffle = new PropertyBool(new ParameterBool("Shuffle"));
            AddProperty(iPropertyShuffle);
        }

        /// <summary>
        /// Enable the UpdateCover property.
        /// </summary>
        public void EnablePropertyUpdateCover()
        {
            iPropertyUpdateCover = new PropertyBool(new ParameterBool("UpdateCover"));
            AddProperty(iPropertyUpdateCover);
        }

        /// <summary>
        /// Set the value of the TransportState property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyTransportState has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyTransportState(string aValue)
        {
            if (iPropertyTransportState == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyTransportState, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the TransportState property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyTransportState has previously been called.</remarks>
        /// <returns>Value of the TransportState property.</returns>
        public string PropertyTransportState()
        {
            if (iPropertyTransportState == null)
                throw new PropertyDisabledError();
            return iPropertyTransportState.Value();
        }

        /// <summary>
        /// Set the value of the Repeat property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRepeat has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyRepeat(bool aValue)
        {
            if (iPropertyRepeat == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyRepeat, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Repeat property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRepeat has previously been called.</remarks>
        /// <returns>Value of the Repeat property.</returns>
        public bool PropertyRepeat()
        {
            if (iPropertyRepeat == null)
                throw new PropertyDisabledError();
            return iPropertyRepeat.Value();
        }

        /// <summary>
        /// Set the value of the RepeatOne property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRepeatOne has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyRepeatOne(bool aValue)
        {
            if (iPropertyRepeatOne == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyRepeatOne, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the RepeatOne property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRepeatOne has previously been called.</remarks>
        /// <returns>Value of the RepeatOne property.</returns>
        public bool PropertyRepeatOne()
        {
            if (iPropertyRepeatOne == null)
                throw new PropertyDisabledError();
            return iPropertyRepeatOne.Value();
        }

        /// <summary>
        /// Set the value of the Shuffle property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyShuffle has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyShuffle(bool aValue)
        {
            if (iPropertyShuffle == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyShuffle, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Shuffle property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyShuffle has previously been called.</remarks>
        /// <returns>Value of the Shuffle property.</returns>
        public bool PropertyShuffle()
        {
            if (iPropertyShuffle == null)
                throw new PropertyDisabledError();
            return iPropertyShuffle.Value();
        }

        /// <summary>
        /// Set the value of the UpdateCover property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateCover has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUpdateCover(bool aValue)
        {
            if (iPropertyUpdateCover == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyUpdateCover, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UpdateCover property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateCover has previously been called.</remarks>
        /// <returns>Value of the UpdateCover property.</returns>
        public bool PropertyUpdateCover()
        {
            if (iPropertyUpdateCover == null)
                throw new PropertyDisabledError();
            return iPropertyUpdateCover.Value();
        }

        /// <summary>
        /// Signal that the action Play is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Play must be overridden if this is called.</remarks>
        protected void EnableActionPlay()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Play");
            iDelegatePlay = new ActionDelegate(DoPlay);
            EnableAction(action, iDelegatePlay, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Pause is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Pause must be overridden if this is called.</remarks>
        protected void EnableActionPause()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Pause");
            iDelegatePause = new ActionDelegate(DoPause);
            EnableAction(action, iDelegatePause, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action PlayPause is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// PlayPause must be overridden if this is called.</remarks>
        protected void EnableActionPlayPause()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("PlayPause");
            iDelegatePlayPause = new ActionDelegate(DoPlayPause);
            EnableAction(action, iDelegatePlayPause, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Stop is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Stop must be overridden if this is called.</remarks>
        protected void EnableActionStop()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Stop");
            iDelegateStop = new ActionDelegate(DoStop);
            EnableAction(action, iDelegateStop, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Next is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Next must be overridden if this is called.</remarks>
        protected void EnableActionNext()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Next");
            iDelegateNext = new ActionDelegate(DoNext);
            EnableAction(action, iDelegateNext, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Previous is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Previous must be overridden if this is called.</remarks>
        protected void EnableActionPrevious()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Previous");
            iDelegatePrevious = new ActionDelegate(DoPrevious);
            EnableAction(action, iDelegatePrevious, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ToggleShuffle is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ToggleShuffle must be overridden if this is called.</remarks>
        protected void EnableActionToggleShuffle()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ToggleShuffle");
            iDelegateToggleShuffle = new ActionDelegate(DoToggleShuffle);
            EnableAction(action, iDelegateToggleShuffle, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ToggleLoop is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ToggleLoop must be overridden if this is called.</remarks>
        protected void EnableActionToggleLoop()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ToggleLoop");
            iDelegateToggleLoop = new ActionDelegate(DoToggleLoop);
            EnableAction(action, iDelegateToggleLoop, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Repeat is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Repeat must be overridden if this is called.</remarks>
        protected void EnableActionRepeat()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Repeat");
            action.AddOutputParameter(new ParameterRelated("Value", iPropertyRepeat));
            iDelegateRepeat = new ActionDelegate(DoRepeat);
            EnableAction(action, iDelegateRepeat, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Shuffle is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Shuffle must be overridden if this is called.</remarks>
        protected void EnableActionShuffle()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Shuffle");
            action.AddOutputParameter(new ParameterRelated("Value", iPropertyShuffle));
            iDelegateShuffle = new ActionDelegate(DoShuffle);
            EnableAction(action, iDelegateShuffle, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SeekSecondAbsolute is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SeekSecondAbsolute must be overridden if this is called.</remarks>
        protected void EnableActionSeekSecondAbsolute()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SeekSecondAbsolute");
            action.AddInputParameter(new ParameterUint("Value"));
            iDelegateSeekSecondAbsolute = new ActionDelegate(DoSeekSecondAbsolute);
            EnableAction(action, iDelegateSeekSecondAbsolute, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SeekSecondRelative is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SeekSecondRelative must be overridden if this is called.</remarks>
        protected void EnableActionSeekSecondRelative()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SeekSecondRelative");
            action.AddInputParameter(new ParameterInt("Value"));
            iDelegateSeekSecondRelative = new ActionDelegate(DoSeekSecondRelative);
            EnableAction(action, iDelegateSeekSecondRelative, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action TransportState is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// TransportState must be overridden if this is called.</remarks>
        protected void EnableActionTransportState()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("TransportState");
            action.AddOutputParameter(new ParameterRelated("Value", iPropertyTransportState));
            iDelegateTransportState = new ActionDelegate(DoTransportState);
            EnableAction(action, iDelegateTransportState, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Play action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Play action for the owning device.
        ///
        /// Must be implemented iff EnableActionPlay was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Play(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Pause action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Pause action for the owning device.
        ///
        /// Must be implemented iff EnableActionPause was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Pause(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// PlayPause action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// PlayPause action for the owning device.
        ///
        /// Must be implemented iff EnableActionPlayPause was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void PlayPause(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Stop action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Stop action for the owning device.
        ///
        /// Must be implemented iff EnableActionStop was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Stop(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Next action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Next action for the owning device.
        ///
        /// Must be implemented iff EnableActionNext was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Next(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Previous action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Previous action for the owning device.
        ///
        /// Must be implemented iff EnableActionPrevious was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Previous(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ToggleShuffle action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ToggleShuffle action for the owning device.
        ///
        /// Must be implemented iff EnableActionToggleShuffle was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void ToggleShuffle(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ToggleLoop action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ToggleLoop action for the owning device.
        ///
        /// Must be implemented iff EnableActionToggleLoop was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void ToggleLoop(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Repeat action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Repeat action for the owning device.
        ///
        /// Must be implemented iff EnableActionRepeat was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void Repeat(IDvInvocation aInvocation, out bool aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Shuffle action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Shuffle action for the owning device.
        ///
        /// Must be implemented iff EnableActionShuffle was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void Shuffle(IDvInvocation aInvocation, out bool aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SeekSecondAbsolute action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SeekSecondAbsolute action for the owning device.
        ///
        /// Must be implemented iff EnableActionSeekSecondAbsolute was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void SeekSecondAbsolute(IDvInvocation aInvocation, uint aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SeekSecondRelative action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SeekSecondRelative action for the owning device.
        ///
        /// Must be implemented iff EnableActionSeekSecondRelative was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void SeekSecondRelative(IDvInvocation aInvocation, int aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// TransportState action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// TransportState action for the owning device.
        ///
        /// Must be implemented iff EnableActionTransportState was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void TransportState(IDvInvocation aInvocation, out string aValue)
        {
            throw (new ActionDisabledError());
        }

        private static int DoPlay(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Play(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Play");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "Play"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Play", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Play", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoPause(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Pause(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Pause");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "Pause"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Pause", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Pause", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoPlayPause(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.PlayPause(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "PlayPause");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "PlayPause"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "PlayPause", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "PlayPause", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoStop(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Stop(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Stop");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "Stop"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Stop", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Stop", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoNext(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Next(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Next");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "Next"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Next", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Next", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoPrevious(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Previous(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Previous");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "Previous"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Previous", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Previous", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoToggleShuffle(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ToggleShuffle(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ToggleShuffle");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "ToggleShuffle"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "ToggleShuffle", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "ToggleShuffle", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoToggleLoop(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ToggleLoop(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ToggleLoop");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "ToggleLoop"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "ToggleLoop", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "ToggleLoop", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoRepeat(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool value;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Repeat(invocation, out value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Repeat");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "Repeat"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Repeat", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("Value", value);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Repeat", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoShuffle(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool value;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Shuffle(invocation, out value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Shuffle");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "Shuffle"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Shuffle", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("Value", value);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Shuffle", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSeekSecondAbsolute(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint value;
            try
            {
                invocation.ReadStart();
                value = invocation.ReadUint("Value");
                invocation.ReadEnd();
                self.SeekSecondAbsolute(invocation, value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SeekSecondAbsolute");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SeekSecondAbsolute"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SeekSecondAbsolute", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SeekSecondAbsolute", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSeekSecondRelative(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            int value;
            try
            {
                invocation.ReadStart();
                value = invocation.ReadInt("Value");
                invocation.ReadEnd();
                self.SeekSecondRelative(invocation, value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SeekSecondRelative");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SeekSecondRelative"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SeekSecondRelative", e.TargetSite.Name);
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SeekSecondRelative", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoTransportState(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgRoon1 self = (DvProviderAvOpenhomeOrgRoon1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string value;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.TransportState(invocation, out value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "TransportState");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "TransportState"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "TransportState", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Value", value);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "TransportState", e.TargetSite.Name);
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

