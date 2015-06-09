#include "DvAvOpenhomeOrgStreaming1.h"
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

class DvProviderAvOpenhomeOrgStreaming1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgStreaming1C(DvDeviceC aDevice);
    TBool SetPropertyTransportState(const Brx& aValue);
    void GetPropertyTransportState(Brhz& aValue);
    TBool SetPropertyRepeat(TBool aValue);
    void GetPropertyRepeat(TBool& aValue);
    TBool SetPropertyShuffle(TBool aValue);
    void GetPropertyShuffle(TBool& aValue);
    TBool SetPropertyId(TUint aValue);
    void GetPropertyId(TUint& aValue);
    TBool SetPropertyIdArray(const Brx& aValue);
    void GetPropertyIdArray(Brh& aValue);
    TBool SetPropertyTracksMax(TUint aValue);
    void GetPropertyTracksMax(TUint& aValue);
    TBool SetPropertyProtocolInfo(const Brx& aValue);
    void GetPropertyProtocolInfo(Brhz& aValue);
    void EnablePropertyTransportState();
    void EnablePropertyRepeat();
    void EnablePropertyShuffle();
    void EnablePropertyId();
    void EnablePropertyIdArray();
    void EnablePropertyTracksMax();
    void EnablePropertyProtocolInfo();
    void EnableActionPlay(CallbackStreaming1Play aCallback, void* aPtr);
    void EnableActionPause(CallbackStreaming1Pause aCallback, void* aPtr);
    void EnableActionStop(CallbackStreaming1Stop aCallback, void* aPtr);
    void EnableActionNext(CallbackStreaming1Next aCallback, void* aPtr);
    void EnableActionPrevious(CallbackStreaming1Previous aCallback, void* aPtr);
    void EnableActionSetRepeat(CallbackStreaming1SetRepeat aCallback, void* aPtr);
    void EnableActionRepeat(CallbackStreaming1Repeat aCallback, void* aPtr);
    void EnableActionSetShuffle(CallbackStreaming1SetShuffle aCallback, void* aPtr);
    void EnableActionShuffle(CallbackStreaming1Shuffle aCallback, void* aPtr);
    void EnableActionSeekSecondAbsolute(CallbackStreaming1SeekSecondAbsolute aCallback, void* aPtr);
    void EnableActionSeekSecondRelative(CallbackStreaming1SeekSecondRelative aCallback, void* aPtr);
    void EnableActionSeekId(CallbackStreaming1SeekId aCallback, void* aPtr);
    void EnableActionSeekIndex(CallbackStreaming1SeekIndex aCallback, void* aPtr);
    void EnableActionTransportState(CallbackStreaming1TransportState aCallback, void* aPtr);
    void EnableActionId(CallbackStreaming1Id aCallback, void* aPtr);
    void EnableActionRead(CallbackStreaming1Read aCallback, void* aPtr);
    void EnableActionReadList(CallbackStreaming1ReadList aCallback, void* aPtr);
    void EnableActionInsert(CallbackStreaming1Insert aCallback, void* aPtr);
    void EnableActionDeleteId(CallbackStreaming1DeleteId aCallback, void* aPtr);
    void EnableActionDeleteAll(CallbackStreaming1DeleteAll aCallback, void* aPtr);
    void EnableActionTracksMax(CallbackStreaming1TracksMax aCallback, void* aPtr);
    void EnableActionIdArray(CallbackStreaming1IdArray aCallback, void* aPtr);
    void EnableActionIdArrayChanged(CallbackStreaming1IdArrayChanged aCallback, void* aPtr);
    void EnableActionProtocolInfo(CallbackStreaming1ProtocolInfo aCallback, void* aPtr);
private:
    void DoPlay(IDviInvocation& aInvocation);
    void DoPause(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoNext(IDviInvocation& aInvocation);
    void DoPrevious(IDviInvocation& aInvocation);
    void DoSetRepeat(IDviInvocation& aInvocation);
    void DoRepeat(IDviInvocation& aInvocation);
    void DoSetShuffle(IDviInvocation& aInvocation);
    void DoShuffle(IDviInvocation& aInvocation);
    void DoSeekSecondAbsolute(IDviInvocation& aInvocation);
    void DoSeekSecondRelative(IDviInvocation& aInvocation);
    void DoSeekId(IDviInvocation& aInvocation);
    void DoSeekIndex(IDviInvocation& aInvocation);
    void DoTransportState(IDviInvocation& aInvocation);
    void DoId(IDviInvocation& aInvocation);
    void DoRead(IDviInvocation& aInvocation);
    void DoReadList(IDviInvocation& aInvocation);
    void DoInsert(IDviInvocation& aInvocation);
    void DoDeleteId(IDviInvocation& aInvocation);
    void DoDeleteAll(IDviInvocation& aInvocation);
    void DoTracksMax(IDviInvocation& aInvocation);
    void DoIdArray(IDviInvocation& aInvocation);
    void DoIdArrayChanged(IDviInvocation& aInvocation);
    void DoProtocolInfo(IDviInvocation& aInvocation);
private:
    CallbackStreaming1Play iCallbackPlay;
    void* iPtrPlay;
    CallbackStreaming1Pause iCallbackPause;
    void* iPtrPause;
    CallbackStreaming1Stop iCallbackStop;
    void* iPtrStop;
    CallbackStreaming1Next iCallbackNext;
    void* iPtrNext;
    CallbackStreaming1Previous iCallbackPrevious;
    void* iPtrPrevious;
    CallbackStreaming1SetRepeat iCallbackSetRepeat;
    void* iPtrSetRepeat;
    CallbackStreaming1Repeat iCallbackRepeat;
    void* iPtrRepeat;
    CallbackStreaming1SetShuffle iCallbackSetShuffle;
    void* iPtrSetShuffle;
    CallbackStreaming1Shuffle iCallbackShuffle;
    void* iPtrShuffle;
    CallbackStreaming1SeekSecondAbsolute iCallbackSeekSecondAbsolute;
    void* iPtrSeekSecondAbsolute;
    CallbackStreaming1SeekSecondRelative iCallbackSeekSecondRelative;
    void* iPtrSeekSecondRelative;
    CallbackStreaming1SeekId iCallbackSeekId;
    void* iPtrSeekId;
    CallbackStreaming1SeekIndex iCallbackSeekIndex;
    void* iPtrSeekIndex;
    CallbackStreaming1TransportState iCallbackTransportState;
    void* iPtrTransportState;
    CallbackStreaming1Id iCallbackId;
    void* iPtrId;
    CallbackStreaming1Read iCallbackRead;
    void* iPtrRead;
    CallbackStreaming1ReadList iCallbackReadList;
    void* iPtrReadList;
    CallbackStreaming1Insert iCallbackInsert;
    void* iPtrInsert;
    CallbackStreaming1DeleteId iCallbackDeleteId;
    void* iPtrDeleteId;
    CallbackStreaming1DeleteAll iCallbackDeleteAll;
    void* iPtrDeleteAll;
    CallbackStreaming1TracksMax iCallbackTracksMax;
    void* iPtrTracksMax;
    CallbackStreaming1IdArray iCallbackIdArray;
    void* iPtrIdArray;
    CallbackStreaming1IdArrayChanged iCallbackIdArrayChanged;
    void* iPtrIdArrayChanged;
    CallbackStreaming1ProtocolInfo iCallbackProtocolInfo;
    void* iPtrProtocolInfo;
    PropertyString* iPropertyTransportState;
    PropertyBool* iPropertyRepeat;
    PropertyBool* iPropertyShuffle;
    PropertyUint* iPropertyId;
    PropertyBinary* iPropertyIdArray;
    PropertyUint* iPropertyTracksMax;
    PropertyString* iPropertyProtocolInfo;
};

DvProviderAvOpenhomeOrgStreaming1C::DvProviderAvOpenhomeOrgStreaming1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Streaming", 1)
{
    iPropertyTransportState = NULL;
    iPropertyRepeat = NULL;
    iPropertyShuffle = NULL;
    iPropertyId = NULL;
    iPropertyIdArray = NULL;
    iPropertyTracksMax = NULL;
    iPropertyProtocolInfo = NULL;
}

TBool DvProviderAvOpenhomeOrgStreaming1C::SetPropertyTransportState(const Brx& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    return SetPropertyString(*iPropertyTransportState, aValue);
}

void DvProviderAvOpenhomeOrgStreaming1C::GetPropertyTransportState(Brhz& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    aValue.Set(iPropertyTransportState->Value());
}

TBool DvProviderAvOpenhomeOrgStreaming1C::SetPropertyRepeat(TBool aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    return SetPropertyBool(*iPropertyRepeat, aValue);
}

void DvProviderAvOpenhomeOrgStreaming1C::GetPropertyRepeat(TBool& aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    aValue = iPropertyRepeat->Value();
}

TBool DvProviderAvOpenhomeOrgStreaming1C::SetPropertyShuffle(TBool aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    return SetPropertyBool(*iPropertyShuffle, aValue);
}

void DvProviderAvOpenhomeOrgStreaming1C::GetPropertyShuffle(TBool& aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    aValue = iPropertyShuffle->Value();
}

TBool DvProviderAvOpenhomeOrgStreaming1C::SetPropertyId(TUint aValue)
{
    ASSERT(iPropertyId != NULL);
    return SetPropertyUint(*iPropertyId, aValue);
}

void DvProviderAvOpenhomeOrgStreaming1C::GetPropertyId(TUint& aValue)
{
    ASSERT(iPropertyId != NULL);
    aValue = iPropertyId->Value();
}

TBool DvProviderAvOpenhomeOrgStreaming1C::SetPropertyIdArray(const Brx& aValue)
{
    ASSERT(iPropertyIdArray != NULL);
    return SetPropertyBinary(*iPropertyIdArray, aValue);
}

void DvProviderAvOpenhomeOrgStreaming1C::GetPropertyIdArray(Brh& aValue)
{
    ASSERT(iPropertyIdArray != NULL);
    aValue.Set(iPropertyIdArray->Value());
}

TBool DvProviderAvOpenhomeOrgStreaming1C::SetPropertyTracksMax(TUint aValue)
{
    ASSERT(iPropertyTracksMax != NULL);
    return SetPropertyUint(*iPropertyTracksMax, aValue);
}

void DvProviderAvOpenhomeOrgStreaming1C::GetPropertyTracksMax(TUint& aValue)
{
    ASSERT(iPropertyTracksMax != NULL);
    aValue = iPropertyTracksMax->Value();
}

TBool DvProviderAvOpenhomeOrgStreaming1C::SetPropertyProtocolInfo(const Brx& aValue)
{
    ASSERT(iPropertyProtocolInfo != NULL);
    return SetPropertyString(*iPropertyProtocolInfo, aValue);
}

void DvProviderAvOpenhomeOrgStreaming1C::GetPropertyProtocolInfo(Brhz& aValue)
{
    ASSERT(iPropertyProtocolInfo != NULL);
    aValue.Set(iPropertyProtocolInfo->Value());
}

void DvProviderAvOpenhomeOrgStreaming1C::EnablePropertyTransportState()
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

void DvProviderAvOpenhomeOrgStreaming1C::EnablePropertyRepeat()
{
    iPropertyRepeat = new PropertyBool(new ParameterBool("Repeat"));
    iService->AddProperty(iPropertyRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgStreaming1C::EnablePropertyShuffle()
{
    iPropertyShuffle = new PropertyBool(new ParameterBool("Shuffle"));
    iService->AddProperty(iPropertyShuffle); // passes ownership
}

void DvProviderAvOpenhomeOrgStreaming1C::EnablePropertyId()
{
    iPropertyId = new PropertyUint(new ParameterUint("Id"));
    iService->AddProperty(iPropertyId); // passes ownership
}

void DvProviderAvOpenhomeOrgStreaming1C::EnablePropertyIdArray()
{
    iPropertyIdArray = new PropertyBinary(new ParameterBinary("IdArray"));
    iService->AddProperty(iPropertyIdArray); // passes ownership
}

void DvProviderAvOpenhomeOrgStreaming1C::EnablePropertyTracksMax()
{
    iPropertyTracksMax = new PropertyUint(new ParameterUint("TracksMax"));
    iService->AddProperty(iPropertyTracksMax); // passes ownership
}

void DvProviderAvOpenhomeOrgStreaming1C::EnablePropertyProtocolInfo()
{
    iPropertyProtocolInfo = new PropertyString(new ParameterString("ProtocolInfo"));
    iService->AddProperty(iPropertyProtocolInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionPlay(CallbackStreaming1Play aCallback, void* aPtr)
{
    iCallbackPlay = aCallback;
    iPtrPlay = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Play");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoPlay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionPause(CallbackStreaming1Pause aCallback, void* aPtr)
{
    iCallbackPause = aCallback;
    iPtrPause = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Pause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionStop(CallbackStreaming1Stop aCallback, void* aPtr)
{
    iCallbackStop = aCallback;
    iPtrStop = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Stop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoStop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionNext(CallbackStreaming1Next aCallback, void* aPtr)
{
    iCallbackNext = aCallback;
    iPtrNext = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Next");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionPrevious(CallbackStreaming1Previous aCallback, void* aPtr)
{
    iCallbackPrevious = aCallback;
    iPtrPrevious = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Previous");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionSetRepeat(CallbackStreaming1SetRepeat aCallback, void* aPtr)
{
    iCallbackSetRepeat = aCallback;
    iPtrSetRepeat = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRepeat");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoSetRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionRepeat(CallbackStreaming1Repeat aCallback, void* aPtr)
{
    iCallbackRepeat = aCallback;
    iPtrRepeat = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Repeat");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionSetShuffle(CallbackStreaming1SetShuffle aCallback, void* aPtr)
{
    iCallbackSetShuffle = aCallback;
    iPtrSetShuffle = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetShuffle");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoSetShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionShuffle(CallbackStreaming1Shuffle aCallback, void* aPtr)
{
    iCallbackShuffle = aCallback;
    iPtrShuffle = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Shuffle");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionSeekSecondAbsolute(CallbackStreaming1SeekSecondAbsolute aCallback, void* aPtr)
{
    iCallbackSeekSecondAbsolute = aCallback;
    iPtrSeekSecondAbsolute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondAbsolute");
    action->AddInputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoSeekSecondAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionSeekSecondRelative(CallbackStreaming1SeekSecondRelative aCallback, void* aPtr)
{
    iCallbackSeekSecondRelative = aCallback;
    iPtrSeekSecondRelative = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondRelative");
    action->AddInputParameter(new ParameterInt("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoSeekSecondRelative);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionSeekId(CallbackStreaming1SeekId aCallback, void* aPtr)
{
    iCallbackSeekId = aCallback;
    iPtrSeekId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekId");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoSeekId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionSeekIndex(CallbackStreaming1SeekIndex aCallback, void* aPtr)
{
    iCallbackSeekIndex = aCallback;
    iPtrSeekIndex = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekIndex");
    action->AddInputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoSeekIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionTransportState(CallbackStreaming1TransportState aCallback, void* aPtr)
{
    iCallbackTransportState = aCallback;
    iPtrTransportState = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("TransportState");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyTransportState));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoTransportState);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionId(CallbackStreaming1Id aCallback, void* aPtr)
{
    iCallbackId = aCallback;
    iPtrId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Id");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionRead(CallbackStreaming1Read aCallback, void* aPtr)
{
    iCallbackRead = aCallback;
    iPtrRead = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Read");
    action->AddInputParameter(new ParameterRelated("Id", *iPropertyId));
    action->AddOutputParameter(new ParameterString("Uri"));
    action->AddOutputParameter(new ParameterString("Metadata"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoRead);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionReadList(CallbackStreaming1ReadList aCallback, void* aPtr)
{
    iCallbackReadList = aCallback;
    iPtrReadList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReadList");
    action->AddInputParameter(new ParameterString("IdList"));
    action->AddOutputParameter(new ParameterString("TrackList"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoReadList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionInsert(CallbackStreaming1Insert aCallback, void* aPtr)
{
    iCallbackInsert = aCallback;
    iPtrInsert = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Insert");
    action->AddInputParameter(new ParameterRelated("AfterId", *iPropertyId));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Metadata"));
    action->AddOutputParameter(new ParameterRelated("NewId", *iPropertyId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoInsert);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionDeleteId(CallbackStreaming1DeleteId aCallback, void* aPtr)
{
    iCallbackDeleteId = aCallback;
    iPtrDeleteId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeleteId");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoDeleteId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionDeleteAll(CallbackStreaming1DeleteAll aCallback, void* aPtr)
{
    iCallbackDeleteAll = aCallback;
    iPtrDeleteAll = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeleteAll");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoDeleteAll);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionTracksMax(CallbackStreaming1TracksMax aCallback, void* aPtr)
{
    iCallbackTracksMax = aCallback;
    iPtrTracksMax = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("TracksMax");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyTracksMax));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoTracksMax);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionIdArray(CallbackStreaming1IdArray aCallback, void* aPtr)
{
    iCallbackIdArray = aCallback;
    iPtrIdArray = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IdArray");
    action->AddOutputParameter(new ParameterUint("Token"));
    action->AddOutputParameter(new ParameterRelated("Array", *iPropertyIdArray));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoIdArray);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionIdArrayChanged(CallbackStreaming1IdArrayChanged aCallback, void* aPtr)
{
    iCallbackIdArrayChanged = aCallback;
    iPtrIdArrayChanged = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("IdArrayChanged");
    action->AddInputParameter(new ParameterUint("Token"));
    action->AddOutputParameter(new ParameterBool("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoIdArrayChanged);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::EnableActionProtocolInfo(CallbackStreaming1ProtocolInfo aCallback, void* aPtr)
{
    iCallbackProtocolInfo = aCallback;
    iPtrProtocolInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ProtocolInfo");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyProtocolInfo));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgStreaming1C::DoProtocolInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgStreaming1C::DoPlay(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoPause(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoStop(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoNext(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoPrevious(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoSetRepeat(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoRepeat(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoSetShuffle(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoShuffle(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoSeekSecondAbsolute(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoSeekSecondRelative(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoSeekId(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSeekId != NULL);
    if (0 != iCallbackSeekId(iPtrSeekId, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgStreaming1C::DoSeekIndex(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSeekIndex != NULL);
    if (0 != iCallbackSeekIndex(iPtrSeekIndex, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgStreaming1C::DoTransportState(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoId(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackId != NULL);
    if (0 != iCallbackId(iPtrId, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write(Value);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgStreaming1C::DoRead(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Id = aInvocation.InvocationReadUint("Id");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Uri;
    char* Metadata;
    ASSERT(iCallbackRead != NULL);
    if (0 != iCallbackRead(iPtrRead, invocationC, invocationCPtr, Id, &Uri, &Metadata)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respUri(aInvocation, "Uri");
    DviInvocationResponseString respMetadata(aInvocation, "Metadata");
    invocation.StartResponse();
    Brhz bufUri((const TChar*)Uri);
    OhNetFreeExternal(Uri);
    respUri.Write(bufUri);
    respUri.WriteFlush();
    Brhz bufMetadata((const TChar*)Metadata);
    OhNetFreeExternal(Metadata);
    respMetadata.Write(bufMetadata);
    respMetadata.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgStreaming1C::DoReadList(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz IdList;
    aInvocation.InvocationReadString("IdList", IdList);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* TrackList;
    ASSERT(iCallbackReadList != NULL);
    if (0 != iCallbackReadList(iPtrReadList, invocationC, invocationCPtr, (const char*)IdList.Ptr(), &TrackList)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respTrackList(aInvocation, "TrackList");
    invocation.StartResponse();
    Brhz bufTrackList((const TChar*)TrackList);
    OhNetFreeExternal(TrackList);
    respTrackList.Write(bufTrackList);
    respTrackList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgStreaming1C::DoInsert(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgStreaming1C::DoDeleteId(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackDeleteId != NULL);
    if (0 != iCallbackDeleteId(iPtrDeleteId, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgStreaming1C::DoDeleteAll(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackDeleteAll != NULL);
    if (0 != iCallbackDeleteAll(iPtrDeleteAll, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgStreaming1C::DoTracksMax(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackTracksMax != NULL);
    if (0 != iCallbackTracksMax(iPtrTracksMax, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write(Value);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgStreaming1C::DoIdArray(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Token;
    char* Array;
    uint32_t ArrayLen;
    ASSERT(iCallbackIdArray != NULL);
    if (0 != iCallbackIdArray(iPtrIdArray, invocationC, invocationCPtr, &Token, &Array, &ArrayLen)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respToken(aInvocation, "Token");
    DviInvocationResponseBinary respArray(aInvocation, "Array");
    invocation.StartResponse();
    respToken.Write(Token);
    Brh bufArray;
    bufArray.Set((const TByte*)Array, ArrayLen);
    OhNetFreeExternal(Array);
    respArray.Write(bufArray);
    respArray.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgStreaming1C::DoIdArrayChanged(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Token = aInvocation.InvocationReadUint("Token");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackIdArrayChanged != NULL);
    if (0 != iCallbackIdArrayChanged(iPtrIdArrayChanged, invocationC, invocationCPtr, Token, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write((Value!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgStreaming1C::DoProtocolInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Value;
    ASSERT(iCallbackProtocolInfo != NULL);
    if (0 != iCallbackProtocolInfo(iPtrProtocolInfo, invocationC, invocationCPtr, &Value)) {
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



THandle STDCALL DvProviderAvOpenhomeOrgStreaming1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgStreaming1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionPlay(THandle aProvider, CallbackStreaming1Play aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionPlay(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionPause(THandle aProvider, CallbackStreaming1Pause aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionPause(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionStop(THandle aProvider, CallbackStreaming1Stop aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionStop(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionNext(THandle aProvider, CallbackStreaming1Next aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionNext(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionPrevious(THandle aProvider, CallbackStreaming1Previous aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionPrevious(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionSetRepeat(THandle aProvider, CallbackStreaming1SetRepeat aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionSetRepeat(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionRepeat(THandle aProvider, CallbackStreaming1Repeat aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionRepeat(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionSetShuffle(THandle aProvider, CallbackStreaming1SetShuffle aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionSetShuffle(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionShuffle(THandle aProvider, CallbackStreaming1Shuffle aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionShuffle(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionSeekSecondAbsolute(THandle aProvider, CallbackStreaming1SeekSecondAbsolute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionSeekSecondAbsolute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionSeekSecondRelative(THandle aProvider, CallbackStreaming1SeekSecondRelative aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionSeekSecondRelative(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionSeekId(THandle aProvider, CallbackStreaming1SeekId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionSeekId(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionSeekIndex(THandle aProvider, CallbackStreaming1SeekIndex aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionSeekIndex(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionTransportState(THandle aProvider, CallbackStreaming1TransportState aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionTransportState(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionId(THandle aProvider, CallbackStreaming1Id aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionId(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionRead(THandle aProvider, CallbackStreaming1Read aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionRead(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionReadList(THandle aProvider, CallbackStreaming1ReadList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionReadList(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionInsert(THandle aProvider, CallbackStreaming1Insert aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionInsert(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionDeleteId(THandle aProvider, CallbackStreaming1DeleteId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionDeleteId(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionDeleteAll(THandle aProvider, CallbackStreaming1DeleteAll aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionDeleteAll(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionTracksMax(THandle aProvider, CallbackStreaming1TracksMax aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionTracksMax(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionIdArray(THandle aProvider, CallbackStreaming1IdArray aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionIdArray(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionIdArrayChanged(THandle aProvider, CallbackStreaming1IdArrayChanged aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionIdArrayChanged(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnableActionProtocolInfo(THandle aProvider, CallbackStreaming1ProtocolInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnableActionProtocolInfo(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgStreaming1SetPropertyTransportState(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->SetPropertyTransportState(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1GetPropertyTransportState(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->GetPropertyTransportState(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgStreaming1SetPropertyRepeat(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->SetPropertyRepeat((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1GetPropertyRepeat(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->GetPropertyRepeat(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgStreaming1SetPropertyShuffle(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->SetPropertyShuffle((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1GetPropertyShuffle(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->GetPropertyShuffle(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgStreaming1SetPropertyId(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->SetPropertyId(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1GetPropertyId(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->GetPropertyId(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgStreaming1SetPropertyIdArray(THandle aProvider, const char* aValue, uint32_t aValueLen, uint32_t* aChanged)
{
    Brh buf;
    buf.Set((const TByte*)aValue, aValueLen);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->SetPropertyIdArray(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1GetPropertyIdArray(THandle aProvider, char** aValue, uint32_t* aValueLen)
{
    Brh buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->GetPropertyIdArray(buf);
    *aValueLen = buf.Bytes();
    *aValue = (char*)buf.Extract();
}

int32_t STDCALL DvProviderAvOpenhomeOrgStreaming1SetPropertyTracksMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->SetPropertyTracksMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1GetPropertyTracksMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->GetPropertyTracksMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgStreaming1SetPropertyProtocolInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->SetPropertyProtocolInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1GetPropertyProtocolInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->GetPropertyProtocolInfo(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnablePropertyTransportState(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnablePropertyTransportState();
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnablePropertyRepeat(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnablePropertyRepeat();
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnablePropertyShuffle(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnablePropertyShuffle();
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnablePropertyId(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnablePropertyId();
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnablePropertyIdArray(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnablePropertyIdArray();
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnablePropertyTracksMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnablePropertyTracksMax();
}

void STDCALL DvProviderAvOpenhomeOrgStreaming1EnablePropertyProtocolInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgStreaming1C*>(aProvider)->EnablePropertyProtocolInfo();
}

