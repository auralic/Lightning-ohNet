#include "CpAvOpenhomeOrgMessageCenter1.h"
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


class SyncGetMessageAvOpenhomeOrgMessageCenter1Cpp : public SyncProxyAction
{
public:
    SyncGetMessageAvOpenhomeOrgMessageCenter1Cpp(CpProxyAvOpenhomeOrgMessageCenter1Cpp& aProxy, std::string& aMessage, uint32_t& aMessageID);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetMessageAvOpenhomeOrgMessageCenter1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMessageCenter1Cpp& iService;
    std::string& iMessage;
    uint32_t& iMessageID;
};

SyncGetMessageAvOpenhomeOrgMessageCenter1Cpp::SyncGetMessageAvOpenhomeOrgMessageCenter1Cpp(CpProxyAvOpenhomeOrgMessageCenter1Cpp& aProxy, std::string& aMessage, uint32_t& aMessageID)
    : iService(aProxy)
    , iMessage(aMessage)
    , iMessageID(aMessageID)
{
}

void SyncGetMessageAvOpenhomeOrgMessageCenter1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetMessage(aAsync, iMessage, iMessageID);
}


CpProxyAvOpenhomeOrgMessageCenter1Cpp::CpProxyAvOpenhomeOrgMessageCenter1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "MessageCenter", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetMessage = new Action("GetMessage");
    param = new OpenHome::Net::ParameterString("Message");
    iActionGetMessage->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("MessageID");
    iActionGetMessage->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMessageCenter1Cpp::MessagePropertyChanged);
    iMessage = new PropertyString("Message", functor);
    AddProperty(iMessage);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMessageCenter1Cpp::MessageIDPropertyChanged);
    iMessageID = new PropertyUint("MessageID", functor);
    AddProperty(iMessageID);
}

CpProxyAvOpenhomeOrgMessageCenter1Cpp::~CpProxyAvOpenhomeOrgMessageCenter1Cpp()
{
    DestroyService();
    delete iActionGetMessage;
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::SyncGetMessage(std::string& aMessage, uint32_t& aMessageID)
{
    SyncGetMessageAvOpenhomeOrgMessageCenter1Cpp sync(*this, aMessage, aMessageID);
    BeginGetMessage(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::BeginGetMessage(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetMessage, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetMessage->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::EndGetMessage(IAsync& aAsync, std::string& aMessage, uint32_t& aMessageID)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aMessage.assign((const char*)val.Ptr(), val.Bytes());
    }
    aMessageID = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::SetPropertyMessageChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMessageChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::SetPropertyMessageIDChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMessageIDChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::PropertyMessage(std::string& aMessage) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iMessage->Value();
    aMessage.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::PropertyMessageID(uint32_t& aMessageID) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMessageID = iMessageID->Value();
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::MessagePropertyChanged()
{
    ReportEvent(iMessageChanged);
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::MessageIDPropertyChanged()
{
    ReportEvent(iMessageIDChanged);
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgMessageCenter1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgMessageCenter1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgMessageCenter1Cpp::Version() const
{
  return iCpProxy.Version();
}

