using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgRenderingInfo1 : ICpProxy, IDisposable
    {
        void SyncGetEntireInfo(out String aInfo);
        void BeginGetEntireInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetEntireInfo(IntPtr aAsyncHandle, out String aInfo);
        void SetPropertyInfoChanged(System.Action aInfoChanged);
        String PropertyInfo();
    }

    internal class SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgRenderingInfo1 iService;
        private String iInfo;

        public SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1(CpProxyAvOpenhomeOrgRenderingInfo1 aProxy)
        {
            iService = aProxy;
        }
        public String Info()
        {
            return iInfo;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetEntireInfo(aAsyncHandle, out iInfo);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:RenderingInfo:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgRenderingInfo1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgRenderingInfo1
    {
        private OpenHome.Net.Core.Action iActionGetEntireInfo;
        private PropertyString iInfo;
        private System.Action iInfoChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgRenderingInfo1(CpDevice aDevice)
            : base("av-openhome-org", "RenderingInfo", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetEntireInfo = new OpenHome.Net.Core.Action("GetEntireInfo");
            param = new ParameterString("Info", allowedValues);
            iActionGetEntireInfo.AddOutputParameter(param);

            iInfo = new PropertyString("Info", InfoPropertyChanged);
            AddProperty(iInfo);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aInfo"></param>
        public void SyncGetEntireInfo(out String aInfo)
        {
            SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1 sync = new SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1(this);
            BeginGetEntireInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aInfo = sync.Info();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetEntireInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetEntireInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetEntireInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetEntireInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aInfo"></param>
        public void EndGetEntireInfo(IntPtr aAsyncHandle, out String aInfo)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aInfo = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the Info state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgRenderingInfo1 instance will not overlap.</remarks>
        /// <param name="aInfoChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyInfoChanged(System.Action aInfoChanged)
        {
            lock (iPropertyLock)
            {
                iInfoChanged = aInfoChanged;
            }
        }

        private void InfoPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iInfoChanged);
            }
        }

        /// <summary>
        /// Query the value of the Info property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Info property</returns>
        public String PropertyInfo()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iInfo.Value();
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
            iActionGetEntireInfo.Dispose();
            iInfo.Dispose();
        }
    }
}

