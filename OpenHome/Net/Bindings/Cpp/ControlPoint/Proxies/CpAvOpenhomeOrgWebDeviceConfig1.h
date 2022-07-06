#ifndef HEADER_AVOPENHOMEORGWEBDEVICECONFIG1CPP
#define HEADER_AVOPENHOMEORGWEBDEVICECONFIG1CPP

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
class ICpProxyAvOpenhomeOrgWebDeviceConfig1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgWebDeviceConfig1Cpp() {}
    virtual void SyncGetDeviceConfig(std::string& aDeviceConfig) = 0;
    virtual void BeginGetDeviceConfig(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDeviceConfig(IAsync& aAsync, std::string& aDeviceConfig) = 0;
    virtual void SyncSetDeviceConfig(const std::string& aDeviceConfig) = 0;
    virtual void BeginSetDeviceConfig(const std::string& aDeviceConfig, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDeviceConfig(IAsync& aAsync) = 0;
    virtual void SyncGetWiFiList(std::string& aWiFiList) = 0;
    virtual void BeginGetWiFiList(FunctorAsync& aFunctor) = 0;
    virtual void EndGetWiFiList(IAsync& aAsync, std::string& aWiFiList) = 0;
    virtual void SyncSetTimeZone(const std::string& aTimeZone, const std::string& aCurrentTime, const std::string& aTimeStamp) = 0;
    virtual void BeginSetTimeZone(const std::string& aTimeZone, const std::string& aCurrentTime, const std::string& aTimeStamp, FunctorAsync& aFunctor) = 0;
    virtual void EndSetTimeZone(IAsync& aAsync) = 0;
    virtual void SyncGetServiceLocation(std::string& aServiceLoaction) = 0;
    virtual void BeginGetServiceLocation(FunctorAsync& aFunctor) = 0;
    virtual void EndGetServiceLocation(IAsync& aAsync, std::string& aServiceLoaction) = 0;
    virtual void SetPropertyAliveChanged(Functor& aAliveChanged) = 0;
    virtual void PropertyAlive(bool& aAlive) const = 0;
    virtual void SetPropertyDeviceConfigChanged(Functor& aDeviceConfigChanged) = 0;
    virtual void PropertyDeviceConfig(std::string& aDeviceConfig) const = 0;
    virtual void SetPropertyCurrentActionChanged(Functor& aCurrentActionChanged) = 0;
    virtual void PropertyCurrentAction(uint32_t& aCurrentAction) const = 0;
};

/**
 * Proxy for av.openhome.org:WebDeviceConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp : public ICpProxyAvOpenhomeOrgWebDeviceConfig1Cpp
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
    CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aDeviceConfig
     */
    void SyncGetDeviceConfig(std::string& aDeviceConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDeviceConfig().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDeviceConfig(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aDeviceConfig
     */
    void EndGetDeviceConfig(IAsync& aAsync, std::string& aDeviceConfig);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDeviceConfig
     */
    void SyncSetDeviceConfig(const std::string& aDeviceConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetDeviceConfig().
     *
     * @param[in] aDeviceConfig
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetDeviceConfig(const std::string& aDeviceConfig, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetDeviceConfig(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aWiFiList
     */
    void SyncGetWiFiList(std::string& aWiFiList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetWiFiList().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetWiFiList(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aWiFiList
     */
    void EndGetWiFiList(IAsync& aAsync, std::string& aWiFiList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aTimeZone
     * @param[in]  aCurrentTime
     * @param[in]  aTimeStamp
     */
    void SyncSetTimeZone(const std::string& aTimeZone, const std::string& aCurrentTime, const std::string& aTimeStamp);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetTimeZone().
     *
     * @param[in] aTimeZone
     * @param[in] aCurrentTime
     * @param[in] aTimeStamp
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetTimeZone(const std::string& aTimeZone, const std::string& aCurrentTime, const std::string& aTimeStamp, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetTimeZone(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aServiceLoaction
     */
    void SyncGetServiceLocation(std::string& aServiceLoaction);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetServiceLocation().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetServiceLocation(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aServiceLoaction
     */
    void EndGetServiceLocation(IAsync& aAsync, std::string& aServiceLoaction);

    /**
     * Set a callback to be run when the Alive state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAliveChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the DeviceConfig state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDeviceConfigChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CurrentAction state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDeviceConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCurrentActionChanged(Functor& aFunctor);

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
     * Query the value of the DeviceConfig property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDeviceConfig
     */
    void PropertyDeviceConfig(std::string& aDeviceConfig) const;
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
    void AlivePropertyChanged();
    void DeviceConfigPropertyChanged();
    void CurrentActionPropertyChanged();
private:
    Action* iActionGetDeviceConfig;
    Action* iActionSetDeviceConfig;
    Action* iActionGetWiFiList;
    Action* iActionSetTimeZone;
    Action* iActionGetServiceLocation;
    PropertyBool* iAlive;
    PropertyString* iDeviceConfig;
    PropertyUint* iCurrentAction;
    Functor iAliveChanged;
    Functor iDeviceConfigChanged;
    Functor iCurrentActionChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGWEBDEVICECONFIG1CPP

