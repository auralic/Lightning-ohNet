#ifndef HEADER_DVTENCENTCOMQPLAY1CPP
#define HEADER_DVTENCENTCOMQPLAY1CPP

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
 * Provider for the tencent.com:QPlay:1 UPnP service
 * @ingroup Providers
 */
class DvProviderTencentComQPlay1Cpp : public DvProvider
{
public:
    virtual ~DvProviderTencentComQPlay1Cpp() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderTencentComQPlay1Cpp(DvDeviceStd& aDevice);
    /**
     * Signal that the action SetNetwork is supported.
     * The action's availability will be published in the device's service.xml.
     * SetNetwork must be overridden if this is called.
     */
    void EnableActionSetNetwork();
    /**
     * Signal that the action QPlayAuth is supported.
     * The action's availability will be published in the device's service.xml.
     * QPlayAuth must be overridden if this is called.
     */
    void EnableActionQPlayAuth();
    /**
     * Signal that the action InsertTracks is supported.
     * The action's availability will be published in the device's service.xml.
     * InsertTracks must be overridden if this is called.
     */
    void EnableActionInsertTracks();
    /**
     * Signal that the action RemoveTracks is supported.
     * The action's availability will be published in the device's service.xml.
     * RemoveTracks must be overridden if this is called.
     */
    void EnableActionRemoveTracks();
    /**
     * Signal that the action GetTracksInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * GetTracksInfo must be overridden if this is called.
     */
    void EnableActionGetTracksInfo();
    /**
     * Signal that the action SetTracksInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * SetTracksInfo must be overridden if this is called.
     */
    void EnableActionSetTracksInfo();
    /**
     * Signal that the action GetTracksCount is supported.
     * The action's availability will be published in the device's service.xml.
     * GetTracksCount must be overridden if this is called.
     */
    void EnableActionGetTracksCount();
    /**
     * Signal that the action GetMaxTracks is supported.
     * The action's availability will be published in the device's service.xml.
     * GetMaxTracks must be overridden if this is called.
     */
    void EnableActionGetMaxTracks();
private:
    /**
     * SetNetwork action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetNetwork action for the owning device.
     * Must be implemented iff EnableActionSetNetwork was called.
     */
    virtual void SetNetwork(IDvInvocationStd& aInvocation, const std::string& aSSID, const std::string& aKey, const std::string& aAuthAlgo, const std::string& aCipherAlgo);
    /**
     * QPlayAuth action.
     *
     * Will be called when the device stack receives an invocation of the
     * QPlayAuth action for the owning device.
     * Must be implemented iff EnableActionQPlayAuth was called.
     */
    virtual void QPlayAuth(IDvInvocationStd& aInvocation, const std::string& aSeed, std::string& aCode, std::string& aMID, std::string& aDID);
    /**
     * InsertTracks action.
     *
     * Will be called when the device stack receives an invocation of the
     * InsertTracks action for the owning device.
     * Must be implemented iff EnableActionInsertTracks was called.
     */
    virtual void InsertTracks(IDvInvocationStd& aInvocation, const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aTracksMetaData, std::string& aNumberOfSuccess);
    /**
     * RemoveTracks action.
     *
     * Will be called when the device stack receives an invocation of the
     * RemoveTracks action for the owning device.
     * Must be implemented iff EnableActionRemoveTracks was called.
     */
    virtual void RemoveTracks(IDvInvocationStd& aInvocation, const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNumberOfTracks, std::string& aNumberOfSuccess);
    /**
     * GetTracksInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetTracksInfo action for the owning device.
     * Must be implemented iff EnableActionGetTracksInfo was called.
     */
    virtual void GetTracksInfo(IDvInvocationStd& aInvocation, const std::string& aStartingIndex, const std::string& aNumberOfTracks, std::string& aTracksMetaData);
    /**
     * SetTracksInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetTracksInfo action for the owning device.
     * Must be implemented iff EnableActionSetTracksInfo was called.
     */
    virtual void SetTracksInfo(IDvInvocationStd& aInvocation, const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNextIndex, const std::string& aTracksMetaData, std::string& aNumberOfSuccess);
    /**
     * GetTracksCount action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetTracksCount action for the owning device.
     * Must be implemented iff EnableActionGetTracksCount was called.
     */
    virtual void GetTracksCount(IDvInvocationStd& aInvocation, std::string& aNrTracks);
    /**
     * GetMaxTracks action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetMaxTracks action for the owning device.
     * Must be implemented iff EnableActionGetMaxTracks was called.
     */
    virtual void GetMaxTracks(IDvInvocationStd& aInvocation, std::string& aMaxTracks);
private:
    DvProviderTencentComQPlay1Cpp();
    void DoSetNetwork(IDviInvocation& aInvocation);
    void DoQPlayAuth(IDviInvocation& aInvocation);
    void DoInsertTracks(IDviInvocation& aInvocation);
    void DoRemoveTracks(IDviInvocation& aInvocation);
    void DoGetTracksInfo(IDviInvocation& aInvocation);
    void DoSetTracksInfo(IDviInvocation& aInvocation);
    void DoGetTracksCount(IDviInvocation& aInvocation);
    void DoGetMaxTracks(IDviInvocation& aInvocation);
private:
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVTENCENTCOMQPLAY1CPP

