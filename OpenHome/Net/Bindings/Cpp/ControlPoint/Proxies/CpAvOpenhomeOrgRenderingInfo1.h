#ifndef HEADER_AVOPENHOMEORGRENDERINGINFO1CPP
#define HEADER_AVOPENHOMEORGRENDERINGINFO1CPP

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
class ICpProxyAvOpenhomeOrgRenderingInfo1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgRenderingInfo1Cpp() {}
    virtual void SyncGetEntireInfo(std::string& aInfo) = 0;
    virtual void BeginGetEntireInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndGetEntireInfo(IAsync& aAsync, std::string& aInfo) = 0;
    virtual void SetPropertyInfoChanged(Functor& aInfoChanged) = 0;
    virtual void PropertyInfo(std::string& aInfo) const = 0;
};

/**
 * Proxy for av.openhome.org:RenderingInfo:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgRenderingInfo1Cpp : public ICpProxyAvOpenhomeOrgRenderingInfo1Cpp
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
    CpProxyAvOpenhomeOrgRenderingInfo1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgRenderingInfo1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aInfo
     */
    void SyncGetEntireInfo(std::string& aInfo);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetEntireInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetEntireInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aInfo
     */
    void EndGetEntireInfo(IAsync& aAsync, std::string& aInfo);

    /**
     * Set a callback to be run when the Info state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRenderingInfo1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyInfoChanged(Functor& aFunctor);

    /**
     * Query the value of the Info property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aInfo
     */
    void PropertyInfo(std::string& aInfo) const;
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
    void InfoPropertyChanged();
private:
    Action* iActionGetEntireInfo;
    PropertyString* iInfo;
    Functor iInfoChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGRENDERINGINFO1CPP

