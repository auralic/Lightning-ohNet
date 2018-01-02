/**
 * Provider for the av.openhome.org:WebClockConfig:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGWEBCLOCKCONFIG1_C
#define HEADER_DVAVOPENHOMEORGWEBCLOCKCONFIG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgWebClockConfig1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetClockConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebClockConfig1EnableActionGetClockConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aClockConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebClockConfig1GetClockConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aClockConfig);
/**
 * Callback which runs when the SetClockConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebClockConfig1EnableActionSetClockConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aClockConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebClockConfig1SetClockConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aClockConfig);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgWebClockConfig1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebClockConfig1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1Destroy(THandle aProvider);

/**
 * Enable the Alive property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1EnablePropertyAlive(THandle aProvider);
/**
 * Enable the ClockConfig property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1EnablePropertyClockConfig(THandle aProvider);

/**
 * Register a callback for the action GetClockConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebClockConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1EnableActionGetClockConfig(THandle aProvider, CallbackWebClockConfig1GetClockConfig aCallback, void* aPtr);
/**
 * Register a callback for the action SetClockConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebClockConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1EnableActionSetClockConfig(THandle aProvider, CallbackWebClockConfig1SetClockConfig aCallback, void* aPtr);

/**
 * Set the value of the Alive property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebClockConfig1EnablePropertyAlive has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebClockConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgWebClockConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Alive property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebClockConfig1EnablePropertyAlive has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebClockConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the ClockConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebClockConfig1EnablePropertyClockConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebClockConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgWebClockConfig1SetPropertyClockConfig(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ClockConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebClockConfig1EnablePropertyClockConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebClockConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebClockConfig1GetPropertyClockConfig(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGWEBCLOCKCONFIG1_C

