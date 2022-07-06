#ifndef HEADER_TENCENTCOMQPLAY1
#define HEADER_TENCENTCOMQPLAY1

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
class ICpProxyTencentComQPlay1 : public ICpProxy
{
public:
    virtual ~ICpProxyTencentComQPlay1() {}
    virtual void SyncSetNetwork(const Brx& aSSID, const Brx& aKey, const Brx& aAuthAlgo, const Brx& aCipherAlgo) = 0;
    virtual void BeginSetNetwork(const Brx& aSSID, const Brx& aKey, const Brx& aAuthAlgo, const Brx& aCipherAlgo, FunctorAsync& aFunctor) = 0;
    virtual void EndSetNetwork(IAsync& aAsync) = 0;
    virtual void SyncQPlayAuth(const Brx& aSeed, Brh& aCode, Brh& aMID, Brh& aDID) = 0;
    virtual void BeginQPlayAuth(const Brx& aSeed, FunctorAsync& aFunctor) = 0;
    virtual void EndQPlayAuth(IAsync& aAsync, Brh& aCode, Brh& aMID, Brh& aDID) = 0;
    virtual void SyncInsertTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aTracksMetaData, Brh& aNumberOfSuccess) = 0;
    virtual void BeginInsertTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aTracksMetaData, FunctorAsync& aFunctor) = 0;
    virtual void EndInsertTracks(IAsync& aAsync, Brh& aNumberOfSuccess) = 0;
    virtual void SyncRemoveTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNumberOfTracks, Brh& aNumberOfSuccess) = 0;
    virtual void BeginRemoveTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNumberOfTracks, FunctorAsync& aFunctor) = 0;
    virtual void EndRemoveTracks(IAsync& aAsync, Brh& aNumberOfSuccess) = 0;
    virtual void SyncGetTracksInfo(const Brx& aStartingIndex, const Brx& aNumberOfTracks, Brh& aTracksMetaData) = 0;
    virtual void BeginGetTracksInfo(const Brx& aStartingIndex, const Brx& aNumberOfTracks, FunctorAsync& aFunctor) = 0;
    virtual void EndGetTracksInfo(IAsync& aAsync, Brh& aTracksMetaData) = 0;
    virtual void SyncSetTracksInfo(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNextIndex, const Brx& aTracksMetaData, Brh& aNumberOfSuccess) = 0;
    virtual void BeginSetTracksInfo(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNextIndex, const Brx& aTracksMetaData, FunctorAsync& aFunctor) = 0;
    virtual void EndSetTracksInfo(IAsync& aAsync, Brh& aNumberOfSuccess) = 0;
    virtual void SyncGetTracksCount(Brh& aNrTracks) = 0;
    virtual void BeginGetTracksCount(FunctorAsync& aFunctor) = 0;
    virtual void EndGetTracksCount(IAsync& aAsync, Brh& aNrTracks) = 0;
    virtual void SyncGetMaxTracks(Brh& aMaxTracks) = 0;
    virtual void BeginGetMaxTracks(FunctorAsync& aFunctor) = 0;
    virtual void EndGetMaxTracks(IAsync& aAsync, Brh& aMaxTracks) = 0;
};

/**
 * Proxy for tencent.com:QPlay:1
 * @ingroup Proxies
 */
class CpProxyTencentComQPlay1 : public ICpProxyTencentComQPlay1
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
    CpProxyTencentComQPlay1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyTencentComQPlay1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aSSID
     * @param[in]  aKey
     * @param[in]  aAuthAlgo
     * @param[in]  aCipherAlgo
     */
    void SyncSetNetwork(const Brx& aSSID, const Brx& aKey, const Brx& aAuthAlgo, const Brx& aCipherAlgo);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetNetwork().
     *
     * @param[in] aSSID
     * @param[in] aKey
     * @param[in] aAuthAlgo
     * @param[in] aCipherAlgo
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetNetwork(const Brx& aSSID, const Brx& aKey, const Brx& aAuthAlgo, const Brx& aCipherAlgo, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetNetwork(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aSeed
     * @param[out] aCode
     * @param[out] aMID
     * @param[out] aDID
     */
    void SyncQPlayAuth(const Brx& aSeed, Brh& aCode, Brh& aMID, Brh& aDID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndQPlayAuth().
     *
     * @param[in] aSeed
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginQPlayAuth(const Brx& aSeed, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCode
     * @param[out] aMID
     * @param[out] aDID
     */
    void EndQPlayAuth(IAsync& aAsync, Brh& aCode, Brh& aMID, Brh& aDID);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aQueueID
     * @param[in]  aStartingIndex
     * @param[in]  aTracksMetaData
     * @param[out] aNumberOfSuccess
     */
    void SyncInsertTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aTracksMetaData, Brh& aNumberOfSuccess);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndInsertTracks().
     *
     * @param[in] aQueueID
     * @param[in] aStartingIndex
     * @param[in] aTracksMetaData
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginInsertTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aTracksMetaData, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNumberOfSuccess
     */
    void EndInsertTracks(IAsync& aAsync, Brh& aNumberOfSuccess);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aQueueID
     * @param[in]  aStartingIndex
     * @param[in]  aNumberOfTracks
     * @param[out] aNumberOfSuccess
     */
    void SyncRemoveTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNumberOfTracks, Brh& aNumberOfSuccess);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndRemoveTracks().
     *
     * @param[in] aQueueID
     * @param[in] aStartingIndex
     * @param[in] aNumberOfTracks
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginRemoveTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNumberOfTracks, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNumberOfSuccess
     */
    void EndRemoveTracks(IAsync& aAsync, Brh& aNumberOfSuccess);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aStartingIndex
     * @param[in]  aNumberOfTracks
     * @param[out] aTracksMetaData
     */
    void SyncGetTracksInfo(const Brx& aStartingIndex, const Brx& aNumberOfTracks, Brh& aTracksMetaData);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetTracksInfo().
     *
     * @param[in] aStartingIndex
     * @param[in] aNumberOfTracks
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetTracksInfo(const Brx& aStartingIndex, const Brx& aNumberOfTracks, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aTracksMetaData
     */
    void EndGetTracksInfo(IAsync& aAsync, Brh& aTracksMetaData);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aQueueID
     * @param[in]  aStartingIndex
     * @param[in]  aNextIndex
     * @param[in]  aTracksMetaData
     * @param[out] aNumberOfSuccess
     */
    void SyncSetTracksInfo(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNextIndex, const Brx& aTracksMetaData, Brh& aNumberOfSuccess);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetTracksInfo().
     *
     * @param[in] aQueueID
     * @param[in] aStartingIndex
     * @param[in] aNextIndex
     * @param[in] aTracksMetaData
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetTracksInfo(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNextIndex, const Brx& aTracksMetaData, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNumberOfSuccess
     */
    void EndSetTracksInfo(IAsync& aAsync, Brh& aNumberOfSuccess);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aNrTracks
     */
    void SyncGetTracksCount(Brh& aNrTracks);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetTracksCount().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetTracksCount(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNrTracks
     */
    void EndGetTracksCount(IAsync& aAsync, Brh& aNrTracks);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aMaxTracks
     */
    void SyncGetMaxTracks(Brh& aMaxTracks);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetMaxTracks().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetMaxTracks(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aMaxTracks
     */
    void EndGetMaxTracks(IAsync& aAsync, Brh& aMaxTracks);


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
private:
    Action* iActionSetNetwork;
    Action* iActionQPlayAuth;
    Action* iActionInsertTracks;
    Action* iActionRemoveTracks;
    Action* iActionGetTracksInfo;
    Action* iActionSetTracksInfo;
    Action* iActionGetTracksCount;
    Action* iActionGetMaxTracks;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_TENCENTCOMQPLAY1

