#ifndef HEADER_AVOPENHOMEORGMESSAGECENTER1CPP
#define HEADER_AVOPENHOMEORGMESSAGECENTER1CPP

#include <OpenHome/Types.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Net/Core/CpProxy.h>

#include <string>

namespace OpenHome {
namespace Net {

class CpDeviceCpp;
class Action;
class PropertyBinary;
class PropertyBool;
class PropertyInt;
class PropertyString;
class PropertyUint;

/**
 * Proxy for av.openhome.org:MessageCenter:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgMessageCenter1Cpp : public CpProxy
{
public:
    /**
     * Constructor.
     *
     * Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable
     * and reporting of their changes.
     *
     * @param[in]  aDevice   The device to use
     */
    CpProxyAvOpenhomeOrgMessageCenter1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgMessageCenter1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aMessage
     * @param[out] aMessageID
     */
    void SyncGetMessage(std::string& aMessage, uint32_t& aMessageID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetMessage().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetMessage(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aMessage
     * @param[out] aMessageID
     */
    void EndGetMessage(IAsync& aAsync, std::string& aMessage, uint32_t& aMessageID);

    /**
     * Set a callback to be run when the Message state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgMessageCenter1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMessageChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the MessageID state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgMessageCenter1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMessageIDChanged(Functor& aFunctor);

    /**
     * Query the value of the Message property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMessage
     */
    void PropertyMessage(std::string& aMessage) const;
    /**
     * Query the value of the MessageID property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMessageID
     */
    void PropertyMessageID(uint32_t& aMessageID) const;
private:
    void MessagePropertyChanged();
    void MessageIDPropertyChanged();
private:
    Action* iActionGetMessage;
    PropertyString* iMessage;
    PropertyUint* iMessageID;
    Functor iMessageChanged;
    Functor iMessageIDChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGMESSAGECENTER1CPP

