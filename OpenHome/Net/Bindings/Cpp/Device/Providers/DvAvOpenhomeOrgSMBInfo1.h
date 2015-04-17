#ifndef HEADER_DVAVOPENHOMEORGSMBINFO1CPP
#define HEADER_DVAVOPENHOMEORGSMBINFO1CPP

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
 * Provider for the av.openhome.org:SMBInfo:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgSMBInfo1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgSMBInfo1Cpp() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgSMBInfo1Cpp(DvDeviceStd& aDevice);
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
    virtual void SetSMBConfig(IDvInvocationStd& aInvocation, const std::string& aSMBAddr, const std::string& aSMBUserName, const std::string& aSMBPassWord);
    /**
     * GetSMBConnectResult action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSMBConnectResult action for the owning device.
     * Must be implemented iff EnableActionGetSMBConnectResult was called.
     */
    virtual void GetSMBConnectResult(IDvInvocationStd& aInvocation, bool& aSMBConnectResult);
    /**
     * GetSMBInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSMBInfo action for the owning device.
     * Must be implemented iff EnableActionGetSMBInfo was called.
     */
    virtual void GetSMBInfo(IDvInvocationStd& aInvocation, bool& aSMBConnectStatus, std::string& aSMBERRORInfo, std::string& aSMBCapacity, std::string& aSMBFileCount);
private:
    DvProviderAvOpenhomeOrgSMBInfo1Cpp();
    void DoSetSMBConfig(IDviInvocation& aInvocation);
    void DoGetSMBConnectResult(IDviInvocation& aInvocation);
    void DoGetSMBInfo(IDviInvocation& aInvocation);
private:
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGSMBINFO1CPP

