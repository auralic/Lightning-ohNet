#include "DvTencentComQPlay1.h"
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

class DvProviderTencentComQPlay1C : public DvProvider
{
public:
    DvProviderTencentComQPlay1C(DvDeviceC aDevice);
    void EnableActionSetNetwork(CallbackQPlay1SetNetwork aCallback, void* aPtr);
    void EnableActionQPlayAuth(CallbackQPlay1QPlayAuth aCallback, void* aPtr);
    void EnableActionInsertTracks(CallbackQPlay1InsertTracks aCallback, void* aPtr);
    void EnableActionRemoveTracks(CallbackQPlay1RemoveTracks aCallback, void* aPtr);
    void EnableActionGetTracksInfo(CallbackQPlay1GetTracksInfo aCallback, void* aPtr);
    void EnableActionSetTracksInfo(CallbackQPlay1SetTracksInfo aCallback, void* aPtr);
    void EnableActionGetTracksCount(CallbackQPlay1GetTracksCount aCallback, void* aPtr);
    void EnableActionGetMaxTracks(CallbackQPlay1GetMaxTracks aCallback, void* aPtr);
private:
    void DoSetNetwork(IDviInvocation& aInvocation);
    void DoQPlayAuth(IDviInvocation& aInvocation);
    void DoInsertTracks(IDviInvocation& aInvocation);
    void DoRemoveTracks(IDviInvocation& aInvocation);
    void DoGetTracksInfo(IDviInvocation& aInvocation);
    void DoSetTracksInfo(IDviInvocation& aInvocation);
    void DoGetTracksCount(IDviInvocation& aInvocation);
    void DoGetMaxTracks(IDviInvocation& aInvocation);
private:
    CallbackQPlay1SetNetwork iCallbackSetNetwork;
    void* iPtrSetNetwork;
    CallbackQPlay1QPlayAuth iCallbackQPlayAuth;
    void* iPtrQPlayAuth;
    CallbackQPlay1InsertTracks iCallbackInsertTracks;
    void* iPtrInsertTracks;
    CallbackQPlay1RemoveTracks iCallbackRemoveTracks;
    void* iPtrRemoveTracks;
    CallbackQPlay1GetTracksInfo iCallbackGetTracksInfo;
    void* iPtrGetTracksInfo;
    CallbackQPlay1SetTracksInfo iCallbackSetTracksInfo;
    void* iPtrSetTracksInfo;
    CallbackQPlay1GetTracksCount iCallbackGetTracksCount;
    void* iPtrGetTracksCount;
    CallbackQPlay1GetMaxTracks iCallbackGetMaxTracks;
    void* iPtrGetMaxTracks;
};

DvProviderTencentComQPlay1C::DvProviderTencentComQPlay1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "tencent.com", "QPlay", 1)
{
}

void DvProviderTencentComQPlay1C::EnableActionSetNetwork(CallbackQPlay1SetNetwork aCallback, void* aPtr)
{
    iCallbackSetNetwork = aCallback;
    iPtrSetNetwork = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetNetwork");
    TChar** allowedValues;
    TUint index;
    action->AddInputParameter(new ParameterString("SSID"));
    action->AddInputParameter(new ParameterString("Key"));
    index = 0;
    allowedValues = new TChar*[6];
    allowedValues[index++] = (TChar*)"open";
    allowedValues[index++] = (TChar*)"shared";
    allowedValues[index++] = (TChar*)"WPA";
    allowedValues[index++] = (TChar*)"WPAPSK";
    allowedValues[index++] = (TChar*)"WPA2";
    allowedValues[index++] = (TChar*)"WPA2PSK";
    action->AddInputParameter(new ParameterString("AuthAlgo", allowedValues, 6));
    delete[] allowedValues;
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"none";
    allowedValues[index++] = (TChar*)"WEP";
    allowedValues[index++] = (TChar*)"TKIP";
    allowedValues[index++] = (TChar*)"AES";
    action->AddInputParameter(new ParameterString("CipherAlgo", allowedValues, 4));
    delete[] allowedValues;
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1C::DoSetNetwork);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1C::EnableActionQPlayAuth(CallbackQPlay1QPlayAuth aCallback, void* aPtr)
{
    iCallbackQPlayAuth = aCallback;
    iPtrQPlayAuth = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("QPlayAuth");
    action->AddInputParameter(new ParameterString("Seed"));
    action->AddOutputParameter(new ParameterString("Code"));
    action->AddOutputParameter(new ParameterString("MID"));
    action->AddOutputParameter(new ParameterString("DID"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1C::DoQPlayAuth);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1C::EnableActionInsertTracks(CallbackQPlay1InsertTracks aCallback, void* aPtr)
{
    iCallbackInsertTracks = aCallback;
    iPtrInsertTracks = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InsertTracks");
    action->AddInputParameter(new ParameterString("QueueID"));
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("TracksMetaData"));
    action->AddOutputParameter(new ParameterString("NumberOfSuccess"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1C::DoInsertTracks);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1C::EnableActionRemoveTracks(CallbackQPlay1RemoveTracks aCallback, void* aPtr)
{
    iCallbackRemoveTracks = aCallback;
    iPtrRemoveTracks = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RemoveTracks");
    action->AddInputParameter(new ParameterString("QueueID"));
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("NumberOfTracks"));
    action->AddOutputParameter(new ParameterString("NumberOfSuccess"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1C::DoRemoveTracks);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1C::EnableActionGetTracksInfo(CallbackQPlay1GetTracksInfo aCallback, void* aPtr)
{
    iCallbackGetTracksInfo = aCallback;
    iPtrGetTracksInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetTracksInfo");
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("NumberOfTracks"));
    action->AddOutputParameter(new ParameterString("TracksMetaData"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1C::DoGetTracksInfo);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1C::EnableActionSetTracksInfo(CallbackQPlay1SetTracksInfo aCallback, void* aPtr)
{
    iCallbackSetTracksInfo = aCallback;
    iPtrSetTracksInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTracksInfo");
    action->AddInputParameter(new ParameterString("QueueID"));
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("NextIndex"));
    action->AddInputParameter(new ParameterString("TracksMetaData"));
    action->AddOutputParameter(new ParameterString("NumberOfSuccess"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1C::DoSetTracksInfo);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1C::EnableActionGetTracksCount(CallbackQPlay1GetTracksCount aCallback, void* aPtr)
{
    iCallbackGetTracksCount = aCallback;
    iPtrGetTracksCount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetTracksCount");
    action->AddOutputParameter(new ParameterString("NrTracks"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1C::DoGetTracksCount);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1C::EnableActionGetMaxTracks(CallbackQPlay1GetMaxTracks aCallback, void* aPtr)
{
    iCallbackGetMaxTracks = aCallback;
    iPtrGetMaxTracks = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetMaxTracks");
    action->AddOutputParameter(new ParameterString("MaxTracks"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1C::DoGetMaxTracks);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1C::DoSetNetwork(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz SSID;
    aInvocation.InvocationReadString("SSID", SSID);
    Brhz Key;
    aInvocation.InvocationReadString("Key", Key);
    Brhz AuthAlgo;
    aInvocation.InvocationReadString("AuthAlgo", AuthAlgo);
    Brhz CipherAlgo;
    aInvocation.InvocationReadString("CipherAlgo", CipherAlgo);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetNetwork != NULL);
    if (0 != iCallbackSetNetwork(iPtrSetNetwork, invocationC, invocationCPtr, (const char*)SSID.Ptr(), (const char*)Key.Ptr(), (const char*)AuthAlgo.Ptr(), (const char*)CipherAlgo.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderTencentComQPlay1C::DoQPlayAuth(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Seed;
    aInvocation.InvocationReadString("Seed", Seed);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Code;
    char* MID;
    char* DID;
    ASSERT(iCallbackQPlayAuth != NULL);
    if (0 != iCallbackQPlayAuth(iPtrQPlayAuth, invocationC, invocationCPtr, (const char*)Seed.Ptr(), &Code, &MID, &DID)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respCode(aInvocation, "Code");
    DviInvocationResponseString respMID(aInvocation, "MID");
    DviInvocationResponseString respDID(aInvocation, "DID");
    invocation.StartResponse();
    Brhz bufCode((const TChar*)Code);
    OhNetFreeExternal(Code);
    respCode.Write(bufCode);
    respCode.WriteFlush();
    Brhz bufMID((const TChar*)MID);
    OhNetFreeExternal(MID);
    respMID.Write(bufMID);
    respMID.WriteFlush();
    Brhz bufDID((const TChar*)DID);
    OhNetFreeExternal(DID);
    respDID.Write(bufDID);
    respDID.WriteFlush();
    invocation.EndResponse();
}

void DvProviderTencentComQPlay1C::DoInsertTracks(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz QueueID;
    aInvocation.InvocationReadString("QueueID", QueueID);
    Brhz StartingIndex;
    aInvocation.InvocationReadString("StartingIndex", StartingIndex);
    Brhz TracksMetaData;
    aInvocation.InvocationReadString("TracksMetaData", TracksMetaData);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* NumberOfSuccess;
    ASSERT(iCallbackInsertTracks != NULL);
    if (0 != iCallbackInsertTracks(iPtrInsertTracks, invocationC, invocationCPtr, (const char*)QueueID.Ptr(), (const char*)StartingIndex.Ptr(), (const char*)TracksMetaData.Ptr(), &NumberOfSuccess)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respNumberOfSuccess(aInvocation, "NumberOfSuccess");
    invocation.StartResponse();
    Brhz bufNumberOfSuccess((const TChar*)NumberOfSuccess);
    OhNetFreeExternal(NumberOfSuccess);
    respNumberOfSuccess.Write(bufNumberOfSuccess);
    respNumberOfSuccess.WriteFlush();
    invocation.EndResponse();
}

void DvProviderTencentComQPlay1C::DoRemoveTracks(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz QueueID;
    aInvocation.InvocationReadString("QueueID", QueueID);
    Brhz StartingIndex;
    aInvocation.InvocationReadString("StartingIndex", StartingIndex);
    Brhz NumberOfTracks;
    aInvocation.InvocationReadString("NumberOfTracks", NumberOfTracks);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* NumberOfSuccess;
    ASSERT(iCallbackRemoveTracks != NULL);
    if (0 != iCallbackRemoveTracks(iPtrRemoveTracks, invocationC, invocationCPtr, (const char*)QueueID.Ptr(), (const char*)StartingIndex.Ptr(), (const char*)NumberOfTracks.Ptr(), &NumberOfSuccess)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respNumberOfSuccess(aInvocation, "NumberOfSuccess");
    invocation.StartResponse();
    Brhz bufNumberOfSuccess((const TChar*)NumberOfSuccess);
    OhNetFreeExternal(NumberOfSuccess);
    respNumberOfSuccess.Write(bufNumberOfSuccess);
    respNumberOfSuccess.WriteFlush();
    invocation.EndResponse();
}

void DvProviderTencentComQPlay1C::DoGetTracksInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz StartingIndex;
    aInvocation.InvocationReadString("StartingIndex", StartingIndex);
    Brhz NumberOfTracks;
    aInvocation.InvocationReadString("NumberOfTracks", NumberOfTracks);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* TracksMetaData;
    ASSERT(iCallbackGetTracksInfo != NULL);
    if (0 != iCallbackGetTracksInfo(iPtrGetTracksInfo, invocationC, invocationCPtr, (const char*)StartingIndex.Ptr(), (const char*)NumberOfTracks.Ptr(), &TracksMetaData)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respTracksMetaData(aInvocation, "TracksMetaData");
    invocation.StartResponse();
    Brhz bufTracksMetaData((const TChar*)TracksMetaData);
    OhNetFreeExternal(TracksMetaData);
    respTracksMetaData.Write(bufTracksMetaData);
    respTracksMetaData.WriteFlush();
    invocation.EndResponse();
}

void DvProviderTencentComQPlay1C::DoSetTracksInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz QueueID;
    aInvocation.InvocationReadString("QueueID", QueueID);
    Brhz StartingIndex;
    aInvocation.InvocationReadString("StartingIndex", StartingIndex);
    Brhz NextIndex;
    aInvocation.InvocationReadString("NextIndex", NextIndex);
    Brhz TracksMetaData;
    aInvocation.InvocationReadString("TracksMetaData", TracksMetaData);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* NumberOfSuccess;
    ASSERT(iCallbackSetTracksInfo != NULL);
    if (0 != iCallbackSetTracksInfo(iPtrSetTracksInfo, invocationC, invocationCPtr, (const char*)QueueID.Ptr(), (const char*)StartingIndex.Ptr(), (const char*)NextIndex.Ptr(), (const char*)TracksMetaData.Ptr(), &NumberOfSuccess)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respNumberOfSuccess(aInvocation, "NumberOfSuccess");
    invocation.StartResponse();
    Brhz bufNumberOfSuccess((const TChar*)NumberOfSuccess);
    OhNetFreeExternal(NumberOfSuccess);
    respNumberOfSuccess.Write(bufNumberOfSuccess);
    respNumberOfSuccess.WriteFlush();
    invocation.EndResponse();
}

void DvProviderTencentComQPlay1C::DoGetTracksCount(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* NrTracks;
    ASSERT(iCallbackGetTracksCount != NULL);
    if (0 != iCallbackGetTracksCount(iPtrGetTracksCount, invocationC, invocationCPtr, &NrTracks)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respNrTracks(aInvocation, "NrTracks");
    invocation.StartResponse();
    Brhz bufNrTracks((const TChar*)NrTracks);
    OhNetFreeExternal(NrTracks);
    respNrTracks.Write(bufNrTracks);
    respNrTracks.WriteFlush();
    invocation.EndResponse();
}

void DvProviderTencentComQPlay1C::DoGetMaxTracks(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* MaxTracks;
    ASSERT(iCallbackGetMaxTracks != NULL);
    if (0 != iCallbackGetMaxTracks(iPtrGetMaxTracks, invocationC, invocationCPtr, &MaxTracks)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respMaxTracks(aInvocation, "MaxTracks");
    invocation.StartResponse();
    Brhz bufMaxTracks((const TChar*)MaxTracks);
    OhNetFreeExternal(MaxTracks);
    respMaxTracks.Write(bufMaxTracks);
    respMaxTracks.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderTencentComQPlay1Create(DvDeviceC aDevice)
{
    return new DvProviderTencentComQPlay1C(aDevice);
}

void STDCALL DvProviderTencentComQPlay1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderTencentComQPlay1C*>(aProvider);
}

void STDCALL DvProviderTencentComQPlay1EnableActionSetNetwork(THandle aProvider, CallbackQPlay1SetNetwork aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderTencentComQPlay1C*>(aProvider)->EnableActionSetNetwork(aCallback, aPtr);
}

void STDCALL DvProviderTencentComQPlay1EnableActionQPlayAuth(THandle aProvider, CallbackQPlay1QPlayAuth aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderTencentComQPlay1C*>(aProvider)->EnableActionQPlayAuth(aCallback, aPtr);
}

void STDCALL DvProviderTencentComQPlay1EnableActionInsertTracks(THandle aProvider, CallbackQPlay1InsertTracks aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderTencentComQPlay1C*>(aProvider)->EnableActionInsertTracks(aCallback, aPtr);
}

void STDCALL DvProviderTencentComQPlay1EnableActionRemoveTracks(THandle aProvider, CallbackQPlay1RemoveTracks aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderTencentComQPlay1C*>(aProvider)->EnableActionRemoveTracks(aCallback, aPtr);
}

void STDCALL DvProviderTencentComQPlay1EnableActionGetTracksInfo(THandle aProvider, CallbackQPlay1GetTracksInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderTencentComQPlay1C*>(aProvider)->EnableActionGetTracksInfo(aCallback, aPtr);
}

void STDCALL DvProviderTencentComQPlay1EnableActionSetTracksInfo(THandle aProvider, CallbackQPlay1SetTracksInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderTencentComQPlay1C*>(aProvider)->EnableActionSetTracksInfo(aCallback, aPtr);
}

void STDCALL DvProviderTencentComQPlay1EnableActionGetTracksCount(THandle aProvider, CallbackQPlay1GetTracksCount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderTencentComQPlay1C*>(aProvider)->EnableActionGetTracksCount(aCallback, aPtr);
}

void STDCALL DvProviderTencentComQPlay1EnableActionGetMaxTracks(THandle aProvider, CallbackQPlay1GetMaxTracks aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderTencentComQPlay1C*>(aProvider)->EnableActionGetMaxTracks(aCallback, aPtr);
}

