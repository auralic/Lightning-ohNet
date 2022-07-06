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
class CpProxy;
class ICpProxyAvOpenhomeOrgGroupConfig1 : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgGroupConfig1() {}
    virtual void SyncSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName) = 0;
    virtual void BeginSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName, FunctorAsync& aFunctor) = 0;
    virtual void EndSetGroupMode(IAsync& aAsync) = 0;
    virtual void SyncGetGroupMode(Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName) = 0;
    virtual void BeginGetGroupMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetGroupMode(IAsync& aAsync, Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName) = 0;
    virtual void SyncSetGroupVolume(TUint aGroupVolume) = 0;
    virtual void BeginSetGroupVolume(TUint aGroupVolume, FunctorAsync& aFunctor) = 0;
    virtual void EndSetGroupVolume(IAsync& aAsync) = 0;
    virtual void SyncGetGroupVolume(TUint& aGroupVolume) = 0;
    virtual void BeginGetGroupVolume(FunctorAsync& aFunctor) = 0;
    virtual void EndGetGroupVolume(IAsync& aAsync, TUint& aGroupVolume) = 0;
    virtual void SyncSetGroupMute(TBool aGroupMute) = 0;
    virtual void BeginSetGroupMute(TBool aGroupMute, FunctorAsync& aFunctor) = 0;
    virtual void EndSetGroupMute(IAsync& aAsync) = 0;
    virtual void SyncGetGroupMute(TBool& aGroupMute) = 0;
    virtual void BeginGetGroupMute(FunctorAsync& aFunctor) = 0;
    virtual void EndGetGroupMute(IAsync& aAsync, TBool& aGroupMute) = 0;
    virtual void SyncGetGroupStatus(Brh& aGroupStatus) = 0;
    virtual void BeginGetGroupStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetGroupStatus(IAsync& aAsync, Brh& aGroupStatus) = 0;
    virtual void SyncSetGroupStatus(const Brx& aGroupStatus) = 0;
    virtual void BeginSetGroupStatus(const Brx& aGroupStatus, FunctorAsync& aFunctor) = 0;
    virtual void EndSetGroupStatus(IAsync& aAsync) = 0;
    virtual void SyncGetBitPerfectMode(TBool& aBitPerfectMode) = 0;
    virtual void BeginGetBitPerfectMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetBitPerfectMode(IAsync& aAsync, TBool& aBitPerfectMode) = 0;
    virtual void SyncSetBitPerfectMode(TBool aBitPerfectMode) = 0;
    virtual void BeginSetBitPerfectMode(TBool aBitPerfectMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetBitPerfectMode(IAsync& aAsync) = 0;
    virtual void SetPropertyGroupModeChanged(Functor& aGroupModeChanged) = 0;
    virtual void PropertyGroupMode(Brhz& aGroupMode) const = 0;
    virtual void SetPropertyGroupNameChanged(Functor& aGroupNameChanged) = 0;
    virtual void PropertyGroupName(Brhz& aGroupName) const = 0;
    virtual void SetPropertyGroupIDChanged(Functor& aGroupIDChanged) = 0;
    virtual void PropertyGroupID(Brhz& aGroupID) const = 0;
    virtual void SetPropertyGroupVolumeChanged(Functor& aGroupVolumeChanged) = 0;
    virtual void PropertyGroupVolume(TUint& aGroupVolume) const = 0;
    virtual void SetPropertyGroupMuteChanged(Functor& aGroupMuteChanged) = 0;
    virtual void PropertyGroupMute(TBool& aGroupMute) const = 0;
    virtual void SetPropertyGroupStatusChanged(Functor& aGroupStatusChanged) = 0;
    virtual void PropertyGroupStatus(Brhz& aGroupStatus) const = 0;
    virtual void SetPropertyBitPerfectModeChanged(Functor& aBitPerfectModeChanged) = 0;
    virtual void PropertyBitPerfectMode(TBool& aBitPerfectMode) const = 0;
};

/**
 * Proxy for av.openhome.org:GroupConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgGroupConfig1 : public ICpProxyAvOpenhomeOrgGroupConfig1
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
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aBitPerfectMode
     */
    void SyncGetBitPerfectMode(TBool& aBitPerfectMode);
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
    void EndGetBitPerfectMode(IAsync& aAsync, TBool& aBitPerfectMode);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aBitPerfectMode
     */
    void SyncSetBitPerfectMode(TBool aBitPerfectMode);
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
    void BeginSetBitPerfectMode(TBool aBitPerfectMode, FunctorAsync& aFunctor);
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
     * Set a callback to be run when the BitPerfectMode state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgGroupConfig1 instance will not overlap.
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
    /**
     * Query the value of the BitPerfectMode property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aBitPerfectMode
     */
    void PropertyBitPerfectMode(TBool& aBitPerfectMode) const;
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

#endif // HEADER_AVOPENHOMEORGGROUPCONFIG1

