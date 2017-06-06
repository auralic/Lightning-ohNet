/**
 * Provider for the av.openhome.org:TestResamplerConfig:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGTESTRESAMPLERCONFIG1_C
#define HEADER_DVAVOPENHOMEORGTESTRESAMPLERCONFIG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgTestResamplerConfig1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the SetResamplerConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionSetResamplerConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aResamplerConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTestResamplerConfig1SetResamplerConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aResamplerConfig);
/**
 * Callback which runs when the GetResamplerConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionGetResamplerConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aResamplerConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTestResamplerConfig1GetResamplerConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aResamplerConfig);
/**
 * Callback which runs when the SetPCMAutoDetect action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionSetPCMAutoDetect
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aPCMAutoDetect
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTestResamplerConfig1SetPCMAutoDetect)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aPCMAutoDetect);
/**
 * Callback which runs when the GetPCMAutoDetect action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionGetPCMAutoDetect
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aPCMAutoDetect
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTestResamplerConfig1GetPCMAutoDetect)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aPCMAutoDetect);
/**
 * Callback which runs when the SetDSDtoPCM action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionSetDSDtoPCM
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDSDtoPCM
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTestResamplerConfig1SetDSDtoPCM)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aDSDtoPCM);
/**
 * Callback which runs when the GetDSDtoPCM action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionGetDSDtoPCM
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aDSDtoPCM
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTestResamplerConfig1GetDSDtoPCM)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aDSDtoPCM);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTestResamplerConfig1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1Destroy(THandle aProvider);

/**
 * Enable the CurrentAction property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnablePropertyCurrentAction(THandle aProvider);

/**
 * Register a callback for the action SetResamplerConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTestResamplerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionSetResamplerConfig(THandle aProvider, CallbackTestResamplerConfig1SetResamplerConfig aCallback, void* aPtr);
/**
 * Register a callback for the action GetResamplerConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTestResamplerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionGetResamplerConfig(THandle aProvider, CallbackTestResamplerConfig1GetResamplerConfig aCallback, void* aPtr);
/**
 * Register a callback for the action SetPCMAutoDetect
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTestResamplerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionSetPCMAutoDetect(THandle aProvider, CallbackTestResamplerConfig1SetPCMAutoDetect aCallback, void* aPtr);
/**
 * Register a callback for the action GetPCMAutoDetect
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTestResamplerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionGetPCMAutoDetect(THandle aProvider, CallbackTestResamplerConfig1GetPCMAutoDetect aCallback, void* aPtr);
/**
 * Register a callback for the action SetDSDtoPCM
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTestResamplerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionSetDSDtoPCM(THandle aProvider, CallbackTestResamplerConfig1SetDSDtoPCM aCallback, void* aPtr);
/**
 * Register a callback for the action GetDSDtoPCM
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTestResamplerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1EnableActionGetDSDtoPCM(THandle aProvider, CallbackTestResamplerConfig1GetDSDtoPCM aCallback, void* aPtr);

/**
 * Set the value of the CurrentAction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTestResamplerConfig1EnablePropertyCurrentAction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTestResamplerConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CurrentAction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTestResamplerConfig1EnablePropertyCurrentAction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTestResamplerConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTestResamplerConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGTESTRESAMPLERCONFIG1_C

