#ifndef HEADER_DVAVOPENHOMEORGRENDERINGINFO1
#define HEADER_DVAVOPENHOMEORGRENDERINGINFO1

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
 * Provider for the av.openhome.org:RenderingInfo:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgRenderingInfo1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgRenderingInfo1() {}
    /**
     * Set the value of the Info property
     *
     * Can only be called if EnablePropertyInfo has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyInfo(const Brx& aValue);
    /**
     * Get a copy of the value of the Info property
     *
     * Can only be called if EnablePropertyInfo has previously been called.
     */
    void GetPropertyInfo(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgRenderingInfo1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgRenderingInfo1(DviDevice& aDevice);
    /**
     * Enable the Info property.
     */
    void EnablePropertyInfo();
    /**
     * Signal that the action GetEntireInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * GetEntireInfo must be overridden if this is called.
     */
    void EnableActionGetEntireInfo();
private:
    /**
     * GetEntireInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetEntireInfo action for the owning device.
     * Must be implemented iff EnableActionGetEntireInfo was called.
     */
    virtual void GetEntireInfo(IDvInvocation& aInvocation, IDvInvocationResponseString& aInfo);
private:
    DvProviderAvOpenhomeOrgRenderingInfo1();
    void Construct();
    void DoGetEntireInfo(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyInfo;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGRENDERINGINFO1

