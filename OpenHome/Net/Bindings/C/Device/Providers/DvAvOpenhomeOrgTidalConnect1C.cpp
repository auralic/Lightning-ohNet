#include "DvAvOpenhomeOrgTidalConnect1.h"
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

class DvProviderAvOpenhomeOrgTidalConnect1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgTidalConnect1C(DvDeviceC aDevice);
    TBool SetPropertyTransportState(const Brx& aValue);
    void GetPropertyTransportState(Brhz& aValue);
    TBool SetPropertyRepeat(TBool aValue);
    void GetPropertyRepeat(TBool& aValue);
    TBool SetPropertyRepeatOne(TBool aValue);
    void GetPropertyRepeatOne(TBool& aValue);
    TBool SetPropertyShuffle(TBool aValue);
    void GetPropertyShuffle(TBool& aValue);
    TBool SetPropertyUpdateCover(TBool aValue);
    void GetPropertyUpdateCover(TBool& aValue);
    void EnablePropertyTransportState();
    void EnablePropertyRepeat();
    void EnablePropertyRepeatOne();
    void EnablePropertyShuffle();
    void EnablePropertyUpdateCover();
    void EnableActionPlay(CallbackTidalConnect1Play aCallback, void* aPtr);
    void EnableActionPause(CallbackTidalConnect1Pause aCallback, void* aPtr);
    void EnableActionStop(CallbackTidalConnect1Stop aCallback, void* aPtr);
    void EnableActionNext(CallbackTidalConnect1Next aCallback, void* aPtr);
    void EnableActionPrevious(CallbackTidalConnect1Previous aCallback, void* aPtr);
    void EnableActionToggleShuffle(CallbackTidalConnect1ToggleShuffle aCallback, void* aPtr);
    void EnableActionToggleLoop(CallbackTidalConnect1ToggleLoop aCallback, void* aPtr);
    void EnableActionRequestMetadata(CallbackTidalConnect1RequestMetadata aCallback, void* aPtr);
    void EnableActionSeekSecondAbsolute(CallbackTidalConnect1SeekSecondAbsolute aCallback, void* aPtr);
    void EnableActionTransportState(CallbackTidalConnect1TransportState aCallback, void* aPtr);
private:
    void DoPlay(IDviInvocation& aInvocation);
    void DoPause(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoNext(IDviInvocation& aInvocation);
    void DoPrevious(IDviInvocation& aInvocation);
    void DoToggleShuffle(IDviInvocation& aInvocation);
    void DoToggleLoop(IDviInvocation& aInvocation);
    void DoRequestMetadata(IDviInvocation& aInvocation);
    void DoSeekSecondAbsolute(IDviInvocation& aInvocation);
    void DoTransportState(IDviInvocation& aInvocation);
private:
    CallbackTidalConnect1Play iCallbackPlay;
    void* iPtrPlay;
    CallbackTidalConnect1Pause iCallbackPause;
    void* iPtrPause;
    CallbackTidalConnect1Stop iCallbackStop;
    void* iPtrStop;
    CallbackTidalConnect1Next iCallbackNext;
    void* iPtrNext;
    CallbackTidalConnect1Previous iCallbackPrevious;
    void* iPtrPrevious;
    CallbackTidalConnect1ToggleShuffle iCallbackToggleShuffle;
    void* iPtrToggleShuffle;
    CallbackTidalConnect1ToggleLoop iCallbackToggleLoop;
    void* iPtrToggleLoop;
    CallbackTidalConnect1RequestMetadata iCallbackRequestMetadata;
    void* iPtrRequestMetadata;
    CallbackTidalConnect1SeekSecondAbsolute iCallbackSeekSecondAbsolute;
    void* iPtrSeekSecondAbsolute;
    CallbackTidalConnect1TransportState iCallbackTransportState;
    void* iPtrTransportState;
    PropertyString* iPropertyTransportState;
    PropertyBool* iPropertyRepeat;
    PropertyBool* iPropertyRepeatOne;
    PropertyBool* iPropertyShuffle;
    PropertyBool* iPropertyUpdateCover;
};

DvProviderAvOpenhomeOrgTidalConnect1C::DvProviderAvOpenhomeOrgTidalConnect1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "TidalConnect", 1)
{
    iPropertyTransportState = NULL;
    iPropertyRepeat = NULL;
    iPropertyRepeatOne = NULL;
    iPropertyShuffle = NULL;
    iPropertyUpdateCover = NULL;
}

TBool DvProviderAvOpenhomeOrgTidalConnect1C::SetPropertyTransportState(const Brx& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    return SetPropertyString(*iPropertyTransportState, aValue);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::GetPropertyTransportState(Brhz& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    aValue.Set(iPropertyTransportState->Value());
}

TBool DvProviderAvOpenhomeOrgTidalConnect1C::SetPropertyRepeat(TBool aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    return SetPropertyBool(*iPropertyRepeat, aValue);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::GetPropertyRepeat(TBool& aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    aValue = iPropertyRepeat->Value();
}

TBool DvProviderAvOpenhomeOrgTidalConnect1C::SetPropertyRepeatOne(TBool aValue)
{
    ASSERT(iPropertyRepeatOne != NULL);
    return SetPropertyBool(*iPropertyRepeatOne, aValue);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::GetPropertyRepeatOne(TBool& aValue)
{
    ASSERT(iPropertyRepeatOne != NULL);
    aValue = iPropertyRepeatOne->Value();
}

TBool DvProviderAvOpenhomeOrgTidalConnect1C::SetPropertyShuffle(TBool aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    return SetPropertyBool(*iPropertyShuffle, aValue);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::GetPropertyShuffle(TBool& aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    aValue = iPropertyShuffle->Value();
}

TBool DvProviderAvOpenhomeOrgTidalConnect1C::SetPropertyUpdateCover(TBool aValue)
{
    ASSERT(iPropertyUpdateCover != NULL);
    return SetPropertyBool(*iPropertyUpdateCover, aValue);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::GetPropertyUpdateCover(TBool& aValue)
{
    ASSERT(iPropertyUpdateCover != NULL);
    aValue = iPropertyUpdateCover->Value();
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnablePropertyTransportState()
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

void DvProviderAvOpenhomeOrgTidalConnect1C::EnablePropertyRepeat()
{
    iPropertyRepeat = new PropertyBool(new ParameterBool("Repeat"));
    iService->AddProperty(iPropertyRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnablePropertyRepeatOne()
{
    iPropertyRepeatOne = new PropertyBool(new ParameterBool("RepeatOne"));
    iService->AddProperty(iPropertyRepeatOne); // passes ownership
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnablePropertyShuffle()
{
    iPropertyShuffle = new PropertyBool(new ParameterBool("Shuffle"));
    iService->AddProperty(iPropertyShuffle); // passes ownership
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnablePropertyUpdateCover()
{
    iPropertyUpdateCover = new PropertyBool(new ParameterBool("UpdateCover"));
    iService->AddProperty(iPropertyUpdateCover); // passes ownership
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnableActionPlay(CallbackTidalConnect1Play aCallback, void* aPtr)
{
    iCallbackPlay = aCallback;
    iPtrPlay = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Play");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTidalConnect1C::DoPlay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnableActionPause(CallbackTidalConnect1Pause aCallback, void* aPtr)
{
    iCallbackPause = aCallback;
    iPtrPause = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Pause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTidalConnect1C::DoPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnableActionStop(CallbackTidalConnect1Stop aCallback, void* aPtr)
{
    iCallbackStop = aCallback;
    iPtrStop = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Stop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTidalConnect1C::DoStop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnableActionNext(CallbackTidalConnect1Next aCallback, void* aPtr)
{
    iCallbackNext = aCallback;
    iPtrNext = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Next");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTidalConnect1C::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnableActionPrevious(CallbackTidalConnect1Previous aCallback, void* aPtr)
{
    iCallbackPrevious = aCallback;
    iPtrPrevious = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Previous");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTidalConnect1C::DoPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnableActionToggleShuffle(CallbackTidalConnect1ToggleShuffle aCallback, void* aPtr)
{
    iCallbackToggleShuffle = aCallback;
    iPtrToggleShuffle = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ToggleShuffle");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTidalConnect1C::DoToggleShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnableActionToggleLoop(CallbackTidalConnect1ToggleLoop aCallback, void* aPtr)
{
    iCallbackToggleLoop = aCallback;
    iPtrToggleLoop = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ToggleLoop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTidalConnect1C::DoToggleLoop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnableActionRequestMetadata(CallbackTidalConnect1RequestMetadata aCallback, void* aPtr)
{
    iCallbackRequestMetadata = aCallback;
    iPtrRequestMetadata = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RequestMetadata");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTidalConnect1C::DoRequestMetadata);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnableActionSeekSecondAbsolute(CallbackTidalConnect1SeekSecondAbsolute aCallback, void* aPtr)
{
    iCallbackSeekSecondAbsolute = aCallback;
    iPtrSeekSecondAbsolute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondAbsolute");
    action->AddInputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTidalConnect1C::DoSeekSecondAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::EnableActionTransportState(CallbackTidalConnect1TransportState aCallback, void* aPtr)
{
    iCallbackTransportState = aCallback;
    iPtrTransportState = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("TransportState");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyTransportState));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTidalConnect1C::DoTransportState);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTidalConnect1C::DoPlay(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTidalConnect1C::DoPause(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTidalConnect1C::DoStop(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTidalConnect1C::DoNext(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTidalConnect1C::DoPrevious(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTidalConnect1C::DoToggleShuffle(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTidalConnect1C::DoToggleLoop(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTidalConnect1C::DoRequestMetadata(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackRequestMetadata != NULL);
    if (0 != iCallbackRequestMetadata(iPtrRequestMetadata, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTidalConnect1C::DoSeekSecondAbsolute(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgTidalConnect1C::DoTransportState(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgTidalConnect1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgTidalConnect1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnableActionPlay(THandle aProvider, CallbackTidalConnect1Play aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnableActionPlay(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnableActionPause(THandle aProvider, CallbackTidalConnect1Pause aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnableActionPause(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnableActionStop(THandle aProvider, CallbackTidalConnect1Stop aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnableActionStop(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnableActionNext(THandle aProvider, CallbackTidalConnect1Next aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnableActionNext(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnableActionPrevious(THandle aProvider, CallbackTidalConnect1Previous aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnableActionPrevious(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnableActionToggleShuffle(THandle aProvider, CallbackTidalConnect1ToggleShuffle aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnableActionToggleShuffle(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnableActionToggleLoop(THandle aProvider, CallbackTidalConnect1ToggleLoop aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnableActionToggleLoop(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnableActionRequestMetadata(THandle aProvider, CallbackTidalConnect1RequestMetadata aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnableActionRequestMetadata(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnableActionSeekSecondAbsolute(THandle aProvider, CallbackTidalConnect1SeekSecondAbsolute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnableActionSeekSecondAbsolute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnableActionTransportState(THandle aProvider, CallbackTidalConnect1TransportState aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnableActionTransportState(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTidalConnect1SetPropertyTransportState(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->SetPropertyTransportState(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1GetPropertyTransportState(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->GetPropertyTransportState(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgTidalConnect1SetPropertyRepeat(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->SetPropertyRepeat((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1GetPropertyRepeat(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->GetPropertyRepeat(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTidalConnect1SetPropertyRepeatOne(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->SetPropertyRepeatOne((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1GetPropertyRepeatOne(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->GetPropertyRepeatOne(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTidalConnect1SetPropertyShuffle(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->SetPropertyShuffle((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1GetPropertyShuffle(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->GetPropertyShuffle(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTidalConnect1SetPropertyUpdateCover(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->SetPropertyUpdateCover((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1GetPropertyUpdateCover(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->GetPropertyUpdateCover(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnablePropertyTransportState(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnablePropertyTransportState();
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnablePropertyRepeat(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnablePropertyRepeat();
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnablePropertyRepeatOne(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnablePropertyRepeatOne();
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnablePropertyShuffle(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnablePropertyShuffle();
}

void STDCALL DvProviderAvOpenhomeOrgTidalConnect1EnablePropertyUpdateCover(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTidalConnect1C*>(aProvider)->EnablePropertyUpdateCover();
}

