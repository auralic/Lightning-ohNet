#ifndef HEADER_DVAVOPENHOMEORGDACCONFIG1
#define HEADER_DVAVOPENHOMEORGDACCONFIG1

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
 * Provider for the av.openhome.org:DACConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgDACConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgDACConfig1() {}
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
    DvProviderAvOpenhomeOrgDACConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgDACConfig1(DviDevice& aDevice);
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
    virtual void GetFilterMode(IDvInvocation& aInvocation, IDvInvocationResponseString& aFilterMode, IDvInvocationResponseString& aFilterModeList);
    /**
     * SetFilterMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetFilterMode action for the owning device.
     * Must be implemented iff EnableActionSetFilterMode was called.
     */
    virtual void SetFilterMode(IDvInvocation& aInvocation, const Brx& aFilterMode);
    /**
     * GetDACPhase action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDACPhase action for the owning device.
     * Must be implemented iff EnableActionGetDACPhase was called.
     */
    virtual void GetDACPhase(IDvInvocation& aInvocation, IDvInvocationResponseUint& aPhase);
    /**
     * SetDACPhase action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDACPhase action for the owning device.
     * Must be implemented iff EnableActionSetDACPhase was called.
     */
    virtual void SetDACPhase(IDvInvocation& aInvocation, TUint aPhase);
    /**
     * GetDACBalance action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDACBalance action for the owning device.
     * Must be implemented iff EnableActionGetDACBalance was called.
     */
    virtual void GetDACBalance(IDvInvocation& aInvocation, IDvInvocationResponseUint& aBalance);
    /**
     * SetDACBalance action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDACBalance action for the owning device.
     * Must be implemented iff EnableActionSetDACBalance was called.
     */
    virtual void SetDACBalance(IDvInvocation& aInvocation, TUint aBalance);
    /**
     * GetWaitingTime action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetWaitingTime action for the owning device.
     * Must be implemented iff EnableActionGetWaitingTime was called.
     */
    virtual void GetWaitingTime(IDvInvocation& aInvocation, IDvInvocationResponseString& aWaitingTime);
    /**
     * SetWaitingTime action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetWaitingTime action for the owning device.
     * Must be implemented iff EnableActionSetWaitingTime was called.
     */
    virtual void SetWaitingTime(IDvInvocation& aInvocation, const Brx& aWaitingTime);
private:
    DvProviderAvOpenhomeOrgDACConfig1();
    void Construct();
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

#endif // HEADER_DVAVOPENHOMEORGDACCONFIG1

