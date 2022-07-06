#ifndef HEADER_TENCENTCOMQPLAY1CPP
#define HEADER_TENCENTCOMQPLAY1CPP

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
class CpProxy;
class ICpProxyTencentComQPlay1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyTencentComQPlay1Cpp() {}
    virtual void SyncSetNetwork(const std::string& aSSID, const std::string& aKey, const std::string& aAuthAlgo, const std::string& aCipherAlgo) = 0;
    virtual void BeginSetNetwork(const std::string& aSSID, const std::string& aKey, const std::string& aAuthAlgo, const std::string& aCipherAlgo, FunctorAsync& aFunctor) = 0;
    virtual void EndSetNetwork(IAsync& aAsync) = 0;
    virtual void SyncQPlayAuth(const std::string& aSeed, std::string& aCode, std::string& aMID, std::string& aDID) = 0;
    virtual void BeginQPlayAuth(const std::string& aSeed, FunctorAsync& aFunctor) = 0;
    virtual void EndQPlayAuth(IAsync& aAsync, std::string& aCode, std::string& aMID, std::string& aDID) = 0;
    virtual void SyncInsertTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aTracksMetaData, std::string& aNumberOfSuccess) = 0;
    virtual void BeginInsertTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aTracksMetaData, FunctorAsync& aFunctor) = 0;
    virtual void EndInsertTracks(IAsync& aAsync, std::string& aNumberOfSuccess) = 0;
    virtual void SyncRemoveTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNumberOfTracks, std::string& aNumberOfSuccess) = 0;
    virtual void BeginRemoveTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNumberOfTracks, FunctorAsync& aFunctor) = 0;
    virtual void EndRemoveTracks(IAsync& aAsync, std::string& aNumberOfSuccess) = 0;
    virtual void SyncGetTracksInfo(const std::string& aStartingIndex, const std::string& aNumberOfTracks, std::string& aTracksMetaData) = 0;
    virtual void BeginGetTracksInfo(const std::string& aStartingIndex, const std::string& aNumberOfTracks, FunctorAsync& aFunctor) = 0;
    virtual void EndGetTracksInfo(IAsync& aAsync, std::string& aTracksMetaData) = 0;
    virtual void SyncSetTracksInfo(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNextIndex, const std::string& aTracksMetaData, std::string& aNumberOfSuccess) = 0;
    virtual void BeginSetTracksInfo(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNextIndex, const std::string& aTracksMetaData, FunctorAsync& aFunctor) = 0;
    virtual void EndSetTracksInfo(IAsync& aAsync, std::string& aNumberOfSuccess) = 0;
    virtual void SyncGetTracksCount(std::string& aNrTracks) = 0;
    virtual void BeginGetTracksCount(FunctorAsync& aFunctor) = 0;
    virtual void EndGetTracksCount(IAsync& aAsync, std::string& aNrTracks) = 0;
    virtual void SyncGetMaxTracks(std::string& aMaxTracks) = 0;
    virtual void BeginGetMaxTracks(FunctorAsync& aFunctor) = 0;
    virtual void EndGetMaxTracks(IAsync& aAsync, std::string& aMaxTracks) = 0;
};

/**
 * Proxy for tencent.com:QPlay:1
 * @ingroup Proxies
 */
class CpProxyTencentComQPlay1Cpp : public ICpProxyTencentComQPlay1Cpp
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
    CpProxyTencentComQPlay1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyTencentComQPlay1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aSSID
     * @param[in]  aKey
     * @param[in]  aAuthAlgo
     * @param[in]  aCipherAlgo
     */
    void SyncSetNetwork(const std::string& aSSID, const std::string& aKey, const std::string& aAuthAlgo, const std::string& aCipherAlgo);
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
    void BeginSetNetwork(const std::string& aSSID, const std::string& aKey, const std::string& aAuthAlgo, const std::string& aCipherAlgo, FunctorAsync& aFunctor);
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
    void SyncQPlayAuth(const std::string& aSeed, std::string& aCode, std::string& aMID, std::string& aDID);
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
    void BeginQPlayAuth(const std::string& aSeed, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCode
     * @param[out] aMID
     * @param[out] aDID
     */
    void EndQPlayAuth(IAsync& aAsync, std::string& aCode, std::string& aMID, std::string& aDID);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aQueueID
     * @param[in]  aStartingIndex
     * @param[in]  aTracksMetaData
     * @param[out] aNumberOfSuccess
     */
    void SyncInsertTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aTracksMetaData, std::string& aNumberOfSuccess);
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
    void BeginInsertTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aTracksMetaData, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNumberOfSuccess
     */
    void EndInsertTracks(IAsync& aAsync, std::string& aNumberOfSuccess);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aQueueID
     * @param[in]  aStartingIndex
     * @param[in]  aNumberOfTracks
     * @param[out] aNumberOfSuccess
     */
    void SyncRemoveTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNumberOfTracks, std::string& aNumberOfSuccess);
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
    void BeginRemoveTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNumberOfTracks, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNumberOfSuccess
     */
    void EndRemoveTracks(IAsync& aAsync, std::string& aNumberOfSuccess);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aStartingIndex
     * @param[in]  aNumberOfTracks
     * @param[out] aTracksMetaData
     */
    void SyncGetTracksInfo(const std::string& aStartingIndex, const std::string& aNumberOfTracks, std::string& aTracksMetaData);
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
    void BeginGetTracksInfo(const std::string& aStartingIndex, const std::string& aNumberOfTracks, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aTracksMetaData
     */
    void EndGetTracksInfo(IAsync& aAsync, std::string& aTracksMetaData);

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
    void SyncSetTracksInfo(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNextIndex, const std::string& aTracksMetaData, std::string& aNumberOfSuccess);
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
    void BeginSetTracksInfo(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNextIndex, const std::string& aTracksMetaData, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNumberOfSuccess
     */
    void EndSetTracksInfo(IAsync& aAsync, std::string& aNumberOfSuccess);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aNrTracks
     */
    void SyncGetTracksCount(std::string& aNrTracks);
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
    void EndGetTracksCount(IAsync& aAsync, std::string& aNrTracks);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aMaxTracks
     */
    void SyncGetMaxTracks(std::string& aMaxTracks);
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
    void EndGetMaxTracks(IAsync& aAsync, std::string& aMaxTracks);


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

#endif // HEADER_TENCENTCOMQPLAY1CPP

