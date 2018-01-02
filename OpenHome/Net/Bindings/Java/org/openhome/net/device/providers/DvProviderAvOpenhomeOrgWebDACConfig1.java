package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgWebDACConfig1
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
     * Set the value of the DACConfig property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyDACConfig(String aValue);

    /**
     * Get a copy of the value of the DACConfig property
     *
     * @return value of the DACConfig property.
     */
    public String getPropertyDACConfig();

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
 * Provider for the av.openhome.org:WebDACConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgWebDACConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgWebDACConfig1
{

    private IDvInvocationListener iDelegateGetDACConfig;
    private IDvInvocationListener iDelegateSetDACConfig;
    private PropertyBool iPropertyAlive;
    private PropertyString iPropertyDACConfig;
    private PropertyUint iPropertyCurrentAction;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgWebDACConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "WebDACConfig", 1);
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
     * Enable the DACConfig property.
     */
    public void enablePropertyDACConfig()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyDACConfig = new PropertyString(new ParameterString("DACConfig", allowedValues));
        addProperty(iPropertyDACConfig);
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
     * Set the value of the DACConfig property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyDACConfig(String aValue)
    {
        return setPropertyString(iPropertyDACConfig, aValue);
    }

    /**
     * Get a copy of the value of the DACConfig property
     *
     * @return  value of the DACConfig property.
     */
    public String getPropertyDACConfig()
    {
        return iPropertyDACConfig.getValue();
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
     * Signal that the action GetDACConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetDACConfig must be overridden if this is called.
     */      
    protected void enableActionGetDACConfig()
    {
        Action action = new Action("GetDACConfig");
        action.addOutputParameter(new ParameterRelated("DACConfig", iPropertyDACConfig));
        iDelegateGetDACConfig = new DoGetDACConfig();
        enableAction(action, iDelegateGetDACConfig);
    }

    /**
     * Signal that the action SetDACConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetDACConfig must be overridden if this is called.
     */      
    protected void enableActionSetDACConfig()
    {
        Action action = new Action("SetDACConfig");
        action.addInputParameter(new ParameterRelated("DACConfig", iPropertyDACConfig));
        iDelegateSetDACConfig = new DoSetDACConfig();
        enableAction(action, iDelegateSetDACConfig);
    }

    /**
     * GetDACConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetDACConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetDACConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getDACConfig(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetDACConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetDACConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetDACConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aDACConfig
     */
    protected void setDACConfig(IDvInvocation aInvocation, String aDACConfig)
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


    private class DoGetDACConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String dACConfig;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 dACConfig = getDACConfig(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetDACConfig");
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
                invocation.writeString("DACConfig", dACConfig);
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

    private class DoSetDACConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String dACConfig;
            try
            {
                invocation.readStart();
                dACConfig = invocation.readString("DACConfig");
                invocation.readEnd();
                setDACConfig(invocation, dACConfig);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetDACConfig");
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

