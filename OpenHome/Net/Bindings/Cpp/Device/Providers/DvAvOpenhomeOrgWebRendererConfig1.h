#ifndef HEADER_DVAVOPENHOMEORGWEBRENDERERCONFIG1CPP
#define HEADER_DVAVOPENHOMEORGWEBRENDERERCONFIG1CPP

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
 * Provider for the av.openhome.org:WebRendererConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgWebRendererConfig1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgWebRendererConfig1Cpp() {}
    /**
     * Set the value of the Alive property
     *
     * Can only be called if EnablePropertyAlive has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAlive(bool aValue);
    /**
     * Get a copy of the value of the Alive property
     *
     * Can only be called if EnablePropertyAlive has previously been called.
     */
    void GetPropertyAlive(bool& aValue);
    /**
     * Set the value of the RendererConfig property
     *
     * Can only be called if EnablePropertyRendererConfig has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyRendererConfig(const std::string& aValue);
    /**
     * Get a copy of the value of the RendererConfig property
     *
     * Can only be called if EnablePropertyRendererConfig has previously been called.
     */
    void GetPropertyRendererConfig(std::string& aValue);
    /**
     * Set the value of the CurrentAction property
     *
     * Can only be called if EnablePropertyCurrentAction has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyCurrentAction(uint32_t aValue);
    /**
     * Get a copy of the value of the CurrentAction property
     *
     * Can only be called if EnablePropertyCurrentAction has previously been called.
     */
    void GetPropertyCurrentAction(uint32_t& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgWebRendererConfig1Cpp(DvDeviceStd& aDevice);
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
    virtual void GetRendererConfig(IDvInvocationStd& aInvocation, std::string& aRendererConfig);
    /**
     * SetRendererConfig action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetRendererConfig action for the owning device.
     * Must be implemented iff EnableActionSetRendererConfig was called.
     */
    virtual void SetRendererConfig(IDvInvocationStd& aInvocation, const std::string& aRendererConfig);
private:
    DvProviderAvOpenhomeOrgWebRendererConfig1Cpp();
    void DoGetRendererConfig(IDviInvocation& aInvocation);
    void DoSetRendererConfig(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyAlive;
    PropertyString* iPropertyRendererConfig;
    PropertyUint* iPropertyCurrentAction;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGWEBRENDERERCONFIG1CPP

