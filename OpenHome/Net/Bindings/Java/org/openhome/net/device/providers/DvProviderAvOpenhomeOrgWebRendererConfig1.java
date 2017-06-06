package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgWebRendererConfig1
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
     * Set the value of the RendererConfig property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyRendererConfig(String aValue);

    /**
     * Get a copy of the value of the RendererConfig property
     *
     * @return value of the RendererConfig property.
     */
    public String getPropertyRendererConfig();

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
 * Provider for the av.openhome.org:WebRendererConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgWebRendererConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgWebRendererConfig1
{

    private IDvInvocationListener iDelegateGetRendererConfig;
    private IDvInvocationListener iDelegateSetRendererConfig;
    private PropertyBool iPropertyAlive;
    private PropertyString iPropertyRendererConfig;
    private PropertyUint iPropertyCurrentAction;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgWebRendererConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "WebRendererConfig", 1);
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
     * Enable the RendererConfig property.
     */
    public void enablePropertyRendererConfig()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyRendererConfig = new PropertyString(new ParameterString("RendererConfig", allowedValues));
        addProperty(iPropertyRendererConfig);
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
     * Set the value of the RendererConfig property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyRendererConfig(String aValue)
    {
        return setPropertyString(iPropertyRendererConfig, aValue);
    }

    /**
     * Get a copy of the value of the RendererConfig property
     *
     * @return  value of the RendererConfig property.
     */
    public String getPropertyRendererConfig()
    {
        return iPropertyRendererConfig.getValue();
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
     * Signal that the action GetRendererConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetRendererConfig must be overridden if this is called.
     */      
    protected void enableActionGetRendererConfig()
    {
        Action action = new Action("GetRendererConfig");
        action.addOutputParameter(new ParameterRelated("RendererConfig", iPropertyRendererConfig));
        iDelegateGetRendererConfig = new DoGetRendererConfig();
        enableAction(action, iDelegateGetRendererConfig);
    }

    /**
     * Signal that the action SetRendererConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetRendererConfig must be overridden if this is called.
     */      
    protected void enableActionSetRendererConfig()
    {
        Action action = new Action("SetRendererConfig");
        action.addInputParameter(new ParameterRelated("RendererConfig", iPropertyRendererConfig));
        iDelegateSetRendererConfig = new DoSetRendererConfig();
        enableAction(action, iDelegateSetRendererConfig);
    }

    /**
     * GetRendererConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetRendererConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetRendererConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getRendererConfig(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetRendererConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetRendererConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetRendererConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aRendererConfig
     */
    protected void setRendererConfig(IDvInvocation aInvocation, String aRendererConfig)
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


    private class DoGetRendererConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String rendererConfig;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 rendererConfig = getRendererConfig(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetRendererConfig");
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
                invocation.writeString("RendererConfig", rendererConfig);
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

    private class DoSetRendererConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String rendererConfig;
            try
            {
                invocation.readStart();
                rendererConfig = invocation.readString("RendererConfig");
                invocation.readEnd();
                setRendererConfig(invocation, rendererConfig);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetRendererConfig");
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

