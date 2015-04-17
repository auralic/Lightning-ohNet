package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgMessageCenter1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgMessageCenter1 extends ICpProxy
{
    public GetMessage syncGetMessage();
    public void beginGetMessage(ICpProxyListener aCallback);
    public GetMessage endGetMessage(long aAsyncHandle);
    public void setPropertyMessageChanged(IPropertyChangeListener aMessageChanged);
    public String getPropertyMessage();
    public void setPropertyMessageIDChanged(IPropertyChangeListener aMessageIDChanged);
    public long getPropertyMessageID();
}

class SyncGetMessageAvOpenhomeOrgMessageCenter1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgMessageCenter1 iService;
    private String iMessage;
    private long iMessageID;

    public SyncGetMessageAvOpenhomeOrgMessageCenter1(CpProxyAvOpenhomeOrgMessageCenter1 aProxy)
    {
        iService = aProxy;
    }
    public String getMessage()
    {
        return iMessage;
    }
    public long getMessageID()
    {
        return iMessageID;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetMessage result = iService.endGetMessage(aAsyncHandle);
        
        iMessage = result.getMessage();
        iMessageID = result.getMessageID();
    }
}

/**
 * Proxy for the av.openhome.org:MessageCenter:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgMessageCenter1 extends CpProxy implements ICpProxyAvOpenhomeOrgMessageCenter1
{

    public class GetMessage
    {
        private String iMessage;
        private long iMessageID;

        public GetMessage(
            String aMessage,
            long aMessageID
        )
        {
            iMessage = aMessage;
            iMessageID = aMessageID;
        }
        public String getMessage()
        {
            return iMessage;
        }
        public long getMessageID()
        {
            return iMessageID;
        }
    }

    private Action iActionGetMessage;
    private PropertyString iMessage;
    private PropertyUint iMessageID;
    private IPropertyChangeListener iMessageChanged;
    private IPropertyChangeListener iMessageIDChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgMessageCenter1(CpDevice aDevice)
    {
        super("av-openhome-org", "MessageCenter", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetMessage = new Action("GetMessage");
        param = new ParameterString("Message", allowedValues);
        iActionGetMessage.addOutputParameter(param);
        param = new ParameterUint("MessageID");
        iActionGetMessage.addOutputParameter(param);

        iMessageChanged = new PropertyChangeListener();
        iMessage = new PropertyString("Message",
            new PropertyChangeListener() {
                public void notifyChange() {
                    messagePropertyChanged();
                }
            }
        );
        addProperty(iMessage);
        iMessageIDChanged = new PropertyChangeListener();
        iMessageID = new PropertyUint("MessageID",
            new PropertyChangeListener() {
                public void notifyChange() {
                    messageIDPropertyChanged();
                }
            }
        );
        addProperty(iMessageID);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetMessage syncGetMessage()
    {
        SyncGetMessageAvOpenhomeOrgMessageCenter1 sync = new SyncGetMessageAvOpenhomeOrgMessageCenter1(this);
        beginGetMessage(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetMessage(
            sync.getMessage(),
            sync.getMessageID()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetMessage}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetMessage(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetMessage, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetMessage.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionGetMessage.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetMessage} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetMessage} method.
     * @return the result of the previously invoked action.
     */
    public GetMessage endGetMessage(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String message = Invocation.getOutputString(aAsyncHandle, index++);
        long messageID = Invocation.getOutputUint(aAsyncHandle, index++);
        return new GetMessage(
            message,
            messageID
        );
    }
        
    /**
     * Set a delegate to be run when the Message state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgMessageCenter1 instance will not overlap.
     *
     * @param aMessageChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyMessageChanged(IPropertyChangeListener aMessageChanged)
    {
        synchronized (iPropertyLock)
        {
            iMessageChanged = aMessageChanged;
        }
    }

    private void messagePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iMessageChanged);
        }
    }
    /**
     * Set a delegate to be run when the MessageID state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgMessageCenter1 instance will not overlap.
     *
     * @param aMessageIDChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyMessageIDChanged(IPropertyChangeListener aMessageIDChanged)
    {
        synchronized (iPropertyLock)
        {
            iMessageIDChanged = aMessageIDChanged;
        }
    }

    private void messageIDPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iMessageIDChanged);
        }
    }

    /**
     * Query the value of the Message property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Message property.
     */
    public String getPropertyMessage()
    {
        propertyReadLock();
        String val = iMessage.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the MessageID property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the MessageID property.
     */
    public long getPropertyMessageID()
    {
        propertyReadLock();
        long val = iMessageID.getValue();
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
            iActionGetMessage.destroy();
            iMessage.destroy();
            iMessageID.destroy();
        }
    }
}

