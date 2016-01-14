package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgRoon1
{

    /**
     * Set the value of the TransportState property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyTransportState(String aValue);

    /**
     * Get a copy of the value of the TransportState property
     *
     * @return value of the TransportState property.
     */
    public String getPropertyTransportState();

    /**
     * Set the value of the Repeat property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyRepeat(boolean aValue);

    /**
     * Get a copy of the value of the Repeat property
     *
     * @return value of the Repeat property.
     */
    public boolean getPropertyRepeat();

    /**
     * Set the value of the Shuffle property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyShuffle(boolean aValue);

    /**
     * Get a copy of the value of the Shuffle property
     *
     * @return value of the Shuffle property.
     */
    public boolean getPropertyShuffle();
        
}

/**
 * Provider for the av.openhome.org:Roon:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgRoon1 extends DvProvider implements IDvProviderAvOpenhomeOrgRoon1
{

    private IDvInvocationListener iDelegatePlay;
    private IDvInvocationListener iDelegatePause;
    private IDvInvocationListener iDelegatePlayPause;
    private IDvInvocationListener iDelegateStop;
    private IDvInvocationListener iDelegateNext;
    private IDvInvocationListener iDelegatePrevious;
    private IDvInvocationListener iDelegateToggleShuffle;
    private IDvInvocationListener iDelegateToggleLoop;
    private IDvInvocationListener iDelegateRepeat;
    private IDvInvocationListener iDelegateShuffle;
    private IDvInvocationListener iDelegateSeekSecondAbsolute;
    private IDvInvocationListener iDelegateSeekSecondRelative;
    private IDvInvocationListener iDelegateTransportState;
    private PropertyString iPropertyTransportState;
    private PropertyBool iPropertyRepeat;
    private PropertyBool iPropertyShuffle;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgRoon1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "Roon", 1);
    }

    /**
     * Enable the TransportState property.
     */
    public void enablePropertyTransportState()
    {
        List<String> allowedValues = new LinkedList<String>();
        allowedValues.add("Playing");
        allowedValues.add("Paused");
        allowedValues.add("Stopped");
        allowedValues.add("Buffering");
        iPropertyTransportState = new PropertyString(new ParameterString("TransportState", allowedValues));
        addProperty(iPropertyTransportState);
            allowedValues.clear();
    }

    /**
     * Enable the Repeat property.
     */
    public void enablePropertyRepeat()
    {
        iPropertyRepeat = new PropertyBool(new ParameterBool("Repeat"));
        addProperty(iPropertyRepeat);
    }

    /**
     * Enable the Shuffle property.
     */
    public void enablePropertyShuffle()
    {
        iPropertyShuffle = new PropertyBool(new ParameterBool("Shuffle"));
        addProperty(iPropertyShuffle);
    }

    /**
     * Set the value of the TransportState property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyTransportState(String aValue)
    {
        return setPropertyString(iPropertyTransportState, aValue);
    }

    /**
     * Get a copy of the value of the TransportState property
     *
     * @return  value of the TransportState property.
     */
    public String getPropertyTransportState()
    {
        return iPropertyTransportState.getValue();
    }

    /**
     * Set the value of the Repeat property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyRepeat(boolean aValue)
    {
        return setPropertyBool(iPropertyRepeat, aValue);
    }

    /**
     * Get a copy of the value of the Repeat property
     *
     * @return  value of the Repeat property.
     */
    public boolean getPropertyRepeat()
    {
        return iPropertyRepeat.getValue();
    }

    /**
     * Set the value of the Shuffle property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyShuffle(boolean aValue)
    {
        return setPropertyBool(iPropertyShuffle, aValue);
    }

    /**
     * Get a copy of the value of the Shuffle property
     *
     * @return  value of the Shuffle property.
     */
    public boolean getPropertyShuffle()
    {
        return iPropertyShuffle.getValue();
    }

    /**
     * Signal that the action Play is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Play must be overridden if this is called.
     */      
    protected void enableActionPlay()
    {
        Action action = new Action("Play");
        iDelegatePlay = new DoPlay();
        enableAction(action, iDelegatePlay);
    }

    /**
     * Signal that the action Pause is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Pause must be overridden if this is called.
     */      
    protected void enableActionPause()
    {
        Action action = new Action("Pause");
        iDelegatePause = new DoPause();
        enableAction(action, iDelegatePause);
    }

    /**
     * Signal that the action PlayPause is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * PlayPause must be overridden if this is called.
     */      
    protected void enableActionPlayPause()
    {
        Action action = new Action("PlayPause");
        iDelegatePlayPause = new DoPlayPause();
        enableAction(action, iDelegatePlayPause);
    }

    /**
     * Signal that the action Stop is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Stop must be overridden if this is called.
     */      
    protected void enableActionStop()
    {
        Action action = new Action("Stop");
        iDelegateStop = new DoStop();
        enableAction(action, iDelegateStop);
    }

    /**
     * Signal that the action Next is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Next must be overridden if this is called.
     */      
    protected void enableActionNext()
    {
        Action action = new Action("Next");
        iDelegateNext = new DoNext();
        enableAction(action, iDelegateNext);
    }

    /**
     * Signal that the action Previous is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Previous must be overridden if this is called.
     */      
    protected void enableActionPrevious()
    {
        Action action = new Action("Previous");
        iDelegatePrevious = new DoPrevious();
        enableAction(action, iDelegatePrevious);
    }

    /**
     * Signal that the action ToggleShuffle is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ToggleShuffle must be overridden if this is called.
     */      
    protected void enableActionToggleShuffle()
    {
        Action action = new Action("ToggleShuffle");
        iDelegateToggleShuffle = new DoToggleShuffle();
        enableAction(action, iDelegateToggleShuffle);
    }

    /**
     * Signal that the action ToggleLoop is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ToggleLoop must be overridden if this is called.
     */      
    protected void enableActionToggleLoop()
    {
        Action action = new Action("ToggleLoop");
        iDelegateToggleLoop = new DoToggleLoop();
        enableAction(action, iDelegateToggleLoop);
    }

    /**
     * Signal that the action Repeat is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Repeat must be overridden if this is called.
     */      
    protected void enableActionRepeat()
    {
        Action action = new Action("Repeat");
        action.addOutputParameter(new ParameterRelated("Value", iPropertyRepeat));
        iDelegateRepeat = new DoRepeat();
        enableAction(action, iDelegateRepeat);
    }

    /**
     * Signal that the action Shuffle is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Shuffle must be overridden if this is called.
     */      
    protected void enableActionShuffle()
    {
        Action action = new Action("Shuffle");
        action.addOutputParameter(new ParameterRelated("Value", iPropertyShuffle));
        iDelegateShuffle = new DoShuffle();
        enableAction(action, iDelegateShuffle);
    }

    /**
     * Signal that the action SeekSecondAbsolute is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SeekSecondAbsolute must be overridden if this is called.
     */      
    protected void enableActionSeekSecondAbsolute()
    {
        Action action = new Action("SeekSecondAbsolute");
        action.addInputParameter(new ParameterUint("Value"));
        iDelegateSeekSecondAbsolute = new DoSeekSecondAbsolute();
        enableAction(action, iDelegateSeekSecondAbsolute);
    }

    /**
     * Signal that the action SeekSecondRelative is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SeekSecondRelative must be overridden if this is called.
     */      
    protected void enableActionSeekSecondRelative()
    {
        Action action = new Action("SeekSecondRelative");
        action.addInputParameter(new ParameterInt("Value"));
        iDelegateSeekSecondRelative = new DoSeekSecondRelative();
        enableAction(action, iDelegateSeekSecondRelative);
    }

    /**
     * Signal that the action TransportState is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * TransportState must be overridden if this is called.
     */      
    protected void enableActionTransportState()
    {
        Action action = new Action("TransportState");
        action.addOutputParameter(new ParameterRelated("Value", iPropertyTransportState));
        iDelegateTransportState = new DoTransportState();
        enableAction(action, iDelegateTransportState);
    }

    /**
     * Play action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Play action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPlay} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void play(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Pause action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Pause action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPause} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void pause(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * PlayPause action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * PlayPause action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPlayPause} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void playPause(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Stop action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Stop action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionStop} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void stop(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Next action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Next action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionNext} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void next(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Previous action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Previous action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPrevious} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void previous(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ToggleShuffle action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ToggleShuffle action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionToggleShuffle} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void toggleShuffle(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ToggleLoop action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ToggleLoop action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionToggleLoop} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void toggleLoop(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Repeat action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Repeat action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionRepeat} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean repeat(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Shuffle action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Shuffle action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionShuffle} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean shuffle(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SeekSecondAbsolute action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SeekSecondAbsolute action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSeekSecondAbsolute} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aValue
     */
    protected void seekSecondAbsolute(IDvInvocation aInvocation, long aValue)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SeekSecondRelative action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SeekSecondRelative action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSeekSecondRelative} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aValue
     */
    protected void seekSecondRelative(IDvInvocation aInvocation, int aValue)
    {
        throw (new ActionDisabledError());
    }

    /**
     * TransportState action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * TransportState action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionTransportState} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String transportState(IDvInvocation aInvocation)
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


    private class DoPlay implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                play(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Play");
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

    private class DoPause implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                pause(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Pause");
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

    private class DoPlayPause implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                playPause(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "PlayPause");
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

    private class DoStop implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                stop(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Stop");
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

    private class DoNext implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                next(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Next");
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

    private class DoPrevious implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                previous(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Previous");
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

    private class DoToggleShuffle implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                toggleShuffle(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ToggleShuffle");
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

    private class DoToggleLoop implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                toggleLoop(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ToggleLoop");
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

    private class DoRepeat implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean value;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 value = repeat(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Repeat");
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
                invocation.writeBool("Value", value);
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

    private class DoShuffle implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean value;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 value = shuffle(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Shuffle");
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
                invocation.writeBool("Value", value);
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

    private class DoSeekSecondAbsolute implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long value;
            try
            {
                invocation.readStart();
                value = invocation.readUint("Value");
                invocation.readEnd();
                seekSecondAbsolute(invocation, value);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SeekSecondAbsolute");
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

    private class DoSeekSecondRelative implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            int value;
            try
            {
                invocation.readStart();
                value = invocation.readInt("Value");
                invocation.readEnd();
                seekSecondRelative(invocation, value);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SeekSecondRelative");
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

    private class DoTransportState implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String value;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 value = transportState(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "TransportState");
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
                invocation.writeString("Value", value);
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

