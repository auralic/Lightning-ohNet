package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgMessageCenter1
{

    /**
     * Set the value of the Message property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyMessage(String aValue);

    /**
     * Get a copy of the value of the Message property
     *
     * @return value of the Message property.
     */
    public String getPropertyMessage();

    /**
     * Set the value of the MessageID property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyMessageID(long aValue);

    /**
     * Get a copy of the value of the MessageID property
     *
     * @return value of the MessageID property.
     */
    public long getPropertyMessageID();
        
}

/**
 * Provider for the av.openhome.org:MessageCenter:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgMessageCenter1 extends DvProvider implements IDvProviderAvOpenhomeOrgMessageCenter1
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

    private IDvInvocationListener iDelegateGetMessage;
    private PropertyString iPropertyMessage;
    private PropertyUint iPropertyMessageID;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgMessageCenter1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "MessageCenter", 1);
    }

    /**
     * Enable the Message property.
     */
    public void enablePropertyMessage()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyMessage = new PropertyString(new ParameterString("Message", allowedValues));
        addProperty(iPropertyMessage);
    }

    /**
     * Enable the MessageID property.
     */
    public void enablePropertyMessageID()
    {
        iPropertyMessageID = new PropertyUint(new ParameterUint("MessageID"));
        addProperty(iPropertyMessageID);
    }

    /**
     * Set the value of the Message property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyMessage(String aValue)
    {
        return setPropertyString(iPropertyMessage, aValue);
    }

    /**
     * Get a copy of the value of the Message property
     *
     * @return  value of the Message property.
     */
    public String getPropertyMessage()
    {
        return iPropertyMessage.getValue();
    }

    /**
     * Set the value of the MessageID property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyMessageID(long aValue)
    {
        return setPropertyUint(iPropertyMessageID, aValue);
    }

    /**
     * Get a copy of the value of the MessageID property
     *
     * @return  value of the MessageID property.
     */
    public long getPropertyMessageID()
    {
        return iPropertyMessageID.getValue();
    }

    /**
     * Signal that the action GetMessage is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetMessage must be overridden if this is called.
     */      
    protected void enableActionGetMessage()
    {
        Action action = new Action("GetMessage");
        action.addOutputParameter(new ParameterRelated("Message", iPropertyMessage));
        action.addOutputParameter(new ParameterRelated("MessageID", iPropertyMessageID));
        iDelegateGetMessage = new DoGetMessage();
        enableAction(action, iDelegateGetMessage);
    }

    /**
     * GetMessage action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetMessage action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetMessage} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetMessage getMessage(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Must be called for each class instance.  Must be called before Core.Library.Close().
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            super.dispose();
            iHandle = 0;
        }
    }


    private class DoGetMessage implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String message;
            long messageID;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetMessage outArgs = getMessage(invocation);
            message = outArgs.getMessage();
            messageID = outArgs.getMessageID();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetMessage");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("Message", message);
                invocation.writeUint("MessageID", messageID);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }
}

