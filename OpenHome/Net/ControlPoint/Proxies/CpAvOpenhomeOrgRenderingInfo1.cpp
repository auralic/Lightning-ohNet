#include "CpAvOpenhomeOrgRenderingInfo1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1 : public SyncProxyAction
{
public:
    SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1(CpProxyAvOpenhomeOrgRenderingInfo1& aProxy, Brh& aInfo);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgRenderingInfo1& iService;
    Brh& iInfo;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1

SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1::SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1(CpProxyAvOpenhomeOrgRenderingInfo1& aProxy, Brh& aInfo)
    : iService(aProxy)
    , iInfo(aInfo)
{
}

void SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetEntireInfo(aAsync, iInfo);
}


// CpProxyAvOpenhomeOrgRenderingInfo1

CpProxyAvOpenhomeOrgRenderingInfo1::CpProxyAvOpenhomeOrgRenderingInfo1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "RenderingInfo", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetEntireInfo = new Action("GetEntireInfo");
    param = new OpenHome::Net::ParameterString("Info");
    iActionGetEntireInfo->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRenderingInfo1::InfoPropertyChanged);
    iInfo = new PropertyString("Info", functor);
    AddProperty(iInfo);
}

CpProxyAvOpenhomeOrgRenderingInfo1::~CpProxyAvOpenhomeOrgRenderingInfo1()
{
    DestroyService();
    delete iActionGetEntireInfo;
}

void CpProxyAvOpenhomeOrgRenderingInfo1::SyncGetEntireInfo(Brh& aInfo)
{
    SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1 sync(*this, aInfo);
    BeginGetEntireInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRenderingInfo1::BeginGetEntireInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetEntireInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetEntireInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRenderingInfo1::EndGetEntireInfo(IAsync& aAsync, Brh& aInfo)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aInfo);
}

void CpProxyAvOpenhomeOrgRenderingInfo1::SetPropertyInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRenderingInfo1::PropertyInfo(Brhz& aInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aInfo.Set(iInfo->Value());
}

void CpProxyAvOpenhomeOrgRenderingInfo1::InfoPropertyChanged()
{
    ReportEvent(iInfoChanged);
}


void CpProxyAvOpenhomeOrgRenderingInfo1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgRenderingInfo1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgRenderingInfo1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgRenderingInfo1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgRenderingInfo1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgRenderingInfo1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgRenderingInfo1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgRenderingInfo1::Version() const
{
  return iCpProxy.Version();
}


