package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgRendererConfig1
{

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

    /**
     * Set the value of the HardwareConfig property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyHardwareConfig(String aValue);

    /**
     * Get a copy of the value of the HardwareConfig property
     *
     * @return value of the HardwareConfig property.
     */
    public String getPropertyHardwareConfig();
        
}

/**
 * Provider for the av.openhome.org:RendererConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgRendererConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgRendererConfig1
{

    private IDvInvocationListener iDelegateGetRendererConfig;
    private IDvInvocationListener iDelegateSetRendererConfig;
    private IDvInvocationListener iDelegateGetResamplerConfig;
    private IDvInvocationListener iDelegateSetResamplerConfig;
    private IDvInvocationListener iDelegateGetHardwareConfig;
    private IDvInvocationListener iDelegateSetHardwareConfig;
    private IDvInvocationListener iDelegateGetWiFiList;
    private IDvInvocationListener iDelegateSetTimeZone;
    private PropertyString iPropertyRendererConfig;
    private PropertyString iPropertyResamplerConfig;
    private PropertyString iPropertyHardwareConfig;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgRendererConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "RendererConfig", 1);
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
     * Enable the ResamplerConfig property.
     */
    public void enablePropertyResamplerConfig()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyResamplerConfig = new PropertyString(new ParameterString("ResamplerConfig", allowedValues));
        addProperty(iPropertyResamplerConfig);
    }

    /**
     * Enable the HardwareConfig property.
     */
    public void enablePropertyHardwareConfig()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyHardwareConfig = new PropertyString(new ParameterString("HardwareConfig", allowedValues));
        addProperty(iPropertyHardwareConfig);
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
     * Set the value of the HardwareConfig property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyHardwareConfig(String aValue)
    {
        return setPropertyString(iPropertyHardwareConfig, aValue);
    }

    /**
     * Get a copy of the value of the HardwareConfig property
     *
     * @return  value of the HardwareConfig property.
     */
    public String getPropertyHardwareConfig()
    {
        return iPropertyHardwareConfig.getValue();
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
     * Signal that the action GetHardwareConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetHardwareConfig must be overridden if this is called.
     */      
    protected void enableActionGetHardwareConfig()
    {
        Action action = new Action("GetHardwareConfig");
        action.addOutputParameter(new ParameterRelated("HardwareConfig", iPropertyHardwareConfig));
        iDelegateGetHardwareConfig = new DoGetHardwareConfig();
        enableAction(action, iDelegateGetHardwareConfig);
    }

    /**
     * Signal that the action SetHardwareConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetHardwareConfig must be overridden if this is called.
     */      
    protected void enableActionSetHardwareConfig()
    {
        Action action = new Action("SetHardwareConfig");
        action.addInputParameter(new ParameterRelated("HardwareConfig", iPropertyHardwareConfig));
        iDelegateSetHardwareConfig = new DoSetHardwareConfig();
        enableAction(action, iDelegateSetHardwareConfig);
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
     * GetHardwareConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetHardwareConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetHardwareConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getHardwareConfig(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetHardwareConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetHardwareConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetHardwareConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aHardwareConfig
     */
    protected void setHardwareConfig(IDvInvocation aInvocation, String aHardwareConfig)
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

    private class DoGetHardwareConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String hardwareConfig;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 hardwareConfig = getHardwareConfig(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetHardwareConfig");
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
                invocation.writeString("HardwareConfig", hardwareConfig);
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

    private class DoSetHardwareConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String hardwareConfig;
            try
            {
                invocation.readStart();
                hardwareConfig = invocation.readString("HardwareConfig");
                invocation.readEnd();
                setHardwareConfig(invocation, hardwareConfig);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetHardwareConfig");
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
}

