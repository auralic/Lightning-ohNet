#include "CpAvOpenhomeOrgRenderingInfo1.h"
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


class SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1Cpp : public SyncProxyAction
{
public:
    SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1Cpp(CpProxyAvOpenhomeOrgRenderingInfo1Cpp& aProxy, std::string& aInfo);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1Cpp() {}
private:
    CpProxyAvOpenhomeOrgRenderingInfo1Cpp& iService;
    std::string& iInfo;
};

SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1Cpp::SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1Cpp(CpProxyAvOpenhomeOrgRenderingInfo1Cpp& aProxy, std::string& aInfo)
    : iService(aProxy)
    , iInfo(aInfo)
{
}

void SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetEntireInfo(aAsync, iInfo);
}


CpProxyAvOpenhomeOrgRenderingInfo1Cpp::CpProxyAvOpenhomeOrgRenderingInfo1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "RenderingInfo", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetEntireInfo = new Action("GetEntireInfo");
    param = new OpenHome::Net::ParameterString("Info");
    iActionGetEntireInfo->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRenderingInfo1Cpp::InfoPropertyChanged);
    iInfo = new PropertyString("Info", functor);
    AddProperty(iInfo);
}

CpProxyAvOpenhomeOrgRenderingInfo1Cpp::~CpProxyAvOpenhomeOrgRenderingInfo1Cpp()
{
    DestroyService();
    delete iActionGetEntireInfo;
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::SyncGetEntireInfo(std::string& aInfo)
{
    SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1Cpp sync(*this, aInfo);
    BeginGetEntireInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::BeginGetEntireInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetEntireInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetEntireInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::EndGetEntireInfo(IAsync& aAsync, std::string& aInfo)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetEntireInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aInfo.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::SetPropertyInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::PropertyInfo(std::string& aInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iInfo->Value();
    aInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::InfoPropertyChanged()
{
    ReportEvent(iInfoChanged);
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgRenderingInfo1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgRenderingInfo1Cpp::Version() const
{
  return iCpProxy.Version();
}

