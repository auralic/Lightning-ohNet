#ifndef HEADER_DVAVOPENHOMEORGROON1
#define HEADER_DVAVOPENHOMEORGROON1

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
 * Provider for the av.openhome.org:Roon:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgRoon1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgRoon1() {}
    /**
     * Set the value of the TransportState property
     *
     * Can only be called if EnablePropertyTransportState has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyTransportState(const Brx& aValue);
    /**
     * Get a copy of the value of the TransportState property
     *
     * Can only be called if EnablePropertyTransportState has previously been called.
     */
    void GetPropertyTransportState(Brhz& aValue);
    /**
     * Set the value of the Repeat property
     *
     * Can only be called if EnablePropertyRepeat has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyRepeat(TBool aValue);
    /**
     * Get a copy of the value of the Repeat property
     *
     * Can only be called if EnablePropertyRepeat has previously been called.
     */
    void GetPropertyRepeat(TBool& aValue);
    /**
     * Set the value of the Shuffle property
     *
     * Can only be called if EnablePropertyShuffle has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyShuffle(TBool aValue);
    /**
     * Get a copy of the value of the Shuffle property
     *
     * Can only be called if EnablePropertyShuffle has previously been called.
     */
    void GetPropertyShuffle(TBool& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgRoon1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgRoon1(DviDevice& aDevice);
    /**
     * Enable the TransportState property.
     */
    void EnablePropertyTransportState();
    /**
     * Enable the Repeat property.
     */
    void EnablePropertyRepeat();
    /**
     * Enable the Shuffle property.
     */
    void EnablePropertyShuffle();
    /**
     * Signal that the action Play is supported.
     * The action's availability will be published in the device's service.xml.
     * Play must be overridden if this is called.
     */
    void EnableActionPlay();
    /**
     * Signal that the action Pause is supported.
     * The action's availability will be published in the device's service.xml.
     * Pause must be overridden if this is called.
     */
    void EnableActionPause();
    /**
     * Signal that the action PlayPause is supported.
     * The action's availability will be published in the device's service.xml.
     * PlayPause must be overridden if this is called.
     */
    void EnableActionPlayPause();
    /**
     * Signal that the action Stop is supported.
     * The action's availability will be published in the device's service.xml.
     * Stop must be overridden if this is called.
     */
    void EnableActionStop();
    /**
     * Signal that the action Next is supported.
     * The action's availability will be published in the device's service.xml.
     * Next must be overridden if this is called.
     */
    void EnableActionNext();
    /**
     * Signal that the action Previous is supported.
     * The action's availability will be published in the device's service.xml.
     * Previous must be overridden if this is called.
     */
    void EnableActionPrevious();
    /**
     * Signal that the action ToggleShuffle is supported.
     * The action's availability will be published in the device's service.xml.
     * ToggleShuffle must be overridden if this is called.
     */
    void EnableActionToggleShuffle();
    /**
     * Signal that the action ToggleLoop is supported.
     * The action's availability will be published in the device's service.xml.
     * ToggleLoop must be overridden if this is called.
     */
    void EnableActionToggleLoop();
    /**
     * Signal that the action Repeat is supported.
     * The action's availability will be published in the device's service.xml.
     * Repeat must be overridden if this is called.
     */
    void EnableActionRepeat();
    /**
     * Signal that the action Shuffle is supported.
     * The action's availability will be published in the device's service.xml.
     * Shuffle must be overridden if this is called.
     */
    void EnableActionShuffle();
    /**
     * Signal that the action SeekSecondAbsolute is supported.
     * The action's availability will be published in the device's service.xml.
     * SeekSecondAbsolute must be overridden if this is called.
     */
    void EnableActionSeekSecondAbsolute();
    /**
     * Signal that the action SeekSecondRelative is supported.
     * The action's availability will be published in the device's service.xml.
     * SeekSecondRelative must be overridden if this is called.
     */
    void EnableActionSeekSecondRelative();
    /**
     * Signal that the action TransportState is supported.
     * The action's availability will be published in the device's service.xml.
     * TransportState must be overridden if this is called.
     */
    void EnableActionTransportState();
private:
    /**
     * Play action.
     *
     * Will be called when the device stack receives an invocation of the
     * Play action for the owning device.
     * Must be implemented iff EnableActionPlay was called.
     */
    virtual void Play(IDvInvocation& aInvocation);
    /**
     * Pause action.
     *
     * Will be called when the device stack receives an invocation of the
     * Pause action for the owning device.
     * Must be implemented iff EnableActionPause was called.
     */
    virtual void Pause(IDvInvocation& aInvocation);
    /**
     * PlayPause action.
     *
     * Will be called when the device stack receives an invocation of the
     * PlayPause action for the owning device.
     * Must be implemented iff EnableActionPlayPause was called.
     */
    virtual void PlayPause(IDvInvocation& aInvocation);
    /**
     * Stop action.
     *
     * Will be called when the device stack receives an invocation of the
     * Stop action for the owning device.
     * Must be implemented iff EnableActionStop was called.
     */
    virtual void Stop(IDvInvocation& aInvocation);
    /**
     * Next action.
     *
     * Will be called when the device stack receives an invocation of the
     * Next action for the owning device.
     * Must be implemented iff EnableActionNext was called.
     */
    virtual void Next(IDvInvocation& aInvocation);
    /**
     * Previous action.
     *
     * Will be called when the device stack receives an invocation of the
     * Previous action for the owning device.
     * Must be implemented iff EnableActionPrevious was called.
     */
    virtual void Previous(IDvInvocation& aInvocation);
    /**
     * ToggleShuffle action.
     *
     * Will be called when the device stack receives an invocation of the
     * ToggleShuffle action for the owning device.
     * Must be implemented iff EnableActionToggleShuffle was called.
     */
    virtual void ToggleShuffle(IDvInvocation& aInvocation);
    /**
     * ToggleLoop action.
     *
     * Will be called when the device stack receives an invocation of the
     * ToggleLoop action for the owning device.
     * Must be implemented iff EnableActionToggleLoop was called.
     */
    virtual void ToggleLoop(IDvInvocation& aInvocation);
    /**
     * Repeat action.
     *
     * Will be called when the device stack receives an invocation of the
     * Repeat action for the owning device.
     * Must be implemented iff EnableActionRepeat was called.
     */
    virtual void Repeat(IDvInvocation& aInvocation, IDvInvocationResponseBool& aValue);
    /**
     * Shuffle action.
     *
     * Will be called when the device stack receives an invocation of the
     * Shuffle action for the owning device.
     * Must be implemented iff EnableActionShuffle was called.
     */
    virtual void Shuffle(IDvInvocation& aInvocation, IDvInvocationResponseBool& aValue);
    /**
     * SeekSecondAbsolute action.
     *
     * Will be called when the device stack receives an invocation of the
     * SeekSecondAbsolute action for the owning device.
     * Must be implemented iff EnableActionSeekSecondAbsolute was called.
     */
    virtual void SeekSecondAbsolute(IDvInvocation& aInvocation, TUint aValue);
    /**
     * SeekSecondRelative action.
     *
     * Will be called when the device stack receives an invocation of the
     * SeekSecondRelative action for the owning device.
     * Must be implemented iff EnableActionSeekSecondRelative was called.
     */
    virtual void SeekSecondRelative(IDvInvocation& aInvocation, TInt aValue);
    /**
     * TransportState action.
     *
     * Will be called when the device stack receives an invocation of the
     * TransportState action for the owning device.
     * Must be implemented iff EnableActionTransportState was called.
     */
    virtual void TransportState(IDvInvocation& aInvocation, IDvInvocationResponseString& aValue);
private:
    DvProviderAvOpenhomeOrgRoon1();
    void Construct();
    void DoPlay(IDviInvocation& aInvocation);
    void DoPause(IDviInvocation& aInvocation);
    void DoPlayPause(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoNext(IDviInvocation& aInvocation);
    void DoPrevious(IDviInvocation& aInvocation);
    void DoToggleShuffle(IDviInvocation& aInvocation);
    void DoToggleLoop(IDviInvocation& aInvocation);
    void DoRepeat(IDviInvocation& aInvocation);
    void DoShuffle(IDviInvocation& aInvocation);
    void DoSeekSecondAbsolute(IDviInvocation& aInvocation);
    void DoSeekSecondRelative(IDviInvocation& aInvocation);
    void DoTransportState(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyTransportState;
    PropertyBool* iPropertyRepeat;
    PropertyBool* iPropertyShuffle;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGROON1

