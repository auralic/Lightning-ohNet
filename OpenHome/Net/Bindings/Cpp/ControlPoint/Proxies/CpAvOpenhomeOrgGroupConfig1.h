#ifndef HEADER_AVOPENHOMEORGGROUPCONFIG1CPP
#define HEADER_AVOPENHOMEORGGROUPCONFIG1CPP

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
 * Proxy for av.openhome.org:GroupConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgGroupConfig1Cpp : public CpProxy
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
    CpProxyAvOpenhomeOrgGroupConfig1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgGroupConfig1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aGroupMode
     * @param[in]  aGroupID
     * @param[in]  aGroupName
     */
    void SyncSetGroupMode(const std::string& aGroupMode, const std::string& aGroupID, const std::string& aGroupName);
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
    void BeginSetGroupMode(const std::string& aGroupMode, const std::string& aGroupID, const std::string& aGroupName, FunctorAsync& aFunctor);
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
    void SyncGetGroupMode(std::string& aGroupMode, std::string& aGroupID, std::string& aGroupName);
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
    void EndGetGroupMode(IAsync& aAsync, std::string& aGroupMode, std::string& aGroupID, std::string& aGroupName);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aGroupVolume
     */
    void SyncSetGroupVolume(uint32_t aGroupVolume);
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
    void BeginSetGroupVolume(uint32_t aGroupVolume, FunctorAsync& aFunctor);
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
    void SyncGetGroupVolume(uint32_t& aGroupVolume);
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
    void EndGetGroupVolume(IAsync& aAsync, uint32_t& aGroupVolume);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aGroupMute
     */
    void SyncSetGroupMute(bool aGroupMute);
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
    void BeginSetGroupMute(bool aGroupMute, FunctorAsync& aFunctor);
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
    void SyncGetGroupMute(bool& aGroupMute);
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
    void EndGetGroupMute(IAsync& aAsync, bool& aGroupMute);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aGroupStatus
     */
    void SyncGetGroupStatus(std::string& aGroupStatus);
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
    void EndGetGroupStatus(IAsync& aAsync, std::string& aGroupStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aGroupStatus
     */
    void SyncSetGroupStatus(const std::string& aGroupStatus);
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
    void BeginSetGroupStatus(const std::string& aGroupStatus, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetGroupStatus(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aBitPerfectMode
     */
    void SyncGetBitPerfectMode(bool& aBitPerfectMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetBitPerfectMode().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetBitPerfectMode(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aBitPerfectMode
     */
    void EndGetBitPerfectMode(IAsync& aAsync, bool& aBitPerfectMode);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aBitPerfectMode
     */
    void SyncSetBitPerfectMode(bool aBitPerfectMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetBitPerfectMode().
     *
     * @param[in] aBitPerfectMode
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetBitPerfectMode(bool aBitPerfectMode, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetBitPerfectMode(IAsync& aAsync);

    /**
     * Set a callback to be run when the GroupMode state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupModeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GroupName state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupNameChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GroupID state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupIDChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GroupVolume state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupVolumeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GroupMute state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupMuteChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GroupStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGroupStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the BitPerfectMode state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyBitPerfectModeChanged(Functor& aFunctor);

    /**
     * Query the value of the GroupMode property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupMode
     */
    void PropertyGroupMode(std::string& aGroupMode) const;
    /**
     * Query the value of the GroupName property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupName
     */
    void PropertyGroupName(std::string& aGroupName) const;
    /**
     * Query the value of the GroupID property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupID
     */
    void PropertyGroupID(std::string& aGroupID) const;
    /**
     * Query the value of the GroupVolume property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupVolume
     */
    void PropertyGroupVolume(uint32_t& aGroupVolume) const;
    /**
     * Query the value of the GroupMute property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupMute
     */
    void PropertyGroupMute(bool& aGroupMute) const;
    /**
     * Query the value of the GroupStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGroupStatus
     */
    void PropertyGroupStatus(std::string& aGroupStatus) const;
    /**
     * Query the value of the BitPerfectMode property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aBitPerfectMode
     */
    void PropertyBitPerfectMode(bool& aBitPerfectMode) const;
private:
    void GroupModePropertyChanged();
    void GroupNamePropertyChanged();
    void GroupIDPropertyChanged();
    void GroupVolumePropertyChanged();
    void GroupMutePropertyChanged();
    void GroupStatusPropertyChanged();
    void BitPerfectModePropertyChanged();
private:
    Action* iActionSetGroupMode;
    Action* iActionGetGroupMode;
    Action* iActionSetGroupVolume;
    Action* iActionGetGroupVolume;
    Action* iActionSetGroupMute;
    Action* iActionGetGroupMute;
    Action* iActionGetGroupStatus;
    Action* iActionSetGroupStatus;
    Action* iActionGetBitPerfectMode;
    Action* iActionSetBitPerfectMode;
    PropertyString* iGroupMode;
    PropertyString* iGroupName;
    PropertyString* iGroupID;
    PropertyUint* iGroupVolume;
    PropertyBool* iGroupMute;
    PropertyString* iGroupStatus;
    PropertyBool* iBitPerfectMode;
    Functor iGroupModeChanged;
    Functor iGroupNameChanged;
    Functor iGroupIDChanged;
    Functor iGroupVolumeChanged;
    Functor iGroupMuteChanged;
    Functor iGroupStatusChanged;
    Functor iBitPerfectModeChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGGROUPCONFIG1CPP

