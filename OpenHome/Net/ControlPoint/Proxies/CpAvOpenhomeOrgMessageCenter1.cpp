#include "CpAvOpenhomeOrgMessageCenter1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetMessageAvOpenhomeOrgMessageCenter1 : public SyncProxyAction
{
public:
    SyncGetMessageAvOpenhomeOrgMessageCenter1(CpProxyAvOpenhomeOrgMessageCenter1& aProxy, Brh& aMessage, TUint& aMessageID);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMessageCenter1& iService;
    Brh& iMessage;
    TUint& iMessageID;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetMessageAvOpenhomeOrgMessageCenter1

SyncGetMessageAvOpenhomeOrgMessageCenter1::SyncGetMessageAvOpenhomeOrgMessageCenter1(CpProxyAvOpenhomeOrgMessageCenter1& aProxy, Brh& aMessage, TUint& aMessageID)
    : iService(aProxy)
    , iMessage(aMessage)
    , iMessageID(aMessageID)
{
}

void SyncGetMessageAvOpenhomeOrgMessageCenter1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetMessage(aAsync, iMessage, iMessageID);
}


// CpProxyAvOpenhomeOrgMessageCenter1

CpProxyAvOpenhomeOrgMessageCenter1::CpProxyAvOpenhomeOrgMessageCenter1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "MessageCenter", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetMessage = new Action("GetMessage");
    param = new OpenHome::Net::ParameterString("Message");
    iActionGetMessage->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("MessageID");
    iActionGetMessage->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMessageCenter1::MessagePropertyChanged);
    iMessage = new PropertyString("Message", functor);
    AddProperty(iMessage);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMessageCenter1::MessageIDPropertyChanged);
    iMessageID = new PropertyUint("MessageID", functor);
    AddProperty(iMessageID);
}

CpProxyAvOpenhomeOrgMessageCenter1::~CpProxyAvOpenhomeOrgMessageCenter1()
{
    DestroyService();
    delete iActionGetMessage;
}

void CpProxyAvOpenhomeOrgMessageCenter1::SyncGetMessage(Brh& aMessage, TUint& aMessageID)
{
    SyncGetMessageAvOpenhomeOrgMessageCenter1 sync(*this, aMessage, aMessageID);
    BeginGetMessage(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMessageCenter1::BeginGetMessage(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetMessage, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetMessage->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMessageCenter1::EndGetMessage(IAsync& aAsync, Brh& aMessage, TUint& aMessageID)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetMessage"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMessage);
    aMessageID = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgMessageCenter1::SetPropertyMessageChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMessageChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMessageCenter1::SetPropertyMessageIDChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMessageIDChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMessageCenter1::PropertyMessage(Brhz& aMessage) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMessage.Set(iMessage->Value());
}

void CpProxyAvOpenhomeOrgMessageCenter1::PropertyMessageID(TUint& aMessageID) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMessageID = iMessageID->Value();
}

void CpProxyAvOpenhomeOrgMessageCenter1::MessagePropertyChanged()
{
    ReportEvent(iMessageChanged);
}

void CpProxyAvOpenhomeOrgMessageCenter1::MessageIDPropertyChanged()
{
    ReportEvent(iMessageIDChanged);
}


void CpProxyAvOpenhomeOrgMessageCenter1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgMessageCenter1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgMessageCenter1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgMessageCenter1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgMessageCenter1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgMessageCenter1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgMessageCenter1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgMessageCenter1::Version() const
{
  return iCpProxy.Version();
}


