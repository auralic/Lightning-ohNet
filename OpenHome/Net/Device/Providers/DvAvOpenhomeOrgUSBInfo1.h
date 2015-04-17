#ifndef HEADER_DVAVOPENHOMEORGUSBINFO1
#define HEADER_DVAVOPENHOMEORGUSBINFO1

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
 * Provider for the av.openhome.org:USBInfo:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgUSBInfo1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgUSBInfo1() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgUSBInfo1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgUSBInfo1(DviDevice& aDevice);
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
    virtual void GetUSBInfo(IDvInvocation& aInvocation, IDvInvocationResponseBool& aUSBPlugStatus, IDvInvocationResponseString& aUSBERRORInfo, IDvInvocationResponseString& aUSBCapacity, IDvInvocationResponseString& aUSBFileCount);
private:
    DvProviderAvOpenhomeOrgUSBInfo1();
    void Construct();
    void DoGetUSBInfo(IDviInvocation& aInvocation);
private:
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGUSBINFO1

