using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgServerConfig1 : ICpProxy, IDisposable
    {
        void SyncSetServerName(String aServerName);
        void BeginSetServerName(String aServerName, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetServerName(IntPtr aAsyncHandle);
        void SyncGetServerVersion(out String aServerVersion);
        void BeginGetServerVersion(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetServerVersion(IntPtr aAsyncHandle, out String aServerVersion);
        void SyncGetProgressInfo(out String aProgress);
        void BeginGetProgressInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetProgressInfo(IntPtr aAsyncHandle, out String aProgress);
        void SyncGetScanVersion(out String aScanVersion);
        void BeginGetScanVersion(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetScanVersion(IntPtr aAsyncHandle, out String aScanVersion);
        void SyncGetWorkMode(out String aWorkMode, out String aWorkModeList);
        void BeginGetWorkMode(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetWorkMode(IntPtr aAsyncHandle, out String aWorkMode, out String aWorkModeList);
        void SyncSetWorkMode(String aWorkMode);
        void BeginSetWorkMode(String aWorkMode, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetWorkMode(IntPtr aAsyncHandle);
        void SyncDelAllLocalDB();
        void BeginDelAllLocalDB(CpProxy.CallbackAsyncComplete aCallback);
        void EndDelAllLocalDB(IntPtr aAsyncHandle);
        void SyncInitHDD();
        void BeginInitHDD(CpProxy.CallbackAsyncComplete aCallback);
        void EndInitHDD(IntPtr aAsyncHandle);
        void SyncRescan();
        void BeginRescan(CpProxy.CallbackAsyncComplete aCallback);
        void EndRescan(IntPtr aAsyncHandle);
        void SyncHandMount();
        void BeginHandMount(CpProxy.CallbackAsyncComplete aCallback);
        void EndHandMount(IntPtr aAsyncHandle);
        void SyncHandUMount();
        void BeginHandUMount(CpProxy.CallbackAsyncComplete aCallback);
        void EndHandUMount(IntPtr aAsyncHandle);
        void SyncGetDiskInfo(out bool aIsConnected, out String aStatusCode, out String aStatusInfo, out String aCapacity, out String aFileCount);
        void BeginGetDiskInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDiskInfo(IntPtr aAsyncHandle, out bool aIsConnected, out String aStatusCode, out String aStatusInfo, out String aCapacity, out String aFileCount);
        void SyncGetSMBConfig(out String aSMBAddr, out String aSMBUserName, out String aSMBPassWord);
        void BeginGetSMBConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSMBConfig(IntPtr aAsyncHandle, out String aSMBAddr, out String aSMBUserName, out String aSMBPassWord);
        void SyncSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord);
        void BeginSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetSMBConfig(IntPtr aAsyncHandle);
        void SyncGetDriveMountResult(out bool aDriveMountResult);
        void BeginGetDriveMountResult(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDriveMountResult(IntPtr aAsyncHandle, out bool aDriveMountResult);
        void SetPropertyAliveChanged(System.Action aAliveChanged);
        bool PropertyAlive();
    }

    internal class SyncSetServerNameAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncSetServerNameAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetServerName(aAsyncHandle);
        }
    };

    internal class SyncGetServerVersionAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private String iServerVersion;

        public SyncGetServerVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String ServerVersion()
        {
            return iServerVersion;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetServerVersion(aAsyncHandle, out iServerVersion);
        }
    };

    internal class SyncGetProgressInfoAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private String iProgress;

        public SyncGetProgressInfoAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String Progress()
        {
            return iProgress;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetProgressInfo(aAsyncHandle, out iProgress);
        }
    };

    internal class SyncGetScanVersionAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private String iScanVersion;

        public SyncGetScanVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String ScanVersion()
        {
            return iScanVersion;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetScanVersion(aAsyncHandle, out iScanVersion);
        }
    };

    internal class SyncGetWorkModeAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private String iWorkMode;
        private String iWorkModeList;

        public SyncGetWorkModeAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String WorkMode()
        {
            return iWorkMode;
        }
        public String WorkModeList()
        {
            return iWorkModeList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetWorkMode(aAsyncHandle, out iWorkMode, out iWorkModeList);
        }
    };

    internal class SyncSetWorkModeAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncSetWorkModeAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetWorkMode(aAsyncHandle);
        }
    };

    internal class SyncDelAllLocalDBAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncDelAllLocalDBAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndDelAllLocalDB(aAsyncHandle);
        }
    };

    internal class SyncInitHDDAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncInitHDDAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndInitHDD(aAsyncHandle);
        }
    };

    internal class SyncRescanAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncRescanAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRescan(aAsyncHandle);
        }
    };

    internal class SyncHandMountAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncHandMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndHandMount(aAsyncHandle);
        }
    };

    internal class SyncHandUMountAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncHandUMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndHandUMount(aAsyncHandle);
        }
    };

    internal class SyncGetDiskInfoAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private bool iIsConnected;
        private String iStatusCode;
        private String iStatusInfo;
        private String iCapacity;
        private String iFileCount;

        public SyncGetDiskInfoAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public bool IsConnected()
        {
            return iIsConnected;
        }
        public String StatusCode()
        {
            return iStatusCode;
        }
        public String StatusInfo()
        {
            return iStatusInfo;
        }
        public String Capacity()
        {
            return iCapacity;
        }
        public String FileCount()
        {
            return iFileCount;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDiskInfo(aAsyncHandle, out iIsConnected, out iStatusCode, out iStatusInfo, out iCapacity, out iFileCount);
        }
    };

    internal class SyncGetSMBConfigAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private String iSMBAddr;
        private String iSMBUserName;
        private String iSMBPassWord;

        public SyncGetSMBConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String SMBAddr()
        {
            return iSMBAddr;
        }
        public String SMBUserName()
        {
            return iSMBUserName;
        }
        public String SMBPassWord()
        {
            return iSMBPassWord;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetSMBConfig(aAsyncHandle, out iSMBAddr, out iSMBUserName, out iSMBPassWord);
        }
    };

    internal class SyncSetSMBConfigAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncSetSMBConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetSMBConfig(aAsyncHandle);
        }
    };

    internal class SyncGetDriveMountResultAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private bool iDriveMountResult;

        public SyncGetDriveMountResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public bool DriveMountResult()
        {
            return iDriveMountResult;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDriveMountResult(aAsyncHandle, out iDriveMountResult);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:ServerConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgServerConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgServerConfig1
    {
        private OpenHome.Net.Core.Action iActionSetServerName;
        private OpenHome.Net.Core.Action iActionGetServerVersion;
        private OpenHome.Net.Core.Action iActionGetProgressInfo;
        private OpenHome.Net.Core.Action iActionGetScanVersion;
        private OpenHome.Net.Core.Action iActionGetWorkMode;
        private OpenHome.Net.Core.Action iActionSetWorkMode;
        private OpenHome.Net.Core.Action iActionDelAllLocalDB;
        private OpenHome.Net.Core.Action iActionInitHDD;
        private OpenHome.Net.Core.Action iActionRescan;
        private OpenHome.Net.Core.Action iActionHandMount;
        private OpenHome.Net.Core.Action iActionHandUMount;
        private OpenHome.Net.Core.Action iActionGetDiskInfo;
        private OpenHome.Net.Core.Action iActionGetSMBConfig;
        private OpenHome.Net.Core.Action iActionSetSMBConfig;
        private OpenHome.Net.Core.Action iActionGetDriveMountResult;
        private PropertyBool iAlive;
        private System.Action iAliveChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgServerConfig1(CpDevice aDevice)
            : base("av-openhome-org", "ServerConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionSetServerName = new OpenHome.Net.Core.Action("SetServerName");
            param = new ParameterString("ServerName", allowedValues);
            iActionSetServerName.AddInputParameter(param);

            iActionGetServerVersion = new OpenHome.Net.Core.Action("GetServerVersion");
            param = new ParameterString("ServerVersion", allowedValues);
            iActionGetServerVersion.AddOutputParameter(param);

            iActionGetProgressInfo = new OpenHome.Net.Core.Action("GetProgressInfo");
            param = new ParameterString("Progress", allowedValues);
            iActionGetProgressInfo.AddOutputParameter(param);

            iActionGetScanVersion = new OpenHome.Net.Core.Action("GetScanVersion");
            param = new ParameterString("ScanVersion", allowedValues);
            iActionGetScanVersion.AddOutputParameter(param);

            iActionGetWorkMode = new OpenHome.Net.Core.Action("GetWorkMode");
            param = new ParameterString("WorkMode", allowedValues);
            iActionGetWorkMode.AddOutputParameter(param);
            param = new ParameterString("WorkModeList", allowedValues);
            iActionGetWorkMode.AddOutputParameter(param);

            iActionSetWorkMode = new OpenHome.Net.Core.Action("SetWorkMode");
            param = new ParameterString("WorkMode", allowedValues);
            iActionSetWorkMode.AddInputParameter(param);

            iActionDelAllLocalDB = new OpenHome.Net.Core.Action("DelAllLocalDB");

            iActionInitHDD = new OpenHome.Net.Core.Action("InitHDD");

            iActionRescan = new OpenHome.Net.Core.Action("Rescan");

            iActionHandMount = new OpenHome.Net.Core.Action("HandMount");

            iActionHandUMount = new OpenHome.Net.Core.Action("HandUMount");

            iActionGetDiskInfo = new OpenHome.Net.Core.Action("GetDiskInfo");
            param = new ParameterBool("IsConnected");
            iActionGetDiskInfo.AddOutputParameter(param);
            param = new ParameterString("StatusCode", allowedValues);
            iActionGetDiskInfo.AddOutputParameter(param);
            param = new ParameterString("StatusInfo", allowedValues);
            iActionGetDiskInfo.AddOutputParameter(param);
            param = new ParameterString("Capacity", allowedValues);
            iActionGetDiskInfo.AddOutputParameter(param);
            param = new ParameterString("FileCount", allowedValues);
            iActionGetDiskInfo.AddOutputParameter(param);

            iActionGetSMBConfig = new OpenHome.Net.Core.Action("GetSMBConfig");
            param = new ParameterString("SMBAddr", allowedValues);
            iActionGetSMBConfig.AddOutputParameter(param);
            param = new ParameterString("SMBUserName", allowedValues);
            iActionGetSMBConfig.AddOutputParameter(param);
            param = new ParameterString("SMBPassWord", allowedValues);
            iActionGetSMBConfig.AddOutputParameter(param);

            iActionSetSMBConfig = new OpenHome.Net.Core.Action("SetSMBConfig");
            param = new ParameterString("SMBAddr", allowedValues);
            iActionSetSMBConfig.AddInputParameter(param);
            param = new ParameterString("SMBUserName", allowedValues);
            iActionSetSMBConfig.AddInputParameter(param);
            param = new ParameterString("SMBPassWord", allowedValues);
            iActionSetSMBConfig.AddInputParameter(param);

            iActionGetDriveMountResult = new OpenHome.Net.Core.Action("GetDriveMountResult");
            param = new ParameterBool("DriveMountResult");
            iActionGetDriveMountResult.AddOutputParameter(param);

            iAlive = new PropertyBool("Alive", AlivePropertyChanged);
            AddProperty(iAlive);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aServerName"></param>
        public void SyncSetServerName(String aServerName)
        {
            SyncSetServerNameAvOpenhomeOrgServerConfig1 sync = new SyncSetServerNameAvOpenhomeOrgServerConfig1(this);
            BeginSetServerName(aServerName, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetServerName().</remarks>
        /// <param name="aServerName"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetServerName(String aServerName, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetServerName, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetServerName.InputParameter(inIndex++), aServerName));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetServerName(IntPtr aAsyncHandle)
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
        /// <param name="aServerVersion"></param>
        public void SyncGetServerVersion(out String aServerVersion)
        {
            SyncGetServerVersionAvOpenhomeOrgServerConfig1 sync = new SyncGetServerVersionAvOpenhomeOrgServerConfig1(this);
            BeginGetServerVersion(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aServerVersion = sync.ServerVersion();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetServerVersion().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetServerVersion(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetServerVersion, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetServerVersion.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aServerVersion"></param>
        public void EndGetServerVersion(IntPtr aAsyncHandle, out String aServerVersion)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aServerVersion = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aProgress"></param>
        public void SyncGetProgressInfo(out String aProgress)
        {
            SyncGetProgressInfoAvOpenhomeOrgServerConfig1 sync = new SyncGetProgressInfoAvOpenhomeOrgServerConfig1(this);
            BeginGetProgressInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aProgress = sync.Progress();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetProgressInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetProgressInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetProgressInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetProgressInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aProgress"></param>
        public void EndGetProgressInfo(IntPtr aAsyncHandle, out String aProgress)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aProgress = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aScanVersion"></param>
        public void SyncGetScanVersion(out String aScanVersion)
        {
            SyncGetScanVersionAvOpenhomeOrgServerConfig1 sync = new SyncGetScanVersionAvOpenhomeOrgServerConfig1(this);
            BeginGetScanVersion(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aScanVersion = sync.ScanVersion();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetScanVersion().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetScanVersion(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetScanVersion, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetScanVersion.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aScanVersion"></param>
        public void EndGetScanVersion(IntPtr aAsyncHandle, out String aScanVersion)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aScanVersion = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aWorkMode"></param>
        /// <param name="aWorkModeList"></param>
        public void SyncGetWorkMode(out String aWorkMode, out String aWorkModeList)
        {
            SyncGetWorkModeAvOpenhomeOrgServerConfig1 sync = new SyncGetWorkModeAvOpenhomeOrgServerConfig1(this);
            BeginGetWorkMode(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aWorkMode = sync.WorkMode();
            aWorkModeList = sync.WorkModeList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetWorkMode().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetWorkMode(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetWorkMode, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetWorkMode.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetWorkMode.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aWorkMode"></param>
        /// <param name="aWorkModeList"></param>
        public void EndGetWorkMode(IntPtr aAsyncHandle, out String aWorkMode, out String aWorkModeList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aWorkMode = Invocation.OutputString(aAsyncHandle, index++);
            aWorkModeList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aWorkMode"></param>
        public void SyncSetWorkMode(String aWorkMode)
        {
            SyncSetWorkModeAvOpenhomeOrgServerConfig1 sync = new SyncSetWorkModeAvOpenhomeOrgServerConfig1(this);
            BeginSetWorkMode(aWorkMode, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetWorkMode().</remarks>
        /// <param name="aWorkMode"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetWorkMode(String aWorkMode, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetWorkMode, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetWorkMode.InputParameter(inIndex++), aWorkMode));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetWorkMode(IntPtr aAsyncHandle)
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
        public void SyncDelAllLocalDB()
        {
            SyncDelAllLocalDBAvOpenhomeOrgServerConfig1 sync = new SyncDelAllLocalDBAvOpenhomeOrgServerConfig1(this);
            BeginDelAllLocalDB(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndDelAllLocalDB().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginDelAllLocalDB(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionDelAllLocalDB, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndDelAllLocalDB(IntPtr aAsyncHandle)
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
        public void SyncInitHDD()
        {
            SyncInitHDDAvOpenhomeOrgServerConfig1 sync = new SyncInitHDDAvOpenhomeOrgServerConfig1(this);
            BeginInitHDD(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndInitHDD().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginInitHDD(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionInitHDD, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndInitHDD(IntPtr aAsyncHandle)
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
        public void SyncRescan()
        {
            SyncRescanAvOpenhomeOrgServerConfig1 sync = new SyncRescanAvOpenhomeOrgServerConfig1(this);
            BeginRescan(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndRescan().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginRescan(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionRescan, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndRescan(IntPtr aAsyncHandle)
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
        public void SyncHandMount()
        {
            SyncHandMountAvOpenhomeOrgServerConfig1 sync = new SyncHandMountAvOpenhomeOrgServerConfig1(this);
            BeginHandMount(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndHandMount().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginHandMount(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionHandMount, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndHandMount(IntPtr aAsyncHandle)
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
        public void SyncHandUMount()
        {
            SyncHandUMountAvOpenhomeOrgServerConfig1 sync = new SyncHandUMountAvOpenhomeOrgServerConfig1(this);
            BeginHandUMount(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndHandUMount().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginHandUMount(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionHandUMount, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndHandUMount(IntPtr aAsyncHandle)
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
        /// <param name="aIsConnected"></param>
        /// <param name="aStatusCode"></param>
        /// <param name="aStatusInfo"></param>
        /// <param name="aCapacity"></param>
        /// <param name="aFileCount"></param>
        public void SyncGetDiskInfo(out bool aIsConnected, out String aStatusCode, out String aStatusInfo, out String aCapacity, out String aFileCount)
        {
            SyncGetDiskInfoAvOpenhomeOrgServerConfig1 sync = new SyncGetDiskInfoAvOpenhomeOrgServerConfig1(this);
            BeginGetDiskInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aIsConnected = sync.IsConnected();
            aStatusCode = sync.StatusCode();
            aStatusInfo = sync.StatusInfo();
            aCapacity = sync.Capacity();
            aFileCount = sync.FileCount();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDiskInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDiskInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDiskInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetDiskInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDiskInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDiskInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDiskInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDiskInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aIsConnected"></param>
        /// <param name="aStatusCode"></param>
        /// <param name="aStatusInfo"></param>
        /// <param name="aCapacity"></param>
        /// <param name="aFileCount"></param>
        public void EndGetDiskInfo(IntPtr aAsyncHandle, out bool aIsConnected, out String aStatusCode, out String aStatusInfo, out String aCapacity, out String aFileCount)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aIsConnected = Invocation.OutputBool(aAsyncHandle, index++);
            aStatusCode = Invocation.OutputString(aAsyncHandle, index++);
            aStatusInfo = Invocation.OutputString(aAsyncHandle, index++);
            aCapacity = Invocation.OutputString(aAsyncHandle, index++);
            aFileCount = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSMBAddr"></param>
        /// <param name="aSMBUserName"></param>
        /// <param name="aSMBPassWord"></param>
        public void SyncGetSMBConfig(out String aSMBAddr, out String aSMBUserName, out String aSMBPassWord)
        {
            SyncGetSMBConfigAvOpenhomeOrgServerConfig1 sync = new SyncGetSMBConfigAvOpenhomeOrgServerConfig1(this);
            BeginGetSMBConfig(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSMBAddr = sync.SMBAddr();
            aSMBUserName = sync.SMBUserName();
            aSMBPassWord = sync.SMBPassWord();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetSMBConfig().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetSMBConfig(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetSMBConfig, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSMBConfig.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSMBConfig.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSMBConfig.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSMBAddr"></param>
        /// <param name="aSMBUserName"></param>
        /// <param name="aSMBPassWord"></param>
        public void EndGetSMBConfig(IntPtr aAsyncHandle, out String aSMBAddr, out String aSMBUserName, out String aSMBPassWord)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSMBAddr = Invocation.OutputString(aAsyncHandle, index++);
            aSMBUserName = Invocation.OutputString(aAsyncHandle, index++);
            aSMBPassWord = Invocation.OutputString(aAsyncHandle, index++);
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
            SyncSetSMBConfigAvOpenhomeOrgServerConfig1 sync = new SyncSetSMBConfigAvOpenhomeOrgServerConfig1(this);
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
        /// <param name="aDriveMountResult"></param>
        public void SyncGetDriveMountResult(out bool aDriveMountResult)
        {
            SyncGetDriveMountResultAvOpenhomeOrgServerConfig1 sync = new SyncGetDriveMountResultAvOpenhomeOrgServerConfig1(this);
            BeginGetDriveMountResult(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aDriveMountResult = sync.DriveMountResult();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDriveMountResult().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDriveMountResult(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDriveMountResult, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetDriveMountResult.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aDriveMountResult"></param>
        public void EndGetDriveMountResult(IntPtr aAsyncHandle, out bool aDriveMountResult)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aDriveMountResult = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the Alive state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgServerConfig1 instance will not overlap.</remarks>
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
            iActionSetServerName.Dispose();
            iActionGetServerVersion.Dispose();
            iActionGetProgressInfo.Dispose();
            iActionGetScanVersion.Dispose();
            iActionGetWorkMode.Dispose();
            iActionSetWorkMode.Dispose();
            iActionDelAllLocalDB.Dispose();
            iActionInitHDD.Dispose();
            iActionRescan.Dispose();
            iActionHandMount.Dispose();
            iActionHandUMount.Dispose();
            iActionGetDiskInfo.Dispose();
            iActionGetSMBConfig.Dispose();
            iActionSetSMBConfig.Dispose();
            iActionGetDriveMountResult.Dispose();
            iAlive.Dispose();
        }
    }
}

