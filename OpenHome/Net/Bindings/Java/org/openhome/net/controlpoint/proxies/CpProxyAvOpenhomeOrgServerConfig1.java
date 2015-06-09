package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgServerConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgServerConfig1 extends ICpProxy
{
    public void syncSetServerName(String aServerName);
    public void beginSetServerName(String aServerName, ICpProxyListener aCallback);
    public void endSetServerName(long aAsyncHandle);
    public String syncGetServerVersion();
    public void beginGetServerVersion(ICpProxyListener aCallback);
    public String endGetServerVersion(long aAsyncHandle);
    public String syncGetProgressInfo();
    public void beginGetProgressInfo(ICpProxyListener aCallback);
    public String endGetProgressInfo(long aAsyncHandle);
    public String syncGetScanVersion();
    public void beginGetScanVersion(ICpProxyListener aCallback);
    public String endGetScanVersion(long aAsyncHandle);
    public GetWorkMode syncGetWorkMode();
    public void beginGetWorkMode(ICpProxyListener aCallback);
    public GetWorkMode endGetWorkMode(long aAsyncHandle);
    public void syncSetWorkMode(String aWorkMode);
    public void beginSetWorkMode(String aWorkMode, ICpProxyListener aCallback);
    public void endSetWorkMode(long aAsyncHandle);
    public void syncDelAllLocalDB();
    public void beginDelAllLocalDB(ICpProxyListener aCallback);
    public void endDelAllLocalDB(long aAsyncHandle);
    public void syncInitHDD();
    public void beginInitHDD(ICpProxyListener aCallback);
    public void endInitHDD(long aAsyncHandle);
    public void syncRescan();
    public void beginRescan(ICpProxyListener aCallback);
    public void endRescan(long aAsyncHandle);
    public void syncHandMount();
    public void beginHandMount(ICpProxyListener aCallback);
    public void endHandMount(long aAsyncHandle);
    public void syncHandUMount();
    public void beginHandUMount(ICpProxyListener aCallback);
    public void endHandUMount(long aAsyncHandle);
    public GetDiskInfo syncGetDiskInfo();
    public void beginGetDiskInfo(ICpProxyListener aCallback);
    public GetDiskInfo endGetDiskInfo(long aAsyncHandle);
    public GetSMBConfig syncGetSMBConfig();
    public void beginGetSMBConfig(ICpProxyListener aCallback);
    public GetSMBConfig endGetSMBConfig(long aAsyncHandle);
    public void syncSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord);
    public void beginSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord, ICpProxyListener aCallback);
    public void endSetSMBConfig(long aAsyncHandle);
    public boolean syncGetDriveMountResult();
    public void beginGetDriveMountResult(ICpProxyListener aCallback);
    public boolean endGetDriveMountResult(long aAsyncHandle);
    public void syncEditTrack(String aEditValue);
    public void beginEditTrack(String aEditValue, ICpProxyListener aCallback);
    public void endEditTrack(long aAsyncHandle);
    public String syncScanVersionDiff();
    public void beginScanVersionDiff(ICpProxyListener aCallback);
    public String endScanVersionDiff(long aAsyncHandle);
    public boolean syncGetInitHDDResult();
    public void beginGetInitHDDResult(ICpProxyListener aCallback);
    public boolean endGetInitHDDResult(long aAsyncHandle);
    public void setPropertyAliveChanged(IPropertyChangeListener aAliveChanged);
    public boolean getPropertyAlive();
}

class SyncSetServerNameAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;

    public SyncSetServerNameAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetServerName(aAsyncHandle);
        
    }
}

class SyncGetServerVersionAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;
    private String iServerVersion;

    public SyncGetServerVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getServerVersion()
    {
        return iServerVersion;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetServerVersion(aAsyncHandle);
        
        iServerVersion = result;
    }
}

class SyncGetProgressInfoAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;
    private String iProgress;

    public SyncGetProgressInfoAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getProgress()
    {
        return iProgress;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetProgressInfo(aAsyncHandle);
        
        iProgress = result;
    }
}

class SyncGetScanVersionAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;
    private String iScanVersion;

    public SyncGetScanVersionAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getScanVersion()
    {
        return iScanVersion;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetScanVersion(aAsyncHandle);
        
        iScanVersion = result;
    }
}

class SyncGetWorkModeAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;
    private String iWorkMode;
    private String iWorkModeList;

    public SyncGetWorkModeAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getWorkMode()
    {
        return iWorkMode;
    }
    public String getWorkModeList()
    {
        return iWorkModeList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetWorkMode result = iService.endGetWorkMode(aAsyncHandle);
        
        iWorkMode = result.getWorkMode();
        iWorkModeList = result.getWorkModeList();
    }
}

class SyncSetWorkModeAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;

    public SyncSetWorkModeAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetWorkMode(aAsyncHandle);
        
    }
}

class SyncDelAllLocalDBAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;

    public SyncDelAllLocalDBAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endDelAllLocalDB(aAsyncHandle);
        
    }
}

class SyncInitHDDAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;

    public SyncInitHDDAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endInitHDD(aAsyncHandle);
        
    }
}

class SyncRescanAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;

    public SyncRescanAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endRescan(aAsyncHandle);
        
    }
}

class SyncHandMountAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;

    public SyncHandMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endHandMount(aAsyncHandle);
        
    }
}

class SyncHandUMountAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;

    public SyncHandUMountAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endHandUMount(aAsyncHandle);
        
    }
}

class SyncGetDiskInfoAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;
    private boolean iIsConnected;
    private String iStatusCode;
    private String iStatusInfo;
    private String iCapacity;
    private String iFileCount;

    public SyncGetDiskInfoAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getIsConnected()
    {
        return iIsConnected;
    }
    public String getStatusCode()
    {
        return iStatusCode;
    }
    public String getStatusInfo()
    {
        return iStatusInfo;
    }
    public String getCapacity()
    {
        return iCapacity;
    }
    public String getFileCount()
    {
        return iFileCount;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetDiskInfo result = iService.endGetDiskInfo(aAsyncHandle);
        
        iIsConnected = result.getIsConnected();
        iStatusCode = result.getStatusCode();
        iStatusInfo = result.getStatusInfo();
        iCapacity = result.getCapacity();
        iFileCount = result.getFileCount();
    }
}

class SyncGetSMBConfigAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;
    private String iSMBAddr;
    private String iSMBUserName;
    private String iSMBPassWord;

    public SyncGetSMBConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getSMBAddr()
    {
        return iSMBAddr;
    }
    public String getSMBUserName()
    {
        return iSMBUserName;
    }
    public String getSMBPassWord()
    {
        return iSMBPassWord;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetSMBConfig result = iService.endGetSMBConfig(aAsyncHandle);
        
        iSMBAddr = result.getSMBAddr();
        iSMBUserName = result.getSMBUserName();
        iSMBPassWord = result.getSMBPassWord();
    }
}

class SyncSetSMBConfigAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;

    public SyncSetSMBConfigAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetSMBConfig(aAsyncHandle);
        
    }
}

class SyncGetDriveMountResultAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;
    private boolean iDriveMountResult;

    public SyncGetDriveMountResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getDriveMountResult()
    {
        return iDriveMountResult;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetDriveMountResult(aAsyncHandle);
        
        iDriveMountResult = result;
    }
}

class SyncEditTrackAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;

    public SyncEditTrackAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endEditTrack(aAsyncHandle);
        
    }
}

class SyncScanVersionDiffAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;
    private String iScanVersionDiffValue;

    public SyncScanVersionDiffAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getScanVersionDiffValue()
    {
        return iScanVersionDiffValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endScanVersionDiff(aAsyncHandle);
        
        iScanVersionDiffValue = result;
    }
}

class SyncGetInitHDDResultAvOpenhomeOrgServerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgServerConfig1 iService;
    private boolean iInitHDDResult;

    public SyncGetInitHDDResultAvOpenhomeOrgServerConfig1(CpProxyAvOpenhomeOrgServerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getInitHDDResult()
    {
        return iInitHDDResult;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetInitHDDResult(aAsyncHandle);
        
        iInitHDDResult = result;
    }
}

/**
 * Proxy for the av.openhome.org:ServerConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgServerConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgServerConfig1
{

    public class GetWorkMode
    {
        private String iWorkMode;
        private String iWorkModeList;

        public GetWorkMode(
            String aWorkMode,
            String aWorkModeList
        )
        {
            iWorkMode = aWorkMode;
            iWorkModeList = aWorkModeList;
        }
        public String getWorkMode()
        {
            return iWorkMode;
        }
        public String getWorkModeList()
        {
            return iWorkModeList;
        }
    }

    public class GetDiskInfo
    {
        private boolean iIsConnected;
        private String iStatusCode;
        private String iStatusInfo;
        private String iCapacity;
        private String iFileCount;

        public GetDiskInfo(
            boolean aIsConnected,
            String aStatusCode,
            String aStatusInfo,
            String aCapacity,
            String aFileCount
        )
        {
            iIsConnected = aIsConnected;
            iStatusCode = aStatusCode;
            iStatusInfo = aStatusInfo;
            iCapacity = aCapacity;
            iFileCount = aFileCount;
        }
        public boolean getIsConnected()
        {
            return iIsConnected;
        }
        public String getStatusCode()
        {
            return iStatusCode;
        }
        public String getStatusInfo()
        {
            return iStatusInfo;
        }
        public String getCapacity()
        {
            return iCapacity;
        }
        public String getFileCount()
        {
            return iFileCount;
        }
    }

    public class GetSMBConfig
    {
        private String iSMBAddr;
        private String iSMBUserName;
        private String iSMBPassWord;

        public GetSMBConfig(
            String aSMBAddr,
            String aSMBUserName,
            String aSMBPassWord
        )
        {
            iSMBAddr = aSMBAddr;
            iSMBUserName = aSMBUserName;
            iSMBPassWord = aSMBPassWord;
        }
        public String getSMBAddr()
        {
            return iSMBAddr;
        }
        public String getSMBUserName()
        {
            return iSMBUserName;
        }
        public String getSMBPassWord()
        {
            return iSMBPassWord;
        }
    }

    private Action iActionSetServerName;
    private Action iActionGetServerVersion;
    private Action iActionGetProgressInfo;
    private Action iActionGetScanVersion;
    private Action iActionGetWorkMode;
    private Action iActionSetWorkMode;
    private Action iActionDelAllLocalDB;
    private Action iActionInitHDD;
    private Action iActionRescan;
    private Action iActionHandMount;
    private Action iActionHandUMount;
    private Action iActionGetDiskInfo;
    private Action iActionGetSMBConfig;
    private Action iActionSetSMBConfig;
    private Action iActionGetDriveMountResult;
    private Action iActionEditTrack;
    private Action iActionScanVersionDiff;
    private Action iActionGetInitHDDResult;
    private PropertyBool iAlive;
    private IPropertyChangeListener iAliveChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgServerConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "ServerConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionSetServerName = new Action("SetServerName");
        param = new ParameterString("ServerName", allowedValues);
        iActionSetServerName.addInputParameter(param);

        iActionGetServerVersion = new Action("GetServerVersion");
        param = new ParameterString("ServerVersion", allowedValues);
        iActionGetServerVersion.addOutputParameter(param);

        iActionGetProgressInfo = new Action("GetProgressInfo");
        param = new ParameterString("Progress", allowedValues);
        iActionGetProgressInfo.addOutputParameter(param);

        iActionGetScanVersion = new Action("GetScanVersion");
        param = new ParameterString("ScanVersion", allowedValues);
        iActionGetScanVersion.addOutputParameter(param);

        iActionGetWorkMode = new Action("GetWorkMode");
        param = new ParameterString("WorkMode", allowedValues);
        iActionGetWorkMode.addOutputParameter(param);
        param = new ParameterString("WorkModeList", allowedValues);
        iActionGetWorkMode.addOutputParameter(param);

        iActionSetWorkMode = new Action("SetWorkMode");
        param = new ParameterString("WorkMode", allowedValues);
        iActionSetWorkMode.addInputParameter(param);

        iActionDelAllLocalDB = new Action("DelAllLocalDB");

        iActionInitHDD = new Action("InitHDD");

        iActionRescan = new Action("Rescan");

        iActionHandMount = new Action("HandMount");

        iActionHandUMount = new Action("HandUMount");

        iActionGetDiskInfo = new Action("GetDiskInfo");
        param = new ParameterBool("IsConnected");
        iActionGetDiskInfo.addOutputParameter(param);
        param = new ParameterString("StatusCode", allowedValues);
        iActionGetDiskInfo.addOutputParameter(param);
        param = new ParameterString("StatusInfo", allowedValues);
        iActionGetDiskInfo.addOutputParameter(param);
        param = new ParameterString("Capacity", allowedValues);
        iActionGetDiskInfo.addOutputParameter(param);
        param = new ParameterString("FileCount", allowedValues);
        iActionGetDiskInfo.addOutputParameter(param);

        iActionGetSMBConfig = new Action("GetSMBConfig");
        param = new ParameterString("SMBAddr", allowedValues);
        iActionGetSMBConfig.addOutputParameter(param);
        param = new ParameterString("SMBUserName", allowedValues);
        iActionGetSMBConfig.addOutputParameter(param);
        param = new ParameterString("SMBPassWord", allowedValues);
        iActionGetSMBConfig.addOutputParameter(param);

        iActionSetSMBConfig = new Action("SetSMBConfig");
        param = new ParameterString("SMBAddr", allowedValues);
        iActionSetSMBConfig.addInputParameter(param);
        param = new ParameterString("SMBUserName", allowedValues);
        iActionSetSMBConfig.addInputParameter(param);
        param = new ParameterString("SMBPassWord", allowedValues);
        iActionSetSMBConfig.addInputParameter(param);

        iActionGetDriveMountResult = new Action("GetDriveMountResult");
        param = new ParameterBool("DriveMountResult");
        iActionGetDriveMountResult.addOutputParameter(param);

        iActionEditTrack = new Action("EditTrack");
        param = new ParameterString("EditValue", allowedValues);
        iActionEditTrack.addInputParameter(param);

        iActionScanVersionDiff = new Action("ScanVersionDiff");
        param = new ParameterString("ScanVersionDiffValue", allowedValues);
        iActionScanVersionDiff.addOutputParameter(param);

        iActionGetInitHDDResult = new Action("GetInitHDDResult");
        param = new ParameterBool("InitHDDResult");
        iActionGetInitHDDResult.addOutputParameter(param);

        iAliveChanged = new PropertyChangeListener();
        iAlive = new PropertyBool("Alive",
            new PropertyChangeListener() {
                public void notifyChange() {
                    alivePropertyChanged();
                }
            }
        );
        addProperty(iAlive);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetServerName(String aServerName)
    {
        SyncSetServerNameAvOpenhomeOrgServerConfig1 sync = new SyncSetServerNameAvOpenhomeOrgServerConfig1(this);
        beginSetServerName(aServerName, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetServerName}.
     * 
     * @param aServerName
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetServerName(String aServerName, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetServerName, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetServerName.getInputParameter(inIndex++), aServerName));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetServerName} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetServerName} method.
     */
    public void endSetServerName(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetServerVersion()
    {
        SyncGetServerVersionAvOpenhomeOrgServerConfig1 sync = new SyncGetServerVersionAvOpenhomeOrgServerConfig1(this);
        beginGetServerVersion(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getServerVersion();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetServerVersion}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetServerVersion(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetServerVersion, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetServerVersion.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetServerVersion} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetServerVersion} method.
     * @return the result of the previously invoked action.
     */
    public String endGetServerVersion(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String serverVersion = Invocation.getOutputString(aAsyncHandle, index++);
        return serverVersion;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetProgressInfo()
    {
        SyncGetProgressInfoAvOpenhomeOrgServerConfig1 sync = new SyncGetProgressInfoAvOpenhomeOrgServerConfig1(this);
        beginGetProgressInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getProgress();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetProgressInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetProgressInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetProgressInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetProgressInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetProgressInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetProgressInfo} method.
     * @return the result of the previously invoked action.
     */
    public String endGetProgressInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String progress = Invocation.getOutputString(aAsyncHandle, index++);
        return progress;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetScanVersion()
    {
        SyncGetScanVersionAvOpenhomeOrgServerConfig1 sync = new SyncGetScanVersionAvOpenhomeOrgServerConfig1(this);
        beginGetScanVersion(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getScanVersion();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetScanVersion}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetScanVersion(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetScanVersion, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetScanVersion.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetScanVersion} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetScanVersion} method.
     * @return the result of the previously invoked action.
     */
    public String endGetScanVersion(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String scanVersion = Invocation.getOutputString(aAsyncHandle, index++);
        return scanVersion;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetWorkMode syncGetWorkMode()
    {
        SyncGetWorkModeAvOpenhomeOrgServerConfig1 sync = new SyncGetWorkModeAvOpenhomeOrgServerConfig1(this);
        beginGetWorkMode(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetWorkMode(
            sync.getWorkMode(),
            sync.getWorkModeList()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetWorkMode}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetWorkMode(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetWorkMode, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetWorkMode.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetWorkMode.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetWorkMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetWorkMode} method.
     * @return the result of the previously invoked action.
     */
    public GetWorkMode endGetWorkMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String workMode = Invocation.getOutputString(aAsyncHandle, index++);
        String workModeList = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetWorkMode(
            workMode,
            workModeList
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetWorkMode(String aWorkMode)
    {
        SyncSetWorkModeAvOpenhomeOrgServerConfig1 sync = new SyncSetWorkModeAvOpenhomeOrgServerConfig1(this);
        beginSetWorkMode(aWorkMode, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetWorkMode}.
     * 
     * @param aWorkMode
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetWorkMode(String aWorkMode, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetWorkMode, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetWorkMode.getInputParameter(inIndex++), aWorkMode));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetWorkMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetWorkMode} method.
     */
    public void endSetWorkMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncDelAllLocalDB()
    {
        SyncDelAllLocalDBAvOpenhomeOrgServerConfig1 sync = new SyncDelAllLocalDBAvOpenhomeOrgServerConfig1(this);
        beginDelAllLocalDB(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endDelAllLocalDB}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginDelAllLocalDB(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionDelAllLocalDB, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginDelAllLocalDB} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginDelAllLocalDB} method.
     */
    public void endDelAllLocalDB(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncInitHDD()
    {
        SyncInitHDDAvOpenhomeOrgServerConfig1 sync = new SyncInitHDDAvOpenhomeOrgServerConfig1(this);
        beginInitHDD(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endInitHDD}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginInitHDD(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionInitHDD, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginInitHDD} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginInitHDD} method.
     */
    public void endInitHDD(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncRescan()
    {
        SyncRescanAvOpenhomeOrgServerConfig1 sync = new SyncRescanAvOpenhomeOrgServerConfig1(this);
        beginRescan(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endRescan}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginRescan(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionRescan, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginRescan} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginRescan} method.
     */
    public void endRescan(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncHandMount()
    {
        SyncHandMountAvOpenhomeOrgServerConfig1 sync = new SyncHandMountAvOpenhomeOrgServerConfig1(this);
        beginHandMount(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endHandMount}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginHandMount(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionHandMount, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginHandMount} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginHandMount} method.
     */
    public void endHandMount(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncHandUMount()
    {
        SyncHandUMountAvOpenhomeOrgServerConfig1 sync = new SyncHandUMountAvOpenhomeOrgServerConfig1(this);
        beginHandUMount(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endHandUMount}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginHandUMount(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionHandUMount, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginHandUMount} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginHandUMount} method.
     */
    public void endHandUMount(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetDiskInfo syncGetDiskInfo()
    {
        SyncGetDiskInfoAvOpenhomeOrgServerConfig1 sync = new SyncGetDiskInfoAvOpenhomeOrgServerConfig1(this);
        beginGetDiskInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetDiskInfo(
            sync.getIsConnected(),
            sync.getStatusCode(),
            sync.getStatusInfo(),
            sync.getCapacity(),
            sync.getFileCount()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDiskInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDiskInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDiskInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetDiskInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDiskInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDiskInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDiskInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDiskInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDiskInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDiskInfo} method.
     * @return the result of the previously invoked action.
     */
    public GetDiskInfo endGetDiskInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean isConnected = Invocation.getOutputBool(aAsyncHandle, index++);
        String statusCode = Invocation.getOutputString(aAsyncHandle, index++);
        String statusInfo = Invocation.getOutputString(aAsyncHandle, index++);
        String capacity = Invocation.getOutputString(aAsyncHandle, index++);
        String fileCount = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetDiskInfo(
            isConnected,
            statusCode,
            statusInfo,
            capacity,
            fileCount
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetSMBConfig syncGetSMBConfig()
    {
        SyncGetSMBConfigAvOpenhomeOrgServerConfig1 sync = new SyncGetSMBConfigAvOpenhomeOrgServerConfig1(this);
        beginGetSMBConfig(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetSMBConfig(
            sync.getSMBAddr(),
            sync.getSMBUserName(),
            sync.getSMBPassWord()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetSMBConfig}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetSMBConfig(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetSMBConfig, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSMBConfig.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSMBConfig.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSMBConfig.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetSMBConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetSMBConfig} method.
     * @return the result of the previously invoked action.
     */
    public GetSMBConfig endGetSMBConfig(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String sMBAddr = Invocation.getOutputString(aAsyncHandle, index++);
        String sMBUserName = Invocation.getOutputString(aAsyncHandle, index++);
        String sMBPassWord = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetSMBConfig(
            sMBAddr,
            sMBUserName,
            sMBPassWord
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord)
    {
        SyncSetSMBConfigAvOpenhomeOrgServerConfig1 sync = new SyncSetSMBConfigAvOpenhomeOrgServerConfig1(this);
        beginSetSMBConfig(aSMBAddr, aSMBUserName, aSMBPassWord, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetSMBConfig}.
     * 
     * @param aSMBAddr
     * @param aSMBUserName
     * @param aSMBPassWord
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetSMBConfig, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetSMBConfig.getInputParameter(inIndex++), aSMBAddr));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetSMBConfig.getInputParameter(inIndex++), aSMBUserName));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetSMBConfig.getInputParameter(inIndex++), aSMBPassWord));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetSMBConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetSMBConfig} method.
     */
    public void endSetSMBConfig(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncGetDriveMountResult()
    {
        SyncGetDriveMountResultAvOpenhomeOrgServerConfig1 sync = new SyncGetDriveMountResultAvOpenhomeOrgServerConfig1(this);
        beginGetDriveMountResult(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getDriveMountResult();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDriveMountResult}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDriveMountResult(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDriveMountResult, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetDriveMountResult.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDriveMountResult} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDriveMountResult} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetDriveMountResult(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean driveMountResult = Invocation.getOutputBool(aAsyncHandle, index++);
        return driveMountResult;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncEditTrack(String aEditValue)
    {
        SyncEditTrackAvOpenhomeOrgServerConfig1 sync = new SyncEditTrackAvOpenhomeOrgServerConfig1(this);
        beginEditTrack(aEditValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endEditTrack}.
     * 
     * @param aEditValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginEditTrack(String aEditValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionEditTrack, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionEditTrack.getInputParameter(inIndex++), aEditValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginEditTrack} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginEditTrack} method.
     */
    public void endEditTrack(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncScanVersionDiff()
    {
        SyncScanVersionDiffAvOpenhomeOrgServerConfig1 sync = new SyncScanVersionDiffAvOpenhomeOrgServerConfig1(this);
        beginScanVersionDiff(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getScanVersionDiffValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endScanVersionDiff}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginScanVersionDiff(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionScanVersionDiff, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionScanVersionDiff.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginScanVersionDiff} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginScanVersionDiff} method.
     * @return the result of the previously invoked action.
     */
    public String endScanVersionDiff(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String scanVersionDiffValue = Invocation.getOutputString(aAsyncHandle, index++);
        return scanVersionDiffValue;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncGetInitHDDResult()
    {
        SyncGetInitHDDResultAvOpenhomeOrgServerConfig1 sync = new SyncGetInitHDDResultAvOpenhomeOrgServerConfig1(this);
        beginGetInitHDDResult(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getInitHDDResult();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetInitHDDResult}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetInitHDDResult(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetInitHDDResult, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetInitHDDResult.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetInitHDDResult} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetInitHDDResult} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetInitHDDResult(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean initHDDResult = Invocation.getOutputBool(aAsyncHandle, index++);
        return initHDDResult;
    }
        
    /**
     * Set a delegate to be run when the Alive state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgServerConfig1 instance will not overlap.
     *
     * @param aAliveChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyAliveChanged(IPropertyChangeListener aAliveChanged)
    {
        synchronized (iPropertyLock)
        {
            iAliveChanged = aAliveChanged;
        }
    }

    private void alivePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iAliveChanged);
        }
    }

    /**
     * Query the value of the Alive property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Alive property.
     */
    public boolean getPropertyAlive()
    {
        propertyReadLock();
        boolean val = iAlive.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Dispose of this control point proxy.
     * Must be called for each class instance.
     * Must be called before <tt>Library.close()</tt>.
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            disposeProxy();
            iHandle = 0;
            iActionSetServerName.destroy();
            iActionGetServerVersion.destroy();
            iActionGetProgressInfo.destroy();
            iActionGetScanVersion.destroy();
            iActionGetWorkMode.destroy();
            iActionSetWorkMode.destroy();
            iActionDelAllLocalDB.destroy();
            iActionInitHDD.destroy();
            iActionRescan.destroy();
            iActionHandMount.destroy();
            iActionHandUMount.destroy();
            iActionGetDiskInfo.destroy();
            iActionGetSMBConfig.destroy();
            iActionSetSMBConfig.destroy();
            iActionGetDriveMountResult.destroy();
            iActionEditTrack.destroy();
            iActionScanVersionDiff.destroy();
            iActionGetInitHDDResult.destroy();
            iAlive.destroy();
        }
    }
}

