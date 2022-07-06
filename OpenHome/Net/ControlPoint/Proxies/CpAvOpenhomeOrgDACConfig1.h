#ifndef HEADER_AVOPENHOMEORGDACCONFIG1
#define HEADER_AVOPENHOMEORGDACCONFIG1

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
class ICpProxyAvOpenhomeOrgDACConfig1 : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgDACConfig1() {}
    virtual void SyncGetFilterMode(Brh& aFilterMode, Brh& aFilterModeList) = 0;
    virtual void BeginGetFilterMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetFilterMode(IAsync& aAsync, Brh& aFilterMode, Brh& aFilterModeList) = 0;
    virtual void SyncSetFilterMode(const Brx& aFilterMode) = 0;
    virtual void BeginSetFilterMode(const Brx& aFilterMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetFilterMode(IAsync& aAsync) = 0;
    virtual void SyncGetDACPhase(TUint& aPhase) = 0;
    virtual void BeginGetDACPhase(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDACPhase(IAsync& aAsync, TUint& aPhase) = 0;
    virtual void SyncSetDACPhase(TUint aPhase) = 0;
    virtual void BeginSetDACPhase(TUint aPhase, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDACPhase(IAsync& aAsync) = 0;
    virtual void SyncGetDACBalance(TUint& aBalance) = 0;
    virtual void BeginGetDACBalance(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDACBalance(IAsync& aAsync, TUint& aBalance) = 0;
    virtual void SyncSetDACBalance(TUint aBalance) = 0;
    virtual void BeginSetDACBalance(TUint aBalance, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDACBalance(IAsync& aAsync) = 0;
    virtual void SyncGetWaitingTime(Brh& aWaitingTime) = 0;
    virtual void BeginGetWaitingTime(FunctorAsync& aFunctor) = 0;
    virtual void EndGetWaitingTime(IAsync& aAsync, Brh& aWaitingTime) = 0;
    virtual void SyncSetWaitingTime(const Brx& aWaitingTime) = 0;
    virtual void BeginSetWaitingTime(const Brx& aWaitingTime, FunctorAsync& aFunctor) = 0;
    virtual void EndSetWaitingTime(IAsync& aAsync) = 0;
    virtual void SetPropertyCurrentActionChanged(Functor& aCurrentActionChanged) = 0;
    virtual void PropertyCurrentAction(TUint& aCurrentAction) const = 0;
};

/**
 * Proxy for av.openhome.org:DACConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgDACConfig1 : public ICpProxyAvOpenhomeOrgDACConfig1
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
    CpProxyAvOpenhomeOrgDACConfig1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgDACConfig1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aFilterMode
     * @param[out] aFilterModeList
     */
    void SyncGetFilterMode(Brh& aFilterMode, Brh& aFilterModeList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetFilterMode().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetFilterMode(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aFilterMode
     * @param[out] aFilterModeList
     */
    void EndGetFilterMode(IAsync& aAsync, Brh& aFilterMode, Brh& aFilterModeList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aFilterMode
     */
    void SyncSetFilterMode(const Brx& aFilterMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetFilterMode().
     *
     * @param[in] aFilterMode
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetFilterMode(const Brx& aFilterMode, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetFilterMode(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aPhase
     */
    void SyncGetDACPhase(TUint& aPhase);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDACPhase().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDACPhase(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aPhase
     */
    void EndGetDACPhase(IAsync& aAsync, TUint& aPhase);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aPhase
     */
    void SyncSetDACPhase(TUint aPhase);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetDACPhase().
     *
     * @param[in] aPhase
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetDACPhase(TUint aPhase, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetDACPhase(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aBalance
     */
    void SyncGetDACBalance(TUint& aBalance);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDACBalance().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDACBalance(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aBalance
     */
    void EndGetDACBalance(IAsync& aAsync, TUint& aBalance);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aBalance
     */
    void SyncSetDACBalance(TUint aBalance);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetDACBalance().
     *
     * @param[in] aBalance
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetDACBalance(TUint aBalance, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetDACBalance(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aWaitingTime
     */
    void SyncGetWaitingTime(Brh& aWaitingTime);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetWaitingTime().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetWaitingTime(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aWaitingTime
     */
    void EndGetWaitingTime(IAsync& aAsync, Brh& aWaitingTime);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aWaitingTime
     */
    void SyncSetWaitingTime(const Brx& aWaitingTime);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetWaitingTime().
     *
     * @param[in] aWaitingTime
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetWaitingTime(const Brx& aWaitingTime, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetWaitingTime(IAsync& aAsync);

    /**
     * Set a callback to be run when the CurrentAction state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgDACConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCurrentActionChanged(Functor& aFunctor);

    /**
     * Query the value of the CurrentAction property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCurrentAction
     */
    void PropertyCurrentAction(TUint& aCurrentAction) const;
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
    void CurrentActionPropertyChanged();
private:
    Action* iActionGetFilterMode;
    Action* iActionSetFilterMode;
    Action* iActionGetDACPhase;
    Action* iActionSetDACPhase;
    Action* iActionGetDACBalance;
    Action* iActionSetDACBalance;
    Action* iActionGetWaitingTime;
    Action* iActionSetWaitingTime;
    PropertyUint* iCurrentAction;
    Functor iCurrentActionChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGDACCONFIG1

