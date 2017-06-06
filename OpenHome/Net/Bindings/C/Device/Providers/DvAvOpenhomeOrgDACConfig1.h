/**
 * Provider for the av.openhome.org:DACConfig:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGDACCONFIG1_C
#define HEADER_DVAVOPENHOMEORGDACCONFIG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgDACConfig1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetFilterMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDACConfig1EnableActionGetFilterMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aFilterMode
 * @param[out] aFilterModeList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDACConfig1GetFilterMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aFilterMode, char** aFilterModeList);
/**
 * Callback which runs when the SetFilterMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDACConfig1EnableActionSetFilterMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aFilterMode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDACConfig1SetFilterMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aFilterMode);
/**
 * Callback which runs when the GetDACPhase action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDACConfig1EnableActionGetDACPhase
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aPhase
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDACConfig1GetDACPhase)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aPhase);
/**
 * Callback which runs when the SetDACPhase action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDACConfig1EnableActionSetDACPhase
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aPhase
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDACConfig1SetDACPhase)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aPhase);
/**
 * Callback which runs when the GetDACBalance action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDACConfig1EnableActionGetDACBalance
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aBalance
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDACConfig1GetDACBalance)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aBalance);
/**
 * Callback which runs when the SetDACBalance action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDACConfig1EnableActionSetDACBalance
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aBalance
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDACConfig1SetDACBalance)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aBalance);
/**
 * Callback which runs when the GetWaitingTime action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDACConfig1EnableActionGetWaitingTime
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aWaitingTime
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDACConfig1GetWaitingTime)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aWaitingTime);
/**
 * Callback which runs when the SetWaitingTime action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDACConfig1EnableActionSetWaitingTime
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aWaitingTime
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDACConfig1SetWaitingTime)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aWaitingTime);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgDACConfig1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDACConfig1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDACConfig1Destroy(THandle aProvider);

/**
 * Enable the CurrentAction property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnablePropertyCurrentAction(THandle aProvider);

/**
 * Register a callback for the action GetFilterMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDACConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionGetFilterMode(THandle aProvider, CallbackDACConfig1GetFilterMode aCallback, void* aPtr);
/**
 * Register a callback for the action SetFilterMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDACConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionSetFilterMode(THandle aProvider, CallbackDACConfig1SetFilterMode aCallback, void* aPtr);
/**
 * Register a callback for the action GetDACPhase
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDACConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionGetDACPhase(THandle aProvider, CallbackDACConfig1GetDACPhase aCallback, void* aPtr);
/**
 * Register a callback for the action SetDACPhase
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDACConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionSetDACPhase(THandle aProvider, CallbackDACConfig1SetDACPhase aCallback, void* aPtr);
/**
 * Register a callback for the action GetDACBalance
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDACConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionGetDACBalance(THandle aProvider, CallbackDACConfig1GetDACBalance aCallback, void* aPtr);
/**
 * Register a callback for the action SetDACBalance
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDACConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionSetDACBalance(THandle aProvider, CallbackDACConfig1SetDACBalance aCallback, void* aPtr);
/**
 * Register a callback for the action GetWaitingTime
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDACConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionGetWaitingTime(THandle aProvider, CallbackDACConfig1GetWaitingTime aCallback, void* aPtr);
/**
 * Register a callback for the action SetWaitingTime
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDACConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDACConfig1EnableActionSetWaitingTime(THandle aProvider, CallbackDACConfig1SetWaitingTime aCallback, void* aPtr);

/**
 * Set the value of the CurrentAction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgDACConfig1EnablePropertyCurrentAction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgDACConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgDACConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CurrentAction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgDACConfig1EnablePropertyCurrentAction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgDACConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDACConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGDACCONFIG1_C

