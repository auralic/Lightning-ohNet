#ifndef HEADER_DVAVOPENHOMEORGSERVERCONFIG1CPP
#define HEADER_DVAVOPENHOMEORGSERVERCONFIG1CPP

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/DvDevice.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>

#include <string>

namespace OpenHome {
namespace Net {

class IDviInvocation;
class PropertyInt;
class PropertyUint;
class PropertyBool;
class PropertyString;
class PropertyBinary;

/**
 * Provider for the av.openhome.org:ServerConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgServerConfig1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgServerConfig1Cpp() {}
    /**
     * Set the value of the PlayCD property
     *
     * Can only be called if EnablePropertyPlayCD has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyPlayCD(bool aValue);
    /**
     * Get a copy of the value of the PlayCD property
     *
     * Can only be called if EnablePropertyPlayCD has previously been called.
     */
    void GetPropertyPlayCD(bool& aValue);
    /**
     * Set the value of the Alive property
     *
     * Can only be called if EnablePropertyAlive has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAlive(bool aValue);
    /**
     * Get a copy of the value of the Alive property
     *
     * Can only be called if EnablePropertyAlive has previously been called.
     */
    void GetPropertyAlive(bool& aValue);
    /**
     * Set the value of the SubscriptValue property
     *
     * Can only be called if EnablePropertySubscriptValue has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertySubscriptValue(const std::string& aValue);
    /**
     * Get a copy of the value of the SubscriptValue property
     *
     * Can only be called if EnablePropertySubscriptValue has previously been called.
     */
    void GetPropertySubscriptValue(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgServerConfig1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the PlayCD property.
     */
    void EnablePropertyPlayCD();
    /**
     * Enable the Alive property.
     */
    void EnablePropertyAlive();
    /**
     * Enable the SubscriptValue property.
     */
    void EnablePropertySubscriptValue();
    /**
     * Signal that the action SetPlayCD is supported.
     * The action's availability will be published in the device's service.xml.
     * SetPlayCD must be overridden if this is called.
     */
    void EnableActionSetPlayCD();
    /**
     * Signal that the action SetServerName is supported.
     * The action's availability will be published in the device's service.xml.
     * SetServerName must be overridden if this is called.
     */
    void EnableActionSetServerName();
    /**
     * Signal that the action GetServerVersion is supported.
     * The action's availability will be published in the device's service.xml.
     * GetServerVersion must be overridden if this is called.
     */
    void EnableActionGetServerVersion();
    /**
     * Signal that the action GetProgressInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * GetProgressInfo must be overridden if this is called.
     */
    void EnableActionGetProgressInfo();
    /**
     * Signal that the action GetScanVersion is supported.
     * The action's availability will be published in the device's service.xml.
     * GetScanVersion must be overridden if this is called.
     */
    void EnableActionGetScanVersion();
    /**
     * Signal that the action GetWorkMode is supported.
     * The action's availability will be published in the device's service.xml.
     * GetWorkMode must be overridden if this is called.
     */
    void EnableActionGetWorkMode();
    /**
     * Signal that the action SetWorkMode is supported.
     * The action's availability will be published in the device's service.xml.
     * SetWorkMode must be overridden if this is called.
     */
    void EnableActionSetWorkMode();
    /**
     * Signal that the action DelAllLocalDB is supported.
     * The action's availability will be published in the device's service.xml.
     * DelAllLocalDB must be overridden if this is called.
     */
    void EnableActionDelAllLocalDB();
    /**
     * Signal that the action InitHDD is supported.
     * The action's availability will be published in the device's service.xml.
     * InitHDD must be overridden if this is called.
     */
    void EnableActionInitHDD();
    /**
     * Signal that the action Rescan is supported.
     * The action's availability will be published in the device's service.xml.
     * Rescan must be overridden if this is called.
     */
    void EnableActionRescan();
    /**
     * Signal that the action HandMount is supported.
     * The action's availability will be published in the device's service.xml.
     * HandMount must be overridden if this is called.
     */
    void EnableActionHandMount();
    /**
     * Signal that the action HandUMount is supported.
     * The action's availability will be published in the device's service.xml.
     * HandUMount must be overridden if this is called.
     */
    void EnableActionHandUMount();
    /**
     * Signal that the action GetDiskInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDiskInfo must be overridden if this is called.
     */
    void EnableActionGetDiskInfo();
    /**
     * Signal that the action GetSMBConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetSMBConfig must be overridden if this is called.
     */
    void EnableActionGetSMBConfig();
    /**
     * Signal that the action SetSMBConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetSMBConfig must be overridden if this is called.
     */
    void EnableActionSetSMBConfig();
    /**
     * Signal that the action GetDriveMountResult is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDriveMountResult must be overridden if this is called.
     */
    void EnableActionGetDriveMountResult();
    /**
     * Signal that the action EditTrack is supported.
     * The action's availability will be published in the device's service.xml.
     * EditTrack must be overridden if this is called.
     */
    void EnableActionEditTrack();
    /**
     * Signal that the action ScanVersionDiff is supported.
     * The action's availability will be published in the device's service.xml.
     * ScanVersionDiff must be overridden if this is called.
     */
    void EnableActionScanVersionDiff();
    /**
     * Signal that the action GetInitHDDResult is supported.
     * The action's availability will be published in the device's service.xml.
     * GetInitHDDResult must be overridden if this is called.
     */
    void EnableActionGetInitHDDResult();
    /**
     * Signal that the action GetHDDHasInited is supported.
     * The action's availability will be published in the device's service.xml.
     * GetHDDHasInited must be overridden if this is called.
     */
    void EnableActionGetHDDHasInited();
    /**
     * Signal that the action USBImport is supported.
     * The action's availability will be published in the device's service.xml.
     * USBImport must be overridden if this is called.
     */
    void EnableActionUSBImport();
    /**
     * Signal that the action GetDISKCapacity is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDISKCapacity must be overridden if this is called.
     */
    void EnableActionGetDISKCapacity();
    /**
     * Signal that the action ForceRescan is supported.
     * The action's availability will be published in the device's service.xml.
     * ForceRescan must be overridden if this is called.
     */
    void EnableActionForceRescan();
    /**
     * Signal that the action GetCurrentScanFile is supported.
     * The action's availability will be published in the device's service.xml.
     * GetCurrentScanFile must be overridden if this is called.
     */
    void EnableActionGetCurrentScanFile();
    /**
     * Signal that the action GetServerConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetServerConfig must be overridden if this is called.
     */
    void EnableActionGetServerConfig();
    /**
     * Signal that the action SetServerConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetServerConfig must be overridden if this is called.
     */
    void EnableActionSetServerConfig();
private:
    /**
     * SetPlayCD action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetPlayCD action for the owning device.
     * Must be implemented iff EnableActionSetPlayCD was called.
     */
    virtual void SetPlayCD(IDvInvocationStd& aInvocation, bool aPlayCD);
    /**
     * SetServerName action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetServerName action for the owning device.
     * Must be implemented iff EnableActionSetServerName was called.
     */
    virtual void SetServerName(IDvInvocationStd& aInvocation, const std::string& aServerName);
    /**
     * GetServerVersion action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetServerVersion action for the owning device.
     * Must be implemented iff EnableActionGetServerVersion was called.
     */
    virtual void GetServerVersion(IDvInvocationStd& aInvocation, std::string& aServerVersion);
    /**
     * GetProgressInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetProgressInfo action for the owning device.
     * Must be implemented iff EnableActionGetProgressInfo was called.
     */
    virtual void GetProgressInfo(IDvInvocationStd& aInvocation, std::string& aProgress);
    /**
     * GetScanVersion action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetScanVersion action for the owning device.
     * Must be implemented iff EnableActionGetScanVersion was called.
     */
    virtual void GetScanVersion(IDvInvocationStd& aInvocation, std::string& aScanVersion);
    /**
     * GetWorkMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetWorkMode action for the owning device.
     * Must be implemented iff EnableActionGetWorkMode was called.
     */
    virtual void GetWorkMode(IDvInvocationStd& aInvocation, std::string& aWorkMode, std::string& aWorkModeList);
    /**
     * SetWorkMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetWorkMode action for the owning device.
     * Must be implemented iff EnableActionSetWorkMode was called.
     */
    virtual void SetWorkMode(IDvInvocationStd& aInvocation, const std::string& aWorkMode);
    /**
     * DelAllLocalDB action.
     *
     * Will be called when the device stack receives an invocation of the
     * DelAllLocalDB action for the owning device.
     * Must be implemented iff EnableActionDelAllLocalDB was called.
     */
    virtual void DelAllLocalDB(IDvInvocationStd& aInvocation);
    /**
     * InitHDD action.
     *
     * Will be called when the device stack receives an invocation of the
     * InitHDD action for the owning device.
     * Must be implemented iff EnableActionInitHDD was called.
     */
    virtual void InitHDD(IDvInvocationStd& aInvocation);
    /**
     * Rescan action.
     *
     * Will be called when the device stack receives an invocation of the
     * Rescan action for the owning device.
     * Must be implemented iff EnableActionRescan was called.
     */
    virtual void Rescan(IDvInvocationStd& aInvocation);
    /**
     * HandMount action.
     *
     * Will be called when the device stack receives an invocation of the
     * HandMount action for the owning device.
     * Must be implemented iff EnableActionHandMount was called.
     */
    virtual void HandMount(IDvInvocationStd& aInvocation);
    /**
     * HandUMount action.
     *
     * Will be called when the device stack receives an invocation of the
     * HandUMount action for the owning device.
     * Must be implemented iff EnableActionHandUMount was called.
     */
    virtual void HandUMount(IDvInvocationStd& aInvocation);
    /**
     * GetDiskInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDiskInfo action for the owning device.
     * Must be implemented iff EnableActionGetDiskInfo was called.
     */
    virtual void GetDiskInfo(IDvInvocationStd& aInvocation, bool& aIsConnected, std::string& aStatusCode, std::string& aStatusInfo, std::string& aCapacity, std::string& aFileCount);
    /**
     * GetSMBConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSMBConfig action for the owning device.
     * Must be implemented iff EnableActionGetSMBConfig was called.
     */
    virtual void GetSMBConfig(IDvInvocationStd& aInvocation, std::string& aSMBAddr, std::string& aSMBUserName, std::string& aSMBPassWord);
    /**
     * SetSMBConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetSMBConfig action for the owning device.
     * Must be implemented iff EnableActionSetSMBConfig was called.
     */
    virtual void SetSMBConfig(IDvInvocationStd& aInvocation, const std::string& aSMBAddr, const std::string& aSMBUserName, const std::string& aSMBPassWord);
    /**
     * GetDriveMountResult action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDriveMountResult action for the owning device.
     * Must be implemented iff EnableActionGetDriveMountResult was called.
     */
    virtual void GetDriveMountResult(IDvInvocationStd& aInvocation, bool& aDriveMountResult);
    /**
     * EditTrack action.
     *
     * Will be called when the device stack receives an invocation of the
     * EditTrack action for the owning device.
     * Must be implemented iff EnableActionEditTrack was called.
     */
    virtual void EditTrack(IDvInvocationStd& aInvocation, const std::string& aEditValue);
    /**
     * ScanVersionDiff action.
     *
     * Will be called when the device stack receives an invocation of the
     * ScanVersionDiff action for the owning device.
     * Must be implemented iff EnableActionScanVersionDiff was called.
     */
    virtual void ScanVersionDiff(IDvInvocationStd& aInvocation, std::string& aScanVersionDiffValue);
    /**
     * GetInitHDDResult action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetInitHDDResult action for the owning device.
     * Must be implemented iff EnableActionGetInitHDDResult was called.
     */
    virtual void GetInitHDDResult(IDvInvocationStd& aInvocation, bool& aInitHDDResult);
    /**
     * GetHDDHasInited action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetHDDHasInited action for the owning device.
     * Must be implemented iff EnableActionGetHDDHasInited was called.
     */
    virtual void GetHDDHasInited(IDvInvocationStd& aInvocation, bool& aHDDHasInited);
    /**
     * USBImport action.
     *
     * Will be called when the device stack receives an invocation of the
     * USBImport action for the owning device.
     * Must be implemented iff EnableActionUSBImport was called.
     */
    virtual void USBImport(IDvInvocationStd& aInvocation);
    /**
     * GetDISKCapacity action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDISKCapacity action for the owning device.
     * Must be implemented iff EnableActionGetDISKCapacity was called.
     */
    virtual void GetDISKCapacity(IDvInvocationStd& aInvocation, std::string& aDISKTotal, std::string& aDISKUsed, std::string& aDISKAvailable);
    /**
     * ForceRescan action.
     *
     * Will be called when the device stack receives an invocation of the
     * ForceRescan action for the owning device.
     * Must be implemented iff EnableActionForceRescan was called.
     */
    virtual void ForceRescan(IDvInvocationStd& aInvocation);
    /**
     * GetCurrentScanFile action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetCurrentScanFile action for the owning device.
     * Must be implemented iff EnableActionGetCurrentScanFile was called.
     */
    virtual void GetCurrentScanFile(IDvInvocationStd& aInvocation, std::string& aScanFile);
    /**
     * GetServerConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetServerConfig action for the owning device.
     * Must be implemented iff EnableActionGetServerConfig was called.
     */
    virtual void GetServerConfig(IDvInvocationStd& aInvocation, std::string& aGetValue);
    /**
     * SetServerConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetServerConfig action for the owning device.
     * Must be implemented iff EnableActionSetServerConfig was called.
     */
    virtual void SetServerConfig(IDvInvocationStd& aInvocation, const std::string& aSetValue);
private:
    DvProviderAvOpenhomeOrgServerConfig1Cpp();
    void DoSetPlayCD(IDviInvocation& aInvocation);
    void DoSetServerName(IDviInvocation& aInvocation);
    void DoGetServerVersion(IDviInvocation& aInvocation);
    void DoGetProgressInfo(IDviInvocation& aInvocation);
    void DoGetScanVersion(IDviInvocation& aInvocation);
    void DoGetWorkMode(IDviInvocation& aInvocation);
    void DoSetWorkMode(IDviInvocation& aInvocation);
    void DoDelAllLocalDB(IDviInvocation& aInvocation);
    void DoInitHDD(IDviInvocation& aInvocation);
    void DoRescan(IDviInvocation& aInvocation);
    void DoHandMount(IDviInvocation& aInvocation);
    void DoHandUMount(IDviInvocation& aInvocation);
    void DoGetDiskInfo(IDviInvocation& aInvocation);
    void DoGetSMBConfig(IDviInvocation& aInvocation);
    void DoSetSMBConfig(IDviInvocation& aInvocation);
    void DoGetDriveMountResult(IDviInvocation& aInvocation);
    void DoEditTrack(IDviInvocation& aInvocation);
    void DoScanVersionDiff(IDviInvocation& aInvocation);
    void DoGetInitHDDResult(IDviInvocation& aInvocation);
    void DoGetHDDHasInited(IDviInvocation& aInvocation);
    void DoUSBImport(IDviInvocation& aInvocation);
    void DoGetDISKCapacity(IDviInvocation& aInvocation);
    void DoForceRescan(IDviInvocation& aInvocation);
    void DoGetCurrentScanFile(IDviInvocation& aInvocation);
    void DoGetServerConfig(IDviInvocation& aInvocation);
    void DoSetServerConfig(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyPlayCD;
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertySubscriptValue;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGSERVERCONFIG1CPP

