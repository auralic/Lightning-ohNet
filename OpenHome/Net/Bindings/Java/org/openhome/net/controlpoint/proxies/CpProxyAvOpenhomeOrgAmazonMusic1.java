package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgAmazonMusic1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgAmazonMusic1 extends ICpProxy
{
    public void syncLogIn();
    public void beginLogIn(ICpProxyListener aCallback);
    public void endLogIn(long aAsyncHandle);
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
    public void setPropertyIdChanged(IPropertyChangeListener aIdChanged);
    public long getPropertyId();
}

class SyncLogInAvOpenhomeOrgAmazonMusic1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgAmazonMusic1 iService;

    public SyncLogInAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endLogIn(aAsyncHandle);
        
    }
}

class SyncPlayAvOpenhomeOrgAmazonMusic1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgAmazonMusic1 iService;

    public SyncPlayAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPlay(aAsyncHandle);
        
    }
}

class SyncPauseAvOpenhomeOrgAmazonMusic1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgAmazonMusic1 iService;

    public SyncPauseAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPause(aAsyncHandle);
        
    }
}

class SyncStopAvOpenhomeOrgAmazonMusic1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgAmazonMusic1 iService;

    public SyncStopAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endStop(aAsyncHandle);
        
    }
}

class SyncNextAvOpenhomeOrgAmazonMusic1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgAmazonMusic1 iService;

    public SyncNextAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endNext(aAsyncHandle);
        
    }
}

class SyncPreviousAvOpenhomeOrgAmazonMusic1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgAmazonMusic1 iService;

    public SyncPreviousAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPrevious(aAsyncHandle);
        
    }
}

class SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgAmazonMusic1 iService;

    public SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSeekSecondAbsolute(aAsyncHandle);
        
    }
}

class SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgAmazonMusic1 iService;

    public SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSeekSecondRelative(aAsyncHandle);
        
    }
}

class SyncTransportStateAvOpenhomeOrgAmazonMusic1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgAmazonMusic1 iService;
    private String iValue;

    public SyncTransportStateAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1 aProxy)
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

class SyncInsertAvOpenhomeOrgAmazonMusic1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgAmazonMusic1 iService;
    private long iNewId;

    public SyncInsertAvOpenhomeOrgAmazonMusic1(CpProxyAvOpenhomeOrgAmazonMusic1 aProxy)
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
 * Proxy for the av.openhome.org:AmazonMusic:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgAmazonMusic1 extends CpProxy implements ICpProxyAvOpenhomeOrgAmazonMusic1
{

    private Action iActionLogIn;
    private Action iActionPlay;
    private Action iActionPause;
    private Action iActionStop;
    private Action iActionNext;
    private Action iActionPrevious;
    private Action iActionSeekSecondAbsolute;
    private Action iActionSeekSecondRelative;
    private Action iActionTransportState;
    private Action iActionInsert;
    private PropertyString iTransportState;
    private PropertyUint iId;
    private IPropertyChangeListener iTransportStateChanged;
    private IPropertyChangeListener iIdChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgAmazonMusic1(CpDevice aDevice)
    {
        super("av-openhome-org", "AmazonMusic", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionLogIn = new Action("LogIn");

        iActionPlay = new Action("Play");

        iActionPause = new Action("Pause");

        iActionStop = new Action("Stop");

        iActionNext = new Action("Next");

        iActionPrevious = new Action("Previous");

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
    public void syncLogIn()
    {
        SyncLogInAvOpenhomeOrgAmazonMusic1 sync = new SyncLogInAvOpenhomeOrgAmazonMusic1(this);
        beginLogIn(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endLogIn}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginLogIn(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionLogIn, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginLogIn} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginLogIn} method.
     */
    public void endLogIn(long aAsyncHandle)
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
    public void syncPlay()
    {
        SyncPlayAvOpenhomeOrgAmazonMusic1 sync = new SyncPlayAvOpenhomeOrgAmazonMusic1(this);
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
        SyncPauseAvOpenhomeOrgAmazonMusic1 sync = new SyncPauseAvOpenhomeOrgAmazonMusic1(this);
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
        SyncStopAvOpenhomeOrgAmazonMusic1 sync = new SyncStopAvOpenhomeOrgAmazonMusic1(this);
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
        SyncNextAvOpenhomeOrgAmazonMusic1 sync = new SyncNextAvOpenhomeOrgAmazonMusic1(this);
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
        SyncPreviousAvOpenhomeOrgAmazonMusic1 sync = new SyncPreviousAvOpenhomeOrgAmazonMusic1(this);
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
    public void syncSeekSecondAbsolute(long aValue)
    {
        SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1 sync = new SyncSeekSecondAbsoluteAvOpenhomeOrgAmazonMusic1(this);
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
        SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1 sync = new SyncSeekSecondRelativeAvOpenhomeOrgAmazonMusic1(this);
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
        SyncTransportStateAvOpenhomeOrgAmazonMusic1 sync = new SyncTransportStateAvOpenhomeOrgAmazonMusic1(this);
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
        SyncInsertAvOpenhomeOrgAmazonMusic1 sync = new SyncInsertAvOpenhomeOrgAmazonMusic1(this);
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
     * CpProxyAvOpenhomeOrgAmazonMusic1 instance will not overlap.
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
     * Set a delegate to be run when the Id state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgAmazonMusic1 instance will not overlap.
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
            iActionLogIn.destroy();
            iActionPlay.destroy();
            iActionPause.destroy();
            iActionStop.destroy();
            iActionNext.destroy();
            iActionPrevious.destroy();
            iActionSeekSecondAbsolute.destroy();
            iActionSeekSecondRelative.destroy();
            iActionTransportState.destroy();
            iActionInsert.destroy();
            iTransportState.destroy();
            iId.destroy();
        }
    }
}

