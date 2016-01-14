#include "DvAvOpenhomeOrgRoon1.h"
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

class DvProviderAvOpenhomeOrgRoon1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgRoon1C(DvDeviceC aDevice);
    TBool SetPropertyTransportState(const Brx& aValue);
    void GetPropertyTransportState(Brhz& aValue);
    TBool SetPropertyRepeat(TBool aValue);
    void GetPropertyRepeat(TBool& aValue);
    TBool SetPropertyShuffle(TBool aValue);
    void GetPropertyShuffle(TBool& aValue);
    void EnablePropertyTransportState();
    void EnablePropertyRepeat();
    void EnablePropertyShuffle();
    void EnableActionPlay(CallbackRoon1Play aCallback, void* aPtr);
    void EnableActionPause(CallbackRoon1Pause aCallback, void* aPtr);
    void EnableActionPlayPause(CallbackRoon1PlayPause aCallback, void* aPtr);
    void EnableActionStop(CallbackRoon1Stop aCallback, void* aPtr);
    void EnableActionNext(CallbackRoon1Next aCallback, void* aPtr);
    void EnableActionPrevious(CallbackRoon1Previous aCallback, void* aPtr);
    void EnableActionToggleShuffle(CallbackRoon1ToggleShuffle aCallback, void* aPtr);
    void EnableActionToggleLoop(CallbackRoon1ToggleLoop aCallback, void* aPtr);
    void EnableActionRepeat(CallbackRoon1Repeat aCallback, void* aPtr);
    void EnableActionShuffle(CallbackRoon1Shuffle aCallback, void* aPtr);
    void EnableActionSeekSecondAbsolute(CallbackRoon1SeekSecondAbsolute aCallback, void* aPtr);
    void EnableActionSeekSecondRelative(CallbackRoon1SeekSecondRelative aCallback, void* aPtr);
    void EnableActionTransportState(CallbackRoon1TransportState aCallback, void* aPtr);
private:
    void DoPlay(IDviInvocation& aInvocation);
    void DoPause(IDviInvocation& aInvocation);
    void DoPlayPause(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoNext(IDviInvocation& aInvocation);
    void DoPrevious(IDviInvocation& aInvocation);
    void DoToggleShuffle(IDviInvocation& aInvocation);
    void DoToggleLoop(IDviInvocation& aInvocation);
    void DoRepeat(IDviInvocation& aInvocation);
    void DoShuffle(IDviInvocation& aInvocation);
    void DoSeekSecondAbsolute(IDviInvocation& aInvocation);
    void DoSeekSecondRelative(IDviInvocation& aInvocation);
    void DoTransportState(IDviInvocation& aInvocation);
private:
    CallbackRoon1Play iCallbackPlay;
    void* iPtrPlay;
    CallbackRoon1Pause iCallbackPause;
    void* iPtrPause;
    CallbackRoon1PlayPause iCallbackPlayPause;
    void* iPtrPlayPause;
    CallbackRoon1Stop iCallbackStop;
    void* iPtrStop;
    CallbackRoon1Next iCallbackNext;
    void* iPtrNext;
    CallbackRoon1Previous iCallbackPrevious;
    void* iPtrPrevious;
    CallbackRoon1ToggleShuffle iCallbackToggleShuffle;
    void* iPtrToggleShuffle;
    CallbackRoon1ToggleLoop iCallbackToggleLoop;
    void* iPtrToggleLoop;
    CallbackRoon1Repeat iCallbackRepeat;
    void* iPtrRepeat;
    CallbackRoon1Shuffle iCallbackShuffle;
    void* iPtrShuffle;
    CallbackRoon1SeekSecondAbsolute iCallbackSeekSecondAbsolute;
    void* iPtrSeekSecondAbsolute;
    CallbackRoon1SeekSecondRelative iCallbackSeekSecondRelative;
    void* iPtrSeekSecondRelative;
    CallbackRoon1TransportState iCallbackTransportState;
    void* iPtrTransportState;
    PropertyString* iPropertyTransportState;
    PropertyBool* iPropertyRepeat;
    PropertyBool* iPropertyShuffle;
};

DvProviderAvOpenhomeOrgRoon1C::DvProviderAvOpenhomeOrgRoon1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Roon", 1)
{
    iPropertyTransportState = NULL;
    iPropertyRepeat = NULL;
    iPropertyShuffle = NULL;
}

TBool DvProviderAvOpenhomeOrgRoon1C::SetPropertyTransportState(const Brx& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    return SetPropertyString(*iPropertyTransportState, aValue);
}

void DvProviderAvOpenhomeOrgRoon1C::GetPropertyTransportState(Brhz& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    aValue.Set(iPropertyTransportState->Value());
}

TBool DvProviderAvOpenhomeOrgRoon1C::SetPropertyRepeat(TBool aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    return SetPropertyBool(*iPropertyRepeat, aValue);
}

void DvProviderAvOpenhomeOrgRoon1C::GetPropertyRepeat(TBool& aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    aValue = iPropertyRepeat->Value();
}

TBool DvProviderAvOpenhomeOrgRoon1C::SetPropertyShuffle(TBool aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    return SetPropertyBool(*iPropertyShuffle, aValue);
}

void DvProviderAvOpenhomeOrgRoon1C::GetPropertyShuffle(TBool& aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    aValue = iPropertyShuffle->Value();
}

void DvProviderAvOpenhomeOrgRoon1C::EnablePropertyTransportState()
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

void DvProviderAvOpenhomeOrgRoon1C::EnablePropertyRepeat()
{
    iPropertyRepeat = new PropertyBool(new ParameterBool("Repeat"));
    iService->AddProperty(iPropertyRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgRoon1C::EnablePropertyShuffle()
{
    iPropertyShuffle = new PropertyBool(new ParameterBool("Shuffle"));
    iService->AddProperty(iPropertyShuffle); // passes ownership
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionPlay(CallbackRoon1Play aCallback, void* aPtr)
{
    iCallbackPlay = aCallback;
    iPtrPlay = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Play");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoPlay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionPause(CallbackRoon1Pause aCallback, void* aPtr)
{
    iCallbackPause = aCallback;
    iPtrPause = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Pause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionPlayPause(CallbackRoon1PlayPause aCallback, void* aPtr)
{
    iCallbackPlayPause = aCallback;
    iPtrPlayPause = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PlayPause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoPlayPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionStop(CallbackRoon1Stop aCallback, void* aPtr)
{
    iCallbackStop = aCallback;
    iPtrStop = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Stop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoStop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionNext(CallbackRoon1Next aCallback, void* aPtr)
{
    iCallbackNext = aCallback;
    iPtrNext = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Next");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionPrevious(CallbackRoon1Previous aCallback, void* aPtr)
{
    iCallbackPrevious = aCallback;
    iPtrPrevious = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Previous");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionToggleShuffle(CallbackRoon1ToggleShuffle aCallback, void* aPtr)
{
    iCallbackToggleShuffle = aCallback;
    iPtrToggleShuffle = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ToggleShuffle");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoToggleShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionToggleLoop(CallbackRoon1ToggleLoop aCallback, void* aPtr)
{
    iCallbackToggleLoop = aCallback;
    iPtrToggleLoop = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ToggleLoop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoToggleLoop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionRepeat(CallbackRoon1Repeat aCallback, void* aPtr)
{
    iCallbackRepeat = aCallback;
    iPtrRepeat = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Repeat");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionShuffle(CallbackRoon1Shuffle aCallback, void* aPtr)
{
    iCallbackShuffle = aCallback;
    iPtrShuffle = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Shuffle");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionSeekSecondAbsolute(CallbackRoon1SeekSecondAbsolute aCallback, void* aPtr)
{
    iCallbackSeekSecondAbsolute = aCallback;
    iPtrSeekSecondAbsolute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondAbsolute");
    action->AddInputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoSeekSecondAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionSeekSecondRelative(CallbackRoon1SeekSecondRelative aCallback, void* aPtr)
{
    iCallbackSeekSecondRelative = aCallback;
    iPtrSeekSecondRelative = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondRelative");
    action->AddInputParameter(new ParameterInt("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoSeekSecondRelative);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::EnableActionTransportState(CallbackRoon1TransportState aCallback, void* aPtr)
{
    iCallbackTransportState = aCallback;
    iPtrTransportState = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("TransportState");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyTransportState));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1C::DoTransportState);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1C::DoPlay(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRoon1C::DoPause(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRoon1C::DoPlayPause(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackPlayPause != NULL);
    if (0 != iCallbackPlayPause(iPtrPlayPause, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgRoon1C::DoStop(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRoon1C::DoNext(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRoon1C::DoPrevious(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRoon1C::DoToggleShuffle(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackToggleShuffle != NULL);
    if (0 != iCallbackToggleShuffle(iPtrToggleShuffle, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgRoon1C::DoToggleLoop(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackToggleLoop != NULL);
    if (0 != iCallbackToggleLoop(iPtrToggleLoop, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgRoon1C::DoRepeat(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRoon1C::DoShuffle(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRoon1C::DoSeekSecondAbsolute(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRoon1C::DoSeekSecondRelative(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgRoon1C::DoTransportState(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgRoon1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgRoon1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionPlay(THandle aProvider, CallbackRoon1Play aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionPlay(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionPause(THandle aProvider, CallbackRoon1Pause aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionPause(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionPlayPause(THandle aProvider, CallbackRoon1PlayPause aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionPlayPause(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionStop(THandle aProvider, CallbackRoon1Stop aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionStop(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionNext(THandle aProvider, CallbackRoon1Next aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionNext(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionPrevious(THandle aProvider, CallbackRoon1Previous aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionPrevious(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionToggleShuffle(THandle aProvider, CallbackRoon1ToggleShuffle aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionToggleShuffle(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionToggleLoop(THandle aProvider, CallbackRoon1ToggleLoop aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionToggleLoop(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionRepeat(THandle aProvider, CallbackRoon1Repeat aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionRepeat(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionShuffle(THandle aProvider, CallbackRoon1Shuffle aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionShuffle(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionSeekSecondAbsolute(THandle aProvider, CallbackRoon1SeekSecondAbsolute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionSeekSecondAbsolute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionSeekSecondRelative(THandle aProvider, CallbackRoon1SeekSecondRelative aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionSeekSecondRelative(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnableActionTransportState(THandle aProvider, CallbackRoon1TransportState aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnableActionTransportState(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgRoon1SetPropertyTransportState(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->SetPropertyTransportState(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgRoon1GetPropertyTransportState(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->GetPropertyTransportState(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgRoon1SetPropertyRepeat(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->SetPropertyRepeat((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgRoon1GetPropertyRepeat(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->GetPropertyRepeat(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgRoon1SetPropertyShuffle(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->SetPropertyShuffle((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgRoon1GetPropertyShuffle(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->GetPropertyShuffle(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnablePropertyTransportState(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnablePropertyTransportState();
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnablePropertyRepeat(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnablePropertyRepeat();
}

void STDCALL DvProviderAvOpenhomeOrgRoon1EnablePropertyShuffle(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRoon1C*>(aProvider)->EnablePropertyShuffle();
}

