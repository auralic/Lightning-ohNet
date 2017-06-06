#ifndef HEADER_DVAVOPENHOMEORGWEBDEVICECONFIG1CPP
#define HEADER_DVAVOPENHOMEORGWEBDEVICECONFIG1CPP

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
 * Provider for the av.openhome.org:WebDeviceConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp() {}
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
     * Set the value of the DeviceConfig property
     *
     * Can only be called if EnablePropertyDeviceConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyDeviceConfig(const std::string& aValue);
    /**
     * Get a copy of the value of the DeviceConfig property
     *
     * Can only be called if EnablePropertyDeviceConfig has previously been called.
     */
    void GetPropertyDeviceConfig(std::string& aValue);
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
    DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the Alive property.
     */
    void EnablePropertyAlive();
    /**
     * Enable the DeviceConfig property.
     */
    void EnablePropertyDeviceConfig();
    /**
     * Enable the CurrentAction property.
     */
    void EnablePropertyCurrentAction();
    /**
     * Signal that the action GetDeviceConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDeviceConfig must be overridden if this is called.
     */
    void EnableActionGetDeviceConfig();
    /**
     * Signal that the action SetDeviceConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDeviceConfig must be overridden if this is called.
     */
    void EnableActionSetDeviceConfig();
    /**
     * Signal that the action GetWiFiList is supported.
     * The action's availability will be published in the device's service.xml.
     * GetWiFiList must be overridden if this is called.
     */
    void EnableActionGetWiFiList();
    /**
     * Signal that the action SetTimeZone is supported.
     * The action's availability will be published in the device's service.xml.
     * SetTimeZone must be overridden if this is called.
     */
    void EnableActionSetTimeZone();
    /**
     * Signal that the action GetServiceLocation is supported.
     * The action's availability will be published in the device's service.xml.
     * GetServiceLocation must be overridden if this is called.
     */
    void EnableActionGetServiceLocation();
private:
    /**
     * GetDeviceConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDeviceConfig action for the owning device.
     * Must be implemented iff EnableActionGetDeviceConfig was called.
     */
    virtual void GetDeviceConfig(IDvInvocationStd& aInvocation, std::string& aDeviceConfig);
    /**
     * SetDeviceConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDeviceConfig action for the owning device.
     * Must be implemented iff EnableActionSetDeviceConfig was called.
     */
    virtual void SetDeviceConfig(IDvInvocationStd& aInvocation, const std::string& aDeviceConfig);
    /**
     * GetWiFiList action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetWiFiList action for the owning device.
     * Must be implemented iff EnableActionGetWiFiList was called.
     */
    virtual void GetWiFiList(IDvInvocationStd& aInvocation, std::string& aWiFiList);
    /**
     * SetTimeZone action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetTimeZone action for the owning device.
     * Must be implemented iff EnableActionSetTimeZone was called.
     */
    virtual void SetTimeZone(IDvInvocationStd& aInvocation, const std::string& aTimeZone, const std::string& aCurrentTime, const std::string& aTimeStamp);
    /**
     * GetServiceLocation action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetServiceLocation action for the owning device.
     * Must be implemented iff EnableActionGetServiceLocation was called.
     */
    virtual void GetServiceLocation(IDvInvocationStd& aInvocation, std::string& aServiceLoaction);
private:
    DvProviderAvOpenhomeOrgWebDeviceConfig1Cpp();
    void DoGetDeviceConfig(IDviInvocation& aInvocation);
    void DoSetDeviceConfig(IDviInvocation& aInvocation);
    void DoGetWiFiList(IDviInvocation& aInvocation);
    void DoSetTimeZone(IDviInvocation& aInvocation);
    void DoGetServiceLocation(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyDeviceConfig;
    PropertyUint* iPropertyCurrentAction;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGWEBDEVICECONFIG1CPP

