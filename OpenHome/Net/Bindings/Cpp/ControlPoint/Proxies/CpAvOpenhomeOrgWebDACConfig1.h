#ifndef HEADER_AVOPENHOMEORGWEBDACCONFIG1CPP
#define HEADER_AVOPENHOMEORGWEBDACCONFIG1CPP

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
class ICpProxyAvOpenhomeOrgWebDACConfig1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgWebDACConfig1Cpp() {}
    virtual void SyncGetDACConfig(std::string& aDACConfig) = 0;
    virtual void BeginGetDACConfig(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDACConfig(IAsync& aAsync, std::string& aDACConfig) = 0;
    virtual void SyncSetDACConfig(const std::string& aDACConfig) = 0;
    virtual void BeginSetDACConfig(const std::string& aDACConfig, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDACConfig(IAsync& aAsync) = 0;
    virtual void SetPropertyAliveChanged(Functor& aAliveChanged) = 0;
    virtual void PropertyAlive(bool& aAlive) const = 0;
    virtual void SetPropertyDACConfigChanged(Functor& aDACConfigChanged) = 0;
    virtual void PropertyDACConfig(std::string& aDACConfig) const = 0;
    virtual void SetPropertyCurrentActionChanged(Functor& aCurrentActionChanged) = 0;
    virtual void PropertyCurrentAction(uint32_t& aCurrentAction) const = 0;
};

/**
 * Proxy for av.openhome.org:WebDACConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgWebDACConfig1Cpp : public ICpProxyAvOpenhomeOrgWebDACConfig1Cpp
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
    CpProxyAvOpenhomeOrgWebDACConfig1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgWebDACConfig1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aDACConfig
     */
    void SyncGetDACConfig(std::string& aDACConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDACConfig().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDACConfig(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aDACConfig
     */
    void EndGetDACConfig(IAsync& aAsync, std::string& aDACConfig);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDACConfig
     */
    void SyncSetDACConfig(const std::string& aDACConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetDACConfig().
     *
     * @param[in] aDACConfig
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetDACConfig(const std::string& aDACConfig, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetDACConfig(IAsync& aAsync);

    /**
     * Set a callback to be run when the Alive state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDACConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAliveChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the DACConfig state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDACConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDACConfigChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CurrentAction state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebDACConfig1Cpp instance will not overlap.
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
     * Query the value of the DACConfig property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDACConfig
     */
    void PropertyDACConfig(std::string& aDACConfig) const;
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
    void DACConfigPropertyChanged();
    void CurrentActionPropertyChanged();
private:
    Action* iActionGetDACConfig;
    Action* iActionSetDACConfig;
    PropertyBool* iAlive;
    PropertyString* iDACConfig;
    PropertyUint* iCurrentAction;
    Functor iAliveChanged;
    Functor iDACConfigChanged;
    Functor iCurrentActionChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGWEBDACCONFIG1CPP

