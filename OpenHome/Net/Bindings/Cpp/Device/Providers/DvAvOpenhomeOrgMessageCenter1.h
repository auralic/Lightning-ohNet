#ifndef HEADER_DVAVOPENHOMEORGMESSAGECENTER1CPP
#define HEADER_DVAVOPENHOMEORGMESSAGECENTER1CPP

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
 * Provider for the av.openhome.org:MessageCenter:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgMessageCenter1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgMessageCenter1Cpp() {}
    /**
     * Set the value of the Message property
     *
     * Can only be called if EnablePropertyMessage has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyMessage(const std::string& aValue);
    /**
     * Get a copy of the value of the Message property
     *
     * Can only be called if EnablePropertyMessage has previously been called.
     */
    void GetPropertyMessage(std::string& aValue);
    /**
     * Set the value of the MessageID property
     *
     * Can only be called if EnablePropertyMessageID has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyMessageID(uint32_t aValue);
    /**
     * Get a copy of the value of the MessageID property
     *
     * Can only be called if EnablePropertyMessageID has previously been called.
     */
    void GetPropertyMessageID(uint32_t& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgMessageCenter1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the Message property.
     */
    void EnablePropertyMessage();
    /**
     * Enable the MessageID property.
     */
    void EnablePropertyMessageID();
    /**
     * Signal that the action GetMessage is supported.
     * The action's availability will be published in the device's service.xml.
     * GetMessage must be overridden if this is called.
     */
    void EnableActionGetMessage();
private:
    /**
     * GetMessage action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetMessage action for the owning device.
     * Must be implemented iff EnableActionGetMessage was called.
     */
    virtual void GetMessage(IDvInvocationStd& aInvocation, std::string& aMessage, uint32_t& aMessageID);
private:
    DvProviderAvOpenhomeOrgMessageCenter1Cpp();
    void DoGetMessage(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyMessage;
    PropertyUint* iPropertyMessageID;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGMESSAGECENTER1CPP

