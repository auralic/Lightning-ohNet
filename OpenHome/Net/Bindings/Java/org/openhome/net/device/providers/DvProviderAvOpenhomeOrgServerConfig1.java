package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgServerConfig1
{

    /**
     * Set the value of the Alive property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyAlive(boolean aValue);

    /**
     * Get a copy of the value of the Alive property
     *
     * @return value of the Alive property.
     */
    public boolean getPropertyAlive();
        
}

/**
 * Provider for the av.openhome.org:ServerConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgServerConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgServerConfig1
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

    private IDvInvocationListener iDelegateSetServerName;
    private IDvInvocationListener iDelegateGetServerVersion;
    private IDvInvocationListener iDelegateGetProgressInfo;
    private IDvInvocationListener iDelegateGetScanVersion;
    private IDvInvocationListener iDelegateGetWorkMode;
    private IDvInvocationListener iDelegateSetWorkMode;
    private IDvInvocationListener iDelegateDelAllLocalDB;
    private IDvInvocationListener iDelegateInitHDD;
    private IDvInvocationListener iDelegateRescan;
    private IDvInvocationListener iDelegateHandMount;
    private IDvInvocationListener iDelegateHandUMount;
    private IDvInvocationListener iDelegateGetDiskInfo;
    private IDvInvocationListener iDelegateGetSMBConfig;
    private IDvInvocationListener iDelegateSetSMBConfig;
    private IDvInvocationListener iDelegateGetDriveMountResult;
    private IDvInvocationListener iDelegateEditTrack;
    private IDvInvocationListener iDelegateScanVersionDiff;
    private IDvInvocationListener iDelegateGetInitHDDResult;
    private PropertyBool iPropertyAlive;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgServerConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "ServerConfig", 1);
    }

    /**
     * Enable the Alive property.
     */
    public void enablePropertyAlive()
    {
        iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
        addProperty(iPropertyAlive);
    }

    /**
     * Set the value of the Alive property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyAlive(boolean aValue)
    {
        return setPropertyBool(iPropertyAlive, aValue);
    }

    /**
     * Get a copy of the value of the Alive property
     *
     * @return  value of the Alive property.
     */
    public boolean getPropertyAlive()
    {
        return iPropertyAlive.getValue();
    }

    /**
     * Signal that the action SetServerName is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetServerName must be overridden if this is called.
     */      
    protected void enableActionSetServerName()
    {
        Action action = new Action("SetServerName");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ServerName", allowedValues));
        iDelegateSetServerName = new DoSetServerName();
        enableAction(action, iDelegateSetServerName);
    }

    /**
     * Signal that the action GetServerVersion is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetServerVersion must be overridden if this is called.
     */      
    protected void enableActionGetServerVersion()
    {
        Action action = new Action("GetServerVersion");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("ServerVersion", allowedValues));
        iDelegateGetServerVersion = new DoGetServerVersion();
        enableAction(action, iDelegateGetServerVersion);
    }

    /**
     * Signal that the action GetProgressInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetProgressInfo must be overridden if this is called.
     */      
    protected void enableActionGetProgressInfo()
    {
        Action action = new Action("GetProgressInfo");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("Progress", allowedValues));
        iDelegateGetProgressInfo = new DoGetProgressInfo();
        enableAction(action, iDelegateGetProgressInfo);
    }

    /**
     * Signal that the action GetScanVersion is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetScanVersion must be overridden if this is called.
     */      
    protected void enableActionGetScanVersion()
    {
        Action action = new Action("GetScanVersion");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("ScanVersion", allowedValues));
        iDelegateGetScanVersion = new DoGetScanVersion();
        enableAction(action, iDelegateGetScanVersion);
    }

    /**
     * Signal that the action GetWorkMode is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetWorkMode must be overridden if this is called.
     */      
    protected void enableActionGetWorkMode()
    {
        Action action = new Action("GetWorkMode");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("WorkMode", allowedValues));
        action.addOutputParameter(new ParameterString("WorkModeList", allowedValues));
        iDelegateGetWorkMode = new DoGetWorkMode();
        enableAction(action, iDelegateGetWorkMode);
    }

    /**
     * Signal that the action SetWorkMode is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetWorkMode must be overridden if this is called.
     */      
    protected void enableActionSetWorkMode()
    {
        Action action = new Action("SetWorkMode");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("WorkMode", allowedValues));
        iDelegateSetWorkMode = new DoSetWorkMode();
        enableAction(action, iDelegateSetWorkMode);
    }

    /**
     * Signal that the action DelAllLocalDB is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * DelAllLocalDB must be overridden if this is called.
     */      
    protected void enableActionDelAllLocalDB()
    {
        Action action = new Action("DelAllLocalDB");
        iDelegateDelAllLocalDB = new DoDelAllLocalDB();
        enableAction(action, iDelegateDelAllLocalDB);
    }

    /**
     * Signal that the action InitHDD is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * InitHDD must be overridden if this is called.
     */      
    protected void enableActionInitHDD()
    {
        Action action = new Action("InitHDD");
        iDelegateInitHDD = new DoInitHDD();
        enableAction(action, iDelegateInitHDD);
    }

    /**
     * Signal that the action Rescan is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Rescan must be overridden if this is called.
     */      
    protected void enableActionRescan()
    {
        Action action = new Action("Rescan");
        iDelegateRescan = new DoRescan();
        enableAction(action, iDelegateRescan);
    }

    /**
     * Signal that the action HandMount is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * HandMount must be overridden if this is called.
     */      
    protected void enableActionHandMount()
    {
        Action action = new Action("HandMount");
        iDelegateHandMount = new DoHandMount();
        enableAction(action, iDelegateHandMount);
    }

    /**
     * Signal that the action HandUMount is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * HandUMount must be overridden if this is called.
     */      
    protected void enableActionHandUMount()
    {
        Action action = new Action("HandUMount");
        iDelegateHandUMount = new DoHandUMount();
        enableAction(action, iDelegateHandUMount);
    }

    /**
     * Signal that the action GetDiskInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetDiskInfo must be overridden if this is called.
     */      
    protected void enableActionGetDiskInfo()
    {
        Action action = new Action("GetDiskInfo");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterBool("IsConnected"));
        action.addOutputParameter(new ParameterString("StatusCode", allowedValues));
        action.addOutputParameter(new ParameterString("StatusInfo", allowedValues));
        action.addOutputParameter(new ParameterString("Capacity", allowedValues));
        action.addOutputParameter(new ParameterString("FileCount", allowedValues));
        iDelegateGetDiskInfo = new DoGetDiskInfo();
        enableAction(action, iDelegateGetDiskInfo);
    }

    /**
     * Signal that the action GetSMBConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetSMBConfig must be overridden if this is called.
     */      
    protected void enableActionGetSMBConfig()
    {
        Action action = new Action("GetSMBConfig");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("SMBAddr", allowedValues));
        action.addOutputParameter(new ParameterString("SMBUserName", allowedValues));
        action.addOutputParameter(new ParameterString("SMBPassWord", allowedValues));
        iDelegateGetSMBConfig = new DoGetSMBConfig();
        enableAction(action, iDelegateGetSMBConfig);
    }

    /**
     * Signal that the action SetSMBConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetSMBConfig must be overridden if this is called.
     */      
    protected void enableActionSetSMBConfig()
    {
        Action action = new Action("SetSMBConfig");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("SMBAddr", allowedValues));
        action.addInputParameter(new ParameterString("SMBUserName", allowedValues));
        action.addInputParameter(new ParameterString("SMBPassWord", allowedValues));
        iDelegateSetSMBConfig = new DoSetSMBConfig();
        enableAction(action, iDelegateSetSMBConfig);
    }

    /**
     * Signal that the action GetDriveMountResult is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetDriveMountResult must be overridden if this is called.
     */      
    protected void enableActionGetDriveMountResult()
    {
        Action action = new Action("GetDriveMountResult");
        action.addOutputParameter(new ParameterBool("DriveMountResult"));
        iDelegateGetDriveMountResult = new DoGetDriveMountResult();
        enableAction(action, iDelegateGetDriveMountResult);
    }

    /**
     * Signal that the action EditTrack is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * EditTrack must be overridden if this is called.
     */      
    protected void enableActionEditTrack()
    {
        Action action = new Action("EditTrack");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("EditValue", allowedValues));
        iDelegateEditTrack = new DoEditTrack();
        enableAction(action, iDelegateEditTrack);
    }

    /**
     * Signal that the action ScanVersionDiff is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ScanVersionDiff must be overridden if this is called.
     */      
    protected void enableActionScanVersionDiff()
    {
        Action action = new Action("ScanVersionDiff");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("ScanVersionDiffValue", allowedValues));
        iDelegateScanVersionDiff = new DoScanVersionDiff();
        enableAction(action, iDelegateScanVersionDiff);
    }

    /**
     * Signal that the action GetInitHDDResult is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetInitHDDResult must be overridden if this is called.
     */      
    protected void enableActionGetInitHDDResult()
    {
        Action action = new Action("GetInitHDDResult");
        action.addOutputParameter(new ParameterBool("InitHDDResult"));
        iDelegateGetInitHDDResult = new DoGetInitHDDResult();
        enableAction(action, iDelegateGetInitHDDResult);
    }

    /**
     * SetServerName action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetServerName action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetServerName} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aServerName
     */
    protected void setServerName(IDvInvocation aInvocation, String aServerName)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetServerVersion action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetServerVersion action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetServerVersion} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getServerVersion(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetProgressInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetProgressInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetProgressInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getProgressInfo(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetScanVersion action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetScanVersion action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetScanVersion} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getScanVersion(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetWorkMode action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetWorkMode action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetWorkMode} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetWorkMode getWorkMode(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetWorkMode action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetWorkMode action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetWorkMode} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aWorkMode
     */
    protected void setWorkMode(IDvInvocation aInvocation, String aWorkMode)
    {
        throw (new ActionDisabledError());
    }

    /**
     * DelAllLocalDB action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * DelAllLocalDB action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionDelAllLocalDB} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void delAllLocalDB(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * InitHDD action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * InitHDD action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionInitHDD} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void initHDD(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Rescan action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Rescan action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionRescan} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void rescan(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * HandMount action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * HandMount action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionHandMount} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void handMount(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * HandUMount action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * HandUMount action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionHandUMount} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void handUMount(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetDiskInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetDiskInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetDiskInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetDiskInfo getDiskInfo(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetSMBConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetSMBConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetSMBConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetSMBConfig getSMBConfig(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetSMBConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetSMBConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetSMBConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aSMBAddr
     * @param aSMBUserName
     * @param aSMBPassWord
     */
    protected void setSMBConfig(IDvInvocation aInvocation, String aSMBAddr, String aSMBUserName, String aSMBPassWord)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetDriveMountResult action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetDriveMountResult action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetDriveMountResult} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getDriveMountResult(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * EditTrack action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * EditTrack action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionEditTrack} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aEditValue
     */
    protected void editTrack(IDvInvocation aInvocation, String aEditValue)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ScanVersionDiff action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ScanVersionDiff action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionScanVersionDiff} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String scanVersionDiff(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetInitHDDResult action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetInitHDDResult action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetInitHDDResult} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getInitHDDResult(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Must be called for each class instance.  Must be called before Core.Library.Close().
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            super.dispose();
            iHandle = 0;
        }
    }


    private class DoSetServerName implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serverName;
            try
            {
                invocation.readStart();
                serverName = invocation.readString("ServerName");
                invocation.readEnd();
                setServerName(invocation, serverName);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetServerName");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetServerVersion implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serverVersion;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 serverVersion = getServerVersion(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetServerVersion");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("ServerVersion", serverVersion);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetProgressInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String progress;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 progress = getProgressInfo(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetProgressInfo");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("Progress", progress);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetScanVersion implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String scanVersion;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 scanVersion = getScanVersion(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetScanVersion");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("ScanVersion", scanVersion);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetWorkMode implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String workMode;
            String workModeList;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetWorkMode outArgs = getWorkMode(invocation);
            workMode = outArgs.getWorkMode();
            workModeList = outArgs.getWorkModeList();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetWorkMode");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("WorkMode", workMode);
                invocation.writeString("WorkModeList", workModeList);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetWorkMode implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String workMode;
            try
            {
                invocation.readStart();
                workMode = invocation.readString("WorkMode");
                invocation.readEnd();
                setWorkMode(invocation, workMode);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetWorkMode");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoDelAllLocalDB implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                delAllLocalDB(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "DelAllLocalDB");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoInitHDD implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                initHDD(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "InitHDD");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoRescan implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                rescan(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Rescan");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoHandMount implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                handMount(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "HandMount");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoHandUMount implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                handUMount(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "HandUMount");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetDiskInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean isConnected;
            String statusCode;
            String statusInfo;
            String capacity;
            String fileCount;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetDiskInfo outArgs = getDiskInfo(invocation);
            isConnected = outArgs.getIsConnected();
            statusCode = outArgs.getStatusCode();
            statusInfo = outArgs.getStatusInfo();
            capacity = outArgs.getCapacity();
            fileCount = outArgs.getFileCount();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetDiskInfo");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeBool("IsConnected", isConnected);
                invocation.writeString("StatusCode", statusCode);
                invocation.writeString("StatusInfo", statusInfo);
                invocation.writeString("Capacity", capacity);
                invocation.writeString("FileCount", fileCount);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetSMBConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String sMBAddr;
            String sMBUserName;
            String sMBPassWord;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetSMBConfig outArgs = getSMBConfig(invocation);
            sMBAddr = outArgs.getSMBAddr();
            sMBUserName = outArgs.getSMBUserName();
            sMBPassWord = outArgs.getSMBPassWord();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetSMBConfig");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("SMBAddr", sMBAddr);
                invocation.writeString("SMBUserName", sMBUserName);
                invocation.writeString("SMBPassWord", sMBPassWord);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetSMBConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String sMBAddr;
            String sMBUserName;
            String sMBPassWord;
            try
            {
                invocation.readStart();
                sMBAddr = invocation.readString("SMBAddr");
                sMBUserName = invocation.readString("SMBUserName");
                sMBPassWord = invocation.readString("SMBPassWord");
                invocation.readEnd();
                setSMBConfig(invocation, sMBAddr, sMBUserName, sMBPassWord);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetSMBConfig");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetDriveMountResult implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean driveMountResult;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 driveMountResult = getDriveMountResult(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetDriveMountResult");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeBool("DriveMountResult", driveMountResult);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoEditTrack implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String editValue;
            try
            {
                invocation.readStart();
                editValue = invocation.readString("EditValue");
                invocation.readEnd();
                editTrack(invocation, editValue);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "EditTrack");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoScanVersionDiff implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String scanVersionDiffValue;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 scanVersionDiffValue = scanVersionDiff(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ScanVersionDiff");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("ScanVersionDiffValue", scanVersionDiffValue);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoGetInitHDDResult implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean initHDDResult;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 initHDDResult = getInitHDDResult(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetInitHDDResult");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeBool("InitHDDResult", initHDDResult);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }
}

