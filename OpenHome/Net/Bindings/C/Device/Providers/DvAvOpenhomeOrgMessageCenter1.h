/**
 * Provider for the av.openhome.org:MessageCenter:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGMESSAGECENTER1_C
#define HEADER_DVAVOPENHOMEORGMESSAGECENTER1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgMessageCenter1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetMessage action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgMessageCenter1EnableActionGetMessage
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aMessage
 * @param[out] aMessageID
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackMessageCenter1GetMessage)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aMessage, uint32_t* aMessageID);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgMessageCenter1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgMessageCenter1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgMessageCenter1Destroy(THandle aProvider);

/**
 * Enable the Message property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgMessageCenter1EnablePropertyMessage(THandle aProvider);
/**
 * Enable the MessageID property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgMessageCenter1EnablePropertyMessageID(THandle aProvider);

/**
 * Register a callback for the action GetMessage
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgMessageCenter1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgMessageCenter1EnableActionGetMessage(THandle aProvider, CallbackMessageCenter1GetMessage aCallback, void* aPtr);

/**
 * Set the value of the Message property
 *
 * Can only be called if DvProviderAvOpenhomeOrgMessageCenter1EnablePropertyMessage has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgMessageCenter1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgMessageCenter1SetPropertyMessage(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Message property
 *
 * Can only be called if DvProviderAvOpenhomeOrgMessageCenter1EnablePropertyMessage has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgMessageCenter1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgMessageCenter1GetPropertyMessage(THandle aProvider, char** aValue);
/**
 * Set the value of the MessageID property
 *
 * Can only be called if DvProviderAvOpenhomeOrgMessageCenter1EnablePropertyMessageID has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgMessageCenter1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgMessageCenter1SetPropertyMessageID(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the MessageID property
 *
 * Can only be called if DvProviderAvOpenhomeOrgMessageCenter1EnablePropertyMessageID has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgMessageCenter1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgMessageCenter1GetPropertyMessageID(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGMESSAGECENTER1_C

