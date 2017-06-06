#ifndef HEADER_DVAVOPENHOMEORGWEBPROCESSORCONFIG1
#define HEADER_DVAVOPENHOMEORGWEBPROCESSORCONFIG1

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
 * Provider for the av.openhome.org:WebProcessorConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebProcessorConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebProcessorConfig1() {}
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
     * Set the value of the ProcessorConfig property
     *
     * Can only be called if EnablePropertyProcessorConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyProcessorConfig(const Brx& aValue);
    /**
     * Get a copy of the value of the ProcessorConfig property
     *
     * Can only be called if EnablePropertyProcessorConfig has previously been called.
     */
    void GetPropertyProcessorConfig(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebProcessorConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebProcessorConfig1(DviDevice& aDevice);
    /**
     * Enable the Alive property.
     */
    void EnablePropertyAlive();
    /**
     * Enable the ProcessorConfig property.
     */
    void EnablePropertyProcessorConfig();
    /**
     * Signal that the action GetProcessorConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetProcessorConfig must be overridden if this is called.
     */
    void EnableActionGetProcessorConfig();
    /**
     * Signal that the action SetProcessorConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetProcessorConfig must be overridden if this is called.
     */
    void EnableActionSetProcessorConfig();
private:
    /**
     * GetProcessorConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetProcessorConfig action for the owning device.
     * Must be implemented iff EnableActionGetProcessorConfig was called.
     */
    virtual void GetProcessorConfig(IDvInvocation& aInvocation, IDvInvocationResponseString& aProcessorConfig);
    /**
     * SetProcessorConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetProcessorConfig action for the owning device.
     * Must be implemented iff EnableActionSetProcessorConfig was called.
     */
    virtual void SetProcessorConfig(IDvInvocation& aInvocation, const Brx& aProcessorConfig);
private:
    DvProviderAvOpenhomeOrgWebProcessorConfig1();
    void Construct();
    void DoGetProcessorConfig(IDviInvocation& aInvocation);
    void DoSetProcessorConfig(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyProcessorConfig;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGWEBPROCESSORCONFIG1

