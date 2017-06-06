package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgGroupConfig1
{

    /**
     * Set the value of the GroupMode property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyGroupMode(String aValue);

    /**
     * Get a copy of the value of the GroupMode property
     *
     * @return value of the GroupMode property.
     */
    public String getPropertyGroupMode();

    /**
     * Set the value of the GroupName property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyGroupName(String aValue);

    /**
     * Get a copy of the value of the GroupName property
     *
     * @return value of the GroupName property.
     */
    public String getPropertyGroupName();

    /**
     * Set the value of the GroupID property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyGroupID(String aValue);

    /**
     * Get a copy of the value of the GroupID property
     *
     * @return value of the GroupID property.
     */
    public String getPropertyGroupID();

    /**
     * Set the value of the GroupVolume property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyGroupVolume(long aValue);

    /**
     * Get a copy of the value of the GroupVolume property
     *
     * @return value of the GroupVolume property.
     */
    public long getPropertyGroupVolume();

    /**
     * Set the value of the GroupMute property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyGroupMute(boolean aValue);

    /**
     * Get a copy of the value of the GroupMute property
     *
     * @return value of the GroupMute property.
     */
    public boolean getPropertyGroupMute();

    /**
     * Set the value of the GroupStatus property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyGroupStatus(String aValue);

    /**
     * Get a copy of the value of the GroupStatus property
     *
     * @return value of the GroupStatus property.
     */
    public String getPropertyGroupStatus();

    /**
     * Set the value of the BitPerfectMode property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyBitPerfectMode(boolean aValue);

    /**
     * Get a copy of the value of the BitPerfectMode property
     *
     * @return value of the BitPerfectMode property.
     */
    public boolean getPropertyBitPerfectMode();
        
}

/**
 * Provider for the av.openhome.org:GroupConfig:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgGroupConfig1 extends DvProvider implements IDvProviderAvOpenhomeOrgGroupConfig1
{

    public class GetGroupMode
    {
        private String iGroupMode;
        private String iGroupID;
        private String iGroupName;

        public GetGroupMode(
            String aGroupMode,
            String aGroupID,
            String aGroupName
        )
        {
            iGroupMode = aGroupMode;
            iGroupID = aGroupID;
            iGroupName = aGroupName;
        }
        public String getGroupMode()
        {
            return iGroupMode;
        }
        public String getGroupID()
        {
            return iGroupID;
        }
        public String getGroupName()
        {
            return iGroupName;
        }
    }

    private IDvInvocationListener iDelegateSetGroupMode;
    private IDvInvocationListener iDelegateGetGroupMode;
    private IDvInvocationListener iDelegateSetGroupVolume;
    private IDvInvocationListener iDelegateGetGroupVolume;
    private IDvInvocationListener iDelegateSetGroupMute;
    private IDvInvocationListener iDelegateGetGroupMute;
    private IDvInvocationListener iDelegateGetGroupStatus;
    private IDvInvocationListener iDelegateSetGroupStatus;
    private IDvInvocationListener iDelegateGetBitPerfectMode;
    private IDvInvocationListener iDelegateSetBitPerfectMode;
    private PropertyString iPropertyGroupMode;
    private PropertyString iPropertyGroupName;
    private PropertyString iPropertyGroupID;
    private PropertyUint iPropertyGroupVolume;
    private PropertyBool iPropertyGroupMute;
    private PropertyString iPropertyGroupStatus;
    private PropertyBool iPropertyBitPerfectMode;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgGroupConfig1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "GroupConfig", 1);
    }

    /**
     * Enable the GroupMode property.
     */
    public void enablePropertyGroupMode()
    {
        List<String> allowedValues = new LinkedList<String>();
        allowedValues.add("Master");
        allowedValues.add("Slave");
        allowedValues.add("None");
        iPropertyGroupMode = new PropertyString(new ParameterString("GroupMode", allowedValues));
        addProperty(iPropertyGroupMode);
            allowedValues.clear();
    }

    /**
     * Enable the GroupName property.
     */
    public void enablePropertyGroupName()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyGroupName = new PropertyString(new ParameterString("GroupName", allowedValues));
        addProperty(iPropertyGroupName);
    }

    /**
     * Enable the GroupID property.
     */
    public void enablePropertyGroupID()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyGroupID = new PropertyString(new ParameterString("GroupID", allowedValues));
        addProperty(iPropertyGroupID);
    }

    /**
     * Enable the GroupVolume property.
     */
    public void enablePropertyGroupVolume()
    {
        iPropertyGroupVolume = new PropertyUint(new ParameterUint("GroupVolume"));
        addProperty(iPropertyGroupVolume);
    }

    /**
     * Enable the GroupMute property.
     */
    public void enablePropertyGroupMute()
    {
        iPropertyGroupMute = new PropertyBool(new ParameterBool("GroupMute"));
        addProperty(iPropertyGroupMute);
    }

    /**
     * Enable the GroupStatus property.
     */
    public void enablePropertyGroupStatus()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyGroupStatus = new PropertyString(new ParameterString("GroupStatus", allowedValues));
        addProperty(iPropertyGroupStatus);
    }

    /**
     * Enable the BitPerfectMode property.
     */
    public void enablePropertyBitPerfectMode()
    {
        iPropertyBitPerfectMode = new PropertyBool(new ParameterBool("BitPerfectMode"));
        addProperty(iPropertyBitPerfectMode);
    }

    /**
     * Set the value of the GroupMode property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyGroupMode(String aValue)
    {
        return setPropertyString(iPropertyGroupMode, aValue);
    }

    /**
     * Get a copy of the value of the GroupMode property
     *
     * @return  value of the GroupMode property.
     */
    public String getPropertyGroupMode()
    {
        return iPropertyGroupMode.getValue();
    }

    /**
     * Set the value of the GroupName property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyGroupName(String aValue)
    {
        return setPropertyString(iPropertyGroupName, aValue);
    }

    /**
     * Get a copy of the value of the GroupName property
     *
     * @return  value of the GroupName property.
     */
    public String getPropertyGroupName()
    {
        return iPropertyGroupName.getValue();
    }

    /**
     * Set the value of the GroupID property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyGroupID(String aValue)
    {
        return setPropertyString(iPropertyGroupID, aValue);
    }

    /**
     * Get a copy of the value of the GroupID property
     *
     * @return  value of the GroupID property.
     */
    public String getPropertyGroupID()
    {
        return iPropertyGroupID.getValue();
    }

    /**
     * Set the value of the GroupVolume property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyGroupVolume(long aValue)
    {
        return setPropertyUint(iPropertyGroupVolume, aValue);
    }

    /**
     * Get a copy of the value of the GroupVolume property
     *
     * @return  value of the GroupVolume property.
     */
    public long getPropertyGroupVolume()
    {
        return iPropertyGroupVolume.getValue();
    }

    /**
     * Set the value of the GroupMute property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyGroupMute(boolean aValue)
    {
        return setPropertyBool(iPropertyGroupMute, aValue);
    }

    /**
     * Get a copy of the value of the GroupMute property
     *
     * @return  value of the GroupMute property.
     */
    public boolean getPropertyGroupMute()
    {
        return iPropertyGroupMute.getValue();
    }

    /**
     * Set the value of the GroupStatus property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyGroupStatus(String aValue)
    {
        return setPropertyString(iPropertyGroupStatus, aValue);
    }

    /**
     * Get a copy of the value of the GroupStatus property
     *
     * @return  value of the GroupStatus property.
     */
    public String getPropertyGroupStatus()
    {
        return iPropertyGroupStatus.getValue();
    }

    /**
     * Set the value of the BitPerfectMode property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyBitPerfectMode(boolean aValue)
    {
        return setPropertyBool(iPropertyBitPerfectMode, aValue);
    }

    /**
     * Get a copy of the value of the BitPerfectMode property
     *
     * @return  value of the BitPerfectMode property.
     */
    public boolean getPropertyBitPerfectMode()
    {
        return iPropertyBitPerfectMode.getValue();
    }

    /**
     * Signal that the action SetGroupMode is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetGroupMode must be overridden if this is called.
     */      
    protected void enableActionSetGroupMode()
    {
        Action action = new Action("SetGroupMode");
        action.addInputParameter(new ParameterRelated("GroupMode", iPropertyGroupMode));
        action.addInputParameter(new ParameterRelated("GroupID", iPropertyGroupID));
        action.addInputParameter(new ParameterRelated("GroupName", iPropertyGroupName));
        iDelegateSetGroupMode = new DoSetGroupMode();
        enableAction(action, iDelegateSetGroupMode);
    }

    /**
     * Signal that the action GetGroupMode is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetGroupMode must be overridden if this is called.
     */      
    protected void enableActionGetGroupMode()
    {
        Action action = new Action("GetGroupMode");
        action.addOutputParameter(new ParameterRelated("GroupMode", iPropertyGroupMode));
        action.addOutputParameter(new ParameterRelated("GroupID", iPropertyGroupID));
        action.addOutputParameter(new ParameterRelated("GroupName", iPropertyGroupName));
        iDelegateGetGroupMode = new DoGetGroupMode();
        enableAction(action, iDelegateGetGroupMode);
    }

    /**
     * Signal that the action SetGroupVolume is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetGroupVolume must be overridden if this is called.
     */      
    protected void enableActionSetGroupVolume()
    {
        Action action = new Action("SetGroupVolume");
        action.addInputParameter(new ParameterRelated("GroupVolume", iPropertyGroupVolume));
        iDelegateSetGroupVolume = new DoSetGroupVolume();
        enableAction(action, iDelegateSetGroupVolume);
    }

    /**
     * Signal that the action GetGroupVolume is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetGroupVolume must be overridden if this is called.
     */      
    protected void enableActionGetGroupVolume()
    {
        Action action = new Action("GetGroupVolume");
        action.addOutputParameter(new ParameterRelated("GroupVolume", iPropertyGroupVolume));
        iDelegateGetGroupVolume = new DoGetGroupVolume();
        enableAction(action, iDelegateGetGroupVolume);
    }

    /**
     * Signal that the action SetGroupMute is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetGroupMute must be overridden if this is called.
     */      
    protected void enableActionSetGroupMute()
    {
        Action action = new Action("SetGroupMute");
        action.addInputParameter(new ParameterRelated("GroupMute", iPropertyGroupMute));
        iDelegateSetGroupMute = new DoSetGroupMute();
        enableAction(action, iDelegateSetGroupMute);
    }

    /**
     * Signal that the action GetGroupMute is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetGroupMute must be overridden if this is called.
     */      
    protected void enableActionGetGroupMute()
    {
        Action action = new Action("GetGroupMute");
        action.addOutputParameter(new ParameterRelated("GroupMute", iPropertyGroupMute));
        iDelegateGetGroupMute = new DoGetGroupMute();
        enableAction(action, iDelegateGetGroupMute);
    }

    /**
     * Signal that the action GetGroupStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetGroupStatus must be overridden if this is called.
     */      
    protected void enableActionGetGroupStatus()
    {
        Action action = new Action("GetGroupStatus");
        action.addOutputParameter(new ParameterRelated("GroupStatus", iPropertyGroupStatus));
        iDelegateGetGroupStatus = new DoGetGroupStatus();
        enableAction(action, iDelegateGetGroupStatus);
    }

    /**
     * Signal that the action SetGroupStatus is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetGroupStatus must be overridden if this is called.
     */      
    protected void enableActionSetGroupStatus()
    {
        Action action = new Action("SetGroupStatus");
        action.addInputParameter(new ParameterRelated("GroupStatus", iPropertyGroupStatus));
        iDelegateSetGroupStatus = new DoSetGroupStatus();
        enableAction(action, iDelegateSetGroupStatus);
    }

    /**
     * Signal that the action GetBitPerfectMode is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetBitPerfectMode must be overridden if this is called.
     */      
    protected void enableActionGetBitPerfectMode()
    {
        Action action = new Action("GetBitPerfectMode");
        action.addOutputParameter(new ParameterRelated("BitPerfectMode", iPropertyBitPerfectMode));
        iDelegateGetBitPerfectMode = new DoGetBitPerfectMode();
        enableAction(action, iDelegateGetBitPerfectMode);
    }

    /**
     * Signal that the action SetBitPerfectMode is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetBitPerfectMode must be overridden if this is called.
     */      
    protected void enableActionSetBitPerfectMode()
    {
        Action action = new Action("SetBitPerfectMode");
        action.addInputParameter(new ParameterRelated("BitPerfectMode", iPropertyBitPerfectMode));
        iDelegateSetBitPerfectMode = new DoSetBitPerfectMode();
        enableAction(action, iDelegateSetBitPerfectMode);
    }

    /**
     * SetGroupMode action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetGroupMode action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetGroupMode} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aGroupMode
     * @param aGroupID
     * @param aGroupName
     */
    protected void setGroupMode(IDvInvocation aInvocation, String aGroupMode, String aGroupID, String aGroupName)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetGroupMode action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetGroupMode action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetGroupMode} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetGroupMode getGroupMode(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetGroupVolume action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetGroupVolume action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetGroupVolume} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aGroupVolume
     */
    protected void setGroupVolume(IDvInvocation aInvocation, long aGroupVolume)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetGroupVolume action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetGroupVolume action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetGroupVolume} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long getGroupVolume(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetGroupMute action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetGroupMute action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetGroupMute} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aGroupMute
     */
    protected void setGroupMute(IDvInvocation aInvocation, boolean aGroupMute)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetGroupMute action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetGroupMute action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetGroupMute} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getGroupMute(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetGroupStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetGroupStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetGroupStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getGroupStatus(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetGroupStatus action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetGroupStatus action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetGroupStatus} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aGroupStatus
     */
    protected void setGroupStatus(IDvInvocation aInvocation, String aGroupStatus)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetBitPerfectMode action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetBitPerfectMode action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetBitPerfectMode} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getBitPerfectMode(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetBitPerfectMode action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetBitPerfectMode action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetBitPerfectMode} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aBitPerfectMode
     */
    protected void setBitPerfectMode(IDvInvocation aInvocation, boolean aBitPerfectMode)
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


    private class DoSetGroupMode implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String groupMode;
            String groupID;
            String groupName;
            try
            {
                invocation.readStart();
                groupMode = invocation.readString("GroupMode");
                groupID = invocation.readString("GroupID");
                groupName = invocation.readString("GroupName");
                invocation.readEnd();
                setGroupMode(invocation, groupMode, groupID, groupName);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetGroupMode");
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

    private class DoGetGroupMode implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String groupMode;
            String groupID;
            String groupName;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetGroupMode outArgs = getGroupMode(invocation);
            groupMode = outArgs.getGroupMode();
            groupID = outArgs.getGroupID();
            groupName = outArgs.getGroupName();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetGroupMode");
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
                invocation.writeString("GroupMode", groupMode);
                invocation.writeString("GroupID", groupID);
                invocation.writeString("GroupName", groupName);
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

    private class DoSetGroupVolume implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long groupVolume;
            try
            {
                invocation.readStart();
                groupVolume = invocation.readUint("GroupVolume");
                invocation.readEnd();
                setGroupVolume(invocation, groupVolume);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetGroupVolume");
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

    private class DoGetGroupVolume implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long groupVolume;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 groupVolume = getGroupVolume(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetGroupVolume");
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
                invocation.writeUint("GroupVolume", groupVolume);
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

    private class DoSetGroupMute implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean groupMute;
            try
            {
                invocation.readStart();
                groupMute = invocation.readBool("GroupMute");
                invocation.readEnd();
                setGroupMute(invocation, groupMute);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetGroupMute");
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

    private class DoGetGroupMute implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean groupMute;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 groupMute = getGroupMute(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetGroupMute");
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
                invocation.writeBool("GroupMute", groupMute);
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

    private class DoGetGroupStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String groupStatus;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 groupStatus = getGroupStatus(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetGroupStatus");
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
                invocation.writeString("GroupStatus", groupStatus);
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

    private class DoSetGroupStatus implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String groupStatus;
            try
            {
                invocation.readStart();
                groupStatus = invocation.readString("GroupStatus");
                invocation.readEnd();
                setGroupStatus(invocation, groupStatus);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetGroupStatus");
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

    private class DoGetBitPerfectMode implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean bitPerfectMode;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 bitPerfectMode = getBitPerfectMode(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetBitPerfectMode");
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
                invocation.writeBool("BitPerfectMode", bitPerfectMode);
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

    private class DoSetBitPerfectMode implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean bitPerfectMode;
            try
            {
                invocation.readStart();
                bitPerfectMode = invocation.readBool("BitPerfectMode");
                invocation.readEnd();
                setBitPerfectMode(invocation, bitPerfectMode);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetBitPerfectMode");
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

