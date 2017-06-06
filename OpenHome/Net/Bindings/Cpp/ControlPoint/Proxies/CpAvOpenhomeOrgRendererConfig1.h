#ifndef HEADER_AVOPENHOMEORGRENDERERCONFIG1CPP
#define HEADER_AVOPENHOMEORGRENDERERCONFIG1CPP

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

/**
 * Proxy for av.openhome.org:RendererConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgRendererConfig1Cpp : public CpProxy
{
public:
    /**
     * Constructor.
     *
     * Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable
     * and reporting of their changes.
     *
     * @param[in]  aDevice   The device to use
     */
    CpProxyAvOpenhomeOrgRendererConfig1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgRendererConfig1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aRendererConfig
     */
    void SyncGetRendererConfig(std::string& aRendererConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetRendererConfig().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetRendererConfig(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aRendererConfig
     */
    void EndGetRendererConfig(IAsync& aAsync, std::string& aRendererConfig);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRendererConfig
     */
    void SyncSetRendererConfig(const std::string& aRendererConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetRendererConfig().
     *
     * @param[in] aRendererConfig
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetRendererConfig(const std::string& aRendererConfig, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetRendererConfig(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aResamplerConfig
     */
    void SyncGetResamplerConfig(std::string& aResamplerConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetResamplerConfig().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetResamplerConfig(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aResamplerConfig
     */
    void EndGetResamplerConfig(IAsync& aAsync, std::string& aResamplerConfig);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aResamplerConfig
     */
    void SyncSetResamplerConfig(const std::string& aResamplerConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetResamplerConfig().
     *
     * @param[in] aResamplerConfig
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetResamplerConfig(const std::string& aResamplerConfig, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetResamplerConfig(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aHardwareConfig
     */
    void SyncGetHardwareConfig(std::string& aHardwareConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetHardwareConfig().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetHardwareConfig(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aHardwareConfig
     */
    void EndGetHardwareConfig(IAsync& aAsync, std::string& aHardwareConfig);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aHardwareConfig
     */
    void SyncSetHardwareConfig(const std::string& aHardwareConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetHardwareConfig().
     *
     * @param[in] aHardwareConfig
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetHardwareConfig(const std::string& aHardwareConfig, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetHardwareConfig(IAsync& aAsync);

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
     * Set a callback to be run when the RendererConfig state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRendererConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRendererConfigChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ResamplerConfig state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRendererConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyResamplerConfigChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the HardwareConfig state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRendererConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyHardwareConfigChanged(Functor& aFunctor);

    /**
     * Query the value of the RendererConfig property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRendererConfig
     */
    void PropertyRendererConfig(std::string& aRendererConfig) const;
    /**
     * Query the value of the ResamplerConfig property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aResamplerConfig
     */
    void PropertyResamplerConfig(std::string& aResamplerConfig) const;
    /**
     * Query the value of the HardwareConfig property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aHardwareConfig
     */
    void PropertyHardwareConfig(std::string& aHardwareConfig) const;
private:
    void RendererConfigPropertyChanged();
    void ResamplerConfigPropertyChanged();
    void HardwareConfigPropertyChanged();
private:
    Action* iActionGetRendererConfig;
    Action* iActionSetRendererConfig;
    Action* iActionGetResamplerConfig;
    Action* iActionSetResamplerConfig;
    Action* iActionGetHardwareConfig;
    Action* iActionSetHardwareConfig;
    Action* iActionGetWiFiList;
    Action* iActionSetTimeZone;
    PropertyString* iRendererConfig;
    PropertyString* iResamplerConfig;
    PropertyString* iHardwareConfig;
    Functor iRendererConfigChanged;
    Functor iResamplerConfigChanged;
    Functor iHardwareConfigChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGRENDERERCONFIG1CPP

