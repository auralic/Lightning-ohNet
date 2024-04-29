#include "DvAvOpenhomeOrgMusicStation1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgMusicStation1::SetPropertyTransportState(const Brx& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    return SetPropertyString(*iPropertyTransportState, aValue);
}

void DvProviderAvOpenhomeOrgMusicStation1::GetPropertyTransportState(Brhz& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    aValue.Set(iPropertyTransportState->Value());
}

void DvProviderAvOpenhomeOrgMusicStation1::WritePropertyTransportState(IWriter& aWriter)
{
    iPropertyTransportState->Write(aWriter);
}

TBool DvProviderAvOpenhomeOrgMusicStation1::SetPropertyThumbRating(const Brx& aValue)
{
    ASSERT(iPropertyThumbRating != NULL);
    return SetPropertyString(*iPropertyThumbRating, aValue);
}

void DvProviderAvOpenhomeOrgMusicStation1::GetPropertyThumbRating(Brhz& aValue)
{
    ASSERT(iPropertyThumbRating != NULL);
    aValue.Set(iPropertyThumbRating->Value());
}

void DvProviderAvOpenhomeOrgMusicStation1::WritePropertyThumbRating(IWriter& aWriter)
{
    iPropertyThumbRating->Write(aWriter);
}

TBool DvProviderAvOpenhomeOrgMusicStation1::SetPropertyId(TUint aValue)
{
    ASSERT(iPropertyId != NULL);
    return SetPropertyUint(*iPropertyId, aValue);
}

void DvProviderAvOpenhomeOrgMusicStation1::GetPropertyId(TUint& aValue)
{
    ASSERT(iPropertyId != NULL);
    aValue = iPropertyId->Value();
}

DvProviderAvOpenhomeOrgMusicStation1::DvProviderAvOpenhomeOrgMusicStation1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "MusicStation", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgMusicStation1::DvProviderAvOpenhomeOrgMusicStation1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "MusicStation", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgMusicStation1::Construct()
{
    iPropertyTransportState = NULL;
    iPropertyThumbRating = NULL;
    iPropertyId = NULL;
}

void DvProviderAvOpenhomeOrgMusicStation1::EnablePropertyTransportState()
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

void DvProviderAvOpenhomeOrgMusicStation1::EnablePropertyThumbRating()
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

void DvProviderAvOpenhomeOrgMusicStation1::EnablePropertyId()
{
    iPropertyId = new PropertyUint(new ParameterUint("Id"));
    iService->AddProperty(iPropertyId); // passes ownership
}

void DvProviderAvOpenhomeOrgMusicStation1::EnableActionPlay()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Play");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMusicStation1::DoPlay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMusicStation1::EnableActionPause()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Pause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMusicStation1::DoPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMusicStation1::EnableActionStop()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Stop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMusicStation1::DoStop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMusicStation1::EnableActionNext()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Next");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMusicStation1::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMusicStation1::EnableActionPrevious()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Previous");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMusicStation1::DoPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMusicStation1::EnableActionSetThumbRating()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetThumbRating");
    action->AddInputParameter(new ParameterRelated("ThumbRating", *iPropertyThumbRating));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMusicStation1::DoSetThumbRating);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMusicStation1::EnableActionSeekSecondAbsolute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondAbsolute");
    action->AddInputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMusicStation1::DoSeekSecondAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMusicStation1::EnableActionSeekSecondRelative()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondRelative");
    action->AddInputParameter(new ParameterInt("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMusicStation1::DoSeekSecondRelative);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMusicStation1::EnableActionTransportState()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("TransportState");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyTransportState));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMusicStation1::DoTransportState);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMusicStation1::EnableActionInsert()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Insert");
    action->AddInputParameter(new ParameterRelated("AfterId", *iPropertyId));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Metadata"));
    action->AddOutputParameter(new ParameterRelated("NewId", *iPropertyId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMusicStation1::DoInsert);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMusicStation1::DoPlay(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Play(invocation);
}

void DvProviderAvOpenhomeOrgMusicStation1::DoPause(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Pause(invocation);
}

void DvProviderAvOpenhomeOrgMusicStation1::DoStop(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Stop(invocation);
}

void DvProviderAvOpenhomeOrgMusicStation1::DoNext(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Next(invocation);
}

void DvProviderAvOpenhomeOrgMusicStation1::DoPrevious(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Previous(invocation);
}

void DvProviderAvOpenhomeOrgMusicStation1::DoSetThumbRating(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ThumbRating;
    aInvocation.InvocationReadString("ThumbRating", ThumbRating);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetThumbRating(invocation, ThumbRating);
}

void DvProviderAvOpenhomeOrgMusicStation1::DoSeekSecondAbsolute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SeekSecondAbsolute(invocation, Value);
}

void DvProviderAvOpenhomeOrgMusicStation1::DoSeekSecondRelative(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TInt Value = aInvocation.InvocationReadInt("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SeekSecondRelative(invocation, Value);
}

void DvProviderAvOpenhomeOrgMusicStation1::DoTransportState(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respValue(aInvocation, "Value");
    TransportState(invocation, respValue);
}

void DvProviderAvOpenhomeOrgMusicStation1::DoInsert(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint AfterId = aInvocation.InvocationReadUint("AfterId");
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    Brhz Metadata;
    aInvocation.InvocationReadString("Metadata", Metadata);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respNewId(aInvocation, "NewId");
    Insert(invocation, AfterId, Uri, Metadata, respNewId);
}

void DvProviderAvOpenhomeOrgMusicStation1::Play(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgMusicStation1::Pause(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgMusicStation1::Stop(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgMusicStation1::Next(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgMusicStation1::Previous(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgMusicStation1::SetThumbRating(IDvInvocation& /*aResponse*/, const Brx& /*aThumbRating*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgMusicStation1::SeekSecondAbsolute(IDvInvocation& /*aResponse*/, TUint /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgMusicStation1::SeekSecondRelative(IDvInvocation& /*aResponse*/, TInt /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgMusicStation1::TransportState(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgMusicStation1::Insert(IDvInvocation& /*aResponse*/, TUint /*aAfterId*/, const Brx& /*aUri*/, const Brx& /*aMetadata*/, IDvInvocationResponseUint& /*aNewId*/)
{
    ASSERTS();
}

