/**
 * Provider for the av.openhome.org:WebDeviceConfig:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGWEBDEVICECONFIG1_C
#define HEADER_DVAVOPENHOMEORGWEBDEVICECONFIG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgWebDeviceConfig1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetDeviceConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionGetDeviceConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aDeviceConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebDeviceConfig1GetDeviceConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aDeviceConfig);
/**
 * Callback which runs when the SetDeviceConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionSetDeviceConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebDeviceConfig1SetDeviceConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceConfig);
/**
 * Callback which runs when the GetWiFiList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionGetWiFiList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aWiFiList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebDeviceConfig1GetWiFiList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aWiFiList);
/**
 * Callback which runs when the SetTimeZone action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionSetTimeZone
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aTimeZone
 * @param[in]  aCurrentTime
 * @param[in]  aTimeStamp
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebDeviceConfig1SetTimeZone)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aTimeZone, const char* aCurrentTime, const char* aTimeStamp);
/**
 * Callback which runs when the GetServiceLocation action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionGetServiceLocation
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aServiceLoaction
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebDeviceConfig1GetServiceLocation)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aServiceLoaction);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1Destroy(THandle aProvider);

/**
 * Enable the Alive property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyAlive(THandle aProvider);
/**
 * Enable the DeviceConfig property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyDeviceConfig(THandle aProvider);
/**
 * Enable the CurrentAction property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyCurrentAction(THandle aProvider);

/**
 * Register a callback for the action GetDeviceConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionGetDeviceConfig(THandle aProvider, CallbackWebDeviceConfig1GetDeviceConfig aCallback, void* aPtr);
/**
 * Register a callback for the action SetDeviceConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionSetDeviceConfig(THandle aProvider, CallbackWebDeviceConfig1SetDeviceConfig aCallback, void* aPtr);
/**
 * Register a callback for the action GetWiFiList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionGetWiFiList(THandle aProvider, CallbackWebDeviceConfig1GetWiFiList aCallback, void* aPtr);
/**
 * Register a callback for the action SetTimeZone
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionSetTimeZone(THandle aProvider, CallbackWebDeviceConfig1SetTimeZone aCallback, void* aPtr);
/**
 * Register a callback for the action GetServiceLocation
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1EnableActionGetServiceLocation(THandle aProvider, CallbackWebDeviceConfig1GetServiceLocation aCallback, void* aPtr);

/**
 * Set the value of the Alive property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyAlive has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Alive property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyAlive has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the DeviceConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyDeviceConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1SetPropertyDeviceConfig(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DeviceConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyDeviceConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1GetPropertyDeviceConfig(THandle aProvider, char** aValue);
/**
 * Set the value of the CurrentAction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyCurrentAction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CurrentAction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDeviceConfig1EnablePropertyCurrentAction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDeviceConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDeviceConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGWEBDEVICECONFIG1_C

