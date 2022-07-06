package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyTencentComQPlay1.*;
import org.openhome.net.core.*;

    
interface ICpProxyTencentComQPlay1 extends ICpProxy
{
    public void syncSetNetwork(String aSSID, String aKey, String aAuthAlgo, String aCipherAlgo);
    public void beginSetNetwork(String aSSID, String aKey, String aAuthAlgo, String aCipherAlgo, ICpProxyListener aCallback);
    public void endSetNetwork(long aAsyncHandle);
    public QPlayAuth syncQPlayAuth(String aSeed);
    public void beginQPlayAuth(String aSeed, ICpProxyListener aCallback);
    public QPlayAuth endQPlayAuth(long aAsyncHandle);
    public String syncInsertTracks(String aQueueID, String aStartingIndex, String aTracksMetaData);
    public void beginInsertTracks(String aQueueID, String aStartingIndex, String aTracksMetaData, ICpProxyListener aCallback);
    public String endInsertTracks(long aAsyncHandle);
    public String syncRemoveTracks(String aQueueID, String aStartingIndex, String aNumberOfTracks);
    public void beginRemoveTracks(String aQueueID, String aStartingIndex, String aNumberOfTracks, ICpProxyListener aCallback);
    public String endRemoveTracks(long aAsyncHandle);
    public String syncGetTracksInfo(String aStartingIndex, String aNumberOfTracks);
    public void beginGetTracksInfo(String aStartingIndex, String aNumberOfTracks, ICpProxyListener aCallback);
    public String endGetTracksInfo(long aAsyncHandle);
    public String syncSetTracksInfo(String aQueueID, String aStartingIndex, String aNextIndex, String aTracksMetaData);
    public void beginSetTracksInfo(String aQueueID, String aStartingIndex, String aNextIndex, String aTracksMetaData, ICpProxyListener aCallback);
    public String endSetTracksInfo(long aAsyncHandle);
    public String syncGetTracksCount();
    public void beginGetTracksCount(ICpProxyListener aCallback);
    public String endGetTracksCount(long aAsyncHandle);
    public String syncGetMaxTracks();
    public void beginGetMaxTracks(ICpProxyListener aCallback);
    public String endGetMaxTracks(long aAsyncHandle);
}

class SyncSetNetworkTencentComQPlay1 extends SyncProxyAction
{
    private CpProxyTencentComQPlay1 iService;

    public SyncSetNetworkTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetNetwork(aAsyncHandle);
        
    }
}

class SyncQPlayAuthTencentComQPlay1 extends SyncProxyAction
{
    private CpProxyTencentComQPlay1 iService;
    private String iCode;
    private String iMID;
    private String iDID;

    public SyncQPlayAuthTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
    {
        iService = aProxy;
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
    protected void completeRequest(long aAsyncHandle)
    {
        QPlayAuth result = iService.endQPlayAuth(aAsyncHandle);
        
        iCode = result.getCode();
        iMID = result.getMID();
        iDID = result.getDID();
    }
}

class SyncInsertTracksTencentComQPlay1 extends SyncProxyAction
{
    private CpProxyTencentComQPlay1 iService;
    private String iNumberOfSuccess;

    public SyncInsertTracksTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
    {
        iService = aProxy;
    }
    public String getNumberOfSuccess()
    {
        return iNumberOfSuccess;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endInsertTracks(aAsyncHandle);
        
        iNumberOfSuccess = result;
    }
}

class SyncRemoveTracksTencentComQPlay1 extends SyncProxyAction
{
    private CpProxyTencentComQPlay1 iService;
    private String iNumberOfSuccess;

    public SyncRemoveTracksTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
    {
        iService = aProxy;
    }
    public String getNumberOfSuccess()
    {
        return iNumberOfSuccess;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endRemoveTracks(aAsyncHandle);
        
        iNumberOfSuccess = result;
    }
}

class SyncGetTracksInfoTencentComQPlay1 extends SyncProxyAction
{
    private CpProxyTencentComQPlay1 iService;
    private String iTracksMetaData;

    public SyncGetTracksInfoTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
    {
        iService = aProxy;
    }
    public String getTracksMetaData()
    {
        return iTracksMetaData;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetTracksInfo(aAsyncHandle);
        
        iTracksMetaData = result;
    }
}

class SyncSetTracksInfoTencentComQPlay1 extends SyncProxyAction
{
    private CpProxyTencentComQPlay1 iService;
    private String iNumberOfSuccess;

    public SyncSetTracksInfoTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
    {
        iService = aProxy;
    }
    public String getNumberOfSuccess()
    {
        return iNumberOfSuccess;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endSetTracksInfo(aAsyncHandle);
        
        iNumberOfSuccess = result;
    }
}

class SyncGetTracksCountTencentComQPlay1 extends SyncProxyAction
{
    private CpProxyTencentComQPlay1 iService;
    private String iNrTracks;

    public SyncGetTracksCountTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
    {
        iService = aProxy;
    }
    public String getNrTracks()
    {
        return iNrTracks;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetTracksCount(aAsyncHandle);
        
        iNrTracks = result;
    }
}

class SyncGetMaxTracksTencentComQPlay1 extends SyncProxyAction
{
    private CpProxyTencentComQPlay1 iService;
    private String iMaxTracks;

    public SyncGetMaxTracksTencentComQPlay1(CpProxyTencentComQPlay1 aProxy)
    {
        iService = aProxy;
    }
    public String getMaxTracks()
    {
        return iMaxTracks;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endGetMaxTracks(aAsyncHandle);
        
        iMaxTracks = result;
    }
}

/**
 * Proxy for the tencent.com:QPlay:1 UPnP service
 */
public class CpProxyTencentComQPlay1 extends CpProxy implements ICpProxyTencentComQPlay1
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

    private Action iActionSetNetwork;
    private Action iActionQPlayAuth;
    private Action iActionInsertTracks;
    private Action iActionRemoveTracks;
    private Action iActionGetTracksInfo;
    private Action iActionSetTracksInfo;
    private Action iActionGetTracksCount;
    private Action iActionGetMaxTracks;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyTencentComQPlay1(CpDevice aDevice)
    {
        super("tencent-com", "QPlay", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionSetNetwork = new Action("SetNetwork");
        param = new ParameterString("SSID", allowedValues);
        iActionSetNetwork.addInputParameter(param);
        param = new ParameterString("Key", allowedValues);
        iActionSetNetwork.addInputParameter(param);
        allowedValues.add("open");
        allowedValues.add("shared");
        allowedValues.add("WPA");
        allowedValues.add("WPAPSK");
        allowedValues.add("WPA2");
        allowedValues.add("WPA2PSK");
        param = new ParameterString("AuthAlgo", allowedValues);
        iActionSetNetwork.addInputParameter(param);
        allowedValues.clear();
        allowedValues.add("none");
        allowedValues.add("WEP");
        allowedValues.add("TKIP");
        allowedValues.add("AES");
        param = new ParameterString("CipherAlgo", allowedValues);
        iActionSetNetwork.addInputParameter(param);
        allowedValues.clear();

        iActionQPlayAuth = new Action("QPlayAuth");
        param = new ParameterString("Seed", allowedValues);
        iActionQPlayAuth.addInputParameter(param);
        param = new ParameterString("Code", allowedValues);
        iActionQPlayAuth.addOutputParameter(param);
        param = new ParameterString("MID", allowedValues);
        iActionQPlayAuth.addOutputParameter(param);
        param = new ParameterString("DID", allowedValues);
        iActionQPlayAuth.addOutputParameter(param);

        iActionInsertTracks = new Action("InsertTracks");
        param = new ParameterString("QueueID", allowedValues);
        iActionInsertTracks.addInputParameter(param);
        param = new ParameterString("StartingIndex", allowedValues);
        iActionInsertTracks.addInputParameter(param);
        param = new ParameterString("TracksMetaData", allowedValues);
        iActionInsertTracks.addInputParameter(param);
        param = new ParameterString("NumberOfSuccess", allowedValues);
        iActionInsertTracks.addOutputParameter(param);

        iActionRemoveTracks = new Action("RemoveTracks");
        param = new ParameterString("QueueID", allowedValues);
        iActionRemoveTracks.addInputParameter(param);
        param = new ParameterString("StartingIndex", allowedValues);
        iActionRemoveTracks.addInputParameter(param);
        param = new ParameterString("NumberOfTracks", allowedValues);
        iActionRemoveTracks.addInputParameter(param);
        param = new ParameterString("NumberOfSuccess", allowedValues);
        iActionRemoveTracks.addOutputParameter(param);

        iActionGetTracksInfo = new Action("GetTracksInfo");
        param = new ParameterString("StartingIndex", allowedValues);
        iActionGetTracksInfo.addInputParameter(param);
        param = new ParameterString("NumberOfTracks", allowedValues);
        iActionGetTracksInfo.addInputParameter(param);
        param = new ParameterString("TracksMetaData", allowedValues);
        iActionGetTracksInfo.addOutputParameter(param);

        iActionSetTracksInfo = new Action("SetTracksInfo");
        param = new ParameterString("QueueID", allowedValues);
        iActionSetTracksInfo.addInputParameter(param);
        param = new ParameterString("StartingIndex", allowedValues);
        iActionSetTracksInfo.addInputParameter(param);
        param = new ParameterString("NextIndex", allowedValues);
        iActionSetTracksInfo.addInputParameter(param);
        param = new ParameterString("TracksMetaData", allowedValues);
        iActionSetTracksInfo.addInputParameter(param);
        param = new ParameterString("NumberOfSuccess", allowedValues);
        iActionSetTracksInfo.addOutputParameter(param);

        iActionGetTracksCount = new Action("GetTracksCount");
        param = new ParameterString("NrTracks", allowedValues);
        iActionGetTracksCount.addOutputParameter(param);

        iActionGetMaxTracks = new Action("GetMaxTracks");
        param = new ParameterString("MaxTracks", allowedValues);
        iActionGetMaxTracks.addOutputParameter(param);
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetNetwork(String aSSID, String aKey, String aAuthAlgo, String aCipherAlgo)
    {
        SyncSetNetworkTencentComQPlay1 sync = new SyncSetNetworkTencentComQPlay1(this);
        beginSetNetwork(aSSID, aKey, aAuthAlgo, aCipherAlgo, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetNetwork}.
     * 
     * @param aSSID
     * @param aKey
     * @param aAuthAlgo
     * @param aCipherAlgo
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetNetwork(String aSSID, String aKey, String aAuthAlgo, String aCipherAlgo, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetNetwork, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetwork.getInputParameter(inIndex++), aSSID));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetwork.getInputParameter(inIndex++), aKey));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetwork.getInputParameter(inIndex++), aAuthAlgo));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetNetwork.getInputParameter(inIndex++), aCipherAlgo));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetNetwork} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetNetwork} method.
     */
    public void endSetNetwork(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public QPlayAuth syncQPlayAuth(String aSeed)
    {
        SyncQPlayAuthTencentComQPlay1 sync = new SyncQPlayAuthTencentComQPlay1(this);
        beginQPlayAuth(aSeed, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new QPlayAuth(
            sync.getCode(),
            sync.getMID(),
            sync.getDID()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endQPlayAuth}.
     * 
     * @param aSeed
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginQPlayAuth(String aSeed, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionQPlayAuth, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionQPlayAuth.getInputParameter(inIndex++), aSeed));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionQPlayAuth.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionQPlayAuth.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionQPlayAuth.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginQPlayAuth} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginQPlayAuth} method.
     * @return the result of the previously invoked action.
     */
    public QPlayAuth endQPlayAuth(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String code = Invocation.getOutputString(aAsyncHandle, index++);
        String mID = Invocation.getOutputString(aAsyncHandle, index++);
        String dID = Invocation.getOutputString(aAsyncHandle, index++);
        return new QPlayAuth(
            code,
            mID,
            dID
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncInsertTracks(String aQueueID, String aStartingIndex, String aTracksMetaData)
    {
        SyncInsertTracksTencentComQPlay1 sync = new SyncInsertTracksTencentComQPlay1(this);
        beginInsertTracks(aQueueID, aStartingIndex, aTracksMetaData, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getNumberOfSuccess();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endInsertTracks}.
     * 
     * @param aQueueID
     * @param aStartingIndex
     * @param aTracksMetaData
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginInsertTracks(String aQueueID, String aStartingIndex, String aTracksMetaData, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionInsertTracks, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionInsertTracks.getInputParameter(inIndex++), aQueueID));
        invocation.addInput(new ArgumentString((ParameterString)iActionInsertTracks.getInputParameter(inIndex++), aStartingIndex));
        invocation.addInput(new ArgumentString((ParameterString)iActionInsertTracks.getInputParameter(inIndex++), aTracksMetaData));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionInsertTracks.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginInsertTracks} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginInsertTracks} method.
     * @return the result of the previously invoked action.
     */
    public String endInsertTracks(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String numberOfSuccess = Invocation.getOutputString(aAsyncHandle, index++);
        return numberOfSuccess;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncRemoveTracks(String aQueueID, String aStartingIndex, String aNumberOfTracks)
    {
        SyncRemoveTracksTencentComQPlay1 sync = new SyncRemoveTracksTencentComQPlay1(this);
        beginRemoveTracks(aQueueID, aStartingIndex, aNumberOfTracks, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getNumberOfSuccess();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endRemoveTracks}.
     * 
     * @param aQueueID
     * @param aStartingIndex
     * @param aNumberOfTracks
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginRemoveTracks(String aQueueID, String aStartingIndex, String aNumberOfTracks, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionRemoveTracks, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionRemoveTracks.getInputParameter(inIndex++), aQueueID));
        invocation.addInput(new ArgumentString((ParameterString)iActionRemoveTracks.getInputParameter(inIndex++), aStartingIndex));
        invocation.addInput(new ArgumentString((ParameterString)iActionRemoveTracks.getInputParameter(inIndex++), aNumberOfTracks));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionRemoveTracks.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginRemoveTracks} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginRemoveTracks} method.
     * @return the result of the previously invoked action.
     */
    public String endRemoveTracks(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String numberOfSuccess = Invocation.getOutputString(aAsyncHandle, index++);
        return numberOfSuccess;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetTracksInfo(String aStartingIndex, String aNumberOfTracks)
    {
        SyncGetTracksInfoTencentComQPlay1 sync = new SyncGetTracksInfoTencentComQPlay1(this);
        beginGetTracksInfo(aStartingIndex, aNumberOfTracks, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getTracksMetaData();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetTracksInfo}.
     * 
     * @param aStartingIndex
     * @param aNumberOfTracks
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetTracksInfo(String aStartingIndex, String aNumberOfTracks, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetTracksInfo, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionGetTracksInfo.getInputParameter(inIndex++), aStartingIndex));
        invocation.addInput(new ArgumentString((ParameterString)iActionGetTracksInfo.getInputParameter(inIndex++), aNumberOfTracks));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetTracksInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetTracksInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetTracksInfo} method.
     * @return the result of the previously invoked action.
     */
    public String endGetTracksInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String tracksMetaData = Invocation.getOutputString(aAsyncHandle, index++);
        return tracksMetaData;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncSetTracksInfo(String aQueueID, String aStartingIndex, String aNextIndex, String aTracksMetaData)
    {
        SyncSetTracksInfoTencentComQPlay1 sync = new SyncSetTracksInfoTencentComQPlay1(this);
        beginSetTracksInfo(aQueueID, aStartingIndex, aNextIndex, aTracksMetaData, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getNumberOfSuccess();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetTracksInfo}.
     * 
     * @param aQueueID
     * @param aStartingIndex
     * @param aNextIndex
     * @param aTracksMetaData
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetTracksInfo(String aQueueID, String aStartingIndex, String aNextIndex, String aTracksMetaData, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetTracksInfo, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetTracksInfo.getInputParameter(inIndex++), aQueueID));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetTracksInfo.getInputParameter(inIndex++), aStartingIndex));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetTracksInfo.getInputParameter(inIndex++), aNextIndex));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetTracksInfo.getInputParameter(inIndex++), aTracksMetaData));
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionSetTracksInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetTracksInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetTracksInfo} method.
     * @return the result of the previously invoked action.
     */
    public String endSetTracksInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String numberOfSuccess = Invocation.getOutputString(aAsyncHandle, index++);
        return numberOfSuccess;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetTracksCount()
    {
        SyncGetTracksCountTencentComQPlay1 sync = new SyncGetTracksCountTencentComQPlay1(this);
        beginGetTracksCount(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getNrTracks();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetTracksCount}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetTracksCount(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetTracksCount, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetTracksCount.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetTracksCount} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetTracksCount} method.
     * @return the result of the previously invoked action.
     */
    public String endGetTracksCount(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String nrTracks = Invocation.getOutputString(aAsyncHandle, index++);
        return nrTracks;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncGetMaxTracks()
    {
        SyncGetMaxTracksTencentComQPlay1 sync = new SyncGetMaxTracksTencentComQPlay1(this);
        beginGetMaxTracks(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getMaxTracks();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetMaxTracks}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetMaxTracks(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetMaxTracks, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetMaxTracks.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetMaxTracks} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetMaxTracks} method.
     * @return the result of the previously invoked action.
     */
    public String endGetMaxTracks(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String maxTracks = Invocation.getOutputString(aAsyncHandle, index++);
        return maxTracks;
    }
        

    /**
     * Dispose of this control point proxy.
     * Must be called for each class instance.
     * Must be called before <tt>Library.close()</tt>.
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            disposeProxy();
            iHandle = 0;
            iActionSetNetwork.destroy();
            iActionQPlayAuth.destroy();
            iActionInsertTracks.destroy();
            iActionRemoveTracks.destroy();
            iActionGetTracksInfo.destroy();
            iActionSetTracksInfo.destroy();
            iActionGetTracksCount.destroy();
            iActionGetMaxTracks.destroy();
        }
    }
}

