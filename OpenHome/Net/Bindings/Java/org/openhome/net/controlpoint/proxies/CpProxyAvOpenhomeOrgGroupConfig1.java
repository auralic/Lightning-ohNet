package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgGroupConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgGroupConfig1 extends ICpProxy
{
    public void syncSetGroupMode(String aGroupMode, String aGroupID, String aGroupName);
    public void beginSetGroupMode(String aGroupMode, String aGroupID, String aGroupName, ICpProxyListener aCallback);
    public void endSetGroupMode(long aAsyncHandle);
    public GetGroupMode syncGetGroupMode();
    public void beginGetGroupMode(ICpProxyListener aCallback);
    public GetGroupMode endGetGroupMode(long aAsyncHandle);
    public void syncSetGroupVolume(long aGroupVolume);
    public void beginSetGroupVolume(long aGroupVolume, ICpProxyListener aCallback);
    public void endSetGroupVolume(long aAsyncHandle);
    public long syncGetGroupVolume();
    public void beginGetGroupVolume(ICpProxyListener aCallback);
    public long endGetGroupVolume(long aAsyncHandle);
    public void syncSetGroupMute(boolean aGroupMute);
    public void beginSetGroupMute(boolean aGroupMute, ICpProxyListener aCallback);
    public void endSetGroupMute(long aAsyncHandle);
    public boolean syncGetGroupMute();
    public void beginGetGroupMute(ICpProxyListener aCallback);
    public boolean endGetGroupMute(long aAsyncHandle);
    public String syncGetGroupStatus();
    public void beginGetGroupStatus(ICpProxyListener aCallback);
    public String endGetGroupStatus(long aAsyncHandle);
    public void setPropertyGroupModeChanged(IPropertyChangeListener aGroupModeChanged);
    public String getPropertyGroupMode();
    public void setPropertyGroupNameChanged(IPropertyChangeListener aGroupNameChanged);
    public String getPropertyGroupName();
    public void setPropertyGroupIDChanged(IPropertyChangeListener aGroupIDChanged);
    public String getPropertyGroupID();
    public void setPropertyGroupVolumeChanged(IPropertyChangeListener aGroupVolumeChanged);
    public long getPropertyGroupVolume();
    public void setPropertyGroupMuteChanged(IPropertyChangeListener aGroupMuteChanged);
    public boolean getPropertyGroupMute();
    public void setPropertyGroupStatusChanged(IPropertyChangeListener aGroupStatusChanged);
    public String getPropertyGroupStatus();
}

class SyncSetGroupModeAvOpenhomeOrgGroupConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgGroupConfig1 iService;

    public SyncSetGroupModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetGroupMode(aAsyncHandle);
        
    }
}

class SyncGetGroupModeAvOpenhomeOrgGroupConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgGroupConfig1 iService;
    private String iGroupMode;
    private String iGroupID;
    private String iGroupName;

    public SyncGetGroupModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getGroupMode()
    {
        return iGroupMode;
    }
    public String getGroupID()
    {
        return iGroupID;
    }
    public String getGroupName()
    {
        return iGroupName;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetGroupMode result = iService.endGetGroupMode(aAsyncHandle);
        
        iGroupMode = result.getGroupMode();
        iGroupID = result.getGroupID();
        iGroupName = result.getGroupName();
    }
}

class SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgGroupConfig1 iService;

    public SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetGroupVolume(aAsyncHandle);
        
    }
}

class SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgGroupConfig1 iService;
    private long iGroupVolume;

    public SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
    {
        iService = aProxy;
    }
    public long getGroupVolume()
    {
        return iGroupVolume;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetGroupVolume(aAsyncHandle);
        
        iGroupVolume = result;
    }
}

class SyncSetGroupMuteAvOpenhomeOrgGroupConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgGroupConfig1 iService;

    public SyncSetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetGroupMute(aAsyncHandle);
        
    }
}

class SyncGetGroupMuteAvOpenhomeOrgGroupConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgGroupConfig1 iService;
    private boolean iGroupMute;

    public SyncGetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getGroupMute()
    {
        return iGroupMute;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetGroupMute(aAsyncHandle);
        
        iGroupMute = result;
    }
}

class SyncGetGroupStatusAvOpenhomeOrgGroupConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgGroupConfig1 iService;
    private String iGroupStatus;

    public SyncGetGroupStatusAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getGroupStatus()
    {
        return iGroupStatus;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetGroupStatus(aAsyncHandle);
        
        iGroupStatus = result;
    }
}

/**
 * Proxy for the av.openhome.org:GroupConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgGroupConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgGroupConfig1
{

    public class GetGroupMode
    {
        private String iGroupMode;
        private String iGroupID;
        private String iGroupName;

        public GetGroupMode(
            String aGroupMode,
            String aGroupID,
            String aGroupName
        )
        {
            iGroupMode = aGroupMode;
            iGroupID = aGroupID;
            iGroupName = aGroupName;
        }
        public String getGroupMode()
        {
            return iGroupMode;
        }
        public String getGroupID()
        {
            return iGroupID;
        }
        public String getGroupName()
        {
            return iGroupName;
        }
    }

    private Action iActionSetGroupMode;
    private Action iActionGetGroupMode;
    private Action iActionSetGroupVolume;
    private Action iActionGetGroupVolume;
    private Action iActionSetGroupMute;
    private Action iActionGetGroupMute;
    private Action iActionGetGroupStatus;
    private PropertyString iGroupMode;
    private PropertyString iGroupName;
    private PropertyString iGroupID;
    private PropertyUint iGroupVolume;
    private PropertyBool iGroupMute;
    private PropertyString iGroupStatus;
    private IPropertyChangeListener iGroupModeChanged;
    private IPropertyChangeListener iGroupNameChanged;
    private IPropertyChangeListener iGroupIDChanged;
    private IPropertyChangeListener iGroupVolumeChanged;
    private IPropertyChangeListener iGroupMuteChanged;
    private IPropertyChangeListener iGroupStatusChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgGroupConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "GroupConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionSetGroupMode = new Action("SetGroupMode");
        allowedValues.add("Master");
        allowedValues.add("Slave");
        allowedValues.add("None");
        param = new ParameterString("GroupMode", allowedValues);
        iActionSetGroupMode.addInputParameter(param);
        allowedValues.clear();
        param = new ParameterString("GroupID", allowedValues);
        iActionSetGroupMode.addInputParameter(param);
        param = new ParameterString("GroupName", allowedValues);
        iActionSetGroupMode.addInputParameter(param);

        iActionGetGroupMode = new Action("GetGroupMode");
        allowedValues.add("Master");
        allowedValues.add("Slave");
        allowedValues.add("None");
        param = new ParameterString("GroupMode", allowedValues);
        iActionGetGroupMode.addOutputParameter(param);
        allowedValues.clear();
        param = new ParameterString("GroupID", allowedValues);
        iActionGetGroupMode.addOutputParameter(param);
        param = new ParameterString("GroupName", allowedValues);
        iActionGetGroupMode.addOutputParameter(param);

        iActionSetGroupVolume = new Action("SetGroupVolume");
        param = new ParameterUint("GroupVolume");
        iActionSetGroupVolume.addInputParameter(param);

        iActionGetGroupVolume = new Action("GetGroupVolume");
        param = new ParameterUint("GroupVolume");
        iActionGetGroupVolume.addOutputParameter(param);

        iActionSetGroupMute = new Action("SetGroupMute");
        param = new ParameterBool("GroupMute");
        iActionSetGroupMute.addInputParameter(param);

        iActionGetGroupMute = new Action("GetGroupMute");
        param = new ParameterBool("GroupMute");
        iActionGetGroupMute.addOutputParameter(param);

        iActionGetGroupStatus = new Action("GetGroupStatus");
        param = new ParameterString("GroupStatus", allowedValues);
        iActionGetGroupStatus.addOutputParameter(param);

        iGroupModeChanged = new PropertyChangeListener();
        iGroupMode = new PropertyString("GroupMode",
            new PropertyChangeListener() {
                public void notifyChange() {
                    groupModePropertyChanged();
                }
            }
        );
        addProperty(iGroupMode);
        iGroupNameChanged = new PropertyChangeListener();
        iGroupName = new PropertyString("GroupName",
            new PropertyChangeListener() {
                public void notifyChange() {
                    groupNamePropertyChanged();
                }
            }
        );
        addProperty(iGroupName);
        iGroupIDChanged = new PropertyChangeListener();
        iGroupID = new PropertyString("GroupID",
            new PropertyChangeListener() {
                public void notifyChange() {
                    groupIDPropertyChanged();
                }
            }
        );
        addProperty(iGroupID);
        iGroupVolumeChanged = new PropertyChangeListener();
        iGroupVolume = new PropertyUint("GroupVolume",
            new PropertyChangeListener() {
                public void notifyChange() {
                    groupVolumePropertyChanged();
                }
            }
        );
        addProperty(iGroupVolume);
        iGroupMuteChanged = new PropertyChangeListener();
        iGroupMute = new PropertyBool("GroupMute",
            new PropertyChangeListener() {
                public void notifyChange() {
                    groupMutePropertyChanged();
                }
            }
        );
        addProperty(iGroupMute);
        iGroupStatusChanged = new PropertyChangeListener();
        iGroupStatus = new PropertyString("GroupStatus",
            new PropertyChangeListener() {
                public void notifyChange() {
                    groupStatusPropertyChanged();
                }
            }
        );
        addProperty(iGroupStatus);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetGroupMode(String aGroupMode, String aGroupID, String aGroupName)
    {
        SyncSetGroupModeAvOpenhomeOrgGroupConfig1 sync = new SyncSetGroupModeAvOpenhomeOrgGroupConfig1(this);
        beginSetGroupMode(aGroupMode, aGroupID, aGroupName, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetGroupMode}.
     * 
     * @param aGroupMode
     * @param aGroupID
     * @param aGroupName
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetGroupMode(String aGroupMode, String aGroupID, String aGroupName, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetGroupMode, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetGroupMode.getInputParameter(inIndex++), aGroupMode));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetGroupMode.getInputParameter(inIndex++), aGroupID));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetGroupMode.getInputParameter(inIndex++), aGroupName));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetGroupMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetGroupMode} method.
     */
    public void endSetGroupMode(long aAsyncHandle)
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
    public GetGroupMode syncGetGroupMode()
    {
        SyncGetGroupModeAvOpenhomeOrgGroupConfig1 sync = new SyncGetGroupModeAvOpenhomeOrgGroupConfig1(this);
        beginGetGroupMode(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetGroupMode(
            sync.getGroupMode(),
            sync.getGroupID(),
            sync.getGroupName()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetGroupMode}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetGroupMode(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetGroupMode, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetGroupMode.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetGroupMode.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetGroupMode.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetGroupMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetGroupMode} method.
     * @return the result of the previously invoked action.
     */
    public GetGroupMode endGetGroupMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String groupMode = Invocation.getOutputString(aAsyncHandle, index++);
        String groupID = Invocation.getOutputString(aAsyncHandle, index++);
        String groupName = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetGroupMode(
            groupMode,
            groupID,
            groupName
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetGroupVolume(long aGroupVolume)
    {
        SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1 sync = new SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1(this);
        beginSetGroupVolume(aGroupVolume, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetGroupVolume}.
     * 
     * @param aGroupVolume
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetGroupVolume(long aGroupVolume, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetGroupVolume, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetGroupVolume.getInputParameter(inIndex++), aGroupVolume));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetGroupVolume} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetGroupVolume} method.
     */
    public void endSetGroupVolume(long aAsyncHandle)
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
    public long syncGetGroupVolume()
    {
        SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1 sync = new SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1(this);
        beginGetGroupVolume(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getGroupVolume();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetGroupVolume}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetGroupVolume(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetGroupVolume, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetGroupVolume.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetGroupVolume} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetGroupVolume} method.
     * @return the result of the previously invoked action.
     */
    public long endGetGroupVolume(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long groupVolume = Invocation.getOutputUint(aAsyncHandle, index++);
        return groupVolume;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetGroupMute(boolean aGroupMute)
    {
        SyncSetGroupMuteAvOpenhomeOrgGroupConfig1 sync = new SyncSetGroupMuteAvOpenhomeOrgGroupConfig1(this);
        beginSetGroupMute(aGroupMute, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetGroupMute}.
     * 
     * @param aGroupMute
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetGroupMute(boolean aGroupMute, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetGroupMute, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetGroupMute.getInputParameter(inIndex++), aGroupMute));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetGroupMute} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetGroupMute} method.
     */
    public void endSetGroupMute(long aAsyncHandle)
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
    public boolean syncGetGroupMute()
    {
        SyncGetGroupMuteAvOpenhomeOrgGroupConfig1 sync = new SyncGetGroupMuteAvOpenhomeOrgGroupConfig1(this);
        beginGetGroupMute(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getGroupMute();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetGroupMute}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetGroupMute(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetGroupMute, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetGroupMute.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetGroupMute} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetGroupMute} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetGroupMute(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean groupMute = Invocation.getOutputBool(aAsyncHandle, index++);
        return groupMute;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetGroupStatus()
    {
        SyncGetGroupStatusAvOpenhomeOrgGroupConfig1 sync = new SyncGetGroupStatusAvOpenhomeOrgGroupConfig1(this);
        beginGetGroupStatus(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getGroupStatus();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetGroupStatus}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetGroupStatus(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetGroupStatus, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetGroupStatus.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetGroupStatus} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetGroupStatus} method.
     * @return the result of the previously invoked action.
     */
    public String endGetGroupStatus(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String groupStatus = Invocation.getOutputString(aAsyncHandle, index++);
        return groupStatus;
    }
        
    /**
     * Set a delegate to be run when the GroupMode state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param aGroupModeChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyGroupModeChanged(IPropertyChangeListener aGroupModeChanged)
    {
        synchronized (iPropertyLock)
        {
            iGroupModeChanged = aGroupModeChanged;
        }
    }

    private void groupModePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iGroupModeChanged);
        }
    }
    /**
     * Set a delegate to be run when the GroupName state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param aGroupNameChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyGroupNameChanged(IPropertyChangeListener aGroupNameChanged)
    {
        synchronized (iPropertyLock)
        {
            iGroupNameChanged = aGroupNameChanged;
        }
    }

    private void groupNamePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iGroupNameChanged);
        }
    }
    /**
     * Set a delegate to be run when the GroupID state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param aGroupIDChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyGroupIDChanged(IPropertyChangeListener aGroupIDChanged)
    {
        synchronized (iPropertyLock)
        {
            iGroupIDChanged = aGroupIDChanged;
        }
    }

    private void groupIDPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iGroupIDChanged);
        }
    }
    /**
     * Set a delegate to be run when the GroupVolume state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param aGroupVolumeChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyGroupVolumeChanged(IPropertyChangeListener aGroupVolumeChanged)
    {
        synchronized (iPropertyLock)
        {
            iGroupVolumeChanged = aGroupVolumeChanged;
        }
    }

    private void groupVolumePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iGroupVolumeChanged);
        }
    }
    /**
     * Set a delegate to be run when the GroupMute state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param aGroupMuteChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyGroupMuteChanged(IPropertyChangeListener aGroupMuteChanged)
    {
        synchronized (iPropertyLock)
        {
            iGroupMuteChanged = aGroupMuteChanged;
        }
    }

    private void groupMutePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iGroupMuteChanged);
        }
    }
    /**
     * Set a delegate to be run when the GroupStatus state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param aGroupStatusChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyGroupStatusChanged(IPropertyChangeListener aGroupStatusChanged)
    {
        synchronized (iPropertyLock)
        {
            iGroupStatusChanged = aGroupStatusChanged;
        }
    }

    private void groupStatusPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iGroupStatusChanged);
        }
    }

    /**
     * Query the value of the GroupMode property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the GroupMode property.
     */
    public String getPropertyGroupMode()
    {
        propertyReadLock();
        String val = iGroupMode.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the GroupName property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the GroupName property.
     */
    public String getPropertyGroupName()
    {
        propertyReadLock();
        String val = iGroupName.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the GroupID property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the GroupID property.
     */
    public String getPropertyGroupID()
    {
        propertyReadLock();
        String val = iGroupID.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the GroupVolume property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the GroupVolume property.
     */
    public long getPropertyGroupVolume()
    {
        propertyReadLock();
        long val = iGroupVolume.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the GroupMute property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the GroupMute property.
     */
    public boolean getPropertyGroupMute()
    {
        propertyReadLock();
        boolean val = iGroupMute.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the GroupStatus property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the GroupStatus property.
     */
    public String getPropertyGroupStatus()
    {
        propertyReadLock();
        String val = iGroupStatus.getValue();
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
            iActionSetGroupMode.destroy();
            iActionGetGroupMode.destroy();
            iActionSetGroupVolume.destroy();
            iActionGetGroupVolume.destroy();
            iActionSetGroupMute.destroy();
            iActionGetGroupMute.destroy();
            iActionGetGroupStatus.destroy();
            iGroupMode.destroy();
            iGroupName.destroy();
            iGroupID.destroy();
            iGroupVolume.destroy();
            iGroupMute.destroy();
            iGroupStatus.destroy();
        }
    }
}

