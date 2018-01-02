package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgWebDACConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgWebDACConfig1 extends ICpProxy
{
    public String syncGetDACConfig();
    public void beginGetDACConfig(ICpProxyListener aCallback);
    public String endGetDACConfig(long aAsyncHandle);
    public void syncSetDACConfig(String aDACConfig);
    public void beginSetDACConfig(String aDACConfig, ICpProxyListener aCallback);
    public void endSetDACConfig(long aAsyncHandle);
    public void setPropertyAliveChanged(IPropertyChangeListener aAliveChanged);
    public boolean getPropertyAlive();
    public void setPropertyDACConfigChanged(IPropertyChangeListener aDACConfigChanged);
    public String getPropertyDACConfig();
    public void setPropertyCurrentActionChanged(IPropertyChangeListener aCurrentActionChanged);
    public long getPropertyCurrentAction();
}

class SyncGetDACConfigAvOpenhomeOrgWebDACConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebDACConfig1 iService;
    private String iDACConfig;

    public SyncGetDACConfigAvOpenhomeOrgWebDACConfig1(CpProxyAvOpenhomeOrgWebDACConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getDACConfig()
    {
        return iDACConfig;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetDACConfig(aAsyncHandle);
        
        iDACConfig = result;
    }
}

class SyncSetDACConfigAvOpenhomeOrgWebDACConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebDACConfig1 iService;

    public SyncSetDACConfigAvOpenhomeOrgWebDACConfig1(CpProxyAvOpenhomeOrgWebDACConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetDACConfig(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:WebDACConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgWebDACConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgWebDACConfig1
{

    private Action iActionGetDACConfig;
    private Action iActionSetDACConfig;
    private PropertyBool iAlive;
    private PropertyString iDACConfig;
    private PropertyUint iCurrentAction;
    private IPropertyChangeListener iAliveChanged;
    private IPropertyChangeListener iDACConfigChanged;
    private IPropertyChangeListener iCurrentActionChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgWebDACConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "WebDACConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetDACConfig = new Action("GetDACConfig");
        param = new ParameterString("DACConfig", allowedValues);
        iActionGetDACConfig.addOutputParameter(param);

        iActionSetDACConfig = new Action("SetDACConfig");
        param = new ParameterString("DACConfig", allowedValues);
        iActionSetDACConfig.addInputParameter(param);

        iAliveChanged = new PropertyChangeListener();
        iAlive = new PropertyBool("Alive",
            new PropertyChangeListener() {
                public void notifyChange() {
                    alivePropertyChanged();
                }
            }
        );
        addProperty(iAlive);
        iDACConfigChanged = new PropertyChangeListener();
        iDACConfig = new PropertyString("DACConfig",
            new PropertyChangeListener() {
                public void notifyChange() {
                    dACConfigPropertyChanged();
                }
            }
        );
        addProperty(iDACConfig);
        iCurrentActionChanged = new PropertyChangeListener();
        iCurrentAction = new PropertyUint("CurrentAction",
            new PropertyChangeListener() {
                public void notifyChange() {
                    currentActionPropertyChanged();
                }
            }
        );
        addProperty(iCurrentAction);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetDACConfig()
    {
        SyncGetDACConfigAvOpenhomeOrgWebDACConfig1 sync = new SyncGetDACConfigAvOpenhomeOrgWebDACConfig1(this);
        beginGetDACConfig(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getDACConfig();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDACConfig}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDACConfig(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDACConfig, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDACConfig.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDACConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDACConfig} method.
     * @return the result of the previously invoked action.
     */
    public String endGetDACConfig(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String dACConfig = Invocation.getOutputString(aAsyncHandle, index++);
        return dACConfig;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetDACConfig(String aDACConfig)
    {
        SyncSetDACConfigAvOpenhomeOrgWebDACConfig1 sync = new SyncSetDACConfigAvOpenhomeOrgWebDACConfig1(this);
        beginSetDACConfig(aDACConfig, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetDACConfig}.
     * 
     * @param aDACConfig
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetDACConfig(String aDACConfig, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetDACConfig, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetDACConfig.getInputParameter(inIndex++), aDACConfig));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetDACConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetDACConfig} method.
     */
    public void endSetDACConfig(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the Alive state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDACConfig1 instance will not overlap.
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
     * Set a delegate to be run when the DACConfig state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDACConfig1 instance will not overlap.
     *
     * @param aDACConfigChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyDACConfigChanged(IPropertyChangeListener aDACConfigChanged)
    {
        synchronized (iPropertyLock)
        {
            iDACConfigChanged = aDACConfigChanged;
        }
    }

    private void dACConfigPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iDACConfigChanged);
        }
    }
    /**
     * Set a delegate to be run when the CurrentAction state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDACConfig1 instance will not overlap.
     *
     * @param aCurrentActionChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCurrentActionChanged(IPropertyChangeListener aCurrentActionChanged)
    {
        synchronized (iPropertyLock)
        {
            iCurrentActionChanged = aCurrentActionChanged;
        }
    }

    private void currentActionPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCurrentActionChanged);
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
     * Query the value of the DACConfig property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the DACConfig property.
     */
    public String getPropertyDACConfig()
    {
        propertyReadLock();
        String val = iDACConfig.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the CurrentAction property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CurrentAction property.
     */
    public long getPropertyCurrentAction()
    {
        propertyReadLock();
        long val = iCurrentAction.getValue();
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
            iActionGetDACConfig.destroy();
            iActionSetDACConfig.destroy();
            iAlive.destroy();
            iDACConfig.destroy();
            iCurrentAction.destroy();
        }
    }
}

