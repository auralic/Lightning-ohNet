package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderTencentComQPlay1
{
        
}

/**
 * Provider for the tencent.com:QPlay:1 UPnP service.
 */
public class DvProviderTencentComQPlay1 extends DvProvider implements IDvProviderTencentComQPlay1
{

    public class QPlayAuth
    {
        private String iCode;
        private String iMID;
        private String iDID;

        public QPlayAuth(
            String aCode,
            String aMID,
            String aDID
        )
        {
            iCode = aCode;
            iMID = aMID;
            iDID = aDID;
        }
        public String getCode()
        {
            return iCode;
        }
        public String getMID()
        {
            return iMID;
        }
        public String getDID()
        {
            return iDID;
        }
    }

    private IDvInvocationListener iDelegateSetNetwork;
    private IDvInvocationListener iDelegateQPlayAuth;
    private IDvInvocationListener iDelegateInsertTracks;
    private IDvInvocationListener iDelegateRemoveTracks;
    private IDvInvocationListener iDelegateGetTracksInfo;
    private IDvInvocationListener iDelegateSetTracksInfo;
    private IDvInvocationListener iDelegateGetTracksCount;
    private IDvInvocationListener iDelegateGetMaxTracks;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderTencentComQPlay1(DvDevice aDevice)
    {
        super(aDevice, "tencent.com", "QPlay", 1);
    }

    /**
     * Signal that the action SetNetwork is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetNetwork must be overridden if this is called.
     */      
    protected void enableActionSetNetwork()
    {
        Action action = new Action("SetNetwork");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("SSID", allowedValues));
        action.addInputParameter(new ParameterString("Key", allowedValues));
        allowedValues.add("open");
        allowedValues.add("shared");
        allowedValues.add("WPA");
        allowedValues.add("WPAPSK");
        allowedValues.add("WPA2");
        allowedValues.add("WPA2PSK");
        action.addInputParameter(new ParameterString("AuthAlgo", allowedValues));
        allowedValues.clear();
        allowedValues.add("none");
        allowedValues.add("WEP");
        allowedValues.add("TKIP");
        allowedValues.add("AES");
        action.addInputParameter(new ParameterString("CipherAlgo", allowedValues));
        allowedValues.clear();
        iDelegateSetNetwork = new DoSetNetwork();
        enableAction(action, iDelegateSetNetwork);
    }

    /**
     * Signal that the action QPlayAuth is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * QPlayAuth must be overridden if this is called.
     */      
    protected void enableActionQPlayAuth()
    {
        Action action = new Action("QPlayAuth");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Seed", allowedValues));
        action.addOutputParameter(new ParameterString("Code", allowedValues));
        action.addOutputParameter(new ParameterString("MID", allowedValues));
        action.addOutputParameter(new ParameterString("DID", allowedValues));
        iDelegateQPlayAuth = new DoQPlayAuth();
        enableAction(action, iDelegateQPlayAuth);
    }

    /**
     * Signal that the action InsertTracks is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * InsertTracks must be overridden if this is called.
     */      
    protected void enableActionInsertTracks()
    {
        Action action = new Action("InsertTracks");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("QueueID", allowedValues));
        action.addInputParameter(new ParameterString("StartingIndex", allowedValues));
        action.addInputParameter(new ParameterString("TracksMetaData", allowedValues));
        action.addOutputParameter(new ParameterString("NumberOfSuccess", allowedValues));
        iDelegateInsertTracks = new DoInsertTracks();
        enableAction(action, iDelegateInsertTracks);
    }

    /**
     * Signal that the action RemoveTracks is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * RemoveTracks must be overridden if this is called.
     */      
    protected void enableActionRemoveTracks()
    {
        Action action = new Action("RemoveTracks");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("QueueID", allowedValues));
        action.addInputParameter(new ParameterString("StartingIndex", allowedValues));
        action.addInputParameter(new ParameterString("NumberOfTracks", allowedValues));
        action.addOutputParameter(new ParameterString("NumberOfSuccess", allowedValues));
        iDelegateRemoveTracks = new DoRemoveTracks();
        enableAction(action, iDelegateRemoveTracks);
    }

    /**
     * Signal that the action GetTracksInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetTracksInfo must be overridden if this is called.
     */      
    protected void enableActionGetTracksInfo()
    {
        Action action = new Action("GetTracksInfo");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("StartingIndex", allowedValues));
        action.addInputParameter(new ParameterString("NumberOfTracks", allowedValues));
        action.addOutputParameter(new ParameterString("TracksMetaData", allowedValues));
        iDelegateGetTracksInfo = new DoGetTracksInfo();
        enableAction(action, iDelegateGetTracksInfo);
    }

    /**
     * Signal that the action SetTracksInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetTracksInfo must be overridden if this is called.
     */      
    protected void enableActionSetTracksInfo()
    {
        Action action = new Action("SetTracksInfo");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("QueueID", allowedValues));
        action.addInputParameter(new ParameterString("StartingIndex", allowedValues));
        action.addInputParameter(new ParameterString("NextIndex", allowedValues));
        action.addInputParameter(new ParameterString("TracksMetaData", allowedValues));
        action.addOutputParameter(new ParameterString("NumberOfSuccess", allowedValues));
        iDelegateSetTracksInfo = new DoSetTracksInfo();
        enableAction(action, iDelegateSetTracksInfo);
    }

    /**
     * Signal that the action GetTracksCount is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetTracksCount must be overridden if this is called.
     */      
    protected void enableActionGetTracksCount()
    {
        Action action = new Action("GetTracksCount");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("NrTracks", allowedValues));
        iDelegateGetTracksCount = new DoGetTracksCount();
        enableAction(action, iDelegateGetTracksCount);
    }

    /**
     * Signal that the action GetMaxTracks is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetMaxTracks must be overridden if this is called.
     */      
    protected void enableActionGetMaxTracks()
    {
        Action action = new Action("GetMaxTracks");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterString("MaxTracks", allowedValues));
        iDelegateGetMaxTracks = new DoGetMaxTracks();
        enableAction(action, iDelegateGetMaxTracks);
    }

    /**
     * SetNetwork action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetNetwork action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetNetwork} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aSSID
     * @param aKey
     * @param aAuthAlgo
     * @param aCipherAlgo
     */
    protected void setNetwork(IDvInvocation aInvocation, String aSSID, String aKey, String aAuthAlgo, String aCipherAlgo)
    {
        throw (new ActionDisabledError());
    }

    /**
     * QPlayAuth action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * QPlayAuth action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionQPlayAuth} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aSeed
     */
    protected QPlayAuth qPlayAuth(IDvInvocation aInvocation, String aSeed)
    {
        throw (new ActionDisabledError());
    }

    /**
     * InsertTracks action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * InsertTracks action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionInsertTracks} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aQueueID
     * @param aStartingIndex
     * @param aTracksMetaData
     */
    protected String insertTracks(IDvInvocation aInvocation, String aQueueID, String aStartingIndex, String aTracksMetaData)
    {
        throw (new ActionDisabledError());
    }

    /**
     * RemoveTracks action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * RemoveTracks action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionRemoveTracks} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aQueueID
     * @param aStartingIndex
     * @param aNumberOfTracks
     */
    protected String removeTracks(IDvInvocation aInvocation, String aQueueID, String aStartingIndex, String aNumberOfTracks)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetTracksInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetTracksInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetTracksInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aStartingIndex
     * @param aNumberOfTracks
     */
    protected String getTracksInfo(IDvInvocation aInvocation, String aStartingIndex, String aNumberOfTracks)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetTracksInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetTracksInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetTracksInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aQueueID
     * @param aStartingIndex
     * @param aNextIndex
     * @param aTracksMetaData
     */
    protected String setTracksInfo(IDvInvocation aInvocation, String aQueueID, String aStartingIndex, String aNextIndex, String aTracksMetaData)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetTracksCount action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetTracksCount action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetTracksCount} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getTracksCount(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetMaxTracks action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetMaxTracks action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetMaxTracks} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String getMaxTracks(IDvInvocation aInvocation)
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


    private class DoSetNetwork implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String sSID;
            String key;
            String authAlgo;
            String cipherAlgo;
            try
            {
                invocation.readStart();
                sSID = invocation.readString("SSID");
                key = invocation.readString("Key");
                authAlgo = invocation.readString("AuthAlgo");
                cipherAlgo = invocation.readString("CipherAlgo");
                invocation.readEnd();
                setNetwork(invocation, sSID, key, authAlgo, cipherAlgo);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetNetwork");
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

    private class DoQPlayAuth implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String seed;
            String code;
            String mID;
            String dID;
            try
            {
                invocation.readStart();
                seed = invocation.readString("Seed");
                invocation.readEnd();

            QPlayAuth outArgs = qPlayAuth(invocation, seed);
            code = outArgs.getCode();
            mID = outArgs.getMID();
            dID = outArgs.getDID();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "QPlayAuth");
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
                invocation.writeString("Code", code);
                invocation.writeString("MID", mID);
                invocation.writeString("DID", dID);
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

    private class DoInsertTracks implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String queueID;
            String startingIndex;
            String tracksMetaData;
            String numberOfSuccess;
            try
            {
                invocation.readStart();
                queueID = invocation.readString("QueueID");
                startingIndex = invocation.readString("StartingIndex");
                tracksMetaData = invocation.readString("TracksMetaData");
                invocation.readEnd();
                 numberOfSuccess = insertTracks(invocation, queueID, startingIndex, tracksMetaData);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "InsertTracks");
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
                invocation.writeString("NumberOfSuccess", numberOfSuccess);
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

    private class DoRemoveTracks implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String queueID;
            String startingIndex;
            String numberOfTracks;
            String numberOfSuccess;
            try
            {
                invocation.readStart();
                queueID = invocation.readString("QueueID");
                startingIndex = invocation.readString("StartingIndex");
                numberOfTracks = invocation.readString("NumberOfTracks");
                invocation.readEnd();
                 numberOfSuccess = removeTracks(invocation, queueID, startingIndex, numberOfTracks);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "RemoveTracks");
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
                invocation.writeString("NumberOfSuccess", numberOfSuccess);
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

    private class DoGetTracksInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String startingIndex;
            String numberOfTracks;
            String tracksMetaData;
            try
            {
                invocation.readStart();
                startingIndex = invocation.readString("StartingIndex");
                numberOfTracks = invocation.readString("NumberOfTracks");
                invocation.readEnd();
                 tracksMetaData = getTracksInfo(invocation, startingIndex, numberOfTracks);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetTracksInfo");
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
                invocation.writeString("TracksMetaData", tracksMetaData);
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

    private class DoSetTracksInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String queueID;
            String startingIndex;
            String nextIndex;
            String tracksMetaData;
            String numberOfSuccess;
            try
            {
                invocation.readStart();
                queueID = invocation.readString("QueueID");
                startingIndex = invocation.readString("StartingIndex");
                nextIndex = invocation.readString("NextIndex");
                tracksMetaData = invocation.readString("TracksMetaData");
                invocation.readEnd();
                 numberOfSuccess = setTracksInfo(invocation, queueID, startingIndex, nextIndex, tracksMetaData);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetTracksInfo");
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
                invocation.writeString("NumberOfSuccess", numberOfSuccess);
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

    private class DoGetTracksCount implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String nrTracks;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 nrTracks = getTracksCount(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetTracksCount");
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
                invocation.writeString("NrTracks", nrTracks);
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

    private class DoGetMaxTracks implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String maxTracks;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 maxTracks = getMaxTracks(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetMaxTracks");
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
                invocation.writeString("MaxTracks", maxTracks);
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

