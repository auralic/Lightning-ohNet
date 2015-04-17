/**
 * Provider for the av.openhome.org:ServerConfig:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGSERVERCONFIG1_C
#define HEADER_DVAVOPENHOMEORGSERVERCONFIG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgServerConfig1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the SetServerName action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionSetServerName
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aServerName
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1SetServerName)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aServerName);
/**
 * Callback which runs when the GetServerVersion action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionGetServerVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aServerVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1GetServerVersion)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aServerVersion);
/**
 * Callback which runs when the GetProgressInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionGetProgressInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aProgress
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1GetProgressInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aProgress);
/**
 * Callback which runs when the GetScanVersion action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionGetScanVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aScanVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1GetScanVersion)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aScanVersion);
/**
 * Callback which runs when the GetWorkMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionGetWorkMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aWorkMode
 * @param[out] aWorkModeList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1GetWorkMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aWorkMode, char** aWorkModeList);
/**
 * Callback which runs when the SetWorkMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionSetWorkMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aWorkMode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1SetWorkMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aWorkMode);
/**
 * Callback which runs when the DelAllLocalDB action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionDelAllLocalDB
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1DelAllLocalDB)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the InitHDD action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionInitHDD
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1InitHDD)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Rescan action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionRescan
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1Rescan)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the HandMount action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionHandMount
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1HandMount)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the HandUMount action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionHandUMount
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1HandUMount)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the GetDiskInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionGetDiskInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aIsConnected
 * @param[out] aStatusCode
 * @param[out] aStatusInfo
 * @param[out] aCapacity
 * @param[out] aFileCount
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1GetDiskInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aIsConnected, char** aStatusCode, char** aStatusInfo, char** aCapacity, char** aFileCount);
/**
 * Callback which runs when the GetSMBConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionGetSMBConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSMBAddr
 * @param[out] aSMBUserName
 * @param[out] aSMBPassWord
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1GetSMBConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aSMBAddr, char** aSMBUserName, char** aSMBPassWord);
/**
 * Callback which runs when the SetSMBConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionSetSMBConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aSMBAddr
 * @param[in]  aSMBUserName
 * @param[in]  aSMBPassWord
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1SetSMBConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aSMBAddr, const char* aSMBUserName, const char* aSMBPassWord);
/**
 * Callback which runs when the GetDriveMountResult action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgServerConfig1EnableActionGetDriveMountResult
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aDriveMountResult
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackServerConfig1GetDriveMountResult)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aDriveMountResult);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgServerConfig1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1Destroy(THandle aProvider);


/**
 * Register a callback for the action SetServerName
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionSetServerName(THandle aProvider, CallbackServerConfig1SetServerName aCallback, void* aPtr);
/**
 * Register a callback for the action GetServerVersion
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetServerVersion(THandle aProvider, CallbackServerConfig1GetServerVersion aCallback, void* aPtr);
/**
 * Register a callback for the action GetProgressInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetProgressInfo(THandle aProvider, CallbackServerConfig1GetProgressInfo aCallback, void* aPtr);
/**
 * Register a callback for the action GetScanVersion
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetScanVersion(THandle aProvider, CallbackServerConfig1GetScanVersion aCallback, void* aPtr);
/**
 * Register a callback for the action GetWorkMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetWorkMode(THandle aProvider, CallbackServerConfig1GetWorkMode aCallback, void* aPtr);
/**
 * Register a callback for the action SetWorkMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionSetWorkMode(THandle aProvider, CallbackServerConfig1SetWorkMode aCallback, void* aPtr);
/**
 * Register a callback for the action DelAllLocalDB
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionDelAllLocalDB(THandle aProvider, CallbackServerConfig1DelAllLocalDB aCallback, void* aPtr);
/**
 * Register a callback for the action InitHDD
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionInitHDD(THandle aProvider, CallbackServerConfig1InitHDD aCallback, void* aPtr);
/**
 * Register a callback for the action Rescan
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionRescan(THandle aProvider, CallbackServerConfig1Rescan aCallback, void* aPtr);
/**
 * Register a callback for the action HandMount
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionHandMount(THandle aProvider, CallbackServerConfig1HandMount aCallback, void* aPtr);
/**
 * Register a callback for the action HandUMount
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionHandUMount(THandle aProvider, CallbackServerConfig1HandUMount aCallback, void* aPtr);
/**
 * Register a callback for the action GetDiskInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetDiskInfo(THandle aProvider, CallbackServerConfig1GetDiskInfo aCallback, void* aPtr);
/**
 * Register a callback for the action GetSMBConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetSMBConfig(THandle aProvider, CallbackServerConfig1GetSMBConfig aCallback, void* aPtr);
/**
 * Register a callback for the action SetSMBConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionSetSMBConfig(THandle aProvider, CallbackServerConfig1SetSMBConfig aCallback, void* aPtr);
/**
 * Register a callback for the action GetDriveMountResult
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgServerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgServerConfig1EnableActionGetDriveMountResult(THandle aProvider, CallbackServerConfig1GetDriveMountResult aCallback, void* aPtr);


/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGSERVERCONFIG1_C

