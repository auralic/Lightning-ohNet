package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgResamplerConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgResamplerConfig1 extends ICpProxy
{
    public void syncSetResamplerConfig(String aResamplerConfig);
    public void beginSetResamplerConfig(String aResamplerConfig, ICpProxyListener aCallback);
    public void endSetResamplerConfig(long aAsyncHandle);
    public String syncGetResamplerConfig();
    public void beginGetResamplerConfig(ICpProxyListener aCallback);
    public String endGetResamplerConfig(long aAsyncHandle);
    public void syncSetPCMAutoDetect(boolean aPCMAutoDetect);
    public void beginSetPCMAutoDetect(boolean aPCMAutoDetect, ICpProxyListener aCallback);
    public void endSetPCMAutoDetect(long aAsyncHandle);
    public boolean syncGetPCMAutoDetect();
    public void beginGetPCMAutoDetect(ICpProxyListener aCallback);
    public boolean endGetPCMAutoDetect(long aAsyncHandle);
    public void syncSetDSDtoPCM(boolean aDSDtoPCM);
    public void beginSetDSDtoPCM(boolean aDSDtoPCM, ICpProxyListener aCallback);
    public void endSetDSDtoPCM(long aAsyncHandle);
    public boolean syncGetDSDtoPCM();
    public void beginGetDSDtoPCM(ICpProxyListener aCallback);
    public boolean endGetDSDtoPCM(long aAsyncHandle);
    public void setPropertyCurrentActionChanged(IPropertyChangeListener aCurrentActionChanged);
    public long getPropertyCurrentAction();
}

class SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgResamplerConfig1 iService;

    public SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetResamplerConfig(aAsyncHandle);
        
    }
}

class SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgResamplerConfig1 iService;
    private String iResamplerConfig;

    public SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1 aProxy)
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

class SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgResamplerConfig1 iService;

    public SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetPCMAutoDetect(aAsyncHandle);
        
    }
}

class SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgResamplerConfig1 iService;
    private boolean iPCMAutoDetect;

    public SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getPCMAutoDetect()
    {
        return iPCMAutoDetect;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetPCMAutoDetect(aAsyncHandle);
        
        iPCMAutoDetect = result;
    }
}

class SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgResamplerConfig1 iService;

    public SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetDSDtoPCM(aAsyncHandle);
        
    }
}

class SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgResamplerConfig1 iService;
    private boolean iDSDtoPCM;

    public SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1(CpProxyAvOpenhomeOrgResamplerConfig1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getDSDtoPCM()
    {
        return iDSDtoPCM;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetDSDtoPCM(aAsyncHandle);
        
        iDSDtoPCM = result;
    }
}

/**
 * Proxy for the av.openhome.org:ResamplerConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgResamplerConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgResamplerConfig1
{

    private Action iActionSetResamplerConfig;
    private Action iActionGetResamplerConfig;
    private Action iActionSetPCMAutoDetect;
    private Action iActionGetPCMAutoDetect;
    private Action iActionSetDSDtoPCM;
    private Action iActionGetDSDtoPCM;
    private PropertyUint iCurrentAction;
    private IPropertyChangeListener iCurrentActionChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgResamplerConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "ResamplerConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionSetResamplerConfig = new Action("SetResamplerConfig");
        param = new ParameterString("ResamplerConfig", allowedValues);
        iActionSetResamplerConfig.addInputParameter(param);

        iActionGetResamplerConfig = new Action("GetResamplerConfig");
        param = new ParameterString("ResamplerConfig", allowedValues);
        iActionGetResamplerConfig.addOutputParameter(param);

        iActionSetPCMAutoDetect = new Action("SetPCMAutoDetect");
        param = new ParameterBool("PCMAutoDetect");
        iActionSetPCMAutoDetect.addInputParameter(param);

        iActionGetPCMAutoDetect = new Action("GetPCMAutoDetect");
        param = new ParameterBool("PCMAutoDetect");
        iActionGetPCMAutoDetect.addOutputParameter(param);

        iActionSetDSDtoPCM = new Action("SetDSDtoPCM");
        param = new ParameterBool("DSDtoPCM");
        iActionSetDSDtoPCM.addInputParameter(param);

        iActionGetDSDtoPCM = new Action("GetDSDtoPCM");
        param = new ParameterBool("DSDtoPCM");
        iActionGetDSDtoPCM.addOutputParameter(param);

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
     */
    public void syncSetResamplerConfig(String aResamplerConfig)
    {
        SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1 sync = new SyncSetResamplerConfigAvOpenhomeOrgResamplerConfig1(this);
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
    public String syncGetResamplerConfig()
    {
        SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1 sync = new SyncGetResamplerConfigAvOpenhomeOrgResamplerConfig1(this);
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
    public void syncSetPCMAutoDetect(boolean aPCMAutoDetect)
    {
        SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1 sync = new SyncSetPCMAutoDetectAvOpenhomeOrgResamplerConfig1(this);
        beginSetPCMAutoDetect(aPCMAutoDetect, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetPCMAutoDetect}.
     * 
     * @param aPCMAutoDetect
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetPCMAutoDetect(boolean aPCMAutoDetect, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetPCMAutoDetect, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetPCMAutoDetect.getInputParameter(inIndex++), aPCMAutoDetect));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetPCMAutoDetect} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetPCMAutoDetect} method.
     */
    public void endSetPCMAutoDetect(long aAsyncHandle)
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
    public boolean syncGetPCMAutoDetect()
    {
        SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1 sync = new SyncGetPCMAutoDetectAvOpenhomeOrgResamplerConfig1(this);
        beginGetPCMAutoDetect(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getPCMAutoDetect();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetPCMAutoDetect}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetPCMAutoDetect(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetPCMAutoDetect, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetPCMAutoDetect.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetPCMAutoDetect} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetPCMAutoDetect} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetPCMAutoDetect(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean pCMAutoDetect = Invocation.getOutputBool(aAsyncHandle, index++);
        return pCMAutoDetect;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetDSDtoPCM(boolean aDSDtoPCM)
    {
        SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1 sync = new SyncSetDSDtoPCMAvOpenhomeOrgResamplerConfig1(this);
        beginSetDSDtoPCM(aDSDtoPCM, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetDSDtoPCM}.
     * 
     * @param aDSDtoPCM
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetDSDtoPCM(boolean aDSDtoPCM, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetDSDtoPCM, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetDSDtoPCM.getInputParameter(inIndex++), aDSDtoPCM));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetDSDtoPCM} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetDSDtoPCM} method.
     */
    public void endSetDSDtoPCM(long aAsyncHandle)
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
    public boolean syncGetDSDtoPCM()
    {
        SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1 sync = new SyncGetDSDtoPCMAvOpenhomeOrgResamplerConfig1(this);
        beginGetDSDtoPCM(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getDSDtoPCM();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDSDtoPCM}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDSDtoPCM(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDSDtoPCM, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetDSDtoPCM.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDSDtoPCM} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDSDtoPCM} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetDSDtoPCM(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean dSDtoPCM = Invocation.getOutputBool(aAsyncHandle, index++);
        return dSDtoPCM;
    }
        
    /**
     * Set a delegate to be run when the CurrentAction state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgResamplerConfig1 instance will not overlap.
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
            iActionSetResamplerConfig.destroy();
            iActionGetResamplerConfig.destroy();
            iActionSetPCMAutoDetect.destroy();
            iActionGetPCMAutoDetect.destroy();
            iActionSetDSDtoPCM.destroy();
            iActionGetDSDtoPCM.destroy();
            iCurrentAction.destroy();
        }
    }
}

