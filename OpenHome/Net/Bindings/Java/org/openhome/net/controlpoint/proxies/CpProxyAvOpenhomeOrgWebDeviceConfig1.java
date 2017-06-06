package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgWebDeviceConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgWebDeviceConfig1 extends ICpProxy
{
    public String syncGetDeviceConfig();
    public void beginGetDeviceConfig(ICpProxyListener aCallback);
    public String endGetDeviceConfig(long aAsyncHandle);
    public void syncSetDeviceConfig(String aDeviceConfig);
    public void beginSetDeviceConfig(String aDeviceConfig, ICpProxyListener aCallback);
    public void endSetDeviceConfig(long aAsyncHandle);
    public String syncGetWiFiList();
    public void beginGetWiFiList(ICpProxyListener aCallback);
    public String endGetWiFiList(long aAsyncHandle);
    public void syncSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp);
    public void beginSetTimeZone(String aTimeZone, String aCurrentTime, String aTimeStamp, ICpProxyListener aCallback);
    public void endSetTimeZone(long aAsyncHandle);
    public String syncGetServiceLocation();
    public void beginGetServiceLocation(ICpProxyListener aCallback);
    public String endGetServiceLocation(long aAsyncHandle);
    public void setPropertyAliveChanged(IPropertyChangeListener aAliveChanged);
    public boolean getPropertyAlive();
    public void setPropertyDeviceConfigChanged(IPropertyChangeListener aDeviceConfigChanged);
    public String getPropertyDeviceConfig();
    public void setPropertyCurrentActionChanged(IPropertyChangeListener aCurrentActionChanged);
    public long getPropertyCurrentAction();
}

class SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebDeviceConfig1 iService;
    private String iDeviceConfig;

    public SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getDeviceConfig()
    {
        return iDeviceConfig;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetDeviceConfig(aAsyncHandle);
        
        iDeviceConfig = result;
    }
}

class SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebDeviceConfig1 iService;

    public SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetDeviceConfig(aAsyncHandle);
        
    }
}

class SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebDeviceConfig1 iService;
    private String iWiFiList;

    public SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1 aProxy)
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

class SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebDeviceConfig1 iService;

    public SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetTimeZone(aAsyncHandle);
        
    }
}

class SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgWebDeviceConfig1 iService;
    private String iServiceLoaction;

    public SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1(CpProxyAvOpenhomeOrgWebDeviceConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getServiceLoaction()
    {
        return iServiceLoaction;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetServiceLocation(aAsyncHandle);
        
        iServiceLoaction = result;
    }
}

/**
 * Proxy for the av.openhome.org:WebDeviceConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgWebDeviceConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgWebDeviceConfig1
{

    private Action iActionGetDeviceConfig;
    private Action iActionSetDeviceConfig;
    private Action iActionGetWiFiList;
    private Action iActionSetTimeZone;
    private Action iActionGetServiceLocation;
    private PropertyBool iAlive;
    private PropertyString iDeviceConfig;
    private PropertyUint iCurrentAction;
    private IPropertyChangeListener iAliveChanged;
    private IPropertyChangeListener iDeviceConfigChanged;
    private IPropertyChangeListener iCurrentActionChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgWebDeviceConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "WebDeviceConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetDeviceConfig = new Action("GetDeviceConfig");
        param = new ParameterString("DeviceConfig", allowedValues);
        iActionGetDeviceConfig.addOutputParameter(param);

        iActionSetDeviceConfig = new Action("SetDeviceConfig");
        param = new ParameterString("DeviceConfig", allowedValues);
        iActionSetDeviceConfig.addInputParameter(param);

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

        iActionGetServiceLocation = new Action("GetServiceLocation");
        param = new ParameterString("ServiceLoaction", allowedValues);
        iActionGetServiceLocation.addOutputParameter(param);

        iAliveChanged = new PropertyChangeListener();
        iAlive = new PropertyBool("Alive",
            new PropertyChangeListener() {
                public void notifyChange() {
                    alivePropertyChanged();
                }
            }
        );
        addProperty(iAlive);
        iDeviceConfigChanged = new PropertyChangeListener();
        iDeviceConfig = new PropertyString("DeviceConfig",
            new PropertyChangeListener() {
                public void notifyChange() {
                    deviceConfigPropertyChanged();
                }
            }
        );
        addProperty(iDeviceConfig);
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
    public String syncGetDeviceConfig()
    {
        SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 sync = new SyncGetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(this);
        beginGetDeviceConfig(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getDeviceConfig();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDeviceConfig}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDeviceConfig(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDeviceConfig, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetDeviceConfig.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDeviceConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDeviceConfig} method.
     * @return the result of the previously invoked action.
     */
    public String endGetDeviceConfig(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String deviceConfig = Invocation.getOutputString(aAsyncHandle, index++);
        return deviceConfig;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetDeviceConfig(String aDeviceConfig)
    {
        SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1 sync = new SyncSetDeviceConfigAvOpenhomeOrgWebDeviceConfig1(this);
        beginSetDeviceConfig(aDeviceConfig, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetDeviceConfig}.
     * 
     * @param aDeviceConfig
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetDeviceConfig(String aDeviceConfig, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetDeviceConfig, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetDeviceConfig.getInputParameter(inIndex++), aDeviceConfig));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetDeviceConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetDeviceConfig} method.
     */
    public void endSetDeviceConfig(long aAsyncHandle)
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
        SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1 sync = new SyncGetWiFiListAvOpenhomeOrgWebDeviceConfig1(this);
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
        SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1 sync = new SyncSetTimeZoneAvOpenhomeOrgWebDeviceConfig1(this);
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
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetServiceLocation()
    {
        SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1 sync = new SyncGetServiceLocationAvOpenhomeOrgWebDeviceConfig1(this);
        beginGetServiceLocation(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getServiceLoaction();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetServiceLocation}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetServiceLocation(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetServiceLocation, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetServiceLocation.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetServiceLocation} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetServiceLocation} method.
     * @return the result of the previously invoked action.
     */
    public String endGetServiceLocation(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String serviceLoaction = Invocation.getOutputString(aAsyncHandle, index++);
        return serviceLoaction;
    }
        
    /**
     * Set a delegate to be run when the Alive state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDeviceConfig1 instance will not overlap.
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
     * Set a delegate to be run when the DeviceConfig state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDeviceConfig1 instance will not overlap.
     *
     * @param aDeviceConfigChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyDeviceConfigChanged(IPropertyChangeListener aDeviceConfigChanged)
    {
        synchronized (iPropertyLock)
        {
            iDeviceConfigChanged = aDeviceConfigChanged;
        }
    }

    private void deviceConfigPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iDeviceConfigChanged);
        }
    }
    /**
     * Set a delegate to be run when the CurrentAction state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDeviceConfig1 instance will not overlap.
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
     * Query the value of the DeviceConfig property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the DeviceConfig property.
     */
    public String getPropertyDeviceConfig()
    {
        propertyReadLock();
        String val = iDeviceConfig.getValue();
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
            iActionGetDeviceConfig.destroy();
            iActionSetDeviceConfig.destroy();
            iActionGetWiFiList.destroy();
            iActionSetTimeZone.destroy();
            iActionGetServiceLocation.destroy();
            iAlive.destroy();
            iDeviceConfig.destroy();
            iCurrentAction.destroy();
        }
    }
}

