#ifndef HEADER_DVAVOPENHOMEORGHARDWARECONFIG1
#define HEADER_DVAVOPENHOMEORGHARDWARECONFIG1

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Core/DvDevice.h>
#include <OpenHome/Net/Core/DvProvider.h>

namespace OpenHome {
namespace Net {

class DviDevice;
class IDviInvocation;
class PropertyInt;
class PropertyUint;
class PropertyBool;
class PropertyString;
class PropertyBinary;

/**
 * Provider for the av.openhome.org:HardwareConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgHardwareConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgHardwareConfig1() {}
    /**
     * Set the value of the Alive property
     *
     * Can only be called if EnablePropertyAlive has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyAlive(TBool aValue);
    /**
     * Get a copy of the value of the Alive property
     *
     * Can only be called if EnablePropertyAlive has previously been called.
     */
    void GetPropertyAlive(TBool& aValue);
    /**
     * Set the value of the CurrentAction property
     *
     * Can only be called if EnablePropertyCurrentAction has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyCurrentAction(TUint aValue);
    /**
     * Get a copy of the value of the CurrentAction property
     *
     * Can only be called if EnablePropertyCurrentAction has previously been called.
     */
    void GetPropertyCurrentAction(TUint& aValue);
    /**
     * Set the value of the Restart property
     *
     * Can only be called if EnablePropertyRestart has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyRestart(TBool aValue);
    /**
     * Get a copy of the value of the Restart property
     *
     * Can only be called if EnablePropertyRestart has previously been called.
     */
    void GetPropertyRestart(TBool& aValue);
    /**
     * Set the value of the Number property
     *
     * Can only be called if EnablePropertyNumber has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyNumber(TUint aValue);
    /**
     * Get a copy of the value of the Number property
     *
     * Can only be called if EnablePropertyNumber has previously been called.
     */
    void GetPropertyNumber(TUint& aValue);
    /**
     * Set the value of the RoomName property
     *
     * Can only be called if EnablePropertyRoomName has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyRoomName(const Brx& aValue);
    /**
     * Get a copy of the value of the RoomName property
     *
     * Can only be called if EnablePropertyRoomName has previously been called.
     */
    void GetPropertyRoomName(Brhz& aValue);
    /**
     * Set the value of the InterFace property
     *
     * Can only be called if EnablePropertyInterFace has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyInterFace(const Brx& aValue);
    /**
     * Get a copy of the value of the InterFace property
     *
     * Can only be called if EnablePropertyInterFace has previously been called.
     */
    void GetPropertyInterFace(Brhz& aValue);
    /**
     * Set the value of the NetMask property
     *
     * Can only be called if EnablePropertyNetMask has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyNetMask(const Brx& aValue);
    /**
     * Get a copy of the value of the NetMask property
     *
     * Can only be called if EnablePropertyNetMask has previously been called.
     */
    void GetPropertyNetMask(Brhz& aValue);
    /**
     * Set the value of the GateWay property
     *
     * Can only be called if EnablePropertyGateWay has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyGateWay(const Brx& aValue);
    /**
     * Get a copy of the value of the GateWay property
     *
     * Can only be called if EnablePropertyGateWay has previously been called.
     */
    void GetPropertyGateWay(Brhz& aValue);
    /**
     * Set the value of the DNS property
     *
     * Can only be called if EnablePropertyDNS has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyDNS(const Brx& aValue);
    /**
     * Get a copy of the value of the DNS property
     *
     * Can only be called if EnablePropertyDNS has previously been called.
     */
    void GetPropertyDNS(Brhz& aValue);
    /**
     * Set the value of the DHCP property
     *
     * Can only be called if EnablePropertyDHCP has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyDHCP(const Brx& aValue);
    /**
     * Get a copy of the value of the DHCP property
     *
     * Can only be called if EnablePropertyDHCP has previously been called.
     */
    void GetPropertyDHCP(Brhz& aValue);
    /**
     * Set the value of the Ssid property
     *
     * Can only be called if EnablePropertySsid has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertySsid(const Brx& aValue);
    /**
     * Get a copy of the value of the Ssid property
     *
     * Can only be called if EnablePropertySsid has previously been called.
     */
    void GetPropertySsid(Brhz& aValue);
    /**
     * Set the value of the PassWord property
     *
     * Can only be called if EnablePropertyPassWord has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyPassWord(const Brx& aValue);
    /**
     * Get a copy of the value of the PassWord property
     *
     * Can only be called if EnablePropertyPassWord has previously been called.
     */
    void GetPropertyPassWord(Brhz& aValue);
    /**
     * Set the value of the EncrypType property
     *
     * Can only be called if EnablePropertyEncrypType has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyEncrypType(const Brx& aValue);
    /**
     * Get a copy of the value of the EncrypType property
     *
     * Can only be called if EnablePropertyEncrypType has previously been called.
     */
    void GetPropertyEncrypType(Brhz& aValue);
    /**
     * Set the value of the Channel property
     *
     * Can only be called if EnablePropertyChannel has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyChannel(const Brx& aValue);
    /**
     * Get a copy of the value of the Channel property
     *
     * Can only be called if EnablePropertyChannel has previously been called.
     */
    void GetPropertyChannel(Brhz& aValue);
    /**
     * Set the value of the UpnpType property
     *
     * Can only be called if EnablePropertyUpnpType has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyUpnpType(const Brx& aValue);
    /**
     * Get a copy of the value of the UpnpType property
     *
     * Can only be called if EnablePropertyUpnpType has previously been called.
     */
    void GetPropertyUpnpType(Brhz& aValue);
    /**
     * Set the value of the Status property
     *
     * Can only be called if EnablePropertyStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyStatus(const Brx& aValue);
    /**
     * Get a copy of the value of the Status property
     *
     * Can only be called if EnablePropertyStatus has previously been called.
     */
    void GetPropertyStatus(Brhz& aValue);
    /**
     * Set the value of the SampleFormat property
     *
     * Can only be called if EnablePropertySampleFormat has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertySampleFormat(const Brx& aValue);
    /**
     * Get a copy of the value of the SampleFormat property
     *
     * Can only be called if EnablePropertySampleFormat has previously been called.
     */
    void GetPropertySampleFormat(Brhz& aValue);
    /**
     * Set the value of the IpAddress property
     *
     * Can only be called if EnablePropertyIpAddress has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyIpAddress(const Brx& aValue);
    /**
     * Get a copy of the value of the IpAddress property
     *
     * Can only be called if EnablePropertyIpAddress has previously been called.
     */
    void GetPropertyIpAddress(Brhz& aValue);
    /**
     * Set the value of the Protect property
     *
     * Can only be called if EnablePropertyProtect has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyProtect(const Brx& aValue);
    /**
     * Get a copy of the value of the Protect property
     *
     * Can only be called if EnablePropertyProtect has previously been called.
     */
    void GetPropertyProtect(Brhz& aValue);
    /**
     * Set the value of the ProtectPassword property
     *
     * Can only be called if EnablePropertyProtectPassword has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyProtectPassword(const Brx& aValue);
    /**
     * Get a copy of the value of the ProtectPassword property
     *
     * Can only be called if EnablePropertyProtectPassword has previously been called.
     */
    void GetPropertyProtectPassword(Brhz& aValue);
    /**
     * Set the value of the ActiveStatus property
     *
     * Can only be called if EnablePropertyActiveStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyActiveStatus(const Brx& aValue);
    /**
     * Get a copy of the value of the ActiveStatus property
     *
     * Can only be called if EnablePropertyActiveStatus has previously been called.
     */
    void GetPropertyActiveStatus(Brhz& aValue);
    /**
     * Set the value of the Time property
     *
     * Can only be called if EnablePropertyTime has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyTime(const Brx& aValue);
    /**
     * Get a copy of the value of the Time property
     *
     * Can only be called if EnablePropertyTime has previously been called.
     */
    void GetPropertyTime(Brhz& aValue);
    /**
     * Set the value of the VolumeControl property
     *
     * Can only be called if EnablePropertyVolumeControl has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyVolumeControl(TBool aValue);
    /**
     * Get a copy of the value of the VolumeControl property
     *
     * Can only be called if EnablePropertyVolumeControl has previously been called.
     */
    void GetPropertyVolumeControl(TBool& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgHardwareConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgHardwareConfig1(DviDevice& aDevice);
    /**
     * Enable the Alive property.
     */
    void EnablePropertyAlive();
    /**
     * Enable the CurrentAction property.
     */
    void EnablePropertyCurrentAction();
    /**
     * Enable the Restart property.
     */
    void EnablePropertyRestart();
    /**
     * Enable the Number property.
     */
    void EnablePropertyNumber();
    /**
     * Enable the RoomName property.
     */
    void EnablePropertyRoomName();
    /**
     * Enable the InterFace property.
     */
    void EnablePropertyInterFace();
    /**
     * Enable the NetMask property.
     */
    void EnablePropertyNetMask();
    /**
     * Enable the GateWay property.
     */
    void EnablePropertyGateWay();
    /**
     * Enable the DNS property.
     */
    void EnablePropertyDNS();
    /**
     * Enable the DHCP property.
     */
    void EnablePropertyDHCP();
    /**
     * Enable the Ssid property.
     */
    void EnablePropertySsid();
    /**
     * Enable the PassWord property.
     */
    void EnablePropertyPassWord();
    /**
     * Enable the EncrypType property.
     */
    void EnablePropertyEncrypType();
    /**
     * Enable the Channel property.
     */
    void EnablePropertyChannel();
    /**
     * Enable the UpnpType property.
     */
    void EnablePropertyUpnpType();
    /**
     * Enable the Status property.
     */
    void EnablePropertyStatus();
    /**
     * Enable the SampleFormat property.
     */
    void EnablePropertySampleFormat();
    /**
     * Enable the IpAddress property.
     */
    void EnablePropertyIpAddress();
    /**
     * Enable the Protect property.
     */
    void EnablePropertyProtect();
    /**
     * Enable the ProtectPassword property.
     */
    void EnablePropertyProtectPassword();
    /**
     * Enable the ActiveStatus property.
     */
    void EnablePropertyActiveStatus();
    /**
     * Enable the Time property.
     */
    void EnablePropertyTime();
    /**
     * Enable the VolumeControl property.
     */
    void EnablePropertyVolumeControl();
    /**
     * Signal that the action IsAlive is supported.
     * The action's availability will be published in the device's service.xml.
     * IsAlive must be overridden if this is called.
     */
    void EnableActionIsAlive();
    /**
     * Signal that the action Update is supported.
     * The action's availability will be published in the device's service.xml.
     * Update must be overridden if this is called.
     */
    void EnableActionUpdate();
    /**
     * Signal that the action Active is supported.
     * The action's availability will be published in the device's service.xml.
     * Active must be overridden if this is called.
     */
    void EnableActionActive();
    /**
     * Signal that the action GetActiveStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetActiveStatus must be overridden if this is called.
     */
    void EnableActionGetActiveStatus();
    /**
     * Signal that the action CheckUpdate is supported.
     * The action's availability will be published in the device's service.xml.
     * CheckUpdate must be overridden if this is called.
     */
    void EnableActionCheckUpdate();
    /**
     * Signal that the action ResetDisplay is supported.
     * The action's availability will be published in the device's service.xml.
     * ResetDisplay must be overridden if this is called.
     */
    void EnableActionResetDisplay();
    /**
     * Signal that the action GetHardWareInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * GetHardWareInfo must be overridden if this is called.
     */
    void EnableActionGetHardWareInfo();
    /**
     * Signal that the action SetRoomName is supported.
     * The action's availability will be published in the device's service.xml.
     * SetRoomName must be overridden if this is called.
     */
    void EnableActionSetRoomName();
    /**
     * Signal that the action GetVolumeControl is supported.
     * The action's availability will be published in the device's service.xml.
     * GetVolumeControl must be overridden if this is called.
     */
    void EnableActionGetVolumeControl();
    /**
     * Signal that the action SetVolumeControl is supported.
     * The action's availability will be published in the device's service.xml.
     * SetVolumeControl must be overridden if this is called.
     */
    void EnableActionSetVolumeControl();
    /**
     * Signal that the action GetWaitingTime is supported.
     * The action's availability will be published in the device's service.xml.
     * GetWaitingTime must be overridden if this is called.
     */
    void EnableActionGetWaitingTime();
    /**
     * Signal that the action SetWaitingTime is supported.
     * The action's availability will be published in the device's service.xml.
     * SetWaitingTime must be overridden if this is called.
     */
    void EnableActionSetWaitingTime();
    /**
     * Signal that the action GetOutChannel is supported.
     * The action's availability will be published in the device's service.xml.
     * GetOutChannel must be overridden if this is called.
     */
    void EnableActionGetOutChannel();
    /**
     * Signal that the action SetOutChannel is supported.
     * The action's availability will be published in the device's service.xml.
     * SetOutChannel must be overridden if this is called.
     */
    void EnableActionSetOutChannel();
    /**
     * Signal that the action SetUpnpType is supported.
     * The action's availability will be published in the device's service.xml.
     * SetUpnpType must be overridden if this is called.
     */
    void EnableActionSetUpnpType();
    /**
     * Signal that the action GetUpnpType is supported.
     * The action's availability will be published in the device's service.xml.
     * GetUpnpType must be overridden if this is called.
     */
    void EnableActionGetUpnpType();
    /**
     * Signal that the action SetDsdNativeStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDsdNativeStatus must be overridden if this is called.
     */
    void EnableActionSetDsdNativeStatus();
    /**
     * Signal that the action GetDsdNativeStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDsdNativeStatus must be overridden if this is called.
     */
    void EnableActionGetDsdNativeStatus();
    /**
     * Signal that the action SetPasswordProtect is supported.
     * The action's availability will be published in the device's service.xml.
     * SetPasswordProtect must be overridden if this is called.
     */
    void EnableActionSetPasswordProtect();
    /**
     * Signal that the action GetPasswordProtect is supported.
     * The action's availability will be published in the device's service.xml.
     * GetPasswordProtect must be overridden if this is called.
     */
    void EnableActionGetPasswordProtect();
    /**
     * Signal that the action GetUpdateInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * GetUpdateInfo must be overridden if this is called.
     */
    void EnableActionGetUpdateInfo();
    /**
     * Signal that the action GetWirelessList is supported.
     * The action's availability will be published in the device's service.xml.
     * GetWirelessList must be overridden if this is called.
     */
    void EnableActionGetWirelessList();
    /**
     * Signal that the action GetIpAddress is supported.
     * The action's availability will be published in the device's service.xml.
     * GetIpAddress must be overridden if this is called.
     */
    void EnableActionGetIpAddress();
    /**
     * Signal that the action SetNetWork is supported.
     * The action's availability will be published in the device's service.xml.
     * SetNetWork must be overridden if this is called.
     */
    void EnableActionSetNetWork();
    /**
     * Signal that the action GetNetInterface is supported.
     * The action's availability will be published in the device's service.xml.
     * GetNetInterface must be overridden if this is called.
     */
    void EnableActionGetNetInterface();
    /**
     * Signal that the action GetHaltStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetHaltStatus must be overridden if this is called.
     */
    void EnableActionGetHaltStatus();
    /**
     * Signal that the action SetHaltStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * SetHaltStatus must be overridden if this is called.
     */
    void EnableActionSetHaltStatus();
    /**
     * Signal that the action GetFilterMode is supported.
     * The action's availability will be published in the device's service.xml.
     * GetFilterMode must be overridden if this is called.
     */
    void EnableActionGetFilterMode();
    /**
     * Signal that the action SetFilterMode is supported.
     * The action's availability will be published in the device's service.xml.
     * SetFilterMode must be overridden if this is called.
     */
    void EnableActionSetFilterMode();
private:
    /**
     * IsAlive action.
     *
     * Will be called when the device stack receives an invocation of the
     * IsAlive action for the owning device.
     * Must be implemented iff EnableActionIsAlive was called.
     */
    virtual void IsAlive(IDvInvocation& aInvocation, IDvInvocationResponseBool& aAlive);
    /**
     * Update action.
     *
     * Will be called when the device stack receives an invocation of the
     * Update action for the owning device.
     * Must be implemented iff EnableActionUpdate was called.
     */
    virtual void Update(IDvInvocation& aInvocation);
    /**
     * Active action.
     *
     * Will be called when the device stack receives an invocation of the
     * Active action for the owning device.
     * Must be implemented iff EnableActionActive was called.
     */
    virtual void Active(IDvInvocation& aInvocation, TBool aIsSubscribe, const Brx& aRealName, const Brx& aEmail);
    /**
     * GetActiveStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetActiveStatus action for the owning device.
     * Must be implemented iff EnableActionGetActiveStatus was called.
     */
    virtual void GetActiveStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aActiveStatus);
    /**
     * CheckUpdate action.
     *
     * Will be called when the device stack receives an invocation of the
     * CheckUpdate action for the owning device.
     * Must be implemented iff EnableActionCheckUpdate was called.
     */
    virtual void CheckUpdate(IDvInvocation& aInvocation);
    /**
     * ResetDisplay action.
     *
     * Will be called when the device stack receives an invocation of the
     * ResetDisplay action for the owning device.
     * Must be implemented iff EnableActionResetDisplay was called.
     */
    virtual void ResetDisplay(IDvInvocation& aInvocation);
    /**
     * GetHardWareInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetHardWareInfo action for the owning device.
     * Must be implemented iff EnableActionGetHardWareInfo was called.
     */
    virtual void GetHardWareInfo(IDvInvocation& aInvocation, IDvInvocationResponseString& aHardWareInfo);
    /**
     * SetRoomName action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetRoomName action for the owning device.
     * Must be implemented iff EnableActionSetRoomName was called.
     */
    virtual void SetRoomName(IDvInvocation& aInvocation, const Brx& aRoomName);
    /**
     * GetVolumeControl action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetVolumeControl action for the owning device.
     * Must be implemented iff EnableActionGetVolumeControl was called.
     */
    virtual void GetVolumeControl(IDvInvocation& aInvocation, IDvInvocationResponseBool& aVolumeControl);
    /**
     * SetVolumeControl action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetVolumeControl action for the owning device.
     * Must be implemented iff EnableActionSetVolumeControl was called.
     */
    virtual void SetVolumeControl(IDvInvocation& aInvocation, TBool aVolumeControl);
    /**
     * GetWaitingTime action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetWaitingTime action for the owning device.
     * Must be implemented iff EnableActionGetWaitingTime was called.
     */
    virtual void GetWaitingTime(IDvInvocation& aInvocation, IDvInvocationResponseString& aWaitingTime);
    /**
     * SetWaitingTime action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetWaitingTime action for the owning device.
     * Must be implemented iff EnableActionSetWaitingTime was called.
     */
    virtual void SetWaitingTime(IDvInvocation& aInvocation, const Brx& aWaitingTime);
    /**
     * GetOutChannel action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetOutChannel action for the owning device.
     * Must be implemented iff EnableActionGetOutChannel was called.
     */
    virtual void GetOutChannel(IDvInvocation& aInvocation, IDvInvocationResponseUint& aChannelNum, IDvInvocationResponseString& aCurrentChannel, IDvInvocationResponseString& aOutChannel);
    /**
     * SetOutChannel action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetOutChannel action for the owning device.
     * Must be implemented iff EnableActionSetOutChannel was called.
     */
    virtual void SetOutChannel(IDvInvocation& aInvocation, const Brx& aChannel);
    /**
     * SetUpnpType action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetUpnpType action for the owning device.
     * Must be implemented iff EnableActionSetUpnpType was called.
     */
    virtual void SetUpnpType(IDvInvocation& aInvocation, const Brx& aUpnpType);
    /**
     * GetUpnpType action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpnpType action for the owning device.
     * Must be implemented iff EnableActionGetUpnpType was called.
     */
    virtual void GetUpnpType(IDvInvocation& aInvocation, IDvInvocationResponseString& aUpnpType);
    /**
     * SetDsdNativeStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDsdNativeStatus action for the owning device.
     * Must be implemented iff EnableActionSetDsdNativeStatus was called.
     */
    virtual void SetDsdNativeStatus(IDvInvocation& aInvocation, const Brx& aStatus, const Brx& aSampleFormat);
    /**
     * GetDsdNativeStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDsdNativeStatus action for the owning device.
     * Must be implemented iff EnableActionGetDsdNativeStatus was called.
     */
    virtual void GetDsdNativeStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aStatus, IDvInvocationResponseString& aSampleFormat);
    /**
     * SetPasswordProtect action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetPasswordProtect action for the owning device.
     * Must be implemented iff EnableActionSetPasswordProtect was called.
     */
    virtual void SetPasswordProtect(IDvInvocation& aInvocation, const Brx& aProtect, const Brx& aProtectPassword);
    /**
     * GetPasswordProtect action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPasswordProtect action for the owning device.
     * Must be implemented iff EnableActionGetPasswordProtect was called.
     */
    virtual void GetPasswordProtect(IDvInvocation& aInvocation, IDvInvocationResponseString& aProtect, IDvInvocationResponseString& aProtectPassword);
    /**
     * GetUpdateInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpdateInfo action for the owning device.
     * Must be implemented iff EnableActionGetUpdateInfo was called.
     */
    virtual void GetUpdateInfo(IDvInvocation& aInvocation, IDvInvocationResponseString& aVersion, IDvInvocationResponseString& aProgress);
    /**
     * GetWirelessList action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetWirelessList action for the owning device.
     * Must be implemented iff EnableActionGetWirelessList was called.
     */
    virtual void GetWirelessList(IDvInvocation& aInvocation, const Brx& aInterFace, IDvInvocationResponseUint& aNumber, IDvInvocationResponseString& aCurrentUse, IDvInvocationResponseString& aWirelessList);
    /**
     * GetIpAddress action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetIpAddress action for the owning device.
     * Must be implemented iff EnableActionGetIpAddress was called.
     */
    virtual void GetIpAddress(IDvInvocation& aInvocation, const Brx& aInterFace, IDvInvocationResponseString& aIpAddress, IDvInvocationResponseString& aNetMask, IDvInvocationResponseString& aGateWay, IDvInvocationResponseString& aDNS, IDvInvocationResponseString& aDHCP);
    /**
     * SetNetWork action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetNetWork action for the owning device.
     * Must be implemented iff EnableActionSetNetWork was called.
     */
    virtual void SetNetWork(IDvInvocation& aInvocation, const Brx& aInterFace, const Brx& aIpAddress, const Brx& aNetMask, const Brx& aGateWay, const Brx& aDNS, const Brx& aSsid, const Brx& aPassWord, const Brx& aEncrypType);
    /**
     * GetNetInterface action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetNetInterface action for the owning device.
     * Must be implemented iff EnableActionGetNetInterface was called.
     */
    virtual void GetNetInterface(IDvInvocation& aInvocation, IDvInvocationResponseUint& aInterfaceNum, IDvInvocationResponseString& aCurrentUse, IDvInvocationResponseString& aInterfaceList);
    /**
     * GetHaltStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetHaltStatus action for the owning device.
     * Must be implemented iff EnableActionGetHaltStatus was called.
     */
    virtual void GetHaltStatus(IDvInvocation& aInvocation, IDvInvocationResponseBool& aHaltStatus);
    /**
     * SetHaltStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetHaltStatus action for the owning device.
     * Must be implemented iff EnableActionSetHaltStatus was called.
     */
    virtual void SetHaltStatus(IDvInvocation& aInvocation, TBool aHaltStatus);
    /**
     * GetFilterMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetFilterMode action for the owning device.
     * Must be implemented iff EnableActionGetFilterMode was called.
     */
    virtual void GetFilterMode(IDvInvocation& aInvocation, IDvInvocationResponseString& aFilterMode, IDvInvocationResponseString& aFilterModeList);
    /**
     * SetFilterMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetFilterMode action for the owning device.
     * Must be implemented iff EnableActionSetFilterMode was called.
     */
    virtual void SetFilterMode(IDvInvocation& aInvocation, const Brx& aFilterMode);
private:
    DvProviderAvOpenhomeOrgHardwareConfig1();
    void Construct();
    void DoIsAlive(IDviInvocation& aInvocation);
    void DoUpdate(IDviInvocation& aInvocation);
    void DoActive(IDviInvocation& aInvocation);
    void DoGetActiveStatus(IDviInvocation& aInvocation);
    void DoCheckUpdate(IDviInvocation& aInvocation);
    void DoResetDisplay(IDviInvocation& aInvocation);
    void DoGetHardWareInfo(IDviInvocation& aInvocation);
    void DoSetRoomName(IDviInvocation& aInvocation);
    void DoGetVolumeControl(IDviInvocation& aInvocation);
    void DoSetVolumeControl(IDviInvocation& aInvocation);
    void DoGetWaitingTime(IDviInvocation& aInvocation);
    void DoSetWaitingTime(IDviInvocation& aInvocation);
    void DoGetOutChannel(IDviInvocation& aInvocation);
    void DoSetOutChannel(IDviInvocation& aInvocation);
    void DoSetUpnpType(IDviInvocation& aInvocation);
    void DoGetUpnpType(IDviInvocation& aInvocation);
    void DoSetDsdNativeStatus(IDviInvocation& aInvocation);
    void DoGetDsdNativeStatus(IDviInvocation& aInvocation);
    void DoSetPasswordProtect(IDviInvocation& aInvocation);
    void DoGetPasswordProtect(IDviInvocation& aInvocation);
    void DoGetUpdateInfo(IDviInvocation& aInvocation);
    void DoGetWirelessList(IDviInvocation& aInvocation);
    void DoGetIpAddress(IDviInvocation& aInvocation);
    void DoSetNetWork(IDviInvocation& aInvocation);
    void DoGetNetInterface(IDviInvocation& aInvocation);
    void DoGetHaltStatus(IDviInvocation& aInvocation);
    void DoSetHaltStatus(IDviInvocation& aInvocation);
    void DoGetFilterMode(IDviInvocation& aInvocation);
    void DoSetFilterMode(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyAlive;
    PropertyUint* iPropertyCurrentAction;
    PropertyBool* iPropertyRestart;
    PropertyUint* iPropertyNumber;
    PropertyString* iPropertyRoomName;
    PropertyString* iPropertyInterFace;
    PropertyString* iPropertyNetMask;
    PropertyString* iPropertyGateWay;
    PropertyString* iPropertyDNS;
    PropertyString* iPropertyDHCP;
    PropertyString* iPropertySsid;
    PropertyString* iPropertyPassWord;
    PropertyString* iPropertyEncrypType;
    PropertyString* iPropertyChannel;
    PropertyString* iPropertyUpnpType;
    PropertyString* iPropertyStatus;
    PropertyString* iPropertySampleFormat;
    PropertyString* iPropertyIpAddress;
    PropertyString* iPropertyProtect;
    PropertyString* iPropertyProtectPassword;
    PropertyString* iPropertyActiveStatus;
    PropertyString* iPropertyTime;
    PropertyBool* iPropertyVolumeControl;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGHARDWARECONFIG1

