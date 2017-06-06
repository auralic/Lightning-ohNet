package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgDACConfig1
{

    /**
     * Set the value of the CurrentAction property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyCurrentAction(long aValue);

    /**
     * Get a copy of the value of the CurrentAction property
     *
     * @return value of the CurrentAction property.
     */
    public long getPropertyCurrentAction();
        
}

/**
 * Provider for the av.openhome.org:DACConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgDACConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgDACConfig1
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

    private IDvInvocationListener iDelegateGetFilterMode;
    private IDvInvocationListener iDelegateSetFilterMode;
    private IDvInvocationListener iDelegateGetDACPhase;
    private IDvInvocationListener iDelegateSetDACPhase;
    private IDvInvocationListener iDelegateGetDACBalance;
    private IDvInvocationListener iDelegateSetDACBalance;
    private IDvInvocationListener iDelegateGetWaitingTime;
    private IDvInvocationListener iDelegateSetWaitingTime;
    private PropertyUint iPropertyCurrentAction;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgDACConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "DACConfig", 1);
    }

    /**
     * Enable the CurrentAction property.
     */
    public void enablePropertyCurrentAction()
    {
        iPropertyCurrentAction = new PropertyUint(new ParameterUint("CurrentAction"));
        addProperty(iPropertyCurrentAction);
    }

    /**
     * Set the value of the CurrentAction property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyCurrentAction(long aValue)
    {
        return setPropertyUint(iPropertyCurrentAction, aValue);
    }

    /**
     * Get a copy of the value of the CurrentAction property
     *
     * @return  value of the CurrentAction property.
     */
    public long getPropertyCurrentAction()
    {
        return iPropertyCurrentAction.getValue();
    }

    /**
     * Signal that the action GetFilterMode is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetFilterMode must be overridden if this is called.
     */      
    protected void enableActionGetFilterMode()
    {
        Action action = new Action("GetFilterMode");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("FilterMode", allowedValues));
        action.addOutputParameter(new ParameterString("FilterModeList", allowedValues));
        iDelegateGetFilterMode = new DoGetFilterMode();
        enableAction(action, iDelegateGetFilterMode);
    }

    /**
     * Signal that the action SetFilterMode is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetFilterMode must be overridden if this is called.
     */      
    protected void enableActionSetFilterMode()
    {
        Action action = new Action("SetFilterMode");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("FilterMode", allowedValues));
        iDelegateSetFilterMode = new DoSetFilterMode();
        enableAction(action, iDelegateSetFilterMode);
    }

    /**
     * Signal that the action GetDACPhase is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetDACPhase must be overridden if this is called.
     */      
    protected void enableActionGetDACPhase()
    {
        Action action = new Action("GetDACPhase");
        action.addOutputParameter(new ParameterUint("Phase"));
        iDelegateGetDACPhase = new DoGetDACPhase();
        enableAction(action, iDelegateGetDACPhase);
    }

    /**
     * Signal that the action SetDACPhase is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetDACPhase must be overridden if this is called.
     */      
    protected void enableActionSetDACPhase()
    {
        Action action = new Action("SetDACPhase");
        action.addInputParameter(new ParameterUint("Phase"));
        iDelegateSetDACPhase = new DoSetDACPhase();
        enableAction(action, iDelegateSetDACPhase);
    }

    /**
     * Signal that the action GetDACBalance is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetDACBalance must be overridden if this is called.
     */      
    protected void enableActionGetDACBalance()
    {
        Action action = new Action("GetDACBalance");
        action.addOutputParameter(new ParameterUint("Balance"));
        iDelegateGetDACBalance = new DoGetDACBalance();
        enableAction(action, iDelegateGetDACBalance);
    }

    /**
     * Signal that the action SetDACBalance is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetDACBalance must be overridden if this is called.
     */      
    protected void enableActionSetDACBalance()
    {
        Action action = new Action("SetDACBalance");
        action.addInputParameter(new ParameterUint("Balance"));
        iDelegateSetDACBalance = new DoSetDACBalance();
        enableAction(action, iDelegateSetDACBalance);
    }

    /**
     * Signal that the action GetWaitingTime is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetWaitingTime must be overridden if this is called.
     */      
    protected void enableActionGetWaitingTime()
    {
        Action action = new Action("GetWaitingTime");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("WaitingTime", allowedValues));
        iDelegateGetWaitingTime = new DoGetWaitingTime();
        enableAction(action, iDelegateGetWaitingTime);
    }

    /**
     * Signal that the action SetWaitingTime is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetWaitingTime must be overridden if this is called.
     */      
    protected void enableActionSetWaitingTime()
    {
        Action action = new Action("SetWaitingTime");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("WaitingTime", allowedValues));
        iDelegateSetWaitingTime = new DoSetWaitingTime();
        enableAction(action, iDelegateSetWaitingTime);
    }

    /**
     * GetFilterMode action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetFilterMode action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetFilterMode} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetFilterMode getFilterMode(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetFilterMode action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetFilterMode action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetFilterMode} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aFilterMode
     */
    protected void setFilterMode(IDvInvocation aInvocation, String aFilterMode)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetDACPhase action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetDACPhase action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetDACPhase} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long getDACPhase(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetDACPhase action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetDACPhase action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetDACPhase} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aPhase
     */
    protected void setDACPhase(IDvInvocation aInvocation, long aPhase)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetDACBalance action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetDACBalance action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetDACBalance} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long getDACBalance(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetDACBalance action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetDACBalance action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetDACBalance} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aBalance
     */
    protected void setDACBalance(IDvInvocation aInvocation, long aBalance)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetWaitingTime action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetWaitingTime action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetWaitingTime} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getWaitingTime(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetWaitingTime action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetWaitingTime action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetWaitingTime} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aWaitingTime
     */
    protected void setWaitingTime(IDvInvocation aInvocation, String aWaitingTime)
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


    private class DoGetFilterMode implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String filterMode;
            String filterModeList;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetFilterMode outArgs = getFilterMode(invocation);
            filterMode = outArgs.getFilterMode();
            filterModeList = outArgs.getFilterModeList();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetFilterMode");
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
                invocation.writeString("FilterMode", filterMode);
                invocation.writeString("FilterModeList", filterModeList);
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

    private class DoSetFilterMode implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String filterMode;
            try
            {
                invocation.readStart();
                filterMode = invocation.readString("FilterMode");
                invocation.readEnd();
                setFilterMode(invocation, filterMode);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetFilterMode");
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

    private class DoGetDACPhase implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long phase;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 phase = getDACPhase(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetDACPhase");
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
                invocation.writeUint("Phase", phase);
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

    private class DoSetDACPhase implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long phase;
            try
            {
                invocation.readStart();
                phase = invocation.readUint("Phase");
                invocation.readEnd();
                setDACPhase(invocation, phase);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetDACPhase");
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

    private class DoGetDACBalance implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long balance;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 balance = getDACBalance(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetDACBalance");
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
                invocation.writeUint("Balance", balance);
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

    private class DoSetDACBalance implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long balance;
            try
            {
                invocation.readStart();
                balance = invocation.readUint("Balance");
                invocation.readEnd();
                setDACBalance(invocation, balance);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetDACBalance");
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

    private class DoGetWaitingTime implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String waitingTime;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 waitingTime = getWaitingTime(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetWaitingTime");
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
                invocation.writeString("WaitingTime", waitingTime);
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

    private class DoSetWaitingTime implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String waitingTime;
            try
            {
                invocation.readStart();
                waitingTime = invocation.readString("WaitingTime");
                invocation.readEnd();
                setWaitingTime(invocation, waitingTime);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetWaitingTime");
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

