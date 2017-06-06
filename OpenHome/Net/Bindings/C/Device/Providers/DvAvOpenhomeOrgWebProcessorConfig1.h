/**
 * Provider for the av.openhome.org:WebProcessorConfig:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGWEBPROCESSORCONFIG1_C
#define HEADER_DVAVOPENHOMEORGWEBPROCESSORCONFIG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgWebProcessorConfig1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetProcessorConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebProcessorConfig1EnableActionGetProcessorConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aProcessorConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebProcessorConfig1GetProcessorConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aProcessorConfig);
/**
 * Callback which runs when the SetProcessorConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebProcessorConfig1EnableActionSetProcessorConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aProcessorConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebProcessorConfig1SetProcessorConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aProcessorConfig);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebProcessorConfig1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1Destroy(THandle aProvider);

/**
 * Enable the Alive property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1EnablePropertyAlive(THandle aProvider);
/**
 * Enable the ProcessorConfig property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1EnablePropertyProcessorConfig(THandle aProvider);

/**
 * Register a callback for the action GetProcessorConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebProcessorConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1EnableActionGetProcessorConfig(THandle aProvider, CallbackWebProcessorConfig1GetProcessorConfig aCallback, void* aPtr);
/**
 * Register a callback for the action SetProcessorConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebProcessorConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1EnableActionSetProcessorConfig(THandle aProvider, CallbackWebProcessorConfig1SetProcessorConfig aCallback, void* aPtr);

/**
 * Set the value of the Alive property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebProcessorConfig1EnablePropertyAlive has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebProcessorConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Alive property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebProcessorConfig1EnablePropertyAlive has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebProcessorConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the ProcessorConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebProcessorConfig1EnablePropertyProcessorConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebProcessorConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1SetPropertyProcessorConfig(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ProcessorConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebProcessorConfig1EnablePropertyProcessorConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebProcessorConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebProcessorConfig1GetPropertyProcessorConfig(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGWEBPROCESSORCONFIG1_C

