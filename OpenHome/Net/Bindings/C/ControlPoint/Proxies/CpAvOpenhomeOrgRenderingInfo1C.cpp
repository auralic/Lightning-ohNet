#include "CpAvOpenhomeOrgRenderingInfo1.h"
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

class CpProxyAvOpenhomeOrgRenderingInfo1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgRenderingInfo1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgRenderingInfo1C();
    //CpProxyAvOpenhomeOrgRenderingInfo1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgRenderingInfo1*>(iProxy); }

    void SyncGetEntireInfo(Brh& aInfo);
    void BeginGetEntireInfo(FunctorAsync& aFunctor);
    void EndGetEntireInfo(IAsync& aAsync, Brh& aInfo);

    void SetPropertyInfoChanged(Functor& aFunctor);

    void PropertyInfo(Brhz& aInfo) const;
private:
    void InfoPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetEntireInfo;
    PropertyString* iInfo;
    Functor iInfoChanged;
};


class SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1C : public SyncProxyAction
{
public:
    SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1C(CpProxyAvOpenhomeOrgRenderingInfo1C& aProxy, Brh& aInfo);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1C() {};
private:
    CpProxyAvOpenhomeOrgRenderingInfo1C& iService;
    Brh& iInfo;
};

SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1C::SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1C(CpProxyAvOpenhomeOrgRenderingInfo1C& aProxy, Brh& aInfo)
    : iService(aProxy)
    , iInfo(aInfo)
{
}

void SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetEntireInfo(aAsync, iInfo);
}

CpProxyAvOpenhomeOrgRenderingInfo1C::CpProxyAvOpenhomeOrgRenderingInfo1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "RenderingInfo", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetEntireInfo = new Action("GetEntireInfo");
    param = new OpenHome::Net::ParameterString("Info");
    iActionGetEntireInfo->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRenderingInfo1C::InfoPropertyChanged);
    iInfo = new PropertyString("Info", functor);
    AddProperty(iInfo);
}

CpProxyAvOpenhomeOrgRenderingInfo1C::~CpProxyAvOpenhomeOrgRenderingInfo1C()
{
    DestroyService();
    delete iActionGetEntireInfo;
}

void CpProxyAvOpenhomeOrgRenderingInfo1C::SyncGetEntireInfo(Brh& aInfo)
{
    SyncGetEntireInfoAvOpenhomeOrgRenderingInfo1C sync(*this, aInfo);
    BeginGetEntireInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRenderingInfo1C::BeginGetEntireInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetEntireInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetEntireInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRenderingInfo1C::EndGetEntireInfo(IAsync& aAsync, Brh& aInfo)
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

void CpProxyAvOpenhomeOrgRenderingInfo1C::SetPropertyInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRenderingInfo1C::PropertyInfo(Brhz& aInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aInfo.Set(iInfo->Value());
}

void CpProxyAvOpenhomeOrgRenderingInfo1C::InfoPropertyChanged()
{
    ReportEvent(iInfoChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgRenderingInfo1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgRenderingInfo1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgRenderingInfo1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRenderingInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRenderingInfo1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRenderingInfo1SyncGetEntireInfo(THandle aHandle, char** aInfo)
{
    CpProxyAvOpenhomeOrgRenderingInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRenderingInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aInfo;
    int32_t err = 0;
    try {
        proxyC->SyncGetEntireInfo(buf_aInfo);
        *aInfo = buf_aInfo.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aInfo = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRenderingInfo1BeginGetEntireInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRenderingInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRenderingInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetEntireInfo(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRenderingInfo1EndGetEntireInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aInfo)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRenderingInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRenderingInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aInfo;
    *aInfo = NULL;
    try {
        proxyC->EndGetEntireInfo(*async, buf_aInfo);
        *aInfo = buf_aInfo.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRenderingInfo1SetPropertyInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRenderingInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRenderingInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyInfoChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRenderingInfo1PropertyInfo(THandle aHandle, char** aInfo)
{
    CpProxyAvOpenhomeOrgRenderingInfo1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRenderingInfo1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aInfo;
    try {
        proxyC->PropertyInfo(buf_aInfo);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aInfo = buf_aInfo.Transfer();
    return 0;
}

