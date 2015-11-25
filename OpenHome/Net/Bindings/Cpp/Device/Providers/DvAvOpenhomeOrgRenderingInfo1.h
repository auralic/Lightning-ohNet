#ifndef HEADER_DVAVOPENHOMEORGRENDERINGINFO1CPP
#define HEADER_DVAVOPENHOMEORGRENDERINGINFO1CPP

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
 * Provider for the av.openhome.org:RenderingInfo:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgRenderingInfo1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgRenderingInfo1Cpp() {}
    /**
     * Set the value of the Info property
     *
     * Can only be called if EnablePropertyInfo has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyInfo(const std::string& aValue);
    /**
     * Get a copy of the value of the Info property
     *
     * Can only be called if EnablePropertyInfo has previously been called.
     */
    void GetPropertyInfo(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgRenderingInfo1Cpp(DvDeviceStd& aDevice);
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
    virtual void GetEntireInfo(IDvInvocationStd& aInvocation, std::string& aInfo);
private:
    DvProviderAvOpenhomeOrgRenderingInfo1Cpp();
    void DoGetEntireInfo(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyInfo;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGRENDERINGINFO1CPP

