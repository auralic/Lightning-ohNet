/**
 * Provider for the av.openhome.org:RendererConfig:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGRENDERERCONFIG1_C
#define HEADER_DVAVOPENHOMEORGRENDERERCONFIG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgRendererConfig1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetRendererConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetRendererConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aRendererConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackRendererConfig1GetRendererConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aRendererConfig);
/**
 * Callback which runs when the SetRendererConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetRendererConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aRendererConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackRendererConfig1SetRendererConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aRendererConfig);
/**
 * Callback which runs when the GetResamplerConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetResamplerConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aResamplerConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackRendererConfig1GetResamplerConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aResamplerConfig);
/**
 * Callback which runs when the SetResamplerConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetResamplerConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aResamplerConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackRendererConfig1SetResamplerConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aResamplerConfig);
/**
 * Callback which runs when the GetHardwareConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetHardwareConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aHardwareConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackRendererConfig1GetHardwareConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aHardwareConfig);
/**
 * Callback which runs when the SetHardwareConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetHardwareConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aHardwareConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackRendererConfig1SetHardwareConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aHardwareConfig);
/**
 * Callback which runs when the GetWiFiList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetWiFiList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aWiFiList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackRendererConfig1GetWiFiList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aWiFiList);
/**
 * Callback which runs when the SetTimeZone action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetTimeZone
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aTimeZone
 * @param[in]  aCurrentTime
 * @param[in]  aTimeStamp
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackRendererConfig1SetTimeZone)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aTimeZone, const char* aCurrentTime, const char* aTimeStamp);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgRendererConfig1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1Destroy(THandle aProvider);

/**
 * Enable the RendererConfig property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyRendererConfig(THandle aProvider);
/**
 * Enable the ResamplerConfig property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyResamplerConfig(THandle aProvider);
/**
 * Enable the HardwareConfig property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyHardwareConfig(THandle aProvider);

/**
 * Register a callback for the action GetRendererConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetRendererConfig(THandle aProvider, CallbackRendererConfig1GetRendererConfig aCallback, void* aPtr);
/**
 * Register a callback for the action SetRendererConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetRendererConfig(THandle aProvider, CallbackRendererConfig1SetRendererConfig aCallback, void* aPtr);
/**
 * Register a callback for the action GetResamplerConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetResamplerConfig(THandle aProvider, CallbackRendererConfig1GetResamplerConfig aCallback, void* aPtr);
/**
 * Register a callback for the action SetResamplerConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetResamplerConfig(THandle aProvider, CallbackRendererConfig1SetResamplerConfig aCallback, void* aPtr);
/**
 * Register a callback for the action GetHardwareConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetHardwareConfig(THandle aProvider, CallbackRendererConfig1GetHardwareConfig aCallback, void* aPtr);
/**
 * Register a callback for the action SetHardwareConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetHardwareConfig(THandle aProvider, CallbackRendererConfig1SetHardwareConfig aCallback, void* aPtr);
/**
 * Register a callback for the action GetWiFiList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionGetWiFiList(THandle aProvider, CallbackRendererConfig1GetWiFiList aCallback, void* aPtr);
/**
 * Register a callback for the action SetTimeZone
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1EnableActionSetTimeZone(THandle aProvider, CallbackRendererConfig1SetTimeZone aCallback, void* aPtr);

/**
 * Set the value of the RendererConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyRendererConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgRendererConfig1SetPropertyRendererConfig(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the RendererConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyRendererConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1GetPropertyRendererConfig(THandle aProvider, char** aValue);
/**
 * Set the value of the ResamplerConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyResamplerConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgRendererConfig1SetPropertyResamplerConfig(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ResamplerConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyResamplerConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1GetPropertyResamplerConfig(THandle aProvider, char** aValue);
/**
 * Set the value of the HardwareConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyHardwareConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgRendererConfig1SetPropertyHardwareConfig(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the HardwareConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgRendererConfig1EnablePropertyHardwareConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgRendererConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgRendererConfig1GetPropertyHardwareConfig(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGRENDERERCONFIG1_C

