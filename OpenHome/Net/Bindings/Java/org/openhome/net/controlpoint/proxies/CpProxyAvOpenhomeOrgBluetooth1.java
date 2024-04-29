package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgBluetooth1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgBluetooth1 extends ICpProxy
{
    public void syncPlay();
    public void beginPlay(ICpProxyListener aCallback);
    public void endPlay(long aAsyncHandle);
    public void syncPause();
    public void beginPause(ICpProxyListener aCallback);
    public void endPause(long aAsyncHandle);
    public void syncStop();
    public void beginStop(ICpProxyListener aCallback);
    public void endStop(long aAsyncHandle);
    public void syncNext();
    public void beginNext(ICpProxyListener aCallback);
    public void endNext(long aAsyncHandle);
    public void syncPrevious();
    public void beginPrevious(ICpProxyListener aCallback);
    public void endPrevious(long aAsyncHandle);
    public void syncSetRepeat(boolean aValue);
    public void beginSetRepeat(boolean aValue, ICpProxyListener aCallback);
    public void endSetRepeat(long aAsyncHandle);
    public boolean syncRepeat();
    public void beginRepeat(ICpProxyListener aCallback);
    public boolean endRepeat(long aAsyncHandle);
    public void syncSetRepeatOne(boolean aValue);
    public void beginSetRepeatOne(boolean aValue, ICpProxyListener aCallback);
    public void endSetRepeatOne(long aAsyncHandle);
    public boolean syncRepeatOne();
    public void beginRepeatOne(ICpProxyListener aCallback);
    public boolean endRepeatOne(long aAsyncHandle);
    public void syncSetShuffle(boolean aValue);
    public void beginSetShuffle(boolean aValue, ICpProxyListener aCallback);
    public void endSetShuffle(long aAsyncHandle);
    public boolean syncShuffle();
    public void beginShuffle(ICpProxyListener aCallback);
    public boolean endShuffle(long aAsyncHandle);
    public String syncTransportState();
    public void beginTransportState(ICpProxyListener aCallback);
    public String endTransportState(long aAsyncHandle);
    public void setPropertyTransportStateChanged(IPropertyChangeListener aTransportStateChanged);
    public String getPropertyTransportState();
    public void setPropertyRepeatChanged(IPropertyChangeListener aRepeatChanged);
    public boolean getPropertyRepeat();
    public void setPropertyRepeatOneChanged(IPropertyChangeListener aRepeatOneChanged);
    public boolean getPropertyRepeatOne();
    public void setPropertyShuffleChanged(IPropertyChangeListener aShuffleChanged);
    public boolean getPropertyShuffle();
}

class SyncPlayAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;

    public SyncPlayAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPlay(aAsyncHandle);
        
    }
}

class SyncPauseAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;

    public SyncPauseAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPause(aAsyncHandle);
        
    }
}

class SyncStopAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;

    public SyncStopAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endStop(aAsyncHandle);
        
    }
}

class SyncNextAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;

    public SyncNextAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endNext(aAsyncHandle);
        
    }
}

class SyncPreviousAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;

    public SyncPreviousAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPrevious(aAsyncHandle);
        
    }
}

class SyncSetRepeatAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;

    public SyncSetRepeatAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetRepeat(aAsyncHandle);
        
    }
}

class SyncRepeatAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;
    private boolean iValue;

    public SyncRepeatAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getValue()
    {
        return iValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endRepeat(aAsyncHandle);
        
        iValue = result;
    }
}

class SyncSetRepeatOneAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;

    public SyncSetRepeatOneAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetRepeatOne(aAsyncHandle);
        
    }
}

class SyncRepeatOneAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;
    private boolean iValue;

    public SyncRepeatOneAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getValue()
    {
        return iValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endRepeatOne(aAsyncHandle);
        
        iValue = result;
    }
}

class SyncSetShuffleAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;

    public SyncSetShuffleAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetShuffle(aAsyncHandle);
        
    }
}

class SyncShuffleAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;
    private boolean iValue;

    public SyncShuffleAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getValue()
    {
        return iValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endShuffle(aAsyncHandle);
        
        iValue = result;
    }
}

class SyncTransportStateAvOpenhomeOrgBluetooth1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgBluetooth1 iService;
    private String iValue;

    public SyncTransportStateAvOpenhomeOrgBluetooth1(CpProxyAvOpenhomeOrgBluetooth1 aProxy)
    {
        iService = aProxy;
    }
    public String getValue()
    {
        return iValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endTransportState(aAsyncHandle);
        
        iValue = result;
    }
}

/**
 * Proxy for the av.openhome.org:Bluetooth:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgBluetooth1 extends CpProxy implements ICpProxyAvOpenhomeOrgBluetooth1
{

    private Action iActionPlay;
    private Action iActionPause;
    private Action iActionStop;
    private Action iActionNext;
    private Action iActionPrevious;
    private Action iActionSetRepeat;
    private Action iActionRepeat;
    private Action iActionSetRepeatOne;
    private Action iActionRepeatOne;
    private Action iActionSetShuffle;
    private Action iActionShuffle;
    private Action iActionTransportState;
    private PropertyString iTransportState;
    private PropertyBool iRepeat;
    private PropertyBool iRepeatOne;
    private PropertyBool iShuffle;
    private IPropertyChangeListener iTransportStateChanged;
    private IPropertyChangeListener iRepeatChanged;
    private IPropertyChangeListener iRepeatOneChanged;
    private IPropertyChangeListener iShuffleChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgBluetooth1(CpDevice aDevice)
    {
        super("av-openhome-org", "Bluetooth", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionPlay = new Action("Play");

        iActionPause = new Action("Pause");

        iActionStop = new Action("Stop");

        iActionNext = new Action("Next");

        iActionPrevious = new Action("Previous");

        iActionSetRepeat = new Action("SetRepeat");
        param = new ParameterBool("Value");
        iActionSetRepeat.addInputParameter(param);

        iActionRepeat = new Action("Repeat");
        param = new ParameterBool("Value");
        iActionRepeat.addOutputParameter(param);

        iActionSetRepeatOne = new Action("SetRepeatOne");
        param = new ParameterBool("Value");
        iActionSetRepeatOne.addInputParameter(param);

        iActionRepeatOne = new Action("RepeatOne");
        param = new ParameterBool("Value");
        iActionRepeatOne.addOutputParameter(param);

        iActionSetShuffle = new Action("SetShuffle");
        param = new ParameterBool("Value");
        iActionSetShuffle.addInputParameter(param);

        iActionShuffle = new Action("Shuffle");
        param = new ParameterBool("Value");
        iActionShuffle.addOutputParameter(param);

        iActionTransportState = new Action("TransportState");
        allowedValues.add("Playing");
        allowedValues.add("Paused");
        allowedValues.add("Stopped");
        allowedValues.add("Buffering");
        param = new ParameterString("Value", allowedValues);
        iActionTransportState.addOutputParameter(param);
        allowedValues.clear();

        iTransportStateChanged = new PropertyChangeListener();
        iTransportState = new PropertyString("TransportState",
            new PropertyChangeListener() {
                public void notifyChange() {
                    transportStatePropertyChanged();
                }
            }
        );
        addProperty(iTransportState);
        iRepeatChanged = new PropertyChangeListener();
        iRepeat = new PropertyBool("Repeat",
            new PropertyChangeListener() {
                public void notifyChange() {
                    repeatPropertyChanged();
                }
            }
        );
        addProperty(iRepeat);
        iRepeatOneChanged = new PropertyChangeListener();
        iRepeatOne = new PropertyBool("RepeatOne",
            new PropertyChangeListener() {
                public void notifyChange() {
                    repeatOnePropertyChanged();
                }
            }
        );
        addProperty(iRepeatOne);
        iShuffleChanged = new PropertyChangeListener();
        iShuffle = new PropertyBool("Shuffle",
            new PropertyChangeListener() {
                public void notifyChange() {
                    shufflePropertyChanged();
                }
            }
        );
        addProperty(iShuffle);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncPlay()
    {
        SyncPlayAvOpenhomeOrgBluetooth1 sync = new SyncPlayAvOpenhomeOrgBluetooth1(this);
        beginPlay(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPlay}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPlay(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPlay, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPlay} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPlay} method.
     */
    public void endPlay(long aAsyncHandle)
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
     */
    public void syncPause()
    {
        SyncPauseAvOpenhomeOrgBluetooth1 sync = new SyncPauseAvOpenhomeOrgBluetooth1(this);
        beginPause(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPause}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPause(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPause, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPause} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPause} method.
     */
    public void endPause(long aAsyncHandle)
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
     */
    public void syncStop()
    {
        SyncStopAvOpenhomeOrgBluetooth1 sync = new SyncStopAvOpenhomeOrgBluetooth1(this);
        beginStop(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endStop}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginStop(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionStop, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginStop} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginStop} method.
     */
    public void endStop(long aAsyncHandle)
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
     */
    public void syncNext()
    {
        SyncNextAvOpenhomeOrgBluetooth1 sync = new SyncNextAvOpenhomeOrgBluetooth1(this);
        beginNext(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endNext}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginNext(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionNext, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginNext} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginNext} method.
     */
    public void endNext(long aAsyncHandle)
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
     */
    public void syncPrevious()
    {
        SyncPreviousAvOpenhomeOrgBluetooth1 sync = new SyncPreviousAvOpenhomeOrgBluetooth1(this);
        beginPrevious(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPrevious}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPrevious(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPrevious, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPrevious} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPrevious} method.
     */
    public void endPrevious(long aAsyncHandle)
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
     */
    public void syncSetRepeat(boolean aValue)
    {
        SyncSetRepeatAvOpenhomeOrgBluetooth1 sync = new SyncSetRepeatAvOpenhomeOrgBluetooth1(this);
        beginSetRepeat(aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetRepeat}.
     * 
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetRepeat(boolean aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetRepeat, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetRepeat.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetRepeat} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetRepeat} method.
     */
    public void endSetRepeat(long aAsyncHandle)
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
    public boolean syncRepeat()
    {
        SyncRepeatAvOpenhomeOrgBluetooth1 sync = new SyncRepeatAvOpenhomeOrgBluetooth1(this);
        beginRepeat(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endRepeat}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginRepeat(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionRepeat, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionRepeat.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginRepeat} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginRepeat} method.
     * @return the result of the previously invoked action.
     */
    public boolean endRepeat(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean value = Invocation.getOutputBool(aAsyncHandle, index++);
        return value;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetRepeatOne(boolean aValue)
    {
        SyncSetRepeatOneAvOpenhomeOrgBluetooth1 sync = new SyncSetRepeatOneAvOpenhomeOrgBluetooth1(this);
        beginSetRepeatOne(aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetRepeatOne}.
     * 
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetRepeatOne(boolean aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetRepeatOne, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetRepeatOne.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetRepeatOne} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetRepeatOne} method.
     */
    public void endSetRepeatOne(long aAsyncHandle)
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
    public boolean syncRepeatOne()
    {
        SyncRepeatOneAvOpenhomeOrgBluetooth1 sync = new SyncRepeatOneAvOpenhomeOrgBluetooth1(this);
        beginRepeatOne(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endRepeatOne}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginRepeatOne(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionRepeatOne, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionRepeatOne.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginRepeatOne} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginRepeatOne} method.
     * @return the result of the previously invoked action.
     */
    public boolean endRepeatOne(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean value = Invocation.getOutputBool(aAsyncHandle, index++);
        return value;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetShuffle(boolean aValue)
    {
        SyncSetShuffleAvOpenhomeOrgBluetooth1 sync = new SyncSetShuffleAvOpenhomeOrgBluetooth1(this);
        beginSetShuffle(aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetShuffle}.
     * 
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetShuffle(boolean aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetShuffle, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetShuffle.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetShuffle} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetShuffle} method.
     */
    public void endSetShuffle(long aAsyncHandle)
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
    public boolean syncShuffle()
    {
        SyncShuffleAvOpenhomeOrgBluetooth1 sync = new SyncShuffleAvOpenhomeOrgBluetooth1(this);
        beginShuffle(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endShuffle}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginShuffle(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionShuffle, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionShuffle.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginShuffle} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginShuffle} method.
     * @return the result of the previously invoked action.
     */
    public boolean endShuffle(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean value = Invocation.getOutputBool(aAsyncHandle, index++);
        return value;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncTransportState()
    {
        SyncTransportStateAvOpenhomeOrgBluetooth1 sync = new SyncTransportStateAvOpenhomeOrgBluetooth1(this);
        beginTransportState(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endTransportState}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginTransportState(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionTransportState, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionTransportState.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginTransportState} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginTransportState} method.
     * @return the result of the previously invoked action.
     */
    public String endTransportState(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String value = Invocation.getOutputString(aAsyncHandle, index++);
        return value;
    }
        
    /**
     * Set a delegate to be run when the TransportState state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgBluetooth1 instance will not overlap.
     *
     * @param aTransportStateChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyTransportStateChanged(IPropertyChangeListener aTransportStateChanged)
    {
        synchronized (iPropertyLock)
        {
            iTransportStateChanged = aTransportStateChanged;
        }
    }

    private void transportStatePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iTransportStateChanged);
        }
    }
    /**
     * Set a delegate to be run when the Repeat state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgBluetooth1 instance will not overlap.
     *
     * @param aRepeatChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyRepeatChanged(IPropertyChangeListener aRepeatChanged)
    {
        synchronized (iPropertyLock)
        {
            iRepeatChanged = aRepeatChanged;
        }
    }

    private void repeatPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iRepeatChanged);
        }
    }
    /**
     * Set a delegate to be run when the RepeatOne state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgBluetooth1 instance will not overlap.
     *
     * @param aRepeatOneChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyRepeatOneChanged(IPropertyChangeListener aRepeatOneChanged)
    {
        synchronized (iPropertyLock)
        {
            iRepeatOneChanged = aRepeatOneChanged;
        }
    }

    private void repeatOnePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iRepeatOneChanged);
        }
    }
    /**
     * Set a delegate to be run when the Shuffle state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgBluetooth1 instance will not overlap.
     *
     * @param aShuffleChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyShuffleChanged(IPropertyChangeListener aShuffleChanged)
    {
        synchronized (iPropertyLock)
        {
            iShuffleChanged = aShuffleChanged;
        }
    }

    private void shufflePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iShuffleChanged);
        }
    }

    /**
     * Query the value of the TransportState property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the TransportState property.
     */
    public String getPropertyTransportState()
    {
        propertyReadLock();
        String val = iTransportState.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Repeat property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Repeat property.
     */
    public boolean getPropertyRepeat()
    {
        propertyReadLock();
        boolean val = iRepeat.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the RepeatOne property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the RepeatOne property.
     */
    public boolean getPropertyRepeatOne()
    {
        propertyReadLock();
        boolean val = iRepeatOne.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Shuffle property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Shuffle property.
     */
    public boolean getPropertyShuffle()
    {
        propertyReadLock();
        boolean val = iShuffle.getValue();
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
            iActionPlay.destroy();
            iActionPause.destroy();
            iActionStop.destroy();
            iActionNext.destroy();
            iActionPrevious.destroy();
            iActionSetRepeat.destroy();
            iActionRepeat.destroy();
            iActionSetRepeatOne.destroy();
            iActionRepeatOne.destroy();
            iActionSetShuffle.destroy();
            iActionShuffle.destroy();
            iActionTransportState.destroy();
            iTransportState.destroy();
            iRepeat.destroy();
            iRepeatOne.destroy();
            iShuffle.destroy();
        }
    }
}

