package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgWebClockConfig1
{

    /**
     * Set the value of the Alive property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyAlive(boolean aValue);

    /**
     * Get a copy of the value of the Alive property
     *
     * @return value of the Alive property.
     */
    public boolean getPropertyAlive();

    /**
     * Set the value of the ClockConfig property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyClockConfig(String aValue);

    /**
     * Get a copy of the value of the ClockConfig property
     *
     * @return value of the ClockConfig property.
     */
    public String getPropertyClockConfig();
        
}

/**
 * Provider for the av.openhome.org:WebClockConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgWebClockConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgWebClockConfig1
{

    private IDvInvocationListener iDelegateGetClockConfig;
    private IDvInvocationListener iDelegateSetClockConfig;
    private PropertyBool iPropertyAlive;
    private PropertyString iPropertyClockConfig;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgWebClockConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "WebClockConfig", 1);
    }

    /**
     * Enable the Alive property.
     */
    public void enablePropertyAlive()
    {
        iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
        addProperty(iPropertyAlive);
    }

    /**
     * Enable the ClockConfig property.
     */
    public void enablePropertyClockConfig()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyClockConfig = new PropertyString(new ParameterString("ClockConfig", allowedValues));
        addProperty(iPropertyClockConfig);
    }

    /**
     * Set the value of the Alive property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyAlive(boolean aValue)
    {
        return setPropertyBool(iPropertyAlive, aValue);
    }

    /**
     * Get a copy of the value of the Alive property
     *
     * @return  value of the Alive property.
     */
    public boolean getPropertyAlive()
    {
        return iPropertyAlive.getValue();
    }

    /**
     * Set the value of the ClockConfig property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyClockConfig(String aValue)
    {
        return setPropertyString(iPropertyClockConfig, aValue);
    }

    /**
     * Get a copy of the value of the ClockConfig property
     *
     * @return  value of the ClockConfig property.
     */
    public String getPropertyClockConfig()
    {
        return iPropertyClockConfig.getValue();
    }

    /**
     * Signal that the action GetClockConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetClockConfig must be overridden if this is called.
     */      
    protected void enableActionGetClockConfig()
    {
        Action action = new Action("GetClockConfig");
        action.addOutputParameter(new ParameterRelated("ClockConfig", iPropertyClockConfig));
        iDelegateGetClockConfig = new DoGetClockConfig();
        enableAction(action, iDelegateGetClockConfig);
    }

    /**
     * Signal that the action SetClockConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetClockConfig must be overridden if this is called.
     */      
    protected void enableActionSetClockConfig()
    {
        Action action = new Action("SetClockConfig");
        action.addInputParameter(new ParameterRelated("ClockConfig", iPropertyClockConfig));
        iDelegateSetClockConfig = new DoSetClockConfig();
        enableAction(action, iDelegateSetClockConfig);
    }

    /**
     * GetClockConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetClockConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetClockConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getClockConfig(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetClockConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetClockConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetClockConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aClockConfig
     */
    protected void setClockConfig(IDvInvocation aInvocation, String aClockConfig)
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


    private class DoGetClockConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String clockConfig;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 clockConfig = getClockConfig(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetClockConfig");
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
                invocation.writeString("ClockConfig", clockConfig);
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

    private class DoSetClockConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String clockConfig;
            try
            {
                invocation.readStart();
                clockConfig = invocation.readString("ClockConfig");
                invocation.readEnd();
                setClockConfig(invocation, clockConfig);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetClockConfig");
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

