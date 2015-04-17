/**
 * Provider for the av.openhome.org:SMBInfo:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGSMBINFO1_C
#define HEADER_DVAVOPENHOMEORGSMBINFO1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgSMBInfo1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the SetSMBConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgSMBInfo1EnableActionSetSMBConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aSMBAddr
 * @param[in]  aSMBUserName
 * @param[in]  aSMBPassWord
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackSMBInfo1SetSMBConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aSMBAddr, const char* aSMBUserName, const char* aSMBPassWord);
/**
 * Callback which runs when the GetSMBConnectResult action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgSMBInfo1EnableActionGetSMBConnectResult
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSMBConnectResult
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackSMBInfo1GetSMBConnectResult)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aSMBConnectResult);
/**
 * Callback which runs when the GetSMBInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgSMBInfo1EnableActionGetSMBInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSMBConnectStatus
 * @param[out] aSMBERRORInfo
 * @param[out] aSMBCapacity
 * @param[out] aSMBFileCount
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackSMBInfo1GetSMBInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aSMBConnectStatus, char** aSMBERRORInfo, char** aSMBCapacity, char** aSMBFileCount);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgSMBInfo1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSMBInfo1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSMBInfo1Destroy(THandle aProvider);


/**
 * Register a callback for the action SetSMBConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSMBInfo1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSMBInfo1EnableActionSetSMBConfig(THandle aProvider, CallbackSMBInfo1SetSMBConfig aCallback, void* aPtr);
/**
 * Register a callback for the action GetSMBConnectResult
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSMBInfo1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSMBInfo1EnableActionGetSMBConnectResult(THandle aProvider, CallbackSMBInfo1GetSMBConnectResult aCallback, void* aPtr);
/**
 * Register a callback for the action GetSMBInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSMBInfo1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSMBInfo1EnableActionGetSMBInfo(THandle aProvider, CallbackSMBInfo1GetSMBInfo aCallback, void* aPtr);


/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGSMBINFO1_C

