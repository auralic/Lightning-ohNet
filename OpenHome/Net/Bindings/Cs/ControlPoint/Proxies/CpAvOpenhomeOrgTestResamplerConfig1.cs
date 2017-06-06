using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgTestResamplerConfig1 : ICpProxy, IDisposable
    {
        void SyncSetResamplerConfig(String aResamplerConfig);
        void BeginSetResamplerConfig(String aResamplerConfig, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetResamplerConfig(IntPtr aAsyncHandle);
        void SyncGetResamplerConfig(out String aResamplerConfig);
        void BeginGetResamplerConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetResamplerConfig(IntPtr aAsyncHandle, out String aResamplerConfig);
        void SyncSetPCMAutoDetect(bool aPCMAutoDetect);
        void BeginSetPCMAutoDetect(bool aPCMAutoDetect, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetPCMAutoDetect(IntPtr aAsyncHandle);
        void SyncGetPCMAutoDetect(out bool aPCMAutoDetect);
        void BeginGetPCMAutoDetect(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetPCMAutoDetect(IntPtr aAsyncHandle, out bool aPCMAutoDetect);
        void SyncSetDSDtoPCM(bool aDSDtoPCM);
        void BeginSetDSDtoPCM(bool aDSDtoPCM, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetDSDtoPCM(IntPtr aAsyncHandle);
        void SyncGetDSDtoPCM(out bool aDSDtoPCM);
        void BeginGetDSDtoPCM(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDSDtoPCM(IntPtr aAsyncHandle, out bool aDSDtoPCM);
        void SetPropertyCurrentActionChanged(System.Action aCurrentActionChanged);
        uint PropertyCurrentAction();
    }

    internal class SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTestResamplerConfig1 iService;

        public SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetResamplerConfig(aAsyncHandle);
        }
    };

    internal class SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTestResamplerConfig1 iService;
        private String iResamplerConfig;

        public SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1 aProxy)
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

    internal class SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTestResamplerConfig1 iService;

        public SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetPCMAutoDetect(aAsyncHandle);
        }
    };

    internal class SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTestResamplerConfig1 iService;
        private bool iPCMAutoDetect;

        public SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public bool PCMAutoDetect()
        {
            return iPCMAutoDetect;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetPCMAutoDetect(aAsyncHandle, out iPCMAutoDetect);
        }
    };

    internal class SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTestResamplerConfig1 iService;

        public SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetDSDtoPCM(aAsyncHandle);
        }
    };

    internal class SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTestResamplerConfig1 iService;
        private bool iDSDtoPCM;

        public SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1(CpProxyAvOpenhomeOrgTestResamplerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public bool DSDtoPCM()
        {
            return iDSDtoPCM;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDSDtoPCM(aAsyncHandle, out iDSDtoPCM);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:TestResamplerConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgTestResamplerConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgTestResamplerConfig1
    {
        private OpenHome.Net.Core.Action iActionSetResamplerConfig;
        private OpenHome.Net.Core.Action iActionGetResamplerConfig;
        private OpenHome.Net.Core.Action iActionSetPCMAutoDetect;
        private OpenHome.Net.Core.Action iActionGetPCMAutoDetect;
        private OpenHome.Net.Core.Action iActionSetDSDtoPCM;
        private OpenHome.Net.Core.Action iActionGetDSDtoPCM;
        private PropertyUint iCurrentAction;
        private System.Action iCurrentActionChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgTestResamplerConfig1(CpDevice aDevice)
            : base("av-openhome-org", "TestResamplerConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionSetResamplerConfig = new OpenHome.Net.Core.Action("SetResamplerConfig");
            param = new ParameterString("ResamplerConfig", allowedValues);
            iActionSetResamplerConfig.AddInputParameter(param);

            iActionGetResamplerConfig = new OpenHome.Net.Core.Action("GetResamplerConfig");
            param = new ParameterString("ResamplerConfig", allowedValues);
            iActionGetResamplerConfig.AddOutputParameter(param);

            iActionSetPCMAutoDetect = new OpenHome.Net.Core.Action("SetPCMAutoDetect");
            param = new ParameterBool("PCMAutoDetect");
            iActionSetPCMAutoDetect.AddInputParameter(param);

            iActionGetPCMAutoDetect = new OpenHome.Net.Core.Action("GetPCMAutoDetect");
            param = new ParameterBool("PCMAutoDetect");
            iActionGetPCMAutoDetect.AddOutputParameter(param);

            iActionSetDSDtoPCM = new OpenHome.Net.Core.Action("SetDSDtoPCM");
            param = new ParameterBool("DSDtoPCM");
            iActionSetDSDtoPCM.AddInputParameter(param);

            iActionGetDSDtoPCM = new OpenHome.Net.Core.Action("GetDSDtoPCM");
            param = new ParameterBool("DSDtoPCM");
            iActionGetDSDtoPCM.AddOutputParameter(param);

            iCurrentAction = new PropertyUint("CurrentAction", CurrentActionPropertyChanged);
            AddProperty(iCurrentAction);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aResamplerConfig"></param>
        public void SyncSetResamplerConfig(String aResamplerConfig)
        {
            SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1 sync = new SyncSetResamplerConfigAvOpenhomeOrgTestResamplerConfig1(this);
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
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aResamplerConfig"></param>
        public void SyncGetResamplerConfig(out String aResamplerConfig)
        {
            SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1 sync = new SyncGetResamplerConfigAvOpenhomeOrgTestResamplerConfig1(this);
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
        /// <param name="aPCMAutoDetect"></param>
        public void SyncSetPCMAutoDetect(bool aPCMAutoDetect)
        {
            SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1 sync = new SyncSetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1(this);
            BeginSetPCMAutoDetect(aPCMAutoDetect, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetPCMAutoDetect().</remarks>
        /// <param name="aPCMAutoDetect"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetPCMAutoDetect(bool aPCMAutoDetect, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetPCMAutoDetect, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetPCMAutoDetect.InputParameter(inIndex++), aPCMAutoDetect));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetPCMAutoDetect(IntPtr aAsyncHandle)
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
        /// <param name="aPCMAutoDetect"></param>
        public void SyncGetPCMAutoDetect(out bool aPCMAutoDetect)
        {
            SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1 sync = new SyncGetPCMAutoDetectAvOpenhomeOrgTestResamplerConfig1(this);
            BeginGetPCMAutoDetect(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aPCMAutoDetect = sync.PCMAutoDetect();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetPCMAutoDetect().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetPCMAutoDetect(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetPCMAutoDetect, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetPCMAutoDetect.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aPCMAutoDetect"></param>
        public void EndGetPCMAutoDetect(IntPtr aAsyncHandle, out bool aPCMAutoDetect)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aPCMAutoDetect = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDSDtoPCM"></param>
        public void SyncSetDSDtoPCM(bool aDSDtoPCM)
        {
            SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1 sync = new SyncSetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1(this);
            BeginSetDSDtoPCM(aDSDtoPCM, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetDSDtoPCM().</remarks>
        /// <param name="aDSDtoPCM"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetDSDtoPCM(bool aDSDtoPCM, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetDSDtoPCM, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetDSDtoPCM.InputParameter(inIndex++), aDSDtoPCM));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetDSDtoPCM(IntPtr aAsyncHandle)
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
        /// <param name="aDSDtoPCM"></param>
        public void SyncGetDSDtoPCM(out bool aDSDtoPCM)
        {
            SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1 sync = new SyncGetDSDtoPCMAvOpenhomeOrgTestResamplerConfig1(this);
            BeginGetDSDtoPCM(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aDSDtoPCM = sync.DSDtoPCM();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDSDtoPCM().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDSDtoPCM(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDSDtoPCM, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetDSDtoPCM.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aDSDtoPCM"></param>
        public void EndGetDSDtoPCM(IntPtr aAsyncHandle, out bool aDSDtoPCM)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aDSDtoPCM = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the CurrentAction state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTestResamplerConfig1 instance will not overlap.</remarks>
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
            iActionSetResamplerConfig.Dispose();
            iActionGetResamplerConfig.Dispose();
            iActionSetPCMAutoDetect.Dispose();
            iActionGetPCMAutoDetect.Dispose();
            iActionSetDSDtoPCM.Dispose();
            iActionGetDSDtoPCM.Dispose();
            iCurrentAction.Dispose();
        }
    }
}

