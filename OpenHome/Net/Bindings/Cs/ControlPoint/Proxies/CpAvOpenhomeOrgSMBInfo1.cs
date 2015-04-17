using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgSMBInfo1 : ICpProxy, IDisposable
    {
        void SyncSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord);
        void BeginSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetSMBConfig(IntPtr aAsyncHandle);
        void SyncGetSMBConnectResult(out bool aSMBConnectResult);
        void BeginGetSMBConnectResult(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSMBConnectResult(IntPtr aAsyncHandle, out bool aSMBConnectResult);
        void SyncGetSMBInfo(out bool aSMBConnectStatus, out String aSMBERRORInfo, out String aSMBCapacity, out String aSMBFileCount);
        void BeginGetSMBInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSMBInfo(IntPtr aAsyncHandle, out bool aSMBConnectStatus, out String aSMBERRORInfo, out String aSMBCapacity, out String aSMBFileCount);
    }

    internal class SyncSetSMBConfigAvOpenhomeOrgSMBInfo1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgSMBInfo1 iService;

        public SyncSetSMBConfigAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetSMBConfig(aAsyncHandle);
        }
    };

    internal class SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgSMBInfo1 iService;
        private bool iSMBConnectResult;

        public SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1 aProxy)
        {
            iService = aProxy;
        }
        public bool SMBConnectResult()
        {
            return iSMBConnectResult;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetSMBConnectResult(aAsyncHandle, out iSMBConnectResult);
        }
    };

    internal class SyncGetSMBInfoAvOpenhomeOrgSMBInfo1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgSMBInfo1 iService;
        private bool iSMBConnectStatus;
        private String iSMBERRORInfo;
        private String iSMBCapacity;
        private String iSMBFileCount;

        public SyncGetSMBInfoAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1 aProxy)
        {
            iService = aProxy;
        }
        public bool SMBConnectStatus()
        {
            return iSMBConnectStatus;
        }
        public String SMBERRORInfo()
        {
            return iSMBERRORInfo;
        }
        public String SMBCapacity()
        {
            return iSMBCapacity;
        }
        public String SMBFileCount()
        {
            return iSMBFileCount;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetSMBInfo(aAsyncHandle, out iSMBConnectStatus, out iSMBERRORInfo, out iSMBCapacity, out iSMBFileCount);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:SMBInfo:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgSMBInfo1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgSMBInfo1
    {
        private OpenHome.Net.Core.Action iActionSetSMBConfig;
        private OpenHome.Net.Core.Action iActionGetSMBConnectResult;
        private OpenHome.Net.Core.Action iActionGetSMBInfo;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgSMBInfo1(CpDevice aDevice)
            : base("av-openhome-org", "SMBInfo", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionSetSMBConfig = new OpenHome.Net.Core.Action("SetSMBConfig");
            param = new ParameterString("SMBAddr", allowedValues);
            iActionSetSMBConfig.AddInputParameter(param);
            param = new ParameterString("SMBUserName", allowedValues);
            iActionSetSMBConfig.AddInputParameter(param);
            param = new ParameterString("SMBPassWord", allowedValues);
            iActionSetSMBConfig.AddInputParameter(param);

            iActionGetSMBConnectResult = new OpenHome.Net.Core.Action("GetSMBConnectResult");
            param = new ParameterBool("SMBConnectResult");
            iActionGetSMBConnectResult.AddOutputParameter(param);

            iActionGetSMBInfo = new OpenHome.Net.Core.Action("GetSMBInfo");
            param = new ParameterBool("SMBConnectStatus");
            iActionGetSMBInfo.AddOutputParameter(param);
            param = new ParameterString("SMBERRORInfo", allowedValues);
            iActionGetSMBInfo.AddOutputParameter(param);
            param = new ParameterString("SMBCapacity", allowedValues);
            iActionGetSMBInfo.AddOutputParameter(param);
            param = new ParameterString("SMBFileCount", allowedValues);
            iActionGetSMBInfo.AddOutputParameter(param);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSMBAddr"></param>
        /// <param name="aSMBUserName"></param>
        /// <param name="aSMBPassWord"></param>
        public void SyncSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord)
        {
            SyncSetSMBConfigAvOpenhomeOrgSMBInfo1 sync = new SyncSetSMBConfigAvOpenhomeOrgSMBInfo1(this);
            BeginSetSMBConfig(aSMBAddr, aSMBUserName, aSMBPassWord, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetSMBConfig().</remarks>
        /// <param name="aSMBAddr"></param>
        /// <param name="aSMBUserName"></param>
        /// <param name="aSMBPassWord"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetSMBConfig, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetSMBConfig.InputParameter(inIndex++), aSMBAddr));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetSMBConfig.InputParameter(inIndex++), aSMBUserName));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetSMBConfig.InputParameter(inIndex++), aSMBPassWord));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetSMBConfig(IntPtr aAsyncHandle)
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
        /// <param name="aSMBConnectResult"></param>
        public void SyncGetSMBConnectResult(out bool aSMBConnectResult)
        {
            SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1 sync = new SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1(this);
            BeginGetSMBConnectResult(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSMBConnectResult = sync.SMBConnectResult();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetSMBConnectResult().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetSMBConnectResult(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetSMBConnectResult, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetSMBConnectResult.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSMBConnectResult"></param>
        public void EndGetSMBConnectResult(IntPtr aAsyncHandle, out bool aSMBConnectResult)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSMBConnectResult = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSMBConnectStatus"></param>
        /// <param name="aSMBERRORInfo"></param>
        /// <param name="aSMBCapacity"></param>
        /// <param name="aSMBFileCount"></param>
        public void SyncGetSMBInfo(out bool aSMBConnectStatus, out String aSMBERRORInfo, out String aSMBCapacity, out String aSMBFileCount)
        {
            SyncGetSMBInfoAvOpenhomeOrgSMBInfo1 sync = new SyncGetSMBInfoAvOpenhomeOrgSMBInfo1(this);
            BeginGetSMBInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSMBConnectStatus = sync.SMBConnectStatus();
            aSMBERRORInfo = sync.SMBERRORInfo();
            aSMBCapacity = sync.SMBCapacity();
            aSMBFileCount = sync.SMBFileCount();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetSMBInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetSMBInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetSMBInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetSMBInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSMBInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSMBInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSMBInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSMBConnectStatus"></param>
        /// <param name="aSMBERRORInfo"></param>
        /// <param name="aSMBCapacity"></param>
        /// <param name="aSMBFileCount"></param>
        public void EndGetSMBInfo(IntPtr aAsyncHandle, out bool aSMBConnectStatus, out String aSMBERRORInfo, out String aSMBCapacity, out String aSMBFileCount)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSMBConnectStatus = Invocation.OutputBool(aAsyncHandle, index++);
            aSMBERRORInfo = Invocation.OutputString(aAsyncHandle, index++);
            aSMBCapacity = Invocation.OutputString(aAsyncHandle, index++);
            aSMBFileCount = Invocation.OutputString(aAsyncHandle, index++);
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
            iActionSetSMBConfig.Dispose();
            iActionGetSMBConnectResult.Dispose();
            iActionGetSMBInfo.Dispose();
        }
    }
}

