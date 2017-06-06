package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgRenderingInfo1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgRenderingInfo1 extends ICpProxy
{
    public String syncGetEntireInfo();
    public void beginGetEntireInfo(ICpProxyListener aCallback);
    public String endGetEntireInfo(long aAsyncHandle);
    public void setPropertyInfoChanged(IPropertyChangeListener aInfoChanged);
    public String getPropertyInfo();
}

class SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRenderingInfo1 iService;
    private String iInfo;

    public SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1(CpProxyAvOpenhomeOrgRenderingInfo1 aProxy)
    {
        iService = aProxy;
    }
    public String getInfo()
    {
        return iInfo;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetEntireInfo(aAsyncHandle);
        
        iInfo = result;
    }
}

/**
 * Proxy for the av.openhome.org:RenderingInfo:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgRenderingInfo1 extends CpProxy implements ICpProxyAvOpenhomeOrgRenderingInfo1
{

    private Action iActionGetEntireInfo;
    private PropertyString iInfo;
    private IPropertyChangeListener iInfoChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgRenderingInfo1(CpDevice aDevice)
    {
        super("av-openhome-org", "RenderingInfo", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetEntireInfo = new Action("GetEntireInfo");
        param = new ParameterString("Info", allowedValues);
        iActionGetEntireInfo.addOutputParameter(param);

        iInfoChanged = new PropertyChangeListener();
        iInfo = new PropertyString("Info",
            new PropertyChangeListener() {
                public void notifyChange() {
                    infoPropertyChanged();
                }
            }
        );
        addProperty(iInfo);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetEntireInfo()
    {
        SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1 sync = new SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1(this);
        beginGetEntireInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getInfo();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetEntireInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetEntireInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetEntireInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetEntireInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetEntireInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetEntireInfo} method.
     * @return the result of the previously invoked action.
     */
    public String endGetEntireInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String info = Invocation.getOutputString(aAsyncHandle, index++);
        return info;
    }
        
    /**
     * Set a delegate to be run when the Info state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRenderingInfo1 instance will not overlap.
     *
     * @param aInfoChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyInfoChanged(IPropertyChangeListener aInfoChanged)
    {
        synchronized (iPropertyLock)
        {
            iInfoChanged = aInfoChanged;
        }
    }

    private void infoPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iInfoChanged);
        }
    }

    /**
     * Query the value of the Info property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Info property.
     */
    public String getPropertyInfo()
    {
        propertyReadLock();
        String val = iInfo.getValue();
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
            iActionGetEntireInfo.destroy();
            iInfo.destroy();
        }
    }
}

