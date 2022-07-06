/**
 * Proxy for tencent.com:QPlay:1
 */
#ifndef HEADER_TENCENTCOMQPLAY1_C
#define HEADER_TENCENTCOMQPLAY1_C

#include <OpenHome/OsTypes.h>
#include <OpenHome/Defines.h>
#include <OpenHome/Net/C/Async.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/C/CpDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup CpProxyTencentComQPlay1
 * @ingroup Proxies
 * @{
 */

/**
 * Constructor.
 * Creates an instance of CpProxyTencentComQPlay1 without support for eventing.
 * Use CpProxyC[Un]Subscribe() to enable/disable querying of state variable and
 * reporting of their changes.
 *
 * @param[in]  aDevice   The device to use
 *
 * @return  Handle which should be used with all other functions in this header
 */
DllExport THandle STDCALL CpProxyTencentComQPlay1Create(CpDeviceC aDevice);
/**
 * Destructor.
 * If any asynchronous method is in progress, this will block until they complete.
 * [Note that any methods still in progress are likely to complete with an error.]
 * Clients who have called CpProxyCSubscribe() do not need to call CpProxyCSubscribe()
 * before calling delete.  An unsubscribe will be triggered automatically when required.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 */
DllExport void STDCALL CpProxyTencentComQPlay1Destroy(THandle aHandle);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aSSID
 * @param[in]  aKey
 * @param[in]  aAuthAlgo
 * @param[in]  aCipherAlgo
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1SyncSetNetwork(THandle aHandle, const char* aSSID, const char* aKey, const char* aAuthAlgo, const char* aCipherAlgo);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aSSID
 * @param[in]  aKey
 * @param[in]  aAuthAlgo
 * @param[in]  aCipherAlgo
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyTencentComQPlay1BeginSetNetwork(THandle aHandle, const char* aSSID, const char* aKey, const char* aAuthAlgo, const char* aCipherAlgo, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1EndSetNetwork(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aSeed
 * @param[out] aCode
 * @param[out] aMID
 * @param[out] aDID
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1SyncQPlayAuth(THandle aHandle, const char* aSeed, char** aCode, char** aMID, char** aDID);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aSeed
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyTencentComQPlay1BeginQPlayAuth(THandle aHandle, const char* aSeed, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aCode
 * @param[out] aMID
 * @param[out] aDID
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1EndQPlayAuth(THandle aHandle, OhNetHandleAsync aAsync, char** aCode, char** aMID, char** aDID);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aQueueID
 * @param[in]  aStartingIndex
 * @param[in]  aTracksMetaData
 * @param[out] aNumberOfSuccess
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1SyncInsertTracks(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aTracksMetaData, char** aNumberOfSuccess);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aQueueID
 * @param[in]  aStartingIndex
 * @param[in]  aTracksMetaData
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyTencentComQPlay1BeginInsertTracks(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aTracksMetaData, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aNumberOfSuccess
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1EndInsertTracks(THandle aHandle, OhNetHandleAsync aAsync, char** aNumberOfSuccess);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aQueueID
 * @param[in]  aStartingIndex
 * @param[in]  aNumberOfTracks
 * @param[out] aNumberOfSuccess
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1SyncRemoveTracks(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aNumberOfTracks, char** aNumberOfSuccess);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aQueueID
 * @param[in]  aStartingIndex
 * @param[in]  aNumberOfTracks
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyTencentComQPlay1BeginRemoveTracks(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aNumberOfTracks, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aNumberOfSuccess
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1EndRemoveTracks(THandle aHandle, OhNetHandleAsync aAsync, char** aNumberOfSuccess);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aStartingIndex
 * @param[in]  aNumberOfTracks
 * @param[out] aTracksMetaData
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1SyncGetTracksInfo(THandle aHandle, const char* aStartingIndex, const char* aNumberOfTracks, char** aTracksMetaData);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aStartingIndex
 * @param[in]  aNumberOfTracks
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyTencentComQPlay1BeginGetTracksInfo(THandle aHandle, const char* aStartingIndex, const char* aNumberOfTracks, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aTracksMetaData
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1EndGetTracksInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aTracksMetaData);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aQueueID
 * @param[in]  aStartingIndex
 * @param[in]  aNextIndex
 * @param[in]  aTracksMetaData
 * @param[out] aNumberOfSuccess
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1SyncSetTracksInfo(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aNextIndex, const char* aTracksMetaData, char** aNumberOfSuccess);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aQueueID
 * @param[in]  aStartingIndex
 * @param[in]  aNextIndex
 * @param[in]  aTracksMetaData
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyTencentComQPlay1BeginSetTracksInfo(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aNextIndex, const char* aTracksMetaData, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aNumberOfSuccess
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1EndSetTracksInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aNumberOfSuccess);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[out] aNrTracks
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1SyncGetTracksCount(THandle aHandle, char** aNrTracks);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyTencentComQPlay1BeginGetTracksCount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aNrTracks
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1EndGetTracksCount(THandle aHandle, OhNetHandleAsync aAsync, char** aNrTracks);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[out] aMaxTracks
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1SyncGetMaxTracks(THandle aHandle, char** aMaxTracks);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyTencentComQPlay1BeginGetMaxTracks(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyTencentComQPlay1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aMaxTracks
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyTencentComQPlay1EndGetMaxTracks(THandle aHandle, OhNetHandleAsync aAsync, char** aMaxTracks);


/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_TENCENTCOMQPLAY1_C

