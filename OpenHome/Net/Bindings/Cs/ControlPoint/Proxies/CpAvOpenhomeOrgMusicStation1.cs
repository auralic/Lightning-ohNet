using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgMusicStation1 : ICpProxy, IDisposable
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
        void SyncSetThumbRating(String aThumbRating);
        void BeginSetThumbRating(String aThumbRating, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetThumbRating(IntPtr aAsyncHandle);
        void SyncSeekSecondAbsolute(uint aValue);
        void BeginSeekSecondAbsolute(uint aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSeekSecondAbsolute(IntPtr aAsyncHandle);
        void SyncSeekSecondRelative(int aValue);
        void BeginSeekSecondRelative(int aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSeekSecondRelative(IntPtr aAsyncHandle);
        void SyncTransportState(out String aValue);
        void BeginTransportState(CpProxy.CallbackAsyncComplete aCallback);
        void EndTransportState(IntPtr aAsyncHandle, out String aValue);
        void SyncInsert(uint aAfterId, String aUri, String aMetadata, out uint aNewId);
        void BeginInsert(uint aAfterId, String aUri, String aMetadata, CpProxy.CallbackAsyncComplete aCallback);
        void EndInsert(IntPtr aAsyncHandle, out uint aNewId);
        void SetPropertyTransportStateChanged(System.Action aTransportStateChanged);
        String PropertyTransportState();
        void SetPropertyThumbRatingChanged(System.Action aThumbRatingChanged);
        String PropertyThumbRating();
        void SetPropertyIdChanged(System.Action aIdChanged);
        uint PropertyId();
    }

    internal class SyncPlayAvOpenhomeOrgMusicStation1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgMusicStation1 iService;

        public SyncPlayAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPlay(aAsyncHandle);
        }
    };

    internal class SyncPauseAvOpenhomeOrgMusicStation1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgMusicStation1 iService;

        public SyncPauseAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPause(aAsyncHandle);
        }
    };

    internal class SyncStopAvOpenhomeOrgMusicStation1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgMusicStation1 iService;

        public SyncStopAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndStop(aAsyncHandle);
        }
    };

    internal class SyncNextAvOpenhomeOrgMusicStation1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgMusicStation1 iService;

        public SyncNextAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndNext(aAsyncHandle);
        }
    };

    internal class SyncPreviousAvOpenhomeOrgMusicStation1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgMusicStation1 iService;

        public SyncPreviousAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPrevious(aAsyncHandle);
        }
    };

    internal class SyncSetThumbRatingAvOpenhomeOrgMusicStation1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgMusicStation1 iService;

        public SyncSetThumbRatingAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetThumbRating(aAsyncHandle);
        }
    };

    internal class SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgMusicStation1 iService;

        public SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSeekSecondAbsolute(aAsyncHandle);
        }
    };

    internal class SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgMusicStation1 iService;

        public SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSeekSecondRelative(aAsyncHandle);
        }
    };

    internal class SyncTransportStateAvOpenhomeOrgMusicStation1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgMusicStation1 iService;
        private String iValue;

        public SyncTransportStateAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
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

    internal class SyncInsertAvOpenhomeOrgMusicStation1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgMusicStation1 iService;
        private uint iNewId;

        public SyncInsertAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
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

    /// <summary>
    /// Proxy for the av.openhome.org:MusicStation:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgMusicStation1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgMusicStation1
    {
        private OpenHome.Net.Core.Action iActionPlay;
        private OpenHome.Net.Core.Action iActionPause;
        private OpenHome.Net.Core.Action iActionStop;
        private OpenHome.Net.Core.Action iActionNext;
        private OpenHome.Net.Core.Action iActionPrevious;
        private OpenHome.Net.Core.Action iActionSetThumbRating;
        private OpenHome.Net.Core.Action iActionSeekSecondAbsolute;
        private OpenHome.Net.Core.Action iActionSeekSecondRelative;
        private OpenHome.Net.Core.Action iActionTransportState;
        private OpenHome.Net.Core.Action iActionInsert;
        private PropertyString iTransportState;
        private PropertyString iThumbRating;
        private PropertyUint iId;
        private System.Action iTransportStateChanged;
        private System.Action iThumbRatingChanged;
        private System.Action iIdChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgMusicStation1(ICpDevice aDevice)
            : base("av-openhome-org", "MusicStation", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionPlay = new OpenHome.Net.Core.Action("Play");

            iActionPause = new OpenHome.Net.Core.Action("Pause");

            iActionStop = new OpenHome.Net.Core.Action("Stop");

            iActionNext = new OpenHome.Net.Core.Action("Next");

            iActionPrevious = new OpenHome.Net.Core.Action("Previous");

            iActionSetThumbRating = new OpenHome.Net.Core.Action("SetThumbRating");
            allowedValues.Add("thumbs_up");
            allowedValues.Add("thumbs_down");
            allowedValues.Add("neutral");
            param = new ParameterString("ThumbRating", allowedValues);
            iActionSetThumbRating.AddInputParameter(param);
            allowedValues.Clear();

            iActionSeekSecondAbsolute = new OpenHome.Net.Core.Action("SeekSecondAbsolute");
            param = new ParameterUint("Value");
            iActionSeekSecondAbsolute.AddInputParameter(param);

            iActionSeekSecondRelative = new OpenHome.Net.Core.Action("SeekSecondRelative");
            param = new ParameterInt("Value");
            iActionSeekSecondRelative.AddInputParameter(param);

            iActionTransportState = new OpenHome.Net.Core.Action("TransportState");
            allowedValues.Add("Playing");
            allowedValues.Add("Paused");
            allowedValues.Add("Stopped");
            allowedValues.Add("Buffering");
            param = new ParameterString("Value", allowedValues);
            iActionTransportState.AddOutputParameter(param);
            allowedValues.Clear();

            iActionInsert = new OpenHome.Net.Core.Action("Insert");
            param = new ParameterUint("AfterId");
            iActionInsert.AddInputParameter(param);
            param = new ParameterString("Uri", allowedValues);
            iActionInsert.AddInputParameter(param);
            param = new ParameterString("Metadata", allowedValues);
            iActionInsert.AddInputParameter(param);
            param = new ParameterUint("NewId");
            iActionInsert.AddOutputParameter(param);

            iTransportState = new PropertyString("TransportState", TransportStatePropertyChanged);
            AddProperty(iTransportState);
            iThumbRating = new PropertyString("ThumbRating", ThumbRatingPropertyChanged);
            AddProperty(iThumbRating);
            iId = new PropertyUint("Id", IdPropertyChanged);
            AddProperty(iId);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncPlay()
        {
            SyncPlayAvOpenhomeOrgMusicStation1 sync = new SyncPlayAvOpenhomeOrgMusicStation1(this);
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
            SyncPauseAvOpenhomeOrgMusicStation1 sync = new SyncPauseAvOpenhomeOrgMusicStation1(this);
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
            SyncStopAvOpenhomeOrgMusicStation1 sync = new SyncStopAvOpenhomeOrgMusicStation1(this);
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
            SyncNextAvOpenhomeOrgMusicStation1 sync = new SyncNextAvOpenhomeOrgMusicStation1(this);
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
            SyncPreviousAvOpenhomeOrgMusicStation1 sync = new SyncPreviousAvOpenhomeOrgMusicStation1(this);
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
        /// <param name="aThumbRating"></param>
        public void SyncSetThumbRating(String aThumbRating)
        {
            SyncSetThumbRatingAvOpenhomeOrgMusicStation1 sync = new SyncSetThumbRatingAvOpenhomeOrgMusicStation1(this);
            BeginSetThumbRating(aThumbRating, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetThumbRating().</remarks>
        /// <param name="aThumbRating"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetThumbRating(String aThumbRating, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetThumbRating, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetThumbRating.InputParameter(inIndex++), aThumbRating));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetThumbRating(IntPtr aAsyncHandle)
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
        public void SyncSeekSecondAbsolute(uint aValue)
        {
            SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1 sync = new SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1(this);
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
            SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1 sync = new SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1(this);
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
        public void SyncTransportState(out String aValue)
        {
            SyncTransportStateAvOpenhomeOrgMusicStation1 sync = new SyncTransportStateAvOpenhomeOrgMusicStation1(this);
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
        /// <param name="aAfterId"></param>
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        /// <param name="aNewId"></param>
        public void SyncInsert(uint aAfterId, String aUri, String aMetadata, out uint aNewId)
        {
            SyncInsertAvOpenhomeOrgMusicStation1 sync = new SyncInsertAvOpenhomeOrgMusicStation1(this);
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
        /// Set a delegate to be run when the TransportState state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgMusicStation1 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the ThumbRating state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgMusicStation1 instance will not overlap.</remarks>
        /// <param name="aThumbRatingChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyThumbRatingChanged(System.Action aThumbRatingChanged)
        {
            lock (iPropertyLock)
            {
                iThumbRatingChanged = aThumbRatingChanged;
            }
        }

        private void ThumbRatingPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iThumbRatingChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Id state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgMusicStation1 instance will not overlap.</remarks>
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
        /// Query the value of the ThumbRating property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ThumbRating property</returns>
        public String PropertyThumbRating()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iThumbRating.Value();
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
            iActionSetThumbRating.Dispose();
            iActionSeekSecondAbsolute.Dispose();
            iActionSeekSecondRelative.Dispose();
            iActionTransportState.Dispose();
            iActionInsert.Dispose();
            iTransportState.Dispose();
            iThumbRating.Dispose();
            iId.Dispose();
        }
    }
}

