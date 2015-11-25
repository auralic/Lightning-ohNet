/**
 * Provider for the av.openhome.org:HardwareConfig:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGHARDWARECONFIG1_C
#define HEADER_DVAVOPENHOMEORGHARDWARECONFIG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgHardwareConfig1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the IsAlive action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionIsAlive
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aAlive
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1IsAlive)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aAlive);
/**
 * Callback which runs when the Update action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionUpdate
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1Update)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Active action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionActive
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aIsSubscribe
 * @param[in]  aRealName
 * @param[in]  aEmail
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1Active)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aIsSubscribe, const char* aRealName, const char* aEmail);
/**
 * Callback which runs when the GetActiveStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetActiveStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aActiveStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetActiveStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aActiveStatus);
/**
 * Callback which runs when the CheckUpdate action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionCheckUpdate
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1CheckUpdate)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the ResetDisplay action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionResetDisplay
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1ResetDisplay)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the GetHardWareInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetHardWareInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aHardWareInfo
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetHardWareInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aHardWareInfo);
/**
 * Callback which runs when the SetRoomName action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetRoomName
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aRoomName
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetRoomName)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aRoomName);
/**
 * Callback which runs when the GetVolumeControl action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetVolumeControl
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVolumeControl
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetVolumeControl)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aVolumeControl);
/**
 * Callback which runs when the SetVolumeControl action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetVolumeControl
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aVolumeControl
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetVolumeControl)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aVolumeControl);
/**
 * Callback which runs when the GetWaitingTime action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetWaitingTime
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aWaitingTime
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetWaitingTime)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aWaitingTime);
/**
 * Callback which runs when the SetWaitingTime action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetWaitingTime
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aWaitingTime
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetWaitingTime)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aWaitingTime);
/**
 * Callback which runs when the GetOutChannel action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetOutChannel
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aChannelNum
 * @param[out] aCurrentChannel
 * @param[out] aOutChannel
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetOutChannel)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aChannelNum, char** aCurrentChannel, char** aOutChannel);
/**
 * Callback which runs when the SetOutChannel action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetOutChannel
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannel
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetOutChannel)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannel);
/**
 * Callback which runs when the SetUpnpType action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetUpnpType
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aUpnpType
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetUpnpType)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aUpnpType);
/**
 * Callback which runs when the GetUpnpType action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetUpnpType
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aUpnpType
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetUpnpType)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aUpnpType);
/**
 * Callback which runs when the SetDsdNativeStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetDsdNativeStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aStatus
 * @param[in]  aSampleFormat
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetDsdNativeStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aStatus, const char* aSampleFormat);
/**
 * Callback which runs when the GetDsdNativeStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetDsdNativeStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aStatus
 * @param[out] aSampleFormat
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetDsdNativeStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aStatus, char** aSampleFormat);
/**
 * Callback which runs when the SetPasswordProtect action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetPasswordProtect
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aProtect
 * @param[in]  aProtectPassword
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetPasswordProtect)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aProtect, const char* aProtectPassword);
/**
 * Callback which runs when the GetPasswordProtect action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetPasswordProtect
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aProtect
 * @param[out] aProtectPassword
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetPasswordProtect)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aProtect, char** aProtectPassword);
/**
 * Callback which runs when the GetUpdateInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetUpdateInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVersion
 * @param[out] aProgress
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetUpdateInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aVersion, char** aProgress);
/**
 * Callback which runs when the GetWirelessList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetWirelessList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aInterFace
 * @param[out] aNumber
 * @param[out] aCurrentUse
 * @param[out] aWirelessList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetWirelessList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aInterFace, uint32_t* aNumber, char** aCurrentUse, char** aWirelessList);
/**
 * Callback which runs when the GetIpAddress action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetIpAddress
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aInterFace
 * @param[out] aIpAddress
 * @param[out] aNetMask
 * @param[out] aGateWay
 * @param[out] aDNS
 * @param[out] aDHCP
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetIpAddress)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aInterFace, char** aIpAddress, char** aNetMask, char** aGateWay, char** aDNS, char** aDHCP);
/**
 * Callback which runs when the SetNetWork action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetNetWork
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aInterFace
 * @param[in]  aIpAddress
 * @param[in]  aNetMask
 * @param[in]  aGateWay
 * @param[in]  aDNS
 * @param[in]  aSsid
 * @param[in]  aPassWord
 * @param[in]  aEncrypType
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetNetWork)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aInterFace, const char* aIpAddress, const char* aNetMask, const char* aGateWay, const char* aDNS, const char* aSsid, const char* aPassWord, const char* aEncrypType);
/**
 * Callback which runs when the GetNetInterface action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetNetInterface
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aInterfaceNum
 * @param[out] aCurrentUse
 * @param[out] aInterfaceList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetNetInterface)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aInterfaceNum, char** aCurrentUse, char** aInterfaceList);
/**
 * Callback which runs when the GetHaltStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetHaltStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aHaltStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetHaltStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aHaltStatus);
/**
 * Callback which runs when the SetHaltStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetHaltStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aHaltStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetHaltStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aHaltStatus);
/**
 * Callback which runs when the GetFilterMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetFilterMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aFilterMode
 * @param[out] aFilterModeList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetFilterMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aFilterMode, char** aFilterModeList);
/**
 * Callback which runs when the SetFilterMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetFilterMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aFilterMode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetFilterMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aFilterMode);
/**
 * Callback which runs when the SetSourceVisible action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetSourceVisible
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aSourceName
 * @param[in]  aVisible
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetSourceVisible)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aSourceName, uint32_t aVisible);
/**
 * Callback which runs when the GetSourceVisible action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetSourceVisible
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVisibleInfo
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetSourceVisible)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aVisibleInfo);
/**
 * Callback which runs when the SetLEDMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetLEDMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aLEDMode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetLEDMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aLEDMode);
/**
 * Callback which runs when the GetLEDMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetLEDMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aLEDMode
 * @param[out] aLEDModeList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetLEDMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aLEDMode, char** aLEDModeList);
/**
 * Callback which runs when the SetKeyMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetKeyMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aKeyName
 * @param[in]  aKeyMode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1SetKeyMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aKeyName, const char* aKeyMode);
/**
 * Callback which runs when the GetKeyMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetKeyMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSideKeyMode
 * @param[out] aMiddleKeyMode
 * @param[out] aKeyModeList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackHardwareConfig1GetKeyMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aSideKeyMode, char** aMiddleKeyMode, char** aKeyModeList);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgHardwareConfig1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1Destroy(THandle aProvider);

/**
 * Enable the Alive property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyAlive(THandle aProvider);
/**
 * Enable the CurrentAction property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyCurrentAction(THandle aProvider);
/**
 * Enable the Restart property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyRestart(THandle aProvider);
/**
 * Enable the Number property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyNumber(THandle aProvider);
/**
 * Enable the RoomName property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyRoomName(THandle aProvider);
/**
 * Enable the InterFace property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyInterFace(THandle aProvider);
/**
 * Enable the NetMask property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyNetMask(THandle aProvider);
/**
 * Enable the GateWay property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyGateWay(THandle aProvider);
/**
 * Enable the DNS property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyDNS(THandle aProvider);
/**
 * Enable the DHCP property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyDHCP(THandle aProvider);
/**
 * Enable the Ssid property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertySsid(THandle aProvider);
/**
 * Enable the PassWord property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyPassWord(THandle aProvider);
/**
 * Enable the EncrypType property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyEncrypType(THandle aProvider);
/**
 * Enable the Channel property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyChannel(THandle aProvider);
/**
 * Enable the UpnpType property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyUpnpType(THandle aProvider);
/**
 * Enable the Status property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyStatus(THandle aProvider);
/**
 * Enable the SampleFormat property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertySampleFormat(THandle aProvider);
/**
 * Enable the IpAddress property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyIpAddress(THandle aProvider);
/**
 * Enable the Protect property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyProtect(THandle aProvider);
/**
 * Enable the ProtectPassword property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyProtectPassword(THandle aProvider);
/**
 * Enable the ActiveStatus property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyActiveStatus(THandle aProvider);
/**
 * Enable the Time property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyTime(THandle aProvider);
/**
 * Enable the VolumeControl property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyVolumeControl(THandle aProvider);

/**
 * Register a callback for the action IsAlive
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionIsAlive(THandle aProvider, CallbackHardwareConfig1IsAlive aCallback, void* aPtr);
/**
 * Register a callback for the action Update
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionUpdate(THandle aProvider, CallbackHardwareConfig1Update aCallback, void* aPtr);
/**
 * Register a callback for the action Active
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionActive(THandle aProvider, CallbackHardwareConfig1Active aCallback, void* aPtr);
/**
 * Register a callback for the action GetActiveStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetActiveStatus(THandle aProvider, CallbackHardwareConfig1GetActiveStatus aCallback, void* aPtr);
/**
 * Register a callback for the action CheckUpdate
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionCheckUpdate(THandle aProvider, CallbackHardwareConfig1CheckUpdate aCallback, void* aPtr);
/**
 * Register a callback for the action ResetDisplay
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionResetDisplay(THandle aProvider, CallbackHardwareConfig1ResetDisplay aCallback, void* aPtr);
/**
 * Register a callback for the action GetHardWareInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetHardWareInfo(THandle aProvider, CallbackHardwareConfig1GetHardWareInfo aCallback, void* aPtr);
/**
 * Register a callback for the action SetRoomName
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetRoomName(THandle aProvider, CallbackHardwareConfig1SetRoomName aCallback, void* aPtr);
/**
 * Register a callback for the action GetVolumeControl
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetVolumeControl(THandle aProvider, CallbackHardwareConfig1GetVolumeControl aCallback, void* aPtr);
/**
 * Register a callback for the action SetVolumeControl
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetVolumeControl(THandle aProvider, CallbackHardwareConfig1SetVolumeControl aCallback, void* aPtr);
/**
 * Register a callback for the action GetWaitingTime
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetWaitingTime(THandle aProvider, CallbackHardwareConfig1GetWaitingTime aCallback, void* aPtr);
/**
 * Register a callback for the action SetWaitingTime
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetWaitingTime(THandle aProvider, CallbackHardwareConfig1SetWaitingTime aCallback, void* aPtr);
/**
 * Register a callback for the action GetOutChannel
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetOutChannel(THandle aProvider, CallbackHardwareConfig1GetOutChannel aCallback, void* aPtr);
/**
 * Register a callback for the action SetOutChannel
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetOutChannel(THandle aProvider, CallbackHardwareConfig1SetOutChannel aCallback, void* aPtr);
/**
 * Register a callback for the action SetUpnpType
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetUpnpType(THandle aProvider, CallbackHardwareConfig1SetUpnpType aCallback, void* aPtr);
/**
 * Register a callback for the action GetUpnpType
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetUpnpType(THandle aProvider, CallbackHardwareConfig1GetUpnpType aCallback, void* aPtr);
/**
 * Register a callback for the action SetDsdNativeStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetDsdNativeStatus(THandle aProvider, CallbackHardwareConfig1SetDsdNativeStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetDsdNativeStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetDsdNativeStatus(THandle aProvider, CallbackHardwareConfig1GetDsdNativeStatus aCallback, void* aPtr);
/**
 * Register a callback for the action SetPasswordProtect
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetPasswordProtect(THandle aProvider, CallbackHardwareConfig1SetPasswordProtect aCallback, void* aPtr);
/**
 * Register a callback for the action GetPasswordProtect
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetPasswordProtect(THandle aProvider, CallbackHardwareConfig1GetPasswordProtect aCallback, void* aPtr);
/**
 * Register a callback for the action GetUpdateInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetUpdateInfo(THandle aProvider, CallbackHardwareConfig1GetUpdateInfo aCallback, void* aPtr);
/**
 * Register a callback for the action GetWirelessList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetWirelessList(THandle aProvider, CallbackHardwareConfig1GetWirelessList aCallback, void* aPtr);
/**
 * Register a callback for the action GetIpAddress
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetIpAddress(THandle aProvider, CallbackHardwareConfig1GetIpAddress aCallback, void* aPtr);
/**
 * Register a callback for the action SetNetWork
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetNetWork(THandle aProvider, CallbackHardwareConfig1SetNetWork aCallback, void* aPtr);
/**
 * Register a callback for the action GetNetInterface
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetNetInterface(THandle aProvider, CallbackHardwareConfig1GetNetInterface aCallback, void* aPtr);
/**
 * Register a callback for the action GetHaltStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetHaltStatus(THandle aProvider, CallbackHardwareConfig1GetHaltStatus aCallback, void* aPtr);
/**
 * Register a callback for the action SetHaltStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetHaltStatus(THandle aProvider, CallbackHardwareConfig1SetHaltStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetFilterMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetFilterMode(THandle aProvider, CallbackHardwareConfig1GetFilterMode aCallback, void* aPtr);
/**
 * Register a callback for the action SetFilterMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetFilterMode(THandle aProvider, CallbackHardwareConfig1SetFilterMode aCallback, void* aPtr);
/**
 * Register a callback for the action SetSourceVisible
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetSourceVisible(THandle aProvider, CallbackHardwareConfig1SetSourceVisible aCallback, void* aPtr);
/**
 * Register a callback for the action GetSourceVisible
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetSourceVisible(THandle aProvider, CallbackHardwareConfig1GetSourceVisible aCallback, void* aPtr);
/**
 * Register a callback for the action SetLEDMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetLEDMode(THandle aProvider, CallbackHardwareConfig1SetLEDMode aCallback, void* aPtr);
/**
 * Register a callback for the action GetLEDMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetLEDMode(THandle aProvider, CallbackHardwareConfig1GetLEDMode aCallback, void* aPtr);
/**
 * Register a callback for the action SetKeyMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionSetKeyMode(THandle aProvider, CallbackHardwareConfig1SetKeyMode aCallback, void* aPtr);
/**
 * Register a callback for the action GetKeyMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1EnableActionGetKeyMode(THandle aProvider, CallbackHardwareConfig1GetKeyMode aCallback, void* aPtr);

/**
 * Set the value of the Alive property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyAlive has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyAlive(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Alive property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyAlive has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyAlive(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the CurrentAction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyCurrentAction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyCurrentAction(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CurrentAction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyCurrentAction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyCurrentAction(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Restart property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyRestart has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyRestart(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Restart property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyRestart has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyRestart(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Number property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyNumber has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyNumber(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Number property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyNumber has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyNumber(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the RoomName property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyRoomName has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyRoomName(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the RoomName property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyRoomName has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyRoomName(THandle aProvider, char** aValue);
/**
 * Set the value of the InterFace property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyInterFace has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyInterFace(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the InterFace property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyInterFace has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyInterFace(THandle aProvider, char** aValue);
/**
 * Set the value of the NetMask property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyNetMask has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyNetMask(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the NetMask property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyNetMask has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyNetMask(THandle aProvider, char** aValue);
/**
 * Set the value of the GateWay property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyGateWay has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyGateWay(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the GateWay property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyGateWay has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyGateWay(THandle aProvider, char** aValue);
/**
 * Set the value of the DNS property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyDNS has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyDNS(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DNS property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyDNS has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyDNS(THandle aProvider, char** aValue);
/**
 * Set the value of the DHCP property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyDHCP has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyDHCP(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DHCP property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyDHCP has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyDHCP(THandle aProvider, char** aValue);
/**
 * Set the value of the Ssid property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertySsid has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertySsid(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Ssid property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertySsid has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertySsid(THandle aProvider, char** aValue);
/**
 * Set the value of the PassWord property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyPassWord has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyPassWord(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the PassWord property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyPassWord has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyPassWord(THandle aProvider, char** aValue);
/**
 * Set the value of the EncrypType property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyEncrypType has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyEncrypType(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the EncrypType property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyEncrypType has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyEncrypType(THandle aProvider, char** aValue);
/**
 * Set the value of the Channel property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyChannel has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyChannel(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Channel property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyChannel has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyChannel(THandle aProvider, char** aValue);
/**
 * Set the value of the UpnpType property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyUpnpType has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyUpnpType(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpnpType property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyUpnpType has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyUpnpType(THandle aProvider, char** aValue);
/**
 * Set the value of the Status property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Status property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the SampleFormat property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertySampleFormat has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertySampleFormat(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SampleFormat property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertySampleFormat has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertySampleFormat(THandle aProvider, char** aValue);
/**
 * Set the value of the IpAddress property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyIpAddress has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyIpAddress(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the IpAddress property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyIpAddress has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyIpAddress(THandle aProvider, char** aValue);
/**
 * Set the value of the Protect property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyProtect has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyProtect(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Protect property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyProtect has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyProtect(THandle aProvider, char** aValue);
/**
 * Set the value of the ProtectPassword property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyProtectPassword has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyProtectPassword(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ProtectPassword property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyProtectPassword has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyProtectPassword(THandle aProvider, char** aValue);
/**
 * Set the value of the ActiveStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyActiveStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyActiveStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ActiveStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyActiveStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyActiveStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the Time property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyTime has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyTime(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Time property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyTime has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyTime(THandle aProvider, char** aValue);
/**
 * Set the value of the VolumeControl property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyVolumeControl has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgHardwareConfig1SetPropertyVolumeControl(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeControl property
 *
 * Can only be called if DvProviderAvOpenhomeOrgHardwareConfig1EnablePropertyVolumeControl has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgHardwareConfig1GetPropertyVolumeControl(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGHARDWARECONFIG1_C

