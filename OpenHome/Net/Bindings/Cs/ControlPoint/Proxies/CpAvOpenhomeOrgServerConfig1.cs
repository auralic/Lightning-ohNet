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
        void SyncSetPlayCD(bool aPlayCD);
        void BeginSetPlayCD(bool aPlayCD, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetPlayCD(IntPtr aAsyncHandle);
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
        void SyncEditTrack(String aEditValue);
        void BeginEditTrack(String aEditValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndEditTrack(IntPtr aAsyncHandle);
        void SyncScanVersionDiff(out String aScanVersionDiffValue);
        void BeginScanVersionDiff(CpProxy.CallbackAsyncComplete aCallback);
        void EndScanVersionDiff(IntPtr aAsyncHandle, out String aScanVersionDiffValue);
        void SyncGetInitHDDResult(out bool aInitHDDResult);
        void BeginGetInitHDDResult(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetInitHDDResult(IntPtr aAsyncHandle, out bool aInitHDDResult);
        void SyncGetHDDHasInited(out bool aHDDHasInited);
        void BeginGetHDDHasInited(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetHDDHasInited(IntPtr aAsyncHandle, out bool aHDDHasInited);
        void SyncUSBImport();
        void BeginUSBImport(CpProxy.CallbackAsyncComplete aCallback);
        void EndUSBImport(IntPtr aAsyncHandle);
        void SyncGetDISKCapacity(out String aDISKTotal, out String aDISKUsed, out String aDISKAvailable);
        void BeginGetDISKCapacity(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDISKCapacity(IntPtr aAsyncHandle, out String aDISKTotal, out String aDISKUsed, out String aDISKAvailable);
        void SyncForceRescan();
        void BeginForceRescan(CpProxy.CallbackAsyncComplete aCallback);
        void EndForceRescan(IntPtr aAsyncHandle);
        void SyncGetCurrentScanFile(out String aScanFile);
        void BeginGetCurrentScanFile(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetCurrentScanFile(IntPtr aAsyncHandle, out String aScanFile);
        void SyncGetServerConfig(out String aGetValue);
        void BeginGetServerConfig(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetServerConfig(IntPtr aAsyncHandle, out String aGetValue);
        void SyncSetServerConfig(String aSetValue);
        void BeginSetServerConfig(String aSetValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetServerConfig(IntPtr aAsyncHandle);
        void SetPropertyPlayCDChanged(System.Action aPlayCDChanged);
        bool PropertyPlayCD();
        void SetPropertyAliveChanged(System.Action aAliveChanged);
        bool PropertyAlive();
        void SetPropertySubscriptValueChanged(System.Action aSubscriptValueChanged);
        String PropertySubscriptValue();
    }

    internal class SyncSetPlayCDAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncSetPlayCDAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetPlayCD(aAsyncHandle);
        }
    };

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

    internal class SyncEditTrackAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncEditTrackAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndEditTrack(aAsyncHandle);
        }
    };

    internal class SyncScanVersionDiffAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private String iScanVersionDiffValue;

        public SyncScanVersionDiffAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String ScanVersionDiffValue()
        {
            return iScanVersionDiffValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndScanVersionDiff(aAsyncHandle, out iScanVersionDiffValue);
        }
    };

    internal class SyncGetInitHDDResultAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private bool iInitHDDResult;

        public SyncGetInitHDDResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public bool InitHDDResult()
        {
            return iInitHDDResult;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetInitHDDResult(aAsyncHandle, out iInitHDDResult);
        }
    };

    internal class SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private bool iHDDHasInited;

        public SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public bool HDDHasInited()
        {
            return iHDDHasInited;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetHDDHasInited(aAsyncHandle, out iHDDHasInited);
        }
    };

    internal class SyncUSBImportAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncUSBImportAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndUSBImport(aAsyncHandle);
        }
    };

    internal class SyncGetDISKCapacityAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private String iDISKTotal;
        private String iDISKUsed;
        private String iDISKAvailable;

        public SyncGetDISKCapacityAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String DISKTotal()
        {
            return iDISKTotal;
        }
        public String DISKUsed()
        {
            return iDISKUsed;
        }
        public String DISKAvailable()
        {
            return iDISKAvailable;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDISKCapacity(aAsyncHandle, out iDISKTotal, out iDISKUsed, out iDISKAvailable);
        }
    };

    internal class SyncForceRescanAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncForceRescanAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndForceRescan(aAsyncHandle);
        }
    };

    internal class SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private String iScanFile;

        public SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String ScanFile()
        {
            return iScanFile;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetCurrentScanFile(aAsyncHandle, out iScanFile);
        }
    };

    internal class SyncGetServerConfigAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;
        private String iGetValue;

        public SyncGetServerConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        public String GetValue()
        {
            return iGetValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetServerConfig(aAsyncHandle, out iGetValue);
        }
    };

    internal class SyncSetServerConfigAvOpenhomeOrgServerConfig1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgServerConfig1 iService;

        public SyncSetServerConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetServerConfig(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:ServerConfig:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgServerConfig1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgServerConfig1
    {
        private OpenHome.Net.Core.Action iActionSetPlayCD;
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
        private OpenHome.Net.Core.Action iActionEditTrack;
        private OpenHome.Net.Core.Action iActionScanVersionDiff;
        private OpenHome.Net.Core.Action iActionGetInitHDDResult;
        private OpenHome.Net.Core.Action iActionGetHDDHasInited;
        private OpenHome.Net.Core.Action iActionUSBImport;
        private OpenHome.Net.Core.Action iActionGetDISKCapacity;
        private OpenHome.Net.Core.Action iActionForceRescan;
        private OpenHome.Net.Core.Action iActionGetCurrentScanFile;
        private OpenHome.Net.Core.Action iActionGetServerConfig;
        private OpenHome.Net.Core.Action iActionSetServerConfig;
        private PropertyBool iPlayCD;
        private PropertyBool iAlive;
        private PropertyString iSubscriptValue;
        private System.Action iPlayCDChanged;
        private System.Action iAliveChanged;
        private System.Action iSubscriptValueChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgServerConfig1(ICpDevice aDevice)
            : base("av-openhome-org", "ServerConfig", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionSetPlayCD = new OpenHome.Net.Core.Action("SetPlayCD");
            param = new ParameterBool("PlayCD");
            iActionSetPlayCD.AddInputParameter(param);

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

            iActionEditTrack = new OpenHome.Net.Core.Action("EditTrack");
            param = new ParameterString("EditValue", allowedValues);
            iActionEditTrack.AddInputParameter(param);

            iActionScanVersionDiff = new OpenHome.Net.Core.Action("ScanVersionDiff");
            param = new ParameterString("ScanVersionDiffValue", allowedValues);
            iActionScanVersionDiff.AddOutputParameter(param);

            iActionGetInitHDDResult = new OpenHome.Net.Core.Action("GetInitHDDResult");
            param = new ParameterBool("InitHDDResult");
            iActionGetInitHDDResult.AddOutputParameter(param);

            iActionGetHDDHasInited = new OpenHome.Net.Core.Action("GetHDDHasInited");
            param = new ParameterBool("HDDHasInited");
            iActionGetHDDHasInited.AddOutputParameter(param);

            iActionUSBImport = new OpenHome.Net.Core.Action("USBImport");

            iActionGetDISKCapacity = new OpenHome.Net.Core.Action("GetDISKCapacity");
            param = new ParameterString("DISKTotal", allowedValues);
            iActionGetDISKCapacity.AddOutputParameter(param);
            param = new ParameterString("DISKUsed", allowedValues);
            iActionGetDISKCapacity.AddOutputParameter(param);
            param = new ParameterString("DISKAvailable", allowedValues);
            iActionGetDISKCapacity.AddOutputParameter(param);

            iActionForceRescan = new OpenHome.Net.Core.Action("ForceRescan");

            iActionGetCurrentScanFile = new OpenHome.Net.Core.Action("GetCurrentScanFile");
            param = new ParameterString("ScanFile", allowedValues);
            iActionGetCurrentScanFile.AddOutputParameter(param);

            iActionGetServerConfig = new OpenHome.Net.Core.Action("GetServerConfig");
            param = new ParameterString("GetValue", allowedValues);
            iActionGetServerConfig.AddOutputParameter(param);

            iActionSetServerConfig = new OpenHome.Net.Core.Action("SetServerConfig");
            param = new ParameterString("SetValue", allowedValues);
            iActionSetServerConfig.AddInputParameter(param);

            iPlayCD = new PropertyBool("PlayCD", PlayCDPropertyChanged);
            AddProperty(iPlayCD);
            iAlive = new PropertyBool("Alive", AlivePropertyChanged);
            AddProperty(iAlive);
            iSubscriptValue = new PropertyString("SubscriptValue", SubscriptValuePropertyChanged);
            AddProperty(iSubscriptValue);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aPlayCD"></param>
        public void SyncSetPlayCD(bool aPlayCD)
        {
            SyncSetPlayCDAvOpenhomeOrgServerConfig1 sync = new SyncSetPlayCDAvOpenhomeOrgServerConfig1(this);
            BeginSetPlayCD(aPlayCD, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetPlayCD().</remarks>
        /// <param name="aPlayCD"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetPlayCD(bool aPlayCD, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetPlayCD, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetPlayCD.InputParameter(inIndex++), aPlayCD));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetPlayCD(IntPtr aAsyncHandle)
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
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aEditValue"></param>
        public void SyncEditTrack(String aEditValue)
        {
            SyncEditTrackAvOpenhomeOrgServerConfig1 sync = new SyncEditTrackAvOpenhomeOrgServerConfig1(this);
            BeginEditTrack(aEditValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndEditTrack().</remarks>
        /// <param name="aEditValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginEditTrack(String aEditValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionEditTrack, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionEditTrack.InputParameter(inIndex++), aEditValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndEditTrack(IntPtr aAsyncHandle)
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
        /// <param name="aScanVersionDiffValue"></param>
        public void SyncScanVersionDiff(out String aScanVersionDiffValue)
        {
            SyncScanVersionDiffAvOpenhomeOrgServerConfig1 sync = new SyncScanVersionDiffAvOpenhomeOrgServerConfig1(this);
            BeginScanVersionDiff(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aScanVersionDiffValue = sync.ScanVersionDiffValue();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndScanVersionDiff().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginScanVersionDiff(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionScanVersionDiff, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionScanVersionDiff.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aScanVersionDiffValue"></param>
        public void EndScanVersionDiff(IntPtr aAsyncHandle, out String aScanVersionDiffValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aScanVersionDiffValue = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aInitHDDResult"></param>
        public void SyncGetInitHDDResult(out bool aInitHDDResult)
        {
            SyncGetInitHDDResultAvOpenhomeOrgServerConfig1 sync = new SyncGetInitHDDResultAvOpenhomeOrgServerConfig1(this);
            BeginGetInitHDDResult(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aInitHDDResult = sync.InitHDDResult();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetInitHDDResult().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetInitHDDResult(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetInitHDDResult, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetInitHDDResult.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aInitHDDResult"></param>
        public void EndGetInitHDDResult(IntPtr aAsyncHandle, out bool aInitHDDResult)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aInitHDDResult = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aHDDHasInited"></param>
        public void SyncGetHDDHasInited(out bool aHDDHasInited)
        {
            SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1 sync = new SyncGetHDDHasInitedAvOpenhomeOrgServerConfig1(this);
            BeginGetHDDHasInited(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aHDDHasInited = sync.HDDHasInited();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetHDDHasInited().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetHDDHasInited(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetHDDHasInited, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetHDDHasInited.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aHDDHasInited"></param>
        public void EndGetHDDHasInited(IntPtr aAsyncHandle, out bool aHDDHasInited)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aHDDHasInited = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncUSBImport()
        {
            SyncUSBImportAvOpenhomeOrgServerConfig1 sync = new SyncUSBImportAvOpenhomeOrgServerConfig1(this);
            BeginUSBImport(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndUSBImport().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginUSBImport(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionUSBImport, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndUSBImport(IntPtr aAsyncHandle)
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
        /// <param name="aDISKTotal"></param>
        /// <param name="aDISKUsed"></param>
        /// <param name="aDISKAvailable"></param>
        public void SyncGetDISKCapacity(out String aDISKTotal, out String aDISKUsed, out String aDISKAvailable)
        {
            SyncGetDISKCapacityAvOpenhomeOrgServerConfig1 sync = new SyncGetDISKCapacityAvOpenhomeOrgServerConfig1(this);
            BeginGetDISKCapacity(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aDISKTotal = sync.DISKTotal();
            aDISKUsed = sync.DISKUsed();
            aDISKAvailable = sync.DISKAvailable();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDISKCapacity().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDISKCapacity(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDISKCapacity, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDISKCapacity.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDISKCapacity.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDISKCapacity.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aDISKTotal"></param>
        /// <param name="aDISKUsed"></param>
        /// <param name="aDISKAvailable"></param>
        public void EndGetDISKCapacity(IntPtr aAsyncHandle, out String aDISKTotal, out String aDISKUsed, out String aDISKAvailable)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aDISKTotal = Invocation.OutputString(aAsyncHandle, index++);
            aDISKUsed = Invocation.OutputString(aAsyncHandle, index++);
            aDISKAvailable = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncForceRescan()
        {
            SyncForceRescanAvOpenhomeOrgServerConfig1 sync = new SyncForceRescanAvOpenhomeOrgServerConfig1(this);
            BeginForceRescan(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndForceRescan().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginForceRescan(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionForceRescan, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndForceRescan(IntPtr aAsyncHandle)
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
        /// <param name="aScanFile"></param>
        public void SyncGetCurrentScanFile(out String aScanFile)
        {
            SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1 sync = new SyncGetCurrentScanFileAvOpenhomeOrgServerConfig1(this);
            BeginGetCurrentScanFile(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aScanFile = sync.ScanFile();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetCurrentScanFile().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetCurrentScanFile(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetCurrentScanFile, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetCurrentScanFile.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aScanFile"></param>
        public void EndGetCurrentScanFile(IntPtr aAsyncHandle, out String aScanFile)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aScanFile = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aGetValue"></param>
        public void SyncGetServerConfig(out String aGetValue)
        {
            SyncGetServerConfigAvOpenhomeOrgServerConfig1 sync = new SyncGetServerConfigAvOpenhomeOrgServerConfig1(this);
            BeginGetServerConfig(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aGetValue = sync.GetValue();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetServerConfig().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetServerConfig(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetServerConfig, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetServerConfig.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aGetValue"></param>
        public void EndGetServerConfig(IntPtr aAsyncHandle, out String aGetValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aGetValue = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSetValue"></param>
        public void SyncSetServerConfig(String aSetValue)
        {
            SyncSetServerConfigAvOpenhomeOrgServerConfig1 sync = new SyncSetServerConfigAvOpenhomeOrgServerConfig1(this);
            BeginSetServerConfig(aSetValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetServerConfig().</remarks>
        /// <param name="aSetValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetServerConfig(String aSetValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetServerConfig, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetServerConfig.InputParameter(inIndex++), aSetValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetServerConfig(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the PlayCD state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgServerConfig1 instance will not overlap.</remarks>
        /// <param name="aPlayCDChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyPlayCDChanged(System.Action aPlayCDChanged)
        {
            lock (iPropertyLock)
            {
                iPlayCDChanged = aPlayCDChanged;
            }
        }

        private void PlayCDPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iPlayCDChanged);
            }
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
        /// Set a delegate to be run when the SubscriptValue state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgServerConfig1 instance will not overlap.</remarks>
        /// <param name="aSubscriptValueChanged">The delegate to run when the state variable changes</param>
        public void SetPropertySubscriptValueChanged(System.Action aSubscriptValueChanged)
        {
            lock (iPropertyLock)
            {
                iSubscriptValueChanged = aSubscriptValueChanged;
            }
        }

        private void SubscriptValuePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iSubscriptValueChanged);
            }
        }

        /// <summary>
        /// Query the value of the PlayCD property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the PlayCD property</returns>
        public bool PropertyPlayCD()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iPlayCD.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
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
        /// Query the value of the SubscriptValue property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the SubscriptValue property</returns>
        public String PropertySubscriptValue()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iSubscriptValue.Value();
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
            iActionSetPlayCD.Dispose();
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
            iActionEditTrack.Dispose();
            iActionScanVersionDiff.Dispose();
            iActionGetInitHDDResult.Dispose();
            iActionGetHDDHasInited.Dispose();
            iActionUSBImport.Dispose();
            iActionGetDISKCapacity.Dispose();
            iActionForceRescan.Dispose();
            iActionGetCurrentScanFile.Dispose();
            iActionGetServerConfig.Dispose();
            iActionSetServerConfig.Dispose();
            iPlayCD.Dispose();
            iAlive.Dispose();
            iSubscriptValue.Dispose();
        }
    }
}

