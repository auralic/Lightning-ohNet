using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgRendererConfig1 : ICpProxy, IDisposable
    {
        void SyncGetRendererConfig(out String aRendererConfig);
        void BeginGetRendererConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetRendererConfig(IntPtr aAsyncHandle, out String aRendererConfig);
        void SyncSetRendererConfig(String aRendererConfig);
        void BeginSetRendererConfig(String aRendererConfig, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetRendererConfig(IntPtr aAsyncHandle);
        void SyncGetResamplerConfig(out String aResamplerConfig);
        void BeginGetResamplerConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetResamplerConfig(IntPtr aAsyncHandle, out String aResamplerConfig);
        void SyncSetResamplerConfig(String aResamplerConfig);
        void BeginSetResamplerConfig(String aResamplerConfig, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetResamplerConfig(IntPtr aAsyncHandle);
        void SyncGetHardwareConfig(out String aHardwareConfig);
        void BeginGetHardwareConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetHardwareConfig(IntPtr aAsyncHandle, out String aHardwareConfig);
        void SyncSetHardwareConfig(String aHardwareConfig);
        void BeginSetHardwareConfig(String aHardwareConfig, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetHardwareConfig(IntPtr aAsyncHandle);
        void SyncGetWiFiList(out String aWiFiList);
        void BeginGetWiFiList(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetWiFiList(IntPtr aAsyncHandle, out String aWiFiList);
        void SyncSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp);
        void BeginSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetTimeZone(IntPtr aAsyncHandle);
        void SetPropertyRendererConfigChanged(System.Action aRendererConfigChanged);
        String PropertyRendererConfig();
        void SetPropertyResamplerConfigChanged(System.Action aResamplerConfigChanged);
        String PropertyResamplerConfig();
        void SetPropertyHardwareConfigChanged(System.Action aHardwareConfigChanged);
        String PropertyHardwareConfig();
    }

    internal class SyncGetRendererConfigAvOpenhomeOrgRendererConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgRendererConfig1 iService;
        private String iRendererConfig;

        public SyncGetRendererConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
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

    internal class SyncSetRendererConfigAvOpenhomeOrgRendererConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgRendererConfig1 iService;

        public SyncSetRendererConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetRendererConfig(aAsyncHandle);
        }
    };

    internal class SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgRendererConfig1 iService;
        private String iResamplerConfig;

        public SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
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

    internal class SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgRendererConfig1 iService;

        public SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetResamplerConfig(aAsyncHandle);
        }
    };

    internal class SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgRendererConfig1 iService;
        private String iHardwareConfig;

        public SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String HardwareConfig()
        {
            return iHardwareConfig;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetHardwareConfig(aAsyncHandle, out iHardwareConfig);
        }
    };

    internal class SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgRendererConfig1 iService;

        public SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetHardwareConfig(aAsyncHandle);
        }
    };

    internal class SyncGetWiFiListAvOpenhomeOrgRendererConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgRendererConfig1 iService;
        private String iWiFiList;

        public SyncGetWiFiListAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String WiFiList()
        {
            return iWiFiList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetWiFiList(aAsyncHandle, out iWiFiList);
        }
    };

    internal class SyncSetTimeZoneAvOpenhomeOrgRendererConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgRendererConfig1 iService;

        public SyncSetTimeZoneAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetTimeZone(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:RendererConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgRendererConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgRendererConfig1
    {
        private OpenHome.Net.Core.Action iActionGetRendererConfig;
        private OpenHome.Net.Core.Action iActionSetRendererConfig;
        private OpenHome.Net.Core.Action iActionGetResamplerConfig;
        private OpenHome.Net.Core.Action iActionSetResamplerConfig;
        private OpenHome.Net.Core.Action iActionGetHardwareConfig;
        private OpenHome.Net.Core.Action iActionSetHardwareConfig;
        private OpenHome.Net.Core.Action iActionGetWiFiList;
        private OpenHome.Net.Core.Action iActionSetTimeZone;
        private PropertyString iRendererConfig;
        private PropertyString iResamplerConfig;
        private PropertyString iHardwareConfig;
        private System.Action iRendererConfigChanged;
        private System.Action iResamplerConfigChanged;
        private System.Action iHardwareConfigChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgRendererConfig1(CpDevice aDevice)
            : base("av-openhome-org", "RendererConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetRendererConfig = new OpenHome.Net.Core.Action("GetRendererConfig");
            param = new ParameterString("RendererConfig", allowedValues);
            iActionGetRendererConfig.AddOutputParameter(param);

            iActionSetRendererConfig = new OpenHome.Net.Core.Action("SetRendererConfig");
            param = new ParameterString("RendererConfig", allowedValues);
            iActionSetRendererConfig.AddInputParameter(param);

            iActionGetResamplerConfig = new OpenHome.Net.Core.Action("GetResamplerConfig");
            param = new ParameterString("ResamplerConfig", allowedValues);
            iActionGetResamplerConfig.AddOutputParameter(param);

            iActionSetResamplerConfig = new OpenHome.Net.Core.Action("SetResamplerConfig");
            param = new ParameterString("ResamplerConfig", allowedValues);
            iActionSetResamplerConfig.AddInputParameter(param);

            iActionGetHardwareConfig = new OpenHome.Net.Core.Action("GetHardwareConfig");
            param = new ParameterString("HardwareConfig", allowedValues);
            iActionGetHardwareConfig.AddOutputParameter(param);

            iActionSetHardwareConfig = new OpenHome.Net.Core.Action("SetHardwareConfig");
            param = new ParameterString("HardwareConfig", allowedValues);
            iActionSetHardwareConfig.AddInputParameter(param);

            iActionGetWiFiList = new OpenHome.Net.Core.Action("GetWiFiList");
            param = new ParameterString("WiFiList", allowedValues);
            iActionGetWiFiList.AddOutputParameter(param);

            iActionSetTimeZone = new OpenHome.Net.Core.Action("SetTimeZone");
            param = new ParameterString("TimeZone", allowedValues);
            iActionSetTimeZone.AddInputParameter(param);
            param = new ParameterString("CurrentTime", allowedValues);
            iActionSetTimeZone.AddInputParameter(param);
            param = new ParameterString("TimeStamp", allowedValues);
            iActionSetTimeZone.AddInputParameter(param);

            iRendererConfig = new PropertyString("RendererConfig", RendererConfigPropertyChanged);
            AddProperty(iRendererConfig);
            iResamplerConfig = new PropertyString("ResamplerConfig", ResamplerConfigPropertyChanged);
            AddProperty(iResamplerConfig);
            iHardwareConfig = new PropertyString("HardwareConfig", HardwareConfigPropertyChanged);
            AddProperty(iHardwareConfig);
            
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
            SyncGetRendererConfigAvOpenhomeOrgRendererConfig1 sync = new SyncGetRendererConfigAvOpenhomeOrgRendererConfig1(this);
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
            SyncSetRendererConfigAvOpenhomeOrgRendererConfig1 sync = new SyncSetRendererConfigAvOpenhomeOrgRendererConfig1(this);
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
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aResamplerConfig"></param>
        public void SyncGetResamplerConfig(out String aResamplerConfig)
        {
            SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1 sync = new SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1(this);
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
            SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1 sync = new SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1(this);
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
        /// <param name="aHardwareConfig"></param>
        public void SyncGetHardwareConfig(out String aHardwareConfig)
        {
            SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1 sync = new SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1(this);
            BeginGetHardwareConfig(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aHardwareConfig = sync.HardwareConfig();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetHardwareConfig().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetHardwareConfig(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetHardwareConfig, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetHardwareConfig.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aHardwareConfig"></param>
        public void EndGetHardwareConfig(IntPtr aAsyncHandle, out String aHardwareConfig)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aHardwareConfig = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aHardwareConfig"></param>
        public void SyncSetHardwareConfig(String aHardwareConfig)
        {
            SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1 sync = new SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1(this);
            BeginSetHardwareConfig(aHardwareConfig, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetHardwareConfig().</remarks>
        /// <param name="aHardwareConfig"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetHardwareConfig(String aHardwareConfig, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetHardwareConfig, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetHardwareConfig.InputParameter(inIndex++), aHardwareConfig));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetHardwareConfig(IntPtr aAsyncHandle)
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
        /// <param name="aWiFiList"></param>
        public void SyncGetWiFiList(out String aWiFiList)
        {
            SyncGetWiFiListAvOpenhomeOrgRendererConfig1 sync = new SyncGetWiFiListAvOpenhomeOrgRendererConfig1(this);
            BeginGetWiFiList(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aWiFiList = sync.WiFiList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetWiFiList().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetWiFiList(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetWiFiList, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetWiFiList.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aWiFiList"></param>
        public void EndGetWiFiList(IntPtr aAsyncHandle, out String aWiFiList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aWiFiList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aTimeZone"></param>
        /// <param name="aCurrentTime"></param>
        /// <param name="aTimeStamp"></param>
        public void SyncSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp)
        {
            SyncSetTimeZoneAvOpenhomeOrgRendererConfig1 sync = new SyncSetTimeZoneAvOpenhomeOrgRendererConfig1(this);
            BeginSetTimeZone(aTimeZone, aCurrentTime, aTimeStamp, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetTimeZone().</remarks>
        /// <param name="aTimeZone"></param>
        /// <param name="aCurrentTime"></param>
        /// <param name="aTimeStamp"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetTimeZone, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetTimeZone.InputParameter(inIndex++), aTimeZone));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetTimeZone.InputParameter(inIndex++), aCurrentTime));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetTimeZone.InputParameter(inIndex++), aTimeStamp));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetTimeZone(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the RendererConfig state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgRendererConfig1 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the ResamplerConfig state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgRendererConfig1 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the HardwareConfig state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgRendererConfig1 instance will not overlap.</remarks>
        /// <param name="aHardwareConfigChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyHardwareConfigChanged(System.Action aHardwareConfigChanged)
        {
            lock (iPropertyLock)
            {
                iHardwareConfigChanged = aHardwareConfigChanged;
            }
        }

        private void HardwareConfigPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iHardwareConfigChanged);
            }
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
        /// Query the value of the HardwareConfig property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the HardwareConfig property</returns>
        public String PropertyHardwareConfig()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iHardwareConfig.Value();
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
            iActionGetResamplerConfig.Dispose();
            iActionSetResamplerConfig.Dispose();
            iActionGetHardwareConfig.Dispose();
            iActionSetHardwareConfig.Dispose();
            iActionGetWiFiList.Dispose();
            iActionSetTimeZone.Dispose();
            iRendererConfig.Dispose();
            iResamplerConfig.Dispose();
            iHardwareConfig.Dispose();
        }
    }
}

