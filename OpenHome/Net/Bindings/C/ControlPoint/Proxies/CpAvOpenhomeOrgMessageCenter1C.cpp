#include "CpAvOpenhomeOrgMessageCenter1.h"
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/C/CpProxyCPrivate.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class CpProxyAvOpenhomeOrgMessageCenter1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgMessageCenter1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgMessageCenter1C();
    //CpProxyAvOpenhomeOrgMessageCenter1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgMessageCenter1*>(iProxy); }

    void SyncGetMessage(Brh& aMessage, TUint& aMessageID);
    void BeginGetMessage(FunctorAsync& aFunctor);
    void EndGetMessage(IAsync& aAsync, Brh& aMessage, TUint& aMessageID);

    void SetPropertyMessageChanged(Functor& aFunctor);
    void SetPropertyMessageIDChanged(Functor& aFunctor);

    void PropertyMessage(Brhz& aMessage) const;
    void PropertyMessageID(TUint& aMessageID) const;
private:
    void MessagePropertyChanged();
    void MessageIDPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetMessage;
    PropertyString* iMessage;
    PropertyUint* iMessageID;
    Functor iMessageChanged;
    Functor iMessageIDChanged;
};


class SyncGetMessageAvOpenhomeOrgMessageCenter1C : public SyncProxyAction
{
public:
    SyncGetMessageAvOpenhomeOrgMessageCenter1C(CpProxyAvOpenhomeOrgMessageCenter1C& aProxy, Brh& aMessage, TUint& aMessageID);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetMessageAvOpenhomeOrgMessageCenter1C() {};
private:
    CpProxyAvOpenhomeOrgMessageCenter1C& iService;
    Brh& iMessage;
    TUint& iMessageID;
};

SyncGetMessageAvOpenhomeOrgMessageCenter1C::SyncGetMessageAvOpenhomeOrgMessageCenter1C(CpProxyAvOpenhomeOrgMessageCenter1C& aProxy, Brh& aMessage, TUint& aMessageID)
    : iService(aProxy)
    , iMessage(aMessage)
    , iMessageID(aMessageID)
{
}

void SyncGetMessageAvOpenhomeOrgMessageCenter1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetMessage(aAsync, iMessage, iMessageID);
}

CpProxyAvOpenhomeOrgMessageCenter1C::CpProxyAvOpenhomeOrgMessageCenter1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "MessageCenter", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetMessage = new Action("GetMessage");
    param = new OpenHome::Net::ParameterString("Message");
    iActionGetMessage->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("MessageID");
    iActionGetMessage->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMessageCenter1C::MessagePropertyChanged);
    iMessage = new PropertyString("Message", functor);
    AddProperty(iMessage);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMessageCenter1C::MessageIDPropertyChanged);
    iMessageID = new PropertyUint("MessageID", functor);
    AddProperty(iMessageID);
}

CpProxyAvOpenhomeOrgMessageCenter1C::~CpProxyAvOpenhomeOrgMessageCenter1C()
{
    DestroyService();
    delete iActionGetMessage;
}

void CpProxyAvOpenhomeOrgMessageCenter1C::SyncGetMessage(Brh& aMessage, TUint& aMessageID)
{
    SyncGetMessageAvOpenhomeOrgMessageCenter1C sync(*this, aMessage, aMessageID);
    BeginGetMessage(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMessageCenter1C::BeginGetMessage(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetMessage, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetMessage->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMessageCenter1C::EndGetMessage(IAsync& aAsync, Brh& aMessage, TUint& aMessageID)
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

void CpProxyAvOpenhomeOrgMessageCenter1C::SetPropertyMessageChanged(Functor& aFunctor)
{
    iLock.Wait();
    iMessageChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMessageCenter1C::SetPropertyMessageIDChanged(Functor& aFunctor)
{
    iLock.Wait();
    iMessageIDChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMessageCenter1C::PropertyMessage(Brhz& aMessage) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aMessage.Set(iMessage->Value());
}

void CpProxyAvOpenhomeOrgMessageCenter1C::PropertyMessageID(TUint& aMessageID) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aMessageID = iMessageID->Value();
}

void CpProxyAvOpenhomeOrgMessageCenter1C::MessagePropertyChanged()
{
    ReportEvent(iMessageChanged);
}

void CpProxyAvOpenhomeOrgMessageCenter1C::MessageIDPropertyChanged()
{
    ReportEvent(iMessageIDChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgMessageCenter1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgMessageCenter1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgMessageCenter1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgMessageCenter1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMessageCenter1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMessageCenter1SyncGetMessage(THandle aHandle, char** aMessage, uint32_t* aMessageID)
{
    CpProxyAvOpenhomeOrgMessageCenter1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMessageCenter1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMessage;
    int32_t err = 0;
    try {
        proxyC->SyncGetMessage(buf_aMessage, *aMessageID);
        *aMessage = buf_aMessage.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aMessage = NULL;
        *aMessageID = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgMessageCenter1BeginGetMessage(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMessageCenter1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMessageCenter1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetMessage(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMessageCenter1EndGetMessage(THandle aHandle, OhNetHandleAsync aAsync, char** aMessage, uint32_t* aMessageID)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMessageCenter1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMessageCenter1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aMessage;
    *aMessage = NULL;
    try {
        proxyC->EndGetMessage(*async, buf_aMessage, *aMessageID);
        *aMessage = buf_aMessage.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgMessageCenter1SetPropertyMessageChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMessageCenter1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMessageCenter1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyMessageChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMessageCenter1SetPropertyMessageIDChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMessageCenter1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMessageCenter1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyMessageIDChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMessageCenter1PropertyMessage(THandle aHandle, char** aMessage)
{
    CpProxyAvOpenhomeOrgMessageCenter1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMessageCenter1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aMessage;
    try {
        proxyC->PropertyMessage(buf_aMessage);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aMessage = buf_aMessage.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMessageCenter1PropertyMessageID(THandle aHandle, uint32_t* aMessageID)
{
    CpProxyAvOpenhomeOrgMessageCenter1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMessageCenter1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyMessageID(*aMessageID);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

