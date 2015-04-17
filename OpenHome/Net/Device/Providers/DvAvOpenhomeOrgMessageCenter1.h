#ifndef HEADER_DVAVOPENHOMEORGMESSAGECENTER1
#define HEADER_DVAVOPENHOMEORGMESSAGECENTER1

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
 * Provider for the av.openhome.org:MessageCenter:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgMessageCenter1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgMessageCenter1() {}
    /**
     * Set the value of the Message property
     *
     * Can only be called if EnablePropertyMessage has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyMessage(const Brx& aValue);
    /**
     * Get a copy of the value of the Message property
     *
     * Can only be called if EnablePropertyMessage has previously been called.
     */
    void GetPropertyMessage(Brhz& aValue);
    /**
     * Set the value of the MessageID property
     *
     * Can only be called if EnablePropertyMessageID has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyMessageID(TUint aValue);
    /**
     * Get a copy of the value of the MessageID property
     *
     * Can only be called if EnablePropertyMessageID has previously been called.
     */
    void GetPropertyMessageID(TUint& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgMessageCenter1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgMessageCenter1(DviDevice& aDevice);
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
    virtual void GetMessage(IDvInvocation& aInvocation, IDvInvocationResponseString& aMessage, IDvInvocationResponseUint& aMessageID);
private:
    DvProviderAvOpenhomeOrgMessageCenter1();
    void Construct();
    void DoGetMessage(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyMessage;
    PropertyUint* iPropertyMessageID;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGMESSAGECENTER1

