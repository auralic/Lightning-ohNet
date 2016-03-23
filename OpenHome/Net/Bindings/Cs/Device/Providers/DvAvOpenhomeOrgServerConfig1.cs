using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgServerConfig1 : IDisposable
    {

        /// <summary>
        /// Set the value of the Alive property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyAlive(bool aValue);

        /// <summary>
        /// Get a copy of the value of the Alive property
        /// </summary>
        /// <returns>Value of the Alive property.</param>
        bool PropertyAlive();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:ServerConfig:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgServerConfig1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgServerConfig1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateSetServerName;
        private ActionDelegate iDelegateGetServerVersion;
        private ActionDelegate iDelegateGetProgressInfo;
        private ActionDelegate iDelegateGetScanVersion;
        private ActionDelegate iDelegateGetWorkMode;
        private ActionDelegate iDelegateSetWorkMode;
        private ActionDelegate iDelegateDelAllLocalDB;
        private ActionDelegate iDelegateInitHDD;
        private ActionDelegate iDelegateRescan;
        private ActionDelegate iDelegateHandMount;
        private ActionDelegate iDelegateHandUMount;
        private ActionDelegate iDelegateGetDiskInfo;
        private ActionDelegate iDelegateGetSMBConfig;
        private ActionDelegate iDelegateSetSMBConfig;
        private ActionDelegate iDelegateGetDriveMountResult;
        private ActionDelegate iDelegateEditTrack;
        private ActionDelegate iDelegateScanVersionDiff;
        private ActionDelegate iDelegateGetInitHDDResult;
        private ActionDelegate iDelegateGetHDDHasInited;
        private ActionDelegate iDelegateUSBImport;
        private ActionDelegate iDelegateGetDISKCapacity;
        private ActionDelegate iDelegateForceRescan;
        private ActionDelegate iDelegateGetCurrentScanFile;
        private PropertyBool iPropertyAlive;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgServerConfig1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "ServerConfig", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Alive property.
        /// </summary>
        public void EnablePropertyAlive()
        {
            iPropertyAlive = new PropertyBool(new ParameterBool("Alive"));
            AddProperty(iPropertyAlive);
        }

        /// <summary>
        /// Set the value of the Alive property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAlive has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyAlive(bool aValue)
        {
            if (iPropertyAlive == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyAlive, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Alive property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAlive has previously been called.</remarks>
        /// <returns>Value of the Alive property.</returns>
        public bool PropertyAlive()
        {
            if (iPropertyAlive == null)
                throw new PropertyDisabledError();
            return iPropertyAlive.Value();
        }

        /// <summary>
        /// Signal that the action SetServerName is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetServerName must be overridden if this is called.</remarks>
        protected void EnableActionSetServerName()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetServerName");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServerName", allowedValues));
            iDelegateSetServerName = new ActionDelegate(DoSetServerName);
            EnableAction(action, iDelegateSetServerName, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetServerVersion is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetServerVersion must be overridden if this is called.</remarks>
        protected void EnableActionGetServerVersion()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetServerVersion");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("ServerVersion", allowedValues));
            iDelegateGetServerVersion = new ActionDelegate(DoGetServerVersion);
            EnableAction(action, iDelegateGetServerVersion, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetProgressInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetProgressInfo must be overridden if this is called.</remarks>
        protected void EnableActionGetProgressInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetProgressInfo");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("Progress", allowedValues));
            iDelegateGetProgressInfo = new ActionDelegate(DoGetProgressInfo);
            EnableAction(action, iDelegateGetProgressInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetScanVersion is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetScanVersion must be overridden if this is called.</remarks>
        protected void EnableActionGetScanVersion()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetScanVersion");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("ScanVersion", allowedValues));
            iDelegateGetScanVersion = new ActionDelegate(DoGetScanVersion);
            EnableAction(action, iDelegateGetScanVersion, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetWorkMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetWorkMode must be overridden if this is called.</remarks>
        protected void EnableActionGetWorkMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetWorkMode");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("WorkMode", allowedValues));
            action.AddOutputParameter(new ParameterString("WorkModeList", allowedValues));
            iDelegateGetWorkMode = new ActionDelegate(DoGetWorkMode);
            EnableAction(action, iDelegateGetWorkMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetWorkMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetWorkMode must be overridden if this is called.</remarks>
        protected void EnableActionSetWorkMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetWorkMode");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("WorkMode", allowedValues));
            iDelegateSetWorkMode = new ActionDelegate(DoSetWorkMode);
            EnableAction(action, iDelegateSetWorkMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action DelAllLocalDB is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// DelAllLocalDB must be overridden if this is called.</remarks>
        protected void EnableActionDelAllLocalDB()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("DelAllLocalDB");
            iDelegateDelAllLocalDB = new ActionDelegate(DoDelAllLocalDB);
            EnableAction(action, iDelegateDelAllLocalDB, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action InitHDD is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// InitHDD must be overridden if this is called.</remarks>
        protected void EnableActionInitHDD()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("InitHDD");
            iDelegateInitHDD = new ActionDelegate(DoInitHDD);
            EnableAction(action, iDelegateInitHDD, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Rescan is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Rescan must be overridden if this is called.</remarks>
        protected void EnableActionRescan()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Rescan");
            iDelegateRescan = new ActionDelegate(DoRescan);
            EnableAction(action, iDelegateRescan, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action HandMount is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// HandMount must be overridden if this is called.</remarks>
        protected void EnableActionHandMount()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("HandMount");
            iDelegateHandMount = new ActionDelegate(DoHandMount);
            EnableAction(action, iDelegateHandMount, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action HandUMount is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// HandUMount must be overridden if this is called.</remarks>
        protected void EnableActionHandUMount()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("HandUMount");
            iDelegateHandUMount = new ActionDelegate(DoHandUMount);
            EnableAction(action, iDelegateHandUMount, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetDiskInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDiskInfo must be overridden if this is called.</remarks>
        protected void EnableActionGetDiskInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDiskInfo");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterBool("IsConnected"));
            action.AddOutputParameter(new ParameterString("StatusCode", allowedValues));
            action.AddOutputParameter(new ParameterString("StatusInfo", allowedValues));
            action.AddOutputParameter(new ParameterString("Capacity", allowedValues));
            action.AddOutputParameter(new ParameterString("FileCount", allowedValues));
            iDelegateGetDiskInfo = new ActionDelegate(DoGetDiskInfo);
            EnableAction(action, iDelegateGetDiskInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetSMBConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetSMBConfig must be overridden if this is called.</remarks>
        protected void EnableActionGetSMBConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetSMBConfig");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("SMBAddr", allowedValues));
            action.AddOutputParameter(new ParameterString("SMBUserName", allowedValues));
            action.AddOutputParameter(new ParameterString("SMBPassWord", allowedValues));
            iDelegateGetSMBConfig = new ActionDelegate(DoGetSMBConfig);
            EnableAction(action, iDelegateGetSMBConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetSMBConfig is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetSMBConfig must be overridden if this is called.</remarks>
        protected void EnableActionSetSMBConfig()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetSMBConfig");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("SMBAddr", allowedValues));
            action.AddInputParameter(new ParameterString("SMBUserName", allowedValues));
            action.AddInputParameter(new ParameterString("SMBPassWord", allowedValues));
            iDelegateSetSMBConfig = new ActionDelegate(DoSetSMBConfig);
            EnableAction(action, iDelegateSetSMBConfig, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetDriveMountResult is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDriveMountResult must be overridden if this is called.</remarks>
        protected void EnableActionGetDriveMountResult()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDriveMountResult");
            action.AddOutputParameter(new ParameterBool("DriveMountResult"));
            iDelegateGetDriveMountResult = new ActionDelegate(DoGetDriveMountResult);
            EnableAction(action, iDelegateGetDriveMountResult, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action EditTrack is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// EditTrack must be overridden if this is called.</remarks>
        protected void EnableActionEditTrack()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("EditTrack");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("EditValue", allowedValues));
            iDelegateEditTrack = new ActionDelegate(DoEditTrack);
            EnableAction(action, iDelegateEditTrack, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ScanVersionDiff is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ScanVersionDiff must be overridden if this is called.</remarks>
        protected void EnableActionScanVersionDiff()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ScanVersionDiff");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("ScanVersionDiffValue", allowedValues));
            iDelegateScanVersionDiff = new ActionDelegate(DoScanVersionDiff);
            EnableAction(action, iDelegateScanVersionDiff, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetInitHDDResult is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetInitHDDResult must be overridden if this is called.</remarks>
        protected void EnableActionGetInitHDDResult()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetInitHDDResult");
            action.AddOutputParameter(new ParameterBool("InitHDDResult"));
            iDelegateGetInitHDDResult = new ActionDelegate(DoGetInitHDDResult);
            EnableAction(action, iDelegateGetInitHDDResult, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetHDDHasInited is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetHDDHasInited must be overridden if this is called.</remarks>
        protected void EnableActionGetHDDHasInited()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetHDDHasInited");
            action.AddOutputParameter(new ParameterBool("HDDHasInited"));
            iDelegateGetHDDHasInited = new ActionDelegate(DoGetHDDHasInited);
            EnableAction(action, iDelegateGetHDDHasInited, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action USBImport is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// USBImport must be overridden if this is called.</remarks>
        protected void EnableActionUSBImport()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("USBImport");
            iDelegateUSBImport = new ActionDelegate(DoUSBImport);
            EnableAction(action, iDelegateUSBImport, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetDISKCapacity is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDISKCapacity must be overridden if this is called.</remarks>
        protected void EnableActionGetDISKCapacity()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDISKCapacity");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("DISKTotal", allowedValues));
            action.AddOutputParameter(new ParameterString("DISKUsed", allowedValues));
            action.AddOutputParameter(new ParameterString("DISKAvailable", allowedValues));
            iDelegateGetDISKCapacity = new ActionDelegate(DoGetDISKCapacity);
            EnableAction(action, iDelegateGetDISKCapacity, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ForceRescan is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ForceRescan must be overridden if this is called.</remarks>
        protected void EnableActionForceRescan()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ForceRescan");
            iDelegateForceRescan = new ActionDelegate(DoForceRescan);
            EnableAction(action, iDelegateForceRescan, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetCurrentScanFile is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetCurrentScanFile must be overridden if this is called.</remarks>
        protected void EnableActionGetCurrentScanFile()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetCurrentScanFile");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("ScanFile", allowedValues));
            iDelegateGetCurrentScanFile = new ActionDelegate(DoGetCurrentScanFile);
            EnableAction(action, iDelegateGetCurrentScanFile, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// SetServerName action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetServerName action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetServerName was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServerName"></param>
        protected virtual void SetServerName(IDvInvocation aInvocation, string aServerName)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetServerVersion action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetServerVersion action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetServerVersion was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServerVersion"></param>
        protected virtual void GetServerVersion(IDvInvocation aInvocation, out string aServerVersion)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetProgressInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetProgressInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetProgressInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aProgress"></param>
        protected virtual void GetProgressInfo(IDvInvocation aInvocation, out string aProgress)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetScanVersion action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetScanVersion action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetScanVersion was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aScanVersion"></param>
        protected virtual void GetScanVersion(IDvInvocation aInvocation, out string aScanVersion)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetWorkMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetWorkMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetWorkMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aWorkMode"></param>
        /// <param name="aWorkModeList"></param>
        protected virtual void GetWorkMode(IDvInvocation aInvocation, out string aWorkMode, out string aWorkModeList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetWorkMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetWorkMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetWorkMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aWorkMode"></param>
        protected virtual void SetWorkMode(IDvInvocation aInvocation, string aWorkMode)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// DelAllLocalDB action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// DelAllLocalDB action for the owning device.
        ///
        /// Must be implemented iff EnableActionDelAllLocalDB was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void DelAllLocalDB(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// InitHDD action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// InitHDD action for the owning device.
        ///
        /// Must be implemented iff EnableActionInitHDD was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void InitHDD(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Rescan action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Rescan action for the owning device.
        ///
        /// Must be implemented iff EnableActionRescan was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Rescan(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// HandMount action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// HandMount action for the owning device.
        ///
        /// Must be implemented iff EnableActionHandMount was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void HandMount(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// HandUMount action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// HandUMount action for the owning device.
        ///
        /// Must be implemented iff EnableActionHandUMount was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void HandUMount(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetDiskInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDiskInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDiskInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aIsConnected"></param>
        /// <param name="aStatusCode"></param>
        /// <param name="aStatusInfo"></param>
        /// <param name="aCapacity"></param>
        /// <param name="aFileCount"></param>
        protected virtual void GetDiskInfo(IDvInvocation aInvocation, out bool aIsConnected, out string aStatusCode, out string aStatusInfo, out string aCapacity, out string aFileCount)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetSMBConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetSMBConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetSMBConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSMBAddr"></param>
        /// <param name="aSMBUserName"></param>
        /// <param name="aSMBPassWord"></param>
        protected virtual void GetSMBConfig(IDvInvocation aInvocation, out string aSMBAddr, out string aSMBUserName, out string aSMBPassWord)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetSMBConfig action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetSMBConfig action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetSMBConfig was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSMBAddr"></param>
        /// <param name="aSMBUserName"></param>
        /// <param name="aSMBPassWord"></param>
        protected virtual void SetSMBConfig(IDvInvocation aInvocation, string aSMBAddr, string aSMBUserName, string aSMBPassWord)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetDriveMountResult action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDriveMountResult action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDriveMountResult was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDriveMountResult"></param>
        protected virtual void GetDriveMountResult(IDvInvocation aInvocation, out bool aDriveMountResult)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// EditTrack action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// EditTrack action for the owning device.
        ///
        /// Must be implemented iff EnableActionEditTrack was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aEditValue"></param>
        protected virtual void EditTrack(IDvInvocation aInvocation, string aEditValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ScanVersionDiff action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ScanVersionDiff action for the owning device.
        ///
        /// Must be implemented iff EnableActionScanVersionDiff was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aScanVersionDiffValue"></param>
        protected virtual void ScanVersionDiff(IDvInvocation aInvocation, out string aScanVersionDiffValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetInitHDDResult action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetInitHDDResult action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetInitHDDResult was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aInitHDDResult"></param>
        protected virtual void GetInitHDDResult(IDvInvocation aInvocation, out bool aInitHDDResult)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetHDDHasInited action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetHDDHasInited action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetHDDHasInited was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aHDDHasInited"></param>
        protected virtual void GetHDDHasInited(IDvInvocation aInvocation, out bool aHDDHasInited)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// USBImport action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// USBImport action for the owning device.
        ///
        /// Must be implemented iff EnableActionUSBImport was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void USBImport(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetDISKCapacity action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDISKCapacity action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDISKCapacity was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDISKTotal"></param>
        /// <param name="aDISKUsed"></param>
        /// <param name="aDISKAvailable"></param>
        protected virtual void GetDISKCapacity(IDvInvocation aInvocation, out string aDISKTotal, out string aDISKUsed, out string aDISKAvailable)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ForceRescan action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ForceRescan action for the owning device.
        ///
        /// Must be implemented iff EnableActionForceRescan was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void ForceRescan(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetCurrentScanFile action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetCurrentScanFile action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetCurrentScanFile was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aScanFile"></param>
        protected virtual void GetCurrentScanFile(IDvInvocation aInvocation, out string aScanFile)
        {
            throw (new ActionDisabledError());
        }

        private static int DoSetServerName(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serverName;
            try
            {
                invocation.ReadStart();
                serverName = invocation.ReadString("ServerName");
                invocation.ReadEnd();
                self.SetServerName(invocation, serverName);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetServerName");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetServerName"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetServerName", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetServerName", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetServerVersion(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serverVersion;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetServerVersion(invocation, out serverVersion);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetServerVersion");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetServerVersion"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetServerVersion", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ServerVersion", serverVersion);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetServerVersion", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetProgressInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string progress;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetProgressInfo(invocation, out progress);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetProgressInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetProgressInfo"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetProgressInfo", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Progress", progress);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetProgressInfo", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetScanVersion(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string scanVersion;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetScanVersion(invocation, out scanVersion);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetScanVersion");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetScanVersion"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetScanVersion", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ScanVersion", scanVersion);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetScanVersion", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetWorkMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string workMode;
            string workModeList;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetWorkMode(invocation, out workMode, out workModeList);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetWorkMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetWorkMode"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetWorkMode", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("WorkMode", workMode);
                invocation.WriteString("WorkModeList", workModeList);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetWorkMode", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetWorkMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string workMode;
            try
            {
                invocation.ReadStart();
                workMode = invocation.ReadString("WorkMode");
                invocation.ReadEnd();
                self.SetWorkMode(invocation, workMode);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetWorkMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetWorkMode"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetWorkMode", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetWorkMode", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoDelAllLocalDB(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.DelAllLocalDB(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "DelAllLocalDB");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "DelAllLocalDB"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "DelAllLocalDB", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "DelAllLocalDB", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoInitHDD(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.InitHDD(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "InitHDD");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "InitHDD"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "InitHDD", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "InitHDD", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoRescan(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Rescan(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Rescan");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "Rescan"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Rescan", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "Rescan", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoHandMount(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.HandMount(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "HandMount");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "HandMount"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "HandMount", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "HandMount", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoHandUMount(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.HandUMount(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "HandUMount");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "HandUMount"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "HandUMount", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "HandUMount", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetDiskInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool isConnected;
            string statusCode;
            string statusInfo;
            string capacity;
            string fileCount;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDiskInfo(invocation, out isConnected, out statusCode, out statusInfo, out capacity, out fileCount);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDiskInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetDiskInfo"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDiskInfo", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("IsConnected", isConnected);
                invocation.WriteString("StatusCode", statusCode);
                invocation.WriteString("StatusInfo", statusInfo);
                invocation.WriteString("Capacity", capacity);
                invocation.WriteString("FileCount", fileCount);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDiskInfo", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetSMBConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string sMBAddr;
            string sMBUserName;
            string sMBPassWord;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetSMBConfig(invocation, out sMBAddr, out sMBUserName, out sMBPassWord);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetSMBConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetSMBConfig"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetSMBConfig", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("SMBAddr", sMBAddr);
                invocation.WriteString("SMBUserName", sMBUserName);
                invocation.WriteString("SMBPassWord", sMBPassWord);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetSMBConfig", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetSMBConfig(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string sMBAddr;
            string sMBUserName;
            string sMBPassWord;
            try
            {
                invocation.ReadStart();
                sMBAddr = invocation.ReadString("SMBAddr");
                sMBUserName = invocation.ReadString("SMBUserName");
                sMBPassWord = invocation.ReadString("SMBPassWord");
                invocation.ReadEnd();
                self.SetSMBConfig(invocation, sMBAddr, sMBUserName, sMBPassWord);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetSMBConfig");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "SetSMBConfig"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetSMBConfig", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "SetSMBConfig", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetDriveMountResult(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool driveMountResult;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDriveMountResult(invocation, out driveMountResult);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDriveMountResult");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetDriveMountResult"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDriveMountResult", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("DriveMountResult", driveMountResult);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDriveMountResult", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoEditTrack(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string editValue;
            try
            {
                invocation.ReadStart();
                editValue = invocation.ReadString("EditValue");
                invocation.ReadEnd();
                self.EditTrack(invocation, editValue);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "EditTrack");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "EditTrack"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "EditTrack", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "EditTrack", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoScanVersionDiff(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string scanVersionDiffValue;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ScanVersionDiff(invocation, out scanVersionDiffValue);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ScanVersionDiff");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "ScanVersionDiff"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "ScanVersionDiff", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ScanVersionDiffValue", scanVersionDiffValue);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "ScanVersionDiff", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetInitHDDResult(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool initHDDResult;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetInitHDDResult(invocation, out initHDDResult);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetInitHDDResult");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetInitHDDResult"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetInitHDDResult", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("InitHDDResult", initHDDResult);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetInitHDDResult", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetHDDHasInited(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool hDDHasInited;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetHDDHasInited(invocation, out hDDHasInited);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetHDDHasInited");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetHDDHasInited"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetHDDHasInited", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("HDDHasInited", hDDHasInited);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetHDDHasInited", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoUSBImport(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.USBImport(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "USBImport");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "USBImport"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "USBImport", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "USBImport", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetDISKCapacity(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string dISKTotal;
            string dISKUsed;
            string dISKAvailable;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDISKCapacity(invocation, out dISKTotal, out dISKUsed, out dISKAvailable);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDISKCapacity");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetDISKCapacity"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDISKCapacity", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("DISKTotal", dISKTotal);
                invocation.WriteString("DISKUsed", dISKUsed);
                invocation.WriteString("DISKAvailable", dISKAvailable);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetDISKCapacity", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoForceRescan(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ForceRescan(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ForceRescan");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "ForceRescan"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "ForceRescan", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "ForceRescan", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetCurrentScanFile(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgServerConfig1 self = (DvProviderAvOpenhomeOrgServerConfig1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string scanFile;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetCurrentScanFile(invocation, out scanFile);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetCurrentScanFile");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetCurrentScanFile"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetCurrentScanFile", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ScanFile", scanFile);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetCurrentScanFile", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        /// <summary>
        /// Must be called for each class instance.  Must be called before Core.Library.Close().
        /// </summary>
        public virtual void Dispose()
        {
            if (DisposeProvider())
                iGch.Free();
        }
    }
}

