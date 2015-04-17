#ifndef HEADER_AVOPENHOMEORGHARDWARECONFIG1CPP
#define HEADER_AVOPENHOMEORGHARDWARECONFIG1CPP

#include <OpenHome/Types.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Net/Core/CpProxy.h>

#include <string>

namespace OpenHome {
namespace Net {

class CpDeviceCpp;
class Action;
class PropertyBinary;
class PropertyBool;
class PropertyInt;
class PropertyString;
class PropertyUint;

/**
 * Proxy for av.openhome.org:HardwareConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgHardwareConfig1Cpp : public CpProxy
{
public:
    /**
     * Constructor.
     *
     * Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable
     * and reporting of their changes.
     *
     * @param[in]  aDevice   The device to use
     */
    CpProxyAvOpenhomeOrgHardwareConfig1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgHardwareConfig1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aAlive
     */
    void SyncIsAlive(bool& aAlive);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndIsAlive().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginIsAlive(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aAlive
     */
    void EndIsAlive(IAsync& aAsync, bool& aAlive);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncUpdate();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndUpdate().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginUpdate(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndUpdate(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aIsSubscribe
     * @param[in]  aRealName
     * @param[in]  aEmail
     */
    void SyncActive(bool aIsSubscribe, const std::string& aRealName, const std::string& aEmail);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndActive().
     *
     * @param[in] aIsSubscribe
     * @param[in] aRealName
     * @param[in] aEmail
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginActive(bool aIsSubscribe, const std::string& aRealName, const std::string& aEmail, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndActive(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aActiveStatus
     */
    void SyncGetActiveStatus(std::string& aActiveStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetActiveStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetActiveStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aActiveStatus
     */
    void EndGetActiveStatus(IAsync& aAsync, std::string& aActiveStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncCheckUpdate();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndCheckUpdate().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginCheckUpdate(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndCheckUpdate(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncResetDisplay();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndResetDisplay().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginResetDisplay(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndResetDisplay(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aHardWareInfo
     */
    void SyncGetHardWareInfo(std::string& aHardWareInfo);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetHardWareInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetHardWareInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aHardWareInfo
     */
    void EndGetHardWareInfo(IAsync& aAsync, std::string& aHardWareInfo);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRoomName
     */
    void SyncSetRoomName(const std::string& aRoomName);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetRoomName().
     *
     * @param[in] aRoomName
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetRoomName(const std::string& aRoomName, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetRoomName(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aVolumeControl
     */
    void SyncGetVolumeControl(bool& aVolumeControl);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetVolumeControl().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetVolumeControl(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aVolumeControl
     */
    void EndGetVolumeControl(IAsync& aAsync, bool& aVolumeControl);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aVolumeControl
     */
    void SyncSetVolumeControl(bool aVolumeControl);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetVolumeControl().
     *
     * @param[in] aVolumeControl
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetVolumeControl(bool aVolumeControl, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetVolumeControl(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aWaitingTime
     */
    void SyncGetWaitingTime(std::string& aWaitingTime);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetWaitingTime().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetWaitingTime(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aWaitingTime
     */
    void EndGetWaitingTime(IAsync& aAsync, std::string& aWaitingTime);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aWaitingTime
     */
    void SyncSetWaitingTime(const std::string& aWaitingTime);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetWaitingTime().
     *
     * @param[in] aWaitingTime
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetWaitingTime(const std::string& aWaitingTime, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetWaitingTime(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aChannelNum
     * @param[out] aCurrentChannel
     * @param[out] aOutChannel
     */
    void SyncGetOutChannel(uint32_t& aChannelNum, std::string& aCurrentChannel, std::string& aOutChannel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetOutChannel().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetOutChannel(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aChannelNum
     * @param[out] aCurrentChannel
     * @param[out] aOutChannel
     */
    void EndGetOutChannel(IAsync& aAsync, uint32_t& aChannelNum, std::string& aCurrentChannel, std::string& aOutChannel);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aChannel
     */
    void SyncSetOutChannel(const std::string& aChannel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetOutChannel().
     *
     * @param[in] aChannel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetOutChannel(const std::string& aChannel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetOutChannel(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aUpnpType
     */
    void SyncSetUpnpType(const std::string& aUpnpType);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetUpnpType().
     *
     * @param[in] aUpnpType
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetUpnpType(const std::string& aUpnpType, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetUpnpType(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aUpnpType
     */
    void SyncGetUpnpType(std::string& aUpnpType);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetUpnpType().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetUpnpType(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aUpnpType
     */
    void EndGetUpnpType(IAsync& aAsync, std::string& aUpnpType);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aStatus
     * @param[in]  aSampleFormat
     */
    void SyncSetDsdNativeStatus(const std::string& aStatus, const std::string& aSampleFormat);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetDsdNativeStatus().
     *
     * @param[in] aStatus
     * @param[in] aSampleFormat
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetDsdNativeStatus(const std::string& aStatus, const std::string& aSampleFormat, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetDsdNativeStatus(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aStatus
     * @param[out] aSampleFormat
     */
    void SyncGetDsdNativeStatus(std::string& aStatus, std::string& aSampleFormat);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDsdNativeStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDsdNativeStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aStatus
     * @param[out] aSampleFormat
     */
    void EndGetDsdNativeStatus(IAsync& aAsync, std::string& aStatus, std::string& aSampleFormat);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aProtect
     * @param[in]  aProtectPassword
     */
    void SyncSetPasswordProtect(const std::string& aProtect, const std::string& aProtectPassword);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetPasswordProtect().
     *
     * @param[in] aProtect
     * @param[in] aProtectPassword
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetPasswordProtect(const std::string& aProtect, const std::string& aProtectPassword, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetPasswordProtect(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aProtect
     * @param[out] aProtectPassword
     */
    void SyncGetPasswordProtect(std::string& aProtect, std::string& aProtectPassword);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetPasswordProtect().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetPasswordProtect(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aProtect
     * @param[out] aProtectPassword
     */
    void EndGetPasswordProtect(IAsync& aAsync, std::string& aProtect, std::string& aProtectPassword);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aVersion
     * @param[out] aProgress
     */
    void SyncGetUpdateInfo(std::string& aVersion, std::string& aProgress);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetUpdateInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetUpdateInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aVersion
     * @param[out] aProgress
     */
    void EndGetUpdateInfo(IAsync& aAsync, std::string& aVersion, std::string& aProgress);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInterFace
     * @param[out] aNumber
     * @param[out] aCurrentUse
     * @param[out] aWirelessList
     */
    void SyncGetWirelessList(const std::string& aInterFace, uint32_t& aNumber, std::string& aCurrentUse, std::string& aWirelessList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetWirelessList().
     *
     * @param[in] aInterFace
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetWirelessList(const std::string& aInterFace, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNumber
     * @param[out] aCurrentUse
     * @param[out] aWirelessList
     */
    void EndGetWirelessList(IAsync& aAsync, uint32_t& aNumber, std::string& aCurrentUse, std::string& aWirelessList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInterFace
     * @param[out] aIpAddress
     * @param[out] aNetMask
     * @param[out] aGateWay
     * @param[out] aDNS
     * @param[out] aDHCP
     */
    void SyncGetIpAddress(const std::string& aInterFace, std::string& aIpAddress, std::string& aNetMask, std::string& aGateWay, std::string& aDNS, std::string& aDHCP);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetIpAddress().
     *
     * @param[in] aInterFace
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetIpAddress(const std::string& aInterFace, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aIpAddress
     * @param[out] aNetMask
     * @param[out] aGateWay
     * @param[out] aDNS
     * @param[out] aDHCP
     */
    void EndGetIpAddress(IAsync& aAsync, std::string& aIpAddress, std::string& aNetMask, std::string& aGateWay, std::string& aDNS, std::string& aDHCP);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInterFace
     * @param[in]  aIpAddress
     * @param[in]  aNetMask
     * @param[in]  aGateWay
     * @param[in]  aDNS
     * @param[in]  aSsid
     * @param[in]  aPassWord
     * @param[in]  aEncrypType
     */
    void SyncSetNetWork(const std::string& aInterFace, const std::string& aIpAddress, const std::string& aNetMask, const std::string& aGateWay, const std::string& aDNS, const std::string& aSsid, const std::string& aPassWord, const std::string& aEncrypType);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetNetWork().
     *
     * @param[in] aInterFace
     * @param[in] aIpAddress
     * @param[in] aNetMask
     * @param[in] aGateWay
     * @param[in] aDNS
     * @param[in] aSsid
     * @param[in] aPassWord
     * @param[in] aEncrypType
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetNetWork(const std::string& aInterFace, const std::string& aIpAddress, const std::string& aNetMask, const std::string& aGateWay, const std::string& aDNS, const std::string& aSsid, const std::string& aPassWord, const std::string& aEncrypType, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetNetWork(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aInterfaceNum
     * @param[out] aCurrentUse
     * @param[out] aInterfaceList
     */
    void SyncGetNetInterface(uint32_t& aInterfaceNum, std::string& aCurrentUse, std::string& aInterfaceList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetNetInterface().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetNetInterface(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aInterfaceNum
     * @param[out] aCurrentUse
     * @param[out] aInterfaceList
     */
    void EndGetNetInterface(IAsync& aAsync, uint32_t& aInterfaceNum, std::string& aCurrentUse, std::string& aInterfaceList);

    /**
     * Set a callback to be run when the Alive state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAliveChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CurrentAction state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCurrentActionChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Restart state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRestartChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Number state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyNumberChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the RoomName state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRoomNameChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the InterFace state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyInterFaceChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the NetMask state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyNetMaskChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GateWay state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGateWayChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the DNS state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDNSChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the DHCP state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDHCPChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Ssid state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySsidChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the PassWord state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPassWordChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the EncrypType state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyEncrypTypeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Channel state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyChannelChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpnpType state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpnpTypeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Status state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SampleFormat state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySampleFormatChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the IpAddress state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIpAddressChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Protect state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyProtectChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ProtectPassword state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyProtectPasswordChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ActiveStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyActiveStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Time state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyTimeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeControl state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeControlChanged(Functor& aFunctor);

    /**
     * Query the value of the Alive property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAlive
     */
    void PropertyAlive(bool& aAlive) const;
    /**
     * Query the value of the CurrentAction property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCurrentAction
     */
    void PropertyCurrentAction(uint32_t& aCurrentAction) const;
    /**
     * Query the value of the Restart property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRestart
     */
    void PropertyRestart(bool& aRestart) const;
    /**
     * Query the value of the Number property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aNumber
     */
    void PropertyNumber(uint32_t& aNumber) const;
    /**
     * Query the value of the RoomName property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRoomName
     */
    void PropertyRoomName(std::string& aRoomName) const;
    /**
     * Query the value of the InterFace property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aInterFace
     */
    void PropertyInterFace(std::string& aInterFace) const;
    /**
     * Query the value of the NetMask property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aNetMask
     */
    void PropertyNetMask(std::string& aNetMask) const;
    /**
     * Query the value of the GateWay property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGateWay
     */
    void PropertyGateWay(std::string& aGateWay) const;
    /**
     * Query the value of the DNS property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDNS
     */
    void PropertyDNS(std::string& aDNS) const;
    /**
     * Query the value of the DHCP property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDHCP
     */
    void PropertyDHCP(std::string& aDHCP) const;
    /**
     * Query the value of the Ssid property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSsid
     */
    void PropertySsid(std::string& aSsid) const;
    /**
     * Query the value of the PassWord property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPassWord
     */
    void PropertyPassWord(std::string& aPassWord) const;
    /**
     * Query the value of the EncrypType property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aEncrypType
     */
    void PropertyEncrypType(std::string& aEncrypType) const;
    /**
     * Query the value of the Channel property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aChannel
     */
    void PropertyChannel(std::string& aChannel) const;
    /**
     * Query the value of the UpnpType property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpnpType
     */
    void PropertyUpnpType(std::string& aUpnpType) const;
    /**
     * Query the value of the Status property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aStatus
     */
    void PropertyStatus(std::string& aStatus) const;
    /**
     * Query the value of the SampleFormat property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSampleFormat
     */
    void PropertySampleFormat(std::string& aSampleFormat) const;
    /**
     * Query the value of the IpAddress property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aIpAddress
     */
    void PropertyIpAddress(std::string& aIpAddress) const;
    /**
     * Query the value of the Protect property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aProtect
     */
    void PropertyProtect(std::string& aProtect) const;
    /**
     * Query the value of the ProtectPassword property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aProtectPassword
     */
    void PropertyProtectPassword(std::string& aProtectPassword) const;
    /**
     * Query the value of the ActiveStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aActiveStatus
     */
    void PropertyActiveStatus(std::string& aActiveStatus) const;
    /**
     * Query the value of the Time property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aTime
     */
    void PropertyTime(std::string& aTime) const;
    /**
     * Query the value of the VolumeControl property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeControl
     */
    void PropertyVolumeControl(bool& aVolumeControl) const;
private:
    void AlivePropertyChanged();
    void CurrentActionPropertyChanged();
    void RestartPropertyChanged();
    void NumberPropertyChanged();
    void RoomNamePropertyChanged();
    void InterFacePropertyChanged();
    void NetMaskPropertyChanged();
    void GateWayPropertyChanged();
    void DNSPropertyChanged();
    void DHCPPropertyChanged();
    void SsidPropertyChanged();
    void PassWordPropertyChanged();
    void EncrypTypePropertyChanged();
    void ChannelPropertyChanged();
    void UpnpTypePropertyChanged();
    void StatusPropertyChanged();
    void SampleFormatPropertyChanged();
    void IpAddressPropertyChanged();
    void ProtectPropertyChanged();
    void ProtectPasswordPropertyChanged();
    void ActiveStatusPropertyChanged();
    void TimePropertyChanged();
    void VolumeControlPropertyChanged();
private:
    Action* iActionIsAlive;
    Action* iActionUpdate;
    Action* iActionActive;
    Action* iActionGetActiveStatus;
    Action* iActionCheckUpdate;
    Action* iActionResetDisplay;
    Action* iActionGetHardWareInfo;
    Action* iActionSetRoomName;
    Action* iActionGetVolumeControl;
    Action* iActionSetVolumeControl;
    Action* iActionGetWaitingTime;
    Action* iActionSetWaitingTime;
    Action* iActionGetOutChannel;
    Action* iActionSetOutChannel;
    Action* iActionSetUpnpType;
    Action* iActionGetUpnpType;
    Action* iActionSetDsdNativeStatus;
    Action* iActionGetDsdNativeStatus;
    Action* iActionSetPasswordProtect;
    Action* iActionGetPasswordProtect;
    Action* iActionGetUpdateInfo;
    Action* iActionGetWirelessList;
    Action* iActionGetIpAddress;
    Action* iActionSetNetWork;
    Action* iActionGetNetInterface;
    PropertyBool* iAlive;
    PropertyUint* iCurrentAction;
    PropertyBool* iRestart;
    PropertyUint* iNumber;
    PropertyString* iRoomName;
    PropertyString* iInterFace;
    PropertyString* iNetMask;
    PropertyString* iGateWay;
    PropertyString* iDNS;
    PropertyString* iDHCP;
    PropertyString* iSsid;
    PropertyString* iPassWord;
    PropertyString* iEncrypType;
    PropertyString* iChannel;
    PropertyString* iUpnpType;
    PropertyString* iStatus;
    PropertyString* iSampleFormat;
    PropertyString* iIpAddress;
    PropertyString* iProtect;
    PropertyString* iProtectPassword;
    PropertyString* iActiveStatus;
    PropertyString* iTime;
    PropertyBool* iVolumeControl;
    Functor iAliveChanged;
    Functor iCurrentActionChanged;
    Functor iRestartChanged;
    Functor iNumberChanged;
    Functor iRoomNameChanged;
    Functor iInterFaceChanged;
    Functor iNetMaskChanged;
    Functor iGateWayChanged;
    Functor iDNSChanged;
    Functor iDHCPChanged;
    Functor iSsidChanged;
    Functor iPassWordChanged;
    Functor iEncrypTypeChanged;
    Functor iChannelChanged;
    Functor iUpnpTypeChanged;
    Functor iStatusChanged;
    Functor iSampleFormatChanged;
    Functor iIpAddressChanged;
    Functor iProtectChanged;
    Functor iProtectPasswordChanged;
    Functor iActiveStatusChanged;
    Functor iTimeChanged;
    Functor iVolumeControlChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGHARDWARECONFIG1CPP

