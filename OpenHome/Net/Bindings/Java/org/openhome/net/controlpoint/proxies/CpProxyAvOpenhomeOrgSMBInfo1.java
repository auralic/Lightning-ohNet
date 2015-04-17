package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgSMBInfo1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgSMBInfo1 extends ICpProxy
{
    public void syncSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord);
    public void beginSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord, ICpProxyListener aCallback);
    public void endSetSMBConfig(long aAsyncHandle);
    public boolean syncGetSMBConnectResult();
    public void beginGetSMBConnectResult(ICpProxyListener aCallback);
    public boolean endGetSMBConnectResult(long aAsyncHandle);
    public GetSMBInfo syncGetSMBInfo();
    public void beginGetSMBInfo(ICpProxyListener aCallback);
    public GetSMBInfo endGetSMBInfo(long aAsyncHandle);
}

class SyncSetSMBConfigAvOpenhomeOrgSMBInfo1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgSMBInfo1 iService;

    public SyncSetSMBConfigAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetSMBConfig(aAsyncHandle);
        
    }
}

class SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgSMBInfo1 iService;
    private boolean iSMBConnectResult;

    public SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getSMBConnectResult()
    {
        return iSMBConnectResult;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endGetSMBConnectResult(aAsyncHandle);
        
        iSMBConnectResult = result;
    }
}

class SyncGetSMBInfoAvOpenhomeOrgSMBInfo1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgSMBInfo1 iService;
    private boolean iSMBConnectStatus;
    private String iSMBERRORInfo;
    private String iSMBCapacity;
    private String iSMBFileCount;

    public SyncGetSMBInfoAvOpenhomeOrgSMBInfo1(CpProxyAvOpenhomeOrgSMBInfo1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getSMBConnectStatus()
    {
        return iSMBConnectStatus;
    }
    public String getSMBERRORInfo()
    {
        return iSMBERRORInfo;
    }
    public String getSMBCapacity()
    {
        return iSMBCapacity;
    }
    public String getSMBFileCount()
    {
        return iSMBFileCount;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        GetSMBInfo result = iService.endGetSMBInfo(aAsyncHandle);
        
        iSMBConnectStatus = result.getSMBConnectStatus();
        iSMBERRORInfo = result.getSMBERRORInfo();
        iSMBCapacity = result.getSMBCapacity();
        iSMBFileCount = result.getSMBFileCount();
    }
}

/**
 * Proxy for the av.openhome.org:SMBInfo:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgSMBInfo1 extends CpProxy implements ICpProxyAvOpenhomeOrgSMBInfo1
{

    public class GetSMBInfo
    {
        private boolean iSMBConnectStatus;
        private String iSMBERRORInfo;
        private String iSMBCapacity;
        private String iSMBFileCount;

        public GetSMBInfo(
            boolean aSMBConnectStatus,
            String aSMBERRORInfo,
            String aSMBCapacity,
            String aSMBFileCount
        )
        {
            iSMBConnectStatus = aSMBConnectStatus;
            iSMBERRORInfo = aSMBERRORInfo;
            iSMBCapacity = aSMBCapacity;
            iSMBFileCount = aSMBFileCount;
        }
        public boolean getSMBConnectStatus()
        {
            return iSMBConnectStatus;
        }
        public String getSMBERRORInfo()
        {
            return iSMBERRORInfo;
        }
        public String getSMBCapacity()
        {
            return iSMBCapacity;
        }
        public String getSMBFileCount()
        {
            return iSMBFileCount;
        }
    }

    private Action iActionSetSMBConfig;
    private Action iActionGetSMBConnectResult;
    private Action iActionGetSMBInfo;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgSMBInfo1(CpDevice aDevice)
    {
        super("av-openhome-org", "SMBInfo", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionSetSMBConfig = new Action("SetSMBConfig");
        param = new ParameterString("SMBAddr", allowedValues);
        iActionSetSMBConfig.addInputParameter(param);
        param = new ParameterString("SMBUserName", allowedValues);
        iActionSetSMBConfig.addInputParameter(param);
        param = new ParameterString("SMBPassWord", allowedValues);
        iActionSetSMBConfig.addInputParameter(param);

        iActionGetSMBConnectResult = new Action("GetSMBConnectResult");
        param = new ParameterBool("SMBConnectResult");
        iActionGetSMBConnectResult.addOutputParameter(param);

        iActionGetSMBInfo = new Action("GetSMBInfo");
        param = new ParameterBool("SMBConnectStatus");
        iActionGetSMBInfo.addOutputParameter(param);
        param = new ParameterString("SMBERRORInfo", allowedValues);
        iActionGetSMBInfo.addOutputParameter(param);
        param = new ParameterString("SMBCapacity", allowedValues);
        iActionGetSMBInfo.addOutputParameter(param);
        param = new ParameterString("SMBFileCount", allowedValues);
        iActionGetSMBInfo.addOutputParameter(param);
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord)
    {
        SyncSetSMBConfigAvOpenhomeOrgSMBInfo1 sync = new SyncSetSMBConfigAvOpenhomeOrgSMBInfo1(this);
        beginSetSMBConfig(aSMBAddr, aSMBUserName, aSMBPassWord, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetSMBConfig}.
     * 
     * @param aSMBAddr
     * @param aSMBUserName
     * @param aSMBPassWord
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetSMBConfig(String aSMBAddr, String aSMBUserName, String aSMBPassWord, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetSMBConfig, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetSMBConfig.getInputParameter(inIndex++), aSMBAddr));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetSMBConfig.getInputParameter(inIndex++), aSMBUserName));
        invocation.addInput(new ArgumentString((ParameterString)iActionSetSMBConfig.getInputParameter(inIndex++), aSMBPassWord));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetSMBConfig} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetSMBConfig} method.
     */
    public void endSetSMBConfig(long aAsyncHandle)
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
    public boolean syncGetSMBConnectResult()
    {
        SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1 sync = new SyncGetSMBConnectResultAvOpenhomeOrgSMBInfo1(this);
        beginGetSMBConnectResult(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getSMBConnectResult();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetSMBConnectResult}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetSMBConnectResult(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetSMBConnectResult, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetSMBConnectResult.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetSMBConnectResult} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetSMBConnectResult} method.
     * @return the result of the previously invoked action.
     */
    public boolean endGetSMBConnectResult(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean sMBConnectResult = Invocation.getOutputBool(aAsyncHandle, index++);
        return sMBConnectResult;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetSMBInfo syncGetSMBInfo()
    {
        SyncGetSMBInfoAvOpenhomeOrgSMBInfo1 sync = new SyncGetSMBInfoAvOpenhomeOrgSMBInfo1(this);
        beginGetSMBInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetSMBInfo(
            sync.getSMBConnectStatus(),
            sync.getSMBERRORInfo(),
            sync.getSMBCapacity(),
            sync.getSMBFileCount()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetSMBInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetSMBInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetSMBInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetSMBInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSMBInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSMBInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetSMBInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetSMBInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetSMBInfo} method.
     * @return the result of the previously invoked action.
     */
    public GetSMBInfo endGetSMBInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean sMBConnectStatus = Invocation.getOutputBool(aAsyncHandle, index++);
        String sMBERRORInfo = Invocation.getOutputString(aAsyncHandle, index++);
        String sMBCapacity = Invocation.getOutputString(aAsyncHandle, index++);
        String sMBFileCount = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetSMBInfo(
            sMBConnectStatus,
            sMBERRORInfo,
            sMBCapacity,
            sMBFileCount
        );
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
            iActionSetSMBConfig.destroy();
            iActionGetSMBConnectResult.destroy();
            iActionGetSMBInfo.destroy();
        }
    }
}

