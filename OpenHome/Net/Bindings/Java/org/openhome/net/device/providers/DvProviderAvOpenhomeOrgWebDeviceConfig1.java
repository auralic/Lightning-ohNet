package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgWebDeviceConfig1
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
     * Set the value of the DeviceConfig property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyDeviceConfig(String aValue);

    /**
     * Get a copy of the value of the DeviceConfig property
     *
     * @return value of the DeviceConfig property.
     */
    public String getPropertyDeviceConfig();

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
 * Provider for the av.openhome.org:WebDeviceConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgWebDeviceConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgWebDeviceConfig1
{

    private IDvInvocationListener iDelegateGetDeviceConfig;
    private IDvInvocationListener iDelegateSetDeviceConfig;
    private IDvInvocationListener iDelegateGetWiFiList;
    private IDvInvocationListener iDelegateSetTimeZone;
    private IDvInvocationListener iDelegateGetServiceLocation;
    private PropertyBool iPropertyAlive;
    private PropertyString iPropertyDeviceConfig;
    private PropertyUint iPropertyCurrentAction;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgWebDeviceConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "WebDeviceConfig", 1);
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
     * Enable the DeviceConfig property.
     */
    public void enablePropertyDeviceConfig()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyDeviceConfig = new PropertyString(new ParameterString("DeviceConfig", allowedValues));
        addProperty(iPropertyDeviceConfig);
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
     * Set the value of the DeviceConfig property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyDeviceConfig(String aValue)
    {
        return setPropertyString(iPropertyDeviceConfig, aValue);
    }

    /**
     * Get a copy of the value of the DeviceConfig property
     *
     * @return  value of the DeviceConfig property.
     */
    public String getPropertyDeviceConfig()
    {
        return iPropertyDeviceConfig.getValue();
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
     * Signal that the action GetDeviceConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetDeviceConfig must be overridden if this is called.
     */      
    protected void enableActionGetDeviceConfig()
    {
        Action action = new Action("GetDeviceConfig");
        action.addOutputParameter(new ParameterRelated("DeviceConfig", iPropertyDeviceConfig));
        iDelegateGetDeviceConfig = new DoGetDeviceConfig();
        enableAction(action, iDelegateGetDeviceConfig);
    }

    /**
     * Signal that the action SetDeviceConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetDeviceConfig must be overridden if this is called.
     */      
    protected void enableActionSetDeviceConfig()
    {
        Action action = new Action("SetDeviceConfig");
        action.addInputParameter(new ParameterRelated("DeviceConfig", iPropertyDeviceConfig));
        iDelegateSetDeviceConfig = new DoSetDeviceConfig();
        enableAction(action, iDelegateSetDeviceConfig);
    }

    /**
     * Signal that the action GetWiFiList is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetWiFiList must be overridden if this is called.
     */      
    protected void enableActionGetWiFiList()
    {
        Action action = new Action("GetWiFiList");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("WiFiList", allowedValues));
        iDelegateGetWiFiList = new DoGetWiFiList();
        enableAction(action, iDelegateGetWiFiList);
    }

    /**
     * Signal that the action SetTimeZone is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetTimeZone must be overridden if this is called.
     */      
    protected void enableActionSetTimeZone()
    {
        Action action = new Action("SetTimeZone");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("TimeZone", allowedValues));
        action.addInputParameter(new ParameterString("CurrentTime", allowedValues));
        action.addInputParameter(new ParameterString("TimeStamp", allowedValues));
        iDelegateSetTimeZone = new DoSetTimeZone();
        enableAction(action, iDelegateSetTimeZone);
    }

    /**
     * Signal that the action GetServiceLocation is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetServiceLocation must be overridden if this is called.
     */      
    protected void enableActionGetServiceLocation()
    {
        Action action = new Action("GetServiceLocation");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("ServiceLoaction", allowedValues));
        iDelegateGetServiceLocation = new DoGetServiceLocation();
        enableAction(action, iDelegateGetServiceLocation);
    }

    /**
     * GetDeviceConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetDeviceConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetDeviceConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getDeviceConfig(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetDeviceConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetDeviceConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetDeviceConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aDeviceConfig
     */
    protected void setDeviceConfig(IDvInvocation aInvocation, String aDeviceConfig)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetWiFiList action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetWiFiList action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetWiFiList} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getWiFiList(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetTimeZone action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetTimeZone action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetTimeZone} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aTimeZone
     * @param aCurrentTime
     * @param aTimeStamp
     */
    protected void setTimeZone(IDvInvocation aInvocation, String aTimeZone, String aCurrentTime, String aTimeStamp)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetServiceLocation action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetServiceLocation action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetServiceLocation} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getServiceLocation(IDvInvocation aInvocation)
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


    private class DoGetDeviceConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String deviceConfig;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 deviceConfig = getDeviceConfig(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetDeviceConfig");
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
                invocation.writeString("DeviceConfig", deviceConfig);
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

    private class DoSetDeviceConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String deviceConfig;
            try
            {
                invocation.readStart();
                deviceConfig = invocation.readString("DeviceConfig");
                invocation.readEnd();
                setDeviceConfig(invocation, deviceConfig);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetDeviceConfig");
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

    private class DoGetWiFiList implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String wiFiList;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 wiFiList = getWiFiList(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetWiFiList");
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
                invocation.writeString("WiFiList", wiFiList);
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

    private class DoSetTimeZone implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String timeZone;
            String currentTime;
            String timeStamp;
            try
            {
                invocation.readStart();
                timeZone = invocation.readString("TimeZone");
                currentTime = invocation.readString("CurrentTime");
                timeStamp = invocation.readString("TimeStamp");
                invocation.readEnd();
                setTimeZone(invocation, timeZone, currentTime, timeStamp);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetTimeZone");
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

    private class DoGetServiceLocation implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String serviceLoaction;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 serviceLoaction = getServiceLocation(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetServiceLocation");
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
                invocation.writeString("ServiceLoaction", serviceLoaction);
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

