package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgDACConfig1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgDACConfig1 extends ICpProxy
{
    public GetFilterMode syncGetFilterMode();
    public void beginGetFilterMode(ICpProxyListener aCallback);
    public GetFilterMode endGetFilterMode(long aAsyncHandle);
    public void syncSetFilterMode(String aFilterMode);
    public void beginSetFilterMode(String aFilterMode, ICpProxyListener aCallback);
    public void endSetFilterMode(long aAsyncHandle);
    public long syncGetDACPhase();
    public void beginGetDACPhase(ICpProxyListener aCallback);
    public long endGetDACPhase(long aAsyncHandle);
    public void syncSetDACPhase(long aPhase);
    public void beginSetDACPhase(long aPhase, ICpProxyListener aCallback);
    public void endSetDACPhase(long aAsyncHandle);
    public long syncGetDACBalance();
    public void beginGetDACBalance(ICpProxyListener aCallback);
    public long endGetDACBalance(long aAsyncHandle);
    public void syncSetDACBalance(long aBalance);
    public void beginSetDACBalance(long aBalance, ICpProxyListener aCallback);
    public void endSetDACBalance(long aAsyncHandle);
    public String syncGetWaitingTime();
    public void beginGetWaitingTime(ICpProxyListener aCallback);
    public String endGetWaitingTime(long aAsyncHandle);
    public void syncSetWaitingTime(String aWaitingTime);
    public void beginSetWaitingTime(String aWaitingTime, ICpProxyListener aCallback);
    public void endSetWaitingTime(long aAsyncHandle);
    public void setPropertyCurrentActionChanged(IPropertyChangeListener aCurrentActionChanged);
    public long getPropertyCurrentAction();
}

class SyncGetFilterModeAvOpenhomeOrgDACConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDACConfig1 iService;
    private String iFilterMode;
    private String iFilterModeList;

    public SyncGetFilterModeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getFilterMode()
    {
        return iFilterMode;
    }
    public String getFilterModeList()
    {
        return iFilterModeList;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetFilterMode result = iService.endGetFilterMode(aAsyncHandle);
        
        iFilterMode = result.getFilterMode();
        iFilterModeList = result.getFilterModeList();
    }
}

class SyncSetFilterModeAvOpenhomeOrgDACConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDACConfig1 iService;

    public SyncSetFilterModeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetFilterMode(aAsyncHandle);
        
    }
}

class SyncGetDACPhaseAvOpenhomeOrgDACConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDACConfig1 iService;
    private long iPhase;

    public SyncGetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
    {
        iService = aProxy;
    }
    public long getPhase()
    {
        return iPhase;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetDACPhase(aAsyncHandle);
        
        iPhase = result;
    }
}

class SyncSetDACPhaseAvOpenhomeOrgDACConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDACConfig1 iService;

    public SyncSetDACPhaseAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetDACPhase(aAsyncHandle);
        
    }
}

class SyncGetDACBalanceAvOpenhomeOrgDACConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDACConfig1 iService;
    private long iBalance;

    public SyncGetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
    {
        iService = aProxy;
    }
    public long getBalance()
    {
        return iBalance;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endGetDACBalance(aAsyncHandle);
        
        iBalance = result;
    }
}

class SyncSetDACBalanceAvOpenhomeOrgDACConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDACConfig1 iService;

    public SyncSetDACBalanceAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetDACBalance(aAsyncHandle);
        
    }
}

class SyncGetWaitingTimeAvOpenhomeOrgDACConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDACConfig1 iService;
    private String iWaitingTime;

    public SyncGetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
    {
        iService = aProxy;
    }
    public String getWaitingTime()
    {
        return iWaitingTime;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetWaitingTime(aAsyncHandle);
        
        iWaitingTime = result;
    }
}

class SyncSetWaitingTimeAvOpenhomeOrgDACConfig1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgDACConfig1 iService;

    public SyncSetWaitingTimeAvOpenhomeOrgDACConfig1(CpProxyAvOpenhomeOrgDACConfig1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetWaitingTime(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:DACConfig:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgDACConfig1 extends CpProxy implements ICpProxyAvOpenhomeOrgDACConfig1
{

    public class GetFilterMode
    {
        private String iFilterMode;
        private String iFilterModeList;

        public GetFilterMode(
            String aFilterMode,
            String aFilterModeList
        )
        {
            iFilterMode = aFilterMode;
            iFilterModeList = aFilterModeList;
        }
        public String getFilterMode()
        {
            return iFilterMode;
        }
        public String getFilterModeList()
        {
            return iFilterModeList;
        }
    }

    private Action iActionGetFilterMode;
    private Action iActionSetFilterMode;
    private Action iActionGetDACPhase;
    private Action iActionSetDACPhase;
    private Action iActionGetDACBalance;
    private Action iActionSetDACBalance;
    private Action iActionGetWaitingTime;
    private Action iActionSetWaitingTime;
    private PropertyUint iCurrentAction;
    private IPropertyChangeListener iCurrentActionChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgDACConfig1(CpDevice aDevice)
    {
        super("av-openhome-org", "DACConfig", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetFilterMode = new Action("GetFilterMode");
        param = new ParameterString("FilterMode", allowedValues);
        iActionGetFilterMode.addOutputParameter(param);
        param = new ParameterString("FilterModeList", allowedValues);
        iActionGetFilterMode.addOutputParameter(param);

        iActionSetFilterMode = new Action("SetFilterMode");
        param = new ParameterString("FilterMode", allowedValues);
        iActionSetFilterMode.addInputParameter(param);

        iActionGetDACPhase = new Action("GetDACPhase");
        param = new ParameterUint("Phase");
        iActionGetDACPhase.addOutputParameter(param);

        iActionSetDACPhase = new Action("SetDACPhase");
        param = new ParameterUint("Phase");
        iActionSetDACPhase.addInputParameter(param);

        iActionGetDACBalance = new Action("GetDACBalance");
        param = new ParameterUint("Balance");
        iActionGetDACBalance.addOutputParameter(param);

        iActionSetDACBalance = new Action("SetDACBalance");
        param = new ParameterUint("Balance");
        iActionSetDACBalance.addInputParameter(param);

        iActionGetWaitingTime = new Action("GetWaitingTime");
        param = new ParameterString("WaitingTime", allowedValues);
        iActionGetWaitingTime.addOutputParameter(param);

        iActionSetWaitingTime = new Action("SetWaitingTime");
        param = new ParameterString("WaitingTime", allowedValues);
        iActionSetWaitingTime.addInputParameter(param);

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
    public GetFilterMode syncGetFilterMode()
    {
        SyncGetFilterModeAvOpenhomeOrgDACConfig1 sync = new SyncGetFilterModeAvOpenhomeOrgDACConfig1(this);
        beginGetFilterMode(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetFilterMode(
            sync.getFilterMode(),
            sync.getFilterModeList()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetFilterMode}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetFilterMode(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetFilterMode, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetFilterMode.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetFilterMode.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetFilterMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetFilterMode} method.
     * @return the result of the previously invoked action.
     */
    public GetFilterMode endGetFilterMode(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String filterMode = Invocation.getOutputString(aAsyncHandle, index++);
        String filterModeList = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetFilterMode(
            filterMode,
            filterModeList
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetFilterMode(String aFilterMode)
    {
        SyncSetFilterModeAvOpenhomeOrgDACConfig1 sync = new SyncSetFilterModeAvOpenhomeOrgDACConfig1(this);
        beginSetFilterMode(aFilterMode, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetFilterMode}.
     * 
     * @param aFilterMode
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetFilterMode(String aFilterMode, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetFilterMode, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetFilterMode.getInputParameter(inIndex++), aFilterMode));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetFilterMode} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetFilterMode} method.
     */
    public void endSetFilterMode(long aAsyncHandle)
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
    public long syncGetDACPhase()
    {
        SyncGetDACPhaseAvOpenhomeOrgDACConfig1 sync = new SyncGetDACPhaseAvOpenhomeOrgDACConfig1(this);
        beginGetDACPhase(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getPhase();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDACPhase}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDACPhase(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDACPhase, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetDACPhase.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDACPhase} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDACPhase} method.
     * @return the result of the previously invoked action.
     */
    public long endGetDACPhase(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long phase = Invocation.getOutputUint(aAsyncHandle, index++);
        return phase;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetDACPhase(long aPhase)
    {
        SyncSetDACPhaseAvOpenhomeOrgDACConfig1 sync = new SyncSetDACPhaseAvOpenhomeOrgDACConfig1(this);
        beginSetDACPhase(aPhase, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetDACPhase}.
     * 
     * @param aPhase
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetDACPhase(long aPhase, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetDACPhase, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetDACPhase.getInputParameter(inIndex++), aPhase));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetDACPhase} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetDACPhase} method.
     */
    public void endSetDACPhase(long aAsyncHandle)
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
    public long syncGetDACBalance()
    {
        SyncGetDACBalanceAvOpenhomeOrgDACConfig1 sync = new SyncGetDACBalanceAvOpenhomeOrgDACConfig1(this);
        beginGetDACBalance(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getBalance();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetDACBalance}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetDACBalance(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetDACBalance, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetDACBalance.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetDACBalance} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetDACBalance} method.
     * @return the result of the previously invoked action.
     */
    public long endGetDACBalance(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long balance = Invocation.getOutputUint(aAsyncHandle, index++);
        return balance;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetDACBalance(long aBalance)
    {
        SyncSetDACBalanceAvOpenhomeOrgDACConfig1 sync = new SyncSetDACBalanceAvOpenhomeOrgDACConfig1(this);
        beginSetDACBalance(aBalance, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetDACBalance}.
     * 
     * @param aBalance
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetDACBalance(long aBalance, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetDACBalance, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetDACBalance.getInputParameter(inIndex++), aBalance));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetDACBalance} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetDACBalance} method.
     */
    public void endSetDACBalance(long aAsyncHandle)
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
    public String syncGetWaitingTime()
    {
        SyncGetWaitingTimeAvOpenhomeOrgDACConfig1 sync = new SyncGetWaitingTimeAvOpenhomeOrgDACConfig1(this);
        beginGetWaitingTime(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getWaitingTime();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetWaitingTime}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetWaitingTime(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetWaitingTime, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetWaitingTime.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetWaitingTime} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetWaitingTime} method.
     * @return the result of the previously invoked action.
     */
    public String endGetWaitingTime(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String waitingTime = Invocation.getOutputString(aAsyncHandle, index++);
        return waitingTime;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetWaitingTime(String aWaitingTime)
    {
        SyncSetWaitingTimeAvOpenhomeOrgDACConfig1 sync = new SyncSetWaitingTimeAvOpenhomeOrgDACConfig1(this);
        beginSetWaitingTime(aWaitingTime, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetWaitingTime}.
     * 
     * @param aWaitingTime
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetWaitingTime(String aWaitingTime, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetWaitingTime, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetWaitingTime.getInputParameter(inIndex++), aWaitingTime));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetWaitingTime} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetWaitingTime} method.
     */
    public void endSetWaitingTime(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the CurrentAction state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgDACConfig1 instance will not overlap.
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
            iActionGetFilterMode.destroy();
            iActionSetFilterMode.destroy();
            iActionGetDACPhase.destroy();
            iActionSetDACPhase.destroy();
            iActionGetDACBalance.destroy();
            iActionSetDACBalance.destroy();
            iActionGetWaitingTime.destroy();
            iActionSetWaitingTime.destroy();
            iCurrentAction.destroy();
        }
    }
}

