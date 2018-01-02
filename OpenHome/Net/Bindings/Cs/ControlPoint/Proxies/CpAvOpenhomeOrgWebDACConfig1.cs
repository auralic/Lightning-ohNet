using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgWebDACConfig1 : ICpProxy, IDisposable
    {
        void SyncGetDACConfig(out String aDACConfig);
        void BeginGetDACConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDACConfig(IntPtr aAsyncHandle, out String aDACConfig);
        void SyncSetDACConfig(String aDACConfig);
        void BeginSetDACConfig(String aDACConfig, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetDACConfig(IntPtr aAsyncHandle);
        void SetPropertyAliveChanged(System.Action aAliveChanged);
        bool PropertyAlive();
        void SetPropertyDACConfigChanged(System.Action aDACConfigChanged);
        String PropertyDACConfig();
        void SetPropertyCurrentActionChanged(System.Action aCurrentActionChanged);
        uint PropertyCurrentAction();
    }

    internal class SyncGetDACConfigAvOpenhomeOrgWebDACConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebDACConfig1 iService;
        private String iDACConfig;

        public SyncGetDACConfigAvOpenhomeOrgWebDACConfig1(CpProxyAvOpenhomeOrgWebDACConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String DACConfig()
        {
            return iDACConfig;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDACConfig(aAsyncHandle, out iDACConfig);
        }
    };

    internal class SyncSetDACConfigAvOpenhomeOrgWebDACConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebDACConfig1 iService;

        public SyncSetDACConfigAvOpenhomeOrgWebDACConfig1(CpProxyAvOpenhomeOrgWebDACConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetDACConfig(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:WebDACConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgWebDACConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgWebDACConfig1
    {
        private OpenHome.Net.Core.Action iActionGetDACConfig;
        private OpenHome.Net.Core.Action iActionSetDACConfig;
        private PropertyBool iAlive;
        private PropertyString iDACConfig;
        private PropertyUint iCurrentAction;
        private System.Action iAliveChanged;
        private System.Action iDACConfigChanged;
        private System.Action iCurrentActionChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgWebDACConfig1(CpDevice aDevice)
            : base("av-openhome-org", "WebDACConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetDACConfig = new OpenHome.Net.Core.Action("GetDACConfig");
            param = new ParameterString("DACConfig", allowedValues);
            iActionGetDACConfig.AddOutputParameter(param);

            iActionSetDACConfig = new OpenHome.Net.Core.Action("SetDACConfig");
            param = new ParameterString("DACConfig", allowedValues);
            iActionSetDACConfig.AddInputParameter(param);

            iAlive = new PropertyBool("Alive", AlivePropertyChanged);
            AddProperty(iAlive);
            iDACConfig = new PropertyString("DACConfig", DACConfigPropertyChanged);
            AddProperty(iDACConfig);
            iCurrentAction = new PropertyUint("CurrentAction", CurrentActionPropertyChanged);
            AddProperty(iCurrentAction);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDACConfig"></param>
        public void SyncGetDACConfig(out String aDACConfig)
        {
            SyncGetDACConfigAvOpenhomeOrgWebDACConfig1 sync = new SyncGetDACConfigAvOpenhomeOrgWebDACConfig1(this);
            BeginGetDACConfig(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aDACConfig = sync.DACConfig();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDACConfig().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDACConfig(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDACConfig, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDACConfig.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aDACConfig"></param>
        public void EndGetDACConfig(IntPtr aAsyncHandle, out String aDACConfig)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aDACConfig = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDACConfig"></param>
        public void SyncSetDACConfig(String aDACConfig)
        {
            SyncSetDACConfigAvOpenhomeOrgWebDACConfig1 sync = new SyncSetDACConfigAvOpenhomeOrgWebDACConfig1(this);
            BeginSetDACConfig(aDACConfig, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetDACConfig().</remarks>
        /// <param name="aDACConfig"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetDACConfig(String aDACConfig, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetDACConfig, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetDACConfig.InputParameter(inIndex++), aDACConfig));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetDACConfig(IntPtr aAsyncHandle)
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
        /// CpProxyAvOpenhomeOrgWebDACConfig1 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the DACConfig state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgWebDACConfig1 instance will not overlap.</remarks>
        /// <param name="aDACConfigChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyDACConfigChanged(System.Action aDACConfigChanged)
        {
            lock (iPropertyLock)
            {
                iDACConfigChanged = aDACConfigChanged;
            }
        }

        private void DACConfigPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iDACConfigChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CurrentAction state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgWebDACConfig1 instance will not overlap.</remarks>
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
        /// Query the value of the DACConfig property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the DACConfig property</returns>
        public String PropertyDACConfig()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iDACConfig.Value();
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
            iActionGetDACConfig.Dispose();
            iActionSetDACConfig.Dispose();
            iAlive.Dispose();
            iDACConfig.Dispose();
            iCurrentAction.Dispose();
        }
    }
}

