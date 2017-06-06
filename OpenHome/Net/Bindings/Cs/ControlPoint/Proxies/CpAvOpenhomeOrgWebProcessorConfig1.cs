using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgWebProcessorConfig1 : ICpProxy, IDisposable
    {
        void SyncGetProcessorConfig(out String aProcessorConfig);
        void BeginGetProcessorConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetProcessorConfig(IntPtr aAsyncHandle, out String aProcessorConfig);
        void SyncSetProcessorConfig(String aProcessorConfig);
        void BeginSetProcessorConfig(String aProcessorConfig, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetProcessorConfig(IntPtr aAsyncHandle);
        void SetPropertyAliveChanged(System.Action aAliveChanged);
        bool PropertyAlive();
        void SetPropertyProcessorConfigChanged(System.Action aProcessorConfigChanged);
        String PropertyProcessorConfig();
    }

    internal class SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebProcessorConfig1 iService;
        private String iProcessorConfig;

        public SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(CpProxyAvOpenhomeOrgWebProcessorConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String ProcessorConfig()
        {
            return iProcessorConfig;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetProcessorConfig(aAsyncHandle, out iProcessorConfig);
        }
    };

    internal class SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebProcessorConfig1 iService;

        public SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(CpProxyAvOpenhomeOrgWebProcessorConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetProcessorConfig(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:WebProcessorConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgWebProcessorConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgWebProcessorConfig1
    {
        private OpenHome.Net.Core.Action iActionGetProcessorConfig;
        private OpenHome.Net.Core.Action iActionSetProcessorConfig;
        private PropertyBool iAlive;
        private PropertyString iProcessorConfig;
        private System.Action iAliveChanged;
        private System.Action iProcessorConfigChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgWebProcessorConfig1(CpDevice aDevice)
            : base("av-openhome-org", "WebProcessorConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetProcessorConfig = new OpenHome.Net.Core.Action("GetProcessorConfig");
            param = new ParameterString("ProcessorConfig", allowedValues);
            iActionGetProcessorConfig.AddOutputParameter(param);

            iActionSetProcessorConfig = new OpenHome.Net.Core.Action("SetProcessorConfig");
            param = new ParameterString("ProcessorConfig", allowedValues);
            iActionSetProcessorConfig.AddInputParameter(param);

            iAlive = new PropertyBool("Alive", AlivePropertyChanged);
            AddProperty(iAlive);
            iProcessorConfig = new PropertyString("ProcessorConfig", ProcessorConfigPropertyChanged);
            AddProperty(iProcessorConfig);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aProcessorConfig"></param>
        public void SyncGetProcessorConfig(out String aProcessorConfig)
        {
            SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 sync = new SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(this);
            BeginGetProcessorConfig(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aProcessorConfig = sync.ProcessorConfig();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetProcessorConfig().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetProcessorConfig(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetProcessorConfig, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetProcessorConfig.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aProcessorConfig"></param>
        public void EndGetProcessorConfig(IntPtr aAsyncHandle, out String aProcessorConfig)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aProcessorConfig = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aProcessorConfig"></param>
        public void SyncSetProcessorConfig(String aProcessorConfig)
        {
            SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 sync = new SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(this);
            BeginSetProcessorConfig(aProcessorConfig, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetProcessorConfig().</remarks>
        /// <param name="aProcessorConfig"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetProcessorConfig(String aProcessorConfig, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetProcessorConfig, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetProcessorConfig.InputParameter(inIndex++), aProcessorConfig));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetProcessorConfig(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Alive state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgWebProcessorConfig1 instance will not overlap.</remarks>
        /// <param name="aAliveChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyAliveChanged(System.Action aAliveChanged)
        {
            lock (iPropertyLock)
            {
                iAliveChanged = aAliveChanged;
            }
        }

        private void AlivePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iAliveChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ProcessorConfig state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgWebProcessorConfig1 instance will not overlap.</remarks>
        /// <param name="aProcessorConfigChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyProcessorConfigChanged(System.Action aProcessorConfigChanged)
        {
            lock (iPropertyLock)
            {
                iProcessorConfigChanged = aProcessorConfigChanged;
            }
        }

        private void ProcessorConfigPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iProcessorConfigChanged);
            }
        }

        /// <summary>
        /// Query the value of the Alive property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Alive property</returns>
        public bool PropertyAlive()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iAlive.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the ProcessorConfig property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ProcessorConfig property</returns>
        public String PropertyProcessorConfig()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iProcessorConfig.Value();
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
            iActionGetProcessorConfig.Dispose();
            iActionSetProcessorConfig.Dispose();
            iAlive.Dispose();
            iProcessorConfig.Dispose();
        }
    }
}

