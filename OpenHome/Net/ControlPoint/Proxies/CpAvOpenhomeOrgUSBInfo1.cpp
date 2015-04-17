#include "CpAvOpenhomeOrgUSBInfo1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncGetUSBInfoAvOpenhomeOrgUSBInfo1 : public SyncProxyAction
{
public:
    SyncGetUSBInfoAvOpenhomeOrgUSBInfo1(CpProxyAvOpenhomeOrgUSBInfo1& aProxy, TBool& aUSBPlugStatus, Brh& aUSBERRORInfo, Brh& aUSBCapacity, Brh& aUSBFileCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUSBInfoAvOpenhomeOrgUSBInfo1() {}
private:
    CpProxyAvOpenhomeOrgUSBInfo1& iService;
    TBool& iUSBPlugStatus;
    Brh& iUSBERRORInfo;
    Brh& iUSBCapacity;
    Brh& iUSBFileCount;
};

SyncGetUSBInfoAvOpenhomeOrgUSBInfo1::SyncGetUSBInfoAvOpenhomeOrgUSBInfo1(CpProxyAvOpenhomeOrgUSBInfo1& aProxy, TBool& aUSBPlugStatus, Brh& aUSBERRORInfo, Brh& aUSBCapacity, Brh& aUSBFileCount)
    : iService(aProxy)
    , iUSBPlugStatus(aUSBPlugStatus)
    , iUSBERRORInfo(aUSBERRORInfo)
    , iUSBCapacity(aUSBCapacity)
    , iUSBFileCount(aUSBFileCount)
{
}

void SyncGetUSBInfoAvOpenhomeOrgUSBInfo1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUSBInfo(aAsync, iUSBPlugStatus, iUSBERRORInfo, iUSBCapacity, iUSBFileCount);
}


CpProxyAvOpenhomeOrgUSBInfo1::CpProxyAvOpenhomeOrgUSBInfo1(CpDevice& aDevice)
    : CpProxy("av-openhome-org", "USBInfo", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetUSBInfo = new Action("GetUSBInfo");
    param = new OpenHome::Net::ParameterBool("USBPlugStatus");
    iActionGetUSBInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("USBERRORInfo");
    iActionGetUSBInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("USBCapacity");
    iActionGetUSBInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("USBFileCount");
    iActionGetUSBInfo->AddOutputParameter(param);
}

CpProxyAvOpenhomeOrgUSBInfo1::~CpProxyAvOpenhomeOrgUSBInfo1()
{
    DestroyService();
    delete iActionGetUSBInfo;
}

void CpProxyAvOpenhomeOrgUSBInfo1::SyncGetUSBInfo(TBool& aUSBPlugStatus, Brh& aUSBERRORInfo, Brh& aUSBCapacity, Brh& aUSBFileCount)
{
    SyncGetUSBInfoAvOpenhomeOrgUSBInfo1 sync(*this, aUSBPlugStatus, aUSBERRORInfo, aUSBCapacity, aUSBFileCount);
    BeginGetUSBInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgUSBInfo1::BeginGetUSBInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetUSBInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUSBInfo->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgUSBInfo1::EndGetUSBInfo(IAsync& aAsync, TBool& aUSBPlugStatus, Brh& aUSBERRORInfo, Brh& aUSBCapacity, Brh& aUSBFileCount)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetUSBInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aUSBPlugStatus = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUSBERRORInfo);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUSBCapacity);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUSBFileCount);
}

