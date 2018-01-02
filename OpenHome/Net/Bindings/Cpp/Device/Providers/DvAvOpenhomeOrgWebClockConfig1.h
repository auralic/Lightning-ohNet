#ifndef HEADER_DVAVOPENHOMEORGWEBCLOCKCONFIG1CPP
#define HEADER_DVAVOPENHOMEORGWEBCLOCKCONFIG1CPP

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
 * Provider for the av.openhome.org:WebClockConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebClockConfig1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebClockConfig1Cpp() {}
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
     * Set the value of the ClockConfig property
     *
     * Can only be called if EnablePropertyClockConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyClockConfig(const std::string& aValue);
    /**
     * Get a copy of the value of the ClockConfig property
     *
     * Can only be called if EnablePropertyClockConfig has previously been called.
     */
    void GetPropertyClockConfig(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebClockConfig1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the Alive property.
     */
    void EnablePropertyAlive();
    /**
     * Enable the ClockConfig property.
     */
    void EnablePropertyClockConfig();
    /**
     * Signal that the action GetClockConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetClockConfig must be overridden if this is called.
     */
    void EnableActionGetClockConfig();
    /**
     * Signal that the action SetClockConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetClockConfig must be overridden if this is called.
     */
    void EnableActionSetClockConfig();
private:
    /**
     * GetClockConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetClockConfig action for the owning device.
     * Must be implemented iff EnableActionGetClockConfig was called.
     */
    virtual void GetClockConfig(IDvInvocationStd& aInvocation, std::string& aClockConfig);
    /**
     * SetClockConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetClockConfig action for the owning device.
     * Must be implemented iff EnableActionSetClockConfig was called.
     */
    virtual void SetClockConfig(IDvInvocationStd& aInvocation, const std::string& aClockConfig);
private:
    DvProviderAvOpenhomeOrgWebClockConfig1Cpp();
    void DoGetClockConfig(IDviInvocation& aInvocation);
    void DoSetClockConfig(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyClockConfig;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGWEBCLOCKCONFIG1CPP

