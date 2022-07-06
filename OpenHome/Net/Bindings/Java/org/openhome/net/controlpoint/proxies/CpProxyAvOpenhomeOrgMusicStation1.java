package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgMusicStation1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgMusicStation1 extends ICpProxy
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
    public void syncSetThumbRating(String aThumbRating);
    public void beginSetThumbRating(String aThumbRating, ICpProxyListener aCallback);
    public void endSetThumbRating(long aAsyncHandle);
    public void syncSeekSecondAbsolute(long aValue);
    public void beginSeekSecondAbsolute(long aValue, ICpProxyListener aCallback);
    public void endSeekSecondAbsolute(long aAsyncHandle);
    public void syncSeekSecondRelative(int aValue);
    public void beginSeekSecondRelative(int aValue, ICpProxyListener aCallback);
    public void endSeekSecondRelative(long aAsyncHandle);
    public String syncTransportState();
    public void beginTransportState(ICpProxyListener aCallback);
    public String endTransportState(long aAsyncHandle);
    public long syncInsert(long aAfterId, String aUri, String aMetadata);
    public void beginInsert(long aAfterId, String aUri, String aMetadata, ICpProxyListener aCallback);
    public long endInsert(long aAsyncHandle);
    public void setPropertyTransportStateChanged(IPropertyChangeListener aTransportStateChanged);
    public String getPropertyTransportState();
    public void setPropertyThumbRatingChanged(IPropertyChangeListener aThumbRatingChanged);
    public String getPropertyThumbRating();
    public void setPropertyIdChanged(IPropertyChangeListener aIdChanged);
    public long getPropertyId();
}

class SyncPlayAvOpenhomeOrgMusicStation1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgMusicStation1 iService;

    public SyncPlayAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPlay(aAsyncHandle);
        
    }
}

class SyncPauseAvOpenhomeOrgMusicStation1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgMusicStation1 iService;

    public SyncPauseAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPause(aAsyncHandle);
        
    }
}

class SyncStopAvOpenhomeOrgMusicStation1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgMusicStation1 iService;

    public SyncStopAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endStop(aAsyncHandle);
        
    }
}

class SyncNextAvOpenhomeOrgMusicStation1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgMusicStation1 iService;

    public SyncNextAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endNext(aAsyncHandle);
        
    }
}

class SyncPreviousAvOpenhomeOrgMusicStation1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgMusicStation1 iService;

    public SyncPreviousAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPrevious(aAsyncHandle);
        
    }
}

class SyncSetThumbRatingAvOpenhomeOrgMusicStation1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgMusicStation1 iService;

    public SyncSetThumbRatingAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetThumbRating(aAsyncHandle);
        
    }
}

class SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgMusicStation1 iService;

    public SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSeekSecondAbsolute(aAsyncHandle);
        
    }
}

class SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgMusicStation1 iService;

    public SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSeekSecondRelative(aAsyncHandle);
        
    }
}

class SyncTransportStateAvOpenhomeOrgMusicStation1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgMusicStation1 iService;
    private String iValue;

    public SyncTransportStateAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
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

class SyncInsertAvOpenhomeOrgMusicStation1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgMusicStation1 iService;
    private long iNewId;

    public SyncInsertAvOpenhomeOrgMusicStation1(CpProxyAvOpenhomeOrgMusicStation1 aProxy)
    {
        iService = aProxy;
    }
    public long getNewId()
    {
        return iNewId;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endInsert(aAsyncHandle);
        
        iNewId = result;
    }
}

/**
 * Proxy for the av.openhome.org:MusicStation:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgMusicStation1 extends CpProxy implements ICpProxyAvOpenhomeOrgMusicStation1
{

    private Action iActionPlay;
    private Action iActionPause;
    private Action iActionStop;
    private Action iActionNext;
    private Action iActionPrevious;
    private Action iActionSetThumbRating;
    private Action iActionSeekSecondAbsolute;
    private Action iActionSeekSecondRelative;
    private Action iActionTransportState;
    private Action iActionInsert;
    private PropertyString iTransportState;
    private PropertyString iThumbRating;
    private PropertyUint iId;
    private IPropertyChangeListener iTransportStateChanged;
    private IPropertyChangeListener iThumbRatingChanged;
    private IPropertyChangeListener iIdChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgMusicStation1(CpDevice aDevice)
    {
        super("av-openhome-org", "MusicStation", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionPlay = new Action("Play");

        iActionPause = new Action("Pause");

        iActionStop = new Action("Stop");

        iActionNext = new Action("Next");

        iActionPrevious = new Action("Previous");

        iActionSetThumbRating = new Action("SetThumbRating");
        allowedValues.add("thumbs_up");
        allowedValues.add("thumbs_down");
        allowedValues.add("neutral");
        param = new ParameterString("ThumbRating", allowedValues);
        iActionSetThumbRating.addInputParameter(param);
        allowedValues.clear();

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

        iActionInsert = new Action("Insert");
        param = new ParameterUint("AfterId");
        iActionInsert.addInputParameter(param);
        param = new ParameterString("Uri", allowedValues);
        iActionInsert.addInputParameter(param);
        param = new ParameterString("Metadata", allowedValues);
        iActionInsert.addInputParameter(param);
        param = new ParameterUint("NewId");
        iActionInsert.addOutputParameter(param);

        iTransportStateChanged = new PropertyChangeListener();
        iTransportState = new PropertyString("TransportState",
            new PropertyChangeListener() {
                public void notifyChange() {
                    transportStatePropertyChanged();
                }
            }
        );
        addProperty(iTransportState);
        iThumbRatingChanged = new PropertyChangeListener();
        iThumbRating = new PropertyString("ThumbRating",
            new PropertyChangeListener() {
                public void notifyChange() {
                    thumbRatingPropertyChanged();
                }
            }
        );
        addProperty(iThumbRating);
        iIdChanged = new PropertyChangeListener();
        iId = new PropertyUint("Id",
            new PropertyChangeListener() {
                public void notifyChange() {
                    idPropertyChanged();
                }
            }
        );
        addProperty(iId);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncPlay()
    {
        SyncPlayAvOpenhomeOrgMusicStation1 sync = new SyncPlayAvOpenhomeOrgMusicStation1(this);
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
        SyncPauseAvOpenhomeOrgMusicStation1 sync = new SyncPauseAvOpenhomeOrgMusicStation1(this);
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
        SyncStopAvOpenhomeOrgMusicStation1 sync = new SyncStopAvOpenhomeOrgMusicStation1(this);
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
        SyncNextAvOpenhomeOrgMusicStation1 sync = new SyncNextAvOpenhomeOrgMusicStation1(this);
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
        SyncPreviousAvOpenhomeOrgMusicStation1 sync = new SyncPreviousAvOpenhomeOrgMusicStation1(this);
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
    public void syncSetThumbRating(String aThumbRating)
    {
        SyncSetThumbRatingAvOpenhomeOrgMusicStation1 sync = new SyncSetThumbRatingAvOpenhomeOrgMusicStation1(this);
        beginSetThumbRating(aThumbRating, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetThumbRating}.
     * 
     * @param aThumbRating
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetThumbRating(String aThumbRating, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetThumbRating, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetThumbRating.getInputParameter(inIndex++), aThumbRating));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetThumbRating} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetThumbRating} method.
     */
    public void endSetThumbRating(long aAsyncHandle)
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
    public void syncSeekSecondAbsolute(long aValue)
    {
        SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1 sync = new SyncSeekSecondAbsoluteAvOpenhomeOrgMusicStation1(this);
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
        SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1 sync = new SyncSeekSecondRelativeAvOpenhomeOrgMusicStation1(this);
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
        SyncTransportStateAvOpenhomeOrgMusicStation1 sync = new SyncTransportStateAvOpenhomeOrgMusicStation1(this);
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
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncInsert(long aAfterId, String aUri, String aMetadata)
    {
        SyncInsertAvOpenhomeOrgMusicStation1 sync = new SyncInsertAvOpenhomeOrgMusicStation1(this);
        beginInsert(aAfterId, aUri, aMetadata, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getNewId();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endInsert}.
     * 
     * @param aAfterId
     * @param aUri
     * @param aMetadata
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginInsert(long aAfterId, String aUri, String aMetadata, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionInsert, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionInsert.getInputParameter(inIndex++), aAfterId));
        invocation.addInput(new ArgumentString((ParameterString)iActionInsert.getInputParameter(inIndex++), aUri));
        invocation.addInput(new ArgumentString((ParameterString)iActionInsert.getInputParameter(inIndex++), aMetadata));
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionInsert.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginInsert} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginInsert} method.
     * @return the result of the previously invoked action.
     */
    public long endInsert(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long newId = Invocation.getOutputUint(aAsyncHandle, index++);
        return newId;
    }
        
    /**
     * Set a delegate to be run when the TransportState state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgMusicStation1 instance will not overlap.
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
     * Set a delegate to be run when the ThumbRating state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgMusicStation1 instance will not overlap.
     *
     * @param aThumbRatingChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyThumbRatingChanged(IPropertyChangeListener aThumbRatingChanged)
    {
        synchronized (iPropertyLock)
        {
            iThumbRatingChanged = aThumbRatingChanged;
        }
    }

    private void thumbRatingPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iThumbRatingChanged);
        }
    }
    /**
     * Set a delegate to be run when the Id state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgMusicStation1 instance will not overlap.
     *
     * @param aIdChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyIdChanged(IPropertyChangeListener aIdChanged)
    {
        synchronized (iPropertyLock)
        {
            iIdChanged = aIdChanged;
        }
    }

    private void idPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iIdChanged);
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
     * Query the value of the ThumbRating property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ThumbRating property.
     */
    public String getPropertyThumbRating()
    {
        propertyReadLock();
        String val = iThumbRating.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Id property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Id property.
     */
    public long getPropertyId()
    {
        propertyReadLock();
        long val = iId.getValue();
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
            iActionSetThumbRating.destroy();
            iActionSeekSecondAbsolute.destroy();
            iActionSeekSecondRelative.destroy();
            iActionTransportState.destroy();
            iActionInsert.destroy();
            iTransportState.destroy();
            iThumbRating.destroy();
            iId.destroy();
        }
    }
}

