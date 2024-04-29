#ifndef HEADER_AVOPENHOMEORGHARDWARECONFIG1
#define HEADER_AVOPENHOMEORGHARDWARECONFIG1

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Net/Core/CpProxy.h>

namespace OpenHome {
namespace Net {

class CpDevice;
class Action;
class PropertyBinary;
class PropertyBool;
class PropertyInt;
class PropertyString;
class PropertyUint;
class CpProxy;
class ICpProxyAvOpenhomeOrgHardwareConfig1 : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgHardwareConfig1() {}
    virtual void SyncLogIn(const Brx& aServiceName, const Brx& aMessageIn, Brh& aMessageOut) = 0;
    virtual void BeginLogIn(const Brx& aServiceName, const Brx& aMessageIn, FunctorAsync& aFunctor) = 0;
    virtual void EndLogIn(IAsync& aAsync, Brh& aMessageOut) = 0;
    virtual void SyncLogOut(const Brx& aServiceName) = 0;
    virtual void BeginLogOut(const Brx& aServiceName, FunctorAsync& aFunctor) = 0;
    virtual void EndLogOut(IAsync& aAsync) = 0;
    virtual void SyncCancelLogIn(const Brx& aServiceName) = 0;
    virtual void BeginCancelLogIn(const Brx& aServiceName, FunctorAsync& aFunctor) = 0;
    virtual void EndCancelLogIn(IAsync& aAsync) = 0;
    virtual void SyncIsAlive(TBool& aAlive) = 0;
    virtual void BeginIsAlive(FunctorAsync& aFunctor) = 0;
    virtual void EndIsAlive(IAsync& aAsync, TBool& aAlive) = 0;
    virtual void SyncUpdate() = 0;
    virtual void BeginUpdate(FunctorAsync& aFunctor) = 0;
    virtual void EndUpdate(IAsync& aAsync) = 0;
    virtual void SyncActive(TBool aIsSubscribe, const Brx& aRealName, const Brx& aEmail) = 0;
    virtual void BeginActive(TBool aIsSubscribe, const Brx& aRealName, const Brx& aEmail, FunctorAsync& aFunctor) = 0;
    virtual void EndActive(IAsync& aAsync) = 0;
    virtual void SyncGetActiveStatus(Brh& aActiveStatus) = 0;
    virtual void BeginGetActiveStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetActiveStatus(IAsync& aAsync, Brh& aActiveStatus) = 0;
    virtual void SyncCheckUpdate() = 0;
    virtual void BeginCheckUpdate(FunctorAsync& aFunctor) = 0;
    virtual void EndCheckUpdate(IAsync& aAsync) = 0;
    virtual void SyncResetDisplay() = 0;
    virtual void BeginResetDisplay(FunctorAsync& aFunctor) = 0;
    virtual void EndResetDisplay(IAsync& aAsync) = 0;
    virtual void SyncGetHardWareInfo(Brh& aHardWareInfo) = 0;
    virtual void BeginGetHardWareInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndGetHardWareInfo(IAsync& aAsync, Brh& aHardWareInfo) = 0;
    virtual void SyncSetRoomName(const Brx& aRoomName) = 0;
    virtual void BeginSetRoomName(const Brx& aRoomName, FunctorAsync& aFunctor) = 0;
    virtual void EndSetRoomName(IAsync& aAsync) = 0;
    virtual void SyncGetVolumeControl(TBool& aVolumeControl) = 0;
    virtual void BeginGetVolumeControl(FunctorAsync& aFunctor) = 0;
    virtual void EndGetVolumeControl(IAsync& aAsync, TBool& aVolumeControl) = 0;
    virtual void SyncSetVolumeControl(TBool aVolumeControl) = 0;
    virtual void BeginSetVolumeControl(TBool aVolumeControl, FunctorAsync& aFunctor) = 0;
    virtual void EndSetVolumeControl(IAsync& aAsync) = 0;
    virtual void SyncGetWaitingTime(Brh& aWaitingTime) = 0;
    virtual void BeginGetWaitingTime(FunctorAsync& aFunctor) = 0;
    virtual void EndGetWaitingTime(IAsync& aAsync, Brh& aWaitingTime) = 0;
    virtual void SyncSetWaitingTime(const Brx& aWaitingTime) = 0;
    virtual void BeginSetWaitingTime(const Brx& aWaitingTime, FunctorAsync& aFunctor) = 0;
    virtual void EndSetWaitingTime(IAsync& aAsync) = 0;
    virtual void SyncGetOutChannel(TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel) = 0;
    virtual void BeginGetOutChannel(FunctorAsync& aFunctor) = 0;
    virtual void EndGetOutChannel(IAsync& aAsync, TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel) = 0;
    virtual void SyncSetOutChannel(const Brx& aChannel) = 0;
    virtual void BeginSetOutChannel(const Brx& aChannel, FunctorAsync& aFunctor) = 0;
    virtual void EndSetOutChannel(IAsync& aAsync) = 0;
    virtual void SyncSetUpnpType(const Brx& aUpnpType) = 0;
    virtual void BeginSetUpnpType(const Brx& aUpnpType, FunctorAsync& aFunctor) = 0;
    virtual void EndSetUpnpType(IAsync& aAsync) = 0;
    virtual void SyncGetUpnpType(Brh& aUpnpType) = 0;
    virtual void BeginGetUpnpType(FunctorAsync& aFunctor) = 0;
    virtual void EndGetUpnpType(IAsync& aAsync, Brh& aUpnpType) = 0;
    virtual void SyncSetDsdNativeStatus(const Brx& aStatus, const Brx& aSampleFormat) = 0;
    virtual void BeginSetDsdNativeStatus(const Brx& aStatus, const Brx& aSampleFormat, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDsdNativeStatus(IAsync& aAsync) = 0;
    virtual void SyncGetDsdNativeStatus(Brh& aStatus, Brh& aSampleFormat) = 0;
    virtual void BeginGetDsdNativeStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDsdNativeStatus(IAsync& aAsync, Brh& aStatus, Brh& aSampleFormat) = 0;
    virtual void SyncSetPasswordProtect(const Brx& aProtect, const Brx& aProtectPassword) = 0;
    virtual void BeginSetPasswordProtect(const Brx& aProtect, const Brx& aProtectPassword, FunctorAsync& aFunctor) = 0;
    virtual void EndSetPasswordProtect(IAsync& aAsync) = 0;
    virtual void SyncGetPasswordProtect(Brh& aProtect, Brh& aProtectPassword) = 0;
    virtual void BeginGetPasswordProtect(FunctorAsync& aFunctor) = 0;
    virtual void EndGetPasswordProtect(IAsync& aAsync, Brh& aProtect, Brh& aProtectPassword) = 0;
    virtual void SyncGetUpdateInfo(Brh& aVersion, Brh& aProgress) = 0;
    virtual void BeginGetUpdateInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndGetUpdateInfo(IAsync& aAsync, Brh& aVersion, Brh& aProgress) = 0;
    virtual void SyncGetWirelessList(const Brx& aInterFace, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList) = 0;
    virtual void BeginGetWirelessList(const Brx& aInterFace, FunctorAsync& aFunctor) = 0;
    virtual void EndGetWirelessList(IAsync& aAsync, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList) = 0;
    virtual void SyncGetIpAddress(const Brx& aInterFace, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP) = 0;
    virtual void BeginGetIpAddress(const Brx& aInterFace, FunctorAsync& aFunctor) = 0;
    virtual void EndGetIpAddress(IAsync& aAsync, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP) = 0;
    virtual void SyncSetNetWork(const Brx& aInterFace, const Brx& aIpAddress, const Brx& aNetMask, const Brx& aGateWay, const Brx& aDNS, const Brx& aSsid, const Brx& aPassWord, const Brx& aEncrypType) = 0;
    virtual void BeginSetNetWork(const Brx& aInterFace, const Brx& aIpAddress, const Brx& aNetMask, const Brx& aGateWay, const Brx& aDNS, const Brx& aSsid, const Brx& aPassWord, const Brx& aEncrypType, FunctorAsync& aFunctor) = 0;
    virtual void EndSetNetWork(IAsync& aAsync) = 0;
    virtual void SyncGetNetInterface(TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList) = 0;
    virtual void BeginGetNetInterface(FunctorAsync& aFunctor) = 0;
    virtual void EndGetNetInterface(IAsync& aAsync, TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList) = 0;
    virtual void SyncGetHaltStatus(TBool& aHaltStatus) = 0;
    virtual void BeginGetHaltStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetHaltStatus(IAsync& aAsync, TBool& aHaltStatus) = 0;
    virtual void SyncSetHaltStatus(TBool aHaltStatus) = 0;
    virtual void BeginSetHaltStatus(TBool aHaltStatus, FunctorAsync& aFunctor) = 0;
    virtual void EndSetHaltStatus(IAsync& aAsync) = 0;
    virtual void SyncGetFilterMode(Brh& aFilterMode, Brh& aFilterModeList) = 0;
    virtual void BeginGetFilterMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetFilterMode(IAsync& aAsync, Brh& aFilterMode, Brh& aFilterModeList) = 0;
    virtual void SyncSetFilterMode(const Brx& aFilterMode) = 0;
    virtual void BeginSetFilterMode(const Brx& aFilterMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetFilterMode(IAsync& aAsync) = 0;
    virtual void SyncSetSourceVisible(const Brx& aSourceName, TBool aVisible) = 0;
    virtual void BeginSetSourceVisible(const Brx& aSourceName, TBool aVisible, FunctorAsync& aFunctor) = 0;
    virtual void EndSetSourceVisible(IAsync& aAsync) = 0;
    virtual void SyncGetSourceVisible(Brh& aVisibleInfo) = 0;
    virtual void BeginGetSourceVisible(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSourceVisible(IAsync& aAsync, Brh& aVisibleInfo) = 0;
    virtual void SyncSetLEDMode(const Brx& aLEDMode) = 0;
    virtual void BeginSetLEDMode(const Brx& aLEDMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetLEDMode(IAsync& aAsync) = 0;
    virtual void SyncGetLEDMode(Brh& aLEDMode, Brh& aLEDModeList) = 0;
    virtual void BeginGetLEDMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetLEDMode(IAsync& aAsync, Brh& aLEDMode, Brh& aLEDModeList) = 0;
    virtual void SyncSetKeyMode(const Brx& aKeyName, const Brx& aKeyMode) = 0;
    virtual void BeginSetKeyMode(const Brx& aKeyName, const Brx& aKeyMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetKeyMode(IAsync& aAsync) = 0;
    virtual void SyncGetKeyMode(Brh& aSideKeyMode, Brh& aMiddleKeyMode, Brh& aKeyModeList) = 0;
    virtual void BeginGetKeyMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetKeyMode(IAsync& aAsync, Brh& aSideKeyMode, Brh& aMiddleKeyMode, Brh& aKeyModeList) = 0;
    virtual void SyncSetBrightness(const Brx& aBrightness) = 0;
    virtual void BeginSetBrightness(const Brx& aBrightness, FunctorAsync& aFunctor) = 0;
    virtual void EndSetBrightness(IAsync& aAsync) = 0;
    virtual void SyncGetBrightness(Brh& aBrightness, Brh& aList) = 0;
    virtual void BeginGetBrightness(FunctorAsync& aFunctor) = 0;
    virtual void EndGetBrightness(IAsync& aAsync, Brh& aBrightness, Brh& aList) = 0;
    virtual void SyncSetDisplayMode(const Brx& aDisplayMode) = 0;
    virtual void BeginSetDisplayMode(const Brx& aDisplayMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDisplayMode(IAsync& aAsync) = 0;
    virtual void SyncGetDisplayMode(Brh& aDisplayMode, Brh& aDisplayModeList) = 0;
    virtual void BeginGetDisplayMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDisplayMode(IAsync& aAsync, Brh& aDisplayMode, Brh& aDisplayModeList) = 0;
    virtual void SyncGetDACPhase(TUint& aPhase) = 0;
    virtual void BeginGetDACPhase(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDACPhase(IAsync& aAsync, TUint& aPhase) = 0;
    virtual void SyncSetDACPhase(TUint aPhase) = 0;
    virtual void BeginSetDACPhase(TUint aPhase, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDACPhase(IAsync& aAsync) = 0;
    virtual void SyncGetDACBalance(TUint& aBalance) = 0;
    virtual void BeginGetDACBalance(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDACBalance(IAsync& aAsync, TUint& aBalance) = 0;
    virtual void SyncSetDACBalance(TUint aBalance) = 0;
    virtual void BeginSetDACBalance(TUint aBalance, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDACBalance(IAsync& aAsync) = 0;
    virtual void SyncSetEnableResampler(TBool aEnableResampler) = 0;
    virtual void BeginSetEnableResampler(TBool aEnableResampler, FunctorAsync& aFunctor) = 0;
    virtual void EndSetEnableResampler(IAsync& aAsync) = 0;
    virtual void SyncSetEnableSpeaker(TBool aEnableSpeaker) = 0;
    virtual void BeginSetEnableSpeaker(TBool aEnableSpeaker, FunctorAsync& aFunctor) = 0;
    virtual void EndSetEnableSpeaker(IAsync& aAsync) = 0;
    virtual void SyncSetEnableEqualizer(TBool aEnableEqualizer) = 0;
    virtual void BeginSetEnableEqualizer(TBool aEnableEqualizer, FunctorAsync& aFunctor) = 0;
    virtual void EndSetEnableEqualizer(IAsync& aAsync) = 0;
    virtual void SyncSetEnableDirac(TBool aEnableDirac) = 0;
    virtual void BeginSetEnableDirac(TBool aEnableDirac, FunctorAsync& aFunctor) = 0;
    virtual void EndSetEnableDirac(IAsync& aAsync) = 0;
    virtual void SetPropertyMessageOutChanged(Functor& aMessageOutChanged) = 0;
    virtual void PropertyMessageOut(Brhz& aMessageOut) const = 0;
    virtual void SetPropertyAliveChanged(Functor& aAliveChanged) = 0;
    virtual void PropertyAlive(TBool& aAlive) const = 0;
    virtual void SetPropertyCurrentActionChanged(Functor& aCurrentActionChanged) = 0;
    virtual void PropertyCurrentAction(TUint& aCurrentAction) const = 0;
    virtual void SetPropertyRestartChanged(Functor& aRestartChanged) = 0;
    virtual void PropertyRestart(TBool& aRestart) const = 0;
    virtual void SetPropertyNumberChanged(Functor& aNumberChanged) = 0;
    virtual void PropertyNumber(TUint& aNumber) const = 0;
    virtual void SetPropertyRoomNameChanged(Functor& aRoomNameChanged) = 0;
    virtual void PropertyRoomName(Brhz& aRoomName) const = 0;
    virtual void SetPropertyInterFaceChanged(Functor& aInterFaceChanged) = 0;
    virtual void PropertyInterFace(Brhz& aInterFace) const = 0;
    virtual void SetPropertyNetMaskChanged(Functor& aNetMaskChanged) = 0;
    virtual void PropertyNetMask(Brhz& aNetMask) const = 0;
    virtual void SetPropertyGateWayChanged(Functor& aGateWayChanged) = 0;
    virtual void PropertyGateWay(Brhz& aGateWay) const = 0;
    virtual void SetPropertyDNSChanged(Functor& aDNSChanged) = 0;
    virtual void PropertyDNS(Brhz& aDNS) const = 0;
    virtual void SetPropertyDHCPChanged(Functor& aDHCPChanged) = 0;
    virtual void PropertyDHCP(Brhz& aDHCP) const = 0;
    virtual void SetPropertySsidChanged(Functor& aSsidChanged) = 0;
    virtual void PropertySsid(Brhz& aSsid) const = 0;
    virtual void SetPropertyPassWordChanged(Functor& aPassWordChanged) = 0;
    virtual void PropertyPassWord(Brhz& aPassWord) const = 0;
    virtual void SetPropertyEncrypTypeChanged(Functor& aEncrypTypeChanged) = 0;
    virtual void PropertyEncrypType(Brhz& aEncrypType) const = 0;
    virtual void SetPropertyChannelChanged(Functor& aChannelChanged) = 0;
    virtual void PropertyChannel(Brhz& aChannel) const = 0;
    virtual void SetPropertyUpnpTypeChanged(Functor& aUpnpTypeChanged) = 0;
    virtual void PropertyUpnpType(Brhz& aUpnpType) const = 0;
    virtual void SetPropertyStatusChanged(Functor& aStatusChanged) = 0;
    virtual void PropertyStatus(Brhz& aStatus) const = 0;
    virtual void SetPropertySampleFormatChanged(Functor& aSampleFormatChanged) = 0;
    virtual void PropertySampleFormat(Brhz& aSampleFormat) const = 0;
    virtual void SetPropertyIpAddressChanged(Functor& aIpAddressChanged) = 0;
    virtual void PropertyIpAddress(Brhz& aIpAddress) const = 0;
    virtual void SetPropertyProtectChanged(Functor& aProtectChanged) = 0;
    virtual void PropertyProtect(Brhz& aProtect) const = 0;
    virtual void SetPropertyProtectPasswordChanged(Functor& aProtectPasswordChanged) = 0;
    virtual void PropertyProtectPassword(Brhz& aProtectPassword) const = 0;
    virtual void SetPropertyActiveStatusChanged(Functor& aActiveStatusChanged) = 0;
    virtual void PropertyActiveStatus(Brhz& aActiveStatus) const = 0;
    virtual void SetPropertyTimeChanged(Functor& aTimeChanged) = 0;
    virtual void PropertyTime(Brhz& aTime) const = 0;
    virtual void SetPropertyVolumeControlChanged(Functor& aVolumeControlChanged) = 0;
    virtual void PropertyVolumeControl(TBool& aVolumeControl) const = 0;
};

/**
 * Proxy for av.openhome.org:HardwareConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgHardwareConfig1 : public ICpProxyAvOpenhomeOrgHardwareConfig1
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
    CpProxyAvOpenhomeOrgHardwareConfig1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgHardwareConfig1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServiceName
     * @param[in]  aMessageIn
     * @param[out] aMessageOut
     */
    void SyncLogIn(const Brx& aServiceName, const Brx& aMessageIn, Brh& aMessageOut);
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
    void BeginLogIn(const Brx& aServiceName, const Brx& aMessageIn, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aMessageOut
     */
    void EndLogIn(IAsync& aAsync, Brh& aMessageOut);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServiceName
     */
    void SyncLogOut(const Brx& aServiceName);
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
    void BeginLogOut(const Brx& aServiceName, FunctorAsync& aFunctor);
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
    void SyncCancelLogIn(const Brx& aServiceName);
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
    void BeginCancelLogIn(const Brx& aServiceName, FunctorAsync& aFunctor);
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
    void SyncIsAlive(TBool& aAlive);
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
    void EndIsAlive(IAsync& aAsync, TBool& aAlive);

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
    void SyncActive(TBool aIsSubscribe, const Brx& aRealName, const Brx& aEmail);
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
    void BeginActive(TBool aIsSubscribe, const Brx& aRealName, const Brx& aEmail, FunctorAsync& aFunctor);
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
    void SyncGetActiveStatus(Brh& aActiveStatus);
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
    void EndGetActiveStatus(IAsync& aAsync, Brh& aActiveStatus);

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
    void SyncGetHardWareInfo(Brh& aHardWareInfo);
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
    void EndGetHardWareInfo(IAsync& aAsync, Brh& aHardWareInfo);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRoomName
     */
    void SyncSetRoomName(const Brx& aRoomName);
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
    void BeginSetRoomName(const Brx& aRoomName, FunctorAsync& aFunctor);
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
    void SyncGetVolumeControl(TBool& aVolumeControl);
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
    void EndGetVolumeControl(IAsync& aAsync, TBool& aVolumeControl);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aVolumeControl
     */
    void SyncSetVolumeControl(TBool aVolumeControl);
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
    void BeginSetVolumeControl(TBool aVolumeControl, FunctorAsync& aFunctor);
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
    void SyncGetWaitingTime(Brh& aWaitingTime);
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
    void EndGetWaitingTime(IAsync& aAsync, Brh& aWaitingTime);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aWaitingTime
     */
    void SyncSetWaitingTime(const Brx& aWaitingTime);
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
    void BeginSetWaitingTime(const Brx& aWaitingTime, FunctorAsync& aFunctor);
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
    void SyncGetOutChannel(TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel);
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
    void EndGetOutChannel(IAsync& aAsync, TUint& aChannelNum, Brh& aCurrentChannel, Brh& aOutChannel);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aChannel
     */
    void SyncSetOutChannel(const Brx& aChannel);
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
    void BeginSetOutChannel(const Brx& aChannel, FunctorAsync& aFunctor);
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
    void SyncSetUpnpType(const Brx& aUpnpType);
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
    void BeginSetUpnpType(const Brx& aUpnpType, FunctorAsync& aFunctor);
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
    void SyncGetUpnpType(Brh& aUpnpType);
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
    void EndGetUpnpType(IAsync& aAsync, Brh& aUpnpType);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aStatus
     * @param[in]  aSampleFormat
     */
    void SyncSetDsdNativeStatus(const Brx& aStatus, const Brx& aSampleFormat);
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
    void BeginSetDsdNativeStatus(const Brx& aStatus, const Brx& aSampleFormat, FunctorAsync& aFunctor);
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
    void SyncGetDsdNativeStatus(Brh& aStatus, Brh& aSampleFormat);
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
    void EndGetDsdNativeStatus(IAsync& aAsync, Brh& aStatus, Brh& aSampleFormat);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aProtect
     * @param[in]  aProtectPassword
     */
    void SyncSetPasswordProtect(const Brx& aProtect, const Brx& aProtectPassword);
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
    void BeginSetPasswordProtect(const Brx& aProtect, const Brx& aProtectPassword, FunctorAsync& aFunctor);
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
    void SyncGetPasswordProtect(Brh& aProtect, Brh& aProtectPassword);
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
    void EndGetPasswordProtect(IAsync& aAsync, Brh& aProtect, Brh& aProtectPassword);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aVersion
     * @param[out] aProgress
     */
    void SyncGetUpdateInfo(Brh& aVersion, Brh& aProgress);
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
    void EndGetUpdateInfo(IAsync& aAsync, Brh& aVersion, Brh& aProgress);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInterFace
     * @param[out] aNumber
     * @param[out] aCurrentUse
     * @param[out] aWirelessList
     */
    void SyncGetWirelessList(const Brx& aInterFace, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList);
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
    void BeginGetWirelessList(const Brx& aInterFace, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNumber
     * @param[out] aCurrentUse
     * @param[out] aWirelessList
     */
    void EndGetWirelessList(IAsync& aAsync, TUint& aNumber, Brh& aCurrentUse, Brh& aWirelessList);

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
    void SyncGetIpAddress(const Brx& aInterFace, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP);
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
    void BeginGetIpAddress(const Brx& aInterFace, FunctorAsync& aFunctor);
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
    void EndGetIpAddress(IAsync& aAsync, Brh& aIpAddress, Brh& aNetMask, Brh& aGateWay, Brh& aDNS, Brh& aDHCP);

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
    void SyncSetNetWork(const Brx& aInterFace, const Brx& aIpAddress, const Brx& aNetMask, const Brx& aGateWay, const Brx& aDNS, const Brx& aSsid, const Brx& aPassWord, const Brx& aEncrypType);
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
    void BeginSetNetWork(const Brx& aInterFace, const Brx& aIpAddress, const Brx& aNetMask, const Brx& aGateWay, const Brx& aDNS, const Brx& aSsid, const Brx& aPassWord, const Brx& aEncrypType, FunctorAsync& aFunctor);
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
    void SyncGetNetInterface(TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList);
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
    void EndGetNetInterface(IAsync& aAsync, TUint& aInterfaceNum, Brh& aCurrentUse, Brh& aInterfaceList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aHaltStatus
     */
    void SyncGetHaltStatus(TBool& aHaltStatus);
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
    void EndGetHaltStatus(IAsync& aAsync, TBool& aHaltStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aHaltStatus
     */
    void SyncSetHaltStatus(TBool aHaltStatus);
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
    void BeginSetHaltStatus(TBool aHaltStatus, FunctorAsync& aFunctor);
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
    void SyncGetFilterMode(Brh& aFilterMode, Brh& aFilterModeList);
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
    void EndGetFilterMode(IAsync& aAsync, Brh& aFilterMode, Brh& aFilterModeList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aFilterMode
     */
    void SyncSetFilterMode(const Brx& aFilterMode);
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
    void BeginSetFilterMode(const Brx& aFilterMode, FunctorAsync& aFunctor);
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
    void SyncSetSourceVisible(const Brx& aSourceName, TBool aVisible);
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
    void BeginSetSourceVisible(const Brx& aSourceName, TBool aVisible, FunctorAsync& aFunctor);
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
    void SyncGetSourceVisible(Brh& aVisibleInfo);
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
    void EndGetSourceVisible(IAsync& aAsync, Brh& aVisibleInfo);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aLEDMode
     */
    void SyncSetLEDMode(const Brx& aLEDMode);
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
    void BeginSetLEDMode(const Brx& aLEDMode, FunctorAsync& aFunctor);
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
    void SyncGetLEDMode(Brh& aLEDMode, Brh& aLEDModeList);
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
    void EndGetLEDMode(IAsync& aAsync, Brh& aLEDMode, Brh& aLEDModeList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aKeyName
     * @param[in]  aKeyMode
     */
    void SyncSetKeyMode(const Brx& aKeyName, const Brx& aKeyMode);
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
    void BeginSetKeyMode(const Brx& aKeyName, const Brx& aKeyMode, FunctorAsync& aFunctor);
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
    void SyncGetKeyMode(Brh& aSideKeyMode, Brh& aMiddleKeyMode, Brh& aKeyModeList);
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
    void EndGetKeyMode(IAsync& aAsync, Brh& aSideKeyMode, Brh& aMiddleKeyMode, Brh& aKeyModeList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aBrightness
     */
    void SyncSetBrightness(const Brx& aBrightness);
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
    void BeginSetBrightness(const Brx& aBrightness, FunctorAsync& aFunctor);
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
    void SyncGetBrightness(Brh& aBrightness, Brh& aList);
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
    void EndGetBrightness(IAsync& aAsync, Brh& aBrightness, Brh& aList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDisplayMode
     */
    void SyncSetDisplayMode(const Brx& aDisplayMode);
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
    void BeginSetDisplayMode(const Brx& aDisplayMode, FunctorAsync& aFunctor);
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
    void SyncGetDisplayMode(Brh& aDisplayMode, Brh& aDisplayModeList);
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
    void EndGetDisplayMode(IAsync& aAsync, Brh& aDisplayMode, Brh& aDisplayModeList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aPhase
     */
    void SyncGetDACPhase(TUint& aPhase);
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
    void EndGetDACPhase(IAsync& aAsync, TUint& aPhase);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aPhase
     */
    void SyncSetDACPhase(TUint aPhase);
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
    void BeginSetDACPhase(TUint aPhase, FunctorAsync& aFunctor);
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
    void SyncGetDACBalance(TUint& aBalance);
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
    void EndGetDACBalance(IAsync& aAsync, TUint& aBalance);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aBalance
     */
    void SyncSetDACBalance(TUint aBalance);
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
    void BeginSetDACBalance(TUint aBalance, FunctorAsync& aFunctor);
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
    void SyncSetEnableResampler(TBool aEnableResampler);
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
    void BeginSetEnableResampler(TBool aEnableResampler, FunctorAsync& aFunctor);
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
    void SyncSetEnableSpeaker(TBool aEnableSpeaker);
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
    void BeginSetEnableSpeaker(TBool aEnableSpeaker, FunctorAsync& aFunctor);
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
    void SyncSetEnableEqualizer(TBool aEnableEqualizer);
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
    void BeginSetEnableEqualizer(TBool aEnableEqualizer, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetEnableEqualizer(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aEnableDirac
     */
    void SyncSetEnableDirac(TBool aEnableDirac);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetEnableDirac().
     *
     * @param[in] aEnableDirac
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetEnableDirac(TBool aEnableDirac, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetEnableDirac(IAsync& aAsync);

    /**
     * Set a callback to be run when the MessageOut state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMessageOutChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Alive state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAliveChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CurrentAction state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCurrentActionChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Restart state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRestartChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Number state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyNumberChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the RoomName state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRoomNameChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the InterFace state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyInterFaceChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the NetMask state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyNetMaskChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the GateWay state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyGateWayChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the DNS state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDNSChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the DHCP state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDHCPChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Ssid state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySsidChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the PassWord state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPassWordChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the EncrypType state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyEncrypTypeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Channel state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyChannelChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpnpType state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpnpTypeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Status state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SampleFormat state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySampleFormatChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the IpAddress state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIpAddressChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Protect state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyProtectChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ProtectPassword state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyProtectPasswordChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ActiveStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyActiveStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Time state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyTimeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeControl state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgHardwareConfig1 instance will not overlap.
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
    void PropertyMessageOut(Brhz& aMessageOut) const;
    /**
     * Query the value of the Alive property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAlive
     */
    void PropertyAlive(TBool& aAlive) const;
    /**
     * Query the value of the CurrentAction property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCurrentAction
     */
    void PropertyCurrentAction(TUint& aCurrentAction) const;
    /**
     * Query the value of the Restart property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRestart
     */
    void PropertyRestart(TBool& aRestart) const;
    /**
     * Query the value of the Number property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aNumber
     */
    void PropertyNumber(TUint& aNumber) const;
    /**
     * Query the value of the RoomName property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRoomName
     */
    void PropertyRoomName(Brhz& aRoomName) const;
    /**
     * Query the value of the InterFace property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aInterFace
     */
    void PropertyInterFace(Brhz& aInterFace) const;
    /**
     * Query the value of the NetMask property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aNetMask
     */
    void PropertyNetMask(Brhz& aNetMask) const;
    /**
     * Query the value of the GateWay property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aGateWay
     */
    void PropertyGateWay(Brhz& aGateWay) const;
    /**
     * Query the value of the DNS property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDNS
     */
    void PropertyDNS(Brhz& aDNS) const;
    /**
     * Query the value of the DHCP property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDHCP
     */
    void PropertyDHCP(Brhz& aDHCP) const;
    /**
     * Query the value of the Ssid property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSsid
     */
    void PropertySsid(Brhz& aSsid) const;
    /**
     * Query the value of the PassWord property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPassWord
     */
    void PropertyPassWord(Brhz& aPassWord) const;
    /**
     * Query the value of the EncrypType property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aEncrypType
     */
    void PropertyEncrypType(Brhz& aEncrypType) const;
    /**
     * Query the value of the Channel property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aChannel
     */
    void PropertyChannel(Brhz& aChannel) const;
    /**
     * Query the value of the UpnpType property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpnpType
     */
    void PropertyUpnpType(Brhz& aUpnpType) const;
    /**
     * Query the value of the Status property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aStatus
     */
    void PropertyStatus(Brhz& aStatus) const;
    /**
     * Query the value of the SampleFormat property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSampleFormat
     */
    void PropertySampleFormat(Brhz& aSampleFormat) const;
    /**
     * Query the value of the IpAddress property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aIpAddress
     */
    void PropertyIpAddress(Brhz& aIpAddress) const;
    /**
     * Query the value of the Protect property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aProtect
     */
    void PropertyProtect(Brhz& aProtect) const;
    /**
     * Query the value of the ProtectPassword property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aProtectPassword
     */
    void PropertyProtectPassword(Brhz& aProtectPassword) const;
    /**
     * Query the value of the ActiveStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aActiveStatus
     */
    void PropertyActiveStatus(Brhz& aActiveStatus) const;
    /**
     * Query the value of the Time property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aTime
     */
    void PropertyTime(Brhz& aTime) const;
    /**
     * Query the value of the VolumeControl property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeControl
     */
    void PropertyVolumeControl(TBool& aVolumeControl) const;
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
    Action* iActionSetEnableDirac;
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

#endif // HEADER_AVOPENHOMEORGHARDWARECONFIG1

