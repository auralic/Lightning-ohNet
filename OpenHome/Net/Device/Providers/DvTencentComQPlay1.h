#ifndef HEADER_DVTENCENTCOMQPLAY1
#define HEADER_DVTENCENTCOMQPLAY1

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
 * Provider for the tencent.com:QPlay:1 UPnP service
 * @ingroup Providers
 */
class DvProviderTencentComQPlay1 : public DvProvider
{
public:
    virtual ~DvProviderTencentComQPlay1() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderTencentComQPlay1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderTencentComQPlay1(DviDevice& aDevice);
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
    virtual void SetNetwork(IDvInvocation& aInvocation, const Brx& aSSID, const Brx& aKey, const Brx& aAuthAlgo, const Brx& aCipherAlgo);
    /**
     * QPlayAuth action.
     *
     * Will be called when the device stack receives an invocation of the
     * QPlayAuth action for the owning device.
     * Must be implemented iff EnableActionQPlayAuth was called.
     */
    virtual void QPlayAuth(IDvInvocation& aInvocation, const Brx& aSeed, IDvInvocationResponseString& aCode, IDvInvocationResponseString& aMID, IDvInvocationResponseString& aDID);
    /**
     * InsertTracks action.
     *
     * Will be called when the device stack receives an invocation of the
     * InsertTracks action for the owning device.
     * Must be implemented iff EnableActionInsertTracks was called.
     */
    virtual void InsertTracks(IDvInvocation& aInvocation, const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aTracksMetaData, IDvInvocationResponseString& aNumberOfSuccess);
    /**
     * RemoveTracks action.
     *
     * Will be called when the device stack receives an invocation of the
     * RemoveTracks action for the owning device.
     * Must be implemented iff EnableActionRemoveTracks was called.
     */
    virtual void RemoveTracks(IDvInvocation& aInvocation, const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNumberOfTracks, IDvInvocationResponseString& aNumberOfSuccess);
    /**
     * GetTracksInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetTracksInfo action for the owning device.
     * Must be implemented iff EnableActionGetTracksInfo was called.
     */
    virtual void GetTracksInfo(IDvInvocation& aInvocation, const Brx& aStartingIndex, const Brx& aNumberOfTracks, IDvInvocationResponseString& aTracksMetaData);
    /**
     * SetTracksInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetTracksInfo action for the owning device.
     * Must be implemented iff EnableActionSetTracksInfo was called.
     */
    virtual void SetTracksInfo(IDvInvocation& aInvocation, const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNextIndex, const Brx& aTracksMetaData, IDvInvocationResponseString& aNumberOfSuccess);
    /**
     * GetTracksCount action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetTracksCount action for the owning device.
     * Must be implemented iff EnableActionGetTracksCount was called.
     */
    virtual void GetTracksCount(IDvInvocation& aInvocation, IDvInvocationResponseString& aNrTracks);
    /**
     * GetMaxTracks action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetMaxTracks action for the owning device.
     * Must be implemented iff EnableActionGetMaxTracks was called.
     */
    virtual void GetMaxTracks(IDvInvocation& aInvocation, IDvInvocationResponseString& aMaxTracks);
private:
    DvProviderTencentComQPlay1();
    void Construct();
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

#endif // HEADER_DVTENCENTCOMQPLAY1

