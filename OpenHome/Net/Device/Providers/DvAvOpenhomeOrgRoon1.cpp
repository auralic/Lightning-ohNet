#include "DvAvOpenhomeOrgRoon1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgRoon1::SetPropertyTransportState(const Brx& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    return SetPropertyString(*iPropertyTransportState, aValue);
}

void DvProviderAvOpenhomeOrgRoon1::GetPropertyTransportState(Brhz& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    aValue.Set(iPropertyTransportState->Value());
}

TBool DvProviderAvOpenhomeOrgRoon1::SetPropertyRepeat(TBool aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    return SetPropertyBool(*iPropertyRepeat, aValue);
}

void DvProviderAvOpenhomeOrgRoon1::GetPropertyRepeat(TBool& aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    aValue = iPropertyRepeat->Value();
}

TBool DvProviderAvOpenhomeOrgRoon1::SetPropertyRepeatOne(TBool aValue)
{
    ASSERT(iPropertyRepeatOne != NULL);
    return SetPropertyBool(*iPropertyRepeatOne, aValue);
}

void DvProviderAvOpenhomeOrgRoon1::GetPropertyRepeatOne(TBool& aValue)
{
    ASSERT(iPropertyRepeatOne != NULL);
    aValue = iPropertyRepeatOne->Value();
}

TBool DvProviderAvOpenhomeOrgRoon1::SetPropertyShuffle(TBool aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    return SetPropertyBool(*iPropertyShuffle, aValue);
}

void DvProviderAvOpenhomeOrgRoon1::GetPropertyShuffle(TBool& aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    aValue = iPropertyShuffle->Value();
}

TBool DvProviderAvOpenhomeOrgRoon1::SetPropertyUpdateCover(TBool aValue)
{
    ASSERT(iPropertyUpdateCover != NULL);
    return SetPropertyBool(*iPropertyUpdateCover, aValue);
}

void DvProviderAvOpenhomeOrgRoon1::GetPropertyUpdateCover(TBool& aValue)
{
    ASSERT(iPropertyUpdateCover != NULL);
    aValue = iPropertyUpdateCover->Value();
}

DvProviderAvOpenhomeOrgRoon1::DvProviderAvOpenhomeOrgRoon1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Roon", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgRoon1::DvProviderAvOpenhomeOrgRoon1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Roon", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgRoon1::Construct()
{
    iPropertyTransportState = NULL;
    iPropertyRepeat = NULL;
    iPropertyRepeatOne = NULL;
    iPropertyShuffle = NULL;
    iPropertyUpdateCover = NULL;
}

void DvProviderAvOpenhomeOrgRoon1::EnablePropertyTransportState()
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

void DvProviderAvOpenhomeOrgRoon1::EnablePropertyRepeat()
{
    iPropertyRepeat = new PropertyBool(new ParameterBool("Repeat"));
    iService->AddProperty(iPropertyRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgRoon1::EnablePropertyRepeatOne()
{
    iPropertyRepeatOne = new PropertyBool(new ParameterBool("RepeatOne"));
    iService->AddProperty(iPropertyRepeatOne); // passes ownership
}

void DvProviderAvOpenhomeOrgRoon1::EnablePropertyShuffle()
{
    iPropertyShuffle = new PropertyBool(new ParameterBool("Shuffle"));
    iService->AddProperty(iPropertyShuffle); // passes ownership
}

void DvProviderAvOpenhomeOrgRoon1::EnablePropertyUpdateCover()
{
    iPropertyUpdateCover = new PropertyBool(new ParameterBool("UpdateCover"));
    iService->AddProperty(iPropertyUpdateCover); // passes ownership
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionPlay()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Play");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoPlay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionPause()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Pause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionPlayPause()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PlayPause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoPlayPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionStop()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Stop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoStop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionNext()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Next");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionPrevious()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Previous");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionToggleShuffle()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ToggleShuffle");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoToggleShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionToggleLoop()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ToggleLoop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoToggleLoop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionRepeat()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Repeat");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionShuffle()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Shuffle");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionSeekSecondAbsolute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondAbsolute");
    action->AddInputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoSeekSecondAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionSeekSecondRelative()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondRelative");
    action->AddInputParameter(new ParameterInt("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoSeekSecondRelative);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::EnableActionTransportState()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("TransportState");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyTransportState));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRoon1::DoTransportState);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRoon1::DoPlay(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Play(invocation);
}

void DvProviderAvOpenhomeOrgRoon1::DoPause(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Pause(invocation);
}

void DvProviderAvOpenhomeOrgRoon1::DoPlayPause(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    PlayPause(invocation);
}

void DvProviderAvOpenhomeOrgRoon1::DoStop(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Stop(invocation);
}

void DvProviderAvOpenhomeOrgRoon1::DoNext(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Next(invocation);
}

void DvProviderAvOpenhomeOrgRoon1::DoPrevious(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Previous(invocation);
}

void DvProviderAvOpenhomeOrgRoon1::DoToggleShuffle(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ToggleShuffle(invocation);
}

void DvProviderAvOpenhomeOrgRoon1::DoToggleLoop(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ToggleLoop(invocation);
}

void DvProviderAvOpenhomeOrgRoon1::DoRepeat(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respValue(aInvocation, "Value");
    Repeat(invocation, respValue);
}

void DvProviderAvOpenhomeOrgRoon1::DoShuffle(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respValue(aInvocation, "Value");
    Shuffle(invocation, respValue);
}

void DvProviderAvOpenhomeOrgRoon1::DoSeekSecondAbsolute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SeekSecondAbsolute(invocation, Value);
}

void DvProviderAvOpenhomeOrgRoon1::DoSeekSecondRelative(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TInt Value = aInvocation.InvocationReadInt("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SeekSecondRelative(invocation, Value);
}

void DvProviderAvOpenhomeOrgRoon1::DoTransportState(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respValue(aInvocation, "Value");
    TransportState(invocation, respValue);
}

void DvProviderAvOpenhomeOrgRoon1::Play(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::Pause(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::PlayPause(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::Stop(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::Next(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::Previous(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::ToggleShuffle(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::ToggleLoop(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::Repeat(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::Shuffle(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::SeekSecondAbsolute(IDvInvocation& /*aResponse*/, TUint /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::SeekSecondRelative(IDvInvocation& /*aResponse*/, TInt /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgRoon1::TransportState(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aValue*/)
{
    ASSERTS();
}

