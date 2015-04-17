#ifndef HEADER_DVAVOPENHOMEORGHARDWARECONFIG1CPP
#define HEADER_DVAVOPENHOMEORGHARDWARECONFIG1CPP

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/DvDevice.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>

#include <string>

namespace OpenHome {
namespace Net {

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
class DvProviderAvOpenhomeOrgHardwareConfig1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgHardwareConfig1Cpp() {}
    /**
     * Set the value of the Alive property
     *
     * Can only be called if EnablePropertyAlive has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAlive(bool aValue);
    /**
     * Get a copy of the value of the Alive property
     *
     * Can only be called if EnablePropertyAlive has previously been called.
     */
    void GetPropertyAlive(bool& aValue);
    /**
     * Set the value of the CurrentAction property
     *
     * Can only be called if EnablePropertyCurrentAction has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyCurrentAction(uint32_t aValue);
    /**
     * Get a copy of the value of the CurrentAction property
     *
     * Can only be called if EnablePropertyCurrentAction has previously been called.
     */
    void GetPropertyCurrentAction(uint32_t& aValue);
    /**
     * Set the value of the Restart property
     *
     * Can only be called if EnablePropertyRestart has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyRestart(bool aValue);
    /**
     * Get a copy of the value of the Restart property
     *
     * Can only be called if EnablePropertyRestart has previously been called.
     */
    void GetPropertyRestart(bool& aValue);
    /**
     * Set the value of the Number property
     *
     * Can only be called if EnablePropertyNumber has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyNumber(uint32_t aValue);
    /**
     * Get a copy of the value of the Number property
     *
     * Can only be called if EnablePropertyNumber has previously been called.
     */
    void GetPropertyNumber(uint32_t& aValue);
    /**
     * Set the value of the RoomName property
     *
     * Can only be called if EnablePropertyRoomName has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyRoomName(const std::string& aValue);
    /**
     * Get a copy of the value of the RoomName property
     *
     * Can only be called if EnablePropertyRoomName has previously been called.
     */
    void GetPropertyRoomName(std::string& aValue);
    /**
     * Set the value of the InterFace property
     *
     * Can only be called if EnablePropertyInterFace has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyInterFace(const std::string& aValue);
    /**
     * Get a copy of the value of the InterFace property
     *
     * Can only be called if EnablePropertyInterFace has previously been called.
     */
    void GetPropertyInterFace(std::string& aValue);
    /**
     * Set the value of the NetMask property
     *
     * Can only be called if EnablePropertyNetMask has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyNetMask(const std::string& aValue);
    /**
     * Get a copy of the value of the NetMask property
     *
     * Can only be called if EnablePropertyNetMask has previously been called.
     */
    void GetPropertyNetMask(std::string& aValue);
    /**
     * Set the value of the GateWay property
     *
     * Can only be called if EnablePropertyGateWay has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyGateWay(const std::string& aValue);
    /**
     * Get a copy of the value of the GateWay property
     *
     * Can only be called if EnablePropertyGateWay has previously been called.
     */
    void GetPropertyGateWay(std::string& aValue);
    /**
     * Set the value of the DNS property
     *
     * Can only be called if EnablePropertyDNS has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyDNS(const std::string& aValue);
    /**
     * Get a copy of the value of the DNS property
     *
     * Can only be called if EnablePropertyDNS has previously been called.
     */
    void GetPropertyDNS(std::string& aValue);
    /**
     * Set the value of the DHCP property
     *
     * Can only be called if EnablePropertyDHCP has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyDHCP(const std::string& aValue);
    /**
     * Get a copy of the value of the DHCP property
     *
     * Can only be called if EnablePropertyDHCP has previously been called.
     */
    void GetPropertyDHCP(std::string& aValue);
    /**
     * Set the value of the Ssid property
     *
     * Can only be called if EnablePropertySsid has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertySsid(const std::string& aValue);
    /**
     * Get a copy of the value of the Ssid property
     *
     * Can only be called if EnablePropertySsid has previously been called.
     */
    void GetPropertySsid(std::string& aValue);
    /**
     * Set the value of the PassWord property
     *
     * Can only be called if EnablePropertyPassWord has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyPassWord(const std::string& aValue);
    /**
     * Get a copy of the value of the PassWord property
     *
     * Can only be called if EnablePropertyPassWord has previously been called.
     */
    void GetPropertyPassWord(std::string& aValue);
    /**
     * Set the value of the EncrypType property
     *
     * Can only be called if EnablePropertyEncrypType has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyEncrypType(const std::string& aValue);
    /**
     * Get a copy of the value of the EncrypType property
     *
     * Can only be called if EnablePropertyEncrypType has previously been called.
     */
    void GetPropertyEncrypType(std::string& aValue);
    /**
     * Set the value of the Channel property
     *
     * Can only be called if EnablePropertyChannel has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyChannel(const std::string& aValue);
    /**
     * Get a copy of the value of the Channel property
     *
     * Can only be called if EnablePropertyChannel has previously been called.
     */
    void GetPropertyChannel(std::string& aValue);
    /**
     * Set the value of the UpnpType property
     *
     * Can only be called if EnablePropertyUpnpType has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUpnpType(const std::string& aValue);
    /**
     * Get a copy of the value of the UpnpType property
     *
     * Can only be called if EnablePropertyUpnpType has previously been called.
     */
    void GetPropertyUpnpType(std::string& aValue);
    /**
     * Set the value of the Status property
     *
     * Can only be called if EnablePropertyStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyStatus(const std::string& aValue);
    /**
     * Get a copy of the value of the Status property
     *
     * Can only be called if EnablePropertyStatus has previously been called.
     */
    void GetPropertyStatus(std::string& aValue);
    /**
     * Set the value of the SampleFormat property
     *
     * Can only be called if EnablePropertySampleFormat has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertySampleFormat(const std::string& aValue);
    /**
     * Get a copy of the value of the SampleFormat property
     *
     * Can only be called if EnablePropertySampleFormat has previously been called.
     */
    void GetPropertySampleFormat(std::string& aValue);
    /**
     * Set the value of the IpAddress property
     *
     * Can only be called if EnablePropertyIpAddress has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyIpAddress(const std::string& aValue);
    /**
     * Get a copy of the value of the IpAddress property
     *
     * Can only be called if EnablePropertyIpAddress has previously been called.
     */
    void GetPropertyIpAddress(std::string& aValue);
    /**
     * Set the value of the Protect property
     *
     * Can only be called if EnablePropertyProtect has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyProtect(const std::string& aValue);
    /**
     * Get a copy of the value of the Protect property
     *
     * Can only be called if EnablePropertyProtect has previously been called.
     */
    void GetPropertyProtect(std::string& aValue);
    /**
     * Set the value of the ProtectPassword property
     *
     * Can only be called if EnablePropertyProtectPassword has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyProtectPassword(const std::string& aValue);
    /**
     * Get a copy of the value of the ProtectPassword property
     *
     * Can only be called if EnablePropertyProtectPassword has previously been called.
     */
    void GetPropertyProtectPassword(std::string& aValue);
    /**
     * Set the value of the Time property
     *
     * Can only be called if EnablePropertyTime has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyTime(const std::string& aValue);
    /**
     * Get a copy of the value of the Time property
     *
     * Can only be called if EnablePropertyTime has previously been called.
     */
    void GetPropertyTime(std::string& aValue);
    /**
     * Set the value of the VolumeControl property
     *
     * Can only be called if EnablePropertyVolumeControl has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyVolumeControl(bool aValue);
    /**
     * Get a copy of the value of the VolumeControl property
     *
     * Can only be called if EnablePropertyVolumeControl has previously been called.
     */
    void GetPropertyVolumeControl(bool& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgHardwareConfig1Cpp(DvDeviceStd& aDevice);
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
private:
    /**
     * IsAlive action.
     *
     * Will be called when the device stack receives an invocation of the
     * IsAlive action for the owning device.
     * Must be implemented iff EnableActionIsAlive was called.
     */
    virtual void IsAlive(IDvInvocationStd& aInvocation, bool& aAlive);
    /**
     * Update action.
     *
     * Will be called when the device stack receives an invocation of the
     * Update action for the owning device.
     * Must be implemented iff EnableActionUpdate was called.
     */
    virtual void Update(IDvInvocationStd& aInvocation);
    /**
     * Active action.
     *
     * Will be called when the device stack receives an invocation of the
     * Active action for the owning device.
     * Must be implemented iff EnableActionActive was called.
     */
    virtual void Active(IDvInvocationStd& aInvocation, const std::string& aCountry, const std::string& aRealName, const std::string& aEmail);
    /**
     * GetActiveStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetActiveStatus action for the owning device.
     * Must be implemented iff EnableActionGetActiveStatus was called.
     */
    virtual void GetActiveStatus(IDvInvocationStd& aInvocation, std::string& aActiveStatus);
    /**
     * CheckUpdate action.
     *
     * Will be called when the device stack receives an invocation of the
     * CheckUpdate action for the owning device.
     * Must be implemented iff EnableActionCheckUpdate was called.
     */
    virtual void CheckUpdate(IDvInvocationStd& aInvocation);
    /**
     * GetHardWareInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetHardWareInfo action for the owning device.
     * Must be implemented iff EnableActionGetHardWareInfo was called.
     */
    virtual void GetHardWareInfo(IDvInvocationStd& aInvocation, std::string& aHardWareInfo);
    /**
     * SetRoomName action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetRoomName action for the owning device.
     * Must be implemented iff EnableActionSetRoomName was called.
     */
    virtual void SetRoomName(IDvInvocationStd& aInvocation, const std::string& aRoomName);
    /**
     * GetVolumeControl action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetVolumeControl action for the owning device.
     * Must be implemented iff EnableActionGetVolumeControl was called.
     */
    virtual void GetVolumeControl(IDvInvocationStd& aInvocation, bool& aVolumeControl);
    /**
     * SetVolumeControl action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetVolumeControl action for the owning device.
     * Must be implemented iff EnableActionSetVolumeControl was called.
     */
    virtual void SetVolumeControl(IDvInvocationStd& aInvocation, bool aVolumeControl);
    /**
     * GetWaitingTime action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetWaitingTime action for the owning device.
     * Must be implemented iff EnableActionGetWaitingTime was called.
     */
    virtual void GetWaitingTime(IDvInvocationStd& aInvocation, std::string& aWaitingTime);
    /**
     * SetWaitingTime action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetWaitingTime action for the owning device.
     * Must be implemented iff EnableActionSetWaitingTime was called.
     */
    virtual void SetWaitingTime(IDvInvocationStd& aInvocation, const std::string& aWaitingTime);
    /**
     * GetOutChannel action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetOutChannel action for the owning device.
     * Must be implemented iff EnableActionGetOutChannel was called.
     */
    virtual void GetOutChannel(IDvInvocationStd& aInvocation, uint32_t& aChannelNum, std::string& aCurrentChannel, std::string& aOutChannel);
    /**
     * SetOutChannel action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetOutChannel action for the owning device.
     * Must be implemented iff EnableActionSetOutChannel was called.
     */
    virtual void SetOutChannel(IDvInvocationStd& aInvocation, const std::string& aChannel);
    /**
     * SetUpnpType action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetUpnpType action for the owning device.
     * Must be implemented iff EnableActionSetUpnpType was called.
     */
    virtual void SetUpnpType(IDvInvocationStd& aInvocation, const std::string& aUpnpType);
    /**
     * GetUpnpType action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpnpType action for the owning device.
     * Must be implemented iff EnableActionGetUpnpType was called.
     */
    virtual void GetUpnpType(IDvInvocationStd& aInvocation, std::string& aUpnpType);
    /**
     * SetDsdNativeStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDsdNativeStatus action for the owning device.
     * Must be implemented iff EnableActionSetDsdNativeStatus was called.
     */
    virtual void SetDsdNativeStatus(IDvInvocationStd& aInvocation, const std::string& aStatus, const std::string& aSampleFormat);
    /**
     * GetDsdNativeStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDsdNativeStatus action for the owning device.
     * Must be implemented iff EnableActionGetDsdNativeStatus was called.
     */
    virtual void GetDsdNativeStatus(IDvInvocationStd& aInvocation, std::string& aStatus, std::string& aSampleFormat);
    /**
     * SetPasswordProtect action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetPasswordProtect action for the owning device.
     * Must be implemented iff EnableActionSetPasswordProtect was called.
     */
    virtual void SetPasswordProtect(IDvInvocationStd& aInvocation, const std::string& aProtect, const std::string& aProtectPassword);
    /**
     * GetPasswordProtect action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPasswordProtect action for the owning device.
     * Must be implemented iff EnableActionGetPasswordProtect was called.
     */
    virtual void GetPasswordProtect(IDvInvocationStd& aInvocation, std::string& aProtect, std::string& aProtectPassword);
    /**
     * GetUpdateInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpdateInfo action for the owning device.
     * Must be implemented iff EnableActionGetUpdateInfo was called.
     */
    virtual void GetUpdateInfo(IDvInvocationStd& aInvocation, std::string& aVersion, std::string& aProgress);
    /**
     * GetWirelessList action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetWirelessList action for the owning device.
     * Must be implemented iff EnableActionGetWirelessList was called.
     */
    virtual void GetWirelessList(IDvInvocationStd& aInvocation, const std::string& aInterFace, uint32_t& aNumber, std::string& aCurrentUse, std::string& aWirelessList);
    /**
     * GetIpAddress action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetIpAddress action for the owning device.
     * Must be implemented iff EnableActionGetIpAddress was called.
     */
    virtual void GetIpAddress(IDvInvocationStd& aInvocation, const std::string& aInterFace, std::string& aIpAddress, std::string& aNetMask, std::string& aGateWay, std::string& aDNS, std::string& aDHCP);
    /**
     * SetNetWork action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetNetWork action for the owning device.
     * Must be implemented iff EnableActionSetNetWork was called.
     */
    virtual void SetNetWork(IDvInvocationStd& aInvocation, const std::string& aInterFace, const std::string& aIpAddress, const std::string& aNetMask, const std::string& aGateWay, const std::string& aDNS, const std::string& aSsid, const std::string& aPassWord, const std::string& aEncrypType);
    /**
     * GetNetInterface action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetNetInterface action for the owning device.
     * Must be implemented iff EnableActionGetNetInterface was called.
     */
    virtual void GetNetInterface(IDvInvocationStd& aInvocation, uint32_t& aInterfaceNum, std::string& aCurrentUse, std::string& aInterfaceList);
private:
    DvProviderAvOpenhomeOrgHardwareConfig1Cpp();
    void DoIsAlive(IDviInvocation& aInvocation);
    void DoUpdate(IDviInvocation& aInvocation);
    void DoActive(IDviInvocation& aInvocation);
    void DoGetActiveStatus(IDviInvocation& aInvocation);
    void DoCheckUpdate(IDviInvocation& aInvocation);
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
    PropertyString* iPropertyTime;
    PropertyBool* iPropertyVolumeControl;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGHARDWARECONFIG1CPP

