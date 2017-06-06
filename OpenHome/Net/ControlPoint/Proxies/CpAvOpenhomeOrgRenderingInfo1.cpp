#include "CpAvOpenhomeOrgRenderingInfo1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1 : public SyncProxyAction
{
public:
    SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1(CpProxyAvOpenhomeOrgRenderingInfo1& aProxy, Brh& aInfo);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1() {}
private:
    CpProxyAvOpenhomeOrgRenderingInfo1& iService;
    Brh& iInfo;
};

SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1::SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1(CpProxyAvOpenhomeOrgRenderingInfo1& aProxy, Brh& aInfo)
    : iService(aProxy)
    , iInfo(aInfo)
{
}

void SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetEntireInfo(aAsync, iInfo);
}


CpProxyAvOpenhomeOrgRenderingInfo1::CpProxyAvOpenhomeOrgRenderingInfo1(CpDevice& aDevice)
    : CpProxy("av-openhome-org", "RenderingInfo", 1, aDevice.Device())
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
    Invocation* invocation = iService->Invocation(*iActionGetEntireInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetEntireInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
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
    iLock->Wait();
    iInfoChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgRenderingInfo1::PropertyInfo(Brhz& aInfo) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aInfo.Set(iInfo->Value());
}

void CpProxyAvOpenhomeOrgRenderingInfo1::InfoPropertyChanged()
{
    ReportEvent(iInfoChanged);
}

