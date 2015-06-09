#include "DvAvOpenhomeOrgMessageCenter1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgMessageCenter1::SetPropertyMessage(const Brx& aValue)
{
    ASSERT(iPropertyMessage != NULL);
    return SetPropertyString(*iPropertyMessage, aValue);
}

void DvProviderAvOpenhomeOrgMessageCenter1::GetPropertyMessage(Brhz& aValue)
{
    ASSERT(iPropertyMessage != NULL);
    aValue.Set(iPropertyMessage->Value());
}

TBool DvProviderAvOpenhomeOrgMessageCenter1::SetPropertyMessageID(TUint aValue)
{
    ASSERT(iPropertyMessageID != NULL);
    return SetPropertyUint(*iPropertyMessageID, aValue);
}

void DvProviderAvOpenhomeOrgMessageCenter1::GetPropertyMessageID(TUint& aValue)
{
    ASSERT(iPropertyMessageID != NULL);
    aValue = iPropertyMessageID->Value();
}

DvProviderAvOpenhomeOrgMessageCenter1::DvProviderAvOpenhomeOrgMessageCenter1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "MessageCenter", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgMessageCenter1::DvProviderAvOpenhomeOrgMessageCenter1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "MessageCenter", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgMessageCenter1::Construct()
{
    iPropertyMessage = NULL;
    iPropertyMessageID = NULL;
}

void DvProviderAvOpenhomeOrgMessageCenter1::EnablePropertyMessage()
{
    iPropertyMessage = new PropertyString(new ParameterString("Message"));
    iService->AddProperty(iPropertyMessage); // passes ownership
}

void DvProviderAvOpenhomeOrgMessageCenter1::EnablePropertyMessageID()
{
    iPropertyMessageID = new PropertyUint(new ParameterUint("MessageID"));
    iService->AddProperty(iPropertyMessageID); // passes ownership
}

void DvProviderAvOpenhomeOrgMessageCenter1::EnableActionGetMessage()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetMessage");
    action->AddOutputParameter(new ParameterRelated("Message", *iPropertyMessage));
    action->AddOutputParameter(new ParameterRelated("MessageID", *iPropertyMessageID));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMessageCenter1::DoGetMessage);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMessageCenter1::DoGetMessage(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respMessage(aInvocation, "Message");
    DviInvocationResponseUint respMessageID(aInvocation, "MessageID");
    GetMessage(invocation, respMessage, respMessageID);
}

void DvProviderAvOpenhomeOrgMessageCenter1::GetMessage(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aMessage*/, IDvInvocationResponseUint& /*aMessageID*/)
{
    ASSERTS();
}

