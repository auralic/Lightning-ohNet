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
class CpProxy;
class ICpProxyAvOpenhomeOrgHardwareConfig1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgHardwareConfig1Cpp() {}
    virtual void SyncLogIn(const std::string& aServiceName, const std::string& aMessageIn, std::string& aMessageOut) = 0;
    virtual void BeginLogIn(const std::string& aServiceName, const std::string& aMessageIn, FunctorAsync& aFunctor) = 0;
    virtual void EndLogIn(IAsync& aAsync, std::string& aMessageOut) = 0;
    virtual void SyncLogOut(const std::string& aServiceName) = 0;
    virtual void BeginLogOut(const std::string& aServiceName, FunctorAsync& aFunctor) = 0;
    virtual void EndLogOut(IAsync& aAsync) = 0;
    virtual void SyncCancelLogIn(const std::string& aServiceName) = 0;
    virtual void BeginCancelLogIn(const std::string& aServiceName, FunctorAsync& aFunctor) = 0;
    virtual void EndCancelLogIn(IAsync& aAsync) = 0;
    virtual void SyncIsAlive(bool& aAlive) = 0;
    virtual void BeginIsAlive(FunctorAsync& aFunctor) = 0;
    virtual void EndIsAlive(IAsync& aAsync, bool& aAlive) = 0;
    virtual void SyncUpdate() = 0;
    virtual void BeginUpdate(FunctorAsync& aFunctor) = 0;
    virtual void EndUpdate(IAsync& aAsync) = 0;
    virtual void SyncActive(bool aIsSubscribe, const std::string& aRealName, const std::string& aEmail) = 0;
    virtual void BeginActive(bool aIsSubscribe, const std::string& aRealName, const std::string& aEmail, FunctorAsync& aFunctor) = 0;
    virtual void EndActive(IAsync& aAsync) = 0;
    virtual void SyncGetActiveStatus(std::string& aActiveStatus) = 0;
    virtual void BeginGetActiveStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetActiveStatus(IAsync& aAsync, std::string& aActiveStatus) = 0;
    virtual void SyncCheckUpdate() = 0;
    virtual void BeginCheckUpdate(FunctorAsync& aFunctor) = 0;
    virtual void EndCheckUpdate(IAsync& aAsync) = 0;
    virtual void SyncResetDisplay() = 0;
    virtual void BeginResetDisplay(FunctorAsync& aFunctor) = 0;
    virtual void EndResetDisplay(IAsync& aAsync) = 0;
    virtual void SyncGetHardWareInfo(std::string& aHardWareInfo) = 0;
    virtual void BeginGetHardWareInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndGetHardWareInfo(IAsync& aAsync, std::string& aHardWareInfo) = 0;
    virtual void SyncSetRoomName(const std::string& aRoomName) = 0;
    virtual void BeginSetRoomName(const std::string& aRoomName, FunctorAsync& aFunctor) = 0;
    virtual void EndSetRoomName(IAsync& aAsync) = 0;
    virtual void SyncGetVolumeControl(bool& aVolumeControl) = 0;
    virtual void BeginGetVolumeControl(FunctorAsync& aFunctor) = 0;
    virtual void EndGetVolumeControl(IAsync& aAsync, bool& aVolumeControl) = 0;
    virtual void SyncSetVolumeControl(bool aVolumeControl) = 0;
    virtual void BeginSetVolumeControl(bool aVolumeControl, FunctorAsync& aFunctor) = 0;
    virtual void EndSetVolumeControl(IAsync& aAsync) = 0;
    virtual void SyncGetWaitingTime(std::string& aWaitingTime) = 0;
    virtual void BeginGetWaitingTime(FunctorAsync& aFunctor) = 0;
    virtual void EndGetWaitingTime(IAsync& aAsync, std::string& aWaitingTime) = 0;
    virtual void SyncSetWaitingTime(const std::string& aWaitingTime) = 0;
    virtual void BeginSetWaitingTime(const std::string& aWaitingTime, FunctorAsync& aFunctor) = 0;
    virtual void EndSetWaitingTime(IAsync& aAsync) = 0;
    virtual void SyncGetOutChannel(uint32_t& aChannelNum, std::string& aCurrentChannel, std::string& aOutChannel) = 0;
    virtual void BeginGetOutChannel(FunctorAsync& aFunctor) = 0;
    virtual void EndGetOutChannel(IAsync& aAsync, uint32_t& aChannelNum, std::string& aCurrentChannel, std::string& aOutChannel) = 0;
    virtual void SyncSetOutChannel(const std::string& aChannel) = 0;
    virtual void BeginSetOutChannel(const std::string& aChannel, FunctorAsync& aFunctor) = 0;
    virtual void EndSetOutChannel(IAsync& aAsync) = 0;
    virtual void SyncSetUpnpType(const std::string& aUpnpType) = 0;
    virtual void BeginSetUpnpType(const std::string& aUpnpType, FunctorAsync& aFunctor) = 0;
    virtual void EndSetUpnpType(IAsync& aAsync) = 0;
    virtual void SyncGetUpnpType(std::string& aUpnpType) = 0;
    virtual void BeginGetUpnpType(FunctorAsync& aFunctor) = 0;
    virtual void EndGetUpnpType(IAsync& aAsync, std::string& aUpnpType) = 0;
    virtual void SyncSetDsdNativeStatus(const std::string& aStatus, const std::string& aSampleFormat) = 0;
    virtual void BeginSetDsdNativeStatus(const std::string& aStatus, const std::string& aSampleFormat, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDsdNativeStatus(IAsync& aAsync) = 0;
    virtual void SyncGetDsdNativeStatus(std::string& aStatus, std::string& aSampleFormat) = 0;
    virtual void BeginGetDsdNativeStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDsdNativeStatus(IAsync& aAsync, std::string& aStatus, std::string& aSampleFormat) = 0;
    virtual void SyncSetPasswordProtect(const std::string& aProtect, const std::string& aProtectPassword) = 0;
    virtual void BeginSetPasswordProtect(const std::string& aProtect, const std::string& aProtectPassword, FunctorAsync& aFunctor) = 0;
    virtual void EndSetPasswordProtect(IAsync& aAsync) = 0;
    virtual void SyncGetPasswordProtect(std::string& aProtect, std::string& aProtectPassword) = 0;
    virtual void BeginGetPasswordProtect(FunctorAsync& aFunctor) = 0;
    virtual void EndGetPasswordProtect(IAsync& aAsync, std::string& aProtect, std::string& aProtectPassword) = 0;
    virtual void SyncGetUpdateInfo(std::string& aVersion, std::string& aProgress) = 0;
    virtual void BeginGetUpdateInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndGetUpdateInfo(IAsync& aAsync, std::string& aVersion, std::string& aProgress) = 0;
    virtual void SyncGetWirelessList(const std::string& aInterFace, uint32_t& aNumber, std::string& aCurrentUse, std::string& aWirelessList) = 0;
    virtual void BeginGetWirelessList(const std::string& aInterFace, FunctorAsync& aFunctor) = 0;
    virtual void EndGetWirelessList(IAsync& aAsync, uint32_t& aNumber, std::string& aCurrentUse, std::string& aWirelessList) = 0;
    virtual void SyncGetIpAddress(const std::string& aInterFace, std::string& aIpAddress, std::string& aNetMask, std::string& aGateWay, std::string& aDNS, std::string& aDHCP) = 0;
    virtual void BeginGetIpAddress(const std::string& aInterFace, FunctorAsync& aFunctor) = 0;
    virtual void EndGetIpAddress(IAsync& aAsync, std::string& aIpAddress, std::string& aNetMask, std::string& aGateWay, std::string& aDNS, std::string& aDHCP) = 0;
    virtual void SyncSetNetWork(const std::string& aInterFace, const std::string& aIpAddress, const std::string& aNetMask, const std::string& aGateWay, const std::string& aDNS, const std::string& aSsid, const std::string& aPassWord, const std::string& aEncrypType) = 0;
    virtual void BeginSetNetWork(const std::string& aInterFace, const std::string& aIpAddress, const std::string& aNetMask, const std::string& aGateWay, const std::string& aDNS, const std::string& aSsid, const std::string& aPassWord, const std::string& aEncrypType, FunctorAsync& aFunctor) = 0;
    virtual void EndSetNetWork(IAsync& aAsync) = 0;
    virtual void SyncGetNetInterface(uint32_t& aInterfaceNum, std::string& aCurrentUse, std::string& aInterfaceList) = 0;
    virtual void BeginGetNetInterface(FunctorAsync& aFunctor) = 0;
    virtual void EndGetNetInterface(IAsync& aAsync, uint32_t& aInterfaceNum, std::string& aCurrentUse, std::string& aInterfaceList) = 0;
    virtual void SyncGetHaltStatus(bool& aHaltStatus) = 0;
    virtual void BeginGetHaltStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetHaltStatus(IAsync& aAsync, bool& aHaltStatus) = 0;
    virtual void SyncSetHaltStatus(bool aHaltStatus) = 0;
    virtual void BeginSetHaltStatus(bool aHaltStatus, FunctorAsync& aFunctor) = 0;
    virtual void EndSetHaltStatus(IAsync& aAsync) = 0;
    virtual void SyncGetFilterMode(std::string& aFilterMode, std::string& aFilterModeList) = 0;
    virtual void BeginGetFilterMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetFilterMode(IAsync& aAsync, std::string& aFilterMode, std::string& aFilterModeList) = 0;
    virtual void SyncSetFilterMode(const std::string& aFilterMode) = 0;
    virtual void BeginSetFilterMode(const std::string& aFilterMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetFilterMode(IAsync& aAsync) = 0;
    virtual void SyncSetSourceVisible(const std::string& aSourceName, bool aVisible) = 0;
    virtual void BeginSetSourceVisible(const std::string& aSourceName, bool aVisible, FunctorAsync& aFunctor) = 0;
    virtual void EndSetSourceVisible(IAsync& aAsync) = 0;
    virtual void SyncGetSourceVisible(std::string& aVisibleInfo) = 0;
    virtual void BeginGetSourceVisible(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSourceVisible(IAsync& aAsync, std::string& aVisibleInfo) = 0;
    virtual void SyncSetLEDMode(const std::string& aLEDMode) = 0;
    virtual void BeginSetLEDMode(const std::string& aLEDMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetLEDMode(IAsync& aAsync) = 0;
    virtual void SyncGetLEDMode(std::string& aLEDMode, std::string& aLEDModeList) = 0;
    virtual void BeginGetLEDMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetLEDMode(IAsync& aAsync, std::string& aLEDMode, std::string& aLEDModeList) = 0;
    virtual void SyncSetKeyMode(const std::string& aKeyName, const std::string& aKeyMode) = 0;
    virtual void BeginSetKeyMode(const std::string& aKeyName, const std::string& aKeyMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetKeyMode(IAsync& aAsync) = 0;
    virtual void SyncGetKeyMode(std::string& aSideKeyMode, std::string& aMiddleKeyMode, std::string& aKeyModeList) = 0;
    virtual void BeginGetKeyMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetKeyMode(IAsync& aAsync, std::string& aSideKeyMode, std::string& aMiddleKeyMode, std::string& aKeyModeList) = 0;
    virtual void SyncSetBrightness(const std::string& aBrightness) = 0;
    virtual void BeginSetBrightness(const std::string& aBrightness, FunctorAsync& aFunctor) = 0;
    virtual void EndSetBrightness(IAsync& aAsync) = 0;
    virtual void SyncGetBrightness(std::string& aBrightness, std::string& aList) = 0;
    virtual void BeginGetBrightness(FunctorAsync& aFunctor) = 0;
    virtual void EndGetBrightness(IAsync& aAsync, std::string& aBrightness, std::string& aList) = 0;
    virtual void SyncSetDisplayMode(const std::string& aDisplayMode) = 0;
    virtual void BeginSetDisplayMode(const std::string& aDisplayMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDisplayMode(IAsync& aAsync) = 0;
    virtual void SyncGetDisplayMode(std::string& aDisplayMode, std::string& aDisplayModeList) = 0;
    virtual void BeginGetDisplayMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDisplayMode(IAsync& aAsync, std::string& aDisplayMode, std::string& aDisplayModeList) = 0;
    virtual void SyncGetDACPhase(uint32_t& aPhase) = 0;
    virtual void BeginGetDACPhase(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDACPhase(IAsync& aAsync, uint32_t& aPhase) = 0;
    virtual void SyncSetDACPhase(uint32_t aPhase) = 0;
    virtual void BeginSetDACPhase(uint32_t aPhase, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDACPhase(IAsync& aAsync) = 0;
    virtual void SyncGetDACBalance(uint32_t& aBalance) = 0;
    virtual void BeginGetDACBalance(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDACBalance(IAsync& aAsync, uint32_t& aBalance) = 0;
    virtual void SyncSetDACBalance(uint32_t aBalance) = 0;
    virtual void BeginSetDACBalance(uint32_t aBalance, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDACBalance(IAsync& aAsync) = 0;
    virtual void SyncSetEnableResampler(bool aEnableResampler) = 0;
    virtual void BeginSetEnableResampler(bool aEnableResampler, FunctorAsync& aFunctor) = 0;
    virtual void EndSetEnableResampler(IAsync& aAsync) = 0;
    virtual void SyncSetEnableSpeaker(bool aEnableSpeaker) = 0;
    virtual void BeginSetEnableSpeaker(bool aEnableSpeaker, FunctorAsync& aFunctor) = 0;
    virtual void EndSetEnableSpeaker(IAsync& aAsync) = 0;
    virtual void SyncSetEnableEqualizer(bool aEnableEqualizer) = 0;
    virtual void BeginSetEnableEqualizer(bool aEnableEqualizer, FunctorAsync& aFunctor) = 0;
    virtual void EndSetEnableEqualizer(IAsync& aAsync) = 0;
    virtual void SetPropertyMessageOutChanged(Functor& aMessageOutChanged) = 0;
    virtual void PropertyMessageOut(std::string& aMessageOut) const = 0;
    virtual void SetPropertyAliveChanged(Functor& aAliveChanged) = 0;
    virtual void PropertyAlive(bool& aAlive) const = 0;
    virtual void SetPropertyCurrentActionChanged(Functor& aCurrentActionChanged) = 0;
    virtual void PropertyCurrentAction(uint32_t& aCurrentAction) const = 0;
    virtual void SetPropertyRestartChanged(Functor& aRestartChanged) = 0;
    virtual void PropertyRestart(bool& aRestart) const = 0;
    virtual void SetPropertyNumberChanged(Functor& aNumberChanged) = 0;
    virtual void PropertyNumber(uint32_t& aNumber) const = 0;
    virtual void SetPropertyRoomNameChanged(Functor& aRoomNameChanged) = 0;
    virtual void PropertyRoomName(std::string& aRoomName) const = 0;
    virtual void SetPropertyInterFaceChanged(Functor& aInterFaceChanged) = 0;
    virtual void PropertyInterFace(std::string& aInterFace) const = 0;
    virtual void SetPropertyNetMaskChanged(Functor& aNetMaskChanged) = 0;
    virtual void PropertyNetMask(std::string& aNetMask) const = 0;
    virtual void SetPropertyGateWayChanged(Functor& aGateWayChanged) = 0;
    virtual void PropertyGateWay(std::string& aGateWay) const = 0;
    virtual void SetPropertyDNSChanged(Functor& aDNSChanged) = 0;
    virtual void PropertyDNS(std::string& aDNS) const = 0;
    virtual void SetPropertyDHCPChanged(Functor& aDHCPChanged) = 0;
    virtual void PropertyDHCP(std::string& aDHCP) const = 0;
    virtual void SetPropertySsidChanged(Functor& aSsidChanged) = 0;
    virtual void PropertySsid(std::string& aSsid) const = 0;
    virtual void SetPropertyPassWordChanged(Functor& aPassWordChanged) = 0;
    virtual void PropertyPassWord(std::string& aPassWord) const = 0;
    virtual void SetPropertyEncrypTypeChanged(Functor& aEncrypTypeChanged) = 0;
    virtual void PropertyEncrypType(std::string& aEncrypType) const = 0;
    virtual void SetPropertyChannelChanged(Functor& aChannelChanged) = 0;
    virtual void PropertyChannel(std::string& aChannel) const = 0;
    virtual void SetPropertyUpnpTypeChanged(Functor& aUpnpTypeChanged) = 0;
    virtual void PropertyUpnpType(std::string& aUpnpType) const = 0;
    virtual void SetPropertyStatusChanged(Functor& aStatusChanged) = 0;
    virtual void PropertyStatus(std::string& aStatus) const = 0;
    virtual void SetPropertySampleFormatChanged(Functor& aSampleFormatChanged) = 0;
    virtual void PropertySampleFormat(std::string& aSampleFormat) const = 0;
    virtual void SetPropertyIpAddressChanged(Functor& aIpAddressChanged) = 0;
    virtual void PropertyIpAddress(std::string& aIpAddress) const = 0;
    virtual void SetPropertyProtectChanged(Functor& aProtectChanged) = 0;
    virtual void PropertyProtect(std::string& aProtect) const = 0;
    virtual void SetPropertyProtectPasswordChanged(Functor& aProtectPasswordChanged) = 0;
    virtual void PropertyProtectPassword(std::string& aProtectPassword) const = 0;
    virtual void SetPropertyActiveStatusChanged(Functor& aActiveStatusChanged) = 0;
    virtual void PropertyActiveStatus(std::string& aActiveStatus) const = 0;
    virtual void SetPropertyTimeChanged(Functor& aTimeChanged) = 0;
    virtual void PropertyTime(std::string& aTime) const = 0;
    virtual void SetPropertyVolumeControlChanged(Functor& aVolumeControlChanged) = 0;
    virtual void PropertyVolumeControl(bool& aVolumeControl) const = 0;
};

/**
 * Proxy for av.openhome.org:HardwareConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgHardwareConfig1Cpp : public ICpProxyAvOpenhomeOrgHardwareConfig1Cpp
{
public:
    /**
     * Constructor.
     *
     * Use iCpProxy::[Un]Subscribe() to enable/disable querying of state variable
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
     * @param[in]  aServiceName
     * @param[in]  aMessageIn
     * @param[out] aMessageOut
     */
    void SyncLogIn(const std::string& aServiceName, const std::string& aMessageIn, std::string& aMessageOut);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndLogIn().
     *
     * @param[in] aServiceName
     * @param[in] aMessageIn
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginLogIn(const std::string& aServiceName, const std::string& aMessageIn, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aMessageOut
     */
    void EndLogIn(IAsync& aAsync, std::string& aMessageOut);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServiceName
     */
    void SyncLogOut(const std::string& aServiceName);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndLogOut().
     *
     * @param[in] aServiceName
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginLogOut(const std::string& aServiceName, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndLogOut(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServiceName
     */
    void SyncCancelLogIn(const std::string& aServiceName);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndCancelLogIn().
     *
     * @param[in] aServiceName
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginCancelLogIn(const std::string& aServiceName, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndCancelLogIn(IAsync& aAsync);

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
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aHaltStatus
     */
    void SyncGetHaltStatus(bool& aHaltStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetHaltStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetHaltStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aHaltStatus
     */
    void EndGetHaltStatus(IAsync& aAsync, bool& aHaltStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aHaltStatus
     */
    void SyncSetHaltStatus(bool aHaltStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetHaltStatus().
     *
     * @param[in] aHaltStatus
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetHaltStatus(bool aHaltStatus, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetHaltStatus(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aFilterMode
     * @param[out] aFilterModeList
     */
    void SyncGetFilterMode(std::string& aFilterMode, std::string& aFilterModeList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetFilterMode().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetFilterMode(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aFilterMode
     * @param[out] aFilterModeList
     */
    void EndGetFilterMode(IAsync& aAsync, std::string& aFilterMode, std::string& aFilterModeList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aFilterMode
     */
    void SyncSetFilterMode(const std::string& aFilterMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetFilterMode().
     *
     * @param[in] aFilterMode
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetFilterMode(const std::string& aFilterMode, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetFilterMode(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aSourceName
     * @param[in]  aVisible
     */
    void SyncSetSourceVisible(const std::string& aSourceName, bool aVisible);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetSourceVisible().
     *
     * @param[in] aSourceName
     * @param[in] aVisible
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetSourceVisible(const std::string& aSourceName, bool aVisible, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetSourceVisible(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aVisibleInfo
     */
    void SyncGetSourceVisible(std::string& aVisibleInfo);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSourceVisible().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSourceVisible(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aVisibleInfo
     */
    void EndGetSourceVisible(IAsync& aAsync, std::string& aVisibleInfo);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aLEDMode
     */
    void SyncSetLEDMode(const std::string& aLEDMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetLEDMode().
     *
     * @param[in] aLEDMode
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetLEDMode(const std::string& aLEDMode, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetLEDMode(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aLEDMode
     * @param[out] aLEDModeList
     */
    void SyncGetLEDMode(std::string& aLEDMode, std::string& aLEDModeList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetLEDMode().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetLEDMode(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aLEDMode
     * @param[out] aLEDModeList
     */
    void EndGetLEDMode(IAsync& aAsync, std::string& aLEDMode, std::string& aLEDModeList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aKeyName
     * @param[in]  aKeyMode
     */
    void SyncSetKeyMode(const std::string& aKeyName, const std::string& aKeyMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetKeyMode().
     *
     * @param[in] aKeyName
     * @param[in] aKeyMode
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetKeyMode(const std::string& aKeyName, const std::string& aKeyMode, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetKeyMode(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSideKeyMode
     * @param[out] aMiddleKeyMode
     * @param[out] aKeyModeList
     */
    void SyncGetKeyMode(std::string& aSideKeyMode, std::string& aMiddleKeyMode, std::string& aKeyModeList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetKeyMode().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetKeyMode(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSideKeyMode
     * @param[out] aMiddleKeyMode
     * @param[out] aKeyModeList
     */
    void EndGetKeyMode(IAsync& aAsync, std::string& aSideKeyMode, std::string& aMiddleKeyMode, std::string& aKeyModeList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aBrightness
     */
    void SyncSetBrightness(const std::string& aBrightness);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetBrightness().
     *
     * @param[in] aBrightness
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetBrightness(const std::string& aBrightness, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetBrightness(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aBrightness
     * @param[out] aList
     */
    void SyncGetBrightness(std::string& aBrightness, std::string& aList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetBrightness().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetBrightness(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aBrightness
     * @param[out] aList
     */
    void EndGetBrightness(IAsync& aAsync, std::string& aBrightness, std::string& aList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDisplayMode
     */
    void SyncSetDisplayMode(const std::string& aDisplayMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetDisplayMode().
     *
     * @param[in] aDisplayMode
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetDisplayMode(const std::string& aDisplayMode, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetDisplayMode(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aDisplayMode
     * @param[out] aDisplayModeList
     */
    void SyncGetDisplayMode(std::string& aDisplayMode, std::string& aDisplayModeList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDisplayMode().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDisplayMode(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aDisplayMode
     * @param[out] aDisplayModeList
     */
    void EndGetDisplayMode(IAsync& aAsync, std::string& aDisplayMode, std::string& aDisplayModeList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aPhase
     */
    void SyncGetDACPhase(uint32_t& aPhase);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDACPhase().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDACPhase(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aPhase
     */
    void EndGetDACPhase(IAsync& aAsync, uint32_t& aPhase);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aPhase
     */
    void SyncSetDACPhase(uint32_t aPhase);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetDACPhase().
     *
     * @param[in] aPhase
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetDACPhase(uint32_t aPhase, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetDACPhase(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aBalance
     */
    void SyncGetDACBalance(uint32_t& aBalance);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDACBalance().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDACBalance(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aBalance
     */
    void EndGetDACBalance(IAsync& aAsync, uint32_t& aBalance);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aBalance
     */
    void SyncSetDACBalance(uint32_t aBalance);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetDACBalance().
     *
     * @param[in] aBalance
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetDACBalance(uint32_t aBalance, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetDACBalance(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aEnableResampler
     */
    void SyncSetEnableResampler(bool aEnableResampler);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetEnableResampler().
     *
     * @param[in] aEnableResampler
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetEnableResampler(bool aEnableResampler, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetEnableResampler(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aEnableSpeaker
     */
    void SyncSetEnableSpeaker(bool aEnableSpeaker);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetEnableSpeaker().
     *
     * @param[in] aEnableSpeaker
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetEnableSpeaker(bool aEnableSpeaker, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetEnableSpeaker(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aEnableEqualizer
     */
    void SyncSetEnableEqualizer(bool aEnableEqualizer);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetEnableEqualizer().
     *
     * @param[in] aEnableEqualizer
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetEnableEqualizer(bool aEnableEqualizer, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetEnableEqualizer(IAsync& aAsync);

    /**
     * Set a callback to be run when the MessageOut state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMessageOutChanged(Functor& aFunctor);
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
     * Query the value of the MessageOut property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMessageOut
     */
    void PropertyMessageOut(std::string& aMessageOut) const;
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
    /**
    * This function exposes the Subscribe() function of the iCpProxy member variable
    */
    void Subscribe();
    /**
    * This function exposes the Unsubscribe() function of the iCpProxy member variable
    */
    void Unsubscribe();
    /**
    * This function exposes the SetPropertyChanged() function of the iCpProxy member variable
    */
    void SetPropertyChanged(Functor& aFunctor);
    /**
    * This function exposes the SetPropertyInitialEvent() function of the iCpProxy member variable
    */
    void SetPropertyInitialEvent(Functor& aFunctor);
    /**
    * This function exposes the AddProperty() function of the iCpProxy member variable
    */
    void AddProperty(Property* aProperty);
    /**
    * This function exposes DestroyService() function of the iCpProxy member variable
    */
    void DestroyService();
    /**
    * This function exposes the REportEvent() function of the iCpProxy member variable
    */
    void ReportEvent(Functor aFunctor);
    /**
    * This function exposes the Version() function of the iCpProxy member variable
    */
    TUint Version() const;
private:
    CpProxy iCpProxy;
    void MessageOutPropertyChanged();
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
    Action* iActionLogIn;
    Action* iActionLogOut;
    Action* iActionCancelLogIn;
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
    Action* iActionGetHaltStatus;
    Action* iActionSetHaltStatus;
    Action* iActionGetFilterMode;
    Action* iActionSetFilterMode;
    Action* iActionSetSourceVisible;
    Action* iActionGetSourceVisible;
    Action* iActionSetLEDMode;
    Action* iActionGetLEDMode;
    Action* iActionSetKeyMode;
    Action* iActionGetKeyMode;
    Action* iActionSetBrightness;
    Action* iActionGetBrightness;
    Action* iActionSetDisplayMode;
    Action* iActionGetDisplayMode;
    Action* iActionGetDACPhase;
    Action* iActionSetDACPhase;
    Action* iActionGetDACBalance;
    Action* iActionSetDACBalance;
    Action* iActionSetEnableResampler;
    Action* iActionSetEnableSpeaker;
    Action* iActionSetEnableEqualizer;
    PropertyString* iMessageOut;
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
    Functor iMessageOutChanged;
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

