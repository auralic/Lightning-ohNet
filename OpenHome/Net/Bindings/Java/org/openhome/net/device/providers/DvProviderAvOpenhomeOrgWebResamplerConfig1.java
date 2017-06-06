package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgWebResamplerConfig1
{

    /**
     * Set the value of the ResamplerConfig property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyResamplerConfig(String aValue);

    /**
     * Get a copy of the value of the ResamplerConfig property
     *
     * @return value of the ResamplerConfig property.
     */
    public String getPropertyResamplerConfig();
        
}

/**
 * Provider for the av.openhome.org:WebResamplerConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgWebResamplerConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgWebResamplerConfig1
{

    private IDvInvocationListener iDelegateGetResamplerConfig;
    private IDvInvocationListener iDelegateSetResamplerConfig;
    private PropertyString iPropertyResamplerConfig;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgWebResamplerConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "WebResamplerConfig", 1);
    }

    /**
     * Enable the ResamplerConfig property.
     */
    public void enablePropertyResamplerConfig()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyResamplerConfig = new PropertyString(new ParameterString("ResamplerConfig", allowedValues));
        addProperty(iPropertyResamplerConfig);
    }

    /**
     * Set the value of the ResamplerConfig property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyResamplerConfig(String aValue)
    {
        return setPropertyString(iPropertyResamplerConfig, aValue);
    }

    /**
     * Get a copy of the value of the ResamplerConfig property
     *
     * @return  value of the ResamplerConfig property.
     */
    public String getPropertyResamplerConfig()
    {
        return iPropertyResamplerConfig.getValue();
    }

    /**
     * Signal that the action GetResamplerConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetResamplerConfig must be overridden if this is called.
     */      
    protected void enableActionGetResamplerConfig()
    {
        Action action = new Action("GetResamplerConfig");
        action.addOutputParameter(new ParameterRelated("ResamplerConfig", iPropertyResamplerConfig));
        iDelegateGetResamplerConfig = new DoGetResamplerConfig();
        enableAction(action, iDelegateGetResamplerConfig);
    }

    /**
     * Signal that the action SetResamplerConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetResamplerConfig must be overridden if this is called.
     */      
    protected void enableActionSetResamplerConfig()
    {
        Action action = new Action("SetResamplerConfig");
        action.addInputParameter(new ParameterRelated("ResamplerConfig", iPropertyResamplerConfig));
        iDelegateSetResamplerConfig = new DoSetResamplerConfig();
        enableAction(action, iDelegateSetResamplerConfig);
    }

    /**
     * GetResamplerConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetResamplerConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetResamplerConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getResamplerConfig(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetResamplerConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetResamplerConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetResamplerConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aResamplerConfig
     */
    protected void setResamplerConfig(IDvInvocation aInvocation, String aResamplerConfig)
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


    private class DoGetResamplerConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String resamplerConfig;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 resamplerConfig = getResamplerConfig(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetResamplerConfig");
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
                invocation.writeString("ResamplerConfig", resamplerConfig);
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

    private class DoSetResamplerConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String resamplerConfig;
            try
            {
                invocation.readStart();
                resamplerConfig = invocation.readString("ResamplerConfig");
                invocation.readEnd();
                setResamplerConfig(invocation, resamplerConfig);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetResamplerConfig");
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

