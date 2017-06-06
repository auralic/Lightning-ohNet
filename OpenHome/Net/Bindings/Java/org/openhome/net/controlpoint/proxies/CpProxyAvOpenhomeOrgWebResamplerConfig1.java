package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgWebResamplerConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgWebResamplerConfig1 extends ICpProxy
{
    public String syncGetResamplerConfig();
    public void beginGetResamplerConfig(ICpProxyListener aCallback);
    public String endGetResamplerConfig(long aAsyncHandle);
    public void syncSetResamplerConfig(String aResamplerConfig);
    public void beginSetResamplerConfig(String aResamplerConfig, ICpProxyListener aCallback);
    public void endSetResamplerConfig(long aAsyncHandle);
    public void setPropertyResamplerConfigChanged(IPropertyChangeListener aResamplerConfigChanged);
    public String getPropertyResamplerConfig();
}

class SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebResamplerConfig1 iService;
    private String iResamplerConfig;

    public SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(CpProxyAvOpenhomeOrgWebResamplerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getResamplerConfig()
    {
        return iResamplerConfig;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetResamplerConfig(aAsyncHandle);
        
        iResamplerConfig = result;
    }
}

class SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebResamplerConfig1 iService;

    public SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(CpProxyAvOpenhomeOrgWebResamplerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetResamplerConfig(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:WebResamplerConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgWebResamplerConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgWebResamplerConfig1
{

    private Action iActionGetResamplerConfig;
    private Action iActionSetResamplerConfig;
    private PropertyString iResamplerConfig;
    private IPropertyChangeListener iResamplerConfigChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgWebResamplerConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "WebResamplerConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetResamplerConfig = new Action("GetResamplerConfig");
        param = new ParameterString("ResamplerConfig", allowedValues);
        iActionGetResamplerConfig.addOutputParameter(param);

        iActionSetResamplerConfig = new Action("SetResamplerConfig");
        param = new ParameterString("ResamplerConfig", allowedValues);
        iActionSetResamplerConfig.addInputParameter(param);

        iResamplerConfigChanged = new PropertyChangeListener();
        iResamplerConfig = new PropertyString("ResamplerConfig",
            new PropertyChangeListener() {
                public void notifyChange() {
                    resamplerConfigPropertyChanged();
                }
            }
        );
        addProperty(iResamplerConfig);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetResamplerConfig()
    {
        SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 sync = new SyncGetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(this);
        beginGetResamplerConfig(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getResamplerConfig();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetResamplerConfig}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetResamplerConfig(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetResamplerConfig, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetResamplerConfig.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetResamplerConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetResamplerConfig} method.
     * @return the result of the previously invoked action.
     */
    public String endGetResamplerConfig(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String resamplerConfig = Invocation.getOutputString(aAsyncHandle, index++);
        return resamplerConfig;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetResamplerConfig(String aResamplerConfig)
    {
        SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1 sync = new SyncSetResamplerConfigAvOpenhomeOrgWebResamplerConfig1(this);
        beginSetResamplerConfig(aResamplerConfig, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetResamplerConfig}.
     * 
     * @param aResamplerConfig
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetResamplerConfig(String aResamplerConfig, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetResamplerConfig, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetResamplerConfig.getInputParameter(inIndex++), aResamplerConfig));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetResamplerConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetResamplerConfig} method.
     */
    public void endSetResamplerConfig(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the ResamplerConfig state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebResamplerConfig1 instance will not overlap.
     *
     * @param aResamplerConfigChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyResamplerConfigChanged(IPropertyChangeListener aResamplerConfigChanged)
    {
        synchronized (iPropertyLock)
        {
            iResamplerConfigChanged = aResamplerConfigChanged;
        }
    }

    private void resamplerConfigPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iResamplerConfigChanged);
        }
    }

    /**
     * Query the value of the ResamplerConfig property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ResamplerConfig property.
     */
    public String getPropertyResamplerConfig()
    {
        propertyReadLock();
        String val = iResamplerConfig.getValue();
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
            iActionGetResamplerConfig.destroy();
            iActionSetResamplerConfig.destroy();
            iResamplerConfig.destroy();
        }
    }
}

