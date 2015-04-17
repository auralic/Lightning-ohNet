#ifndef HEADER_DVAVOPENHOMEORGUSBINFO1CPP
#define HEADER_DVAVOPENHOMEORGUSBINFO1CPP

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
 * Provider for the av.openhome.org:USBInfo:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgUSBInfo1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgUSBInfo1Cpp() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgUSBInfo1Cpp(DvDeviceStd& aDevice);
    /**
     * Signal that the action GetUSBInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * GetUSBInfo must be overridden if this is called.
     */
    void EnableActionGetUSBInfo();
private:
    /**
     * GetUSBInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUSBInfo action for the owning device.
     * Must be implemented iff EnableActionGetUSBInfo was called.
     */
    virtual void GetUSBInfo(IDvInvocationStd& aInvocation, bool& aUSBPlugStatus, std::string& aUSBERRORInfo, std::string& aUSBCapacity, std::string& aUSBFileCount);
private:
    DvProviderAvOpenhomeOrgUSBInfo1Cpp();
    void DoGetUSBInfo(IDviInvocation& aInvocation);
private:
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGUSBINFO1CPP

