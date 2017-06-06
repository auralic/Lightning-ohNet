using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgWebResamplerConfig1 : ICpProxy, IDisposable
    {
        void SyncGetResamplerConfig(out String aResamplerConfig);
        void BeginGetResamplerConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetResamplerConfig(IntPtr aAsyncHandle, out String aResamplerConfig);
        void SyncSetResamplerConfig(String aResamplerConfig);
        void BeginSetResamplerConfig(String aResamplerConfig, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetResamplerConfig(IntPtr aAsyncHandle);
        void SetPropertyResamplerConfigChanged(System.Action aResamplerConfigChanged);
        String PropertyResamplerConfig();
    }

    internal class SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebResamplerConfig1 iService;
        private String iResamplerConfig;

        public SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(CpProxyAvOpenhomeOrgWebResamplerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String ResamplerConfig()
        {
            return iResamplerConfig;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetResamplerConfig(aAsyncHandle, out iResamplerConfig);
        }
    };

    internal class SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebResamplerConfig1 iService;

        public SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(CpProxyAvOpenhomeOrgWebResamplerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetResamplerConfig(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:WebResamplerConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgWebResamplerConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgWebResamplerConfig1
    {
        private OpenHome.Net.Core.Action iActionGetResamplerConfig;
        private OpenHome.Net.Core.Action iActionSetResamplerConfig;
        private PropertyString iResamplerConfig;
        private System.Action iResamplerConfigChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgWebResamplerConfig1(CpDevice aDevice)
            : base("av-openhome-org", "WebResamplerConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetResamplerConfig = new OpenHome.Net.Core.Action("GetResamplerConfig");
            param = new ParameterString("ResamplerConfig", allowedValues);
            iActionGetResamplerConfig.AddOutputParameter(param);

            iActionSetResamplerConfig = new OpenHome.Net.Core.Action("SetResamplerConfig");
            param = new ParameterString("ResamplerConfig", allowedValues);
            iActionSetResamplerConfig.AddInputParameter(param);

            iResamplerConfig = new PropertyString("ResamplerConfig", ResamplerConfigPropertyChanged);
            AddProperty(iResamplerConfig);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aResamplerConfig"></param>
        public void SyncGetResamplerConfig(out String aResamplerConfig)
        {
            SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 sync = new SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(this);
            BeginGetResamplerConfig(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aResamplerConfig = sync.ResamplerConfig();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetResamplerConfig().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetResamplerConfig(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetResamplerConfig, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetResamplerConfig.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aResamplerConfig"></param>
        public void EndGetResamplerConfig(IntPtr aAsyncHandle, out String aResamplerConfig)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aResamplerConfig = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aResamplerConfig"></param>
        public void SyncSetResamplerConfig(String aResamplerConfig)
        {
            SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 sync = new SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(this);
            BeginSetResamplerConfig(aResamplerConfig, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetResamplerConfig().</remarks>
        /// <param name="aResamplerConfig"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetResamplerConfig(String aResamplerConfig, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetResamplerConfig, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetResamplerConfig.InputParameter(inIndex++), aResamplerConfig));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetResamplerConfig(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ResamplerConfig state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgWebResamplerConfig1 instance will not overlap.</remarks>
        /// <param name="aResamplerConfigChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyResamplerConfigChanged(System.Action aResamplerConfigChanged)
        {
            lock (iPropertyLock)
            {
                iResamplerConfigChanged = aResamplerConfigChanged;
            }
        }

        private void ResamplerConfigPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iResamplerConfigChanged);
            }
        }

        /// <summary>
        /// Query the value of the ResamplerConfig property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ResamplerConfig property</returns>
        public String PropertyResamplerConfig()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iResamplerConfig.Value();
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
            iActionGetResamplerConfig.Dispose();
            iActionSetResamplerConfig.Dispose();
            iResamplerConfig.Dispose();
        }
    }
}

