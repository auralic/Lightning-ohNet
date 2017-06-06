#include "DvAvOpenhomeOrgGroupConfig1.h"
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

class DvProviderAvOpenhomeOrgGroupConfig1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgGroupConfig1C(DvDeviceC aDevice);
    TBool SetPropertyGroupMode(const Brx& aValue);
    void GetPropertyGroupMode(Brhz& aValue);
    TBool SetPropertyGroupName(const Brx& aValue);
    void GetPropertyGroupName(Brhz& aValue);
    TBool SetPropertyGroupID(const Brx& aValue);
    void GetPropertyGroupID(Brhz& aValue);
    TBool SetPropertyGroupVolume(TUint aValue);
    void GetPropertyGroupVolume(TUint& aValue);
    TBool SetPropertyGroupMute(TBool aValue);
    void GetPropertyGroupMute(TBool& aValue);
    TBool SetPropertyGroupStatus(const Brx& aValue);
    void GetPropertyGroupStatus(Brhz& aValue);
    TBool SetPropertyBitPerfectMode(TBool aValue);
    void GetPropertyBitPerfectMode(TBool& aValue);
    void EnablePropertyGroupMode();
    void EnablePropertyGroupName();
    void EnablePropertyGroupID();
    void EnablePropertyGroupVolume();
    void EnablePropertyGroupMute();
    void EnablePropertyGroupStatus();
    void EnablePropertyBitPerfectMode();
    void EnableActionSetGroupMode(CallbackGroupConfig1SetGroupMode aCallback, void* aPtr);
    void EnableActionGetGroupMode(CallbackGroupConfig1GetGroupMode aCallback, void* aPtr);
    void EnableActionSetGroupVolume(CallbackGroupConfig1SetGroupVolume aCallback, void* aPtr);
    void EnableActionGetGroupVolume(CallbackGroupConfig1GetGroupVolume aCallback, void* aPtr);
    void EnableActionSetGroupMute(CallbackGroupConfig1SetGroupMute aCallback, void* aPtr);
    void EnableActionGetGroupMute(CallbackGroupConfig1GetGroupMute aCallback, void* aPtr);
    void EnableActionGetGroupStatus(CallbackGroupConfig1GetGroupStatus aCallback, void* aPtr);
    void EnableActionSetGroupStatus(CallbackGroupConfig1SetGroupStatus aCallback, void* aPtr);
    void EnableActionGetBitPerfectMode(CallbackGroupConfig1GetBitPerfectMode aCallback, void* aPtr);
    void EnableActionSetBitPerfectMode(CallbackGroupConfig1SetBitPerfectMode aCallback, void* aPtr);
private:
    void DoSetGroupMode(IDviInvocation& aInvocation);
    void DoGetGroupMode(IDviInvocation& aInvocation);
    void DoSetGroupVolume(IDviInvocation& aInvocation);
    void DoGetGroupVolume(IDviInvocation& aInvocation);
    void DoSetGroupMute(IDviInvocation& aInvocation);
    void DoGetGroupMute(IDviInvocation& aInvocation);
    void DoGetGroupStatus(IDviInvocation& aInvocation);
    void DoSetGroupStatus(IDviInvocation& aInvocation);
    void DoGetBitPerfectMode(IDviInvocation& aInvocation);
    void DoSetBitPerfectMode(IDviInvocation& aInvocation);
private:
    CallbackGroupConfig1SetGroupMode iCallbackSetGroupMode;
    void* iPtrSetGroupMode;
    CallbackGroupConfig1GetGroupMode iCallbackGetGroupMode;
    void* iPtrGetGroupMode;
    CallbackGroupConfig1SetGroupVolume iCallbackSetGroupVolume;
    void* iPtrSetGroupVolume;
    CallbackGroupConfig1GetGroupVolume iCallbackGetGroupVolume;
    void* iPtrGetGroupVolume;
    CallbackGroupConfig1SetGroupMute iCallbackSetGroupMute;
    void* iPtrSetGroupMute;
    CallbackGroupConfig1GetGroupMute iCallbackGetGroupMute;
    void* iPtrGetGroupMute;
    CallbackGroupConfig1GetGroupStatus iCallbackGetGroupStatus;
    void* iPtrGetGroupStatus;
    CallbackGroupConfig1SetGroupStatus iCallbackSetGroupStatus;
    void* iPtrSetGroupStatus;
    CallbackGroupConfig1GetBitPerfectMode iCallbackGetBitPerfectMode;
    void* iPtrGetBitPerfectMode;
    CallbackGroupConfig1SetBitPerfectMode iCallbackSetBitPerfectMode;
    void* iPtrSetBitPerfectMode;
    PropertyString* iPropertyGroupMode;
    PropertyString* iPropertyGroupName;
    PropertyString* iPropertyGroupID;
    PropertyUint* iPropertyGroupVolume;
    PropertyBool* iPropertyGroupMute;
    PropertyString* iPropertyGroupStatus;
    PropertyBool* iPropertyBitPerfectMode;
};

DvProviderAvOpenhomeOrgGroupConfig1C::DvProviderAvOpenhomeOrgGroupConfig1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "GroupConfig", 1)
{
    iPropertyGroupMode = NULL;
    iPropertyGroupName = NULL;
    iPropertyGroupID = NULL;
    iPropertyGroupVolume = NULL;
    iPropertyGroupMute = NULL;
    iPropertyGroupStatus = NULL;
    iPropertyBitPerfectMode = NULL;
}

TBool DvProviderAvOpenhomeOrgGroupConfig1C::SetPropertyGroupMode(const Brx& aValue)
{
    ASSERT(iPropertyGroupMode != NULL);
    return SetPropertyString(*iPropertyGroupMode, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::GetPropertyGroupMode(Brhz& aValue)
{
    ASSERT(iPropertyGroupMode != NULL);
    aValue.Set(iPropertyGroupMode->Value());
}

TBool DvProviderAvOpenhomeOrgGroupConfig1C::SetPropertyGroupName(const Brx& aValue)
{
    ASSERT(iPropertyGroupName != NULL);
    return SetPropertyString(*iPropertyGroupName, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::GetPropertyGroupName(Brhz& aValue)
{
    ASSERT(iPropertyGroupName != NULL);
    aValue.Set(iPropertyGroupName->Value());
}

TBool DvProviderAvOpenhomeOrgGroupConfig1C::SetPropertyGroupID(const Brx& aValue)
{
    ASSERT(iPropertyGroupID != NULL);
    return SetPropertyString(*iPropertyGroupID, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::GetPropertyGroupID(Brhz& aValue)
{
    ASSERT(iPropertyGroupID != NULL);
    aValue.Set(iPropertyGroupID->Value());
}

TBool DvProviderAvOpenhomeOrgGroupConfig1C::SetPropertyGroupVolume(TUint aValue)
{
    ASSERT(iPropertyGroupVolume != NULL);
    return SetPropertyUint(*iPropertyGroupVolume, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::GetPropertyGroupVolume(TUint& aValue)
{
    ASSERT(iPropertyGroupVolume != NULL);
    aValue = iPropertyGroupVolume->Value();
}

TBool DvProviderAvOpenhomeOrgGroupConfig1C::SetPropertyGroupMute(TBool aValue)
{
    ASSERT(iPropertyGroupMute != NULL);
    return SetPropertyBool(*iPropertyGroupMute, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::GetPropertyGroupMute(TBool& aValue)
{
    ASSERT(iPropertyGroupMute != NULL);
    aValue = iPropertyGroupMute->Value();
}

TBool DvProviderAvOpenhomeOrgGroupConfig1C::SetPropertyGroupStatus(const Brx& aValue)
{
    ASSERT(iPropertyGroupStatus != NULL);
    return SetPropertyString(*iPropertyGroupStatus, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::GetPropertyGroupStatus(Brhz& aValue)
{
    ASSERT(iPropertyGroupStatus != NULL);
    aValue.Set(iPropertyGroupStatus->Value());
}

TBool DvProviderAvOpenhomeOrgGroupConfig1C::SetPropertyBitPerfectMode(TBool aValue)
{
    ASSERT(iPropertyBitPerfectMode != NULL);
    return SetPropertyBool(*iPropertyBitPerfectMode, aValue);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::GetPropertyBitPerfectMode(TBool& aValue)
{
    ASSERT(iPropertyBitPerfectMode != NULL);
    aValue = iPropertyBitPerfectMode->Value();
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnablePropertyGroupMode()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Master";
    allowedValues[index++] = (TChar*)"Slave";
    allowedValues[index++] = (TChar*)"None";
    iPropertyGroupMode = new PropertyString(new ParameterString("GroupMode", allowedValues, 3));
    delete[] allowedValues;
    iService->AddProperty(iPropertyGroupMode); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnablePropertyGroupName()
{
    iPropertyGroupName = new PropertyString(new ParameterString("GroupName"));
    iService->AddProperty(iPropertyGroupName); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnablePropertyGroupID()
{
    iPropertyGroupID = new PropertyString(new ParameterString("GroupID"));
    iService->AddProperty(iPropertyGroupID); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnablePropertyGroupVolume()
{
    iPropertyGroupVolume = new PropertyUint(new ParameterUint("GroupVolume"));
    iService->AddProperty(iPropertyGroupVolume); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnablePropertyGroupMute()
{
    iPropertyGroupMute = new PropertyBool(new ParameterBool("GroupMute"));
    iService->AddProperty(iPropertyGroupMute); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnablePropertyGroupStatus()
{
    iPropertyGroupStatus = new PropertyString(new ParameterString("GroupStatus"));
    iService->AddProperty(iPropertyGroupStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnablePropertyBitPerfectMode()
{
    iPropertyBitPerfectMode = new PropertyBool(new ParameterBool("BitPerfectMode"));
    iService->AddProperty(iPropertyBitPerfectMode); // passes ownership
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnableActionSetGroupMode(CallbackGroupConfig1SetGroupMode aCallback, void* aPtr)
{
    iCallbackSetGroupMode = aCallback;
    iPtrSetGroupMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupMode");
    action->AddInputParameter(new ParameterRelated("GroupMode", *iPropertyGroupMode));
    action->AddInputParameter(new ParameterRelated("GroupID", *iPropertyGroupID));
    action->AddInputParameter(new ParameterRelated("GroupName", *iPropertyGroupName));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1C::DoSetGroupMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnableActionGetGroupMode(CallbackGroupConfig1GetGroupMode aCallback, void* aPtr)
{
    iCallbackGetGroupMode = aCallback;
    iPtrGetGroupMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupMode");
    action->AddOutputParameter(new ParameterRelated("GroupMode", *iPropertyGroupMode));
    action->AddOutputParameter(new ParameterRelated("GroupID", *iPropertyGroupID));
    action->AddOutputParameter(new ParameterRelated("GroupName", *iPropertyGroupName));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1C::DoGetGroupMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnableActionSetGroupVolume(CallbackGroupConfig1SetGroupVolume aCallback, void* aPtr)
{
    iCallbackSetGroupVolume = aCallback;
    iPtrSetGroupVolume = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupVolume");
    action->AddInputParameter(new ParameterRelated("GroupVolume", *iPropertyGroupVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1C::DoSetGroupVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnableActionGetGroupVolume(CallbackGroupConfig1GetGroupVolume aCallback, void* aPtr)
{
    iCallbackGetGroupVolume = aCallback;
    iPtrGetGroupVolume = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupVolume");
    action->AddOutputParameter(new ParameterRelated("GroupVolume", *iPropertyGroupVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1C::DoGetGroupVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnableActionSetGroupMute(CallbackGroupConfig1SetGroupMute aCallback, void* aPtr)
{
    iCallbackSetGroupMute = aCallback;
    iPtrSetGroupMute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupMute");
    action->AddInputParameter(new ParameterRelated("GroupMute", *iPropertyGroupMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1C::DoSetGroupMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnableActionGetGroupMute(CallbackGroupConfig1GetGroupMute aCallback, void* aPtr)
{
    iCallbackGetGroupMute = aCallback;
    iPtrGetGroupMute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupMute");
    action->AddOutputParameter(new ParameterRelated("GroupMute", *iPropertyGroupMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1C::DoGetGroupMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnableActionGetGroupStatus(CallbackGroupConfig1GetGroupStatus aCallback, void* aPtr)
{
    iCallbackGetGroupStatus = aCallback;
    iPtrGetGroupStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetGroupStatus");
    action->AddOutputParameter(new ParameterRelated("GroupStatus", *iPropertyGroupStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1C::DoGetGroupStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnableActionSetGroupStatus(CallbackGroupConfig1SetGroupStatus aCallback, void* aPtr)
{
    iCallbackSetGroupStatus = aCallback;
    iPtrSetGroupStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetGroupStatus");
    action->AddInputParameter(new ParameterRelated("GroupStatus", *iPropertyGroupStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1C::DoSetGroupStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnableActionGetBitPerfectMode(CallbackGroupConfig1GetBitPerfectMode aCallback, void* aPtr)
{
    iCallbackGetBitPerfectMode = aCallback;
    iPtrGetBitPerfectMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetBitPerfectMode");
    action->AddOutputParameter(new ParameterRelated("BitPerfectMode", *iPropertyBitPerfectMode));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1C::DoGetBitPerfectMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::EnableActionSetBitPerfectMode(CallbackGroupConfig1SetBitPerfectMode aCallback, void* aPtr)
{
    iCallbackSetBitPerfectMode = aCallback;
    iPtrSetBitPerfectMode = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetBitPerfectMode");
    action->AddInputParameter(new ParameterRelated("BitPerfectMode", *iPropertyBitPerfectMode));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgGroupConfig1C::DoSetBitPerfectMode);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgGroupConfig1C::DoSetGroupMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz GroupMode;
    aInvocation.InvocationReadString("GroupMode", GroupMode);
    Brhz GroupID;
    aInvocation.InvocationReadString("GroupID", GroupID);
    Brhz GroupName;
    aInvocation.InvocationReadString("GroupName", GroupName);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetGroupMode != NULL);
    if (0 != iCallbackSetGroupMode(iPtrSetGroupMode, invocationC, invocationCPtr, (const char*)GroupMode.Ptr(), (const char*)GroupID.Ptr(), (const char*)GroupName.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgGroupConfig1C::DoGetGroupMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* GroupMode;
    char* GroupID;
    char* GroupName;
    ASSERT(iCallbackGetGroupMode != NULL);
    if (0 != iCallbackGetGroupMode(iPtrGetGroupMode, invocationC, invocationCPtr, &GroupMode, &GroupID, &GroupName)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respGroupMode(aInvocation, "GroupMode");
    DviInvocationResponseString respGroupID(aInvocation, "GroupID");
    DviInvocationResponseString respGroupName(aInvocation, "GroupName");
    invocation.StartResponse();
    Brhz bufGroupMode((const TChar*)GroupMode);
    OhNetFreeExternal(GroupMode);
    respGroupMode.Write(bufGroupMode);
    respGroupMode.WriteFlush();
    Brhz bufGroupID((const TChar*)GroupID);
    OhNetFreeExternal(GroupID);
    respGroupID.Write(bufGroupID);
    respGroupID.WriteFlush();
    Brhz bufGroupName((const TChar*)GroupName);
    OhNetFreeExternal(GroupName);
    respGroupName.Write(bufGroupName);
    respGroupName.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgGroupConfig1C::DoSetGroupVolume(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint GroupVolume = aInvocation.InvocationReadUint("GroupVolume");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetGroupVolume != NULL);
    if (0 != iCallbackSetGroupVolume(iPtrSetGroupVolume, invocationC, invocationCPtr, GroupVolume)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgGroupConfig1C::DoGetGroupVolume(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t GroupVolume;
    ASSERT(iCallbackGetGroupVolume != NULL);
    if (0 != iCallbackGetGroupVolume(iPtrGetGroupVolume, invocationC, invocationCPtr, &GroupVolume)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respGroupVolume(aInvocation, "GroupVolume");
    invocation.StartResponse();
    respGroupVolume.Write(GroupVolume);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgGroupConfig1C::DoSetGroupMute(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool GroupMute = aInvocation.InvocationReadBool("GroupMute");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetGroupMute != NULL);
    if (0 != iCallbackSetGroupMute(iPtrSetGroupMute, invocationC, invocationCPtr, GroupMute)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgGroupConfig1C::DoGetGroupMute(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t GroupMute;
    ASSERT(iCallbackGetGroupMute != NULL);
    if (0 != iCallbackGetGroupMute(iPtrGetGroupMute, invocationC, invocationCPtr, &GroupMute)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respGroupMute(aInvocation, "GroupMute");
    invocation.StartResponse();
    respGroupMute.Write((GroupMute!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgGroupConfig1C::DoGetGroupStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* GroupStatus;
    ASSERT(iCallbackGetGroupStatus != NULL);
    if (0 != iCallbackGetGroupStatus(iPtrGetGroupStatus, invocationC, invocationCPtr, &GroupStatus)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respGroupStatus(aInvocation, "GroupStatus");
    invocation.StartResponse();
    Brhz bufGroupStatus((const TChar*)GroupStatus);
    OhNetFreeExternal(GroupStatus);
    respGroupStatus.Write(bufGroupStatus);
    respGroupStatus.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgGroupConfig1C::DoSetGroupStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz GroupStatus;
    aInvocation.InvocationReadString("GroupStatus", GroupStatus);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetGroupStatus != NULL);
    if (0 != iCallbackSetGroupStatus(iPtrSetGroupStatus, invocationC, invocationCPtr, (const char*)GroupStatus.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgGroupConfig1C::DoGetBitPerfectMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t BitPerfectMode;
    ASSERT(iCallbackGetBitPerfectMode != NULL);
    if (0 != iCallbackGetBitPerfectMode(iPtrGetBitPerfectMode, invocationC, invocationCPtr, &BitPerfectMode)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respBitPerfectMode(aInvocation, "BitPerfectMode");
    invocation.StartResponse();
    respBitPerfectMode.Write((BitPerfectMode!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgGroupConfig1C::DoSetBitPerfectMode(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool BitPerfectMode = aInvocation.InvocationReadBool("BitPerfectMode");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetBitPerfectMode != NULL);
    if (0 != iCallbackSetBitPerfectMode(iPtrSetBitPerfectMode, invocationC, invocationCPtr, BitPerfectMode)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgGroupConfig1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgGroupConfig1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupMode(THandle aProvider, CallbackGroupConfig1SetGroupMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnableActionSetGroupMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupMode(THandle aProvider, CallbackGroupConfig1GetGroupMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnableActionGetGroupMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupVolume(THandle aProvider, CallbackGroupConfig1SetGroupVolume aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnableActionSetGroupVolume(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupVolume(THandle aProvider, CallbackGroupConfig1GetGroupVolume aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnableActionGetGroupVolume(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupMute(THandle aProvider, CallbackGroupConfig1SetGroupMute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnableActionSetGroupMute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupMute(THandle aProvider, CallbackGroupConfig1GetGroupMute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnableActionGetGroupMute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetGroupStatus(THandle aProvider, CallbackGroupConfig1GetGroupStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnableActionGetGroupStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetGroupStatus(THandle aProvider, CallbackGroupConfig1SetGroupStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnableActionSetGroupStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionGetBitPerfectMode(THandle aProvider, CallbackGroupConfig1GetBitPerfectMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnableActionGetBitPerfectMode(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnableActionSetBitPerfectMode(THandle aProvider, CallbackGroupConfig1SetBitPerfectMode aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnableActionSetBitPerfectMode(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupMode(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->SetPropertyGroupMode(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupMode(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->GetPropertyGroupMode(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->SetPropertyGroupName(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->GetPropertyGroupName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupID(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->SetPropertyGroupID(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupID(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->GetPropertyGroupID(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupVolume(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->SetPropertyGroupVolume(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupVolume(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->GetPropertyGroupVolume(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupMute(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->SetPropertyGroupMute((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupMute(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->GetPropertyGroupMute(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyGroupStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->SetPropertyGroupStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyGroupStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->GetPropertyGroupStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgGroupConfig1SetPropertyBitPerfectMode(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->SetPropertyBitPerfectMode((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1GetPropertyBitPerfectMode(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->GetPropertyBitPerfectMode(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupMode(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnablePropertyGroupMode();
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupName(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnablePropertyGroupName();
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupID(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnablePropertyGroupID();
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupVolume(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnablePropertyGroupVolume();
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupMute(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnablePropertyGroupMute();
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyGroupStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnablePropertyGroupStatus();
}

void STDCALL DvProviderAvOpenhomeOrgGroupConfig1EnablePropertyBitPerfectMode(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgGroupConfig1C*>(aProvider)->EnablePropertyBitPerfectMode();
}

