#ifndef HEADER_DVAVOPENHOMEORGSMBINFO1
#define HEADER_DVAVOPENHOMEORGSMBINFO1

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
 * Provider for the av.openhome.org:SMBInfo:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgSMBInfo1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgSMBInfo1() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgSMBInfo1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgSMBInfo1(DviDevice& aDevice);
    /**
     * Signal that the action SetSMBConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetSMBConfig must be overridden if this is called.
     */
    void EnableActionSetSMBConfig();
    /**
     * Signal that the action GetSMBConnectResult is supported.
     * The action's availability will be published in the device's service.xml.
     * GetSMBConnectResult must be overridden if this is called.
     */
    void EnableActionGetSMBConnectResult();
    /**
     * Signal that the action GetSMBInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * GetSMBInfo must be overridden if this is called.
     */
    void EnableActionGetSMBInfo();
private:
    /**
     * SetSMBConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetSMBConfig action for the owning device.
     * Must be implemented iff EnableActionSetSMBConfig was called.
     */
    virtual void SetSMBConfig(IDvInvocation& aInvocation, const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord);
    /**
     * GetSMBConnectResult action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSMBConnectResult action for the owning device.
     * Must be implemented iff EnableActionGetSMBConnectResult was called.
     */
    virtual void GetSMBConnectResult(IDvInvocation& aInvocation, IDvInvocationResponseBool& aSMBConnectResult);
    /**
     * GetSMBInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSMBInfo action for the owning device.
     * Must be implemented iff EnableActionGetSMBInfo was called.
     */
    virtual void GetSMBInfo(IDvInvocation& aInvocation, IDvInvocationResponseBool& aSMBConnectStatus, IDvInvocationResponseString& aSMBERRORInfo, IDvInvocationResponseString& aSMBCapacity, IDvInvocationResponseString& aSMBFileCount);
private:
    DvProviderAvOpenhomeOrgSMBInfo1();
    void Construct();
    void DoSetSMBConfig(IDviInvocation& aInvocation);
    void DoGetSMBConnectResult(IDviInvocation& aInvocation);
    void DoGetSMBInfo(IDviInvocation& aInvocation);
private:
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGSMBINFO1

