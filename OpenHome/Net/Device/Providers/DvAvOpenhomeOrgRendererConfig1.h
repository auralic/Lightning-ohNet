#ifndef HEADER_DVAVOPENHOMEORGRENDERERCONFIG1
#define HEADER_DVAVOPENHOMEORGRENDERERCONFIG1

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
 * Provider for the av.openhome.org:RendererConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgRendererConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgRendererConfig1() {}
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
    /**
     * Set the value of the HardwareConfig property
     *
     * Can only be called if EnablePropertyHardwareConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyHardwareConfig(const Brx& aValue);
    /**
     * Get a copy of the value of the HardwareConfig property
     *
     * Can only be called if EnablePropertyHardwareConfig has previously been called.
     */
    void GetPropertyHardwareConfig(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgRendererConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgRendererConfig1(DviDevice& aDevice);
    /**
     * Enable the RendererConfig property.
     */
    void EnablePropertyRendererConfig();
    /**
     * Enable the ResamplerConfig property.
     */
    void EnablePropertyResamplerConfig();
    /**
     * Enable the HardwareConfig property.
     */
    void EnablePropertyHardwareConfig();
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
    /**
     * Signal that the action GetHardwareConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * GetHardwareConfig must be overridden if this is called.
     */
    void EnableActionGetHardwareConfig();
    /**
     * Signal that the action SetHardwareConfig is supported.
     * The action's availability will be published in the device's service.xml.
     * SetHardwareConfig must be overridden if this is called.
     */
    void EnableActionSetHardwareConfig();
    /**
     * Signal that the action GetWiFiList is supported.
     * The action's availability will be published in the device's service.xml.
     * GetWiFiList must be overridden if this is called.
     */
    void EnableActionGetWiFiList();
    /**
     * Signal that the action SetTimeZone is supported.
     * The action's availability will be published in the device's service.xml.
     * SetTimeZone must be overridden if this is called.
     */
    void EnableActionSetTimeZone();
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
    /**
     * GetHardwareConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetHardwareConfig action for the owning device.
     * Must be implemented iff EnableActionGetHardwareConfig was called.
     */
    virtual void GetHardwareConfig(IDvInvocation& aInvocation, IDvInvocationResponseString& aHardwareConfig);
    /**
     * SetHardwareConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetHardwareConfig action for the owning device.
     * Must be implemented iff EnableActionSetHardwareConfig was called.
     */
    virtual void SetHardwareConfig(IDvInvocation& aInvocation, const Brx& aHardwareConfig);
    /**
     * GetWiFiList action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetWiFiList action for the owning device.
     * Must be implemented iff EnableActionGetWiFiList was called.
     */
    virtual void GetWiFiList(IDvInvocation& aInvocation, IDvInvocationResponseString& aWiFiList);
    /**
     * SetTimeZone action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetTimeZone action for the owning device.
     * Must be implemented iff EnableActionSetTimeZone was called.
     */
    virtual void SetTimeZone(IDvInvocation& aInvocation, const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp);
private:
    DvProviderAvOpenhomeOrgRendererConfig1();
    void Construct();
    void DoGetRendererConfig(IDviInvocation& aInvocation);
    void DoSetRendererConfig(IDviInvocation& aInvocation);
    void DoGetResamplerConfig(IDviInvocation& aInvocation);
    void DoSetResamplerConfig(IDviInvocation& aInvocation);
    void DoGetHardwareConfig(IDviInvocation& aInvocation);
    void DoSetHardwareConfig(IDviInvocation& aInvocation);
    void DoGetWiFiList(IDviInvocation& aInvocation);
    void DoSetTimeZone(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyRendererConfig;
    PropertyString* iPropertyResamplerConfig;
    PropertyString* iPropertyHardwareConfig;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGRENDERERCONFIG1

