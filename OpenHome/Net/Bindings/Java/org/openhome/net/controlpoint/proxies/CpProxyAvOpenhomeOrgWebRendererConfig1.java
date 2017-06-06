package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgWebRendererConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgWebRendererConfig1 extends ICpProxy
{
    public String syncGetRendererConfig();
    public void beginGetRendererConfig(ICpProxyListener aCallback);
    public String endGetRendererConfig(long aAsyncHandle);
    public void syncSetRendererConfig(String aRendererConfig);
    public void beginSetRendererConfig(String aRendererConfig, ICpProxyListener aCallback);
    public void endSetRendererConfig(long aAsyncHandle);
    public void setPropertyAliveChanged(IPropertyChangeListener aAliveChanged);
    public boolean getPropertyAlive();
    public void setPropertyRendererConfigChanged(IPropertyChangeListener aRendererConfigChanged);
    public String getPropertyRendererConfig();
    public void setPropertyCurrentActionChanged(IPropertyChangeListener aCurrentActionChanged);
    public long getPropertyCurrentAction();
}

class SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebRendererConfig1 iService;
    private String iRendererConfig;

    public SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getRendererConfig()
    {
        return iRendererConfig;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetRendererConfig(aAsyncHandle);
        
        iRendererConfig = result;
    }
}

class SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebRendererConfig1 iService;

    public SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1(CpProxyAvOpenhomeOrgWebRendererConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetRendererConfig(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:WebRendererConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgWebRendererConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgWebRendererConfig1
{

    private Action iActionGetRendererConfig;
    private Action iActionSetRendererConfig;
    private PropertyBool iAlive;
    private PropertyString iRendererConfig;
    private PropertyUint iCurrentAction;
    private IPropertyChangeListener iAliveChanged;
    private IPropertyChangeListener iRendererConfigChanged;
    private IPropertyChangeListener iCurrentActionChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgWebRendererConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "WebRendererConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetRendererConfig = new Action("GetRendererConfig");
        param = new ParameterString("RendererConfig", allowedValues);
        iActionGetRendererConfig.addOutputParameter(param);

        iActionSetRendererConfig = new Action("SetRendererConfig");
        param = new ParameterString("RendererConfig", allowedValues);
        iActionSetRendererConfig.addInputParameter(param);

        iAliveChanged = new PropertyChangeListener();
        iAlive = new PropertyBool("Alive",
            new PropertyChangeListener() {
                public void notifyChange() {
                    alivePropertyChanged();
                }
            }
        );
        addProperty(iAlive);
        iRendererConfigChanged = new PropertyChangeListener();
        iRendererConfig = new PropertyString("RendererConfig",
            new PropertyChangeListener() {
                public void notifyChange() {
                    rendererConfigPropertyChanged();
                }
            }
        );
        addProperty(iRendererConfig);
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
    public String syncGetRendererConfig()
    {
        SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1 sync = new SyncGetRendererConfigAvOpenhomeOrgWebRendererConfig1(this);
        beginGetRendererConfig(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getRendererConfig();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetRendererConfig}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetRendererConfig(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetRendererConfig, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetRendererConfig.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetRendererConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetRendererConfig} method.
     * @return the result of the previously invoked action.
     */
    public String endGetRendererConfig(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String rendererConfig = Invocation.getOutputString(aAsyncHandle, index++);
        return rendererConfig;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetRendererConfig(String aRendererConfig)
    {
        SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1 sync = new SyncSetRendererConfigAvOpenhomeOrgWebRendererConfig1(this);
        beginSetRendererConfig(aRendererConfig, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetRendererConfig}.
     * 
     * @param aRendererConfig
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetRendererConfig(String aRendererConfig, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetRendererConfig, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetRendererConfig.getInputParameter(inIndex++), aRendererConfig));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetRendererConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetRendererConfig} method.
     */
    public void endSetRendererConfig(long aAsyncHandle)
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
     * CpProxyAvOpenhomeOrgWebRendererConfig1 instance will not overlap.
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
     * Set a delegate to be run when the RendererConfig state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebRendererConfig1 instance will not overlap.
     *
     * @param aRendererConfigChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyRendererConfigChanged(IPropertyChangeListener aRendererConfigChanged)
    {
        synchronized (iPropertyLock)
        {
            iRendererConfigChanged = aRendererConfigChanged;
        }
    }

    private void rendererConfigPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iRendererConfigChanged);
        }
    }
    /**
     * Set a delegate to be run when the CurrentAction state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebRendererConfig1 instance will not overlap.
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
     * Query the value of the RendererConfig property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the RendererConfig property.
     */
    public String getPropertyRendererConfig()
    {
        propertyReadLock();
        String val = iRendererConfig.getValue();
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
            iActionGetRendererConfig.destroy();
            iActionSetRendererConfig.destroy();
            iAlive.destroy();
            iRendererConfig.destroy();
            iCurrentAction.destroy();
        }
    }
}

