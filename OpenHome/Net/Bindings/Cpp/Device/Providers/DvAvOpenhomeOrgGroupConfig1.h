#ifndef HEADER_DVAVOPENHOMEORGGROUPCONFIG1CPP
#define HEADER_DVAVOPENHOMEORGGROUPCONFIG1CPP

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
 * Provider for the av.openhome.org:GroupConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgGroupConfig1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgGroupConfig1Cpp() {}
    /**
     * Set the value of the GroupMode property
     *
     * Can only be called if EnablePropertyGroupMode has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyGroupMode(const std::string& aValue);
    /**
     * Get a copy of the value of the GroupMode property
     *
     * Can only be called if EnablePropertyGroupMode has previously been called.
     */
    void GetPropertyGroupMode(std::string& aValue);
    /**
     * Set the value of the GroupName property
     *
     * Can only be called if EnablePropertyGroupName has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyGroupName(const std::string& aValue);
    /**
     * Get a copy of the value of the GroupName property
     *
     * Can only be called if EnablePropertyGroupName has previously been called.
     */
    void GetPropertyGroupName(std::string& aValue);
    /**
     * Set the value of the GroupID property
     *
     * Can only be called if EnablePropertyGroupID has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyGroupID(const std::string& aValue);
    /**
     * Get a copy of the value of the GroupID property
     *
     * Can only be called if EnablePropertyGroupID has previously been called.
     */
    void GetPropertyGroupID(std::string& aValue);
    /**
     * Set the value of the GroupVolume property
     *
     * Can only be called if EnablePropertyGroupVolume has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyGroupVolume(uint32_t aValue);
    /**
     * Get a copy of the value of the GroupVolume property
     *
     * Can only be called if EnablePropertyGroupVolume has previously been called.
     */
    void GetPropertyGroupVolume(uint32_t& aValue);
    /**
     * Set the value of the GroupMute property
     *
     * Can only be called if EnablePropertyGroupMute has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyGroupMute(bool aValue);
    /**
     * Get a copy of the value of the GroupMute property
     *
     * Can only be called if EnablePropertyGroupMute has previously been called.
     */
    void GetPropertyGroupMute(bool& aValue);
    /**
     * Set the value of the GroupStatus property
     *
     * Can only be called if EnablePropertyGroupStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyGroupStatus(const std::string& aValue);
    /**
     * Get a copy of the value of the GroupStatus property
     *
     * Can only be called if EnablePropertyGroupStatus has previously been called.
     */
    void GetPropertyGroupStatus(std::string& aValue);
    /**
     * Set the value of the BitPerfectMode property
     *
     * Can only be called if EnablePropertyBitPerfectMode has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyBitPerfectMode(bool aValue);
    /**
     * Get a copy of the value of the BitPerfectMode property
     *
     * Can only be called if EnablePropertyBitPerfectMode has previously been called.
     */
    void GetPropertyBitPerfectMode(bool& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgGroupConfig1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the GroupMode property.
     */
    void EnablePropertyGroupMode();
    /**
     * Enable the GroupName property.
     */
    void EnablePropertyGroupName();
    /**
     * Enable the GroupID property.
     */
    void EnablePropertyGroupID();
    /**
     * Enable the GroupVolume property.
     */
    void EnablePropertyGroupVolume();
    /**
     * Enable the GroupMute property.
     */
    void EnablePropertyGroupMute();
    /**
     * Enable the GroupStatus property.
     */
    void EnablePropertyGroupStatus();
    /**
     * Enable the BitPerfectMode property.
     */
    void EnablePropertyBitPerfectMode();
    /**
     * Signal that the action SetGroupMode is supported.
     * The action's availability will be published in the device's service.xml.
     * SetGroupMode must be overridden if this is called.
     */
    void EnableActionSetGroupMode();
    /**
     * Signal that the action GetGroupMode is supported.
     * The action's availability will be published in the device's service.xml.
     * GetGroupMode must be overridden if this is called.
     */
    void EnableActionGetGroupMode();
    /**
     * Signal that the action SetGroupVolume is supported.
     * The action's availability will be published in the device's service.xml.
     * SetGroupVolume must be overridden if this is called.
     */
    void EnableActionSetGroupVolume();
    /**
     * Signal that the action GetGroupVolume is supported.
     * The action's availability will be published in the device's service.xml.
     * GetGroupVolume must be overridden if this is called.
     */
    void EnableActionGetGroupVolume();
    /**
     * Signal that the action SetGroupMute is supported.
     * The action's availability will be published in the device's service.xml.
     * SetGroupMute must be overridden if this is called.
     */
    void EnableActionSetGroupMute();
    /**
     * Signal that the action GetGroupMute is supported.
     * The action's availability will be published in the device's service.xml.
     * GetGroupMute must be overridden if this is called.
     */
    void EnableActionGetGroupMute();
    /**
     * Signal that the action GetGroupStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetGroupStatus must be overridden if this is called.
     */
    void EnableActionGetGroupStatus();
    /**
     * Signal that the action SetGroupStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * SetGroupStatus must be overridden if this is called.
     */
    void EnableActionSetGroupStatus();
    /**
     * Signal that the action GetBitPerfectMode is supported.
     * The action's availability will be published in the device's service.xml.
     * GetBitPerfectMode must be overridden if this is called.
     */
    void EnableActionGetBitPerfectMode();
    /**
     * Signal that the action SetBitPerfectMode is supported.
     * The action's availability will be published in the device's service.xml.
     * SetBitPerfectMode must be overridden if this is called.
     */
    void EnableActionSetBitPerfectMode();
private:
    /**
     * SetGroupMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetGroupMode action for the owning device.
     * Must be implemented iff EnableActionSetGroupMode was called.
     */
    virtual void SetGroupMode(IDvInvocationStd& aInvocation, const std::string& aGroupMode, const std::string& aGroupID, const std::string& aGroupName);
    /**
     * GetGroupMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetGroupMode action for the owning device.
     * Must be implemented iff EnableActionGetGroupMode was called.
     */
    virtual void GetGroupMode(IDvInvocationStd& aInvocation, std::string& aGroupMode, std::string& aGroupID, std::string& aGroupName);
    /**
     * SetGroupVolume action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetGroupVolume action for the owning device.
     * Must be implemented iff EnableActionSetGroupVolume was called.
     */
    virtual void SetGroupVolume(IDvInvocationStd& aInvocation, uint32_t aGroupVolume);
    /**
     * GetGroupVolume action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetGroupVolume action for the owning device.
     * Must be implemented iff EnableActionGetGroupVolume was called.
     */
    virtual void GetGroupVolume(IDvInvocationStd& aInvocation, uint32_t& aGroupVolume);
    /**
     * SetGroupMute action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetGroupMute action for the owning device.
     * Must be implemented iff EnableActionSetGroupMute was called.
     */
    virtual void SetGroupMute(IDvInvocationStd& aInvocation, bool aGroupMute);
    /**
     * GetGroupMute action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetGroupMute action for the owning device.
     * Must be implemented iff EnableActionGetGroupMute was called.
     */
    virtual void GetGroupMute(IDvInvocationStd& aInvocation, bool& aGroupMute);
    /**
     * GetGroupStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetGroupStatus action for the owning device.
     * Must be implemented iff EnableActionGetGroupStatus was called.
     */
    virtual void GetGroupStatus(IDvInvocationStd& aInvocation, std::string& aGroupStatus);
    /**
     * SetGroupStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetGroupStatus action for the owning device.
     * Must be implemented iff EnableActionSetGroupStatus was called.
     */
    virtual void SetGroupStatus(IDvInvocationStd& aInvocation, const std::string& aGroupStatus);
    /**
     * GetBitPerfectMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetBitPerfectMode action for the owning device.
     * Must be implemented iff EnableActionGetBitPerfectMode was called.
     */
    virtual void GetBitPerfectMode(IDvInvocationStd& aInvocation, bool& aBitPerfectMode);
    /**
     * SetBitPerfectMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetBitPerfectMode action for the owning device.
     * Must be implemented iff EnableActionSetBitPerfectMode was called.
     */
    virtual void SetBitPerfectMode(IDvInvocationStd& aInvocation, bool aBitPerfectMode);
private:
    DvProviderAvOpenhomeOrgGroupConfig1Cpp();
    void DoSetGroupMode(IDviInvocation& aInvocation);
    void DoGetGroupMode(IDviInvocation& aInvocation);
    void DoSetGroupVolume(IDviInvocation& aInvocation);
    void DoGetGroupVolume(IDviInvocation& aInvocation);
    void DoSetGroupMute(IDviInvocation& aInvocation);
    void DoGetGroupMute(IDviInvocation& aInvocation);
    void DoGetGroupStatus(IDviInvocation& aInvocation);
    void DoSetGroupStatus(IDviInvocation& aInvocation);
    void DoGetBitPerfectMode(IDviInvocation& aInvocation);
    void DoSetBitPerfectMode(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyGroupMode;
    PropertyString* iPropertyGroupName;
    PropertyString* iPropertyGroupID;
    PropertyUint* iPropertyGroupVolume;
    PropertyBool* iPropertyGroupMute;
    PropertyString* iPropertyGroupStatus;
    PropertyBool* iPropertyBitPerfectMode;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGGROUPCONFIG1CPP

