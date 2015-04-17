using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgUSBInfo1 : ICpProxy, IDisposable
    {
        void SyncGetUSBInfo(out bool aUSBPlugStatus, out String aUSBERRORInfo, out String aUSBCapacity, out String aUSBFileCount);
        void BeginGetUSBInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetUSBInfo(IntPtr aAsyncHandle, out bool aUSBPlugStatus, out String aUSBERRORInfo, out String aUSBCapacity, out String aUSBFileCount);
    }

    internal class SyncGetUSBInfoAvOpenhomeOrgUSBInfo1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgUSBInfo1 iService;
        private bool iUSBPlugStatus;
        private String iUSBERRORInfo;
        private String iUSBCapacity;
        private String iUSBFileCount;

        public SyncGetUSBInfoAvOpenhomeOrgUSBInfo1(CpProxyAvOpenhomeOrgUSBInfo1 aProxy)
        {
            iService = aProxy;
        }
        public bool USBPlugStatus()
        {
            return iUSBPlugStatus;
        }
        public String USBERRORInfo()
        {
            return iUSBERRORInfo;
        }
        public String USBCapacity()
        {
            return iUSBCapacity;
        }
        public String USBFileCount()
        {
            return iUSBFileCount;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetUSBInfo(aAsyncHandle, out iUSBPlugStatus, out iUSBERRORInfo, out iUSBCapacity, out iUSBFileCount);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:USBInfo:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgUSBInfo1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgUSBInfo1
    {
        private OpenHome.Net.Core.Action iActionGetUSBInfo;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgUSBInfo1(CpDevice aDevice)
            : base("av-openhome-org", "USBInfo", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetUSBInfo = new OpenHome.Net.Core.Action("GetUSBInfo");
            param = new ParameterBool("USBPlugStatus");
            iActionGetUSBInfo.AddOutputParameter(param);
            param = new ParameterString("USBERRORInfo", allowedValues);
            iActionGetUSBInfo.AddOutputParameter(param);
            param = new ParameterString("USBCapacity", allowedValues);
            iActionGetUSBInfo.AddOutputParameter(param);
            param = new ParameterString("USBFileCount", allowedValues);
            iActionGetUSBInfo.AddOutputParameter(param);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aUSBPlugStatus"></param>
        /// <param name="aUSBERRORInfo"></param>
        /// <param name="aUSBCapacity"></param>
        /// <param name="aUSBFileCount"></param>
        public void SyncGetUSBInfo(out bool aUSBPlugStatus, out String aUSBERRORInfo, out String aUSBCapacity, out String aUSBFileCount)
        {
            SyncGetUSBInfoAvOpenhomeOrgUSBInfo1 sync = new SyncGetUSBInfoAvOpenhomeOrgUSBInfo1(this);
            BeginGetUSBInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aUSBPlugStatus = sync.USBPlugStatus();
            aUSBERRORInfo = sync.USBERRORInfo();
            aUSBCapacity = sync.USBCapacity();
            aUSBFileCount = sync.USBFileCount();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetUSBInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetUSBInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetUSBInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetUSBInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetUSBInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetUSBInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetUSBInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aUSBPlugStatus"></param>
        /// <param name="aUSBERRORInfo"></param>
        /// <param name="aUSBCapacity"></param>
        /// <param name="aUSBFileCount"></param>
        public void EndGetUSBInfo(IntPtr aAsyncHandle, out bool aUSBPlugStatus, out String aUSBERRORInfo, out String aUSBCapacity, out String aUSBFileCount)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aUSBPlugStatus = Invocation.OutputBool(aAsyncHandle, index++);
            aUSBERRORInfo = Invocation.OutputString(aAsyncHandle, index++);
            aUSBCapacity = Invocation.OutputString(aAsyncHandle, index++);
            aUSBFileCount = Invocation.OutputString(aAsyncHandle, index++);
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
            iActionGetUSBInfo.Dispose();
        }
    }
}

