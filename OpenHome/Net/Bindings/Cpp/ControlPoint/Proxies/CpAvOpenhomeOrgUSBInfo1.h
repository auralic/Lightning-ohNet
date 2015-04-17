#ifndef HEADER_AVOPENHOMEORGUSBINFO1CPP
#define HEADER_AVOPENHOMEORGUSBINFO1CPP

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
 * Proxy for av.openhome.org:USBInfo:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgUSBInfo1Cpp : public CpProxy
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
    CpProxyAvOpenhomeOrgUSBInfo1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgUSBInfo1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aUSBPlugStatus
     * @param[out] aUSBERRORInfo
     * @param[out] aUSBCapacity
     * @param[out] aUSBFileCount
     */
    void SyncGetUSBInfo(bool& aUSBPlugStatus, std::string& aUSBERRORInfo, std::string& aUSBCapacity, std::string& aUSBFileCount);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetUSBInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetUSBInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aUSBPlugStatus
     * @param[out] aUSBERRORInfo
     * @param[out] aUSBCapacity
     * @param[out] aUSBFileCount
     */
    void EndGetUSBInfo(IAsync& aAsync, bool& aUSBPlugStatus, std::string& aUSBERRORInfo, std::string& aUSBCapacity, std::string& aUSBFileCount);


private:
private:
    Action* iActionGetUSBInfo;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGUSBINFO1CPP

