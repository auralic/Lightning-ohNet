#ifndef HEADER_DVAVOPENHOMEORGWEBRESAMPLERCONFIG1CPP
#define HEADER_DVAVOPENHOMEORGWEBRESAMPLERCONFIG1CPP

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
 * Provider for the av.openhome.org:WebResamplerConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp() {}
    /**
     * Set the value of the ResamplerConfig property
     *
     * Can only be called if EnablePropertyResamplerConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyResamplerConfig(const std::string& aValue);
    /**
     * Get a copy of the value of the ResamplerConfig property
     *
     * Can only be called if EnablePropertyResamplerConfig has previously been called.
     */
    void GetPropertyResamplerConfig(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the ResamplerConfig property.
     */
    void EnablePropertyResamplerConfig();
    /**
     * Signal that the action GetResamplerConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetResamplerConfig must be overridden if this is called.
     */
    void EnableActionGetResamplerConfig();
    /**
     * Signal that the action SetResamplerConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetResamplerConfig must be overridden if this is called.
     */
    void EnableActionSetResamplerConfig();
private:
    /**
     * GetResamplerConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetResamplerConfig action for the owning device.
     * Must be implemented iff EnableActionGetResamplerConfig was called.
     */
    virtual void GetResamplerConfig(IDvInvocationStd& aInvocation, std::string& aResamplerConfig);
    /**
     * SetResamplerConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetResamplerConfig action for the owning device.
     * Must be implemented iff EnableActionSetResamplerConfig was called.
     */
    virtual void SetResamplerConfig(IDvInvocationStd& aInvocation, const std::string& aResamplerConfig);
private:
    DvProviderAvOpenhomeOrgWebResamplerConfig1Cpp();
    void DoGetResamplerConfig(IDviInvocation& aInvocation);
    void DoSetResamplerConfig(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyResamplerConfig;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGWEBRESAMPLERCONFIG1CPP

