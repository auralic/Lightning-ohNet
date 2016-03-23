#ifndef HEADER_AVOPENHOMEORGGROUPCONFIG1
#define HEADER_AVOPENHOMEORGGROUPCONFIG1

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

/**
 * Proxy for av.openhome.org:GroupConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgGroupConfig1 : public CpProxy
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
    CpProxyAvOpenhomeOrgGroupConfig1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgGroupConfig1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aGroupMode
     * @param[in]  aGroupID
     * @param[in]  aGroupName
     */
    void SyncSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetGroupMode().
     *
     * @param[in] aGroupMode
     * @param[in] aGroupID
     * @param[in] aGroupName
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetGroupMode(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aGroupMode
     * @param[out] aGroupID
     * @param[out] aGroupName
     */
    void SyncGetGroupMode(Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetGroupMode().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetGroupMode(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aGroupMode
     * @param[out] aGroupID
     * @param[out] aGroupName
     */
    void EndGetGroupMode(IAsync& aAsync, Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aGroupVolume
     */
    void SyncSetGroupVolume(TUint aGroupVolume);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetGroupVolume().
     *
     * @param[in] aGroupVolume
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetGroupVolume(TUint aGroupVolume, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetGroupVolume(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aGroupVolume
     */
    void SyncGetGroupVolume(TUint& aGroupVolume);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetGroupVolume().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetGroupVolume(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aGroupVolume
     */
    void EndGetGroupVolume(IAsync& aAsync, TUint& aGroupVolume);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aGroupMute
     */
    void SyncSetGroupMute(TBool aGroupMute);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetGroupMute().
     *
     * @param[in] aGroupMute
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetGroupMute(TBool aGroupMute, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetGroupMute(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aGroupMute
     */
    void SyncGetGroupMute(TBool& aGroupMute);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetGroupMute().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetGroupMute(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aGroupMute
     */
    void EndGetGroupMute(IAsync& aAsync, TBool& aGroupMute);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aGroupStatus
     */
    void SyncGetGroupStatus(Brh& aGroupStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetGroupStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetGroupStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aGroupStatus
     */
    void EndGetGroupStatus(IAsync& aAsync, Brh& aGroupStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aGroupStatus
     */
    void SyncSetGroupStatus(const Brx& aGroupStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetGroupStatus().
     *
     * @param[in] aGroupStatus
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetGroupStatus(const Brx& aGroupStatus, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetGroupStatus(IAsync& aAsync);

    /**
     * Set a callback to be run when the GroupMode state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupModeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GroupName state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupNameChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GroupID state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupIDChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GroupVolume state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupVolumeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GroupMute state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupMuteChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GroupStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupStatusChanged(Functor& aFunctor);

    /**
     * Query the value of the GroupMode property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupMode
     */
    void PropertyGroupMode(Brhz& aGroupMode) const;
    /**
     * Query the value of the GroupName property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupName
     */
    void PropertyGroupName(Brhz& aGroupName) const;
    /**
     * Query the value of the GroupID property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupID
     */
    void PropertyGroupID(Brhz& aGroupID) const;
    /**
     * Query the value of the GroupVolume property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupVolume
     */
    void PropertyGroupVolume(TUint& aGroupVolume) const;
    /**
     * Query the value of the GroupMute property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupMute
     */
    void PropertyGroupMute(TBool& aGroupMute) const;
    /**
     * Query the value of the GroupStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupStatus
     */
    void PropertyGroupStatus(Brhz& aGroupStatus) const;
private:
    void GroupModePropertyChanged();
    void GroupNamePropertyChanged();
    void GroupIDPropertyChanged();
    void GroupVolumePropertyChanged();
    void GroupMutePropertyChanged();
    void GroupStatusPropertyChanged();
private:
    Action* iActionSetGroupMode;
    Action* iActionGetGroupMode;
    Action* iActionSetGroupVolume;
    Action* iActionGetGroupVolume;
    Action* iActionSetGroupMute;
    Action* iActionGetGroupMute;
    Action* iActionGetGroupStatus;
    Action* iActionSetGroupStatus;
    PropertyString* iGroupMode;
    PropertyString* iGroupName;
    PropertyString* iGroupID;
    PropertyUint* iGroupVolume;
    PropertyBool* iGroupMute;
    PropertyString* iGroupStatus;
    Functor iGroupModeChanged;
    Functor iGroupNameChanged;
    Functor iGroupIDChanged;
    Functor iGroupVolumeChanged;
    Functor iGroupMuteChanged;
    Functor iGroupStatusChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGGROUPCONFIG1

