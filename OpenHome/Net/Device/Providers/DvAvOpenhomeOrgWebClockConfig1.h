#ifndef HEADER_DVAVOPENHOMEORGWEBCLOCKCONFIG1
#define HEADER_DVAVOPENHOMEORGWEBCLOCKCONFIG1

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
 * Provider for the av.openhome.org:WebClockConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebClockConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebClockConfig1() {}
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
     * Set the value of the ClockConfig property
     *
     * Can only be called if EnablePropertyClockConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyClockConfig(const Brx& aValue);
    /**
     * Get a copy of the value of the ClockConfig property
     *
     * Can only be called if EnablePropertyClockConfig has previously been called.
     */
    void GetPropertyClockConfig(Brhz& aValue);
    /**
     * Output the value of the ClockConfig property without an intermediate copy.
     *
     * Can only be called if EnablePropertyClockConfig has previously been called.
     */
    void WritePropertyClockConfig(IWriter& aWriter);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebClockConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebClockConfig1(DviDevice& aDevice);
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
    virtual void GetClockConfig(IDvInvocation& aInvocation, IDvInvocationResponseString& aClockConfig);
    /**
     * SetClockConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetClockConfig action for the owning device.
     * Must be implemented iff EnableActionSetClockConfig was called.
     */
    virtual void SetClockConfig(IDvInvocation& aInvocation, const Brx& aClockConfig);
private:
    DvProviderAvOpenhomeOrgWebClockConfig1();
    void Construct();
    void DoGetClockConfig(IDviInvocation& aInvocation);
    void DoSetClockConfig(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyClockConfig;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGWEBCLOCKCONFIG1

