#ifndef HEADER_AVOPENHOMEORGTESTRESAMPLERCONFIG1CPP
#define HEADER_AVOPENHOMEORGTESTRESAMPLERCONFIG1CPP

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
class ICpProxyAvOpenhomeOrgTestResamplerConfig1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgTestResamplerConfig1Cpp() {}
    virtual void SyncSetResamplerConfig(const std::string& aResamplerConfig) = 0;
    virtual void BeginSetResamplerConfig(const std::string& aResamplerConfig, FunctorAsync& aFunctor) = 0;
    virtual void EndSetResamplerConfig(IAsync& aAsync) = 0;
    virtual void SyncGetResamplerConfig(std::string& aResamplerConfig) = 0;
    virtual void BeginGetResamplerConfig(FunctorAsync& aFunctor) = 0;
    virtual void EndGetResamplerConfig(IAsync& aAsync, std::string& aResamplerConfig) = 0;
    virtual void SyncSetPCMAutoDetect(bool aPCMAutoDetect) = 0;
    virtual void BeginSetPCMAutoDetect(bool aPCMAutoDetect, FunctorAsync& aFunctor) = 0;
    virtual void EndSetPCMAutoDetect(IAsync& aAsync) = 0;
    virtual void SyncGetPCMAutoDetect(bool& aPCMAutoDetect) = 0;
    virtual void BeginGetPCMAutoDetect(FunctorAsync& aFunctor) = 0;
    virtual void EndGetPCMAutoDetect(IAsync& aAsync, bool& aPCMAutoDetect) = 0;
    virtual void SyncSetDSDtoPCM(bool aDSDtoPCM) = 0;
    virtual void BeginSetDSDtoPCM(bool aDSDtoPCM, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDSDtoPCM(IAsync& aAsync) = 0;
    virtual void SyncGetDSDtoPCM(bool& aDSDtoPCM) = 0;
    virtual void BeginGetDSDtoPCM(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDSDtoPCM(IAsync& aAsync, bool& aDSDtoPCM) = 0;
    virtual void SetPropertyCurrentActionChanged(Functor& aCurrentActionChanged) = 0;
    virtual void PropertyCurrentAction(uint32_t& aCurrentAction) const = 0;
};

/**
 * Proxy for av.openhome.org:TestResamplerConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp : public ICpProxyAvOpenhomeOrgTestResamplerConfig1Cpp
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
    CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp();

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
     * @param[in]  aPCMAutoDetect
     */
    void SyncSetPCMAutoDetect(bool aPCMAutoDetect);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetPCMAutoDetect().
     *
     * @param[in] aPCMAutoDetect
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetPCMAutoDetect(bool aPCMAutoDetect, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetPCMAutoDetect(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aPCMAutoDetect
     */
    void SyncGetPCMAutoDetect(bool& aPCMAutoDetect);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetPCMAutoDetect().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetPCMAutoDetect(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aPCMAutoDetect
     */
    void EndGetPCMAutoDetect(IAsync& aAsync, bool& aPCMAutoDetect);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDSDtoPCM
     */
    void SyncSetDSDtoPCM(bool aDSDtoPCM);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetDSDtoPCM().
     *
     * @param[in] aDSDtoPCM
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetDSDtoPCM(bool aDSDtoPCM, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetDSDtoPCM(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aDSDtoPCM
     */
    void SyncGetDSDtoPCM(bool& aDSDtoPCM);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDSDtoPCM().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDSDtoPCM(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aDSDtoPCM
     */
    void EndGetDSDtoPCM(IAsync& aAsync, bool& aDSDtoPCM);

    /**
     * Set a callback to be run when the CurrentAction state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTestResamplerConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCurrentActionChanged(Functor& aFunctor);

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
    void CurrentActionPropertyChanged();
private:
    Action* iActionSetResamplerConfig;
    Action* iActionGetResamplerConfig;
    Action* iActionSetPCMAutoDetect;
    Action* iActionGetPCMAutoDetect;
    Action* iActionSetDSDtoPCM;
    Action* iActionGetDSDtoPCM;
    PropertyUint* iCurrentAction;
    Functor iCurrentActionChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGTESTRESAMPLERCONFIG1CPP

