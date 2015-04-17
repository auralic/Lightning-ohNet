package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgSMBInfo1
{
        
}

/**
 * Provider for the av.openhome.org:SMBInfo:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgSMBInfo1 extends DvProvider implements IDvProviderAvOpenhomeOrgSMBInfo1
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

    private IDvInvocationListener iDelegateSetSMBConfig;
    private IDvInvocationListener iDelegateGetSMBConnectResult;
    private IDvInvocationListener iDelegateGetSMBInfo;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgSMBInfo1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "SMBInfo", 1);
    }

    /**
     * Signal that the action SetSMBConfig is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetSMBConfig must be overridden if this is called.
     */      
    protected void enableActionSetSMBConfig()
    {
        Action action = new Action("SetSMBConfig");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("SMBAddr", allowedValues));
        action.addInputParameter(new ParameterString("SMBUserName", allowedValues));
        action.addInputParameter(new ParameterString("SMBPassWord", allowedValues));
        iDelegateSetSMBConfig = new DoSetSMBConfig();
        enableAction(action, iDelegateSetSMBConfig);
    }

    /**
     * Signal that the action GetSMBConnectResult is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetSMBConnectResult must be overridden if this is called.
     */      
    protected void enableActionGetSMBConnectResult()
    {
        Action action = new Action("GetSMBConnectResult");
        action.addOutputParameter(new ParameterBool("SMBConnectResult"));
        iDelegateGetSMBConnectResult = new DoGetSMBConnectResult();
        enableAction(action, iDelegateGetSMBConnectResult);
    }

    /**
     * Signal that the action GetSMBInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * GetSMBInfo must be overridden if this is called.
     */      
    protected void enableActionGetSMBInfo()
    {
        Action action = new Action("GetSMBInfo");        List<String> allowedValues = new LinkedList<String>();
        action.addOutputParameter(new ParameterBool("SMBConnectStatus"));
        action.addOutputParameter(new ParameterString("SMBERRORInfo", allowedValues));
        action.addOutputParameter(new ParameterString("SMBCapacity", allowedValues));
        action.addOutputParameter(new ParameterString("SMBFileCount", allowedValues));
        iDelegateGetSMBInfo = new DoGetSMBInfo();
        enableAction(action, iDelegateGetSMBInfo);
    }

    /**
     * SetSMBConfig action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetSMBConfig action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetSMBConfig} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aSMBAddr
     * @param aSMBUserName
     * @param aSMBPassWord
     */
    protected void setSMBConfig(IDvInvocation aInvocation, String aSMBAddr, String aSMBUserName, String aSMBPassWord)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetSMBConnectResult action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetSMBConnectResult action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetSMBConnectResult} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean getSMBConnectResult(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * GetSMBInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * GetSMBInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionGetSMBInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected GetSMBInfo getSMBInfo(IDvInvocation aInvocation)
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


    private class DoSetSMBConfig implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String sMBAddr;
            String sMBUserName;
            String sMBPassWord;
            try
            {
                invocation.readStart();
                sMBAddr = invocation.readString("SMBAddr");
                sMBUserName = invocation.readString("SMBUserName");
                sMBPassWord = invocation.readString("SMBPassWord");
                invocation.readEnd();
                setSMBConfig(invocation, sMBAddr, sMBUserName, sMBPassWord);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetSMBConfig");
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

    private class DoGetSMBConnectResult implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean sMBConnectResult;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 sMBConnectResult = getSMBConnectResult(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetSMBConnectResult");
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
                invocation.writeBool("SMBConnectResult", sMBConnectResult);
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

    private class DoGetSMBInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean sMBConnectStatus;
            String sMBERRORInfo;
            String sMBCapacity;
            String sMBFileCount;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            GetSMBInfo outArgs = getSMBInfo(invocation);
            sMBConnectStatus = outArgs.getSMBConnectStatus();
            sMBERRORInfo = outArgs.getSMBERRORInfo();
            sMBCapacity = outArgs.getSMBCapacity();
            sMBFileCount = outArgs.getSMBFileCount();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "GetSMBInfo");
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
                invocation.writeBool("SMBConnectStatus", sMBConnectStatus);
                invocation.writeString("SMBERRORInfo", sMBERRORInfo);
                invocation.writeString("SMBCapacity", sMBCapacity);
                invocation.writeString("SMBFileCount", sMBFileCount);
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

