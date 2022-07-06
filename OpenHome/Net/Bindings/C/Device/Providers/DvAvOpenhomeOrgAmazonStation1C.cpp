#include "DvAvOpenhomeOrgAmazonStation1.h"
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

class DvProviderAvOpenhomeOrgAmazonStation1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgAmazonStation1C(DvDeviceC aDevice);
    TBool SetPropertyTransportState(const Brx& aValue);
    void GetPropertyTransportState(Brhz& aValue);
    TBool SetPropertyThumbRating(const Brx& aValue);
    void GetPropertyThumbRating(Brhz& aValue);
    TBool SetPropertyId(TUint aValue);
    void GetPropertyId(TUint& aValue);
    void EnablePropertyTransportState();
    void EnablePropertyThumbRating();
    void EnablePropertyId();
    void EnableActionPlay(CallbackAmazonStation1Play aCallback, void* aPtr);
    void EnableActionPause(CallbackAmazonStation1Pause aCallback, void* aPtr);
    void EnableActionStop(CallbackAmazonStation1Stop aCallback, void* aPtr);
    void EnableActionNext(CallbackAmazonStation1Next aCallback, void* aPtr);
    void EnableActionPrevious(CallbackAmazonStation1Previous aCallback, void* aPtr);
    void EnableActionSetThumbRating(CallbackAmazonStation1SetThumbRating aCallback, void* aPtr);
    void EnableActionSeekSecondAbsolute(CallbackAmazonStation1SeekSecondAbsolute aCallback, void* aPtr);
    void EnableActionSeekSecondRelative(CallbackAmazonStation1SeekSecondRelative aCallback, void* aPtr);
    void EnableActionTransportState(CallbackAmazonStation1TransportState aCallback, void* aPtr);
    void EnableActionInsert(CallbackAmazonStation1Insert aCallback, void* aPtr);
private:
    void DoPlay(IDviInvocation& aInvocation);
    void DoPause(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoNext(IDviInvocation& aInvocation);
    void DoPrevious(IDviInvocation& aInvocation);
    void DoSetThumbRating(IDviInvocation& aInvocation);
    void DoSeekSecondAbsolute(IDviInvocation& aInvocation);
    void DoSeekSecondRelative(IDviInvocation& aInvocation);
    void DoTransportState(IDviInvocation& aInvocation);
    void DoInsert(IDviInvocation& aInvocation);
private:
    CallbackAmazonStation1Play iCallbackPlay;
    void* iPtrPlay;
    CallbackAmazonStation1Pause iCallbackPause;
    void* iPtrPause;
    CallbackAmazonStation1Stop iCallbackStop;
    void* iPtrStop;
    CallbackAmazonStation1Next iCallbackNext;
    void* iPtrNext;
    CallbackAmazonStation1Previous iCallbackPrevious;
    void* iPtrPrevious;
    CallbackAmazonStation1SetThumbRating iCallbackSetThumbRating;
    void* iPtrSetThumbRating;
    CallbackAmazonStation1SeekSecondAbsolute iCallbackSeekSecondAbsolute;
    void* iPtrSeekSecondAbsolute;
    CallbackAmazonStation1SeekSecondRelative iCallbackSeekSecondRelative;
    void* iPtrSeekSecondRelative;
    CallbackAmazonStation1TransportState iCallbackTransportState;
    void* iPtrTransportState;
    CallbackAmazonStation1Insert iCallbackInsert;
    void* iPtrInsert;
    PropertyString* iPropertyTransportState;
    PropertyString* iPropertyThumbRating;
    PropertyUint* iPropertyId;
};

DvProviderAvOpenhomeOrgAmazonStation1C::DvProviderAvOpenhomeOrgAmazonStation1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "AmazonStation", 1)
{
    iPropertyTransportState = NULL;
    iPropertyThumbRating = NULL;
    iPropertyId = NULL;
}

TBool DvProviderAvOpenhomeOrgAmazonStation1C::SetPropertyTransportState(const Brx& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    return SetPropertyString(*iPropertyTransportState, aValue);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::GetPropertyTransportState(Brhz& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    aValue.Set(iPropertyTransportState->Value());
}

TBool DvProviderAvOpenhomeOrgAmazonStation1C::SetPropertyThumbRating(const Brx& aValue)
{
    ASSERT(iPropertyThumbRating != NULL);
    return SetPropertyString(*iPropertyThumbRating, aValue);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::GetPropertyThumbRating(Brhz& aValue)
{
    ASSERT(iPropertyThumbRating != NULL);
    aValue.Set(iPropertyThumbRating->Value());
}

TBool DvProviderAvOpenhomeOrgAmazonStation1C::SetPropertyId(TUint aValue)
{
    ASSERT(iPropertyId != NULL);
    return SetPropertyUint(*iPropertyId, aValue);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::GetPropertyId(TUint& aValue)
{
    ASSERT(iPropertyId != NULL);
    aValue = iPropertyId->Value();
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnablePropertyTransportState()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"Playing";
    allowedValues[index++] = (TChar*)"Paused";
    allowedValues[index++] = (TChar*)"Stopped";
    allowedValues[index++] = (TChar*)"Buffering";
    iPropertyTransportState = new PropertyString(new ParameterString("TransportState", allowedValues, 4));
    delete[] allowedValues;
    iService->AddProperty(iPropertyTransportState); // passes ownership
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnablePropertyThumbRating()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"thumbs_up";
    allowedValues[index++] = (TChar*)"thumbs_down";
    allowedValues[index++] = (TChar*)"neutral";
    iPropertyThumbRating = new PropertyString(new ParameterString("ThumbRating", allowedValues, 3));
    delete[] allowedValues;
    iService->AddProperty(iPropertyThumbRating); // passes ownership
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnablePropertyId()
{
    iPropertyId = new PropertyUint(new ParameterUint("Id"));
    iService->AddProperty(iPropertyId); // passes ownership
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnableActionPlay(CallbackAmazonStation1Play aCallback, void* aPtr)
{
    iCallbackPlay = aCallback;
    iPtrPlay = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Play");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgAmazonStation1C::DoPlay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnableActionPause(CallbackAmazonStation1Pause aCallback, void* aPtr)
{
    iCallbackPause = aCallback;
    iPtrPause = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Pause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgAmazonStation1C::DoPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnableActionStop(CallbackAmazonStation1Stop aCallback, void* aPtr)
{
    iCallbackStop = aCallback;
    iPtrStop = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Stop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgAmazonStation1C::DoStop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnableActionNext(CallbackAmazonStation1Next aCallback, void* aPtr)
{
    iCallbackNext = aCallback;
    iPtrNext = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Next");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgAmazonStation1C::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnableActionPrevious(CallbackAmazonStation1Previous aCallback, void* aPtr)
{
    iCallbackPrevious = aCallback;
    iPtrPrevious = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Previous");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgAmazonStation1C::DoPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnableActionSetThumbRating(CallbackAmazonStation1SetThumbRating aCallback, void* aPtr)
{
    iCallbackSetThumbRating = aCallback;
    iPtrSetThumbRating = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetThumbRating");
    action->AddInputParameter(new ParameterRelated("ThumbRating", *iPropertyThumbRating));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgAmazonStation1C::DoSetThumbRating);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnableActionSeekSecondAbsolute(CallbackAmazonStation1SeekSecondAbsolute aCallback, void* aPtr)
{
    iCallbackSeekSecondAbsolute = aCallback;
    iPtrSeekSecondAbsolute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondAbsolute");
    action->AddInputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgAmazonStation1C::DoSeekSecondAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnableActionSeekSecondRelative(CallbackAmazonStation1SeekSecondRelative aCallback, void* aPtr)
{
    iCallbackSeekSecondRelative = aCallback;
    iPtrSeekSecondRelative = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondRelative");
    action->AddInputParameter(new ParameterInt("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgAmazonStation1C::DoSeekSecondRelative);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnableActionTransportState(CallbackAmazonStation1TransportState aCallback, void* aPtr)
{
    iCallbackTransportState = aCallback;
    iPtrTransportState = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("TransportState");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyTransportState));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgAmazonStation1C::DoTransportState);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::EnableActionInsert(CallbackAmazonStation1Insert aCallback, void* aPtr)
{
    iCallbackInsert = aCallback;
    iPtrInsert = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Insert");
    action->AddInputParameter(new ParameterRelated("AfterId", *iPropertyId));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Metadata"));
    action->AddOutputParameter(new ParameterRelated("NewId", *iPropertyId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgAmazonStation1C::DoInsert);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgAmazonStation1C::DoPlay(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackPlay != NULL);
    if (0 != iCallbackPlay(iPtrPlay, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgAmazonStation1C::DoPause(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackPause != NULL);
    if (0 != iCallbackPause(iPtrPause, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgAmazonStation1C::DoStop(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackStop != NULL);
    if (0 != iCallbackStop(iPtrStop, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgAmazonStation1C::DoNext(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackNext != NULL);
    if (0 != iCallbackNext(iPtrNext, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgAmazonStation1C::DoPrevious(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackPrevious != NULL);
    if (0 != iCallbackPrevious(iPtrPrevious, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgAmazonStation1C::DoSetThumbRating(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ThumbRating;
    aInvocation.InvocationReadString("ThumbRating", ThumbRating);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetThumbRating != NULL);
    if (0 != iCallbackSetThumbRating(iPtrSetThumbRating, invocationC, invocationCPtr, (const char*)ThumbRating.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgAmazonStation1C::DoSeekSecondAbsolute(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSeekSecondAbsolute != NULL);
    if (0 != iCallbackSeekSecondAbsolute(iPtrSeekSecondAbsolute, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgAmazonStation1C::DoSeekSecondRelative(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TInt Value = aInvocation.InvocationReadInt("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSeekSecondRelative != NULL);
    if (0 != iCallbackSeekSecondRelative(iPtrSeekSecondRelative, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgAmazonStation1C::DoTransportState(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Value;
    ASSERT(iCallbackTransportState != NULL);
    if (0 != iCallbackTransportState(iPtrTransportState, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respValue(aInvocation, "Value");
    invocation.StartResponse();
    Brhz bufValue((const TChar*)Value);
    OhNetFreeExternal(Value);
    respValue.Write(bufValue);
    respValue.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgAmazonStation1C::DoInsert(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint AfterId = aInvocation.InvocationReadUint("AfterId");
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    Brhz Metadata;
    aInvocation.InvocationReadString("Metadata", Metadata);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t NewId;
    ASSERT(iCallbackInsert != NULL);
    if (0 != iCallbackInsert(iPtrInsert, invocationC, invocationCPtr, AfterId, (const char*)Uri.Ptr(), (const char*)Metadata.Ptr(), &NewId)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respNewId(aInvocation, "NewId");
    invocation.StartResponse();
    respNewId.Write(NewId);
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgAmazonStation1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgAmazonStation1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnableActionPlay(THandle aProvider, CallbackAmazonStation1Play aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnableActionPlay(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnableActionPause(THandle aProvider, CallbackAmazonStation1Pause aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnableActionPause(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnableActionStop(THandle aProvider, CallbackAmazonStation1Stop aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnableActionStop(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnableActionNext(THandle aProvider, CallbackAmazonStation1Next aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnableActionNext(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnableActionPrevious(THandle aProvider, CallbackAmazonStation1Previous aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnableActionPrevious(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnableActionSetThumbRating(THandle aProvider, CallbackAmazonStation1SetThumbRating aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnableActionSetThumbRating(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnableActionSeekSecondAbsolute(THandle aProvider, CallbackAmazonStation1SeekSecondAbsolute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnableActionSeekSecondAbsolute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnableActionSeekSecondRelative(THandle aProvider, CallbackAmazonStation1SeekSecondRelative aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnableActionSeekSecondRelative(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnableActionTransportState(THandle aProvider, CallbackAmazonStation1TransportState aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnableActionTransportState(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnableActionInsert(THandle aProvider, CallbackAmazonStation1Insert aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnableActionInsert(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgAmazonStation1SetPropertyTransportState(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->SetPropertyTransportState(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1GetPropertyTransportState(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->GetPropertyTransportState(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgAmazonStation1SetPropertyThumbRating(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->SetPropertyThumbRating(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1GetPropertyThumbRating(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->GetPropertyThumbRating(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgAmazonStation1SetPropertyId(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->SetPropertyId(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1GetPropertyId(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->GetPropertyId(val);
    *aValue = val;
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnablePropertyTransportState(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnablePropertyTransportState();
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnablePropertyThumbRating(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnablePropertyThumbRating();
}

void STDCALL DvProviderAvOpenhomeOrgAmazonStation1EnablePropertyId(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgAmazonStation1C*>(aProvider)->EnablePropertyId();
}

