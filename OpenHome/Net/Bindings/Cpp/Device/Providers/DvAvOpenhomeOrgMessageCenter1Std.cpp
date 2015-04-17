#include "DvAvOpenhomeOrgMessageCenter1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgMessageCenter1Cpp::SetPropertyMessage(const std::string& aValue)
{
    ASSERT(iPropertyMessage != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyMessage, buf);
}

void DvProviderAvOpenhomeOrgMessageCenter1Cpp::GetPropertyMessage(std::string& aValue)
{
    ASSERT(iPropertyMessage != NULL);
    const Brx& val = iPropertyMessage->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgMessageCenter1Cpp::SetPropertyMessageID(uint32_t aValue)
{
    ASSERT(iPropertyMessageID != NULL);
    return SetPropertyUint(*iPropertyMessageID, aValue);
}

void DvProviderAvOpenhomeOrgMessageCenter1Cpp::GetPropertyMessageID(uint32_t& aValue)
{
    ASSERT(iPropertyMessageID != NULL);
    aValue = iPropertyMessageID->Value();
}

DvProviderAvOpenhomeOrgMessageCenter1Cpp::DvProviderAvOpenhomeOrgMessageCenter1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "MessageCenter", 1)
{
    iPropertyMessage = NULL;
    iPropertyMessageID = NULL;
}

void DvProviderAvOpenhomeOrgMessageCenter1Cpp::EnablePropertyMessage()
{
    iPropertyMessage = new PropertyString(iDvStack.Env(), new ParameterString("Message"));
    iService->AddProperty(iPropertyMessage); // passes ownership
}

void DvProviderAvOpenhomeOrgMessageCenter1Cpp::EnablePropertyMessageID()
{
    iPropertyMessageID = new PropertyUint(iDvStack.Env(), new ParameterUint("MessageID"));
    iService->AddProperty(iPropertyMessageID); // passes ownership
}

void DvProviderAvOpenhomeOrgMessageCenter1Cpp::EnableActionGetMessage()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetMessage");
    action->AddOutputParameter(new ParameterRelated("Message", *iPropertyMessage));
    action->AddOutputParameter(new ParameterRelated("MessageID", *iPropertyMessageID));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgMessageCenter1Cpp::DoGetMessage);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgMessageCenter1Cpp::DoGetMessage(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respMessage;
    uint32_t respMessageID;
    DvInvocationStd invocation(aInvocation);
    GetMessage(invocation, respMessage, respMessageID);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterMessage(aInvocation, "Message");
    Brn buf_Message((const TByte*)respMessage.c_str(), (TUint)respMessage.length());
    respWriterMessage.Write(buf_Message);
    aInvocation.InvocationWriteStringEnd("Message");
    DviInvocationResponseUint respWriterMessageID(aInvocation, "MessageID");
    respWriterMessageID.Write(respMessageID);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgMessageCenter1Cpp::GetMessage(IDvInvocationStd& /*aInvocation*/, std::string& /*aMessage*/, uint32_t& /*aMessageID*/)
{
    ASSERTS();
}

