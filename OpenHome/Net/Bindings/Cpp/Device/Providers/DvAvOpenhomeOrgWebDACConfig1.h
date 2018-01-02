#ifndef HEADER_DVAVOPENHOMEORGWEBDACCONFIG1CPP
#define HEADER_DVAVOPENHOMEORGWEBDACCONFIG1CPP

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
 * Provider for the av.openhome.org:WebDACConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebDACConfig1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebDACConfig1Cpp() {}
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
     * Set the value of the DACConfig property
     *
     * Can only be called if EnablePropertyDACConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyDACConfig(const std::string& aValue);
    /**
     * Get a copy of the value of the DACConfig property
     *
     * Can only be called if EnablePropertyDACConfig has previously been called.
     */
    void GetPropertyDACConfig(std::string& aValue);
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
    DvProviderAvOpenhomeOrgWebDACConfig1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the Alive property.
     */
    void EnablePropertyAlive();
    /**
     * Enable the DACConfig property.
     */
    void EnablePropertyDACConfig();
    /**
     * Enable the CurrentAction property.
     */
    void EnablePropertyCurrentAction();
    /**
     * Signal that the action GetDACConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDACConfig must be overridden if this is called.
     */
    void EnableActionGetDACConfig();
    /**
     * Signal that the action SetDACConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDACConfig must be overridden if this is called.
     */
    void EnableActionSetDACConfig();
private:
    /**
     * GetDACConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDACConfig action for the owning device.
     * Must be implemented iff EnableActionGetDACConfig was called.
     */
    virtual void GetDACConfig(IDvInvocationStd& aInvocation, std::string& aDACConfig);
    /**
     * SetDACConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDACConfig action for the owning device.
     * Must be implemented iff EnableActionSetDACConfig was called.
     */
    virtual void SetDACConfig(IDvInvocationStd& aInvocation, const std::string& aDACConfig);
private:
    DvProviderAvOpenhomeOrgWebDACConfig1Cpp();
    void DoGetDACConfig(IDviInvocation& aInvocation);
    void DoSetDACConfig(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyDACConfig;
    PropertyUint* iPropertyCurrentAction;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGWEBDACCONFIG1CPP

