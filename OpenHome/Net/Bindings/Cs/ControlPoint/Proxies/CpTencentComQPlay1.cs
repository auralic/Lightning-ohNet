using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyTencentComQPlay1 : ICpProxy, IDisposable
    {
        void SyncSetNetwork(String aSSID, String aKey, String aAuthAlgo, String aCipherAlgo);
        void BeginSetNetwork(String aSSID, String aKey, String aAuthAlgo, String aCipherAlgo, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetNetwork(IntPtr aAsyncHandle);
        void SyncQPlayAuth(String aSeed, out String aCode, out String aMID, out String aDID);
        void BeginQPlayAuth(String aSeed, CpProxy.CallbackAsyncComplete aCallback);
        void EndQPlayAuth(IntPtr aAsyncHandle, out String aCode, out String aMID, out String aDID);
        void SyncInsertTracks(String aQueueID, String aStartingIndex, String aTracksMetaData, out String aNumberOfSuccess);
        void BeginInsertTracks(String aQueueID, String aStartingIndex, String aTracksMetaData, CpProxy.CallbackAsyncComplete aCallback);
        void EndInsertTracks(IntPtr aAsyncHandle, out String aNumberOfSuccess);
        void SyncRemoveTracks(String aQueueID, String aStartingIndex, String aNumberOfTracks, out String aNumberOfSuccess);
        void BeginRemoveTracks(String aQueueID, String aStartingIndex, String aNumberOfTracks, CpProxy.CallbackAsyncComplete aCallback);
        void EndRemoveTracks(IntPtr aAsyncHandle, out String aNumberOfSuccess);
        void SyncGetTracksInfo(String aStartingIndex, String aNumberOfTracks, out String aTracksMetaData);
        void BeginGetTracksInfo(String aStartingIndex, String aNumberOfTracks, CpProxy.CallbackAsyncComplete aCallback);
        void EndGetTracksInfo(IntPtr aAsyncHandle, out String aTracksMetaData);
        void SyncSetTracksInfo(String aQueueID, String aStartingIndex, String aNextIndex, String aTracksMetaData, out String aNumberOfSuccess);
        void BeginSetTracksInfo(String aQueueID, String aStartingIndex, String aNextIndex, String aTracksMetaData, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetTracksInfo(IntPtr aAsyncHandle, out String aNumberOfSuccess);
        void SyncGetTracksCount(out String aNrTracks);
        void BeginGetTracksCount(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetTracksCount(IntPtr aAsyncHandle, out String aNrTracks);
        void SyncGetMaxTracks(out String aMaxTracks);
        void BeginGetMaxTracks(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetMaxTracks(IntPtr aAsyncHandle, out String aMaxTracks);
    }

    internal class SyncSetNetworkTencentComQPlay1 : SyncProxyAction
    {
        private CpProxyTencentComQPlay1 iService;

        public SyncSetNetworkTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetNetwork(aAsyncHandle);
        }
    };

    internal class SyncQPlayAuthTencentComQPlay1 : SyncProxyAction
    {
        private CpProxyTencentComQPlay1 iService;
        private String iCode;
        private String iMID;
        private String iDID;

        public SyncQPlayAuthTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
        {
            iService = aProxy;
        }
        public String Code()
        {
            return iCode;
        }
        public String MID()
        {
            return iMID;
        }
        public String DID()
        {
            return iDID;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndQPlayAuth(aAsyncHandle, out iCode, out iMID, out iDID);
        }
    };

    internal class SyncInsertTracksTencentComQPlay1 : SyncProxyAction
    {
        private CpProxyTencentComQPlay1 iService;
        private String iNumberOfSuccess;

        public SyncInsertTracksTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
        {
            iService = aProxy;
        }
        public String NumberOfSuccess()
        {
            return iNumberOfSuccess;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndInsertTracks(aAsyncHandle, out iNumberOfSuccess);
        }
    };

    internal class SyncRemoveTracksTencentComQPlay1 : SyncProxyAction
    {
        private CpProxyTencentComQPlay1 iService;
        private String iNumberOfSuccess;

        public SyncRemoveTracksTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
        {
            iService = aProxy;
        }
        public String NumberOfSuccess()
        {
            return iNumberOfSuccess;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRemoveTracks(aAsyncHandle, out iNumberOfSuccess);
        }
    };

    internal class SyncGetTracksInfoTencentComQPlay1 : SyncProxyAction
    {
        private CpProxyTencentComQPlay1 iService;
        private String iTracksMetaData;

        public SyncGetTracksInfoTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
        {
            iService = aProxy;
        }
        public String TracksMetaData()
        {
            return iTracksMetaData;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetTracksInfo(aAsyncHandle, out iTracksMetaData);
        }
    };

    internal class SyncSetTracksInfoTencentComQPlay1 : SyncProxyAction
    {
        private CpProxyTencentComQPlay1 iService;
        private String iNumberOfSuccess;

        public SyncSetTracksInfoTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
        {
            iService = aProxy;
        }
        public String NumberOfSuccess()
        {
            return iNumberOfSuccess;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetTracksInfo(aAsyncHandle, out iNumberOfSuccess);
        }
    };

    internal class SyncGetTracksCountTencentComQPlay1 : SyncProxyAction
    {
        private CpProxyTencentComQPlay1 iService;
        private String iNrTracks;

        public SyncGetTracksCountTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
        {
            iService = aProxy;
        }
        public String NrTracks()
        {
            return iNrTracks;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetTracksCount(aAsyncHandle, out iNrTracks);
        }
    };

    internal class SyncGetMaxTracksTencentComQPlay1 : SyncProxyAction
    {
        private CpProxyTencentComQPlay1 iService;
        private String iMaxTracks;

        public SyncGetMaxTracksTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
        {
            iService = aProxy;
        }
        public String MaxTracks()
        {
            return iMaxTracks;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetMaxTracks(aAsyncHandle, out iMaxTracks);
        }
    };

    /// <summary>
    /// Proxy for the tencent.com:QPlay:1 UPnP service
    /// </summary>
    public class CpProxyTencentComQPlay1 : CpProxy, IDisposable, ICpProxyTencentComQPlay1
    {
        private OpenHome.Net.Core.Action iActionSetNetwork;
        private OpenHome.Net.Core.Action iActionQPlayAuth;
        private OpenHome.Net.Core.Action iActionInsertTracks;
        private OpenHome.Net.Core.Action iActionRemoveTracks;
        private OpenHome.Net.Core.Action iActionGetTracksInfo;
        private OpenHome.Net.Core.Action iActionSetTracksInfo;
        private OpenHome.Net.Core.Action iActionGetTracksCount;
        private OpenHome.Net.Core.Action iActionGetMaxTracks;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyTencentComQPlay1(ICpDevice aDevice)
            : base("tencent-com", "QPlay", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionSetNetwork = new OpenHome.Net.Core.Action("SetNetwork");
            param = new ParameterString("SSID", allowedValues);
            iActionSetNetwork.AddInputParameter(param);
            param = new ParameterString("Key", allowedValues);
            iActionSetNetwork.AddInputParameter(param);
            allowedValues.Add("open");
            allowedValues.Add("shared");
            allowedValues.Add("WPA");
            allowedValues.Add("WPAPSK");
            allowedValues.Add("WPA2");
            allowedValues.Add("WPA2PSK");
            param = new ParameterString("AuthAlgo", allowedValues);
            iActionSetNetwork.AddInputParameter(param);
            allowedValues.Clear();
            allowedValues.Add("none");
            allowedValues.Add("WEP");
            allowedValues.Add("TKIP");
            allowedValues.Add("AES");
            param = new ParameterString("CipherAlgo", allowedValues);
            iActionSetNetwork.AddInputParameter(param);
            allowedValues.Clear();

            iActionQPlayAuth = new OpenHome.Net.Core.Action("QPlayAuth");
            param = new ParameterString("Seed", allowedValues);
            iActionQPlayAuth.AddInputParameter(param);
            param = new ParameterString("Code", allowedValues);
            iActionQPlayAuth.AddOutputParameter(param);
            param = new ParameterString("MID", allowedValues);
            iActionQPlayAuth.AddOutputParameter(param);
            param = new ParameterString("DID", allowedValues);
            iActionQPlayAuth.AddOutputParameter(param);

            iActionInsertTracks = new OpenHome.Net.Core.Action("InsertTracks");
            param = new ParameterString("QueueID", allowedValues);
            iActionInsertTracks.AddInputParameter(param);
            param = new ParameterString("StartingIndex", allowedValues);
            iActionInsertTracks.AddInputParameter(param);
            param = new ParameterString("TracksMetaData", allowedValues);
            iActionInsertTracks.AddInputParameter(param);
            param = new ParameterString("NumberOfSuccess", allowedValues);
            iActionInsertTracks.AddOutputParameter(param);

            iActionRemoveTracks = new OpenHome.Net.Core.Action("RemoveTracks");
            param = new ParameterString("QueueID", allowedValues);
            iActionRemoveTracks.AddInputParameter(param);
            param = new ParameterString("StartingIndex", allowedValues);
            iActionRemoveTracks.AddInputParameter(param);
            param = new ParameterString("NumberOfTracks", allowedValues);
            iActionRemoveTracks.AddInputParameter(param);
            param = new ParameterString("NumberOfSuccess", allowedValues);
            iActionRemoveTracks.AddOutputParameter(param);

            iActionGetTracksInfo = new OpenHome.Net.Core.Action("GetTracksInfo");
            param = new ParameterString("StartingIndex", allowedValues);
            iActionGetTracksInfo.AddInputParameter(param);
            param = new ParameterString("NumberOfTracks", allowedValues);
            iActionGetTracksInfo.AddInputParameter(param);
            param = new ParameterString("TracksMetaData", allowedValues);
            iActionGetTracksInfo.AddOutputParameter(param);

            iActionSetTracksInfo = new OpenHome.Net.Core.Action("SetTracksInfo");
            param = new ParameterString("QueueID", allowedValues);
            iActionSetTracksInfo.AddInputParameter(param);
            param = new ParameterString("StartingIndex", allowedValues);
            iActionSetTracksInfo.AddInputParameter(param);
            param = new ParameterString("NextIndex", allowedValues);
            iActionSetTracksInfo.AddInputParameter(param);
            param = new ParameterString("TracksMetaData", allowedValues);
            iActionSetTracksInfo.AddInputParameter(param);
            param = new ParameterString("NumberOfSuccess", allowedValues);
            iActionSetTracksInfo.AddOutputParameter(param);

            iActionGetTracksCount = new OpenHome.Net.Core.Action("GetTracksCount");
            param = new ParameterString("NrTracks", allowedValues);
            iActionGetTracksCount.AddOutputParameter(param);

            iActionGetMaxTracks = new OpenHome.Net.Core.Action("GetMaxTracks");
            param = new ParameterString("MaxTracks", allowedValues);
            iActionGetMaxTracks.AddOutputParameter(param);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSSID"></param>
        /// <param name="aKey"></param>
        /// <param name="aAuthAlgo"></param>
        /// <param name="aCipherAlgo"></param>
        public void SyncSetNetwork(String aSSID, String aKey, String aAuthAlgo, String aCipherAlgo)
        {
            SyncSetNetworkTencentComQPlay1 sync = new SyncSetNetworkTencentComQPlay1(this);
            BeginSetNetwork(aSSID, aKey, aAuthAlgo, aCipherAlgo, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetNetwork().</remarks>
        /// <param name="aSSID"></param>
        /// <param name="aKey"></param>
        /// <param name="aAuthAlgo"></param>
        /// <param name="aCipherAlgo"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetNetwork(String aSSID, String aKey, String aAuthAlgo, String aCipherAlgo, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetNetwork, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetwork.InputParameter(inIndex++), aSSID));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetwork.InputParameter(inIndex++), aKey));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetwork.InputParameter(inIndex++), aAuthAlgo));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetNetwork.InputParameter(inIndex++), aCipherAlgo));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetNetwork(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSeed"></param>
        /// <param name="aCode"></param>
        /// <param name="aMID"></param>
        /// <param name="aDID"></param>
        public void SyncQPlayAuth(String aSeed, out String aCode, out String aMID, out String aDID)
        {
            SyncQPlayAuthTencentComQPlay1 sync = new SyncQPlayAuthTencentComQPlay1(this);
            BeginQPlayAuth(aSeed, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aCode = sync.Code();
            aMID = sync.MID();
            aDID = sync.DID();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndQPlayAuth().</remarks>
        /// <param name="aSeed"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginQPlayAuth(String aSeed, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionQPlayAuth, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionQPlayAuth.InputParameter(inIndex++), aSeed));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionQPlayAuth.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionQPlayAuth.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionQPlayAuth.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aCode"></param>
        /// <param name="aMID"></param>
        /// <param name="aDID"></param>
        public void EndQPlayAuth(IntPtr aAsyncHandle, out String aCode, out String aMID, out String aDID)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aCode = Invocation.OutputString(aAsyncHandle, index++);
            aMID = Invocation.OutputString(aAsyncHandle, index++);
            aDID = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aQueueID"></param>
        /// <param name="aStartingIndex"></param>
        /// <param name="aTracksMetaData"></param>
        /// <param name="aNumberOfSuccess"></param>
        public void SyncInsertTracks(String aQueueID, String aStartingIndex, String aTracksMetaData, out String aNumberOfSuccess)
        {
            SyncInsertTracksTencentComQPlay1 sync = new SyncInsertTracksTencentComQPlay1(this);
            BeginInsertTracks(aQueueID, aStartingIndex, aTracksMetaData, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aNumberOfSuccess = sync.NumberOfSuccess();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndInsertTracks().</remarks>
        /// <param name="aQueueID"></param>
        /// <param name="aStartingIndex"></param>
        /// <param name="aTracksMetaData"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginInsertTracks(String aQueueID, String aStartingIndex, String aTracksMetaData, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionInsertTracks, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionInsertTracks.InputParameter(inIndex++), aQueueID));
            invocation.AddInput(new ArgumentString((ParameterString)iActionInsertTracks.InputParameter(inIndex++), aStartingIndex));
            invocation.AddInput(new ArgumentString((ParameterString)iActionInsertTracks.InputParameter(inIndex++), aTracksMetaData));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionInsertTracks.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aNumberOfSuccess"></param>
        public void EndInsertTracks(IntPtr aAsyncHandle, out String aNumberOfSuccess)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aNumberOfSuccess = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aQueueID"></param>
        /// <param name="aStartingIndex"></param>
        /// <param name="aNumberOfTracks"></param>
        /// <param name="aNumberOfSuccess"></param>
        public void SyncRemoveTracks(String aQueueID, String aStartingIndex, String aNumberOfTracks, out String aNumberOfSuccess)
        {
            SyncRemoveTracksTencentComQPlay1 sync = new SyncRemoveTracksTencentComQPlay1(this);
            BeginRemoveTracks(aQueueID, aStartingIndex, aNumberOfTracks, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aNumberOfSuccess = sync.NumberOfSuccess();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndRemoveTracks().</remarks>
        /// <param name="aQueueID"></param>
        /// <param name="aStartingIndex"></param>
        /// <param name="aNumberOfTracks"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginRemoveTracks(String aQueueID, String aStartingIndex, String aNumberOfTracks, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionRemoveTracks, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionRemoveTracks.InputParameter(inIndex++), aQueueID));
            invocation.AddInput(new ArgumentString((ParameterString)iActionRemoveTracks.InputParameter(inIndex++), aStartingIndex));
            invocation.AddInput(new ArgumentString((ParameterString)iActionRemoveTracks.InputParameter(inIndex++), aNumberOfTracks));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionRemoveTracks.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aNumberOfSuccess"></param>
        public void EndRemoveTracks(IntPtr aAsyncHandle, out String aNumberOfSuccess)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aNumberOfSuccess = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aStartingIndex"></param>
        /// <param name="aNumberOfTracks"></param>
        /// <param name="aTracksMetaData"></param>
        public void SyncGetTracksInfo(String aStartingIndex, String aNumberOfTracks, out String aTracksMetaData)
        {
            SyncGetTracksInfoTencentComQPlay1 sync = new SyncGetTracksInfoTencentComQPlay1(this);
            BeginGetTracksInfo(aStartingIndex, aNumberOfTracks, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aTracksMetaData = sync.TracksMetaData();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetTracksInfo().</remarks>
        /// <param name="aStartingIndex"></param>
        /// <param name="aNumberOfTracks"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetTracksInfo(String aStartingIndex, String aNumberOfTracks, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetTracksInfo, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionGetTracksInfo.InputParameter(inIndex++), aStartingIndex));
            invocation.AddInput(new ArgumentString((ParameterString)iActionGetTracksInfo.InputParameter(inIndex++), aNumberOfTracks));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetTracksInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aTracksMetaData"></param>
        public void EndGetTracksInfo(IntPtr aAsyncHandle, out String aTracksMetaData)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aTracksMetaData = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aQueueID"></param>
        /// <param name="aStartingIndex"></param>
        /// <param name="aNextIndex"></param>
        /// <param name="aTracksMetaData"></param>
        /// <param name="aNumberOfSuccess"></param>
        public void SyncSetTracksInfo(String aQueueID, String aStartingIndex, String aNextIndex, String aTracksMetaData, out String aNumberOfSuccess)
        {
            SyncSetTracksInfoTencentComQPlay1 sync = new SyncSetTracksInfoTencentComQPlay1(this);
            BeginSetTracksInfo(aQueueID, aStartingIndex, aNextIndex, aTracksMetaData, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aNumberOfSuccess = sync.NumberOfSuccess();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetTracksInfo().</remarks>
        /// <param name="aQueueID"></param>
        /// <param name="aStartingIndex"></param>
        /// <param name="aNextIndex"></param>
        /// <param name="aTracksMetaData"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetTracksInfo(String aQueueID, String aStartingIndex, String aNextIndex, String aTracksMetaData, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetTracksInfo, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetTracksInfo.InputParameter(inIndex++), aQueueID));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetTracksInfo.InputParameter(inIndex++), aStartingIndex));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetTracksInfo.InputParameter(inIndex++), aNextIndex));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetTracksInfo.InputParameter(inIndex++), aTracksMetaData));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionSetTracksInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aNumberOfSuccess"></param>
        public void EndSetTracksInfo(IntPtr aAsyncHandle, out String aNumberOfSuccess)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aNumberOfSuccess = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aNrTracks"></param>
        public void SyncGetTracksCount(out String aNrTracks)
        {
            SyncGetTracksCountTencentComQPlay1 sync = new SyncGetTracksCountTencentComQPlay1(this);
            BeginGetTracksCount(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aNrTracks = sync.NrTracks();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetTracksCount().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetTracksCount(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetTracksCount, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetTracksCount.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aNrTracks"></param>
        public void EndGetTracksCount(IntPtr aAsyncHandle, out String aNrTracks)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aNrTracks = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aMaxTracks"></param>
        public void SyncGetMaxTracks(out String aMaxTracks)
        {
            SyncGetMaxTracksTencentComQPlay1 sync = new SyncGetMaxTracksTencentComQPlay1(this);
            BeginGetMaxTracks(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aMaxTracks = sync.MaxTracks();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetMaxTracks().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetMaxTracks(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetMaxTracks, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetMaxTracks.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aMaxTracks"></param>
        public void EndGetMaxTracks(IntPtr aAsyncHandle, out String aMaxTracks)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aMaxTracks = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Must be called for each class instance.  Must be called before Core.Library.Close().
        /// </summary>
        public void Dispose()
        {
            lock (this)
            {
                if (iHandle == IntPtr.Zero)
                    return;
                DisposeProxy();
                iHandle = IntPtr.Zero;
            }
            iActionSetNetwork.Dispose();
            iActionQPlayAuth.Dispose();
            iActionInsertTracks.Dispose();
            iActionRemoveTracks.Dispose();
            iActionGetTracksInfo.Dispose();
            iActionSetTracksInfo.Dispose();
            iActionGetTracksCount.Dispose();
            iActionGetMaxTracks.Dispose();
        }
    }
}

