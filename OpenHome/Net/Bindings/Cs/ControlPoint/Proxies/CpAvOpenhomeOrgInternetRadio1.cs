using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgInternetRadio1 : ICpProxy, IDisposable
    {
        void SyncPlay();
        void BeginPlay(CpProxy.CallbackAsyncComplete aCallback);
        void EndPlay(IntPtr aAsyncHandle);
        void SyncStop();
        void BeginStop(CpProxy.CallbackAsyncComplete aCallback);
        void EndStop(IntPtr aAsyncHandle);
        void SyncSetSender(String aUri, String aMetadata);
        void BeginSetSender(String aUri, String aMetadata, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetSender(IntPtr aAsyncHandle);
        void SyncSender(out String aUri, out String aMetadata);
        void BeginSender(CpProxy.CallbackAsyncComplete aCallback);
        void EndSender(IntPtr aAsyncHandle, out String aUri, out String aMetadata);
        void SyncTransportState(out String aValue);
        void BeginTransportState(CpProxy.CallbackAsyncComplete aCallback);
        void EndTransportState(IntPtr aAsyncHandle, out String aValue);
        void SetPropertyUriChanged(System.Action aUriChanged);
        String PropertyUri();
        void SetPropertyMetadataChanged(System.Action aMetadataChanged);
        String PropertyMetadata();
        void SetPropertyTransportStateChanged(System.Action aTransportStateChanged);
        String PropertyTransportState();
    }

    internal class SyncPlayAvOpenhomeOrgInternetRadio1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgInternetRadio1 iService;

        public SyncPlayAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPlay(aAsyncHandle);
        }
    };

    internal class SyncStopAvOpenhomeOrgInternetRadio1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgInternetRadio1 iService;

        public SyncStopAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndStop(aAsyncHandle);
        }
    };

    internal class SyncSetSenderAvOpenhomeOrgInternetRadio1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgInternetRadio1 iService;

        public SyncSetSenderAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetSender(aAsyncHandle);
        }
    };

    internal class SyncSenderAvOpenhomeOrgInternetRadio1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgInternetRadio1 iService;
        private String iUri;
        private String iMetadata;

        public SyncSenderAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1 aProxy)
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
            iService.EndSender(aAsyncHandle, out iUri, out iMetadata);
        }
    };

    internal class SyncTransportStateAvOpenhomeOrgInternetRadio1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgInternetRadio1 iService;
        private String iValue;

        public SyncTransportStateAvOpenhomeOrgInternetRadio1(CpProxyAvOpenhomeOrgInternetRadio1 aProxy)
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

    /// <summary>
    /// Proxy for the av.openhome.org:InternetRadio:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgInternetRadio1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgInternetRadio1
    {
        private OpenHome.Net.Core.Action iActionPlay;
        private OpenHome.Net.Core.Action iActionStop;
        private OpenHome.Net.Core.Action iActionSetSender;
        private OpenHome.Net.Core.Action iActionSender;
        private OpenHome.Net.Core.Action iActionTransportState;
        private PropertyString iUri;
        private PropertyString iMetadata;
        private PropertyString iTransportState;
        private System.Action iUriChanged;
        private System.Action iMetadataChanged;
        private System.Action iTransportStateChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgInternetRadio1(CpDevice aDevice)
            : base("av-openhome-org", "InternetRadio", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionPlay = new OpenHome.Net.Core.Action("Play");

            iActionStop = new OpenHome.Net.Core.Action("Stop");

            iActionSetSender = new OpenHome.Net.Core.Action("SetSender");
            param = new ParameterString("Uri", allowedValues);
            iActionSetSender.AddInputParameter(param);
            param = new ParameterString("Metadata", allowedValues);
            iActionSetSender.AddInputParameter(param);

            iActionSender = new OpenHome.Net.Core.Action("Sender");
            param = new ParameterString("Uri", allowedValues);
            iActionSender.AddOutputParameter(param);
            param = new ParameterString("Metadata", allowedValues);
            iActionSender.AddOutputParameter(param);

            iActionTransportState = new OpenHome.Net.Core.Action("TransportState");
            allowedValues.Add("Stopped");
            allowedValues.Add("Playing");
            allowedValues.Add("Waiting");
            allowedValues.Add("Buffering");
            param = new ParameterString("Value", allowedValues);
            iActionTransportState.AddOutputParameter(param);
            allowedValues.Clear();

            iUri = new PropertyString("Uri", UriPropertyChanged);
            AddProperty(iUri);
            iMetadata = new PropertyString("Metadata", MetadataPropertyChanged);
            AddProperty(iMetadata);
            iTransportState = new PropertyString("TransportState", TransportStatePropertyChanged);
            AddProperty(iTransportState);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncPlay()
        {
            SyncPlayAvOpenhomeOrgInternetRadio1 sync = new SyncPlayAvOpenhomeOrgInternetRadio1(this);
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
        public void SyncStop()
        {
            SyncStopAvOpenhomeOrgInternetRadio1 sync = new SyncStopAvOpenhomeOrgInternetRadio1(this);
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
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        public void SyncSetSender(String aUri, String aMetadata)
        {
            SyncSetSenderAvOpenhomeOrgInternetRadio1 sync = new SyncSetSenderAvOpenhomeOrgInternetRadio1(this);
            BeginSetSender(aUri, aMetadata, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetSender().</remarks>
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetSender(String aUri, String aMetadata, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetSender, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetSender.InputParameter(inIndex++), aUri));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetSender.InputParameter(inIndex++), aMetadata));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetSender(IntPtr aAsyncHandle)
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
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        public void SyncSender(out String aUri, out String aMetadata)
        {
            SyncSenderAvOpenhomeOrgInternetRadio1 sync = new SyncSenderAvOpenhomeOrgInternetRadio1(this);
            BeginSender(sync.AsyncComplete());
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
        /// EndSender().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSender(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSender, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionSender.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionSender.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        public void EndSender(IntPtr aAsyncHandle, out String aUri, out String aMetadata)
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
        /// <param name="aValue"></param>
        public void SyncTransportState(out String aValue)
        {
            SyncTransportStateAvOpenhomeOrgInternetRadio1 sync = new SyncTransportStateAvOpenhomeOrgInternetRadio1(this);
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
        /// Set a delegate to be run when the Uri state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgInternetRadio1 instance will not overlap.</remarks>
        /// <param name="aUriChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUriChanged(System.Action aUriChanged)
        {
            lock (iPropertyLock)
            {
                iUriChanged = aUriChanged;
            }
        }

        private void UriPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUriChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Metadata state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgInternetRadio1 instance will not overlap.</remarks>
        /// <param name="aMetadataChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyMetadataChanged(System.Action aMetadataChanged)
        {
            lock (iPropertyLock)
            {
                iMetadataChanged = aMetadataChanged;
            }
        }

        private void MetadataPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iMetadataChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the TransportState state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgInternetRadio1 instance will not overlap.</remarks>
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
        /// Query the value of the Uri property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Uri property</returns>
        public String PropertyUri()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iUri.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Metadata property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Metadata property</returns>
        public String PropertyMetadata()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iMetadata.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
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
            iActionStop.Dispose();
            iActionSetSender.Dispose();
            iActionSender.Dispose();
            iActionTransportState.Dispose();
            iUri.Dispose();
            iMetadata.Dispose();
            iTransportState.Dispose();
        }
    }
}

