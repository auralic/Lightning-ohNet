package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgRendererConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgRendererConfig1 extends ICpProxy
{
    public String syncGetRendererConfig();
    public void beginGetRendererConfig(ICpProxyListener aCallback);
    public String endGetRendererConfig(long aAsyncHandle);
    public void syncSetRendererConfig(String aRendererConfig);
    public void beginSetRendererConfig(String aRendererConfig, ICpProxyListener aCallback);
    public void endSetRendererConfig(long aAsyncHandle);
    public String syncGetResamplerConfig();
    public void beginGetResamplerConfig(ICpProxyListener aCallback);
    public String endGetResamplerConfig(long aAsyncHandle);
    public void syncSetResamplerConfig(String aResamplerConfig);
    public void beginSetResamplerConfig(String aResamplerConfig, ICpProxyListener aCallback);
    public void endSetResamplerConfig(long aAsyncHandle);
    public String syncGetHardwareConfig();
    public void beginGetHardwareConfig(ICpProxyListener aCallback);
    public String endGetHardwareConfig(long aAsyncHandle);
    public void syncSetHardwareConfig(String aHardwareConfig);
    public void beginSetHardwareConfig(String aHardwareConfig, ICpProxyListener aCallback);
    public void endSetHardwareConfig(long aAsyncHandle);
    public String syncGetWiFiList();
    public void beginGetWiFiList(ICpProxyListener aCallback);
    public String endGetWiFiList(long aAsyncHandle);
    public void syncSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp);
    public void beginSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp, ICpProxyListener aCallback);
    public void endSetTimeZone(long aAsyncHandle);
    public void setPropertyRendererConfigChanged(IPropertyChangeListener aRendererConfigChanged);
    public String getPropertyRendererConfig();
    public void setPropertyResamplerConfigChanged(IPropertyChangeListener aResamplerConfigChanged);
    public String getPropertyResamplerConfig();
    public void setPropertyHardwareConfigChanged(IPropertyChangeListener aHardwareConfigChanged);
    public String getPropertyHardwareConfig();
}

class SyncGetRendererConfigAvOpenhomeOrgRendererConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRendererConfig1 iService;
    private String iRendererConfig;

    public SyncGetRendererConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
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

class SyncSetRendererConfigAvOpenhomeOrgRendererConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRendererConfig1 iService;

    public SyncSetRendererConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetRendererConfig(aAsyncHandle);
        
    }
}

class SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRendererConfig1 iService;
    private String iResamplerConfig;

    public SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
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

class SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRendererConfig1 iService;

    public SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetResamplerConfig(aAsyncHandle);
        
    }
}

class SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRendererConfig1 iService;
    private String iHardwareConfig;

    public SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getHardwareConfig()
    {
        return iHardwareConfig;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetHardwareConfig(aAsyncHandle);
        
        iHardwareConfig = result;
    }
}

class SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRendererConfig1 iService;

    public SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetHardwareConfig(aAsyncHandle);
        
    }
}

class SyncGetWiFiListAvOpenhomeOrgRendererConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRendererConfig1 iService;
    private String iWiFiList;

    public SyncGetWiFiListAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getWiFiList()
    {
        return iWiFiList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetWiFiList(aAsyncHandle);
        
        iWiFiList = result;
    }
}

class SyncSetTimeZoneAvOpenhomeOrgRendererConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRendererConfig1 iService;

    public SyncSetTimeZoneAvOpenhomeOrgRendererConfig1(CpProxyAvOpenhomeOrgRendererConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetTimeZone(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:RendererConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgRendererConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgRendererConfig1
{

    private Action iActionGetRendererConfig;
    private Action iActionSetRendererConfig;
    private Action iActionGetResamplerConfig;
    private Action iActionSetResamplerConfig;
    private Action iActionGetHardwareConfig;
    private Action iActionSetHardwareConfig;
    private Action iActionGetWiFiList;
    private Action iActionSetTimeZone;
    private PropertyString iRendererConfig;
    private PropertyString iResamplerConfig;
    private PropertyString iHardwareConfig;
    private IPropertyChangeListener iRendererConfigChanged;
    private IPropertyChangeListener iResamplerConfigChanged;
    private IPropertyChangeListener iHardwareConfigChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgRendererConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "RendererConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetRendererConfig = new Action("GetRendererConfig");
        param = new ParameterString("RendererConfig", allowedValues);
        iActionGetRendererConfig.addOutputParameter(param);

        iActionSetRendererConfig = new Action("SetRendererConfig");
        param = new ParameterString("RendererConfig", allowedValues);
        iActionSetRendererConfig.addInputParameter(param);

        iActionGetResamplerConfig = new Action("GetResamplerConfig");
        param = new ParameterString("ResamplerConfig", allowedValues);
        iActionGetResamplerConfig.addOutputParameter(param);

        iActionSetResamplerConfig = new Action("SetResamplerConfig");
        param = new ParameterString("ResamplerConfig", allowedValues);
        iActionSetResamplerConfig.addInputParameter(param);

        iActionGetHardwareConfig = new Action("GetHardwareConfig");
        param = new ParameterString("HardwareConfig", allowedValues);
        iActionGetHardwareConfig.addOutputParameter(param);

        iActionSetHardwareConfig = new Action("SetHardwareConfig");
        param = new ParameterString("HardwareConfig", allowedValues);
        iActionSetHardwareConfig.addInputParameter(param);

        iActionGetWiFiList = new Action("GetWiFiList");
        param = new ParameterString("WiFiList", allowedValues);
        iActionGetWiFiList.addOutputParameter(param);

        iActionSetTimeZone = new Action("SetTimeZone");
        param = new ParameterString("TimeZone", allowedValues);
        iActionSetTimeZone.addInputParameter(param);
        param = new ParameterString("CurrentTime", allowedValues);
        iActionSetTimeZone.addInputParameter(param);
        param = new ParameterString("TimeStamp", allowedValues);
        iActionSetTimeZone.addInputParameter(param);

        iRendererConfigChanged = new PropertyChangeListener();
        iRendererConfig = new PropertyString("RendererConfig",
            new PropertyChangeListener() {
                public void notifyChange() {
                    rendererConfigPropertyChanged();
                }
            }
        );
        addProperty(iRendererConfig);
        iResamplerConfigChanged = new PropertyChangeListener();
        iResamplerConfig = new PropertyString("ResamplerConfig",
            new PropertyChangeListener() {
                public void notifyChange() {
                    resamplerConfigPropertyChanged();
                }
            }
        );
        addProperty(iResamplerConfig);
        iHardwareConfigChanged = new PropertyChangeListener();
        iHardwareConfig = new PropertyString("HardwareConfig",
            new PropertyChangeListener() {
                public void notifyChange() {
                    hardwareConfigPropertyChanged();
                }
            }
        );
        addProperty(iHardwareConfig);
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
        SyncGetRendererConfigAvOpenhomeOrgRendererConfig1 sync = new SyncGetRendererConfigAvOpenhomeOrgRendererConfig1(this);
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
        SyncSetRendererConfigAvOpenhomeOrgRendererConfig1 sync = new SyncSetRendererConfigAvOpenhomeOrgRendererConfig1(this);
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
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetResamplerConfig()
    {
        SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1 sync = new SyncGetResamplerConfigAvOpenhomeOrgRendererConfig1(this);
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
        SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1 sync = new SyncSetResamplerConfigAvOpenhomeOrgRendererConfig1(this);
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
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetHardwareConfig()
    {
        SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1 sync = new SyncGetHardwareConfigAvOpenhomeOrgRendererConfig1(this);
        beginGetHardwareConfig(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getHardwareConfig();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetHardwareConfig}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetHardwareConfig(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetHardwareConfig, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetHardwareConfig.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetHardwareConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetHardwareConfig} method.
     * @return the result of the previously invoked action.
     */
    public String endGetHardwareConfig(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String hardwareConfig = Invocation.getOutputString(aAsyncHandle, index++);
        return hardwareConfig;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetHardwareConfig(String aHardwareConfig)
    {
        SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1 sync = new SyncSetHardwareConfigAvOpenhomeOrgRendererConfig1(this);
        beginSetHardwareConfig(aHardwareConfig, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetHardwareConfig}.
     * 
     * @param aHardwareConfig
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetHardwareConfig(String aHardwareConfig, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetHardwareConfig, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetHardwareConfig.getInputParameter(inIndex++), aHardwareConfig));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetHardwareConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetHardwareConfig} method.
     */
    public void endSetHardwareConfig(long aAsyncHandle)
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
    public String syncGetWiFiList()
    {
        SyncGetWiFiListAvOpenhomeOrgRendererConfig1 sync = new SyncGetWiFiListAvOpenhomeOrgRendererConfig1(this);
        beginGetWiFiList(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getWiFiList();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetWiFiList}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetWiFiList(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetWiFiList, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetWiFiList.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetWiFiList} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetWiFiList} method.
     * @return the result of the previously invoked action.
     */
    public String endGetWiFiList(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String wiFiList = Invocation.getOutputString(aAsyncHandle, index++);
        return wiFiList;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp)
    {
        SyncSetTimeZoneAvOpenhomeOrgRendererConfig1 sync = new SyncSetTimeZoneAvOpenhomeOrgRendererConfig1(this);
        beginSetTimeZone(aTimeZone, aCurrentTime, aTimeStamp, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetTimeZone}.
     * 
     * @param aTimeZone
     * @param aCurrentTime
     * @param aTimeStamp
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetTimeZone, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetTimeZone.getInputParameter(inIndex++), aTimeZone));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetTimeZone.getInputParameter(inIndex++), aCurrentTime));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetTimeZone.getInputParameter(inIndex++), aTimeStamp));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetTimeZone} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetTimeZone} method.
     */
    public void endSetTimeZone(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the RendererConfig state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRendererConfig1 instance will not overlap.
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
     * Set a delegate to be run when the ResamplerConfig state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRendererConfig1 instance will not overlap.
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
     * Set a delegate to be run when the HardwareConfig state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRendererConfig1 instance will not overlap.
     *
     * @param aHardwareConfigChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyHardwareConfigChanged(IPropertyChangeListener aHardwareConfigChanged)
    {
        synchronized (iPropertyLock)
        {
            iHardwareConfigChanged = aHardwareConfigChanged;
        }
    }

    private void hardwareConfigPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iHardwareConfigChanged);
        }
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
     * Query the value of the HardwareConfig property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the HardwareConfig property.
     */
    public String getPropertyHardwareConfig()
    {
        propertyReadLock();
        String val = iHardwareConfig.getValue();
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
            iActionGetResamplerConfig.destroy();
            iActionSetResamplerConfig.destroy();
            iActionGetHardwareConfig.destroy();
            iActionSetHardwareConfig.destroy();
            iActionGetWiFiList.destroy();
            iActionSetTimeZone.destroy();
            iRendererConfig.destroy();
            iResamplerConfig.destroy();
            iHardwareConfig.destroy();
        }
    }
}

