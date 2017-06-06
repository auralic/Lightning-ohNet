#ifndef HEADER_DVAVOPENHOMEORGWEBPROCESSORCONFIG1CPP
#define HEADER_DVAVOPENHOMEORGWEBPROCESSORCONFIG1CPP

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
 * Provider for the av.openhome.org:WebProcessorConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp() {}
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
     * Set the value of the ProcessorConfig property
     *
     * Can only be called if EnablePropertyProcessorConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyProcessorConfig(const std::string& aValue);
    /**
     * Get a copy of the value of the ProcessorConfig property
     *
     * Can only be called if EnablePropertyProcessorConfig has previously been called.
     */
    void GetPropertyProcessorConfig(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the Alive property.
     */
    void EnablePropertyAlive();
    /**
     * Enable the ProcessorConfig property.
     */
    void EnablePropertyProcessorConfig();
    /**
     * Signal that the action GetProcessorConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetProcessorConfig must be overridden if this is called.
     */
    void EnableActionGetProcessorConfig();
    /**
     * Signal that the action SetProcessorConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetProcessorConfig must be overridden if this is called.
     */
    void EnableActionSetProcessorConfig();
private:
    /**
     * GetProcessorConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetProcessorConfig action for the owning device.
     * Must be implemented iff EnableActionGetProcessorConfig was called.
     */
    virtual void GetProcessorConfig(IDvInvocationStd& aInvocation, std::string& aProcessorConfig);
    /**
     * SetProcessorConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetProcessorConfig action for the owning device.
     * Must be implemented iff EnableActionSetProcessorConfig was called.
     */
    virtual void SetProcessorConfig(IDvInvocationStd& aInvocation, const std::string& aProcessorConfig);
private:
    DvProviderAvOpenhomeOrgWebProcessorConfig1Cpp();
    void DoGetProcessorConfig(IDviInvocation& aInvocation);
    void DoSetProcessorConfig(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyProcessorConfig;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGWEBPROCESSORCONFIG1CPP

