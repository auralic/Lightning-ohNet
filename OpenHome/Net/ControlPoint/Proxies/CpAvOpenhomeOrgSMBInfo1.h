#ifndef HEADER_AVOPENHOMEORGSMBINFO1
#define HEADER_AVOPENHOMEORGSMBINFO1

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
 * Proxy for av.openhome.org:SMBInfo:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgSMBInfo1 : public CpProxy
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
    CpProxyAvOpenhomeOrgSMBInfo1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgSMBInfo1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aSMBAddr
     * @param[in]  aSMBUserName
     * @param[in]  aSMBPassWord
     */
    void SyncSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetSMBConfig().
     *
     * @param[in] aSMBAddr
     * @param[in] aSMBUserName
     * @param[in] aSMBPassWord
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetSMBConfig(const Brx& aSMBAddr, const Brx& aSMBUserName, const Brx& aSMBPassWord, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetSMBConfig(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSMBConnectResult
     */
    void SyncGetSMBConnectResult(TBool& aSMBConnectResult);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSMBConnectResult().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSMBConnectResult(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSMBConnectResult
     */
    void EndGetSMBConnectResult(IAsync& aAsync, TBool& aSMBConnectResult);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSMBConnectStatus
     * @param[out] aSMBERRORInfo
     * @param[out] aSMBCapacity
     * @param[out] aSMBFileCount
     */
    void SyncGetSMBInfo(TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSMBInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSMBInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSMBConnectStatus
     * @param[out] aSMBERRORInfo
     * @param[out] aSMBCapacity
     * @param[out] aSMBFileCount
     */
    void EndGetSMBInfo(IAsync& aAsync, TBool& aSMBConnectStatus, Brh& aSMBERRORInfo, Brh& aSMBCapacity, Brh& aSMBFileCount);


private:
private:
    Action* iActionSetSMBConfig;
    Action* iActionGetSMBConnectResult;
    Action* iActionGetSMBInfo;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGSMBINFO1

