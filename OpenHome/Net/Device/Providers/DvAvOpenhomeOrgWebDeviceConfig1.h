#ifndef HEADER_DVAVOPENHOMEORGWEBDEVICECONFIG1
#define HEADER_DVAVOPENHOMEORGWEBDEVICECONFIG1

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
 * Provider for the av.openhome.org:WebDeviceConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebDeviceConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebDeviceConfig1() {}
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
    /**
     * Set the value of the DeviceConfig property
     *
     * Can only be called if EnablePropertyDeviceConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyDeviceConfig(const Brx& aValue);
    /**
     * Get a copy of the value of the DeviceConfig property
     *
     * Can only be called if EnablePropertyDeviceConfig has previously been called.
     */
    void GetPropertyDeviceConfig(Brhz& aValue);
    /**
     * Output the value of the DeviceConfig property without an intermediate copy.
     *
     * Can only be called if EnablePropertyDeviceConfig has previously been called.
     */
    void WritePropertyDeviceConfig(IWriter& aWriter);
    /**
     * Set the value of the CurrentAction property
     *
     * Can only be called if EnablePropertyCurrentAction has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyCurrentAction(TUint aValue);
    /**
     * Get a copy of the value of the CurrentAction property
     *
     * Can only be called if EnablePropertyCurrentAction has previously been called.
     */
    void GetPropertyCurrentAction(TUint& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebDeviceConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebDeviceConfig1(DviDevice& aDevice);
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
    virtual void GetDeviceConfig(IDvInvocation& aInvocation, IDvInvocationResponseString& aDeviceConfig);
    /**
     * SetDeviceConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDeviceConfig action for the owning device.
     * Must be implemented iff EnableActionSetDeviceConfig was called.
     */
    virtual void SetDeviceConfig(IDvInvocation& aInvocation, const Brx& aDeviceConfig);
    /**
     * GetWiFiList action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetWiFiList action for the owning device.
     * Must be implemented iff EnableActionGetWiFiList was called.
     */
    virtual void GetWiFiList(IDvInvocation& aInvocation, IDvInvocationResponseString& aWiFiList);
    /**
     * SetTimeZone action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetTimeZone action for the owning device.
     * Must be implemented iff EnableActionSetTimeZone was called.
     */
    virtual void SetTimeZone(IDvInvocation& aInvocation, const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp);
    /**
     * GetServiceLocation action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetServiceLocation action for the owning device.
     * Must be implemented iff EnableActionGetServiceLocation was called.
     */
    virtual void GetServiceLocation(IDvInvocation& aInvocation, IDvInvocationResponseString& aServiceLoaction);
private:
    DvProviderAvOpenhomeOrgWebDeviceConfig1();
    void Construct();
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

#endif // HEADER_DVAVOPENHOMEORGWEBDEVICECONFIG1

