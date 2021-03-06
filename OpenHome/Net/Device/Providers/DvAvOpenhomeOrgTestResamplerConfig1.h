#ifndef HEADER_DVAVOPENHOMEORGTESTRESAMPLERCONFIG1
#define HEADER_DVAVOPENHOMEORGTESTRESAMPLERCONFIG1

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
 * Provider for the av.openhome.org:TestResamplerConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgTestResamplerConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgTestResamplerConfig1() {}
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
    DvProviderAvOpenhomeOrgTestResamplerConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgTestResamplerConfig1(DviDevice& aDevice);
    /**
     * Enable the CurrentAction property.
     */
    void EnablePropertyCurrentAction();
    /**
     * Signal that the action SetResamplerConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetResamplerConfig must be overridden if this is called.
     */
    void EnableActionSetResamplerConfig();
    /**
     * Signal that the action GetResamplerConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetResamplerConfig must be overridden if this is called.
     */
    void EnableActionGetResamplerConfig();
    /**
     * Signal that the action SetPCMAutoDetect is supported.
     * The action's availability will be published in the device's service.xml.
     * SetPCMAutoDetect must be overridden if this is called.
     */
    void EnableActionSetPCMAutoDetect();
    /**
     * Signal that the action GetPCMAutoDetect is supported.
     * The action's availability will be published in the device's service.xml.
     * GetPCMAutoDetect must be overridden if this is called.
     */
    void EnableActionGetPCMAutoDetect();
    /**
     * Signal that the action SetDSDtoPCM is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDSDtoPCM must be overridden if this is called.
     */
    void EnableActionSetDSDtoPCM();
    /**
     * Signal that the action GetDSDtoPCM is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDSDtoPCM must be overridden if this is called.
     */
    void EnableActionGetDSDtoPCM();
private:
    /**
     * SetResamplerConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetResamplerConfig action for the owning device.
     * Must be implemented iff EnableActionSetResamplerConfig was called.
     */
    virtual void SetResamplerConfig(IDvInvocation& aInvocation, const Brx& aResamplerConfig);
    /**
     * GetResamplerConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetResamplerConfig action for the owning device.
     * Must be implemented iff EnableActionGetResamplerConfig was called.
     */
    virtual void GetResamplerConfig(IDvInvocation& aInvocation, IDvInvocationResponseString& aResamplerConfig);
    /**
     * SetPCMAutoDetect action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetPCMAutoDetect action for the owning device.
     * Must be implemented iff EnableActionSetPCMAutoDetect was called.
     */
    virtual void SetPCMAutoDetect(IDvInvocation& aInvocation, TBool aPCMAutoDetect);
    /**
     * GetPCMAutoDetect action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPCMAutoDetect action for the owning device.
     * Must be implemented iff EnableActionGetPCMAutoDetect was called.
     */
    virtual void GetPCMAutoDetect(IDvInvocation& aInvocation, IDvInvocationResponseBool& aPCMAutoDetect);
    /**
     * SetDSDtoPCM action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDSDtoPCM action for the owning device.
     * Must be implemented iff EnableActionSetDSDtoPCM was called.
     */
    virtual void SetDSDtoPCM(IDvInvocation& aInvocation, TBool aDSDtoPCM);
    /**
     * GetDSDtoPCM action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDSDtoPCM action for the owning device.
     * Must be implemented iff EnableActionGetDSDtoPCM was called.
     */
    virtual void GetDSDtoPCM(IDvInvocation& aInvocation, IDvInvocationResponseBool& aDSDtoPCM);
private:
    DvProviderAvOpenhomeOrgTestResamplerConfig1();
    void Construct();
    void DoSetResamplerConfig(IDviInvocation& aInvocation);
    void DoGetResamplerConfig(IDviInvocation& aInvocation);
    void DoSetPCMAutoDetect(IDviInvocation& aInvocation);
    void DoGetPCMAutoDetect(IDviInvocation& aInvocation);
    void DoSetDSDtoPCM(IDviInvocation& aInvocation);
    void DoGetDSDtoPCM(IDviInvocation& aInvocation);
private:
    PropertyUint* iPropertyCurrentAction;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGTESTRESAMPLERCONFIG1

