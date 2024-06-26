#ifndef HEADER_AVOPENHOMEORGVOLUME1
#define HEADER_AVOPENHOMEORGVOLUME1

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
class ICpProxyAvOpenhomeOrgVolume1 : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgVolume1() {}
    virtual void SyncCharacteristics(TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax) = 0;
    virtual void BeginCharacteristics(FunctorAsync& aFunctor) = 0;
    virtual void EndCharacteristics(IAsync& aAsync, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax) = 0;
    virtual void SyncSetVolume(TUint aValue) = 0;
    virtual void BeginSetVolume(TUint aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetVolume(IAsync& aAsync) = 0;
    virtual void SyncCanSetVolume(TUint aValue) = 0;
    virtual void BeginCanSetVolume(TUint aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndCanSetVolume(IAsync& aAsync) = 0;
    virtual void SyncVolumeInc() = 0;
    virtual void BeginVolumeInc(FunctorAsync& aFunctor) = 0;
    virtual void EndVolumeInc(IAsync& aAsync) = 0;
    virtual void SyncVolumeDec() = 0;
    virtual void BeginVolumeDec(FunctorAsync& aFunctor) = 0;
    virtual void EndVolumeDec(IAsync& aAsync) = 0;
    virtual void SyncVolume(TUint& aValue) = 0;
    virtual void BeginVolume(FunctorAsync& aFunctor) = 0;
    virtual void EndVolume(IAsync& aAsync, TUint& aValue) = 0;
    virtual void SyncSetBalance(TInt aValue) = 0;
    virtual void BeginSetBalance(TInt aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetBalance(IAsync& aAsync) = 0;
    virtual void SyncBalanceInc() = 0;
    virtual void BeginBalanceInc(FunctorAsync& aFunctor) = 0;
    virtual void EndBalanceInc(IAsync& aAsync) = 0;
    virtual void SyncBalanceDec() = 0;
    virtual void BeginBalanceDec(FunctorAsync& aFunctor) = 0;
    virtual void EndBalanceDec(IAsync& aAsync) = 0;
    virtual void SyncBalance(TInt& aValue) = 0;
    virtual void BeginBalance(FunctorAsync& aFunctor) = 0;
    virtual void EndBalance(IAsync& aAsync, TInt& aValue) = 0;
    virtual void SyncSetFade(TInt aValue) = 0;
    virtual void BeginSetFade(TInt aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetFade(IAsync& aAsync) = 0;
    virtual void SyncFadeInc() = 0;
    virtual void BeginFadeInc(FunctorAsync& aFunctor) = 0;
    virtual void EndFadeInc(IAsync& aAsync) = 0;
    virtual void SyncFadeDec() = 0;
    virtual void BeginFadeDec(FunctorAsync& aFunctor) = 0;
    virtual void EndFadeDec(IAsync& aAsync) = 0;
    virtual void SyncFade(TInt& aValue) = 0;
    virtual void BeginFade(FunctorAsync& aFunctor) = 0;
    virtual void EndFade(IAsync& aAsync, TInt& aValue) = 0;
    virtual void SyncSetMute(TBool aValue) = 0;
    virtual void BeginSetMute(TBool aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetMute(IAsync& aAsync) = 0;
    virtual void SyncCanSetMute(TBool aValue) = 0;
    virtual void BeginCanSetMute(TBool aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndCanSetMute(IAsync& aAsync) = 0;
    virtual void SyncMute(TBool& aValue) = 0;
    virtual void BeginMute(FunctorAsync& aFunctor) = 0;
    virtual void EndMute(IAsync& aAsync, TBool& aValue) = 0;
    virtual void SyncVolumeLimit(TUint& aValue) = 0;
    virtual void BeginVolumeLimit(FunctorAsync& aFunctor) = 0;
    virtual void EndVolumeLimit(IAsync& aAsync, TUint& aValue) = 0;
    virtual void SetPropertyVolumeChanged(Functor& aVolumeChanged) = 0;
    virtual void PropertyVolume(TUint& aVolume) const = 0;
    virtual void SetPropertyMuteChanged(Functor& aMuteChanged) = 0;
    virtual void PropertyMute(TBool& aMute) const = 0;
    virtual void SetPropertyBalanceChanged(Functor& aBalanceChanged) = 0;
    virtual void PropertyBalance(TInt& aBalance) const = 0;
    virtual void SetPropertyFadeChanged(Functor& aFadeChanged) = 0;
    virtual void PropertyFade(TInt& aFade) const = 0;
    virtual void SetPropertyVolumeLimitChanged(Functor& aVolumeLimitChanged) = 0;
    virtual void PropertyVolumeLimit(TUint& aVolumeLimit) const = 0;
    virtual void SetPropertyVolumeMaxChanged(Functor& aVolumeMaxChanged) = 0;
    virtual void PropertyVolumeMax(TUint& aVolumeMax) const = 0;
    virtual void SetPropertyVolumeUnityChanged(Functor& aVolumeUnityChanged) = 0;
    virtual void PropertyVolumeUnity(TUint& aVolumeUnity) const = 0;
    virtual void SetPropertyVolumeStepsChanged(Functor& aVolumeStepsChanged) = 0;
    virtual void PropertyVolumeSteps(TUint& aVolumeSteps) const = 0;
    virtual void SetPropertyVolumeMilliDbPerStepChanged(Functor& aVolumeMilliDbPerStepChanged) = 0;
    virtual void PropertyVolumeMilliDbPerStep(TUint& aVolumeMilliDbPerStep) const = 0;
    virtual void SetPropertyBalanceMaxChanged(Functor& aBalanceMaxChanged) = 0;
    virtual void PropertyBalanceMax(TUint& aBalanceMax) const = 0;
    virtual void SetPropertyFadeMaxChanged(Functor& aFadeMaxChanged) = 0;
    virtual void PropertyFadeMax(TUint& aFadeMax) const = 0;
};

/**
 * Proxy for av.openhome.org:Volume:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgVolume1 : public ICpProxyAvOpenhomeOrgVolume1
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
    CpProxyAvOpenhomeOrgVolume1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgVolume1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aVolumeMax
     * @param[out] aVolumeUnity
     * @param[out] aVolumeSteps
     * @param[out] aVolumeMilliDbPerStep
     * @param[out] aBalanceMax
     * @param[out] aFadeMax
     */
    void SyncCharacteristics(TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndCharacteristics().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginCharacteristics(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aVolumeMax
     * @param[out] aVolumeUnity
     * @param[out] aVolumeSteps
     * @param[out] aVolumeMilliDbPerStep
     * @param[out] aBalanceMax
     * @param[out] aFadeMax
     */
    void EndCharacteristics(IAsync& aAsync, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncSetVolume(TUint aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetVolume().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetVolume(TUint aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetVolume(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncCanSetVolume(TUint aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndCanSetVolume().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginCanSetVolume(TUint aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndCanSetVolume(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncVolumeInc();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVolumeInc().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVolumeInc(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndVolumeInc(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncVolumeDec();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVolumeDec().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVolumeDec(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndVolumeDec(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncVolume(TUint& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVolume().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVolume(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndVolume(IAsync& aAsync, TUint& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncSetBalance(TInt aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetBalance().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetBalance(TInt aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetBalance(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncBalanceInc();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBalanceInc().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBalanceInc(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndBalanceInc(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncBalanceDec();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBalanceDec().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBalanceDec(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndBalanceDec(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncBalance(TInt& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBalance().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBalance(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndBalance(IAsync& aAsync, TInt& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncSetFade(TInt aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetFade().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetFade(TInt aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetFade(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncFadeInc();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndFadeInc().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginFadeInc(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndFadeInc(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncFadeDec();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndFadeDec().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginFadeDec(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndFadeDec(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncFade(TInt& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndFade().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginFade(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndFade(IAsync& aAsync, TInt& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncSetMute(TBool aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetMute().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetMute(TBool aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetMute(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncCanSetMute(TBool aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndCanSetMute().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginCanSetMute(TBool aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndCanSetMute(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncMute(TBool& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndMute().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginMute(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndMute(IAsync& aAsync, TBool& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncVolumeLimit(TUint& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVolumeLimit().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVolumeLimit(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndVolumeLimit(IAsync& aAsync, TUint& aValue);

    /**
     * Set a callback to be run when the Volume state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Mute state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMuteChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Balance state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyBalanceChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Fade state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyFadeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeLimit state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeLimitChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeMaxChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeUnity state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeUnityChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeSteps state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeStepsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeMilliDbPerStep state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the BalanceMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyBalanceMaxChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the FadeMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyFadeMaxChanged(Functor& aFunctor);

    /**
     * Query the value of the Volume property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolume
     */
    void PropertyVolume(TUint& aVolume) const;
    /**
     * Query the value of the Mute property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMute
     */
    void PropertyMute(TBool& aMute) const;
    /**
     * Query the value of the Balance property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aBalance
     */
    void PropertyBalance(TInt& aBalance) const;
    /**
     * Query the value of the Fade property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aFade
     */
    void PropertyFade(TInt& aFade) const;
    /**
     * Query the value of the VolumeLimit property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeLimit
     */
    void PropertyVolumeLimit(TUint& aVolumeLimit) const;
    /**
     * Query the value of the VolumeMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeMax
     */
    void PropertyVolumeMax(TUint& aVolumeMax) const;
    /**
     * Query the value of the VolumeUnity property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeUnity
     */
    void PropertyVolumeUnity(TUint& aVolumeUnity) const;
    /**
     * Query the value of the VolumeSteps property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeSteps
     */
    void PropertyVolumeSteps(TUint& aVolumeSteps) const;
    /**
     * Query the value of the VolumeMilliDbPerStep property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeMilliDbPerStep
     */
    void PropertyVolumeMilliDbPerStep(TUint& aVolumeMilliDbPerStep) const;
    /**
     * Query the value of the BalanceMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aBalanceMax
     */
    void PropertyBalanceMax(TUint& aBalanceMax) const;
    /**
     * Query the value of the FadeMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aFadeMax
     */
    void PropertyFadeMax(TUint& aFadeMax) const;
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
    void VolumePropertyChanged();
    void MutePropertyChanged();
    void BalancePropertyChanged();
    void FadePropertyChanged();
    void VolumeLimitPropertyChanged();
    void VolumeMaxPropertyChanged();
    void VolumeUnityPropertyChanged();
    void VolumeStepsPropertyChanged();
    void VolumeMilliDbPerStepPropertyChanged();
    void BalanceMaxPropertyChanged();
    void FadeMaxPropertyChanged();
private:
    Action* iActionCharacteristics;
    Action* iActionSetVolume;
    Action* iActionCanSetVolume;
    Action* iActionVolumeInc;
    Action* iActionVolumeDec;
    Action* iActionVolume;
    Action* iActionSetBalance;
    Action* iActionBalanceInc;
    Action* iActionBalanceDec;
    Action* iActionBalance;
    Action* iActionSetFade;
    Action* iActionFadeInc;
    Action* iActionFadeDec;
    Action* iActionFade;
    Action* iActionSetMute;
    Action* iActionCanSetMute;
    Action* iActionMute;
    Action* iActionVolumeLimit;
    PropertyUint* iVolume;
    PropertyBool* iMute;
    PropertyInt* iBalance;
    PropertyInt* iFade;
    PropertyUint* iVolumeLimit;
    PropertyUint* iVolumeMax;
    PropertyUint* iVolumeUnity;
    PropertyUint* iVolumeSteps;
    PropertyUint* iVolumeMilliDbPerStep;
    PropertyUint* iBalanceMax;
    PropertyUint* iFadeMax;
    Functor iVolumeChanged;
    Functor iMuteChanged;
    Functor iBalanceChanged;
    Functor iFadeChanged;
    Functor iVolumeLimitChanged;
    Functor iVolumeMaxChanged;
    Functor iVolumeUnityChanged;
    Functor iVolumeStepsChanged;
    Functor iVolumeMilliDbPerStepChanged;
    Functor iBalanceMaxChanged;
    Functor iFadeMaxChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGVOLUME1

