#ifndef HEADER_AVOPENHOMEORGRENDERERCONFIG1
#define HEADER_AVOPENHOMEORGRENDERERCONFIG1

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

/**
 * Proxy for av.openhome.org:RendererConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgRendererConfig1 : public CpProxy
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
    CpProxyAvOpenhomeOrgRendererConfig1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgRendererConfig1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aRendererConfig
     */
    void SyncGetRendererConfig(Brh& aRendererConfig);
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
    void EndGetRendererConfig(IAsync& aAsync, Brh& aRendererConfig);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRendererConfig
     */
    void SyncSetRendererConfig(const Brx& aRendererConfig);
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
    void BeginSetRendererConfig(const Brx& aRendererConfig, FunctorAsync& aFunctor);
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
    void SyncGetResamplerConfig(Brh& aResamplerConfig);
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
    void EndGetResamplerConfig(IAsync& aAsync, Brh& aResamplerConfig);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aResamplerConfig
     */
    void SyncSetResamplerConfig(const Brx& aResamplerConfig);
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
    void BeginSetResamplerConfig(const Brx& aResamplerConfig, FunctorAsync& aFunctor);
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
    void SyncGetHardwareConfig(Brh& aHardwareConfig);
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
    void EndGetHardwareConfig(IAsync& aAsync, Brh& aHardwareConfig);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aHardwareConfig
     */
    void SyncSetHardwareConfig(const Brx& aHardwareConfig);
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
    void BeginSetHardwareConfig(const Brx& aHardwareConfig, FunctorAsync& aFunctor);
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
    void SyncGetWiFiList(Brh& aWiFiList);
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
    void EndGetWiFiList(IAsync& aAsync, Brh& aWiFiList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aTimeZone
     * @param[in]  aCurrentTime
     * @param[in]  aTimeStamp
     */
    void SyncSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp);
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
    void BeginSetTimeZone(const Brx& aTimeZone, const Brx& aCurrentTime, const Brx& aTimeStamp, FunctorAsync& aFunctor);
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
     * CpProxyAvOpenhomeOrgRendererConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRendererConfigChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ResamplerConfig state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRendererConfig1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyResamplerConfigChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the HardwareConfig state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRendererConfig1 instance will not overlap.
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
    void PropertyRendererConfig(Brhz& aRendererConfig) const;
    /**
     * Query the value of the ResamplerConfig property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aResamplerConfig
     */
    void PropertyResamplerConfig(Brhz& aResamplerConfig) const;
    /**
     * Query the value of the HardwareConfig property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aHardwareConfig
     */
    void PropertyHardwareConfig(Brhz& aHardwareConfig) const;
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

#endif // HEADER_AVOPENHOMEORGRENDERERCONFIG1

