/**
 * Provider for the av.openhome.org:WebResamplerConfig:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGWEBRESAMPLERCONFIG1_C
#define HEADER_DVAVOPENHOMEORGWEBRESAMPLERCONFIG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgWebResamplerConfig1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetResamplerConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebResamplerConfig1EnableActionGetResamplerConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aResamplerConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebResamplerConfig1GetResamplerConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aResamplerConfig);
/**
 * Callback which runs when the SetResamplerConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebResamplerConfig1EnableActionSetResamplerConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aResamplerConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebResamplerConfig1SetResamplerConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aResamplerConfig);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebResamplerConfig1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1Destroy(THandle aProvider);

/**
 * Enable the ResamplerConfig property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1EnablePropertyResamplerConfig(THandle aProvider);

/**
 * Register a callback for the action GetResamplerConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebResamplerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1EnableActionGetResamplerConfig(THandle aProvider, CallbackWebResamplerConfig1GetResamplerConfig aCallback, void* aPtr);
/**
 * Register a callback for the action SetResamplerConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebResamplerConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1EnableActionSetResamplerConfig(THandle aProvider, CallbackWebResamplerConfig1SetResamplerConfig aCallback, void* aPtr);

/**
 * Set the value of the ResamplerConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebResamplerConfig1EnablePropertyResamplerConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebResamplerConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1SetPropertyResamplerConfig(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ResamplerConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebResamplerConfig1EnablePropertyResamplerConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebResamplerConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebResamplerConfig1GetPropertyResamplerConfig(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGWEBRESAMPLERCONFIG1_C

