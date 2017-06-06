#ifndef HEADER_DVAVOPENHOMEORGINTERNETRADIO1CPP
#define HEADER_DVAVOPENHOMEORGINTERNETRADIO1CPP

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
 * Provider for the av.openhome.org:InternetRadio:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgInternetRadio1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgInternetRadio1Cpp() {}
    /**
     * Set the value of the Uri property
     *
     * Can only be called if EnablePropertyUri has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUri(const std::string& aValue);
    /**
     * Get a copy of the value of the Uri property
     *
     * Can only be called if EnablePropertyUri has previously been called.
     */
    void GetPropertyUri(std::string& aValue);
    /**
     * Set the value of the Metadata property
     *
     * Can only be called if EnablePropertyMetadata has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyMetadata(const std::string& aValue);
    /**
     * Get a copy of the value of the Metadata property
     *
     * Can only be called if EnablePropertyMetadata has previously been called.
     */
    void GetPropertyMetadata(std::string& aValue);
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
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgInternetRadio1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the Uri property.
     */
    void EnablePropertyUri();
    /**
     * Enable the Metadata property.
     */
    void EnablePropertyMetadata();
    /**
     * Enable the TransportState property.
     */
    void EnablePropertyTransportState();
    /**
     * Signal that the action Play is supported.
     * The action's availability will be published in the device's service.xml.
     * Play must be overridden if this is called.
     */
    void EnableActionPlay();
    /**
     * Signal that the action Stop is supported.
     * The action's availability will be published in the device's service.xml.
     * Stop must be overridden if this is called.
     */
    void EnableActionStop();
    /**
     * Signal that the action SetSender is supported.
     * The action's availability will be published in the device's service.xml.
     * SetSender must be overridden if this is called.
     */
    void EnableActionSetSender();
    /**
     * Signal that the action Sender is supported.
     * The action's availability will be published in the device's service.xml.
     * Sender must be overridden if this is called.
     */
    void EnableActionSender();
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
     * Stop action.
     *
     * Will be called when the device stack receives an invocation of the
     * Stop action for the owning device.
     * Must be implemented iff EnableActionStop was called.
     */
    virtual void Stop(IDvInvocationStd& aInvocation);
    /**
     * SetSender action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetSender action for the owning device.
     * Must be implemented iff EnableActionSetSender was called.
     */
    virtual void SetSender(IDvInvocationStd& aInvocation, const std::string& aUri, const std::string& aMetadata);
    /**
     * Sender action.
     *
     * Will be called when the device stack receives an invocation of the
     * Sender action for the owning device.
     * Must be implemented iff EnableActionSender was called.
     */
    virtual void Sender(IDvInvocationStd& aInvocation, std::string& aUri, std::string& aMetadata);
    /**
     * TransportState action.
     *
     * Will be called when the device stack receives an invocation of the
     * TransportState action for the owning device.
     * Must be implemented iff EnableActionTransportState was called.
     */
    virtual void TransportState(IDvInvocationStd& aInvocation, std::string& aValue);
private:
    DvProviderAvOpenhomeOrgInternetRadio1Cpp();
    void DoPlay(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoSetSender(IDviInvocation& aInvocation);
    void DoSender(IDviInvocation& aInvocation);
    void DoTransportState(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyUri;
    PropertyString* iPropertyMetadata;
    PropertyString* iPropertyTransportState;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGINTERNETRADIO1CPP

