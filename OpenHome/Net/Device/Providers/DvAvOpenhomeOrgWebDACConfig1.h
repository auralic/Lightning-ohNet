#ifndef HEADER_DVAVOPENHOMEORGWEBDACCONFIG1
#define HEADER_DVAVOPENHOMEORGWEBDACCONFIG1

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
 * Provider for the av.openhome.org:WebDACConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebDACConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebDACConfig1() {}
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
     * Set the value of the DACConfig property
     *
     * Can only be called if EnablePropertyDACConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyDACConfig(const Brx& aValue);
    /**
     * Get a copy of the value of the DACConfig property
     *
     * Can only be called if EnablePropertyDACConfig has previously been called.
     */
    void GetPropertyDACConfig(Brhz& aValue);
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
    DvProviderAvOpenhomeOrgWebDACConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebDACConfig1(DviDevice& aDevice);
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
    virtual void GetDACConfig(IDvInvocation& aInvocation, IDvInvocationResponseString& aDACConfig);
    /**
     * SetDACConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDACConfig action for the owning device.
     * Must be implemented iff EnableActionSetDACConfig was called.
     */
    virtual void SetDACConfig(IDvInvocation& aInvocation, const Brx& aDACConfig);
private:
    DvProviderAvOpenhomeOrgWebDACConfig1();
    void Construct();
    void DoGetDACConfig(IDviInvocation& aInvocation);
    void DoSetDACConfig(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyDACConfig;
    PropertyUint* iPropertyCurrentAction;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGWEBDACCONFIG1

