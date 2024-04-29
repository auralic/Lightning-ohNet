#ifndef HEADER_AVOPENHOMEORGSERVERCONFIG1CPP
#define HEADER_AVOPENHOMEORGSERVERCONFIG1CPP

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
class ICpProxyAvOpenhomeOrgServerConfig1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgServerConfig1Cpp() {}
    virtual void SyncSetPlayCD(bool aPlayCD) = 0;
    virtual void BeginSetPlayCD(bool aPlayCD, FunctorAsync& aFunctor) = 0;
    virtual void EndSetPlayCD(IAsync& aAsync) = 0;
    virtual void SyncSetServerName(const std::string& aServerName) = 0;
    virtual void BeginSetServerName(const std::string& aServerName, FunctorAsync& aFunctor) = 0;
    virtual void EndSetServerName(IAsync& aAsync) = 0;
    virtual void SyncGetServerVersion(std::string& aServerVersion) = 0;
    virtual void BeginGetServerVersion(FunctorAsync& aFunctor) = 0;
    virtual void EndGetServerVersion(IAsync& aAsync, std::string& aServerVersion) = 0;
    virtual void SyncGetProgressInfo(std::string& aProgress) = 0;
    virtual void BeginGetProgressInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndGetProgressInfo(IAsync& aAsync, std::string& aProgress) = 0;
    virtual void SyncGetScanVersion(std::string& aScanVersion) = 0;
    virtual void BeginGetScanVersion(FunctorAsync& aFunctor) = 0;
    virtual void EndGetScanVersion(IAsync& aAsync, std::string& aScanVersion) = 0;
    virtual void SyncGetWorkMode(std::string& aWorkMode, std::string& aWorkModeList) = 0;
    virtual void BeginGetWorkMode(FunctorAsync& aFunctor) = 0;
    virtual void EndGetWorkMode(IAsync& aAsync, std::string& aWorkMode, std::string& aWorkModeList) = 0;
    virtual void SyncSetWorkMode(const std::string& aWorkMode) = 0;
    virtual void BeginSetWorkMode(const std::string& aWorkMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetWorkMode(IAsync& aAsync) = 0;
    virtual void SyncDelAllLocalDB() = 0;
    virtual void BeginDelAllLocalDB(FunctorAsync& aFunctor) = 0;
    virtual void EndDelAllLocalDB(IAsync& aAsync) = 0;
    virtual void SyncInitHDD() = 0;
    virtual void BeginInitHDD(FunctorAsync& aFunctor) = 0;
    virtual void EndInitHDD(IAsync& aAsync) = 0;
    virtual void SyncRescan() = 0;
    virtual void BeginRescan(FunctorAsync& aFunctor) = 0;
    virtual void EndRescan(IAsync& aAsync) = 0;
    virtual void SyncHandMount() = 0;
    virtual void BeginHandMount(FunctorAsync& aFunctor) = 0;
    virtual void EndHandMount(IAsync& aAsync) = 0;
    virtual void SyncHandUMount() = 0;
    virtual void BeginHandUMount(FunctorAsync& aFunctor) = 0;
    virtual void EndHandUMount(IAsync& aAsync) = 0;
    virtual void SyncGetDiskInfo(bool& aIsConnected, std::string& aStatusCode, std::string& aStatusInfo, std::string& aCapacity, std::string& aFileCount) = 0;
    virtual void BeginGetDiskInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDiskInfo(IAsync& aAsync, bool& aIsConnected, std::string& aStatusCode, std::string& aStatusInfo, std::string& aCapacity, std::string& aFileCount) = 0;
    virtual void SyncGetSMBConfig(std::string& aSMBAddr, std::string& aSMBUserName, std::string& aSMBPassWord) = 0;
    virtual void BeginGetSMBConfig(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSMBConfig(IAsync& aAsync, std::string& aSMBAddr, std::string& aSMBUserName, std::string& aSMBPassWord) = 0;
    virtual void SyncSetSMBConfig(const std::string& aSMBAddr, const std::string& aSMBUserName, const std::string& aSMBPassWord) = 0;
    virtual void BeginSetSMBConfig(const std::string& aSMBAddr, const std::string& aSMBUserName, const std::string& aSMBPassWord, FunctorAsync& aFunctor) = 0;
    virtual void EndSetSMBConfig(IAsync& aAsync) = 0;
    virtual void SyncGetDriveMountResult(bool& aDriveMountResult) = 0;
    virtual void BeginGetDriveMountResult(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDriveMountResult(IAsync& aAsync, bool& aDriveMountResult) = 0;
    virtual void SyncEditTrack(const std::string& aEditValue) = 0;
    virtual void BeginEditTrack(const std::string& aEditValue, FunctorAsync& aFunctor) = 0;
    virtual void EndEditTrack(IAsync& aAsync) = 0;
    virtual void SyncScanVersionDiff(std::string& aScanVersionDiffValue) = 0;
    virtual void BeginScanVersionDiff(FunctorAsync& aFunctor) = 0;
    virtual void EndScanVersionDiff(IAsync& aAsync, std::string& aScanVersionDiffValue) = 0;
    virtual void SyncGetInitHDDResult(bool& aInitHDDResult) = 0;
    virtual void BeginGetInitHDDResult(FunctorAsync& aFunctor) = 0;
    virtual void EndGetInitHDDResult(IAsync& aAsync, bool& aInitHDDResult) = 0;
    virtual void SyncGetHDDHasInited(bool& aHDDHasInited) = 0;
    virtual void BeginGetHDDHasInited(FunctorAsync& aFunctor) = 0;
    virtual void EndGetHDDHasInited(IAsync& aAsync, bool& aHDDHasInited) = 0;
    virtual void SyncUSBImport() = 0;
    virtual void BeginUSBImport(FunctorAsync& aFunctor) = 0;
    virtual void EndUSBImport(IAsync& aAsync) = 0;
    virtual void SyncGetDISKCapacity(std::string& aDISKTotal, std::string& aDISKUsed, std::string& aDISKAvailable) = 0;
    virtual void BeginGetDISKCapacity(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDISKCapacity(IAsync& aAsync, std::string& aDISKTotal, std::string& aDISKUsed, std::string& aDISKAvailable) = 0;
    virtual void SyncForceRescan() = 0;
    virtual void BeginForceRescan(FunctorAsync& aFunctor) = 0;
    virtual void EndForceRescan(IAsync& aAsync) = 0;
    virtual void SyncGetCurrentScanFile(std::string& aScanFile) = 0;
    virtual void BeginGetCurrentScanFile(FunctorAsync& aFunctor) = 0;
    virtual void EndGetCurrentScanFile(IAsync& aAsync, std::string& aScanFile) = 0;
    virtual void SyncGetServerConfig(std::string& aGetValue) = 0;
    virtual void BeginGetServerConfig(FunctorAsync& aFunctor) = 0;
    virtual void EndGetServerConfig(IAsync& aAsync, std::string& aGetValue) = 0;
    virtual void SyncSetServerConfig(const std::string& aSetValue) = 0;
    virtual void BeginSetServerConfig(const std::string& aSetValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetServerConfig(IAsync& aAsync) = 0;
    virtual void SetPropertyPlayCDChanged(Functor& aPlayCDChanged) = 0;
    virtual void PropertyPlayCD(bool& aPlayCD) const = 0;
    virtual void SetPropertyAliveChanged(Functor& aAliveChanged) = 0;
    virtual void PropertyAlive(bool& aAlive) const = 0;
    virtual void SetPropertySubscriptValueChanged(Functor& aSubscriptValueChanged) = 0;
    virtual void PropertySubscriptValue(std::string& aSubscriptValue) const = 0;
};

/**
 * Proxy for av.openhome.org:ServerConfig:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgServerConfig1Cpp : public ICpProxyAvOpenhomeOrgServerConfig1Cpp
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
    CpProxyAvOpenhomeOrgServerConfig1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgServerConfig1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aPlayCD
     */
    void SyncSetPlayCD(bool aPlayCD);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetPlayCD().
     *
     * @param[in] aPlayCD
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetPlayCD(bool aPlayCD, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetPlayCD(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServerName
     */
    void SyncSetServerName(const std::string& aServerName);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetServerName().
     *
     * @param[in] aServerName
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetServerName(const std::string& aServerName, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetServerName(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aServerVersion
     */
    void SyncGetServerVersion(std::string& aServerVersion);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetServerVersion().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetServerVersion(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aServerVersion
     */
    void EndGetServerVersion(IAsync& aAsync, std::string& aServerVersion);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aProgress
     */
    void SyncGetProgressInfo(std::string& aProgress);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetProgressInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetProgressInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aProgress
     */
    void EndGetProgressInfo(IAsync& aAsync, std::string& aProgress);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aScanVersion
     */
    void SyncGetScanVersion(std::string& aScanVersion);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetScanVersion().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetScanVersion(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aScanVersion
     */
    void EndGetScanVersion(IAsync& aAsync, std::string& aScanVersion);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aWorkMode
     * @param[out] aWorkModeList
     */
    void SyncGetWorkMode(std::string& aWorkMode, std::string& aWorkModeList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetWorkMode().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetWorkMode(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aWorkMode
     * @param[out] aWorkModeList
     */
    void EndGetWorkMode(IAsync& aAsync, std::string& aWorkMode, std::string& aWorkModeList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aWorkMode
     */
    void SyncSetWorkMode(const std::string& aWorkMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetWorkMode().
     *
     * @param[in] aWorkMode
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetWorkMode(const std::string& aWorkMode, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetWorkMode(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncDelAllLocalDB();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDelAllLocalDB().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDelAllLocalDB(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndDelAllLocalDB(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncInitHDD();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndInitHDD().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginInitHDD(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndInitHDD(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncRescan();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndRescan().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginRescan(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndRescan(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncHandMount();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndHandMount().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginHandMount(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndHandMount(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncHandUMount();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndHandUMount().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginHandUMount(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndHandUMount(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aIsConnected
     * @param[out] aStatusCode
     * @param[out] aStatusInfo
     * @param[out] aCapacity
     * @param[out] aFileCount
     */
    void SyncGetDiskInfo(bool& aIsConnected, std::string& aStatusCode, std::string& aStatusInfo, std::string& aCapacity, std::string& aFileCount);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDiskInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDiskInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aIsConnected
     * @param[out] aStatusCode
     * @param[out] aStatusInfo
     * @param[out] aCapacity
     * @param[out] aFileCount
     */
    void EndGetDiskInfo(IAsync& aAsync, bool& aIsConnected, std::string& aStatusCode, std::string& aStatusInfo, std::string& aCapacity, std::string& aFileCount);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSMBAddr
     * @param[out] aSMBUserName
     * @param[out] aSMBPassWord
     */
    void SyncGetSMBConfig(std::string& aSMBAddr, std::string& aSMBUserName, std::string& aSMBPassWord);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSMBConfig().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSMBConfig(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSMBAddr
     * @param[out] aSMBUserName
     * @param[out] aSMBPassWord
     */
    void EndGetSMBConfig(IAsync& aAsync, std::string& aSMBAddr, std::string& aSMBUserName, std::string& aSMBPassWord);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aSMBAddr
     * @param[in]  aSMBUserName
     * @param[in]  aSMBPassWord
     */
    void SyncSetSMBConfig(const std::string& aSMBAddr, const std::string& aSMBUserName, const std::string& aSMBPassWord);
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
    void BeginSetSMBConfig(const std::string& aSMBAddr, const std::string& aSMBUserName, const std::string& aSMBPassWord, FunctorAsync& aFunctor);
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
     * @param[out] aDriveMountResult
     */
    void SyncGetDriveMountResult(bool& aDriveMountResult);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDriveMountResult().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDriveMountResult(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aDriveMountResult
     */
    void EndGetDriveMountResult(IAsync& aAsync, bool& aDriveMountResult);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aEditValue
     */
    void SyncEditTrack(const std::string& aEditValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndEditTrack().
     *
     * @param[in] aEditValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginEditTrack(const std::string& aEditValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndEditTrack(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aScanVersionDiffValue
     */
    void SyncScanVersionDiff(std::string& aScanVersionDiffValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndScanVersionDiff().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginScanVersionDiff(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aScanVersionDiffValue
     */
    void EndScanVersionDiff(IAsync& aAsync, std::string& aScanVersionDiffValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aInitHDDResult
     */
    void SyncGetInitHDDResult(bool& aInitHDDResult);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetInitHDDResult().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetInitHDDResult(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aInitHDDResult
     */
    void EndGetInitHDDResult(IAsync& aAsync, bool& aInitHDDResult);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aHDDHasInited
     */
    void SyncGetHDDHasInited(bool& aHDDHasInited);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetHDDHasInited().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetHDDHasInited(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aHDDHasInited
     */
    void EndGetHDDHasInited(IAsync& aAsync, bool& aHDDHasInited);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncUSBImport();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndUSBImport().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginUSBImport(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndUSBImport(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aDISKTotal
     * @param[out] aDISKUsed
     * @param[out] aDISKAvailable
     */
    void SyncGetDISKCapacity(std::string& aDISKTotal, std::string& aDISKUsed, std::string& aDISKAvailable);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDISKCapacity().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDISKCapacity(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aDISKTotal
     * @param[out] aDISKUsed
     * @param[out] aDISKAvailable
     */
    void EndGetDISKCapacity(IAsync& aAsync, std::string& aDISKTotal, std::string& aDISKUsed, std::string& aDISKAvailable);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncForceRescan();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndForceRescan().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginForceRescan(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndForceRescan(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aScanFile
     */
    void SyncGetCurrentScanFile(std::string& aScanFile);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetCurrentScanFile().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetCurrentScanFile(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aScanFile
     */
    void EndGetCurrentScanFile(IAsync& aAsync, std::string& aScanFile);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aGetValue
     */
    void SyncGetServerConfig(std::string& aGetValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetServerConfig().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetServerConfig(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aGetValue
     */
    void EndGetServerConfig(IAsync& aAsync, std::string& aGetValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aSetValue
     */
    void SyncSetServerConfig(const std::string& aSetValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetServerConfig().
     *
     * @param[in] aSetValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetServerConfig(const std::string& aSetValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetServerConfig(IAsync& aAsync);

    /**
     * Set a callback to be run when the PlayCD state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgServerConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPlayCDChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Alive state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgServerConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAliveChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SubscriptValue state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgServerConfig1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySubscriptValueChanged(Functor& aFunctor);

    /**
     * Query the value of the PlayCD property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPlayCD
     */
    void PropertyPlayCD(bool& aPlayCD) const;
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
     * Query the value of the SubscriptValue property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSubscriptValue
     */
    void PropertySubscriptValue(std::string& aSubscriptValue) const;
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
    void PlayCDPropertyChanged();
    void AlivePropertyChanged();
    void SubscriptValuePropertyChanged();
private:
    Action* iActionSetPlayCD;
    Action* iActionSetServerName;
    Action* iActionGetServerVersion;
    Action* iActionGetProgressInfo;
    Action* iActionGetScanVersion;
    Action* iActionGetWorkMode;
    Action* iActionSetWorkMode;
    Action* iActionDelAllLocalDB;
    Action* iActionInitHDD;
    Action* iActionRescan;
    Action* iActionHandMount;
    Action* iActionHandUMount;
    Action* iActionGetDiskInfo;
    Action* iActionGetSMBConfig;
    Action* iActionSetSMBConfig;
    Action* iActionGetDriveMountResult;
    Action* iActionEditTrack;
    Action* iActionScanVersionDiff;
    Action* iActionGetInitHDDResult;
    Action* iActionGetHDDHasInited;
    Action* iActionUSBImport;
    Action* iActionGetDISKCapacity;
    Action* iActionForceRescan;
    Action* iActionGetCurrentScanFile;
    Action* iActionGetServerConfig;
    Action* iActionSetServerConfig;
    PropertyBool* iPlayCD;
    PropertyBool* iAlive;
    PropertyString* iSubscriptValue;
    Functor iPlayCDChanged;
    Functor iAliveChanged;
    Functor iSubscriptValueChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGSERVERCONFIG1CPP

