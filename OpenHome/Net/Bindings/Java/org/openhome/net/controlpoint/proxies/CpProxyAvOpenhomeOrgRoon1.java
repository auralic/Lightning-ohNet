package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgRoon1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgRoon1 extends ICpProxy
{
    public void syncPlay();
    public void beginPlay(ICpProxyListener aCallback);
    public void endPlay(long aAsyncHandle);
    public void syncPause();
    public void beginPause(ICpProxyListener aCallback);
    public void endPause(long aAsyncHandle);
    public void syncPlayPause();
    public void beginPlayPause(ICpProxyListener aCallback);
    public void endPlayPause(long aAsyncHandle);
    public void syncStop();
    public void beginStop(ICpProxyListener aCallback);
    public void endStop(long aAsyncHandle);
    public void syncNext();
    public void beginNext(ICpProxyListener aCallback);
    public void endNext(long aAsyncHandle);
    public void syncPrevious();
    public void beginPrevious(ICpProxyListener aCallback);
    public void endPrevious(long aAsyncHandle);
    public void syncToggleShuffle();
    public void beginToggleShuffle(ICpProxyListener aCallback);
    public void endToggleShuffle(long aAsyncHandle);
    public void syncToggleLoop();
    public void beginToggleLoop(ICpProxyListener aCallback);
    public void endToggleLoop(long aAsyncHandle);
    public boolean syncRepeat();
    public void beginRepeat(ICpProxyListener aCallback);
    public boolean endRepeat(long aAsyncHandle);
    public boolean syncShuffle();
    public void beginShuffle(ICpProxyListener aCallback);
    public boolean endShuffle(long aAsyncHandle);
    public void syncSeekSecondAbsolute(long aValue);
    public void beginSeekSecondAbsolute(long aValue, ICpProxyListener aCallback);
    public void endSeekSecondAbsolute(long aAsyncHandle);
    public void syncSeekSecondRelative(int aValue);
    public void beginSeekSecondRelative(int aValue, ICpProxyListener aCallback);
    public void endSeekSecondRelative(long aAsyncHandle);
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
    public void setPropertyUpdateCoverChanged(IPropertyChangeListener aUpdateCoverChanged);
    public boolean getPropertyUpdateCover();
}

class SyncPlayAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;

    public SyncPlayAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPlay(aAsyncHandle);
        
    }
}

class SyncPauseAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;

    public SyncPauseAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPause(aAsyncHandle);
        
    }
}

class SyncPlayPauseAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;

    public SyncPlayPauseAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPlayPause(aAsyncHandle);
        
    }
}

class SyncStopAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;

    public SyncStopAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endStop(aAsyncHandle);
        
    }
}

class SyncNextAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;

    public SyncNextAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endNext(aAsyncHandle);
        
    }
}

class SyncPreviousAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;

    public SyncPreviousAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPrevious(aAsyncHandle);
        
    }
}

class SyncToggleShuffleAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;

    public SyncToggleShuffleAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endToggleShuffle(aAsyncHandle);
        
    }
}

class SyncToggleLoopAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;

    public SyncToggleLoopAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endToggleLoop(aAsyncHandle);
        
    }
}

class SyncRepeatAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;
    private boolean iValue;

    public SyncRepeatAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
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

class SyncShuffleAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;
    private boolean iValue;

    public SyncShuffleAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
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

class SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;

    public SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSeekSecondAbsolute(aAsyncHandle);
        
    }
}

class SyncSeekSecondRelativeAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;

    public SyncSeekSecondRelativeAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSeekSecondRelative(aAsyncHandle);
        
    }
}

class SyncTransportStateAvOpenhomeOrgRoon1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgRoon1 iService;
    private String iValue;

    public SyncTransportStateAvOpenhomeOrgRoon1(CpProxyAvOpenhomeOrgRoon1 aProxy)
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
 * Proxy for the av.openhome.org:Roon:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgRoon1 extends CpProxy implements ICpProxyAvOpenhomeOrgRoon1
{

    private Action iActionPlay;
    private Action iActionPause;
    private Action iActionPlayPause;
    private Action iActionStop;
    private Action iActionNext;
    private Action iActionPrevious;
    private Action iActionToggleShuffle;
    private Action iActionToggleLoop;
    private Action iActionRepeat;
    private Action iActionShuffle;
    private Action iActionSeekSecondAbsolute;
    private Action iActionSeekSecondRelative;
    private Action iActionTransportState;
    private PropertyString iTransportState;
    private PropertyBool iRepeat;
    private PropertyBool iRepeatOne;
    private PropertyBool iShuffle;
    private PropertyBool iUpdateCover;
    private IPropertyChangeListener iTransportStateChanged;
    private IPropertyChangeListener iRepeatChanged;
    private IPropertyChangeListener iRepeatOneChanged;
    private IPropertyChangeListener iShuffleChanged;
    private IPropertyChangeListener iUpdateCoverChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgRoon1(CpDevice aDevice)
    {
        super("av-openhome-org", "Roon", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionPlay = new Action("Play");

        iActionPause = new Action("Pause");

        iActionPlayPause = new Action("PlayPause");

        iActionStop = new Action("Stop");

        iActionNext = new Action("Next");

        iActionPrevious = new Action("Previous");

        iActionToggleShuffle = new Action("ToggleShuffle");

        iActionToggleLoop = new Action("ToggleLoop");

        iActionRepeat = new Action("Repeat");
        param = new ParameterBool("Value");
        iActionRepeat.addOutputParameter(param);

        iActionShuffle = new Action("Shuffle");
        param = new ParameterBool("Value");
        iActionShuffle.addOutputParameter(param);

        iActionSeekSecondAbsolute = new Action("SeekSecondAbsolute");
        param = new ParameterUint("Value");
        iActionSeekSecondAbsolute.addInputParameter(param);

        iActionSeekSecondRelative = new Action("SeekSecondRelative");
        param = new ParameterInt("Value");
        iActionSeekSecondRelative.addInputParameter(param);

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
        iUpdateCoverChanged = new PropertyChangeListener();
        iUpdateCover = new PropertyBool("UpdateCover",
            new PropertyChangeListener() {
                public void notifyChange() {
                    updateCoverPropertyChanged();
                }
            }
        );
        addProperty(iUpdateCover);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncPlay()
    {
        SyncPlayAvOpenhomeOrgRoon1 sync = new SyncPlayAvOpenhomeOrgRoon1(this);
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
        SyncPauseAvOpenhomeOrgRoon1 sync = new SyncPauseAvOpenhomeOrgRoon1(this);
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
    public void syncPlayPause()
    {
        SyncPlayPauseAvOpenhomeOrgRoon1 sync = new SyncPlayPauseAvOpenhomeOrgRoon1(this);
        beginPlayPause(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPlayPause}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPlayPause(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPlayPause, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPlayPause} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPlayPause} method.
     */
    public void endPlayPause(long aAsyncHandle)
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
        SyncStopAvOpenhomeOrgRoon1 sync = new SyncStopAvOpenhomeOrgRoon1(this);
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
        SyncNextAvOpenhomeOrgRoon1 sync = new SyncNextAvOpenhomeOrgRoon1(this);
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
        SyncPreviousAvOpenhomeOrgRoon1 sync = new SyncPreviousAvOpenhomeOrgRoon1(this);
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
    public void syncToggleShuffle()
    {
        SyncToggleShuffleAvOpenhomeOrgRoon1 sync = new SyncToggleShuffleAvOpenhomeOrgRoon1(this);
        beginToggleShuffle(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endToggleShuffle}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginToggleShuffle(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionToggleShuffle, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginToggleShuffle} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginToggleShuffle} method.
     */
    public void endToggleShuffle(long aAsyncHandle)
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
    public void syncToggleLoop()
    {
        SyncToggleLoopAvOpenhomeOrgRoon1 sync = new SyncToggleLoopAvOpenhomeOrgRoon1(this);
        beginToggleLoop(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endToggleLoop}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginToggleLoop(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionToggleLoop, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginToggleLoop} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginToggleLoop} method.
     */
    public void endToggleLoop(long aAsyncHandle)
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
        SyncRepeatAvOpenhomeOrgRoon1 sync = new SyncRepeatAvOpenhomeOrgRoon1(this);
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
     *
     * @return the result of the invoked action.
     */
    public boolean syncShuffle()
    {
        SyncShuffleAvOpenhomeOrgRoon1 sync = new SyncShuffleAvOpenhomeOrgRoon1(this);
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
     */
    public void syncSeekSecondAbsolute(long aValue)
    {
        SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1 sync = new SyncSeekSecondAbsoluteAvOpenhomeOrgRoon1(this);
        beginSeekSecondAbsolute(aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSeekSecondAbsolute}.
     * 
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSeekSecondAbsolute(long aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSeekSecondAbsolute, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSeekSecondAbsolute.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSeekSecondAbsolute} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSeekSecondAbsolute} method.
     */
    public void endSeekSecondAbsolute(long aAsyncHandle)
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
    public void syncSeekSecondRelative(int aValue)
    {
        SyncSeekSecondRelativeAvOpenhomeOrgRoon1 sync = new SyncSeekSecondRelativeAvOpenhomeOrgRoon1(this);
        beginSeekSecondRelative(aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSeekSecondRelative}.
     * 
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSeekSecondRelative(int aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSeekSecondRelative, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentInt((ParameterInt)iActionSeekSecondRelative.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSeekSecondRelative} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSeekSecondRelative} method.
     */
    public void endSeekSecondRelative(long aAsyncHandle)
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
    public String syncTransportState()
    {
        SyncTransportStateAvOpenhomeOrgRoon1 sync = new SyncTransportStateAvOpenhomeOrgRoon1(this);
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
     * CpProxyAvOpenhomeOrgRoon1 instance will not overlap.
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
     * CpProxyAvOpenhomeOrgRoon1 instance will not overlap.
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
     * CpProxyAvOpenhomeOrgRoon1 instance will not overlap.
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
     * CpProxyAvOpenhomeOrgRoon1 instance will not overlap.
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
     * Set a delegate to be run when the UpdateCover state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRoon1 instance will not overlap.
     *
     * @param aUpdateCoverChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyUpdateCoverChanged(IPropertyChangeListener aUpdateCoverChanged)
    {
        synchronized (iPropertyLock)
        {
            iUpdateCoverChanged = aUpdateCoverChanged;
        }
    }

    private void updateCoverPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iUpdateCoverChanged);
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
     * Query the value of the UpdateCover property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the UpdateCover property.
     */
    public boolean getPropertyUpdateCover()
    {
        propertyReadLock();
        boolean val = iUpdateCover.getValue();
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
            iActionPlayPause.destroy();
            iActionStop.destroy();
            iActionNext.destroy();
            iActionPrevious.destroy();
            iActionToggleShuffle.destroy();
            iActionToggleLoop.destroy();
            iActionRepeat.destroy();
            iActionShuffle.destroy();
            iActionSeekSecondAbsolute.destroy();
            iActionSeekSecondRelative.destroy();
            iActionTransportState.destroy();
            iTransportState.destroy();
            iRepeat.destroy();
            iRepeatOne.destroy();
            iShuffle.destroy();
            iUpdateCover.destroy();
        }
    }
}

