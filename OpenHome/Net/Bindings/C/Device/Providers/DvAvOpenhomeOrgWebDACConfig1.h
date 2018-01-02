/**
 * Provider for the av.openhome.org:WebDACConfig:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGWEBDACCONFIG1_C
#define HEADER_DVAVOPENHOMEORGWEBDACCONFIG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgWebDACConfig1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetDACConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebDACConfig1EnableActionGetDACConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aDACConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebDACConfig1GetDACConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aDACConfig);
/**
 * Callback which runs when the SetDACConfig action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgWebDACConfig1EnableActionSetDACConfig
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDACConfig
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWebDACConfig1SetDACConfig)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDACConfig);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgWebDACConfig1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDACConfig1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1Destroy(THandle aProvider);

/**
 * Enable the Alive property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyAlive(THandle aProvider);
/**
 * Enable the DACConfig property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyDACConfig(THandle aProvider);
/**
 * Enable the CurrentAction property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyCurrentAction(THandle aProvider);

/**
 * Register a callback for the action GetDACConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDACConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1EnableActionGetDACConfig(THandle aProvider, CallbackWebDACConfig1GetDACConfig aCallback, void* aPtr);
/**
 * Register a callback for the action SetDACConfig
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDACConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1EnableActionSetDACConfig(THandle aProvider, CallbackWebDACConfig1SetDACConfig aCallback, void* aPtr);

/**
 * Set the value of the Alive property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyAlive has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDACConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgWebDACConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Alive property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyAlive has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDACConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the DACConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyDACConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDACConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgWebDACConfig1SetPropertyDACConfig(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DACConfig property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyDACConfig has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDACConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1GetPropertyDACConfig(THandle aProvider, char** aValue);
/**
 * Set the value of the CurrentAction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyCurrentAction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDACConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgWebDACConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CurrentAction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgWebDACConfig1EnablePropertyCurrentAction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgWebDACConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgWebDACConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGWEBDACCONFIG1_C

