using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgGroupConfig1 : ICpProxy, IDisposable
    {
        void SyncSetGroupMode(String aGroupMode, String aGroupID, String aGroupName);
        void BeginSetGroupMode(String aGroupMode, String aGroupID, String aGroupName, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetGroupMode(IntPtr aAsyncHandle);
        void SyncGetGroupMode(out String aGroupMode, out String aGroupID, out String aGroupName);
        void BeginGetGroupMode(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetGroupMode(IntPtr aAsyncHandle, out String aGroupMode, out String aGroupID, out String aGroupName);
        void SyncSetGroupVolume(uint aGroupVolume);
        void BeginSetGroupVolume(uint aGroupVolume, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetGroupVolume(IntPtr aAsyncHandle);
        void SyncGetGroupVolume(out uint aGroupVolume);
        void BeginGetGroupVolume(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetGroupVolume(IntPtr aAsyncHandle, out uint aGroupVolume);
        void SyncSetGroupMute(bool aGroupMute);
        void BeginSetGroupMute(bool aGroupMute, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetGroupMute(IntPtr aAsyncHandle);
        void SyncGetGroupMute(out bool aGroupMute);
        void BeginGetGroupMute(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetGroupMute(IntPtr aAsyncHandle, out bool aGroupMute);
        void SyncGetGroupStatus(out String aGroupStatus);
        void BeginGetGroupStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetGroupStatus(IntPtr aAsyncHandle, out String aGroupStatus);
        void SyncSetGroupStatus(String aGroupStatus);
        void BeginSetGroupStatus(String aGroupStatus, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetGroupStatus(IntPtr aAsyncHandle);
        void SyncGetBitPerfectMode(out bool aBitPerfectMode);
        void BeginGetBitPerfectMode(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetBitPerfectMode(IntPtr aAsyncHandle, out bool aBitPerfectMode);
        void SyncSetBitPerfectMode(bool aBitPerfectMode);
        void BeginSetBitPerfectMode(bool aBitPerfectMode, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetBitPerfectMode(IntPtr aAsyncHandle);
        void SetPropertyGroupModeChanged(System.Action aGroupModeChanged);
        String PropertyGroupMode();
        void SetPropertyGroupNameChanged(System.Action aGroupNameChanged);
        String PropertyGroupName();
        void SetPropertyGroupIDChanged(System.Action aGroupIDChanged);
        String PropertyGroupID();
        void SetPropertyGroupVolumeChanged(System.Action aGroupVolumeChanged);
        uint PropertyGroupVolume();
        void SetPropertyGroupMuteChanged(System.Action aGroupMuteChanged);
        bool PropertyGroupMute();
        void SetPropertyGroupStatusChanged(System.Action aGroupStatusChanged);
        String PropertyGroupStatus();
        void SetPropertyBitPerfectModeChanged(System.Action aBitPerfectModeChanged);
        bool PropertyBitPerfectMode();
    }

    internal class SyncSetGroupModeAvOpenhomeOrgGroupConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgGroupConfig1 iService;

        public SyncSetGroupModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetGroupMode(aAsyncHandle);
        }
    };

    internal class SyncGetGroupModeAvOpenhomeOrgGroupConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgGroupConfig1 iService;
        private String iGroupMode;
        private String iGroupID;
        private String iGroupName;

        public SyncGetGroupModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String GroupMode()
        {
            return iGroupMode;
        }
        public String GroupID()
        {
            return iGroupID;
        }
        public String GroupName()
        {
            return iGroupName;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetGroupMode(aAsyncHandle, out iGroupMode, out iGroupID, out iGroupName);
        }
    };

    internal class SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgGroupConfig1 iService;

        public SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetGroupVolume(aAsyncHandle);
        }
    };

    internal class SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgGroupConfig1 iService;
        private uint iGroupVolume;

        public SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
        {
            iService = aProxy;
        }
        public uint GroupVolume()
        {
            return iGroupVolume;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetGroupVolume(aAsyncHandle, out iGroupVolume);
        }
    };

    internal class SyncSetGroupMuteAvOpenhomeOrgGroupConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgGroupConfig1 iService;

        public SyncSetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetGroupMute(aAsyncHandle);
        }
    };

    internal class SyncGetGroupMuteAvOpenhomeOrgGroupConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgGroupConfig1 iService;
        private bool iGroupMute;

        public SyncGetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
        {
            iService = aProxy;
        }
        public bool GroupMute()
        {
            return iGroupMute;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetGroupMute(aAsyncHandle, out iGroupMute);
        }
    };

    internal class SyncGetGroupStatusAvOpenhomeOrgGroupConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgGroupConfig1 iService;
        private String iGroupStatus;

        public SyncGetGroupStatusAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String GroupStatus()
        {
            return iGroupStatus;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetGroupStatus(aAsyncHandle, out iGroupStatus);
        }
    };

    internal class SyncSetGroupStatusAvOpenhomeOrgGroupConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgGroupConfig1 iService;

        public SyncSetGroupStatusAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetGroupStatus(aAsyncHandle);
        }
    };

    internal class SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgGroupConfig1 iService;
        private bool iBitPerfectMode;

        public SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
        {
            iService = aProxy;
        }
        public bool BitPerfectMode()
        {
            return iBitPerfectMode;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetBitPerfectMode(aAsyncHandle, out iBitPerfectMode);
        }
    };

    internal class SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgGroupConfig1 iService;

        public SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetBitPerfectMode(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:GroupConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgGroupConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgGroupConfig1
    {
        private OpenHome.Net.Core.Action iActionSetGroupMode;
        private OpenHome.Net.Core.Action iActionGetGroupMode;
        private OpenHome.Net.Core.Action iActionSetGroupVolume;
        private OpenHome.Net.Core.Action iActionGetGroupVolume;
        private OpenHome.Net.Core.Action iActionSetGroupMute;
        private OpenHome.Net.Core.Action iActionGetGroupMute;
        private OpenHome.Net.Core.Action iActionGetGroupStatus;
        private OpenHome.Net.Core.Action iActionSetGroupStatus;
        private OpenHome.Net.Core.Action iActionGetBitPerfectMode;
        private OpenHome.Net.Core.Action iActionSetBitPerfectMode;
        private PropertyString iGroupMode;
        private PropertyString iGroupName;
        private PropertyString iGroupID;
        private PropertyUint iGroupVolume;
        private PropertyBool iGroupMute;
        private PropertyString iGroupStatus;
        private PropertyBool iBitPerfectMode;
        private System.Action iGroupModeChanged;
        private System.Action iGroupNameChanged;
        private System.Action iGroupIDChanged;
        private System.Action iGroupVolumeChanged;
        private System.Action iGroupMuteChanged;
        private System.Action iGroupStatusChanged;
        private System.Action iBitPerfectModeChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgGroupConfig1(CpDevice aDevice)
            : base("av-openhome-org", "GroupConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionSetGroupMode = new OpenHome.Net.Core.Action("SetGroupMode");
            allowedValues.Add("Master");
            allowedValues.Add("Slave");
            allowedValues.Add("None");
            param = new ParameterString("GroupMode", allowedValues);
            iActionSetGroupMode.AddInputParameter(param);
            allowedValues.Clear();
            param = new ParameterString("GroupID", allowedValues);
            iActionSetGroupMode.AddInputParameter(param);
            param = new ParameterString("GroupName", allowedValues);
            iActionSetGroupMode.AddInputParameter(param);

            iActionGetGroupMode = new OpenHome.Net.Core.Action("GetGroupMode");
            allowedValues.Add("Master");
            allowedValues.Add("Slave");
            allowedValues.Add("None");
            param = new ParameterString("GroupMode", allowedValues);
            iActionGetGroupMode.AddOutputParameter(param);
            allowedValues.Clear();
            param = new ParameterString("GroupID", allowedValues);
            iActionGetGroupMode.AddOutputParameter(param);
            param = new ParameterString("GroupName", allowedValues);
            iActionGetGroupMode.AddOutputParameter(param);

            iActionSetGroupVolume = new OpenHome.Net.Core.Action("SetGroupVolume");
            param = new ParameterUint("GroupVolume");
            iActionSetGroupVolume.AddInputParameter(param);

            iActionGetGroupVolume = new OpenHome.Net.Core.Action("GetGroupVolume");
            param = new ParameterUint("GroupVolume");
            iActionGetGroupVolume.AddOutputParameter(param);

            iActionSetGroupMute = new OpenHome.Net.Core.Action("SetGroupMute");
            param = new ParameterBool("GroupMute");
            iActionSetGroupMute.AddInputParameter(param);

            iActionGetGroupMute = new OpenHome.Net.Core.Action("GetGroupMute");
            param = new ParameterBool("GroupMute");
            iActionGetGroupMute.AddOutputParameter(param);

            iActionGetGroupStatus = new OpenHome.Net.Core.Action("GetGroupStatus");
            param = new ParameterString("GroupStatus", allowedValues);
            iActionGetGroupStatus.AddOutputParameter(param);

            iActionSetGroupStatus = new OpenHome.Net.Core.Action("SetGroupStatus");
            param = new ParameterString("GroupStatus", allowedValues);
            iActionSetGroupStatus.AddInputParameter(param);

            iActionGetBitPerfectMode = new OpenHome.Net.Core.Action("GetBitPerfectMode");
            param = new ParameterBool("BitPerfectMode");
            iActionGetBitPerfectMode.AddOutputParameter(param);

            iActionSetBitPerfectMode = new OpenHome.Net.Core.Action("SetBitPerfectMode");
            param = new ParameterBool("BitPerfectMode");
            iActionSetBitPerfectMode.AddInputParameter(param);

            iGroupMode = new PropertyString("GroupMode", GroupModePropertyChanged);
            AddProperty(iGroupMode);
            iGroupName = new PropertyString("GroupName", GroupNamePropertyChanged);
            AddProperty(iGroupName);
            iGroupID = new PropertyString("GroupID", GroupIDPropertyChanged);
            AddProperty(iGroupID);
            iGroupVolume = new PropertyUint("GroupVolume", GroupVolumePropertyChanged);
            AddProperty(iGroupVolume);
            iGroupMute = new PropertyBool("GroupMute", GroupMutePropertyChanged);
            AddProperty(iGroupMute);
            iGroupStatus = new PropertyString("GroupStatus", GroupStatusPropertyChanged);
            AddProperty(iGroupStatus);
            iBitPerfectMode = new PropertyBool("BitPerfectMode", BitPerfectModePropertyChanged);
            AddProperty(iBitPerfectMode);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aGroupMode"></param>
        /// <param name="aGroupID"></param>
        /// <param name="aGroupName"></param>
        public void SyncSetGroupMode(String aGroupMode, String aGroupID, String aGroupName)
        {
            SyncSetGroupModeAvOpenhomeOrgGroupConfig1 sync = new SyncSetGroupModeAvOpenhomeOrgGroupConfig1(this);
            BeginSetGroupMode(aGroupMode, aGroupID, aGroupName, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetGroupMode().</remarks>
        /// <param name="aGroupMode"></param>
        /// <param name="aGroupID"></param>
        /// <param name="aGroupName"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetGroupMode(String aGroupMode, String aGroupID, String aGroupName, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetGroupMode, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetGroupMode.InputParameter(inIndex++), aGroupMode));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetGroupMode.InputParameter(inIndex++), aGroupID));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetGroupMode.InputParameter(inIndex++), aGroupName));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetGroupMode(IntPtr aAsyncHandle)
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
        /// <param name="aGroupMode"></param>
        /// <param name="aGroupID"></param>
        /// <param name="aGroupName"></param>
        public void SyncGetGroupMode(out String aGroupMode, out String aGroupID, out String aGroupName)
        {
            SyncGetGroupModeAvOpenhomeOrgGroupConfig1 sync = new SyncGetGroupModeAvOpenhomeOrgGroupConfig1(this);
            BeginGetGroupMode(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aGroupMode = sync.GroupMode();
            aGroupID = sync.GroupID();
            aGroupName = sync.GroupName();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetGroupMode().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetGroupMode(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetGroupMode, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetGroupMode.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetGroupMode.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetGroupMode.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aGroupMode"></param>
        /// <param name="aGroupID"></param>
        /// <param name="aGroupName"></param>
        public void EndGetGroupMode(IntPtr aAsyncHandle, out String aGroupMode, out String aGroupID, out String aGroupName)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aGroupMode = Invocation.OutputString(aAsyncHandle, index++);
            aGroupID = Invocation.OutputString(aAsyncHandle, index++);
            aGroupName = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aGroupVolume"></param>
        public void SyncSetGroupVolume(uint aGroupVolume)
        {
            SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1 sync = new SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1(this);
            BeginSetGroupVolume(aGroupVolume, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetGroupVolume().</remarks>
        /// <param name="aGroupVolume"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetGroupVolume(uint aGroupVolume, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetGroupVolume, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSetGroupVolume.InputParameter(inIndex++), aGroupVolume));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetGroupVolume(IntPtr aAsyncHandle)
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
        /// <param name="aGroupVolume"></param>
        public void SyncGetGroupVolume(out uint aGroupVolume)
        {
            SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1 sync = new SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1(this);
            BeginGetGroupVolume(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aGroupVolume = sync.GroupVolume();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetGroupVolume().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetGroupVolume(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetGroupVolume, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetGroupVolume.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aGroupVolume"></param>
        public void EndGetGroupVolume(IntPtr aAsyncHandle, out uint aGroupVolume)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aGroupVolume = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aGroupMute"></param>
        public void SyncSetGroupMute(bool aGroupMute)
        {
            SyncSetGroupMuteAvOpenhomeOrgGroupConfig1 sync = new SyncSetGroupMuteAvOpenhomeOrgGroupConfig1(this);
            BeginSetGroupMute(aGroupMute, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetGroupMute().</remarks>
        /// <param name="aGroupMute"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetGroupMute(bool aGroupMute, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetGroupMute, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetGroupMute.InputParameter(inIndex++), aGroupMute));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetGroupMute(IntPtr aAsyncHandle)
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
        /// <param name="aGroupMute"></param>
        public void SyncGetGroupMute(out bool aGroupMute)
        {
            SyncGetGroupMuteAvOpenhomeOrgGroupConfig1 sync = new SyncGetGroupMuteAvOpenhomeOrgGroupConfig1(this);
            BeginGetGroupMute(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aGroupMute = sync.GroupMute();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetGroupMute().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetGroupMute(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetGroupMute, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetGroupMute.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aGroupMute"></param>
        public void EndGetGroupMute(IntPtr aAsyncHandle, out bool aGroupMute)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aGroupMute = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aGroupStatus"></param>
        public void SyncGetGroupStatus(out String aGroupStatus)
        {
            SyncGetGroupStatusAvOpenhomeOrgGroupConfig1 sync = new SyncGetGroupStatusAvOpenhomeOrgGroupConfig1(this);
            BeginGetGroupStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aGroupStatus = sync.GroupStatus();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetGroupStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetGroupStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetGroupStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetGroupStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aGroupStatus"></param>
        public void EndGetGroupStatus(IntPtr aAsyncHandle, out String aGroupStatus)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aGroupStatus = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aGroupStatus"></param>
        public void SyncSetGroupStatus(String aGroupStatus)
        {
            SyncSetGroupStatusAvOpenhomeOrgGroupConfig1 sync = new SyncSetGroupStatusAvOpenhomeOrgGroupConfig1(this);
            BeginSetGroupStatus(aGroupStatus, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetGroupStatus().</remarks>
        /// <param name="aGroupStatus"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetGroupStatus(String aGroupStatus, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetGroupStatus, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetGroupStatus.InputParameter(inIndex++), aGroupStatus));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetGroupStatus(IntPtr aAsyncHandle)
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
        /// <param name="aBitPerfectMode"></param>
        public void SyncGetBitPerfectMode(out bool aBitPerfectMode)
        {
            SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1 sync = new SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1(this);
            BeginGetBitPerfectMode(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aBitPerfectMode = sync.BitPerfectMode();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetBitPerfectMode().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetBitPerfectMode(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetBitPerfectMode, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetBitPerfectMode.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aBitPerfectMode"></param>
        public void EndGetBitPerfectMode(IntPtr aAsyncHandle, out bool aBitPerfectMode)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aBitPerfectMode = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aBitPerfectMode"></param>
        public void SyncSetBitPerfectMode(bool aBitPerfectMode)
        {
            SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1 sync = new SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1(this);
            BeginSetBitPerfectMode(aBitPerfectMode, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetBitPerfectMode().</remarks>
        /// <param name="aBitPerfectMode"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetBitPerfectMode(bool aBitPerfectMode, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetBitPerfectMode, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetBitPerfectMode.InputParameter(inIndex++), aBitPerfectMode));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetBitPerfectMode(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the GroupMode state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.</remarks>
        /// <param name="aGroupModeChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyGroupModeChanged(System.Action aGroupModeChanged)
        {
            lock (iPropertyLock)
            {
                iGroupModeChanged = aGroupModeChanged;
            }
        }

        private void GroupModePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iGroupModeChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the GroupName state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.</remarks>
        /// <param name="aGroupNameChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyGroupNameChanged(System.Action aGroupNameChanged)
        {
            lock (iPropertyLock)
            {
                iGroupNameChanged = aGroupNameChanged;
            }
        }

        private void GroupNamePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iGroupNameChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the GroupID state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.</remarks>
        /// <param name="aGroupIDChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyGroupIDChanged(System.Action aGroupIDChanged)
        {
            lock (iPropertyLock)
            {
                iGroupIDChanged = aGroupIDChanged;
            }
        }

        private void GroupIDPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iGroupIDChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the GroupVolume state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.</remarks>
        /// <param name="aGroupVolumeChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyGroupVolumeChanged(System.Action aGroupVolumeChanged)
        {
            lock (iPropertyLock)
            {
                iGroupVolumeChanged = aGroupVolumeChanged;
            }
        }

        private void GroupVolumePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iGroupVolumeChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the GroupMute state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.</remarks>
        /// <param name="aGroupMuteChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyGroupMuteChanged(System.Action aGroupMuteChanged)
        {
            lock (iPropertyLock)
            {
                iGroupMuteChanged = aGroupMuteChanged;
            }
        }

        private void GroupMutePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iGroupMuteChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the GroupStatus state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.</remarks>
        /// <param name="aGroupStatusChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyGroupStatusChanged(System.Action aGroupStatusChanged)
        {
            lock (iPropertyLock)
            {
                iGroupStatusChanged = aGroupStatusChanged;
            }
        }

        private void GroupStatusPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iGroupStatusChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the BitPerfectMode state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.</remarks>
        /// <param name="aBitPerfectModeChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyBitPerfectModeChanged(System.Action aBitPerfectModeChanged)
        {
            lock (iPropertyLock)
            {
                iBitPerfectModeChanged = aBitPerfectModeChanged;
            }
        }

        private void BitPerfectModePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iBitPerfectModeChanged);
            }
        }

        /// <summary>
        /// Query the value of the GroupMode property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the GroupMode property</returns>
        public String PropertyGroupMode()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iGroupMode.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the GroupName property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the GroupName property</returns>
        public String PropertyGroupName()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iGroupName.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the GroupID property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the GroupID property</returns>
        public String PropertyGroupID()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iGroupID.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the GroupVolume property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the GroupVolume property</returns>
        public uint PropertyGroupVolume()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iGroupVolume.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the GroupMute property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the GroupMute property</returns>
        public bool PropertyGroupMute()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iGroupMute.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the GroupStatus property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the GroupStatus property</returns>
        public String PropertyGroupStatus()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iGroupStatus.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the BitPerfectMode property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the BitPerfectMode property</returns>
        public bool PropertyBitPerfectMode()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iBitPerfectMode.Value();
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
            iActionSetGroupMode.Dispose();
            iActionGetGroupMode.Dispose();
            iActionSetGroupVolume.Dispose();
            iActionGetGroupVolume.Dispose();
            iActionSetGroupMute.Dispose();
            iActionGetGroupMute.Dispose();
            iActionGetGroupStatus.Dispose();
            iActionSetGroupStatus.Dispose();
            iActionGetBitPerfectMode.Dispose();
            iActionSetBitPerfectMode.Dispose();
            iGroupMode.Dispose();
            iGroupName.Dispose();
            iGroupID.Dispose();
            iGroupVolume.Dispose();
            iGroupMute.Dispose();
            iGroupStatus.Dispose();
            iBitPerfectMode.Dispose();
        }
    }
}

