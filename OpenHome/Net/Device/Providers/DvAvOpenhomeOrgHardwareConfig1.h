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
     * Set the value of the MessageOut property
     *
     * Can only be called if EnablePropertyMessageOut has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyMessageOut(const Brx& aValue);
    /**
     * Get a copy of the value of the MessageOut property
     *
     * Can only be called if EnablePropertyMessageOut has previously been called.
     */
    void GetPropertyMessageOut(Brhz& aValue);
    /**
     * Output the value of the MessageOut property without an intermediate copy.
     *
     * Can only be called if EnablePropertyMessageOut has previously been called.
     */
    void WritePropertyMessageOut(IWriter& aWriter);
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
     * Output the value of the RoomName property without an intermediate copy.
     *
     * Can only be called if EnablePropertyRoomName has previously been called.
     */
    void WritePropertyRoomName(IWriter& aWriter);
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
     * Output the value of the InterFace property without an intermediate copy.
     *
     * Can only be called if EnablePropertyInterFace has previously been called.
     */
    void WritePropertyInterFace(IWriter& aWriter);
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
     * Output the value of the NetMask property without an intermediate copy.
     *
     * Can only be called if EnablePropertyNetMask has previously been called.
     */
    void WritePropertyNetMask(IWriter& aWriter);
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
     * Output the value of the GateWay property without an intermediate copy.
     *
     * Can only be called if EnablePropertyGateWay has previously been called.
     */
    void WritePropertyGateWay(IWriter& aWriter);
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
     * Output the value of the DNS property without an intermediate copy.
     *
     * Can only be called if EnablePropertyDNS has previously been called.
     */
    void WritePropertyDNS(IWriter& aWriter);
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
     * Output the value of the DHCP property without an intermediate copy.
     *
     * Can only be called if EnablePropertyDHCP has previously been called.
     */
    void WritePropertyDHCP(IWriter& aWriter);
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
     * Output the value of the Ssid property without an intermediate copy.
     *
     * Can only be called if EnablePropertySsid has previously been called.
     */
    void WritePropertySsid(IWriter& aWriter);
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
     * Output the value of the PassWord property without an intermediate copy.
     *
     * Can only be called if EnablePropertyPassWord has previously been called.
     */
    void WritePropertyPassWord(IWriter& aWriter);
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
     * Output the value of the EncrypType property without an intermediate copy.
     *
     * Can only be called if EnablePropertyEncrypType has previously been called.
     */
    void WritePropertyEncrypType(IWriter& aWriter);
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
     * Output the value of the Channel property without an intermediate copy.
     *
     * Can only be called if EnablePropertyChannel has previously been called.
     */
    void WritePropertyChannel(IWriter& aWriter);
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
     * Output the value of the UpnpType property without an intermediate copy.
     *
     * Can only be called if EnablePropertyUpnpType has previously been called.
     */
    void WritePropertyUpnpType(IWriter& aWriter);
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
     * Output the value of the Status property without an intermediate copy.
     *
     * Can only be called if EnablePropertyStatus has previously been called.
     */
    void WritePropertyStatus(IWriter& aWriter);
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
     * Output the value of the SampleFormat property without an intermediate copy.
     *
     * Can only be called if EnablePropertySampleFormat has previously been called.
     */
    void WritePropertySampleFormat(IWriter& aWriter);
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
     * Output the value of the IpAddress property without an intermediate copy.
     *
     * Can only be called if EnablePropertyIpAddress has previously been called.
     */
    void WritePropertyIpAddress(IWriter& aWriter);
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
     * Output the value of the Protect property without an intermediate copy.
     *
     * Can only be called if EnablePropertyProtect has previously been called.
     */
    void WritePropertyProtect(IWriter& aWriter);
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
     * Output the value of the ProtectPassword property without an intermediate copy.
     *
     * Can only be called if EnablePropertyProtectPassword has previously been called.
     */
    void WritePropertyProtectPassword(IWriter& aWriter);
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
     * Output the value of the ActiveStatus property without an intermediate copy.
     *
     * Can only be called if EnablePropertyActiveStatus has previously been called.
     */
    void WritePropertyActiveStatus(IWriter& aWriter);
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
     * Output the value of the Time property without an intermediate copy.
     *
     * Can only be called if EnablePropertyTime has previously been called.
     */
    void WritePropertyTime(IWriter& aWriter);
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
     * Enable the MessageOut property.
     */
    void EnablePropertyMessageOut();
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
     * Signal that the action LogIn is supported.
     * The action's availability will be published in the device's service.xml.
     * LogIn must be overridden if this is called.
     */
    void EnableActionLogIn();
    /**
     * Signal that the action LogOut is supported.
     * The action's availability will be published in the device's service.xml.
     * LogOut must be overridden if this is called.
     */
    void EnableActionLogOut();
    /**
     * Signal that the action CancelLogIn is supported.
     * The action's availability will be published in the device's service.xml.
     * CancelLogIn must be overridden if this is called.
     */
    void EnableActionCancelLogIn();
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
    /**
     * Signal that the action SetSourceVisible is supported.
     * The action's availability will be published in the device's service.xml.
     * SetSourceVisible must be overridden if this is called.
     */
    void EnableActionSetSourceVisible();
    /**
     * Signal that the action GetSourceVisible is supported.
     * The action's availability will be published in the device's service.xml.
     * GetSourceVisible must be overridden if this is called.
     */
    void EnableActionGetSourceVisible();
    /**
     * Signal that the action SetLEDMode is supported.
     * The action's availability will be published in the device's service.xml.
     * SetLEDMode must be overridden if this is called.
     */
    void EnableActionSetLEDMode();
    /**
     * Signal that the action GetLEDMode is supported.
     * The action's availability will be published in the device's service.xml.
     * GetLEDMode must be overridden if this is called.
     */
    void EnableActionGetLEDMode();
    /**
     * Signal that the action SetKeyMode is supported.
     * The action's availability will be published in the device's service.xml.
     * SetKeyMode must be overridden if this is called.
     */
    void EnableActionSetKeyMode();
    /**
     * Signal that the action GetKeyMode is supported.
     * The action's availability will be published in the device's service.xml.
     * GetKeyMode must be overridden if this is called.
     */
    void EnableActionGetKeyMode();
    /**
     * Signal that the action SetBrightness is supported.
     * The action's availability will be published in the device's service.xml.
     * SetBrightness must be overridden if this is called.
     */
    void EnableActionSetBrightness();
    /**
     * Signal that the action GetBrightness is supported.
     * The action's availability will be published in the device's service.xml.
     * GetBrightness must be overridden if this is called.
     */
    void EnableActionGetBrightness();
    /**
     * Signal that the action SetDisplayMode is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDisplayMode must be overridden if this is called.
     */
    void EnableActionSetDisplayMode();
    /**
     * Signal that the action GetDisplayMode is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDisplayMode must be overridden if this is called.
     */
    void EnableActionGetDisplayMode();
    /**
     * Signal that the action GetDACPhase is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDACPhase must be overridden if this is called.
     */
    void EnableActionGetDACPhase();
    /**
     * Signal that the action SetDACPhase is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDACPhase must be overridden if this is called.
     */
    void EnableActionSetDACPhase();
    /**
     * Signal that the action GetDACBalance is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDACBalance must be overridden if this is called.
     */
    void EnableActionGetDACBalance();
    /**
     * Signal that the action SetDACBalance is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDACBalance must be overridden if this is called.
     */
    void EnableActionSetDACBalance();
    /**
     * Signal that the action SetEnableResampler is supported.
     * The action's availability will be published in the device's service.xml.
     * SetEnableResampler must be overridden if this is called.
     */
    void EnableActionSetEnableResampler();
    /**
     * Signal that the action SetEnableSpeaker is supported.
     * The action's availability will be published in the device's service.xml.
     * SetEnableSpeaker must be overridden if this is called.
     */
    void EnableActionSetEnableSpeaker();
    /**
     * Signal that the action SetEnableEqualizer is supported.
     * The action's availability will be published in the device's service.xml.
     * SetEnableEqualizer must be overridden if this is called.
     */
    void EnableActionSetEnableEqualizer();
    /**
     * Signal that the action SetEnableDirac is supported.
     * The action's availability will be published in the device's service.xml.
     * SetEnableDirac must be overridden if this is called.
     */
    void EnableActionSetEnableDirac();
private:
    /**
     * LogIn action.
     *
     * Will be called when the device stack receives an invocation of the
     * LogIn action for the owning device.
     * Must be implemented iff EnableActionLogIn was called.
     */
    virtual void LogIn(IDvInvocation& aInvocation, const Brx& aServiceName, const Brx& aMessageIn, IDvInvocationResponseString& aMessageOut);
    /**
     * LogOut action.
     *
     * Will be called when the device stack receives an invocation of the
     * LogOut action for the owning device.
     * Must be implemented iff EnableActionLogOut was called.
     */
    virtual void LogOut(IDvInvocation& aInvocation, const Brx& aServiceName);
    /**
     * CancelLogIn action.
     *
     * Will be called when the device stack receives an invocation of the
     * CancelLogIn action for the owning device.
     * Must be implemented iff EnableActionCancelLogIn was called.
     */
    virtual void CancelLogIn(IDvInvocation& aInvocation, const Brx& aServiceName);
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
    /**
     * SetSourceVisible action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetSourceVisible action for the owning device.
     * Must be implemented iff EnableActionSetSourceVisible was called.
     */
    virtual void SetSourceVisible(IDvInvocation& aInvocation, const Brx& aSourceName, TBool aVisible);
    /**
     * GetSourceVisible action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSourceVisible action for the owning device.
     * Must be implemented iff EnableActionGetSourceVisible was called.
     */
    virtual void GetSourceVisible(IDvInvocation& aInvocation, IDvInvocationResponseString& aVisibleInfo);
    /**
     * SetLEDMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetLEDMode action for the owning device.
     * Must be implemented iff EnableActionSetLEDMode was called.
     */
    virtual void SetLEDMode(IDvInvocation& aInvocation, const Brx& aLEDMode);
    /**
     * GetLEDMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetLEDMode action for the owning device.
     * Must be implemented iff EnableActionGetLEDMode was called.
     */
    virtual void GetLEDMode(IDvInvocation& aInvocation, IDvInvocationResponseString& aLEDMode, IDvInvocationResponseString& aLEDModeList);
    /**
     * SetKeyMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetKeyMode action for the owning device.
     * Must be implemented iff EnableActionSetKeyMode was called.
     */
    virtual void SetKeyMode(IDvInvocation& aInvocation, const Brx& aKeyName, const Brx& aKeyMode);
    /**
     * GetKeyMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetKeyMode action for the owning device.
     * Must be implemented iff EnableActionGetKeyMode was called.
     */
    virtual void GetKeyMode(IDvInvocation& aInvocation, IDvInvocationResponseString& aSideKeyMode, IDvInvocationResponseString& aMiddleKeyMode, IDvInvocationResponseString& aKeyModeList);
    /**
     * SetBrightness action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetBrightness action for the owning device.
     * Must be implemented iff EnableActionSetBrightness was called.
     */
    virtual void SetBrightness(IDvInvocation& aInvocation, const Brx& aBrightness);
    /**
     * GetBrightness action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetBrightness action for the owning device.
     * Must be implemented iff EnableActionGetBrightness was called.
     */
    virtual void GetBrightness(IDvInvocation& aInvocation, IDvInvocationResponseString& aBrightness, IDvInvocationResponseString& aList);
    /**
     * SetDisplayMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDisplayMode action for the owning device.
     * Must be implemented iff EnableActionSetDisplayMode was called.
     */
    virtual void SetDisplayMode(IDvInvocation& aInvocation, const Brx& aDisplayMode);
    /**
     * GetDisplayMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDisplayMode action for the owning device.
     * Must be implemented iff EnableActionGetDisplayMode was called.
     */
    virtual void GetDisplayMode(IDvInvocation& aInvocation, IDvInvocationResponseString& aDisplayMode, IDvInvocationResponseString& aDisplayModeList);
    /**
     * GetDACPhase action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDACPhase action for the owning device.
     * Must be implemented iff EnableActionGetDACPhase was called.
     */
    virtual void GetDACPhase(IDvInvocation& aInvocation, IDvInvocationResponseUint& aPhase);
    /**
     * SetDACPhase action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDACPhase action for the owning device.
     * Must be implemented iff EnableActionSetDACPhase was called.
     */
    virtual void SetDACPhase(IDvInvocation& aInvocation, TUint aPhase);
    /**
     * GetDACBalance action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDACBalance action for the owning device.
     * Must be implemented iff EnableActionGetDACBalance was called.
     */
    virtual void GetDACBalance(IDvInvocation& aInvocation, IDvInvocationResponseUint& aBalance);
    /**
     * SetDACBalance action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDACBalance action for the owning device.
     * Must be implemented iff EnableActionSetDACBalance was called.
     */
    virtual void SetDACBalance(IDvInvocation& aInvocation, TUint aBalance);
    /**
     * SetEnableResampler action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetEnableResampler action for the owning device.
     * Must be implemented iff EnableActionSetEnableResampler was called.
     */
    virtual void SetEnableResampler(IDvInvocation& aInvocation, TBool aEnableResampler);
    /**
     * SetEnableSpeaker action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetEnableSpeaker action for the owning device.
     * Must be implemented iff EnableActionSetEnableSpeaker was called.
     */
    virtual void SetEnableSpeaker(IDvInvocation& aInvocation, TBool aEnableSpeaker);
    /**
     * SetEnableEqualizer action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetEnableEqualizer action for the owning device.
     * Must be implemented iff EnableActionSetEnableEqualizer was called.
     */
    virtual void SetEnableEqualizer(IDvInvocation& aInvocation, TBool aEnableEqualizer);
    /**
     * SetEnableDirac action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetEnableDirac action for the owning device.
     * Must be implemented iff EnableActionSetEnableDirac was called.
     */
    virtual void SetEnableDirac(IDvInvocation& aInvocation, TBool aEnableDirac);
private:
    DvProviderAvOpenhomeOrgHardwareConfig1();
    void Construct();
    void DoLogIn(IDviInvocation& aInvocation);
    void DoLogOut(IDviInvocation& aInvocation);
    void DoCancelLogIn(IDviInvocation& aInvocation);
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
    void DoSetSourceVisible(IDviInvocation& aInvocation);
    void DoGetSourceVisible(IDviInvocation& aInvocation);
    void DoSetLEDMode(IDviInvocation& aInvocation);
    void DoGetLEDMode(IDviInvocation& aInvocation);
    void DoSetKeyMode(IDviInvocation& aInvocation);
    void DoGetKeyMode(IDviInvocation& aInvocation);
    void DoSetBrightness(IDviInvocation& aInvocation);
    void DoGetBrightness(IDviInvocation& aInvocation);
    void DoSetDisplayMode(IDviInvocation& aInvocation);
    void DoGetDisplayMode(IDviInvocation& aInvocation);
    void DoGetDACPhase(IDviInvocation& aInvocation);
    void DoSetDACPhase(IDviInvocation& aInvocation);
    void DoGetDACBalance(IDviInvocation& aInvocation);
    void DoSetDACBalance(IDviInvocation& aInvocation);
    void DoSetEnableResampler(IDviInvocation& aInvocation);
    void DoSetEnableSpeaker(IDviInvocation& aInvocation);
    void DoSetEnableEqualizer(IDviInvocation& aInvocation);
    void DoSetEnableDirac(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyMessageOut;
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

