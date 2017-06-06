package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgResamplerConfig1
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
 * Provider for the av.openhome.org:ResamplerConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgResamplerConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgResamplerConfig1
{

    private IDvInvocationListener iDelegateSetResamplerConfig;
    private IDvInvocationListener iDelegateGetResamplerConfig;
    private IDvInvocationListener iDelegateSetPCMAutoDetect;
    private IDvInvocationListener iDelegateGetPCMAutoDetect;
    private IDvInvocationListener iDelegateSetDSDtoPCM;
    private IDvInvocationListener iDelegateGetDSDtoPCM;
    private PropertyUint iPropertyCurrentAction;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgResamplerConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "ResamplerConfig", 1);
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
     * Signal that the action SetResamplerConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetResamplerConfig must be overridden if this is called.
     */      
    protected void enableActionSetResamplerConfig()
    {
        Action action = new Action("SetResamplerConfig");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("ResamplerConfig", allowedValues));
        iDelegateSetResamplerConfig = new DoSetResamplerConfig();
        enableAction(action, iDelegateSetResamplerConfig);
    }

    /**
     * Signal that the action GetResamplerConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetResamplerConfig must be overridden if this is called.
     */      
    protected void enableActionGetResamplerConfig()
    {
        Action action = new Action("GetResamplerConfig");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("ResamplerConfig", allowedValues));
        iDelegateGetResamplerConfig = new DoGetResamplerConfig();
        enableAction(action, iDelegateGetResamplerConfig);
    }

    /**
     * Signal that the action SetPCMAutoDetect is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetPCMAutoDetect must be overridden if this is called.
     */      
    protected void enableActionSetPCMAutoDetect()
    {
        Action action = new Action("SetPCMAutoDetect");
        action.addInputParameter(new ParameterBool("PCMAutoDetect"));
        iDelegateSetPCMAutoDetect = new DoSetPCMAutoDetect();
        enableAction(action, iDelegateSetPCMAutoDetect);
    }

    /**
     * Signal that the action GetPCMAutoDetect is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetPCMAutoDetect must be overridden if this is called.
     */      
    protected void enableActionGetPCMAutoDetect()
    {
        Action action = new Action("GetPCMAutoDetect");
        action.addOutputParameter(new ParameterBool("PCMAutoDetect"));
        iDelegateGetPCMAutoDetect = new DoGetPCMAutoDetect();
        enableAction(action, iDelegateGetPCMAutoDetect);
    }

    /**
     * Signal that the action SetDSDtoPCM is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetDSDtoPCM must be overridden if this is called.
     */      
    protected void enableActionSetDSDtoPCM()
    {
        Action action = new Action("SetDSDtoPCM");
        action.addInputParameter(new ParameterBool("DSDtoPCM"));
        iDelegateSetDSDtoPCM = new DoSetDSDtoPCM();
        enableAction(action, iDelegateSetDSDtoPCM);
    }

    /**
     * Signal that the action GetDSDtoPCM is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetDSDtoPCM must be overridden if this is called.
     */      
    protected void enableActionGetDSDtoPCM()
    {
        Action action = new Action("GetDSDtoPCM");
        action.addOutputParameter(new ParameterBool("DSDtoPCM"));
        iDelegateGetDSDtoPCM = new DoGetDSDtoPCM();
        enableAction(action, iDelegateGetDSDtoPCM);
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
     * SetPCMAutoDetect action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetPCMAutoDetect action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetPCMAutoDetect} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aPCMAutoDetect
     */
    protected void setPCMAutoDetect(IDvInvocation aInvocation, boolean aPCMAutoDetect)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetPCMAutoDetect action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetPCMAutoDetect action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetPCMAutoDetect} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getPCMAutoDetect(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetDSDtoPCM action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetDSDtoPCM action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetDSDtoPCM} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aDSDtoPCM
     */
    protected void setDSDtoPCM(IDvInvocation aInvocation, boolean aDSDtoPCM)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetDSDtoPCM action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetDSDtoPCM action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetDSDtoPCM} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getDSDtoPCM(IDvInvocation aInvocation)
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

    private class DoSetPCMAutoDetect implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean pCMAutoDetect;
            try
            {
                invocation.readStart();
                pCMAutoDetect = invocation.readBool("PCMAutoDetect");
                invocation.readEnd();
                setPCMAutoDetect(invocation, pCMAutoDetect);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetPCMAutoDetect");
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

    private class DoGetPCMAutoDetect implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean pCMAutoDetect;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 pCMAutoDetect = getPCMAutoDetect(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetPCMAutoDetect");
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
                invocation.writeBool("PCMAutoDetect", pCMAutoDetect);
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

    private class DoSetDSDtoPCM implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean dSDtoPCM;
            try
            {
                invocation.readStart();
                dSDtoPCM = invocation.readBool("DSDtoPCM");
                invocation.readEnd();
                setDSDtoPCM(invocation, dSDtoPCM);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetDSDtoPCM");
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

    private class DoGetDSDtoPCM implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean dSDtoPCM;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 dSDtoPCM = getDSDtoPCM(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetDSDtoPCM");
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
                invocation.writeBool("DSDtoPCM", dSDtoPCM);
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

