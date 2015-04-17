using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgMessageCenter1 : ICpProxy, IDisposable
    {
        void SyncGetMessage(out String aMessage, out uint aMessageID);
        void BeginGetMessage(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetMessage(IntPtr aAsyncHandle, out String aMessage, out uint aMessageID);
        void SetPropertyMessageChanged(System.Action aMessageChanged);
        String PropertyMessage();
        void SetPropertyMessageIDChanged(System.Action aMessageIDChanged);
        uint PropertyMessageID();
    }

    internal class SyncGetMessageAvOpenhomeOrgMessageCenter1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgMessageCenter1 iService;
        private String iMessage;
        private uint iMessageID;

        public SyncGetMessageAvOpenhomeOrgMessageCenter1(CpProxyAvOpenhomeOrgMessageCenter1 aProxy)
        {
            iService = aProxy;
        }
        public String Message()
        {
            return iMessage;
        }
        public uint MessageID()
        {
            return iMessageID;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetMessage(aAsyncHandle, out iMessage, out iMessageID);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:MessageCenter:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgMessageCenter1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgMessageCenter1
    {
        private OpenHome.Net.Core.Action iActionGetMessage;
        private PropertyString iMessage;
        private PropertyUint iMessageID;
        private System.Action iMessageChanged;
        private System.Action iMessageIDChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgMessageCenter1(CpDevice aDevice)
            : base("av-openhome-org", "MessageCenter", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetMessage = new OpenHome.Net.Core.Action("GetMessage");
            param = new ParameterString("Message", allowedValues);
            iActionGetMessage.AddOutputParameter(param);
            param = new ParameterUint("MessageID");
            iActionGetMessage.AddOutputParameter(param);

            iMessage = new PropertyString("Message", MessagePropertyChanged);
            AddProperty(iMessage);
            iMessageID = new PropertyUint("MessageID", MessageIDPropertyChanged);
            AddProperty(iMessageID);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aMessage"></param>
        /// <param name="aMessageID"></param>
        public void SyncGetMessage(out String aMessage, out uint aMessageID)
        {
            SyncGetMessageAvOpenhomeOrgMessageCenter1 sync = new SyncGetMessageAvOpenhomeOrgMessageCenter1(this);
            BeginGetMessage(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aMessage = sync.Message();
            aMessageID = sync.MessageID();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetMessage().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetMessage(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetMessage, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetMessage.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetMessage.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aMessage"></param>
        /// <param name="aMessageID"></param>
        public void EndGetMessage(IntPtr aAsyncHandle, out String aMessage, out uint aMessageID)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aMessage = Invocation.OutputString(aAsyncHandle, index++);
            aMessageID = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the Message state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgMessageCenter1 instance will not overlap.</remarks>
        /// <param name="aMessageChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyMessageChanged(System.Action aMessageChanged)
        {
            lock (iPropertyLock)
            {
                iMessageChanged = aMessageChanged;
            }
        }

        private void MessagePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iMessageChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the MessageID state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgMessageCenter1 instance will not overlap.</remarks>
        /// <param name="aMessageIDChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyMessageIDChanged(System.Action aMessageIDChanged)
        {
            lock (iPropertyLock)
            {
                iMessageIDChanged = aMessageIDChanged;
            }
        }

        private void MessageIDPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iMessageIDChanged);
            }
        }

        /// <summary>
        /// Query the value of the Message property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Message property</returns>
        public String PropertyMessage()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iMessage.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the MessageID property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the MessageID property</returns>
        public uint PropertyMessageID()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iMessageID.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Must be called for each class instance.  Must be called before Core.Library.Close().
        /// </summary>
        public void Dispose()
        {
            lock (this)
            {
                if (iHandle == IntPtr.Zero)
                    return;
                DisposeProxy();
                iHandle = IntPtr.Zero;
            }
            iActionGetMessage.Dispose();
            iMessage.Dispose();
            iMessageID.Dispose();
        }
    }
}

