package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgWebProcessorConfig1
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
     * Set the value of the ProcessorConfig property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyProcessorConfig(String aValue);

    /**
     * Get a copy of the value of the ProcessorConfig property
     *
     * @return value of the ProcessorConfig property.
     */
    public String getPropertyProcessorConfig();
        
}

/**
 * Provider for the av.openhome.org:WebProcessorConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgWebProcessorConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgWebProcessorConfig1
{

    private IDvInvocationListener iDelegateGetProcessorConfig;
    private IDvInvocationListener iDelegateSetProcessorConfig;
    private PropertyBool iPropertyAlive;
    private PropertyString iPropertyProcessorConfig;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgWebProcessorConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "WebProcessorConfig", 1);
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
     * Enable the ProcessorConfig property.
     */
    public void enablePropertyProcessorConfig()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyProcessorConfig = new PropertyString(new ParameterString("ProcessorConfig", allowedValues));
        addProperty(iPropertyProcessorConfig);
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
     * Set the value of the ProcessorConfig property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyProcessorConfig(String aValue)
    {
        return setPropertyString(iPropertyProcessorConfig, aValue);
    }

    /**
     * Get a copy of the value of the ProcessorConfig property
     *
     * @return  value of the ProcessorConfig property.
     */
    public String getPropertyProcessorConfig()
    {
        return iPropertyProcessorConfig.getValue();
    }

    /**
     * Signal that the action GetProcessorConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetProcessorConfig must be overridden if this is called.
     */      
    protected void enableActionGetProcessorConfig()
    {
        Action action = new Action("GetProcessorConfig");
        action.addOutputParameter(new ParameterRelated("ProcessorConfig", iPropertyProcessorConfig));
        iDelegateGetProcessorConfig = new DoGetProcessorConfig();
        enableAction(action, iDelegateGetProcessorConfig);
    }

    /**
     * Signal that the action SetProcessorConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetProcessorConfig must be overridden if this is called.
     */      
    protected void enableActionSetProcessorConfig()
    {
        Action action = new Action("SetProcessorConfig");
        action.addInputParameter(new ParameterRelated("ProcessorConfig", iPropertyProcessorConfig));
        iDelegateSetProcessorConfig = new DoSetProcessorConfig();
        enableAction(action, iDelegateSetProcessorConfig);
    }

    /**
     * GetProcessorConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetProcessorConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetProcessorConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getProcessorConfig(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetProcessorConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetProcessorConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetProcessorConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aProcessorConfig
     */
    protected void setProcessorConfig(IDvInvocation aInvocation, String aProcessorConfig)
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


    private class DoGetProcessorConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String processorConfig;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 processorConfig = getProcessorConfig(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetProcessorConfig");
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
                invocation.writeString("ProcessorConfig", processorConfig);
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

    private class DoSetProcessorConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String processorConfig;
            try
            {
                invocation.readStart();
                processorConfig = invocation.readString("ProcessorConfig");
                invocation.readEnd();
                setProcessorConfig(invocation, processorConfig);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetProcessorConfig");
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

