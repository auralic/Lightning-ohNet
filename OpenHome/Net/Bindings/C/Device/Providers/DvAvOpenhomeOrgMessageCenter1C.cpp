#include "DvAvOpenhomeOrgMessageCenter1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/C/DviDeviceC.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/C/DvInvocation.h>
#include <OpenHome/Net/C/DvInvocationPrivate.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class DvProviderAvOpenhomeOrgMessageCenter1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgMessageCenter1C(DvDeviceC aDevice);
    TBool SetPropertyMessage(const Brx& aValue);
    void GetPropertyMessage(Brhz& aValue);
    TBool SetPropertyMessageID(TUint aValue);
    void GetPropertyMessageID(TUint& aValue);
    void EnablePropertyMessage();
    void EnablePropertyMessageID();
    void EnableActionGetMessage(CallbackMessageCenter1GetMessage aCallback, void* aPtr);
private:
    void DoGetMessage(IDviInvocation& aInvocation);
private:
    CallbackMessageCenter1GetMessage iCallbackGetMessage;
    void* iPtrGetMessage;
    PropertyString* iPropertyMessage;
    PropertyUint* iPropertyMessageID;
};

DvProviderAvOpenhomeOrgMessageCenter1C::DvProviderAvOpenhomeOrgMessageCenter1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "MessageCenter", 1)
{
    iPropertyMessage = NULL;
    iPropertyMessageID = NULL;
}

TBool DvProviderAvOpenhomeOrgMessageCenter1C::SetPropertyMessage(const Brx& aValue)
{
    ASSERT(iPropertyMessage != NULL);
    return SetPropertyString(*iPropertyMessage, aValue);
}

void DvProviderAvOpenhomeOrgMessageCenter1C::GetPropertyMessage(Brhz& aValue)
{
    ASSERT(iPropertyMessage != NULL);
    aValue.Set(iPropertyMessage->Value());
}

TBool DvProviderAvOpenhomeOrgMessageCenter1C::SetPropertyMessageID(TUint aValue)
{
    ASSERT(iPropertyMessageID != NULL);
    return SetPropertyUint(*iPropertyMessageID, aValue);
}

void DvProviderAvOpenhomeOrgMessageCenter1C::GetPropertyMessageID(TUint& aValue)
{
    ASSERT(iPropertyMessageID != NULL);
    aValue = iPropertyMessageID->Value();
}

void DvProviderAvOpenhomeOrgMessageCenter1C::EnablePropertyMessage()
{
    iPropertyMessage = new PropertyString(iDvStack.Env(), new ParameterString("Message"));
    iService->AddProperty(iPropertyMessage); // passes ownership
}

void DvProviderAvOpenhomeOrgMessageCenter1C::EnablePropertyMessageID()
{
    iPropertyMessageID = new PropertyUint(iDvStack.Env(), new ParameterUint("MessageID"));
    iService->AddProperty(iPropertyMessageID); // passes ownership
}

void DvProviderAvOpenhomeOrgMessageCenter1C::EnableActionGetMessage(CallbackMessageCenter1GetMessage aCallback, void* aPtr)
{
    iCallbackGetMessage = aCallback;
    iPtrGetMessage = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetMessage");
    action->AddOutputParameter(new ParameterRelated("Message", *iPropertyMessage));
    action->AddOutputParameter(new ParameterRelated("MessageID", *iPropertyMessageID));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMessageCenter1C::DoGetMessage);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMessageCenter1C::DoGetMessage(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Message;
    uint32_t MessageID;
    ASSERT(iCallbackGetMessage != NULL);
    if (0 != iCallbackGetMessage(iPtrGetMessage, invocationC, invocationCPtr, &Message, &MessageID)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respMessage(aInvocation, "Message");
    DviInvocationResponseUint respMessageID(aInvocation, "MessageID");
    invocation.StartResponse();
    Brhz bufMessage((const TChar*)Message);
    OhNetFreeExternal(Message);
    respMessage.Write(bufMessage);
    respMessage.WriteFlush();
    respMessageID.Write(MessageID);
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgMessageCenter1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgMessageCenter1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgMessageCenter1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgMessageCenter1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgMessageCenter1EnableActionGetMessage(THandle aProvider, CallbackMessageCenter1GetMessage aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgMessageCenter1C*>(aProvider)->EnableActionGetMessage(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgMessageCenter1SetPropertyMessage(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgMessageCenter1C*>(aProvider)->SetPropertyMessage(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgMessageCenter1GetPropertyMessage(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgMessageCenter1C*>(aProvider)->GetPropertyMessage(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgMessageCenter1SetPropertyMessageID(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgMessageCenter1C*>(aProvider)->SetPropertyMessageID(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgMessageCenter1GetPropertyMessageID(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgMessageCenter1C*>(aProvider)->GetPropertyMessageID(val);
    *aValue = val;
}

void STDCALL DvProviderAvOpenhomeOrgMessageCenter1EnablePropertyMessage(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgMessageCenter1C*>(aProvider)->EnablePropertyMessage();
}

void STDCALL DvProviderAvOpenhomeOrgMessageCenter1EnablePropertyMessageID(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgMessageCenter1C*>(aProvider)->EnablePropertyMessageID();
}

