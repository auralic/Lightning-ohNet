using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgStreaming1 : ICpProxy, IDisposable
    {
        void SyncPlay();
        void BeginPlay(CpProxy.CallbackAsyncComplete aCallback);
        void EndPlay(IntPtr aAsyncHandle);
        void SyncPause();
        void BeginPause(CpProxy.CallbackAsyncComplete aCallback);
        void EndPause(IntPtr aAsyncHandle);
        void SyncStop();
        void BeginStop(CpProxy.CallbackAsyncComplete aCallback);
        void EndStop(IntPtr aAsyncHandle);
        void SyncNext();
        void BeginNext(CpProxy.CallbackAsyncComplete aCallback);
        void EndNext(IntPtr aAsyncHandle);
        void SyncPrevious();
        void BeginPrevious(CpProxy.CallbackAsyncComplete aCallback);
        void EndPrevious(IntPtr aAsyncHandle);
        void SyncSetRepeat(bool aValue);
        void BeginSetRepeat(bool aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetRepeat(IntPtr aAsyncHandle);
        void SyncRepeat(out bool aValue);
        void BeginRepeat(CpProxy.CallbackAsyncComplete aCallback);
        void EndRepeat(IntPtr aAsyncHandle, out bool aValue);
        void SyncSetShuffle(bool aValue);
        void BeginSetShuffle(bool aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetShuffle(IntPtr aAsyncHandle);
        void SyncShuffle(out bool aValue);
        void BeginShuffle(CpProxy.CallbackAsyncComplete aCallback);
        void EndShuffle(IntPtr aAsyncHandle, out bool aValue);
        void SyncSeekSecondAbsolute(uint aValue);
        void BeginSeekSecondAbsolute(uint aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSeekSecondAbsolute(IntPtr aAsyncHandle);
        void SyncSeekSecondRelative(int aValue);
        void BeginSeekSecondRelative(int aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSeekSecondRelative(IntPtr aAsyncHandle);
        void SyncSeekId(uint aValue);
        void BeginSeekId(uint aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSeekId(IntPtr aAsyncHandle);
        void SyncSeekIndex(uint aValue);
        void BeginSeekIndex(uint aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSeekIndex(IntPtr aAsyncHandle);
        void SyncTransportState(out String aValue);
        void BeginTransportState(CpProxy.CallbackAsyncComplete aCallback);
        void EndTransportState(IntPtr aAsyncHandle, out String aValue);
        void SyncId(out uint aValue);
        void BeginId(CpProxy.CallbackAsyncComplete aCallback);
        void EndId(IntPtr aAsyncHandle, out uint aValue);
        void SyncRead(uint aId, out String aUri, out String aMetadata);
        void BeginRead(uint aId, CpProxy.CallbackAsyncComplete aCallback);
        void EndRead(IntPtr aAsyncHandle, out String aUri, out String aMetadata);
        void SyncReadList(String aIdList, out String aTrackList);
        void BeginReadList(String aIdList, CpProxy.CallbackAsyncComplete aCallback);
        void EndReadList(IntPtr aAsyncHandle, out String aTrackList);
        void SyncInsert(uint aAfterId, String aUri, String aMetadata, out uint aNewId);
        void BeginInsert(uint aAfterId, String aUri, String aMetadata, CpProxy.CallbackAsyncComplete aCallback);
        void EndInsert(IntPtr aAsyncHandle, out uint aNewId);
        void SyncDeleteId(uint aValue);
        void BeginDeleteId(uint aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndDeleteId(IntPtr aAsyncHandle);
        void SyncDeleteAll();
        void BeginDeleteAll(CpProxy.CallbackAsyncComplete aCallback);
        void EndDeleteAll(IntPtr aAsyncHandle);
        void SyncTracksMax(out uint aValue);
        void BeginTracksMax(CpProxy.CallbackAsyncComplete aCallback);
        void EndTracksMax(IntPtr aAsyncHandle, out uint aValue);
        void SyncIdArray(out uint aToken, out byte[] aArray);
        void BeginIdArray(CpProxy.CallbackAsyncComplete aCallback);
        void EndIdArray(IntPtr aAsyncHandle, out uint aToken, out byte[] aArray);
        void SyncIdArrayChanged(uint aToken, out bool aValue);
        void BeginIdArrayChanged(uint aToken, CpProxy.CallbackAsyncComplete aCallback);
        void EndIdArrayChanged(IntPtr aAsyncHandle, out bool aValue);
        void SyncProtocolInfo(out String aValue);
        void BeginProtocolInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndProtocolInfo(IntPtr aAsyncHandle, out String aValue);
        void SetPropertyTransportStateChanged(System.Action aTransportStateChanged);
        String PropertyTransportState();
        void SetPropertyRepeatChanged(System.Action aRepeatChanged);
        bool PropertyRepeat();
        void SetPropertyShuffleChanged(System.Action aShuffleChanged);
        bool PropertyShuffle();
        void SetPropertyIdChanged(System.Action aIdChanged);
        uint PropertyId();
        void SetPropertyIdArrayChanged(System.Action aIdArrayChanged);
        byte[] PropertyIdArray();
        void SetPropertyTracksMaxChanged(System.Action aTracksMaxChanged);
        uint PropertyTracksMax();
        void SetPropertyProtocolInfoChanged(System.Action aProtocolInfoChanged);
        String PropertyProtocolInfo();
    }

    internal class SyncPlayAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncPlayAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPlay(aAsyncHandle);
        }
    };

    internal class SyncPauseAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncPauseAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPause(aAsyncHandle);
        }
    };

    internal class SyncStopAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncStopAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndStop(aAsyncHandle);
        }
    };

    internal class SyncNextAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncNextAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndNext(aAsyncHandle);
        }
    };

    internal class SyncPreviousAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncPreviousAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPrevious(aAsyncHandle);
        }
    };

    internal class SyncSetRepeatAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncSetRepeatAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetRepeat(aAsyncHandle);
        }
    };

    internal class SyncRepeatAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;
        private bool iValue;

        public SyncRepeatAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        public bool Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRepeat(aAsyncHandle, out iValue);
        }
    };

    internal class SyncSetShuffleAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncSetShuffleAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetShuffle(aAsyncHandle);
        }
    };

    internal class SyncShuffleAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;
        private bool iValue;

        public SyncShuffleAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        public bool Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndShuffle(aAsyncHandle, out iValue);
        }
    };

    internal class SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSeekSecondAbsolute(aAsyncHandle);
        }
    };

    internal class SyncSeekSecondRelativeAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncSeekSecondRelativeAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSeekSecondRelative(aAsyncHandle);
        }
    };

    internal class SyncSeekIdAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncSeekIdAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSeekId(aAsyncHandle);
        }
    };

    internal class SyncSeekIndexAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncSeekIndexAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSeekIndex(aAsyncHandle);
        }
    };

    internal class SyncTransportStateAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;
        private String iValue;

        public SyncTransportStateAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        public String Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndTransportState(aAsyncHandle, out iValue);
        }
    };

    internal class SyncIdAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;
        private uint iValue;

        public SyncIdAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        public uint Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndId(aAsyncHandle, out iValue);
        }
    };

    internal class SyncReadAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;
        private String iUri;
        private String iMetadata;

        public SyncReadAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        public String Uri()
        {
            return iUri;
        }
        public String Metadata()
        {
            return iMetadata;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRead(aAsyncHandle, out iUri, out iMetadata);
        }
    };

    internal class SyncReadListAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;
        private String iTrackList;

        public SyncReadListAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        public String TrackList()
        {
            return iTrackList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndReadList(aAsyncHandle, out iTrackList);
        }
    };

    internal class SyncInsertAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;
        private uint iNewId;

        public SyncInsertAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        public uint NewId()
        {
            return iNewId;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndInsert(aAsyncHandle, out iNewId);
        }
    };

    internal class SyncDeleteIdAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncDeleteIdAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndDeleteId(aAsyncHandle);
        }
    };

    internal class SyncDeleteAllAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;

        public SyncDeleteAllAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndDeleteAll(aAsyncHandle);
        }
    };

    internal class SyncTracksMaxAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;
        private uint iValue;

        public SyncTracksMaxAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        public uint Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndTracksMax(aAsyncHandle, out iValue);
        }
    };

    internal class SyncIdArrayAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;
        private uint iToken;
        private byte[] iArray;

        public SyncIdArrayAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        public uint Token()
        {
            return iToken;
        }
        public byte[] Array()
        {
            return iArray;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndIdArray(aAsyncHandle, out iToken, out iArray);
        }
    };

    internal class SyncIdArrayChangedAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;
        private bool iValue;

        public SyncIdArrayChangedAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        public bool Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndIdArrayChanged(aAsyncHandle, out iValue);
        }
    };

    internal class SyncProtocolInfoAvOpenhomeOrgStreaming1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgStreaming1 iService;
        private String iValue;

        public SyncProtocolInfoAvOpenhomeOrgStreaming1(CpProxyAvOpenhomeOrgStreaming1 aProxy)
        {
            iService = aProxy;
        }
        public String Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndProtocolInfo(aAsyncHandle, out iValue);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:Streaming:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgStreaming1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgStreaming1
    {
        private OpenHome.Net.Core.Action iActionPlay;
        private OpenHome.Net.Core.Action iActionPause;
        private OpenHome.Net.Core.Action iActionStop;
        private OpenHome.Net.Core.Action iActionNext;
        private OpenHome.Net.Core.Action iActionPrevious;
        private OpenHome.Net.Core.Action iActionSetRepeat;
        private OpenHome.Net.Core.Action iActionRepeat;
        private OpenHome.Net.Core.Action iActionSetShuffle;
        private OpenHome.Net.Core.Action iActionShuffle;
        private OpenHome.Net.Core.Action iActionSeekSecondAbsolute;
        private OpenHome.Net.Core.Action iActionSeekSecondRelative;
        private OpenHome.Net.Core.Action iActionSeekId;
        private OpenHome.Net.Core.Action iActionSeekIndex;
        private OpenHome.Net.Core.Action iActionTransportState;
        private OpenHome.Net.Core.Action iActionId;
        private OpenHome.Net.Core.Action iActionRead;
        private OpenHome.Net.Core.Action iActionReadList;
        private OpenHome.Net.Core.Action iActionInsert;
        private OpenHome.Net.Core.Action iActionDeleteId;
        private OpenHome.Net.Core.Action iActionDeleteAll;
        private OpenHome.Net.Core.Action iActionTracksMax;
        private OpenHome.Net.Core.Action iActionIdArray;
        private OpenHome.Net.Core.Action iActionIdArrayChanged;
        private OpenHome.Net.Core.Action iActionProtocolInfo;
        private PropertyString iTransportState;
        private PropertyBool iRepeat;
        private PropertyBool iShuffle;
        private PropertyUint iId;
        private PropertyBinary iIdArray;
        private PropertyUint iTracksMax;
        private PropertyString iProtocolInfo;
        private System.Action iTransportStateChanged;
        private System.Action iRepeatChanged;
        private System.Action iShuffleChanged;
        private System.Action iIdChanged;
        private System.Action iIdArrayChanged;
        private System.Action iTracksMaxChanged;
        private System.Action iProtocolInfoChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgStreaming1(ICpDevice aDevice)
            : base("av-openhome-org", "Streaming", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionPlay = new OpenHome.Net.Core.Action("Play");

            iActionPause = new OpenHome.Net.Core.Action("Pause");

            iActionStop = new OpenHome.Net.Core.Action("Stop");

            iActionNext = new OpenHome.Net.Core.Action("Next");

            iActionPrevious = new OpenHome.Net.Core.Action("Previous");

            iActionSetRepeat = new OpenHome.Net.Core.Action("SetRepeat");
            param = new ParameterBool("Value");
            iActionSetRepeat.AddInputParameter(param);

            iActionRepeat = new OpenHome.Net.Core.Action("Repeat");
            param = new ParameterBool("Value");
            iActionRepeat.AddOutputParameter(param);

            iActionSetShuffle = new OpenHome.Net.Core.Action("SetShuffle");
            param = new ParameterBool("Value");
            iActionSetShuffle.AddInputParameter(param);

            iActionShuffle = new OpenHome.Net.Core.Action("Shuffle");
            param = new ParameterBool("Value");
            iActionShuffle.AddOutputParameter(param);

            iActionSeekSecondAbsolute = new OpenHome.Net.Core.Action("SeekSecondAbsolute");
            param = new ParameterUint("Value");
            iActionSeekSecondAbsolute.AddInputParameter(param);

            iActionSeekSecondRelative = new OpenHome.Net.Core.Action("SeekSecondRelative");
            param = new ParameterInt("Value");
            iActionSeekSecondRelative.AddInputParameter(param);

            iActionSeekId = new OpenHome.Net.Core.Action("SeekId");
            param = new ParameterUint("Value");
            iActionSeekId.AddInputParameter(param);

            iActionSeekIndex = new OpenHome.Net.Core.Action("SeekIndex");
            param = new ParameterUint("Value");
            iActionSeekIndex.AddInputParameter(param);

            iActionTransportState = new OpenHome.Net.Core.Action("TransportState");
            allowedValues.Add("Playing");
            allowedValues.Add("Paused");
            allowedValues.Add("Stopped");
            allowedValues.Add("Buffering");
            param = new ParameterString("Value", allowedValues);
            iActionTransportState.AddOutputParameter(param);
            allowedValues.Clear();

            iActionId = new OpenHome.Net.Core.Action("Id");
            param = new ParameterUint("Value");
            iActionId.AddOutputParameter(param);

            iActionRead = new OpenHome.Net.Core.Action("Read");
            param = new ParameterUint("Id");
            iActionRead.AddInputParameter(param);
            param = new ParameterString("Uri", allowedValues);
            iActionRead.AddOutputParameter(param);
            param = new ParameterString("Metadata", allowedValues);
            iActionRead.AddOutputParameter(param);

            iActionReadList = new OpenHome.Net.Core.Action("ReadList");
            param = new ParameterString("IdList", allowedValues);
            iActionReadList.AddInputParameter(param);
            param = new ParameterString("TrackList", allowedValues);
            iActionReadList.AddOutputParameter(param);

            iActionInsert = new OpenHome.Net.Core.Action("Insert");
            param = new ParameterUint("AfterId");
            iActionInsert.AddInputParameter(param);
            param = new ParameterString("Uri", allowedValues);
            iActionInsert.AddInputParameter(param);
            param = new ParameterString("Metadata", allowedValues);
            iActionInsert.AddInputParameter(param);
            param = new ParameterUint("NewId");
            iActionInsert.AddOutputParameter(param);

            iActionDeleteId = new OpenHome.Net.Core.Action("DeleteId");
            param = new ParameterUint("Value");
            iActionDeleteId.AddInputParameter(param);

            iActionDeleteAll = new OpenHome.Net.Core.Action("DeleteAll");

            iActionTracksMax = new OpenHome.Net.Core.Action("TracksMax");
            param = new ParameterUint("Value");
            iActionTracksMax.AddOutputParameter(param);

            iActionIdArray = new OpenHome.Net.Core.Action("IdArray");
            param = new ParameterUint("Token");
            iActionIdArray.AddOutputParameter(param);
            param = new ParameterBinary("Array");
            iActionIdArray.AddOutputParameter(param);

            iActionIdArrayChanged = new OpenHome.Net.Core.Action("IdArrayChanged");
            param = new ParameterUint("Token");
            iActionIdArrayChanged.AddInputParameter(param);
            param = new ParameterBool("Value");
            iActionIdArrayChanged.AddOutputParameter(param);

            iActionProtocolInfo = new OpenHome.Net.Core.Action("ProtocolInfo");
            param = new ParameterString("Value", allowedValues);
            iActionProtocolInfo.AddOutputParameter(param);

            iTransportState = new PropertyString("TransportState", TransportStatePropertyChanged);
            AddProperty(iTransportState);
            iRepeat = new PropertyBool("Repeat", RepeatPropertyChanged);
            AddProperty(iRepeat);
            iShuffle = new PropertyBool("Shuffle", ShufflePropertyChanged);
            AddProperty(iShuffle);
            iId = new PropertyUint("Id", IdPropertyChanged);
            AddProperty(iId);
            iIdArray = new PropertyBinary("IdArray", IdArrayPropertyChanged);
            AddProperty(iIdArray);
            iTracksMax = new PropertyUint("TracksMax", TracksMaxPropertyChanged);
            AddProperty(iTracksMax);
            iProtocolInfo = new PropertyString("ProtocolInfo", ProtocolInfoPropertyChanged);
            AddProperty(iProtocolInfo);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncPlay()
        {
            SyncPlayAvOpenhomeOrgStreaming1 sync = new SyncPlayAvOpenhomeOrgStreaming1(this);
            BeginPlay(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndPlay().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginPlay(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionPlay, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndPlay(IntPtr aAsyncHandle)
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
        public void SyncPause()
        {
            SyncPauseAvOpenhomeOrgStreaming1 sync = new SyncPauseAvOpenhomeOrgStreaming1(this);
            BeginPause(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndPause().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginPause(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionPause, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndPause(IntPtr aAsyncHandle)
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
        public void SyncStop()
        {
            SyncStopAvOpenhomeOrgStreaming1 sync = new SyncStopAvOpenhomeOrgStreaming1(this);
            BeginStop(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndStop().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginStop(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionStop, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndStop(IntPtr aAsyncHandle)
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
        public void SyncNext()
        {
            SyncNextAvOpenhomeOrgStreaming1 sync = new SyncNextAvOpenhomeOrgStreaming1(this);
            BeginNext(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndNext().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginNext(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionNext, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndNext(IntPtr aAsyncHandle)
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
        public void SyncPrevious()
        {
            SyncPreviousAvOpenhomeOrgStreaming1 sync = new SyncPreviousAvOpenhomeOrgStreaming1(this);
            BeginPrevious(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndPrevious().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginPrevious(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionPrevious, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndPrevious(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncSetRepeat(bool aValue)
        {
            SyncSetRepeatAvOpenhomeOrgStreaming1 sync = new SyncSetRepeatAvOpenhomeOrgStreaming1(this);
            BeginSetRepeat(aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetRepeat().</remarks>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetRepeat(bool aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetRepeat, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetRepeat.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetRepeat(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncRepeat(out bool aValue)
        {
            SyncRepeatAvOpenhomeOrgStreaming1 sync = new SyncRepeatAvOpenhomeOrgStreaming1(this);
            BeginRepeat(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndRepeat().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginRepeat(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionRepeat, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionRepeat.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndRepeat(IntPtr aAsyncHandle, out bool aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aValue"></param>
        public void SyncSetShuffle(bool aValue)
        {
            SyncSetShuffleAvOpenhomeOrgStreaming1 sync = new SyncSetShuffleAvOpenhomeOrgStreaming1(this);
            BeginSetShuffle(aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetShuffle().</remarks>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetShuffle(bool aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetShuffle, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetShuffle.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetShuffle(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncShuffle(out bool aValue)
        {
            SyncShuffleAvOpenhomeOrgStreaming1 sync = new SyncShuffleAvOpenhomeOrgStreaming1(this);
            BeginShuffle(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndShuffle().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginShuffle(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionShuffle, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionShuffle.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndShuffle(IntPtr aAsyncHandle, out bool aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aValue"></param>
        public void SyncSeekSecondAbsolute(uint aValue)
        {
            SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1 sync = new SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1(this);
            BeginSeekSecondAbsolute(aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSeekSecondAbsolute().</remarks>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSeekSecondAbsolute(uint aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSeekSecondAbsolute, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSeekSecondAbsolute.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSeekSecondAbsolute(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncSeekSecondRelative(int aValue)
        {
            SyncSeekSecondRelativeAvOpenhomeOrgStreaming1 sync = new SyncSeekSecondRelativeAvOpenhomeOrgStreaming1(this);
            BeginSeekSecondRelative(aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSeekSecondRelative().</remarks>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSeekSecondRelative(int aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSeekSecondRelative, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentInt((ParameterInt)iActionSeekSecondRelative.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSeekSecondRelative(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncSeekId(uint aValue)
        {
            SyncSeekIdAvOpenhomeOrgStreaming1 sync = new SyncSeekIdAvOpenhomeOrgStreaming1(this);
            BeginSeekId(aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSeekId().</remarks>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSeekId(uint aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSeekId, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSeekId.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSeekId(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncSeekIndex(uint aValue)
        {
            SyncSeekIndexAvOpenhomeOrgStreaming1 sync = new SyncSeekIndexAvOpenhomeOrgStreaming1(this);
            BeginSeekIndex(aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSeekIndex().</remarks>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSeekIndex(uint aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSeekIndex, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSeekIndex.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSeekIndex(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncTransportState(out String aValue)
        {
            SyncTransportStateAvOpenhomeOrgStreaming1 sync = new SyncTransportStateAvOpenhomeOrgStreaming1(this);
            BeginTransportState(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndTransportState().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginTransportState(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionTransportState, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionTransportState.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndTransportState(IntPtr aAsyncHandle, out String aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aValue"></param>
        public void SyncId(out uint aValue)
        {
            SyncIdAvOpenhomeOrgStreaming1 sync = new SyncIdAvOpenhomeOrgStreaming1(this);
            BeginId(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndId().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginId(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionId, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionId.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndId(IntPtr aAsyncHandle, out uint aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        public void SyncRead(uint aId, out String aUri, out String aMetadata)
        {
            SyncReadAvOpenhomeOrgStreaming1 sync = new SyncReadAvOpenhomeOrgStreaming1(this);
            BeginRead(aId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aUri = sync.Uri();
            aMetadata = sync.Metadata();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndRead().</remarks>
        /// <param name="aId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginRead(uint aId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionRead, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionRead.InputParameter(inIndex++), aId));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionRead.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionRead.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        public void EndRead(IntPtr aAsyncHandle, out String aUri, out String aMetadata)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aUri = Invocation.OutputString(aAsyncHandle, index++);
            aMetadata = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aIdList"></param>
        /// <param name="aTrackList"></param>
        public void SyncReadList(String aIdList, out String aTrackList)
        {
            SyncReadListAvOpenhomeOrgStreaming1 sync = new SyncReadListAvOpenhomeOrgStreaming1(this);
            BeginReadList(aIdList, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aTrackList = sync.TrackList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndReadList().</remarks>
        /// <param name="aIdList"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginReadList(String aIdList, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionReadList, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionReadList.InputParameter(inIndex++), aIdList));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionReadList.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aTrackList"></param>
        public void EndReadList(IntPtr aAsyncHandle, out String aTrackList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aTrackList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aAfterId"></param>
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        /// <param name="aNewId"></param>
        public void SyncInsert(uint aAfterId, String aUri, String aMetadata, out uint aNewId)
        {
            SyncInsertAvOpenhomeOrgStreaming1 sync = new SyncInsertAvOpenhomeOrgStreaming1(this);
            BeginInsert(aAfterId, aUri, aMetadata, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aNewId = sync.NewId();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndInsert().</remarks>
        /// <param name="aAfterId"></param>
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginInsert(uint aAfterId, String aUri, String aMetadata, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionInsert, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionInsert.InputParameter(inIndex++), aAfterId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionInsert.InputParameter(inIndex++), aUri));
            invocation.AddInput(new ArgumentString((ParameterString)iActionInsert.InputParameter(inIndex++), aMetadata));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionInsert.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aNewId"></param>
        public void EndInsert(IntPtr aAsyncHandle, out uint aNewId)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aNewId = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aValue"></param>
        public void SyncDeleteId(uint aValue)
        {
            SyncDeleteIdAvOpenhomeOrgStreaming1 sync = new SyncDeleteIdAvOpenhomeOrgStreaming1(this);
            BeginDeleteId(aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndDeleteId().</remarks>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginDeleteId(uint aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionDeleteId, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionDeleteId.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndDeleteId(IntPtr aAsyncHandle)
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
        public void SyncDeleteAll()
        {
            SyncDeleteAllAvOpenhomeOrgStreaming1 sync = new SyncDeleteAllAvOpenhomeOrgStreaming1(this);
            BeginDeleteAll(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndDeleteAll().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginDeleteAll(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionDeleteAll, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndDeleteAll(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncTracksMax(out uint aValue)
        {
            SyncTracksMaxAvOpenhomeOrgStreaming1 sync = new SyncTracksMaxAvOpenhomeOrgStreaming1(this);
            BeginTracksMax(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndTracksMax().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginTracksMax(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionTracksMax, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionTracksMax.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndTracksMax(IntPtr aAsyncHandle, out uint aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aToken"></param>
        /// <param name="aArray"></param>
        public void SyncIdArray(out uint aToken, out byte[] aArray)
        {
            SyncIdArrayAvOpenhomeOrgStreaming1 sync = new SyncIdArrayAvOpenhomeOrgStreaming1(this);
            BeginIdArray(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aToken = sync.Token();
            aArray = sync.Array();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndIdArray().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginIdArray(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionIdArray, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionIdArray.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentBinary((ParameterBinary)iActionIdArray.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aToken"></param>
        /// <param name="aArray"></param>
        public void EndIdArray(IntPtr aAsyncHandle, out uint aToken, out byte[] aArray)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aToken = Invocation.OutputUint(aAsyncHandle, index++);
            aArray = Invocation.OutputBinary(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aToken"></param>
        /// <param name="aValue"></param>
        public void SyncIdArrayChanged(uint aToken, out bool aValue)
        {
            SyncIdArrayChangedAvOpenhomeOrgStreaming1 sync = new SyncIdArrayChangedAvOpenhomeOrgStreaming1(this);
            BeginIdArrayChanged(aToken, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndIdArrayChanged().</remarks>
        /// <param name="aToken"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginIdArrayChanged(uint aToken, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionIdArrayChanged, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionIdArrayChanged.InputParameter(inIndex++), aToken));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionIdArrayChanged.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndIdArrayChanged(IntPtr aAsyncHandle, out bool aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aValue"></param>
        public void SyncProtocolInfo(out String aValue)
        {
            SyncProtocolInfoAvOpenhomeOrgStreaming1 sync = new SyncProtocolInfoAvOpenhomeOrgStreaming1(this);
            BeginProtocolInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndProtocolInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginProtocolInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionProtocolInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionProtocolInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndProtocolInfo(IntPtr aAsyncHandle, out String aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the TransportState state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgStreaming1 instance will not overlap.</remarks>
        /// <param name="aTransportStateChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyTransportStateChanged(System.Action aTransportStateChanged)
        {
            lock (iPropertyLock)
            {
                iTransportStateChanged = aTransportStateChanged;
            }
        }

        private void TransportStatePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iTransportStateChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Repeat state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgStreaming1 instance will not overlap.</remarks>
        /// <param name="aRepeatChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyRepeatChanged(System.Action aRepeatChanged)
        {
            lock (iPropertyLock)
            {
                iRepeatChanged = aRepeatChanged;
            }
        }

        private void RepeatPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iRepeatChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Shuffle state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgStreaming1 instance will not overlap.</remarks>
        /// <param name="aShuffleChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyShuffleChanged(System.Action aShuffleChanged)
        {
            lock (iPropertyLock)
            {
                iShuffleChanged = aShuffleChanged;
            }
        }

        private void ShufflePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iShuffleChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Id state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgStreaming1 instance will not overlap.</remarks>
        /// <param name="aIdChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyIdChanged(System.Action aIdChanged)
        {
            lock (iPropertyLock)
            {
                iIdChanged = aIdChanged;
            }
        }

        private void IdPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iIdChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the IdArray state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgStreaming1 instance will not overlap.</remarks>
        /// <param name="aIdArrayChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyIdArrayChanged(System.Action aIdArrayChanged)
        {
            lock (iPropertyLock)
            {
                iIdArrayChanged = aIdArrayChanged;
            }
        }

        private void IdArrayPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iIdArrayChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the TracksMax state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgStreaming1 instance will not overlap.</remarks>
        /// <param name="aTracksMaxChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyTracksMaxChanged(System.Action aTracksMaxChanged)
        {
            lock (iPropertyLock)
            {
                iTracksMaxChanged = aTracksMaxChanged;
            }
        }

        private void TracksMaxPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iTracksMaxChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ProtocolInfo state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgStreaming1 instance will not overlap.</remarks>
        /// <param name="aProtocolInfoChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyProtocolInfoChanged(System.Action aProtocolInfoChanged)
        {
            lock (iPropertyLock)
            {
                iProtocolInfoChanged = aProtocolInfoChanged;
            }
        }

        private void ProtocolInfoPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iProtocolInfoChanged);
            }
        }

        /// <summary>
        /// Query the value of the TransportState property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the TransportState property</returns>
        public String PropertyTransportState()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iTransportState.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Repeat property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Repeat property</returns>
        public bool PropertyRepeat()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iRepeat.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Shuffle property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Shuffle property</returns>
        public bool PropertyShuffle()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iShuffle.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Id property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Id property</returns>
        public uint PropertyId()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iId.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the IdArray property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the IdArray property</returns>
        public byte[] PropertyIdArray()
        {
            PropertyReadLock();
            byte[] val;
            try
            {
                val = iIdArray.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the TracksMax property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the TracksMax property</returns>
        public uint PropertyTracksMax()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iTracksMax.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the ProtocolInfo property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ProtocolInfo property</returns>
        public String PropertyProtocolInfo()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iProtocolInfo.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
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
            iActionPlay.Dispose();
            iActionPause.Dispose();
            iActionStop.Dispose();
            iActionNext.Dispose();
            iActionPrevious.Dispose();
            iActionSetRepeat.Dispose();
            iActionRepeat.Dispose();
            iActionSetShuffle.Dispose();
            iActionShuffle.Dispose();
            iActionSeekSecondAbsolute.Dispose();
            iActionSeekSecondRelative.Dispose();
            iActionSeekId.Dispose();
            iActionSeekIndex.Dispose();
            iActionTransportState.Dispose();
            iActionId.Dispose();
            iActionRead.Dispose();
            iActionReadList.Dispose();
            iActionInsert.Dispose();
            iActionDeleteId.Dispose();
            iActionDeleteAll.Dispose();
            iActionTracksMax.Dispose();
            iActionIdArray.Dispose();
            iActionIdArrayChanged.Dispose();
            iActionProtocolInfo.Dispose();
            iTransportState.Dispose();
            iRepeat.Dispose();
            iShuffle.Dispose();
            iId.Dispose();
            iIdArray.Dispose();
            iTracksMax.Dispose();
            iProtocolInfo.Dispose();
        }
    }
}

