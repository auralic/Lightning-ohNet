package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgWebProcessorConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgWebProcessorConfig1 extends ICpProxy
{
    public String syncGetProcessorConfig();
    public void beginGetProcessorConfig(ICpProxyListener aCallback);
    public String endGetProcessorConfig(long aAsyncHandle);
    public void syncSetProcessorConfig(String aProcessorConfig);
    public void beginSetProcessorConfig(String aProcessorConfig, ICpProxyListener aCallback);
    public void endSetProcessorConfig(long aAsyncHandle);
    public void setPropertyAliveChanged(IPropertyChangeListener aAliveChanged);
    public boolean getPropertyAlive();
    public void setPropertyProcessorConfigChanged(IPropertyChangeListener aProcessorConfigChanged);
    public String getPropertyProcessorConfig();
}

class SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebProcessorConfig1 iService;
    private String iProcessorConfig;

    public SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(CpProxyAvOpenhomeOrgWebProcessorConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getProcessorConfig()
    {
        return iProcessorConfig;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetProcessorConfig(aAsyncHandle);
        
        iProcessorConfig = result;
    }
}

class SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebProcessorConfig1 iService;

    public SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(CpProxyAvOpenhomeOrgWebProcessorConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetProcessorConfig(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:WebProcessorConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgWebProcessorConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgWebProcessorConfig1
{

    private Action iActionGetProcessorConfig;
    private Action iActionSetProcessorConfig;
    private PropertyBool iAlive;
    private PropertyString iProcessorConfig;
    private IPropertyChangeListener iAliveChanged;
    private IPropertyChangeListener iProcessorConfigChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgWebProcessorConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "WebProcessorConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetProcessorConfig = new Action("GetProcessorConfig");
        param = new ParameterString("ProcessorConfig", allowedValues);
        iActionGetProcessorConfig.addOutputParameter(param);

        iActionSetProcessorConfig = new Action("SetProcessorConfig");
        param = new ParameterString("ProcessorConfig", allowedValues);
        iActionSetProcessorConfig.addInputParameter(param);

        iAliveChanged = new PropertyChangeListener();
        iAlive = new PropertyBool("Alive",
            new PropertyChangeListener() {
                public void notifyChange() {
                    alivePropertyChanged();
                }
            }
        );
        addProperty(iAlive);
        iProcessorConfigChanged = new PropertyChangeListener();
        iProcessorConfig = new PropertyString("ProcessorConfig",
            new PropertyChangeListener() {
                public void notifyChange() {
                    processorConfigPropertyChanged();
                }
            }
        );
        addProperty(iProcessorConfig);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetProcessorConfig()
    {
        SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 sync = new SyncGetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(this);
        beginGetProcessorConfig(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getProcessorConfig();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetProcessorConfig}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetProcessorConfig(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetProcessorConfig, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetProcessorConfig.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetProcessorConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetProcessorConfig} method.
     * @return the result of the previously invoked action.
     */
    public String endGetProcessorConfig(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String processorConfig = Invocation.getOutputString(aAsyncHandle, index++);
        return processorConfig;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetProcessorConfig(String aProcessorConfig)
    {
        SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1 sync = new SyncSetProcessorConfigAvOpenhomeOrgWebProcessorConfig1(this);
        beginSetProcessorConfig(aProcessorConfig, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetProcessorConfig}.
     * 
     * @param aProcessorConfig
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetProcessorConfig(String aProcessorConfig, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetProcessorConfig, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetProcessorConfig.getInputParameter(inIndex++), aProcessorConfig));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetProcessorConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetProcessorConfig} method.
     */
    public void endSetProcessorConfig(long aAsyncHandle)
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
     * CpProxyAvOpenhomeOrgWebProcessorConfig1 instance will not overlap.
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
     * Set a delegate to be run when the ProcessorConfig state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebProcessorConfig1 instance will not overlap.
     *
     * @param aProcessorConfigChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyProcessorConfigChanged(IPropertyChangeListener aProcessorConfigChanged)
    {
        synchronized (iPropertyLock)
        {
            iProcessorConfigChanged = aProcessorConfigChanged;
        }
    }

    private void processorConfigPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iProcessorConfigChanged);
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
     * Query the value of the ProcessorConfig property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ProcessorConfig property.
     */
    public String getPropertyProcessorConfig()
    {
        propertyReadLock();
        String val = iProcessorConfig.getValue();
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
            iActionGetProcessorConfig.destroy();
            iActionSetProcessorConfig.destroy();
            iAlive.destroy();
            iProcessorConfig.destroy();
        }
    }
}

