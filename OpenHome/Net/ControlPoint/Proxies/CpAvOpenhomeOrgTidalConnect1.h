#ifndef HEADER_AVOPENHOMEORGTIDALCONNECT1
#define HEADER_AVOPENHOMEORGTIDALCONNECT1

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Net/Core/CpProxy.h>

namespace OpenHome {
namespace Net {

class CpDevice;
class Action;
class PropertyBinary;
class PropertyBool;
class PropertyInt;
class PropertyString;
class PropertyUint;
class CpProxy;
class ICpProxyAvOpenhomeOrgTidalConnect1 : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgTidalConnect1() {}
    virtual void SyncPlay() = 0;
    virtual void BeginPlay(FunctorAsync& aFunctor) = 0;
    virtual void EndPlay(IAsync& aAsync) = 0;
    virtual void SyncPause() = 0;
    virtual void BeginPause(FunctorAsync& aFunctor) = 0;
    virtual void EndPause(IAsync& aAsync) = 0;
    virtual void SyncStop() = 0;
    virtual void BeginStop(FunctorAsync& aFunctor) = 0;
    virtual void EndStop(IAsync& aAsync) = 0;
    virtual void SyncNext() = 0;
    virtual void BeginNext(FunctorAsync& aFunctor) = 0;
    virtual void EndNext(IAsync& aAsync) = 0;
    virtual void SyncPrevious() = 0;
    virtual void BeginPrevious(FunctorAsync& aFunctor) = 0;
    virtual void EndPrevious(IAsync& aAsync) = 0;
    virtual void SyncToggleShuffle() = 0;
    virtual void BeginToggleShuffle(FunctorAsync& aFunctor) = 0;
    virtual void EndToggleShuffle(IAsync& aAsync) = 0;
    virtual void SyncToggleLoop() = 0;
    virtual void BeginToggleLoop(FunctorAsync& aFunctor) = 0;
    virtual void EndToggleLoop(IAsync& aAsync) = 0;
    virtual void SyncRequestMetadata() = 0;
    virtual void BeginRequestMetadata(FunctorAsync& aFunctor) = 0;
    virtual void EndRequestMetadata(IAsync& aAsync) = 0;
    virtual void SyncSeekSecondAbsolute(TUint aValue) = 0;
    virtual void BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSeekSecondAbsolute(IAsync& aAsync) = 0;
    virtual void SyncTransportState(Brh& aValue) = 0;
    virtual void BeginTransportState(FunctorAsync& aFunctor) = 0;
    virtual void EndTransportState(IAsync& aAsync, Brh& aValue) = 0;
    virtual void SetPropertyTransportStateChanged(Functor& aTransportStateChanged) = 0;
    virtual void PropertyTransportState(Brhz& aTransportState) const = 0;
    virtual void SetPropertyRepeatChanged(Functor& aRepeatChanged) = 0;
    virtual void PropertyRepeat(TBool& aRepeat) const = 0;
    virtual void SetPropertyRepeatOneChanged(Functor& aRepeatOneChanged) = 0;
    virtual void PropertyRepeatOne(TBool& aRepeatOne) const = 0;
    virtual void SetPropertyShuffleChanged(Functor& aShuffleChanged) = 0;
    virtual void PropertyShuffle(TBool& aShuffle) const = 0;
    virtual void SetPropertyUpdateCoverChanged(Functor& aUpdateCoverChanged) = 0;
    virtual void PropertyUpdateCover(TBool& aUpdateCover) const = 0;
};

/**
 * Proxy for av.openhome.org:TidalConnect:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgTidalConnect1 : public ICpProxyAvOpenhomeOrgTidalConnect1
{
public:
    /**
     * Constructor.
     *
     * Use iCpProxy::[Un]Subscribe() to enable/disable querying of state variable
     * and reporting of their changes.
     *
     * @param[in]  aDevice   The device to use
     */
    CpProxyAvOpenhomeOrgTidalConnect1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgTidalConnect1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncPlay();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlay().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlay(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPlay(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncPause();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPause().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPause(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPause(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncStop();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStop().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStop(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndStop(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncNext();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndNext().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginNext(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndNext(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncPrevious();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPrevious().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPrevious(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPrevious(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncToggleShuffle();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndToggleShuffle().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginToggleShuffle(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndToggleShuffle(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncToggleLoop();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndToggleLoop().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginToggleLoop(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndToggleLoop(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncRequestMetadata();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndRequestMetadata().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginRequestMetadata(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndRequestMetadata(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncSeekSecondAbsolute(TUint aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSeekSecondAbsolute().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSeekSecondAbsolute(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncTransportState(Brh& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndTransportState().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginTransportState(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndTransportState(IAsync& aAsync, Brh& aValue);

    /**
     * Set a callback to be run when the TransportState state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTidalConnect1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyTransportStateChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Repeat state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTidalConnect1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRepeatChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the RepeatOne state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTidalConnect1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRepeatOneChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Shuffle state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTidalConnect1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyShuffleChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateCover state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTidalConnect1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateCoverChanged(Functor& aFunctor);

    /**
     * Query the value of the TransportState property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aTransportState
     */
    void PropertyTransportState(Brhz& aTransportState) const;
    /**
     * Query the value of the Repeat property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRepeat
     */
    void PropertyRepeat(TBool& aRepeat) const;
    /**
     * Query the value of the RepeatOne property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRepeatOne
     */
    void PropertyRepeatOne(TBool& aRepeatOne) const;
    /**
     * Query the value of the Shuffle property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aShuffle
     */
    void PropertyShuffle(TBool& aShuffle) const;
    /**
     * Query the value of the UpdateCover property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateCover
     */
    void PropertyUpdateCover(TBool& aUpdateCover) const;
    /**
    * This function exposes the Subscribe() function of the iCpProxy member variable
    */
    void Subscribe();
    /**
    * This function exposes the Unsubscribe() function of the iCpProxy member variable
    */
    void Unsubscribe();
    /**
    * This function exposes the SetPropertyChanged() function of the iCpProxy member variable
    */
    void SetPropertyChanged(Functor& aFunctor);
    /**
    * This function exposes the SetPropertyInitialEvent() function of the iCpProxy member variable
    */
    void SetPropertyInitialEvent(Functor& aFunctor);
    /**
    * This function exposes the AddProperty() function of the iCpProxy member variable
    */
    void AddProperty(Property* aProperty);
    /**
    * This function exposes DestroyService() function of the iCpProxy member variable
    */
    void DestroyService();
    /**
    * This function exposes the REportEvent() function of the iCpProxy member variable
    */
    void ReportEvent(Functor aFunctor);
    /**
    * This function exposes the Version() function of the iCpProxy member variable
    */
    TUint Version() const;
private:
    CpProxy iCpProxy;
    void TransportStatePropertyChanged();
    void RepeatPropertyChanged();
    void RepeatOnePropertyChanged();
    void ShufflePropertyChanged();
    void UpdateCoverPropertyChanged();
private:
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionNext;
    Action* iActionPrevious;
    Action* iActionToggleShuffle;
    Action* iActionToggleLoop;
    Action* iActionRequestMetadata;
    Action* iActionSeekSecondAbsolute;
    Action* iActionTransportState;
    PropertyString* iTransportState;
    PropertyBool* iRepeat;
    PropertyBool* iRepeatOne;
    PropertyBool* iShuffle;
    PropertyBool* iUpdateCover;
    Functor iTransportStateChanged;
    Functor iRepeatChanged;
    Functor iRepeatOneChanged;
    Functor iShuffleChanged;
    Functor iUpdateCoverChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGTIDALCONNECT1

