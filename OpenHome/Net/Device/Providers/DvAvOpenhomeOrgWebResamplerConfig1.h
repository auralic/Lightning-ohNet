#ifndef HEADER_DVAVOPENHOMEORGWEBRESAMPLERCONFIG1
#define HEADER_DVAVOPENHOMEORGWEBRESAMPLERCONFIG1

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
 * Provider for the av.openhome.org:WebResamplerConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebResamplerConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebResamplerConfig1() {}
    /**
     * Set the value of the ResamplerConfig property
     *
     * Can only be called if EnablePropertyResamplerConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyResamplerConfig(const Brx& aValue);
    /**
     * Get a copy of the value of the ResamplerConfig property
     *
     * Can only be called if EnablePropertyResamplerConfig has previously been called.
     */
    void GetPropertyResamplerConfig(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebResamplerConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebResamplerConfig1(DviDevice& aDevice);
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
    virtual void GetResamplerConfig(IDvInvocation& aInvocation, IDvInvocationResponseString& aResamplerConfig);
    /**
     * SetResamplerConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetResamplerConfig action for the owning device.
     * Must be implemented iff EnableActionSetResamplerConfig was called.
     */
    virtual void SetResamplerConfig(IDvInvocation& aInvocation, const Brx& aResamplerConfig);
private:
    DvProviderAvOpenhomeOrgWebResamplerConfig1();
    void Construct();
    void DoGetResamplerConfig(IDviInvocation& aInvocation);
    void DoSetResamplerConfig(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyResamplerConfig;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGWEBRESAMPLERCONFIG1

