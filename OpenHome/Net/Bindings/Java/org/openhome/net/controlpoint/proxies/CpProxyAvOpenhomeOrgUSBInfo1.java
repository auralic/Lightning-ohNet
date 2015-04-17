package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgUSBInfo1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgUSBInfo1 extends ICpProxy
{
    public GetUSBInfo syncGetUSBInfo();
    public void beginGetUSBInfo(ICpProxyListener aCallback);
    public GetUSBInfo endGetUSBInfo(long aAsyncHandle);
}

class SyncGetUSBInfoAvOpenhomeOrgUSBInfo1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgUSBInfo1 iService;
    private boolean iUSBPlugStatus;
    private String iUSBERRORInfo;
    private String iUSBCapacity;
    private String iUSBFileCount;

    public SyncGetUSBInfoAvOpenhomeOrgUSBInfo1(CpProxyAvOpenhomeOrgUSBInfo1 aProxy)
    {
        iService = aProxy;
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
    protected void completeRequest(long aAsyncHandle)
    {
        GetUSBInfo result = iService.endGetUSBInfo(aAsyncHandle);
        
        iUSBPlugStatus = result.getUSBPlugStatus();
        iUSBERRORInfo = result.getUSBERRORInfo();
        iUSBCapacity = result.getUSBCapacity();
        iUSBFileCount = result.getUSBFileCount();
    }
}

/**
 * Proxy for the av.openhome.org:USBInfo:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgUSBInfo1 extends CpProxy implements ICpProxyAvOpenhomeOrgUSBInfo1
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

    private Action iActionGetUSBInfo;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgUSBInfo1(CpDevice aDevice)
    {
        super("av-openhome-org", "USBInfo", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionGetUSBInfo = new Action("GetUSBInfo");
        param = new ParameterBool("USBPlugStatus");
        iActionGetUSBInfo.addOutputParameter(param);
        param = new ParameterString("USBERRORInfo", allowedValues);
        iActionGetUSBInfo.addOutputParameter(param);
        param = new ParameterString("USBCapacity", allowedValues);
        iActionGetUSBInfo.addOutputParameter(param);
        param = new ParameterString("USBFileCount", allowedValues);
        iActionGetUSBInfo.addOutputParameter(param);
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public GetUSBInfo syncGetUSBInfo()
    {
        SyncGetUSBInfoAvOpenhomeOrgUSBInfo1 sync = new SyncGetUSBInfoAvOpenhomeOrgUSBInfo1(this);
        beginGetUSBInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new GetUSBInfo(
            sync.getUSBPlugStatus(),
            sync.getUSBERRORInfo(),
            sync.getUSBCapacity(),
            sync.getUSBFileCount()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endGetUSBInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginGetUSBInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionGetUSBInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionGetUSBInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetUSBInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetUSBInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentString((ParameterString)iActionGetUSBInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginGetUSBInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginGetUSBInfo} method.
     * @return the result of the previously invoked action.
     */
    public GetUSBInfo endGetUSBInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean uSBPlugStatus = Invocation.getOutputBool(aAsyncHandle, index++);
        String uSBERRORInfo = Invocation.getOutputString(aAsyncHandle, index++);
        String uSBCapacity = Invocation.getOutputString(aAsyncHandle, index++);
        String uSBFileCount = Invocation.getOutputString(aAsyncHandle, index++);
        return new GetUSBInfo(
            uSBPlugStatus,
            uSBERRORInfo,
            uSBCapacity,
            uSBFileCount
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
            iActionGetUSBInfo.destroy();
        }
    }
}

