#ifndef HEADER_DVAVOPENHOMEORGGROUPCONFIG1
#define HEADER_DVAVOPENHOMEORGGROUPCONFIG1

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
 * Provider for the av.openhome.org:GroupConfig:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgGroupConfig1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgGroupConfig1() {}
    /**
     * Set the value of the GroupMode property
     *
     * Can only be called if EnablePropertyGroupMode has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyGroupMode(const Brx& aValue);
    /**
     * Get a copy of the value of the GroupMode property
     *
     * Can only be called if EnablePropertyGroupMode has previously been called.
     */
    void GetPropertyGroupMode(Brhz& aValue);
    /**
     * Set the value of the GroupName property
     *
     * Can only be called if EnablePropertyGroupName has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyGroupName(const Brx& aValue);
    /**
     * Get a copy of the value of the GroupName property
     *
     * Can only be called if EnablePropertyGroupName has previously been called.
     */
    void GetPropertyGroupName(Brhz& aValue);
    /**
     * Set the value of the GroupID property
     *
     * Can only be called if EnablePropertyGroupID has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyGroupID(const Brx& aValue);
    /**
     * Get a copy of the value of the GroupID property
     *
     * Can only be called if EnablePropertyGroupID has previously been called.
     */
    void GetPropertyGroupID(Brhz& aValue);
    /**
     * Set the value of the GroupVolume property
     *
     * Can only be called if EnablePropertyGroupVolume has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyGroupVolume(TUint aValue);
    /**
     * Get a copy of the value of the GroupVolume property
     *
     * Can only be called if EnablePropertyGroupVolume has previously been called.
     */
    void GetPropertyGroupVolume(TUint& aValue);
    /**
     * Set the value of the GroupMute property
     *
     * Can only be called if EnablePropertyGroupMute has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyGroupMute(TBool aValue);
    /**
     * Get a copy of the value of the GroupMute property
     *
     * Can only be called if EnablePropertyGroupMute has previously been called.
     */
    void GetPropertyGroupMute(TBool& aValue);
    /**
     * Set the value of the GroupStatus property
     *
     * Can only be called if EnablePropertyGroupStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyGroupStatus(const Brx& aValue);
    /**
     * Get a copy of the value of the GroupStatus property
     *
     * Can only be called if EnablePropertyGroupStatus has previously been called.
     */
    void GetPropertyGroupStatus(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgGroupConfig1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgGroupConfig1(DviDevice& aDevice);
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
private:
    /**
     * SetGroupMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetGroupMode action for the owning device.
     * Must be implemented iff EnableActionSetGroupMode was called.
     */
    virtual void SetGroupMode(IDvInvocation& aInvocation, const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName);
    /**
     * GetGroupMode action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetGroupMode action for the owning device.
     * Must be implemented iff EnableActionGetGroupMode was called.
     */
    virtual void GetGroupMode(IDvInvocation& aInvocation, IDvInvocationResponseString& aGroupMode, IDvInvocationResponseString& aGroupID, IDvInvocationResponseString& aGroupName);
    /**
     * SetGroupVolume action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetGroupVolume action for the owning device.
     * Must be implemented iff EnableActionSetGroupVolume was called.
     */
    virtual void SetGroupVolume(IDvInvocation& aInvocation, TUint aGroupVolume);
    /**
     * GetGroupVolume action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetGroupVolume action for the owning device.
     * Must be implemented iff EnableActionGetGroupVolume was called.
     */
    virtual void GetGroupVolume(IDvInvocation& aInvocation, IDvInvocationResponseUint& aGroupVolume);
    /**
     * SetGroupMute action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetGroupMute action for the owning device.
     * Must be implemented iff EnableActionSetGroupMute was called.
     */
    virtual void SetGroupMute(IDvInvocation& aInvocation, TBool aGroupMute);
    /**
     * GetGroupMute action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetGroupMute action for the owning device.
     * Must be implemented iff EnableActionGetGroupMute was called.
     */
    virtual void GetGroupMute(IDvInvocation& aInvocation, IDvInvocationResponseBool& aGroupMute);
    /**
     * GetGroupStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetGroupStatus action for the owning device.
     * Must be implemented iff EnableActionGetGroupStatus was called.
     */
    virtual void GetGroupStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aGroupStatus);
private:
    DvProviderAvOpenhomeOrgGroupConfig1();
    void Construct();
    void DoSetGroupMode(IDviInvocation& aInvocation);
    void DoGetGroupMode(IDviInvocation& aInvocation);
    void DoSetGroupVolume(IDviInvocation& aInvocation);
    void DoGetGroupVolume(IDviInvocation& aInvocation);
    void DoSetGroupMute(IDviInvocation& aInvocation);
    void DoGetGroupMute(IDviInvocation& aInvocation);
    void DoGetGroupStatus(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyGroupMode;
    PropertyString* iPropertyGroupName;
    PropertyString* iPropertyGroupID;
    PropertyUint* iPropertyGroupVolume;
    PropertyBool* iPropertyGroupMute;
    PropertyString* iPropertyGroupStatus;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGGROUPCONFIG1

