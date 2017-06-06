#ifndef HEADER_DVAVOPENHOMEORGTESTRESAMPLERCONFIG1CPP
#define HEADER_DVAVOPENHOMEORGTESTRESAMPLERCONFIG1CPP

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
 * Provider for the av.openhome.org:TestResamplerConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgTestResamplerConfig1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgTestResamplerConfig1Cpp() {}
    /**
     * Set the value of the CurrentAction property
     *
     * Can only be called if EnablePropertyCurrentAction has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyCurrentAction(uint32_t aValue);
    /**
     * Get a copy of the value of the CurrentAction property
     *
     * Can only be called if EnablePropertyCurrentAction has previously been called.
     */
    void GetPropertyCurrentAction(uint32_t& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgTestResamplerConfig1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the CurrentAction property.
     */
    void EnablePropertyCurrentAction();
    /**
     * Signal that the action SetResamplerConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetResamplerConfig must be overridden if this is called.
     */
    void EnableActionSetResamplerConfig();
    /**
     * Signal that the action GetResamplerConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetResamplerConfig must be overridden if this is called.
     */
    void EnableActionGetResamplerConfig();
    /**
     * Signal that the action SetPCMAutoDetect is supported.
     * The action's availability will be published in the device's service.xml.
     * SetPCMAutoDetect must be overridden if this is called.
     */
    void EnableActionSetPCMAutoDetect();
    /**
     * Signal that the action GetPCMAutoDetect is supported.
     * The action's availability will be published in the device's service.xml.
     * GetPCMAutoDetect must be overridden if this is called.
     */
    void EnableActionGetPCMAutoDetect();
    /**
     * Signal that the action SetDSDtoPCM is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDSDtoPCM must be overridden if this is called.
     */
    void EnableActionSetDSDtoPCM();
    /**
     * Signal that the action GetDSDtoPCM is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDSDtoPCM must be overridden if this is called.
     */
    void EnableActionGetDSDtoPCM();
private:
    /**
     * SetResamplerConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetResamplerConfig action for the owning device.
     * Must be implemented iff EnableActionSetResamplerConfig was called.
     */
    virtual void SetResamplerConfig(IDvInvocationStd& aInvocation, const std::string& aResamplerConfig);
    /**
     * GetResamplerConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetResamplerConfig action for the owning device.
     * Must be implemented iff EnableActionGetResamplerConfig was called.
     */
    virtual void GetResamplerConfig(IDvInvocationStd& aInvocation, std::string& aResamplerConfig);
    /**
     * SetPCMAutoDetect action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetPCMAutoDetect action for the owning device.
     * Must be implemented iff EnableActionSetPCMAutoDetect was called.
     */
    virtual void SetPCMAutoDetect(IDvInvocationStd& aInvocation, bool aPCMAutoDetect);
    /**
     * GetPCMAutoDetect action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPCMAutoDetect action for the owning device.
     * Must be implemented iff EnableActionGetPCMAutoDetect was called.
     */
    virtual void GetPCMAutoDetect(IDvInvocationStd& aInvocation, bool& aPCMAutoDetect);
    /**
     * SetDSDtoPCM action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDSDtoPCM action for the owning device.
     * Must be implemented iff EnableActionSetDSDtoPCM was called.
     */
    virtual void SetDSDtoPCM(IDvInvocationStd& aInvocation, bool aDSDtoPCM);
    /**
     * GetDSDtoPCM action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDSDtoPCM action for the owning device.
     * Must be implemented iff EnableActionGetDSDtoPCM was called.
     */
    virtual void GetDSDtoPCM(IDvInvocationStd& aInvocation, bool& aDSDtoPCM);
private:
    DvProviderAvOpenhomeOrgTestResamplerConfig1Cpp();
    void DoSetResamplerConfig(IDviInvocation& aInvocation);
    void DoGetResamplerConfig(IDviInvocation& aInvocation);
    void DoSetPCMAutoDetect(IDviInvocation& aInvocation);
    void DoGetPCMAutoDetect(IDviInvocation& aInvocation);
    void DoSetDSDtoPCM(IDviInvocation& aInvocation);
    void DoGetDSDtoPCM(IDviInvocation& aInvocation);
private:
    PropertyUint* iPropertyCurrentAction;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGTESTRESAMPLERCONFIG1CPP

