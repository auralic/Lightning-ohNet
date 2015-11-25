package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgRenderingInfo1
{

    /**
     * Set the value of the Info property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyInfo(String aValue);

    /**
     * Get a copy of the value of the Info property
     *
     * @return value of the Info property.
     */
    public String getPropertyInfo();
        
}

/**
 * Provider for the av.openhome.org:RenderingInfo:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgRenderingInfo1 extends DvProvider implements IDvProviderAvOpenhomeOrgRenderingInfo1
{

    private IDvInvocationListener iDelegateGetEntireInfo;
    private PropertyString iPropertyInfo;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgRenderingInfo1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "RenderingInfo", 1);
    }

    /**
     * Enable the Info property.
     */
    public void enablePropertyInfo()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyInfo = new PropertyString(new ParameterString("Info", allowedValues));
        addProperty(iPropertyInfo);
    }

    /**
     * Set the value of the Info property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyInfo(String aValue)
    {
        return setPropertyString(iPropertyInfo, aValue);
    }

    /**
     * Get a copy of the value of the Info property
     *
     * @return  value of the Info property.
     */
    public String getPropertyInfo()
    {
        return iPropertyInfo.getValue();
    }

    /**
     * Signal that the action GetEntireInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetEntireInfo must be overridden if this is called.
     */      
    protected void enableActionGetEntireInfo()
    {
        Action action = new Action("GetEntireInfo");
        action.addOutputParameter(new ParameterRelated("Info", iPropertyInfo));
        iDelegateGetEntireInfo = new DoGetEntireInfo();
        enableAction(action, iDelegateGetEntireInfo);
    }

    /**
     * GetEntireInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetEntireInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetEntireInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getEntireInfo(IDvInvocation aInvocation)
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


    private class DoGetEntireInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String info;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 info = getEntireInfo(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetEntireInfo");
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
                invocation.writeString("Info", info);
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

