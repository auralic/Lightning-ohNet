#ifndef HEADER_DVAVOPENHOMEORGWEBRENDERERCONFIG1
#define HEADER_DVAVOPENHOMEORGWEBRENDERERCONFIG1

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
 * Provider for the av.openhome.org:WebRendererConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebRendererConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebRendererConfig1() {}
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
     * Set the value of the RendererConfig property
     *
     * Can only be called if EnablePropertyRendererConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyRendererConfig(const Brx& aValue);
    /**
     * Get a copy of the value of the RendererConfig property
     *
     * Can only be called if EnablePropertyRendererConfig has previously been called.
     */
    void GetPropertyRendererConfig(Brhz& aValue);
    /**
     * Output the value of the RendererConfig property without an intermediate copy.
     *
     * Can only be called if EnablePropertyRendererConfig has previously been called.
     */
    void WritePropertyRendererConfig(IWriter& aWriter);
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
    DvProviderAvOpenhomeOrgWebRendererConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebRendererConfig1(DviDevice& aDevice);
    /**
     * Enable the Alive property.
     */
    void EnablePropertyAlive();
    /**
     * Enable the RendererConfig property.
     */
    void EnablePropertyRendererConfig();
    /**
     * Enable the CurrentAction property.
     */
    void EnablePropertyCurrentAction();
    /**
     * Signal that the action GetRendererConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetRendererConfig must be overridden if this is called.
     */
    void EnableActionGetRendererConfig();
    /**
     * Signal that the action SetRendererConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetRendererConfig must be overridden if this is called.
     */
    void EnableActionSetRendererConfig();
private:
    /**
     * GetRendererConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetRendererConfig action for the owning device.
     * Must be implemented iff EnableActionGetRendererConfig was called.
     */
    virtual void GetRendererConfig(IDvInvocation& aInvocation, IDvInvocationResponseString& aRendererConfig);
    /**
     * SetRendererConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetRendererConfig action for the owning device.
     * Must be implemented iff EnableActionSetRendererConfig was called.
     */
    virtual void SetRendererConfig(IDvInvocation& aInvocation, const Brx& aRendererConfig);
private:
    DvProviderAvOpenhomeOrgWebRendererConfig1();
    void Construct();
    void DoGetRendererConfig(IDviInvocation& aInvocation);
    void DoSetRendererConfig(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyRendererConfig;
    PropertyUint* iPropertyCurrentAction;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGWEBRENDERERCONFIG1

