using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgDACConfig1 : ICpProxy, IDisposable
    {
        void SyncGetFilterMode(out String aFilterMode, out String aFilterModeList);
        void BeginGetFilterMode(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetFilterMode(IntPtr aAsyncHandle, out String aFilterMode, out String aFilterModeList);
        void SyncSetFilterMode(String aFilterMode);
        void BeginSetFilterMode(String aFilterMode, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetFilterMode(IntPtr aAsyncHandle);
        void SyncGetDACPhase(out uint aPhase);
        void BeginGetDACPhase(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDACPhase(IntPtr aAsyncHandle, out uint aPhase);
        void SyncSetDACPhase(uint aPhase);
        void BeginSetDACPhase(uint aPhase, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetDACPhase(IntPtr aAsyncHandle);
        void SyncGetDACBalance(out uint aBalance);
        void BeginGetDACBalance(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDACBalance(IntPtr aAsyncHandle, out uint aBalance);
        void SyncSetDACBalance(uint aBalance);
        void BeginSetDACBalance(uint aBalance, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetDACBalance(IntPtr aAsyncHandle);
        void SyncGetWaitingTime(out String aWaitingTime);
        void BeginGetWaitingTime(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetWaitingTime(IntPtr aAsyncHandle, out String aWaitingTime);
        void SyncSetWaitingTime(String aWaitingTime);
        void BeginSetWaitingTime(String aWaitingTime, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetWaitingTime(IntPtr aAsyncHandle);
        void SetPropertyCurrentActionChanged(System.Action aCurrentActionChanged);
        uint PropertyCurrentAction();
    }

    internal class SyncGetFilterModeAvOpenhomeOrgDACConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDACConfig1 iService;
        private String iFilterMode;
        private String iFilterModeList;

        public SyncGetFilterModeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String FilterMode()
        {
            return iFilterMode;
        }
        public String FilterModeList()
        {
            return iFilterModeList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetFilterMode(aAsyncHandle, out iFilterMode, out iFilterModeList);
        }
    };

    internal class SyncSetFilterModeAvOpenhomeOrgDACConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDACConfig1 iService;

        public SyncSetFilterModeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetFilterMode(aAsyncHandle);
        }
    };

    internal class SyncGetDACPhaseAvOpenhomeOrgDACConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDACConfig1 iService;
        private uint iPhase;

        public SyncGetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
        {
            iService = aProxy;
        }
        public uint Phase()
        {
            return iPhase;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDACPhase(aAsyncHandle, out iPhase);
        }
    };

    internal class SyncSetDACPhaseAvOpenhomeOrgDACConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDACConfig1 iService;

        public SyncSetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetDACPhase(aAsyncHandle);
        }
    };

    internal class SyncGetDACBalanceAvOpenhomeOrgDACConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDACConfig1 iService;
        private uint iBalance;

        public SyncGetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
        {
            iService = aProxy;
        }
        public uint Balance()
        {
            return iBalance;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDACBalance(aAsyncHandle, out iBalance);
        }
    };

    internal class SyncSetDACBalanceAvOpenhomeOrgDACConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDACConfig1 iService;

        public SyncSetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetDACBalance(aAsyncHandle);
        }
    };

    internal class SyncGetWaitingTimeAvOpenhomeOrgDACConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDACConfig1 iService;
        private String iWaitingTime;

        public SyncGetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String WaitingTime()
        {
            return iWaitingTime;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetWaitingTime(aAsyncHandle, out iWaitingTime);
        }
    };

    internal class SyncSetWaitingTimeAvOpenhomeOrgDACConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDACConfig1 iService;

        public SyncSetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetWaitingTime(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:DACConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgDACConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgDACConfig1
    {
        private OpenHome.Net.Core.Action iActionGetFilterMode;
        private OpenHome.Net.Core.Action iActionSetFilterMode;
        private OpenHome.Net.Core.Action iActionGetDACPhase;
        private OpenHome.Net.Core.Action iActionSetDACPhase;
        private OpenHome.Net.Core.Action iActionGetDACBalance;
        private OpenHome.Net.Core.Action iActionSetDACBalance;
        private OpenHome.Net.Core.Action iActionGetWaitingTime;
        private OpenHome.Net.Core.Action iActionSetWaitingTime;
        private PropertyUint iCurrentAction;
        private System.Action iCurrentActionChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgDACConfig1(CpDevice aDevice)
            : base("av-openhome-org", "DACConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetFilterMode = new OpenHome.Net.Core.Action("GetFilterMode");
            param = new ParameterString("FilterMode", allowedValues);
            iActionGetFilterMode.AddOutputParameter(param);
            param = new ParameterString("FilterModeList", allowedValues);
            iActionGetFilterMode.AddOutputParameter(param);

            iActionSetFilterMode = new OpenHome.Net.Core.Action("SetFilterMode");
            param = new ParameterString("FilterMode", allowedValues);
            iActionSetFilterMode.AddInputParameter(param);

            iActionGetDACPhase = new OpenHome.Net.Core.Action("GetDACPhase");
            param = new ParameterUint("Phase");
            iActionGetDACPhase.AddOutputParameter(param);

            iActionSetDACPhase = new OpenHome.Net.Core.Action("SetDACPhase");
            param = new ParameterUint("Phase");
            iActionSetDACPhase.AddInputParameter(param);

            iActionGetDACBalance = new OpenHome.Net.Core.Action("GetDACBalance");
            param = new ParameterUint("Balance");
            iActionGetDACBalance.AddOutputParameter(param);

            iActionSetDACBalance = new OpenHome.Net.Core.Action("SetDACBalance");
            param = new ParameterUint("Balance");
            iActionSetDACBalance.AddInputParameter(param);

            iActionGetWaitingTime = new OpenHome.Net.Core.Action("GetWaitingTime");
            param = new ParameterString("WaitingTime", allowedValues);
            iActionGetWaitingTime.AddOutputParameter(param);

            iActionSetWaitingTime = new OpenHome.Net.Core.Action("SetWaitingTime");
            param = new ParameterString("WaitingTime", allowedValues);
            iActionSetWaitingTime.AddInputParameter(param);

            iCurrentAction = new PropertyUint("CurrentAction", CurrentActionPropertyChanged);
            AddProperty(iCurrentAction);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aFilterMode"></param>
        /// <param name="aFilterModeList"></param>
        public void SyncGetFilterMode(out String aFilterMode, out String aFilterModeList)
        {
            SyncGetFilterModeAvOpenhomeOrgDACConfig1 sync = new SyncGetFilterModeAvOpenhomeOrgDACConfig1(this);
            BeginGetFilterMode(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aFilterMode = sync.FilterMode();
            aFilterModeList = sync.FilterModeList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetFilterMode().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetFilterMode(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetFilterMode, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetFilterMode.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetFilterMode.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aFilterMode"></param>
        /// <param name="aFilterModeList"></param>
        public void EndGetFilterMode(IntPtr aAsyncHandle, out String aFilterMode, out String aFilterModeList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aFilterMode = Invocation.OutputString(aAsyncHandle, index++);
            aFilterModeList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aFilterMode"></param>
        public void SyncSetFilterMode(String aFilterMode)
        {
            SyncSetFilterModeAvOpenhomeOrgDACConfig1 sync = new SyncSetFilterModeAvOpenhomeOrgDACConfig1(this);
            BeginSetFilterMode(aFilterMode, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetFilterMode().</remarks>
        /// <param name="aFilterMode"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetFilterMode(String aFilterMode, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetFilterMode, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetFilterMode.InputParameter(inIndex++), aFilterMode));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetFilterMode(IntPtr aAsyncHandle)
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
        /// <param name="aPhase"></param>
        public void SyncGetDACPhase(out uint aPhase)
        {
            SyncGetDACPhaseAvOpenhomeOrgDACConfig1 sync = new SyncGetDACPhaseAvOpenhomeOrgDACConfig1(this);
            BeginGetDACPhase(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aPhase = sync.Phase();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDACPhase().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDACPhase(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDACPhase, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetDACPhase.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aPhase"></param>
        public void EndGetDACPhase(IntPtr aAsyncHandle, out uint aPhase)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aPhase = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aPhase"></param>
        public void SyncSetDACPhase(uint aPhase)
        {
            SyncSetDACPhaseAvOpenhomeOrgDACConfig1 sync = new SyncSetDACPhaseAvOpenhomeOrgDACConfig1(this);
            BeginSetDACPhase(aPhase, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetDACPhase().</remarks>
        /// <param name="aPhase"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetDACPhase(uint aPhase, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetDACPhase, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSetDACPhase.InputParameter(inIndex++), aPhase));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetDACPhase(IntPtr aAsyncHandle)
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
        /// <param name="aBalance"></param>
        public void SyncGetDACBalance(out uint aBalance)
        {
            SyncGetDACBalanceAvOpenhomeOrgDACConfig1 sync = new SyncGetDACBalanceAvOpenhomeOrgDACConfig1(this);
            BeginGetDACBalance(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aBalance = sync.Balance();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDACBalance().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDACBalance(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDACBalance, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetDACBalance.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aBalance"></param>
        public void EndGetDACBalance(IntPtr aAsyncHandle, out uint aBalance)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aBalance = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aBalance"></param>
        public void SyncSetDACBalance(uint aBalance)
        {
            SyncSetDACBalanceAvOpenhomeOrgDACConfig1 sync = new SyncSetDACBalanceAvOpenhomeOrgDACConfig1(this);
            BeginSetDACBalance(aBalance, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetDACBalance().</remarks>
        /// <param name="aBalance"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetDACBalance(uint aBalance, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetDACBalance, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSetDACBalance.InputParameter(inIndex++), aBalance));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetDACBalance(IntPtr aAsyncHandle)
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
        /// <param name="aWaitingTime"></param>
        public void SyncGetWaitingTime(out String aWaitingTime)
        {
            SyncGetWaitingTimeAvOpenhomeOrgDACConfig1 sync = new SyncGetWaitingTimeAvOpenhomeOrgDACConfig1(this);
            BeginGetWaitingTime(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aWaitingTime = sync.WaitingTime();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetWaitingTime().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetWaitingTime(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetWaitingTime, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetWaitingTime.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aWaitingTime"></param>
        public void EndGetWaitingTime(IntPtr aAsyncHandle, out String aWaitingTime)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aWaitingTime = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aWaitingTime"></param>
        public void SyncSetWaitingTime(String aWaitingTime)
        {
            SyncSetWaitingTimeAvOpenhomeOrgDACConfig1 sync = new SyncSetWaitingTimeAvOpenhomeOrgDACConfig1(this);
            BeginSetWaitingTime(aWaitingTime, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetWaitingTime().</remarks>
        /// <param name="aWaitingTime"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetWaitingTime(String aWaitingTime, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetWaitingTime, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetWaitingTime.InputParameter(inIndex++), aWaitingTime));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetWaitingTime(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CurrentAction state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgDACConfig1 instance will not overlap.</remarks>
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
            iActionGetFilterMode.Dispose();
            iActionSetFilterMode.Dispose();
            iActionGetDACPhase.Dispose();
            iActionSetDACPhase.Dispose();
            iActionGetDACBalance.Dispose();
            iActionSetDACBalance.Dispose();
            iActionGetWaitingTime.Dispose();
            iActionSetWaitingTime.Dispose();
            iCurrentAction.Dispose();
        }
    }
}

