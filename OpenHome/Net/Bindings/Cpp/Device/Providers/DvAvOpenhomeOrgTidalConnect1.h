#ifndef HEADER_DVAVOPENHOMEORGTIDALCONNECT1CPP
#define HEADER_DVAVOPENHOMEORGTIDALCONNECT1CPP

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
 * Provider for the av.openhome.org:TidalConnect:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgTidalConnect1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgTidalConnect1Cpp() {}
    /**
     * Set the value of the TransportState property
     *
     * Can only be called if EnablePropertyTransportState has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyTransportState(const std::string& aValue);
    /**
     * Get a copy of the value of the TransportState property
     *
     * Can only be called if EnablePropertyTransportState has previously been called.
     */
    void GetPropertyTransportState(std::string& aValue);
    /**
     * Set the value of the Repeat property
     *
     * Can only be called if EnablePropertyRepeat has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyRepeat(bool aValue);
    /**
     * Get a copy of the value of the Repeat property
     *
     * Can only be called if EnablePropertyRepeat has previously been called.
     */
    void GetPropertyRepeat(bool& aValue);
    /**
     * Set the value of the RepeatOne property
     *
     * Can only be called if EnablePropertyRepeatOne has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyRepeatOne(bool aValue);
    /**
     * Get a copy of the value of the RepeatOne property
     *
     * Can only be called if EnablePropertyRepeatOne has previously been called.
     */
    void GetPropertyRepeatOne(bool& aValue);
    /**
     * Set the value of the Shuffle property
     *
     * Can only be called if EnablePropertyShuffle has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyShuffle(bool aValue);
    /**
     * Get a copy of the value of the Shuffle property
     *
     * Can only be called if EnablePropertyShuffle has previously been called.
     */
    void GetPropertyShuffle(bool& aValue);
    /**
     * Set the value of the UpdateCover property
     *
     * Can only be called if EnablePropertyUpdateCover has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUpdateCover(bool aValue);
    /**
     * Get a copy of the value of the UpdateCover property
     *
     * Can only be called if EnablePropertyUpdateCover has previously been called.
     */
    void GetPropertyUpdateCover(bool& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgTidalConnect1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the TransportState property.
     */
    void EnablePropertyTransportState();
    /**
     * Enable the Repeat property.
     */
    void EnablePropertyRepeat();
    /**
     * Enable the RepeatOne property.
     */
    void EnablePropertyRepeatOne();
    /**
     * Enable the Shuffle property.
     */
    void EnablePropertyShuffle();
    /**
     * Enable the UpdateCover property.
     */
    void EnablePropertyUpdateCover();
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
     * Signal that the action RequestMetadata is supported.
     * The action's availability will be published in the device's service.xml.
     * RequestMetadata must be overridden if this is called.
     */
    void EnableActionRequestMetadata();
    /**
     * Signal that the action SeekSecondAbsolute is supported.
     * The action's availability will be published in the device's service.xml.
     * SeekSecondAbsolute must be overridden if this is called.
     */
    void EnableActionSeekSecondAbsolute();
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
    virtual void Play(IDvInvocationStd& aInvocation);
    /**
     * Pause action.
     *
     * Will be called when the device stack receives an invocation of the
     * Pause action for the owning device.
     * Must be implemented iff EnableActionPause was called.
     */
    virtual void Pause(IDvInvocationStd& aInvocation);
    /**
     * Stop action.
     *
     * Will be called when the device stack receives an invocation of the
     * Stop action for the owning device.
     * Must be implemented iff EnableActionStop was called.
     */
    virtual void Stop(IDvInvocationStd& aInvocation);
    /**
     * Next action.
     *
     * Will be called when the device stack receives an invocation of the
     * Next action for the owning device.
     * Must be implemented iff EnableActionNext was called.
     */
    virtual void Next(IDvInvocationStd& aInvocation);
    /**
     * Previous action.
     *
     * Will be called when the device stack receives an invocation of the
     * Previous action for the owning device.
     * Must be implemented iff EnableActionPrevious was called.
     */
    virtual void Previous(IDvInvocationStd& aInvocation);
    /**
     * ToggleShuffle action.
     *
     * Will be called when the device stack receives an invocation of the
     * ToggleShuffle action for the owning device.
     * Must be implemented iff EnableActionToggleShuffle was called.
     */
    virtual void ToggleShuffle(IDvInvocationStd& aInvocation);
    /**
     * ToggleLoop action.
     *
     * Will be called when the device stack receives an invocation of the
     * ToggleLoop action for the owning device.
     * Must be implemented iff EnableActionToggleLoop was called.
     */
    virtual void ToggleLoop(IDvInvocationStd& aInvocation);
    /**
     * RequestMetadata action.
     *
     * Will be called when the device stack receives an invocation of the
     * RequestMetadata action for the owning device.
     * Must be implemented iff EnableActionRequestMetadata was called.
     */
    virtual void RequestMetadata(IDvInvocationStd& aInvocation);
    /**
     * SeekSecondAbsolute action.
     *
     * Will be called when the device stack receives an invocation of the
     * SeekSecondAbsolute action for the owning device.
     * Must be implemented iff EnableActionSeekSecondAbsolute was called.
     */
    virtual void SeekSecondAbsolute(IDvInvocationStd& aInvocation, uint32_t aValue);
    /**
     * TransportState action.
     *
     * Will be called when the device stack receives an invocation of the
     * TransportState action for the owning device.
     * Must be implemented iff EnableActionTransportState was called.
     */
    virtual void TransportState(IDvInvocationStd& aInvocation, std::string& aValue);
private:
    DvProviderAvOpenhomeOrgTidalConnect1Cpp();
    void DoPlay(IDviInvocation& aInvocation);
    void DoPause(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoNext(IDviInvocation& aInvocation);
    void DoPrevious(IDviInvocation& aInvocation);
    void DoToggleShuffle(IDviInvocation& aInvocation);
    void DoToggleLoop(IDviInvocation& aInvocation);
    void DoRequestMetadata(IDviInvocation& aInvocation);
    void DoSeekSecondAbsolute(IDviInvocation& aInvocation);
    void DoTransportState(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyTransportState;
    PropertyBool* iPropertyRepeat;
    PropertyBool* iPropertyRepeatOne;
    PropertyBool* iPropertyShuffle;
    PropertyBool* iPropertyUpdateCover;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGTIDALCONNECT1CPP

