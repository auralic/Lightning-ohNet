using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgWebClockConfig1 : ICpProxy, IDisposable
    {
        void SyncGetClockConfig(out String aClockConfig);
        void BeginGetClockConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetClockConfig(IntPtr aAsyncHandle, out String aClockConfig);
        void SyncSetClockConfig(String aClockConfig);
        void BeginSetClockConfig(String aClockConfig, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetClockConfig(IntPtr aAsyncHandle);
        void SetPropertyAliveChanged(System.Action aAliveChanged);
        bool PropertyAlive();
        void SetPropertyClockConfigChanged(System.Action aClockConfigChanged);
        String PropertyClockConfig();
    }

    internal class SyncGetClockConfigAvOpenhomeOrgWebClockConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebClockConfig1 iService;
        private String iClockConfig;

        public SyncGetClockConfigAvOpenhomeOrgWebClockConfig1(CpProxyAvOpenhomeOrgWebClockConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String ClockConfig()
        {
            return iClockConfig;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetClockConfig(aAsyncHandle, out iClockConfig);
        }
    };

    internal class SyncSetClockConfigAvOpenhomeOrgWebClockConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebClockConfig1 iService;

        public SyncSetClockConfigAvOpenhomeOrgWebClockConfig1(CpProxyAvOpenhomeOrgWebClockConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetClockConfig(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:WebClockConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgWebClockConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgWebClockConfig1
    {
        private OpenHome.Net.Core.Action iActionGetClockConfig;
        private OpenHome.Net.Core.Action iActionSetClockConfig;
        private PropertyBool iAlive;
        private PropertyString iClockConfig;
        private System.Action iAliveChanged;
        private System.Action iClockConfigChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgWebClockConfig1(CpDevice aDevice)
            : base("av-openhome-org", "WebClockConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetClockConfig = new OpenHome.Net.Core.Action("GetClockConfig");
            param = new ParameterString("ClockConfig", allowedValues);
            iActionGetClockConfig.AddOutputParameter(param);

            iActionSetClockConfig = new OpenHome.Net.Core.Action("SetClockConfig");
            param = new ParameterString("ClockConfig", allowedValues);
            iActionSetClockConfig.AddInputParameter(param);

            iAlive = new PropertyBool("Alive", AlivePropertyChanged);
            AddProperty(iAlive);
            iClockConfig = new PropertyString("ClockConfig", ClockConfigPropertyChanged);
            AddProperty(iClockConfig);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aClockConfig"></param>
        public void SyncGetClockConfig(out String aClockConfig)
        {
            SyncGetClockConfigAvOpenhomeOrgWebClockConfig1 sync = new SyncGetClockConfigAvOpenhomeOrgWebClockConfig1(this);
            BeginGetClockConfig(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aClockConfig = sync.ClockConfig();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetClockConfig().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetClockConfig(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetClockConfig, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetClockConfig.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aClockConfig"></param>
        public void EndGetClockConfig(IntPtr aAsyncHandle, out String aClockConfig)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aClockConfig = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aClockConfig"></param>
        public void SyncSetClockConfig(String aClockConfig)
        {
            SyncSetClockConfigAvOpenhomeOrgWebClockConfig1 sync = new SyncSetClockConfigAvOpenhomeOrgWebClockConfig1(this);
            BeginSetClockConfig(aClockConfig, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetClockConfig().</remarks>
        /// <param name="aClockConfig"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetClockConfig(String aClockConfig, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetClockConfig, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetClockConfig.InputParameter(inIndex++), aClockConfig));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetClockConfig(IntPtr aAsyncHandle)
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
        /// CpProxyAvOpenhomeOrgWebClockConfig1 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the ClockConfig state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgWebClockConfig1 instance will not overlap.</remarks>
        /// <param name="aClockConfigChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyClockConfigChanged(System.Action aClockConfigChanged)
        {
            lock (iPropertyLock)
            {
                iClockConfigChanged = aClockConfigChanged;
            }
        }

        private void ClockConfigPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iClockConfigChanged);
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
        /// Query the value of the ClockConfig property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ClockConfig property</returns>
        public String PropertyClockConfig()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iClockConfig.Value();
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
            iActionGetClockConfig.Dispose();
            iActionSetClockConfig.Dispose();
            iAlive.Dispose();
            iClockConfig.Dispose();
        }
    }
}

