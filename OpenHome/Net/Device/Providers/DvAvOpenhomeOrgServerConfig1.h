#ifndef HEADER_DVAVOPENHOMEORGSERVERCONFIG1
#define HEADER_DVAVOPENHOMEORGSERVERCONFIG1

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Core/DvDevice.h>
#include <OpenHome/Net/Core/DvProvider.h>

namespace OpenHome {
namespace Net {

class DviDevice;
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
class DvProviderAvOpenhomeOrgServerConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgServerConfig1() {}
    /**
     * Set the value of the Alive property
     *
     * Can only be called if EnablePropertyAlive has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyAlive(TBool aValue);
    /**
     * Get a copy of the value of the Alive property
     *
     * Can only be called if EnablePropertyAlive has previously been called.
     */
    void GetPropertyAlive(TBool& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgServerConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgServerConfig1(DviDevice& aDevice);
    /**
     * Enable the Alive property.
     */
    void EnablePropertyAlive();
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
private:
    /**
     * SetServerName action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetServerName action for the owning device.
     * Must be implemented iff EnableActionSetServerName was called.
     */
    virtual void SetServerName(IDvInvocation& aInvocation, const Brx& aServerName);
    /**
     * GetServerVersion action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetServerVersion action for the owning device.
     * Must be implemented iff EnableActionGetServerVersion was called.
     */
    virtual void GetServerVersion(IDvInvocation& aInvocation, IDvInvocationResponseString& aServerVersion);
    /**
     * GetProgressInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetProgressInfo action for the owning device.
     * Must be implemented iff EnableActionGetProgressInfo was called.
     */
    virtual void GetProgressInfo(IDvInvocation& aInvocation, IDvInvocationResponseString& aProgress);
    /**
     * GetScanVersion action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetScanVersion action for the owning device.
     * Must be implemented iff EnableActionGetScanVersion was called.
     */
    virtual void GetScanVersion(IDvInvocation& aInvocation, IDvInvocationResponseString& aScanVersion);
    /**
     * GetWorkMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetWorkMode action for the owning device.
     * Must be implemented iff EnableActionGetWorkMode was called.
     */
    virtual void GetWorkMode(IDvInvocation& aInvocation, IDvInvocationResponseString& aWorkMode, IDvInvocationResponseString& aWorkModeList);
    /**
     * SetWorkMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetWorkMode action for the owning device.
     * Must be implemented iff EnableActionSetWorkMode was called.
     */
    virtual void SetWorkMode(IDvInvocation& aInvocation, const Brx& aWorkMode);
    /**
     * DelAllLocalDB action.
     *
     * Will be called when the device stack receives an invocation of the
     * DelAllLocalDB action for the owning device.
     * Must be implemented iff EnableActionDelAllLocalDB was called.
     */
    virtual void DelAllLocalDB(IDvInvocation& aInvocation);
    /**
     * InitHDD action.
     *
     * Will be called when the device stack receives an invocation of the
     * InitHDD action for the owning device.
     * Must be implemented iff EnableActionInitHDD was called.
     */
    virtual void InitHDD(IDvInvocation& aInvocation);
    /**
     * Rescan action.
     *
     * Will be called when the device stack receives an invocation of the
     * Rescan action for the owning device.
     * Must be implemented iff EnableActionRescan was called.
     */
    virtual void Rescan(IDvInvocation& aInvocation);
    /**
     * HandMount action.
     *
     * Will be called when the device stack receives an invocation of the
     * HandMount action for the owning device.
     * Must be implemented iff EnableActionHandMount was called.
     */
    virtual void HandMount(IDvInvocation& aInvocation);
    /**
     * HandUMount action.
     *
     * Will be called when the device stack receives an invocation of the
     * HandUMount action for the owning device.
     * Must be implemented iff EnableActionHandUMount was called.
     */
    virtual void HandUMount(IDvInvocation& aInvocation);
    /**
     * GetDiskInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDiskInfo action for the owning device.
     * Must be implemented iff EnableActionGetDiskInfo was called.
     */
    virtual void GetDiskInfo(IDvInvocation& aInvocation, IDvInvocationResponseBool& aIsConnected, IDvInvocationResponseString& aStatusCode, IDvInvocationResponseString& aStatusInfo, IDvInvocationResponseString& aCapacity, IDvInvocationResponseString& aFileCount);
    /**
     * GetSMBConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSMBConfig action for the owning device.
     * Must be implemented iff EnableActionGetSMBConfig was called.
     */
    virtual void GetSMBConfig(IDvInvocation& aInvocation, IDvInvocationResponseString& aSMBAddr, IDvInvocationResponseString& aSMBUserName, IDvInvocationResponseString& aSMBPassWord);
    /**
     * SetSMBConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetSMBConfig action for the owning device.
     * Must be implemented iff EnableActionSetSMBConfig was called.
     */
    virtual void SetSMBConfig(IDvInvocation& aInvocation, const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord);
    /**
     * GetDriveMountResult action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDriveMountResult action for the owning device.
     * Must be implemented iff EnableActionGetDriveMountResult was called.
     */
    virtual void GetDriveMountResult(IDvInvocation& aInvocation, IDvInvocationResponseBool& aDriveMountResult);
private:
    DvProviderAvOpenhomeOrgServerConfig1();
    void Construct();
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
private:
    PropertyBool* iPropertyAlive;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGSERVERCONFIG1

