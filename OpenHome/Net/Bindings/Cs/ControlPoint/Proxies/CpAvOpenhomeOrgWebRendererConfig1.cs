using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgWebRendererConfig1 : ICpProxy, IDisposable
    {
        void SyncGetRendererConfig(out String aRendererConfig);
        void BeginGetRendererConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetRendererConfig(IntPtr aAsyncHandle, out String aRendererConfig);
        void SyncSetRendererConfig(String aRendererConfig);
        void BeginSetRendererConfig(String aRendererConfig, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetRendererConfig(IntPtr aAsyncHandle);
        void SetPropertyAliveChanged(System.Action aAliveChanged);
        bool PropertyAlive();
        void SetPropertyRendererConfigChanged(System.Action aRendererConfigChanged);
        String PropertyRendererConfig();
        void SetPropertyCurrentActionChanged(System.Action aCurrentActionChanged);
        uint PropertyCurrentAction();
    }

    internal class SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebRendererConfig1 iService;
        private String iRendererConfig;

        public SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String RendererConfig()
        {
            return iRendererConfig;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetRendererConfig(aAsyncHandle, out iRendererConfig);
        }
    };

    internal class SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebRendererConfig1 iService;

        public SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetRendererConfig(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:WebRendererConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgWebRendererConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgWebRendererConfig1
    {
        private OpenHome.Net.Core.Action iActionGetRendererConfig;
        private OpenHome.Net.Core.Action iActionSetRendererConfig;
        private PropertyBool iAlive;
        private PropertyString iRendererConfig;
        private PropertyUint iCurrentAction;
        private System.Action iAliveChanged;
        private System.Action iRendererConfigChanged;
        private System.Action iCurrentActionChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgWebRendererConfig1(ICpDevice aDevice)
            : base("av-openhome-org", "WebRendererConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetRendererConfig = new OpenHome.Net.Core.Action("GetRendererConfig");
            param = new ParameterString("RendererConfig", allowedValues);
            iActionGetRendererConfig.AddOutputParameter(param);

            iActionSetRendererConfig = new OpenHome.Net.Core.Action("SetRendererConfig");
            param = new ParameterString("RendererConfig", allowedValues);
            iActionSetRendererConfig.AddInputParameter(param);

            iAlive = new PropertyBool("Alive", AlivePropertyChanged);
            AddProperty(iAlive);
            iRendererConfig = new PropertyString("RendererConfig", RendererConfigPropertyChanged);
            AddProperty(iRendererConfig);
            iCurrentAction = new PropertyUint("CurrentAction", CurrentActionPropertyChanged);
            AddProperty(iCurrentAction);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aRendererConfig"></param>
        public void SyncGetRendererConfig(out String aRendererConfig)
        {
            SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1 sync = new SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1(this);
            BeginGetRendererConfig(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aRendererConfig = sync.RendererConfig();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetRendererConfig().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetRendererConfig(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetRendererConfig, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetRendererConfig.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aRendererConfig"></param>
        public void EndGetRendererConfig(IntPtr aAsyncHandle, out String aRendererConfig)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aRendererConfig = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aRendererConfig"></param>
        public void SyncSetRendererConfig(String aRendererConfig)
        {
            SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1 sync = new SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1(this);
            BeginSetRendererConfig(aRendererConfig, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetRendererConfig().</remarks>
        /// <param name="aRendererConfig"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetRendererConfig(String aRendererConfig, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetRendererConfig, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetRendererConfig.InputParameter(inIndex++), aRendererConfig));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetRendererConfig(IntPtr aAsyncHandle)
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
        /// CpProxyAvOpenhomeOrgWebRendererConfig1 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the RendererConfig state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgWebRendererConfig1 instance will not overlap.</remarks>
        /// <param name="aRendererConfigChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyRendererConfigChanged(System.Action aRendererConfigChanged)
        {
            lock (iPropertyLock)
            {
                iRendererConfigChanged = aRendererConfigChanged;
            }
        }

        private void RendererConfigPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iRendererConfigChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CurrentAction state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgWebRendererConfig1 instance will not overlap.</remarks>
        /// <param name="aCurrentActionChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCurrentActionChanged(System.Action aCurrentActionChanged)
        {
            lock (iPropertyLock)
            {
                iCurrentActionChanged = aCurrentActionChanged;
            }
        }

        private void CurrentActionPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCurrentActionChanged);
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
        /// Query the value of the RendererConfig property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the RendererConfig property</returns>
        public String PropertyRendererConfig()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iRendererConfig.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the CurrentAction property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CurrentAction property</returns>
        public uint PropertyCurrentAction()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iCurrentAction.Value();
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
            iActionGetRendererConfig.Dispose();
            iActionSetRendererConfig.Dispose();
            iAlive.Dispose();
            iRendererConfig.Dispose();
            iCurrentAction.Dispose();
        }
    }
}

