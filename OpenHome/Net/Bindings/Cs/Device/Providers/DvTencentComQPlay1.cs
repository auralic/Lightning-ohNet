using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderTencentComQPlay1 : IDisposable
    {
    }
    /// <summary>
    /// Provider for the tencent.com:QPlay:1 UPnP service
    /// </summary>
    public class DvProviderTencentComQPlay1 : DvProvider, IDisposable, IDvProviderTencentComQPlay1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateSetNetwork;
        private ActionDelegate iDelegateQPlayAuth;
        private ActionDelegate iDelegateInsertTracks;
        private ActionDelegate iDelegateRemoveTracks;
        private ActionDelegate iDelegateGetTracksInfo;
        private ActionDelegate iDelegateSetTracksInfo;
        private ActionDelegate iDelegateGetTracksCount;
        private ActionDelegate iDelegateGetMaxTracks;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderTencentComQPlay1(DvDevice aDevice)
            : base(aDevice, "tencent.com", "QPlay", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Signal that the action SetNetwork is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetNetwork must be overridden if this is called.</remarks>
        protected void EnableActionSetNetwork()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetNetwork");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("SSID", allowedValues));
            action.AddInputParameter(new ParameterString("Key", allowedValues));
            allowedValues.Add("open");
            allowedValues.Add("shared");
            allowedValues.Add("WPA");
            allowedValues.Add("WPAPSK");
            allowedValues.Add("WPA2");
            allowedValues.Add("WPA2PSK");
            action.AddInputParameter(new ParameterString("AuthAlgo", allowedValues));
            allowedValues.Clear();
            allowedValues.Add("none");
            allowedValues.Add("WEP");
            allowedValues.Add("TKIP");
            allowedValues.Add("AES");
            action.AddInputParameter(new ParameterString("CipherAlgo", allowedValues));
            allowedValues.Clear();
            iDelegateSetNetwork = new ActionDelegate(DoSetNetwork);
            EnableAction(action, iDelegateSetNetwork, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action QPlayAuth is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// QPlayAuth must be overridden if this is called.</remarks>
        protected void EnableActionQPlayAuth()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("QPlayAuth");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Seed", allowedValues));
            action.AddOutputParameter(new ParameterString("Code", allowedValues));
            action.AddOutputParameter(new ParameterString("MID", allowedValues));
            action.AddOutputParameter(new ParameterString("DID", allowedValues));
            iDelegateQPlayAuth = new ActionDelegate(DoQPlayAuth);
            EnableAction(action, iDelegateQPlayAuth, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action InsertTracks is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// InsertTracks must be overridden if this is called.</remarks>
        protected void EnableActionInsertTracks()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("InsertTracks");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("QueueID", allowedValues));
            action.AddInputParameter(new ParameterString("StartingIndex", allowedValues));
            action.AddInputParameter(new ParameterString("TracksMetaData", allowedValues));
            action.AddOutputParameter(new ParameterString("NumberOfSuccess", allowedValues));
            iDelegateInsertTracks = new ActionDelegate(DoInsertTracks);
            EnableAction(action, iDelegateInsertTracks, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action RemoveTracks is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// RemoveTracks must be overridden if this is called.</remarks>
        protected void EnableActionRemoveTracks()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("RemoveTracks");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("QueueID", allowedValues));
            action.AddInputParameter(new ParameterString("StartingIndex", allowedValues));
            action.AddInputParameter(new ParameterString("NumberOfTracks", allowedValues));
            action.AddOutputParameter(new ParameterString("NumberOfSuccess", allowedValues));
            iDelegateRemoveTracks = new ActionDelegate(DoRemoveTracks);
            EnableAction(action, iDelegateRemoveTracks, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetTracksInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetTracksInfo must be overridden if this is called.</remarks>
        protected void EnableActionGetTracksInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetTracksInfo");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("StartingIndex", allowedValues));
            action.AddInputParameter(new ParameterString("NumberOfTracks", allowedValues));
            action.AddOutputParameter(new ParameterString("TracksMetaData", allowedValues));
            iDelegateGetTracksInfo = new ActionDelegate(DoGetTracksInfo);
            EnableAction(action, iDelegateGetTracksInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetTracksInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetTracksInfo must be overridden if this is called.</remarks>
        protected void EnableActionSetTracksInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetTracksInfo");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("QueueID", allowedValues));
            action.AddInputParameter(new ParameterString("StartingIndex", allowedValues));
            action.AddInputParameter(new ParameterString("NextIndex", allowedValues));
            action.AddInputParameter(new ParameterString("TracksMetaData", allowedValues));
            action.AddOutputParameter(new ParameterString("NumberOfSuccess", allowedValues));
            iDelegateSetTracksInfo = new ActionDelegate(DoSetTracksInfo);
            EnableAction(action, iDelegateSetTracksInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetTracksCount is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetTracksCount must be overridden if this is called.</remarks>
        protected void EnableActionGetTracksCount()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetTracksCount");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("NrTracks", allowedValues));
            iDelegateGetTracksCount = new ActionDelegate(DoGetTracksCount);
            EnableAction(action, iDelegateGetTracksCount, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetMaxTracks is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetMaxTracks must be overridden if this is called.</remarks>
        protected void EnableActionGetMaxTracks()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetMaxTracks");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("MaxTracks", allowedValues));
            iDelegateGetMaxTracks = new ActionDelegate(DoGetMaxTracks);
            EnableAction(action, iDelegateGetMaxTracks, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// SetNetwork action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetNetwork action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetNetwork was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSSID"></param>
        /// <param name="aKey"></param>
        /// <param name="aAuthAlgo"></param>
        /// <param name="aCipherAlgo"></param>
        protected virtual void SetNetwork(IDvInvocation aInvocation, string aSSID, string aKey, string aAuthAlgo, string aCipherAlgo)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// QPlayAuth action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// QPlayAuth action for the owning device.
        ///
        /// Must be implemented iff EnableActionQPlayAuth was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSeed"></param>
        /// <param name="aCode"></param>
        /// <param name="aMID"></param>
        /// <param name="aDID"></param>
        protected virtual void QPlayAuth(IDvInvocation aInvocation, string aSeed, out string aCode, out string aMID, out string aDID)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// InsertTracks action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// InsertTracks action for the owning device.
        ///
        /// Must be implemented iff EnableActionInsertTracks was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aQueueID"></param>
        /// <param name="aStartingIndex"></param>
        /// <param name="aTracksMetaData"></param>
        /// <param name="aNumberOfSuccess"></param>
        protected virtual void InsertTracks(IDvInvocation aInvocation, string aQueueID, string aStartingIndex, string aTracksMetaData, out string aNumberOfSuccess)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// RemoveTracks action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// RemoveTracks action for the owning device.
        ///
        /// Must be implemented iff EnableActionRemoveTracks was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aQueueID"></param>
        /// <param name="aStartingIndex"></param>
        /// <param name="aNumberOfTracks"></param>
        /// <param name="aNumberOfSuccess"></param>
        protected virtual void RemoveTracks(IDvInvocation aInvocation, string aQueueID, string aStartingIndex, string aNumberOfTracks, out string aNumberOfSuccess)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetTracksInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetTracksInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetTracksInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aStartingIndex"></param>
        /// <param name="aNumberOfTracks"></param>
        /// <param name="aTracksMetaData"></param>
        protected virtual void GetTracksInfo(IDvInvocation aInvocation, string aStartingIndex, string aNumberOfTracks, out string aTracksMetaData)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetTracksInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetTracksInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetTracksInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aQueueID"></param>
        /// <param name="aStartingIndex"></param>
        /// <param name="aNextIndex"></param>
        /// <param name="aTracksMetaData"></param>
        /// <param name="aNumberOfSuccess"></param>
        protected virtual void SetTracksInfo(IDvInvocation aInvocation, string aQueueID, string aStartingIndex, string aNextIndex, string aTracksMetaData, out string aNumberOfSuccess)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetTracksCount action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetTracksCount action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetTracksCount was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aNrTracks"></param>
        protected virtual void GetTracksCount(IDvInvocation aInvocation, out string aNrTracks)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetMaxTracks action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetMaxTracks action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetMaxTracks was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aMaxTracks"></param>
        protected virtual void GetMaxTracks(IDvInvocation aInvocation, out string aMaxTracks)
        {
            throw (new ActionDisabledError());
        }

        private static int DoSetNetwork(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderTencentComQPlay1 self = (DvProviderTencentComQPlay1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string sSID;
            string key;
            string authAlgo;
            string cipherAlgo;
            try
            {
                invocation.ReadStart();
                sSID = invocation.ReadString("SSID");
                key = invocation.ReadString("Key");
                authAlgo = invocation.ReadString("AuthAlgo");
                cipherAlgo = invocation.ReadString("CipherAlgo");
                invocation.ReadEnd();
                self.SetNetwork(invocation, sSID, key, authAlgo, cipherAlgo);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetNetwork");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetNetwork" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetNetwork" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetNetwork" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoQPlayAuth(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderTencentComQPlay1 self = (DvProviderTencentComQPlay1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string seed;
            string code;
            string mID;
            string dID;
            try
            {
                invocation.ReadStart();
                seed = invocation.ReadString("Seed");
                invocation.ReadEnd();
                self.QPlayAuth(invocation, seed, out code, out mID, out dID);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "QPlayAuth");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "QPlayAuth" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "QPlayAuth" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Code", code);
                invocation.WriteString("MID", mID);
                invocation.WriteString("DID", dID);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "QPlayAuth" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoInsertTracks(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderTencentComQPlay1 self = (DvProviderTencentComQPlay1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string queueID;
            string startingIndex;
            string tracksMetaData;
            string numberOfSuccess;
            try
            {
                invocation.ReadStart();
                queueID = invocation.ReadString("QueueID");
                startingIndex = invocation.ReadString("StartingIndex");
                tracksMetaData = invocation.ReadString("TracksMetaData");
                invocation.ReadEnd();
                self.InsertTracks(invocation, queueID, startingIndex, tracksMetaData, out numberOfSuccess);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "InsertTracks");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "InsertTracks" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "InsertTracks" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("NumberOfSuccess", numberOfSuccess);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "InsertTracks" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoRemoveTracks(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderTencentComQPlay1 self = (DvProviderTencentComQPlay1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string queueID;
            string startingIndex;
            string numberOfTracks;
            string numberOfSuccess;
            try
            {
                invocation.ReadStart();
                queueID = invocation.ReadString("QueueID");
                startingIndex = invocation.ReadString("StartingIndex");
                numberOfTracks = invocation.ReadString("NumberOfTracks");
                invocation.ReadEnd();
                self.RemoveTracks(invocation, queueID, startingIndex, numberOfTracks, out numberOfSuccess);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "RemoveTracks");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "RemoveTracks" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "RemoveTracks" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("NumberOfSuccess", numberOfSuccess);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "RemoveTracks" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetTracksInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderTencentComQPlay1 self = (DvProviderTencentComQPlay1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string startingIndex;
            string numberOfTracks;
            string tracksMetaData;
            try
            {
                invocation.ReadStart();
                startingIndex = invocation.ReadString("StartingIndex");
                numberOfTracks = invocation.ReadString("NumberOfTracks");
                invocation.ReadEnd();
                self.GetTracksInfo(invocation, startingIndex, numberOfTracks, out tracksMetaData);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetTracksInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetTracksInfo" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetTracksInfo" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("TracksMetaData", tracksMetaData);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetTracksInfo" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetTracksInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderTencentComQPlay1 self = (DvProviderTencentComQPlay1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string queueID;
            string startingIndex;
            string nextIndex;
            string tracksMetaData;
            string numberOfSuccess;
            try
            {
                invocation.ReadStart();
                queueID = invocation.ReadString("QueueID");
                startingIndex = invocation.ReadString("StartingIndex");
                nextIndex = invocation.ReadString("NextIndex");
                tracksMetaData = invocation.ReadString("TracksMetaData");
                invocation.ReadEnd();
                self.SetTracksInfo(invocation, queueID, startingIndex, nextIndex, tracksMetaData, out numberOfSuccess);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetTracksInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetTracksInfo" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetTracksInfo" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("NumberOfSuccess", numberOfSuccess);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetTracksInfo" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetTracksCount(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderTencentComQPlay1 self = (DvProviderTencentComQPlay1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string nrTracks;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetTracksCount(invocation, out nrTracks);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetTracksCount");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetTracksCount" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetTracksCount" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("NrTracks", nrTracks);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetTracksCount" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetMaxTracks(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderTencentComQPlay1 self = (DvProviderTencentComQPlay1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string maxTracks;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetMaxTracks(invocation, out maxTracks);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetMaxTracks");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetMaxTracks" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetMaxTracks" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("MaxTracks", maxTracks);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetMaxTracks" });
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

