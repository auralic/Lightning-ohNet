#ifndef HEADER_DVAVOPENHOMEORGDACCONFIG1CPP
#define HEADER_DVAVOPENHOMEORGDACCONFIG1CPP

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
 * Provider for the av.openhome.org:DACConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgDACConfig1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgDACConfig1Cpp() {}
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
    DvProviderAvOpenhomeOrgDACConfig1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the CurrentAction property.
     */
    void EnablePropertyCurrentAction();
    /**
     * Signal that the action GetFilterMode is supported.
     * The action's availability will be published in the device's service.xml.
     * GetFilterMode must be overridden if this is called.
     */
    void EnableActionGetFilterMode();
    /**
     * Signal that the action SetFilterMode is supported.
     * The action's availability will be published in the device's service.xml.
     * SetFilterMode must be overridden if this is called.
     */
    void EnableActionSetFilterMode();
    /**
     * Signal that the action GetDACPhase is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDACPhase must be overridden if this is called.
     */
    void EnableActionGetDACPhase();
    /**
     * Signal that the action SetDACPhase is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDACPhase must be overridden if this is called.
     */
    void EnableActionSetDACPhase();
    /**
     * Signal that the action GetDACBalance is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDACBalance must be overridden if this is called.
     */
    void EnableActionGetDACBalance();
    /**
     * Signal that the action SetDACBalance is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDACBalance must be overridden if this is called.
     */
    void EnableActionSetDACBalance();
    /**
     * Signal that the action GetWaitingTime is supported.
     * The action's availability will be published in the device's service.xml.
     * GetWaitingTime must be overridden if this is called.
     */
    void EnableActionGetWaitingTime();
    /**
     * Signal that the action SetWaitingTime is supported.
     * The action's availability will be published in the device's service.xml.
     * SetWaitingTime must be overridden if this is called.
     */
    void EnableActionSetWaitingTime();
private:
    /**
     * GetFilterMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetFilterMode action for the owning device.
     * Must be implemented iff EnableActionGetFilterMode was called.
     */
    virtual void GetFilterMode(IDvInvocationStd& aInvocation, std::string& aFilterMode, std::string& aFilterModeList);
    /**
     * SetFilterMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetFilterMode action for the owning device.
     * Must be implemented iff EnableActionSetFilterMode was called.
     */
    virtual void SetFilterMode(IDvInvocationStd& aInvocation, const std::string& aFilterMode);
    /**
     * GetDACPhase action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDACPhase action for the owning device.
     * Must be implemented iff EnableActionGetDACPhase was called.
     */
    virtual void GetDACPhase(IDvInvocationStd& aInvocation, uint32_t& aPhase);
    /**
     * SetDACPhase action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDACPhase action for the owning device.
     * Must be implemented iff EnableActionSetDACPhase was called.
     */
    virtual void SetDACPhase(IDvInvocationStd& aInvocation, uint32_t aPhase);
    /**
     * GetDACBalance action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDACBalance action for the owning device.
     * Must be implemented iff EnableActionGetDACBalance was called.
     */
    virtual void GetDACBalance(IDvInvocationStd& aInvocation, uint32_t& aBalance);
    /**
     * SetDACBalance action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDACBalance action for the owning device.
     * Must be implemented iff EnableActionSetDACBalance was called.
     */
    virtual void SetDACBalance(IDvInvocationStd& aInvocation, uint32_t aBalance);
    /**
     * GetWaitingTime action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetWaitingTime action for the owning device.
     * Must be implemented iff EnableActionGetWaitingTime was called.
     */
    virtual void GetWaitingTime(IDvInvocationStd& aInvocation, std::string& aWaitingTime);
    /**
     * SetWaitingTime action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetWaitingTime action for the owning device.
     * Must be implemented iff EnableActionSetWaitingTime was called.
     */
    virtual void SetWaitingTime(IDvInvocationStd& aInvocation, const std::string& aWaitingTime);
private:
    DvProviderAvOpenhomeOrgDACConfig1Cpp();
    void DoGetFilterMode(IDviInvocation& aInvocation);
    void DoSetFilterMode(IDviInvocation& aInvocation);
    void DoGetDACPhase(IDviInvocation& aInvocation);
    void DoSetDACPhase(IDviInvocation& aInvocation);
    void DoGetDACBalance(IDviInvocation& aInvocation);
    void DoSetDACBalance(IDviInvocation& aInvocation);
    void DoGetWaitingTime(IDviInvocation& aInvocation);
    void DoSetWaitingTime(IDviInvocation& aInvocation);
private:
    PropertyUint* iPropertyCurrentAction;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGDACCONFIG1CPP

