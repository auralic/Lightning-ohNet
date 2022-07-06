/**
 * Provider for the tencent.com:QPlay:1 UPnP service
 */
#ifndef HEADER_DVTENCENTCOMQPLAY1_C
#define HEADER_DVTENCENTCOMQPLAY1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderTencentComQPlay1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the SetNetwork action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderTencentComQPlay1EnableActionSetNetwork
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aSSID
 * @param[in]  aKey
 * @param[in]  aAuthAlgo
 * @param[in]  aCipherAlgo
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackQPlay1SetNetwork)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aSSID, const char* aKey, const char* aAuthAlgo, const char* aCipherAlgo);
/**
 * Callback which runs when the QPlayAuth action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderTencentComQPlay1EnableActionQPlayAuth
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aSeed
 * @param[out] aCode
 * @param[out] aMID
 * @param[out] aDID
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackQPlay1QPlayAuth)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aSeed, char** aCode, char** aMID, char** aDID);
/**
 * Callback which runs when the InsertTracks action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderTencentComQPlay1EnableActionInsertTracks
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aQueueID
 * @param[in]  aStartingIndex
 * @param[in]  aTracksMetaData
 * @param[out] aNumberOfSuccess
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackQPlay1InsertTracks)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aQueueID, const char* aStartingIndex, const char* aTracksMetaData, char** aNumberOfSuccess);
/**
 * Callback which runs when the RemoveTracks action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderTencentComQPlay1EnableActionRemoveTracks
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aQueueID
 * @param[in]  aStartingIndex
 * @param[in]  aNumberOfTracks
 * @param[out] aNumberOfSuccess
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackQPlay1RemoveTracks)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aQueueID, const char* aStartingIndex, const char* aNumberOfTracks, char** aNumberOfSuccess);
/**
 * Callback which runs when the GetTracksInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderTencentComQPlay1EnableActionGetTracksInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aStartingIndex
 * @param[in]  aNumberOfTracks
 * @param[out] aTracksMetaData
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackQPlay1GetTracksInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aStartingIndex, const char* aNumberOfTracks, char** aTracksMetaData);
/**
 * Callback which runs when the SetTracksInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderTencentComQPlay1EnableActionSetTracksInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aQueueID
 * @param[in]  aStartingIndex
 * @param[in]  aNextIndex
 * @param[in]  aTracksMetaData
 * @param[out] aNumberOfSuccess
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackQPlay1SetTracksInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aQueueID, const char* aStartingIndex, const char* aNextIndex, const char* aTracksMetaData, char** aNumberOfSuccess);
/**
 * Callback which runs when the GetTracksCount action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderTencentComQPlay1EnableActionGetTracksCount
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aNrTracks
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackQPlay1GetTracksCount)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aNrTracks);
/**
 * Callback which runs when the GetMaxTracks action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderTencentComQPlay1EnableActionGetMaxTracks
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aMaxTracks
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackQPlay1GetMaxTracks)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aMaxTracks);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderTencentComQPlay1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderTencentComQPlay1Create
 */
DllExport void STDCALL DvProviderTencentComQPlay1Destroy(THandle aProvider);


/**
 * Register a callback for the action SetNetwork
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderTencentComQPlay1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderTencentComQPlay1EnableActionSetNetwork(THandle aProvider, CallbackQPlay1SetNetwork aCallback, void* aPtr);
/**
 * Register a callback for the action QPlayAuth
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderTencentComQPlay1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderTencentComQPlay1EnableActionQPlayAuth(THandle aProvider, CallbackQPlay1QPlayAuth aCallback, void* aPtr);
/**
 * Register a callback for the action InsertTracks
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderTencentComQPlay1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderTencentComQPlay1EnableActionInsertTracks(THandle aProvider, CallbackQPlay1InsertTracks aCallback, void* aPtr);
/**
 * Register a callback for the action RemoveTracks
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderTencentComQPlay1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderTencentComQPlay1EnableActionRemoveTracks(THandle aProvider, CallbackQPlay1RemoveTracks aCallback, void* aPtr);
/**
 * Register a callback for the action GetTracksInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderTencentComQPlay1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderTencentComQPlay1EnableActionGetTracksInfo(THandle aProvider, CallbackQPlay1GetTracksInfo aCallback, void* aPtr);
/**
 * Register a callback for the action SetTracksInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderTencentComQPlay1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderTencentComQPlay1EnableActionSetTracksInfo(THandle aProvider, CallbackQPlay1SetTracksInfo aCallback, void* aPtr);
/**
 * Register a callback for the action GetTracksCount
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderTencentComQPlay1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderTencentComQPlay1EnableActionGetTracksCount(THandle aProvider, CallbackQPlay1GetTracksCount aCallback, void* aPtr);
/**
 * Register a callback for the action GetMaxTracks
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderTencentComQPlay1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderTencentComQPlay1EnableActionGetMaxTracks(THandle aProvider, CallbackQPlay1GetMaxTracks aCallback, void* aPtr);


/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVTENCENTCOMQPLAY1_C

