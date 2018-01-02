package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgWebClockConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgWebClockConfig1 extends ICpProxy
{
    public String syncGetClockConfig();
    public void beginGetClockConfig(ICpProxyListener aCallback);
    public String endGetClockConfig(long aAsyncHandle);
    public void syncSetClockConfig(String aClockConfig);
    public void beginSetClockConfig(String aClockConfig, ICpProxyListener aCallback);
    public void endSetClockConfig(long aAsyncHandle);
    public void setPropertyAliveChanged(IPropertyChangeListener aAliveChanged);
    public boolean getPropertyAlive();
    public void setPropertyClockConfigChanged(IPropertyChangeListener aClockConfigChanged);
    public String getPropertyClockConfig();
}

class SyncGetClockConfigAvOpenhomeOrgWebClockConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebClockConfig1 iService;
    private String iClockConfig;

    public SyncGetClockConfigAvOpenhomeOrgWebClockConfig1(CpProxyAvOpenhomeOrgWebClockConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getClockConfig()
    {
        return iClockConfig;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetClockConfig(aAsyncHandle);
        
        iClockConfig = result;
    }
}

class SyncSetClockConfigAvOpenhomeOrgWebClockConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebClockConfig1 iService;

    public SyncSetClockConfigAvOpenhomeOrgWebClockConfig1(CpProxyAvOpenhomeOrgWebClockConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetClockConfig(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:WebClockConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgWebClockConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgWebClockConfig1
{

    private Action iActionGetClockConfig;
    private Action iActionSetClockConfig;
    private PropertyBool iAlive;
    private PropertyString iClockConfig;
    private IPropertyChangeListener iAliveChanged;
    private IPropertyChangeListener iClockConfigChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgWebClockConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "WebClockConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetClockConfig = new Action("GetClockConfig");
        param = new ParameterString("ClockConfig", allowedValues);
        iActionGetClockConfig.addOutputParameter(param);

        iActionSetClockConfig = new Action("SetClockConfig");
        param = new ParameterString("ClockConfig", allowedValues);
        iActionSetClockConfig.addInputParameter(param);

        iAliveChanged = new PropertyChangeListener();
        iAlive = new PropertyBool("Alive",
            new PropertyChangeListener() {
                public void notifyChange() {
                    alivePropertyChanged();
                }
            }
        );
        addProperty(iAlive);
        iClockConfigChanged = new PropertyChangeListener();
        iClockConfig = new PropertyString("ClockConfig",
            new PropertyChangeListener() {
                public void notifyChange() {
                    clockConfigPropertyChanged();
                }
            }
        );
        addProperty(iClockConfig);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetClockConfig()
    {
        SyncGetClockConfigAvOpenhomeOrgWebClockConfig1 sync = new SyncGetClockConfigAvOpenhomeOrgWebClockConfig1(this);
        beginGetClockConfig(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getClockConfig();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetClockConfig}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetClockConfig(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetClockConfig, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetClockConfig.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetClockConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetClockConfig} method.
     * @return the result of the previously invoked action.
     */
    public String endGetClockConfig(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String clockConfig = Invocation.getOutputString(aAsyncHandle, index++);
        return clockConfig;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetClockConfig(String aClockConfig)
    {
        SyncSetClockConfigAvOpenhomeOrgWebClockConfig1 sync = new SyncSetClockConfigAvOpenhomeOrgWebClockConfig1(this);
        beginSetClockConfig(aClockConfig, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetClockConfig}.
     * 
     * @param aClockConfig
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetClockConfig(String aClockConfig, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetClockConfig, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetClockConfig.getInputParameter(inIndex++), aClockConfig));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetClockConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetClockConfig} method.
     */
    public void endSetClockConfig(long aAsyncHandle)
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
     * CpProxyAvOpenhomeOrgWebClockConfig1 instance will not overlap.
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
     * Set a delegate to be run when the ClockConfig state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebClockConfig1 instance will not overlap.
     *
     * @param aClockConfigChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyClockConfigChanged(IPropertyChangeListener aClockConfigChanged)
    {
        synchronized (iPropertyLock)
        {
            iClockConfigChanged = aClockConfigChanged;
        }
    }

    private void clockConfigPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iClockConfigChanged);
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
     * Query the value of the ClockConfig property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ClockConfig property.
     */
    public String getPropertyClockConfig()
    {
        propertyReadLock();
        String val = iClockConfig.getValue();
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
            iActionGetClockConfig.destroy();
            iActionSetClockConfig.destroy();
            iAlive.destroy();
            iClockConfig.destroy();
        }
    }
}

