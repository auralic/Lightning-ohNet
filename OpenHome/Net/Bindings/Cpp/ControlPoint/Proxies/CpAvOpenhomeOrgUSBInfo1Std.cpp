#include "CpAvOpenhomeOrgUSBInfo1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

#include <string>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncGetUSBInfoAvOpenhomeOrgUSBInfo1Cpp : public SyncProxyAction
{
public:
    SyncGetUSBInfoAvOpenhomeOrgUSBInfo1Cpp(CpProxyAvOpenhomeOrgUSBInfo1Cpp& aProxy, bool& aUSBPlugStatus, std::string& aUSBERRORInfo, std::string& aUSBCapacity, std::string& aUSBFileCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUSBInfoAvOpenhomeOrgUSBInfo1Cpp() {}
private:
    CpProxyAvOpenhomeOrgUSBInfo1Cpp& iService;
    bool& iUSBPlugStatus;
    std::string& iUSBERRORInfo;
    std::string& iUSBCapacity;
    std::string& iUSBFileCount;
};

SyncGetUSBInfoAvOpenhomeOrgUSBInfo1Cpp::SyncGetUSBInfoAvOpenhomeOrgUSBInfo1Cpp(CpProxyAvOpenhomeOrgUSBInfo1Cpp& aProxy, bool& aUSBPlugStatus, std::string& aUSBERRORInfo, std::string& aUSBCapacity, std::string& aUSBFileCount)
    : iService(aProxy)
    , iUSBPlugStatus(aUSBPlugStatus)
    , iUSBERRORInfo(aUSBERRORInfo)
    , iUSBCapacity(aUSBCapacity)
    , iUSBFileCount(aUSBFileCount)
{
}

void SyncGetUSBInfoAvOpenhomeOrgUSBInfo1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUSBInfo(aAsync, iUSBPlugStatus, iUSBERRORInfo, iUSBCapacity, iUSBFileCount);
}


CpProxyAvOpenhomeOrgUSBInfo1Cpp::CpProxyAvOpenhomeOrgUSBInfo1Cpp(CpDeviceCpp& aDevice)
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

CpProxyAvOpenhomeOrgUSBInfo1Cpp::~CpProxyAvOpenhomeOrgUSBInfo1Cpp()
{
    DestroyService();
    delete iActionGetUSBInfo;
}

void CpProxyAvOpenhomeOrgUSBInfo1Cpp::SyncGetUSBInfo(bool& aUSBPlugStatus, std::string& aUSBERRORInfo, std::string& aUSBCapacity, std::string& aUSBFileCount)
{
    SyncGetUSBInfoAvOpenhomeOrgUSBInfo1Cpp sync(*this, aUSBPlugStatus, aUSBERRORInfo, aUSBCapacity, aUSBFileCount);
    BeginGetUSBInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgUSBInfo1Cpp::BeginGetUSBInfo(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgUSBInfo1Cpp::EndGetUSBInfo(IAsync& aAsync, bool& aUSBPlugStatus, std::string& aUSBERRORInfo, std::string& aUSBCapacity, std::string& aUSBFileCount)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUSBERRORInfo.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUSBCapacity.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUSBFileCount.assign((const char*)val.Ptr(), val.Bytes());
    }
}

