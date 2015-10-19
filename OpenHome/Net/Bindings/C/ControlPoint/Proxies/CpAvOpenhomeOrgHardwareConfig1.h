/**
 * Proxy for av.openhome.org:HardwareConfig:1
 */
#ifndef HEADER_AVOPENHOMEORGHARDWARECONFIG1_C
#define HEADER_AVOPENHOMEORGHARDWARECONFIG1_C

#include <OpenHome/OsTypes.h>
#include <OpenHome/Defines.h>
#include <OpenHome/Net/C/Async.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/C/CpDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup CpProxyAvOpenhomeOrgHardwareConfig1
 * @ingroup Proxies
 * @{
 */

/**
 * Constructor.
 * Creates an instance of CpProxyAvOpenhomeOrgHardwareConfig1 without support for eventing.
 * Use CpProxyC[Un]Subscribe() to enable/disable querying of state variable and
 * reporting of their changes.
 *
 * @param[in]  aDevice   The device to use
 *
 * @return  Handle which should be used with all other functions in this header
 */
DllExport THandle STDCALL CpProxyAvOpenhomeOrgHardwareConfig1Create(CpDeviceC aDevice);
/**
 * Destructor.
 * If any asynchronous method is in progress, this will block until they complete.
 * [Note that any methods still in progress are likely to complete with an error.]
 * Clients who have called CpProxyCSubscribe() do not need to call CpProxyCSubscribe()
 * before calling delete.  An unsubscribe will be triggered automatically when required.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1Destroy(THandle aHandle);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aAlive
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncIsAlive(THandle aHandle, uint32_t* aAlive);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginIsAlive(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aAlive
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndIsAlive(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aAlive);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncUpdate(THandle aHandle);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginUpdate(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndUpdate(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aIsSubscribe
 * @param[in]  aRealName
 * @param[in]  aEmail
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncActive(THandle aHandle, uint32_t aIsSubscribe, const char* aRealName, const char* aEmail);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aIsSubscribe
 * @param[in]  aRealName
 * @param[in]  aEmail
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginActive(THandle aHandle, uint32_t aIsSubscribe, const char* aRealName, const char* aEmail, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndActive(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aActiveStatus
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetActiveStatus(THandle aHandle, char** aActiveStatus);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetActiveStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aActiveStatus
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetActiveStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aActiveStatus);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncCheckUpdate(THandle aHandle);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginCheckUpdate(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndCheckUpdate(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncResetDisplay(THandle aHandle);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginResetDisplay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndResetDisplay(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aHardWareInfo
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetHardWareInfo(THandle aHandle, char** aHardWareInfo);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetHardWareInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aHardWareInfo
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetHardWareInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aHardWareInfo);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aRoomName
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetRoomName(THandle aHandle, const char* aRoomName);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aRoomName
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetRoomName(THandle aHandle, const char* aRoomName, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetRoomName(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aVolumeControl
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetVolumeControl(THandle aHandle, uint32_t* aVolumeControl);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetVolumeControl(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aVolumeControl
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetVolumeControl(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVolumeControl);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aVolumeControl
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetVolumeControl(THandle aHandle, uint32_t aVolumeControl);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aVolumeControl
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetVolumeControl(THandle aHandle, uint32_t aVolumeControl, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetVolumeControl(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aWaitingTime
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetWaitingTime(THandle aHandle, char** aWaitingTime);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetWaitingTime(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aWaitingTime
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetWaitingTime(THandle aHandle, OhNetHandleAsync aAsync, char** aWaitingTime);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aWaitingTime
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetWaitingTime(THandle aHandle, const char* aWaitingTime);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aWaitingTime
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetWaitingTime(THandle aHandle, const char* aWaitingTime, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetWaitingTime(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aChannelNum
 * @param[out] aCurrentChannel
 * @param[out] aOutChannel
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetOutChannel(THandle aHandle, uint32_t* aChannelNum, char** aCurrentChannel, char** aOutChannel);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetOutChannel(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aChannelNum
 * @param[out] aCurrentChannel
 * @param[out] aOutChannel
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetOutChannel(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aChannelNum, char** aCurrentChannel, char** aOutChannel);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aChannel
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetOutChannel(THandle aHandle, const char* aChannel);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aChannel
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetOutChannel(THandle aHandle, const char* aChannel, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetOutChannel(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aUpnpType
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetUpnpType(THandle aHandle, const char* aUpnpType);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aUpnpType
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetUpnpType(THandle aHandle, const char* aUpnpType, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetUpnpType(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aUpnpType
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetUpnpType(THandle aHandle, char** aUpnpType);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetUpnpType(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aUpnpType
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetUpnpType(THandle aHandle, OhNetHandleAsync aAsync, char** aUpnpType);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aStatus
 * @param[in]  aSampleFormat
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetDsdNativeStatus(THandle aHandle, const char* aStatus, const char* aSampleFormat);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aStatus
 * @param[in]  aSampleFormat
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetDsdNativeStatus(THandle aHandle, const char* aStatus, const char* aSampleFormat, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetDsdNativeStatus(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aStatus
 * @param[out] aSampleFormat
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetDsdNativeStatus(THandle aHandle, char** aStatus, char** aSampleFormat);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetDsdNativeStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aStatus
 * @param[out] aSampleFormat
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetDsdNativeStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aStatus, char** aSampleFormat);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aProtect
 * @param[in]  aProtectPassword
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetPasswordProtect(THandle aHandle, const char* aProtect, const char* aProtectPassword);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aProtect
 * @param[in]  aProtectPassword
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetPasswordProtect(THandle aHandle, const char* aProtect, const char* aProtectPassword, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetPasswordProtect(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aProtect
 * @param[out] aProtectPassword
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetPasswordProtect(THandle aHandle, char** aProtect, char** aProtectPassword);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetPasswordProtect(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aProtect
 * @param[out] aProtectPassword
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetPasswordProtect(THandle aHandle, OhNetHandleAsync aAsync, char** aProtect, char** aProtectPassword);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aVersion
 * @param[out] aProgress
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetUpdateInfo(THandle aHandle, char** aVersion, char** aProgress);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetUpdateInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aVersion
 * @param[out] aProgress
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetUpdateInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aVersion, char** aProgress);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aInterFace
 * @param[out] aNumber
 * @param[out] aCurrentUse
 * @param[out] aWirelessList
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetWirelessList(THandle aHandle, const char* aInterFace, uint32_t* aNumber, char** aCurrentUse, char** aWirelessList);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aInterFace
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetWirelessList(THandle aHandle, const char* aInterFace, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aNumber
 * @param[out] aCurrentUse
 * @param[out] aWirelessList
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetWirelessList(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aNumber, char** aCurrentUse, char** aWirelessList);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aInterFace
 * @param[out] aIpAddress
 * @param[out] aNetMask
 * @param[out] aGateWay
 * @param[out] aDNS
 * @param[out] aDHCP
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetIpAddress(THandle aHandle, const char* aInterFace, char** aIpAddress, char** aNetMask, char** aGateWay, char** aDNS, char** aDHCP);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aInterFace
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetIpAddress(THandle aHandle, const char* aInterFace, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aIpAddress
 * @param[out] aNetMask
 * @param[out] aGateWay
 * @param[out] aDNS
 * @param[out] aDHCP
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetIpAddress(THandle aHandle, OhNetHandleAsync aAsync, char** aIpAddress, char** aNetMask, char** aGateWay, char** aDNS, char** aDHCP);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aInterFace
 * @param[in]  aIpAddress
 * @param[in]  aNetMask
 * @param[in]  aGateWay
 * @param[in]  aDNS
 * @param[in]  aSsid
 * @param[in]  aPassWord
 * @param[in]  aEncrypType
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetNetWork(THandle aHandle, const char* aInterFace, const char* aIpAddress, const char* aNetMask, const char* aGateWay, const char* aDNS, const char* aSsid, const char* aPassWord, const char* aEncrypType);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aInterFace
 * @param[in]  aIpAddress
 * @param[in]  aNetMask
 * @param[in]  aGateWay
 * @param[in]  aDNS
 * @param[in]  aSsid
 * @param[in]  aPassWord
 * @param[in]  aEncrypType
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetNetWork(THandle aHandle, const char* aInterFace, const char* aIpAddress, const char* aNetMask, const char* aGateWay, const char* aDNS, const char* aSsid, const char* aPassWord, const char* aEncrypType, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetNetWork(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aInterfaceNum
 * @param[out] aCurrentUse
 * @param[out] aInterfaceList
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetNetInterface(THandle aHandle, uint32_t* aInterfaceNum, char** aCurrentUse, char** aInterfaceList);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetNetInterface(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aInterfaceNum
 * @param[out] aCurrentUse
 * @param[out] aInterfaceList
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetNetInterface(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aInterfaceNum, char** aCurrentUse, char** aInterfaceList);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aHaltStatus
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetHaltStatus(THandle aHandle, uint32_t* aHaltStatus);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetHaltStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aHaltStatus
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetHaltStatus(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aHaltStatus);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aHaltStatus
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetHaltStatus(THandle aHandle, uint32_t aHaltStatus);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aHaltStatus
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetHaltStatus(THandle aHandle, uint32_t aHaltStatus, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetHaltStatus(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aFilterMode
 * @param[out] aFilterModeList
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncGetFilterMode(THandle aHandle, char** aFilterMode, char** aFilterModeList);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginGetFilterMode(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aFilterMode
 * @param[out] aFilterModeList
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndGetFilterMode(THandle aHandle, OhNetHandleAsync aAsync, char** aFilterMode, char** aFilterModeList);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aFilterMode
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SyncSetFilterMode(THandle aHandle, const char* aFilterMode);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aFilterMode
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1BeginSetFilterMode(THandle aHandle, const char* aFilterMode, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgHardwareConfig1EndSetFilterMode(THandle aHandle, OhNetHandleAsync aAsync);
/**
 * Set a callback to be run when the Alive state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyAliveChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the CurrentAction state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyCurrentActionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the Restart state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyRestartChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the Number state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyNumberChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the RoomName state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyRoomNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the InterFace state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyInterFaceChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the NetMask state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyNetMaskChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the GateWay state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyGateWayChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the DNS state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyDNSChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the DHCP state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyDHCPChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the Ssid state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertySsidChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the PassWord state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyPassWordChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the EncrypType state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyEncrypTypeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the Channel state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyChannelChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the UpnpType state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyUpnpTypeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the Status state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the SampleFormat state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertySampleFormatChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the IpAddress state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyIpAddressChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the Protect state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyProtectChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the ProtectPassword state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyProtectPasswordChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the ActiveStatus state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyActiveStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the Time state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyTimeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the VolumeControl state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1SetPropertyVolumeControlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);

/**
 * Query the value of the Alive property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aAlive
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyAlive(THandle aHandle, uint32_t* aAlive);
/**
 * Query the value of the CurrentAction property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aCurrentAction
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyCurrentAction(THandle aHandle, uint32_t* aCurrentAction);
/**
 * Query the value of the Restart property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aRestart
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyRestart(THandle aHandle, uint32_t* aRestart);
/**
 * Query the value of the Number property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aNumber
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyNumber(THandle aHandle, uint32_t* aNumber);
/**
 * Query the value of the RoomName property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aRoomName
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyRoomName(THandle aHandle, char** aRoomName);
/**
 * Query the value of the InterFace property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aInterFace
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyInterFace(THandle aHandle, char** aInterFace);
/**
 * Query the value of the NetMask property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aNetMask
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyNetMask(THandle aHandle, char** aNetMask);
/**
 * Query the value of the GateWay property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aGateWay
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyGateWay(THandle aHandle, char** aGateWay);
/**
 * Query the value of the DNS property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aDNS
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyDNS(THandle aHandle, char** aDNS);
/**
 * Query the value of the DHCP property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aDHCP
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyDHCP(THandle aHandle, char** aDHCP);
/**
 * Query the value of the Ssid property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aSsid
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertySsid(THandle aHandle, char** aSsid);
/**
 * Query the value of the PassWord property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aPassWord
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyPassWord(THandle aHandle, char** aPassWord);
/**
 * Query the value of the EncrypType property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aEncrypType
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyEncrypType(THandle aHandle, char** aEncrypType);
/**
 * Query the value of the Channel property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aChannel
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyChannel(THandle aHandle, char** aChannel);
/**
 * Query the value of the UpnpType property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aUpnpType
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyUpnpType(THandle aHandle, char** aUpnpType);
/**
 * Query the value of the Status property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aStatus
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyStatus(THandle aHandle, char** aStatus);
/**
 * Query the value of the SampleFormat property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aSampleFormat
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertySampleFormat(THandle aHandle, char** aSampleFormat);
/**
 * Query the value of the IpAddress property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aIpAddress
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyIpAddress(THandle aHandle, char** aIpAddress);
/**
 * Query the value of the Protect property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aProtect
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyProtect(THandle aHandle, char** aProtect);
/**
 * Query the value of the ProtectPassword property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aProtectPassword
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyProtectPassword(THandle aHandle, char** aProtectPassword);
/**
 * Query the value of the ActiveStatus property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aActiveStatus
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyActiveStatus(THandle aHandle, char** aActiveStatus);
/**
 * Query the value of the Time property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aTime
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyTime(THandle aHandle, char** aTime);
/**
 * Query the value of the VolumeControl property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgHardwareConfig1Create
 * @param[out] aVolumeControl
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgHardwareConfig1PropertyVolumeControl(THandle aHandle, uint32_t* aVolumeControl);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_AVOPENHOMEORGHARDWARECONFIG1_C

