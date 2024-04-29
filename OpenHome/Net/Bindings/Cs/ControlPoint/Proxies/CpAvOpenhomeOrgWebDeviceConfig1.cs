using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgWebDeviceConfig1 : ICpProxy, IDisposable
    {
        void SyncGetDeviceConfig(out String aDeviceConfig);
        void BeginGetDeviceConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDeviceConfig(IntPtr aAsyncHandle, out String aDeviceConfig);
        void SyncSetDeviceConfig(String aDeviceConfig);
        void BeginSetDeviceConfig(String aDeviceConfig, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetDeviceConfig(IntPtr aAsyncHandle);
        void SyncGetWiFiList(out String aWiFiList);
        void BeginGetWiFiList(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetWiFiList(IntPtr aAsyncHandle, out String aWiFiList);
        void SyncSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp);
        void BeginSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetTimeZone(IntPtr aAsyncHandle);
        void SyncGetServiceLocation(out String aServiceLoaction);
        void BeginGetServiceLocation(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetServiceLocation(IntPtr aAsyncHandle, out String aServiceLoaction);
        void SetPropertyAliveChanged(System.Action aAliveChanged);
        bool PropertyAlive();
        void SetPropertyDeviceConfigChanged(System.Action aDeviceConfigChanged);
        String PropertyDeviceConfig();
        void SetPropertyCurrentActionChanged(System.Action aCurrentActionChanged);
        uint PropertyCurrentAction();
    }

    internal class SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebDeviceConfig1 iService;
        private String iDeviceConfig;

        public SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String DeviceConfig()
        {
            return iDeviceConfig;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDeviceConfig(aAsyncHandle, out iDeviceConfig);
        }
    };

    internal class SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebDeviceConfig1 iService;

        public SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetDeviceConfig(aAsyncHandle);
        }
    };

    internal class SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebDeviceConfig1 iService;
        private String iWiFiList;

        public SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1 aProxy)
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

    internal class SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebDeviceConfig1 iService;

        public SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetTimeZone(aAsyncHandle);
        }
    };

    internal class SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgWebDeviceConfig1 iService;
        private String iServiceLoaction;

        public SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String ServiceLoaction()
        {
            return iServiceLoaction;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetServiceLocation(aAsyncHandle, out iServiceLoaction);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:WebDeviceConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgWebDeviceConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgWebDeviceConfig1
    {
        private OpenHome.Net.Core.Action iActionGetDeviceConfig;
        private OpenHome.Net.Core.Action iActionSetDeviceConfig;
        private OpenHome.Net.Core.Action iActionGetWiFiList;
        private OpenHome.Net.Core.Action iActionSetTimeZone;
        private OpenHome.Net.Core.Action iActionGetServiceLocation;
        private PropertyBool iAlive;
        private PropertyString iDeviceConfig;
        private PropertyUint iCurrentAction;
        private System.Action iAliveChanged;
        private System.Action iDeviceConfigChanged;
        private System.Action iCurrentActionChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgWebDeviceConfig1(ICpDevice aDevice)
            : base("av-openhome-org", "WebDeviceConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetDeviceConfig = new OpenHome.Net.Core.Action("GetDeviceConfig");
            param = new ParameterString("DeviceConfig", allowedValues);
            iActionGetDeviceConfig.AddOutputParameter(param);

            iActionSetDeviceConfig = new OpenHome.Net.Core.Action("SetDeviceConfig");
            param = new ParameterString("DeviceConfig", allowedValues);
            iActionSetDeviceConfig.AddInputParameter(param);

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

            iActionGetServiceLocation = new OpenHome.Net.Core.Action("GetServiceLocation");
            param = new ParameterString("ServiceLoaction", allowedValues);
            iActionGetServiceLocation.AddOutputParameter(param);

            iAlive = new PropertyBool("Alive", AlivePropertyChanged);
            AddProperty(iAlive);
            iDeviceConfig = new PropertyString("DeviceConfig", DeviceConfigPropertyChanged);
            AddProperty(iDeviceConfig);
            iCurrentAction = new PropertyUint("CurrentAction", CurrentActionPropertyChanged);
            AddProperty(iCurrentAction);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDeviceConfig"></param>
        public void SyncGetDeviceConfig(out String aDeviceConfig)
        {
            SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 sync = new SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(this);
            BeginGetDeviceConfig(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aDeviceConfig = sync.DeviceConfig();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDeviceConfig().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDeviceConfig(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDeviceConfig, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDeviceConfig.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aDeviceConfig"></param>
        public void EndGetDeviceConfig(IntPtr aAsyncHandle, out String aDeviceConfig)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aDeviceConfig = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDeviceConfig"></param>
        public void SyncSetDeviceConfig(String aDeviceConfig)
        {
            SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 sync = new SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(this);
            BeginSetDeviceConfig(aDeviceConfig, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetDeviceConfig().</remarks>
        /// <param name="aDeviceConfig"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetDeviceConfig(String aDeviceConfig, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetDeviceConfig, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetDeviceConfig.InputParameter(inIndex++), aDeviceConfig));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetDeviceConfig(IntPtr aAsyncHandle)
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
            SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1 sync = new SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1(this);
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
            SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1 sync = new SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1(this);
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
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aServiceLoaction"></param>
        public void SyncGetServiceLocation(out String aServiceLoaction)
        {
            SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1 sync = new SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1(this);
            BeginGetServiceLocation(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aServiceLoaction = sync.ServiceLoaction();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetServiceLocation().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetServiceLocation(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetServiceLocation, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetServiceLocation.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aServiceLoaction"></param>
        public void EndGetServiceLocation(IntPtr aAsyncHandle, out String aServiceLoaction)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aServiceLoaction = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the Alive state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgWebDeviceConfig1 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the DeviceConfig state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgWebDeviceConfig1 instance will not overlap.</remarks>
        /// <param name="aDeviceConfigChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyDeviceConfigChanged(System.Action aDeviceConfigChanged)
        {
            lock (iPropertyLock)
            {
                iDeviceConfigChanged = aDeviceConfigChanged;
            }
        }

        private void DeviceConfigPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iDeviceConfigChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CurrentAction state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgWebDeviceConfig1 instance will not overlap.</remarks>
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
        /// Query the value of the DeviceConfig property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the DeviceConfig property</returns>
        public String PropertyDeviceConfig()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iDeviceConfig.Value();
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
            iActionGetDeviceConfig.Dispose();
            iActionSetDeviceConfig.Dispose();
            iActionGetWiFiList.Dispose();
            iActionSetTimeZone.Dispose();
            iActionGetServiceLocation.Dispose();
            iAlive.Dispose();
            iDeviceConfig.Dispose();
            iCurrentAction.Dispose();
        }
    }
}

