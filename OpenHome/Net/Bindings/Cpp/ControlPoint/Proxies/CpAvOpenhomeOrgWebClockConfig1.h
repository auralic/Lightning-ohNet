#ifndef HEADER_AVOPENHOMEORGWEBCLOCKCONFIG1CPP
#define HEADER_AVOPENHOMEORGWEBCLOCKCONFIG1CPP

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
class ICpProxyAvOpenhomeOrgWebClockConfig1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgWebClockConfig1Cpp() {}
    virtual void SyncGetClockConfig(std::string& aClockConfig) = 0;
    virtual void BeginGetClockConfig(FunctorAsync& aFunctor) = 0;
    virtual void EndGetClockConfig(IAsync& aAsync, std::string& aClockConfig) = 0;
    virtual void SyncSetClockConfig(const std::string& aClockConfig) = 0;
    virtual void BeginSetClockConfig(const std::string& aClockConfig, FunctorAsync& aFunctor) = 0;
    virtual void EndSetClockConfig(IAsync& aAsync) = 0;
    virtual void SetPropertyAliveChanged(Functor& aAliveChanged) = 0;
    virtual void PropertyAlive(bool& aAlive) const = 0;
    virtual void SetPropertyClockConfigChanged(Functor& aClockConfigChanged) = 0;
    virtual void PropertyClockConfig(std::string& aClockConfig) const = 0;
};

/**
 * Proxy for av.openhome.org:WebClockConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgWebClockConfig1Cpp : public ICpProxyAvOpenhomeOrgWebClockConfig1Cpp
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
    CpProxyAvOpenhomeOrgWebClockConfig1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgWebClockConfig1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aClockConfig
     */
    void SyncGetClockConfig(std::string& aClockConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetClockConfig().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetClockConfig(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aClockConfig
     */
    void EndGetClockConfig(IAsync& aAsync, std::string& aClockConfig);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aClockConfig
     */
    void SyncSetClockConfig(const std::string& aClockConfig);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetClockConfig().
     *
     * @param[in] aClockConfig
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetClockConfig(const std::string& aClockConfig, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetClockConfig(IAsync& aAsync);

    /**
     * Set a callback to be run when the Alive state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebClockConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAliveChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ClockConfig state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgWebClockConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyClockConfigChanged(Functor& aFunctor);

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
     * Query the value of the ClockConfig property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aClockConfig
     */
    void PropertyClockConfig(std::string& aClockConfig) const;
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
    void ClockConfigPropertyChanged();
private:
    Action* iActionGetClockConfig;
    Action* iActionSetClockConfig;
    PropertyBool* iAlive;
    PropertyString* iClockConfig;
    Functor iAliveChanged;
    Functor iClockConfigChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGWEBCLOCKCONFIG1CPP

