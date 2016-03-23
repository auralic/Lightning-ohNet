/**
 * Provider for the av.openhome.org:GroupConfig:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGGROUPCONFIG1_C
#define HEADER_DVAVOPENHOMEORGGROUPCONFIG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgGroupConfig1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the SetGroupMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aGroupMode
 * @param[in]  aGroupID
 * @param[in]  aGroupName
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackGroupConfig1SetGroupMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aGroupMode, const char* aGroupID, const char* aGroupName);
/**
 * Callback which runs when the GetGroupMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aGroupMode
 * @param[out] aGroupID
 * @param[out] aGroupName
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackGroupConfig1GetGroupMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aGroupMode, char** aGroupID, char** aGroupName);
/**
 * Callback which runs when the SetGroupVolume action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupVolume
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aGroupVolume
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackGroupConfig1SetGroupVolume)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aGroupVolume);
/**
 * Callback which runs when the GetGroupVolume action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupVolume
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aGroupVolume
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackGroupConfig1GetGroupVolume)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aGroupVolume);
/**
 * Callback which runs when the SetGroupMute action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupMute
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aGroupMute
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackGroupConfig1SetGroupMute)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aGroupMute);
/**
 * Callback which runs when the GetGroupMute action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupMute
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aGroupMute
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackGroupConfig1GetGroupMute)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aGroupMute);
/**
 * Callback which runs when the GetGroupStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aGroupStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackGroupConfig1GetGroupStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aGroupStatus);
/**
 * Callback which runs when the SetGroupStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aGroupStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackGroupConfig1SetGroupStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aGroupStatus);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgGroupConfig1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1Destroy(THandle aProvider);

/**
 * Enable the GroupMode property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupMode(THandle aProvider);
/**
 * Enable the GroupName property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupName(THandle aProvider);
/**
 * Enable the GroupID property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupID(THandle aProvider);
/**
 * Enable the GroupVolume property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupVolume(THandle aProvider);
/**
 * Enable the GroupMute property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupMute(THandle aProvider);
/**
 * Enable the GroupStatus property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupStatus(THandle aProvider);

/**
 * Register a callback for the action SetGroupMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupMode(THandle aProvider, CallbackGroupConfig1SetGroupMode aCallback, void* aPtr);
/**
 * Register a callback for the action GetGroupMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupMode(THandle aProvider, CallbackGroupConfig1GetGroupMode aCallback, void* aPtr);
/**
 * Register a callback for the action SetGroupVolume
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupVolume(THandle aProvider, CallbackGroupConfig1SetGroupVolume aCallback, void* aPtr);
/**
 * Register a callback for the action GetGroupVolume
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupVolume(THandle aProvider, CallbackGroupConfig1GetGroupVolume aCallback, void* aPtr);
/**
 * Register a callback for the action SetGroupMute
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupMute(THandle aProvider, CallbackGroupConfig1SetGroupMute aCallback, void* aPtr);
/**
 * Register a callback for the action GetGroupMute
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupMute(THandle aProvider, CallbackGroupConfig1GetGroupMute aCallback, void* aPtr);
/**
 * Register a callback for the action GetGroupStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupStatus(THandle aProvider, CallbackGroupConfig1GetGroupStatus aCallback, void* aPtr);
/**
 * Register a callback for the action SetGroupStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupStatus(THandle aProvider, CallbackGroupConfig1SetGroupStatus aCallback, void* aPtr);

/**
 * Set the value of the GroupMode property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupMode has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupMode(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the GroupMode property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupMode has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupMode(THandle aProvider, char** aValue);
/**
 * Set the value of the GroupName property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupName has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupName(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the GroupName property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupName has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupName(THandle aProvider, char** aValue);
/**
 * Set the value of the GroupID property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupID has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupID(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the GroupID property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupID has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupID(THandle aProvider, char** aValue);
/**
 * Set the value of the GroupVolume property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupVolume has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupVolume(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the GroupVolume property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupVolume has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupVolume(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the GroupMute property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupMute has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupMute(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the GroupMute property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupMute has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupMute(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the GroupStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the GroupStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgGroupConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupStatus(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGGROUPCONFIG1_C

