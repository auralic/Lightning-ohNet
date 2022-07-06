#include "DvAvOpenhomeOrgBluetooth1.h"
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

class DvProviderAvOpenhomeOrgBluetooth1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgBluetooth1C(DvDeviceC aDevice);
    TBool SetPropertyTransportState(const Brx& aValue);
    void GetPropertyTransportState(Brhz& aValue);
    TBool SetPropertyRepeat(TBool aValue);
    void GetPropertyRepeat(TBool& aValue);
    TBool SetPropertyRepeatOne(TBool aValue);
    void GetPropertyRepeatOne(TBool& aValue);
    TBool SetPropertyShuffle(TBool aValue);
    void GetPropertyShuffle(TBool& aValue);
    void EnablePropertyTransportState();
    void EnablePropertyRepeat();
    void EnablePropertyRepeatOne();
    void EnablePropertyShuffle();
    void EnableActionPlay(CallbackBluetooth1Play aCallback, void* aPtr);
    void EnableActionPause(CallbackBluetooth1Pause aCallback, void* aPtr);
    void EnableActionStop(CallbackBluetooth1Stop aCallback, void* aPtr);
    void EnableActionNext(CallbackBluetooth1Next aCallback, void* aPtr);
    void EnableActionPrevious(CallbackBluetooth1Previous aCallback, void* aPtr);
    void EnableActionSetRepeat(CallbackBluetooth1SetRepeat aCallback, void* aPtr);
    void EnableActionRepeat(CallbackBluetooth1Repeat aCallback, void* aPtr);
    void EnableActionSetRepeatOne(CallbackBluetooth1SetRepeatOne aCallback, void* aPtr);
    void EnableActionRepeatOne(CallbackBluetooth1RepeatOne aCallback, void* aPtr);
    void EnableActionSetShuffle(CallbackBluetooth1SetShuffle aCallback, void* aPtr);
    void EnableActionShuffle(CallbackBluetooth1Shuffle aCallback, void* aPtr);
    void EnableActionTransportState(CallbackBluetooth1TransportState aCallback, void* aPtr);
private:
    void DoPlay(IDviInvocation& aInvocation);
    void DoPause(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoNext(IDviInvocation& aInvocation);
    void DoPrevious(IDviInvocation& aInvocation);
    void DoSetRepeat(IDviInvocation& aInvocation);
    void DoRepeat(IDviInvocation& aInvocation);
    void DoSetRepeatOne(IDviInvocation& aInvocation);
    void DoRepeatOne(IDviInvocation& aInvocation);
    void DoSetShuffle(IDviInvocation& aInvocation);
    void DoShuffle(IDviInvocation& aInvocation);
    void DoTransportState(IDviInvocation& aInvocation);
private:
    CallbackBluetooth1Play iCallbackPlay;
    void* iPtrPlay;
    CallbackBluetooth1Pause iCallbackPause;
    void* iPtrPause;
    CallbackBluetooth1Stop iCallbackStop;
    void* iPtrStop;
    CallbackBluetooth1Next iCallbackNext;
    void* iPtrNext;
    CallbackBluetooth1Previous iCallbackPrevious;
    void* iPtrPrevious;
    CallbackBluetooth1SetRepeat iCallbackSetRepeat;
    void* iPtrSetRepeat;
    CallbackBluetooth1Repeat iCallbackRepeat;
    void* iPtrRepeat;
    CallbackBluetooth1SetRepeatOne iCallbackSetRepeatOne;
    void* iPtrSetRepeatOne;
    CallbackBluetooth1RepeatOne iCallbackRepeatOne;
    void* iPtrRepeatOne;
    CallbackBluetooth1SetShuffle iCallbackSetShuffle;
    void* iPtrSetShuffle;
    CallbackBluetooth1Shuffle iCallbackShuffle;
    void* iPtrShuffle;
    CallbackBluetooth1TransportState iCallbackTransportState;
    void* iPtrTransportState;
    PropertyString* iPropertyTransportState;
    PropertyBool* iPropertyRepeat;
    PropertyBool* iPropertyRepeatOne;
    PropertyBool* iPropertyShuffle;
};

DvProviderAvOpenhomeOrgBluetooth1C::DvProviderAvOpenhomeOrgBluetooth1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Bluetooth", 1)
{
    iPropertyTransportState = NULL;
    iPropertyRepeat = NULL;
    iPropertyRepeatOne = NULL;
    iPropertyShuffle = NULL;
}

TBool DvProviderAvOpenhomeOrgBluetooth1C::SetPropertyTransportState(const Brx& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    return SetPropertyString(*iPropertyTransportState, aValue);
}

void DvProviderAvOpenhomeOrgBluetooth1C::GetPropertyTransportState(Brhz& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    aValue.Set(iPropertyTransportState->Value());
}

TBool DvProviderAvOpenhomeOrgBluetooth1C::SetPropertyRepeat(TBool aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    return SetPropertyBool(*iPropertyRepeat, aValue);
}

void DvProviderAvOpenhomeOrgBluetooth1C::GetPropertyRepeat(TBool& aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    aValue = iPropertyRepeat->Value();
}

TBool DvProviderAvOpenhomeOrgBluetooth1C::SetPropertyRepeatOne(TBool aValue)
{
    ASSERT(iPropertyRepeatOne != NULL);
    return SetPropertyBool(*iPropertyRepeatOne, aValue);
}

void DvProviderAvOpenhomeOrgBluetooth1C::GetPropertyRepeatOne(TBool& aValue)
{
    ASSERT(iPropertyRepeatOne != NULL);
    aValue = iPropertyRepeatOne->Value();
}

TBool DvProviderAvOpenhomeOrgBluetooth1C::SetPropertyShuffle(TBool aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    return SetPropertyBool(*iPropertyShuffle, aValue);
}

void DvProviderAvOpenhomeOrgBluetooth1C::GetPropertyShuffle(TBool& aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    aValue = iPropertyShuffle->Value();
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnablePropertyTransportState()
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

void DvProviderAvOpenhomeOrgBluetooth1C::EnablePropertyRepeat()
{
    iPropertyRepeat = new PropertyBool(new ParameterBool("Repeat"));
    iService->AddProperty(iPropertyRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnablePropertyRepeatOne()
{
    iPropertyRepeatOne = new PropertyBool(new ParameterBool("RepeatOne"));
    iService->AddProperty(iPropertyRepeatOne); // passes ownership
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnablePropertyShuffle()
{
    iPropertyShuffle = new PropertyBool(new ParameterBool("Shuffle"));
    iService->AddProperty(iPropertyShuffle); // passes ownership
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionPlay(CallbackBluetooth1Play aCallback, void* aPtr)
{
    iCallbackPlay = aCallback;
    iPtrPlay = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Play");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoPlay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionPause(CallbackBluetooth1Pause aCallback, void* aPtr)
{
    iCallbackPause = aCallback;
    iPtrPause = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Pause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionStop(CallbackBluetooth1Stop aCallback, void* aPtr)
{
    iCallbackStop = aCallback;
    iPtrStop = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Stop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoStop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionNext(CallbackBluetooth1Next aCallback, void* aPtr)
{
    iCallbackNext = aCallback;
    iPtrNext = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Next");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionPrevious(CallbackBluetooth1Previous aCallback, void* aPtr)
{
    iCallbackPrevious = aCallback;
    iPtrPrevious = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Previous");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionSetRepeat(CallbackBluetooth1SetRepeat aCallback, void* aPtr)
{
    iCallbackSetRepeat = aCallback;
    iPtrSetRepeat = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRepeat");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoSetRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionRepeat(CallbackBluetooth1Repeat aCallback, void* aPtr)
{
    iCallbackRepeat = aCallback;
    iPtrRepeat = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Repeat");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionSetRepeatOne(CallbackBluetooth1SetRepeatOne aCallback, void* aPtr)
{
    iCallbackSetRepeatOne = aCallback;
    iPtrSetRepeatOne = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRepeatOne");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyRepeatOne));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoSetRepeatOne);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionRepeatOne(CallbackBluetooth1RepeatOne aCallback, void* aPtr)
{
    iCallbackRepeatOne = aCallback;
    iPtrRepeatOne = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RepeatOne");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyRepeatOne));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoRepeatOne);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionSetShuffle(CallbackBluetooth1SetShuffle aCallback, void* aPtr)
{
    iCallbackSetShuffle = aCallback;
    iPtrSetShuffle = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetShuffle");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoSetShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionShuffle(CallbackBluetooth1Shuffle aCallback, void* aPtr)
{
    iCallbackShuffle = aCallback;
    iPtrShuffle = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Shuffle");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::EnableActionTransportState(CallbackBluetooth1TransportState aCallback, void* aPtr)
{
    iCallbackTransportState = aCallback;
    iPtrTransportState = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("TransportState");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyTransportState));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgBluetooth1C::DoTransportState);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgBluetooth1C::DoPlay(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgBluetooth1C::DoPause(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgBluetooth1C::DoStop(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgBluetooth1C::DoNext(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgBluetooth1C::DoPrevious(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgBluetooth1C::DoSetRepeat(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool Value = aInvocation.InvocationReadBool("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetRepeat != NULL);
    if (0 != iCallbackSetRepeat(iPtrSetRepeat, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgBluetooth1C::DoRepeat(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackRepeat != NULL);
    if (0 != iCallbackRepeat(iPtrRepeat, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write((Value!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgBluetooth1C::DoSetRepeatOne(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool Value = aInvocation.InvocationReadBool("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetRepeatOne != NULL);
    if (0 != iCallbackSetRepeatOne(iPtrSetRepeatOne, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgBluetooth1C::DoRepeatOne(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackRepeatOne != NULL);
    if (0 != iCallbackRepeatOne(iPtrRepeatOne, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write((Value!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgBluetooth1C::DoSetShuffle(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool Value = aInvocation.InvocationReadBool("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetShuffle != NULL);
    if (0 != iCallbackSetShuffle(iPtrSetShuffle, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgBluetooth1C::DoShuffle(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackShuffle != NULL);
    if (0 != iCallbackShuffle(iPtrShuffle, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write((Value!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgBluetooth1C::DoTransportState(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgBluetooth1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgBluetooth1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionPlay(THandle aProvider, CallbackBluetooth1Play aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionPlay(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionPause(THandle aProvider, CallbackBluetooth1Pause aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionPause(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionStop(THandle aProvider, CallbackBluetooth1Stop aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionStop(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionNext(THandle aProvider, CallbackBluetooth1Next aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionNext(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionPrevious(THandle aProvider, CallbackBluetooth1Previous aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionPrevious(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionSetRepeat(THandle aProvider, CallbackBluetooth1SetRepeat aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionSetRepeat(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionRepeat(THandle aProvider, CallbackBluetooth1Repeat aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionRepeat(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionSetRepeatOne(THandle aProvider, CallbackBluetooth1SetRepeatOne aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionSetRepeatOne(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionRepeatOne(THandle aProvider, CallbackBluetooth1RepeatOne aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionRepeatOne(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionSetShuffle(THandle aProvider, CallbackBluetooth1SetShuffle aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionSetShuffle(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionShuffle(THandle aProvider, CallbackBluetooth1Shuffle aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionShuffle(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnableActionTransportState(THandle aProvider, CallbackBluetooth1TransportState aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnableActionTransportState(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgBluetooth1SetPropertyTransportState(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->SetPropertyTransportState(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1GetPropertyTransportState(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->GetPropertyTransportState(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgBluetooth1SetPropertyRepeat(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->SetPropertyRepeat((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1GetPropertyRepeat(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->GetPropertyRepeat(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgBluetooth1SetPropertyRepeatOne(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->SetPropertyRepeatOne((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1GetPropertyRepeatOne(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->GetPropertyRepeatOne(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgBluetooth1SetPropertyShuffle(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->SetPropertyShuffle((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1GetPropertyShuffle(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->GetPropertyShuffle(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnablePropertyTransportState(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnablePropertyTransportState();
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnablePropertyRepeat(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnablePropertyRepeat();
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnablePropertyRepeatOne(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnablePropertyRepeatOne();
}

void STDCALL DvProviderAvOpenhomeOrgBluetooth1EnablePropertyShuffle(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgBluetooth1C*>(aProvider)->EnablePropertyShuffle();
}

