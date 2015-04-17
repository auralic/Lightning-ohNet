package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgUSBInfo1
{
        
}

/**
 * Provider for the av.openhome.org:USBInfo:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgUSBInfo1 extends DvProvider implements IDvProviderAvOpenhomeOrgUSBInfo1
{

    public class GetUSBInfo
    {
        private boolean iUSBPlugStatus;
        private String iUSBERRORInfo;
        private String iUSBCapacity;
        private String iUSBFileCount;

        public GetUSBInfo(
            boolean aUSBPlugStatus,
            String aUSBERRORInfo,
            String aUSBCapacity,
            String aUSBFileCount
        )
        {
            iUSBPlugStatus = aUSBPlugStatus;
            iUSBERRORInfo = aUSBERRORInfo;
            iUSBCapacity = aUSBCapacity;
            iUSBFileCount = aUSBFileCount;
        }
        public boolean getUSBPlugStatus()
        {
            return iUSBPlugStatus;
        }
        public String getUSBERRORInfo()
        {
            return iUSBERRORInfo;
        }
        public String getUSBCapacity()
        {
            return iUSBCapacity;
        }
        public String getUSBFileCount()
        {
            return iUSBFileCount;
        }
    }

    private IDvInvocationListener iDelegateGetUSBInfo;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgUSBInfo1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "USBInfo", 1);
    }

    /**
     * Signal that the action GetUSBInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetUSBInfo must be overridden if this is called.
     */      
    protected void enableActionGetUSBInfo()
    {
        Action action = new Action("GetUSBInfo");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterBool("USBPlugStatus"));
        action.addOutputParameter(new ParameterString("USBERRORInfo", allowedValues));
        action.addOutputParameter(new ParameterString("USBCapacity", allowedValues));
        action.addOutputParameter(new ParameterString("USBFileCount", allowedValues));
        iDelegateGetUSBInfo = new DoGetUSBInfo();
        enableAction(action, iDelegateGetUSBInfo);
    }

    /**
     * GetUSBInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetUSBInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetUSBInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetUSBInfo getUSBInfo(IDvInvocation aInvocation)
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


    private class DoGetUSBInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean uSBPlugStatus;
            String uSBERRORInfo;
            String uSBCapacity;
            String uSBFileCount;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetUSBInfo outArgs = getUSBInfo(invocation);
            uSBPlugStatus = outArgs.getUSBPlugStatus();
            uSBERRORInfo = outArgs.getUSBERRORInfo();
            uSBCapacity = outArgs.getUSBCapacity();
            uSBFileCount = outArgs.getUSBFileCount();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetUSBInfo");
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
                invocation.writeBool("USBPlugStatus", uSBPlugStatus);
                invocation.writeString("USBERRORInfo", uSBERRORInfo);
                invocation.writeString("USBCapacity", uSBCapacity);
                invocation.writeString("USBFileCount", uSBFileCount);
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

