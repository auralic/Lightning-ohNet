#include "DvTencentComQPlay1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderTencentComQPlay1Cpp::DvProviderTencentComQPlay1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "tencent.com", "QPlay", 1)
{
}

void DvProviderTencentComQPlay1Cpp::EnableActionSetNetwork()
{
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1Cpp::DoSetNetwork);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1Cpp::EnableActionQPlayAuth()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("QPlayAuth");
    action->AddInputParameter(new ParameterString("Seed"));
    action->AddOutputParameter(new ParameterString("Code"));
    action->AddOutputParameter(new ParameterString("MID"));
    action->AddOutputParameter(new ParameterString("DID"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1Cpp::DoQPlayAuth);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1Cpp::EnableActionInsertTracks()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InsertTracks");
    action->AddInputParameter(new ParameterString("QueueID"));
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("TracksMetaData"));
    action->AddOutputParameter(new ParameterString("NumberOfSuccess"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1Cpp::DoInsertTracks);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1Cpp::EnableActionRemoveTracks()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RemoveTracks");
    action->AddInputParameter(new ParameterString("QueueID"));
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("NumberOfTracks"));
    action->AddOutputParameter(new ParameterString("NumberOfSuccess"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1Cpp::DoRemoveTracks);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1Cpp::EnableActionGetTracksInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetTracksInfo");
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("NumberOfTracks"));
    action->AddOutputParameter(new ParameterString("TracksMetaData"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1Cpp::DoGetTracksInfo);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1Cpp::EnableActionSetTracksInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTracksInfo");
    action->AddInputParameter(new ParameterString("QueueID"));
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("NextIndex"));
    action->AddInputParameter(new ParameterString("TracksMetaData"));
    action->AddOutputParameter(new ParameterString("NumberOfSuccess"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1Cpp::DoSetTracksInfo);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1Cpp::EnableActionGetTracksCount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetTracksCount");
    action->AddOutputParameter(new ParameterString("NrTracks"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1Cpp::DoGetTracksCount);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1Cpp::EnableActionGetMaxTracks()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetMaxTracks");
    action->AddOutputParameter(new ParameterString("MaxTracks"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1Cpp::DoGetMaxTracks);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1Cpp::DoSetNetwork(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_SSID;
    aInvocation.InvocationReadString("SSID", buf_SSID);
    std::string SSID((const char*)buf_SSID.Ptr(), buf_SSID.Bytes());
    Brhz buf_Key;
    aInvocation.InvocationReadString("Key", buf_Key);
    std::string Key((const char*)buf_Key.Ptr(), buf_Key.Bytes());
    Brhz buf_AuthAlgo;
    aInvocation.InvocationReadString("AuthAlgo", buf_AuthAlgo);
    std::string AuthAlgo((const char*)buf_AuthAlgo.Ptr(), buf_AuthAlgo.Bytes());
    Brhz buf_CipherAlgo;
    aInvocation.InvocationReadString("CipherAlgo", buf_CipherAlgo);
    std::string CipherAlgo((const char*)buf_CipherAlgo.Ptr(), buf_CipherAlgo.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetNetwork(invocation, SSID, Key, AuthAlgo, CipherAlgo);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderTencentComQPlay1Cpp::DoQPlayAuth(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Seed;
    aInvocation.InvocationReadString("Seed", buf_Seed);
    std::string Seed((const char*)buf_Seed.Ptr(), buf_Seed.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respCode;
    std::string respMID;
    std::string respDID;
    DvInvocationStd invocation(aInvocation);
    QPlayAuth(invocation, Seed, respCode, respMID, respDID);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterCode(aInvocation, "Code");
    Brn buf_Code((const TByte*)respCode.c_str(), (TUint)respCode.length());
    respWriterCode.Write(buf_Code);
    aInvocation.InvocationWriteStringEnd("Code");
    DviInvocationResponseString respWriterMID(aInvocation, "MID");
    Brn buf_MID((const TByte*)respMID.c_str(), (TUint)respMID.length());
    respWriterMID.Write(buf_MID);
    aInvocation.InvocationWriteStringEnd("MID");
    DviInvocationResponseString respWriterDID(aInvocation, "DID");
    Brn buf_DID((const TByte*)respDID.c_str(), (TUint)respDID.length());
    respWriterDID.Write(buf_DID);
    aInvocation.InvocationWriteStringEnd("DID");
    aInvocation.InvocationWriteEnd();
}

void DvProviderTencentComQPlay1Cpp::DoInsertTracks(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_QueueID;
    aInvocation.InvocationReadString("QueueID", buf_QueueID);
    std::string QueueID((const char*)buf_QueueID.Ptr(), buf_QueueID.Bytes());
    Brhz buf_StartingIndex;
    aInvocation.InvocationReadString("StartingIndex", buf_StartingIndex);
    std::string StartingIndex((const char*)buf_StartingIndex.Ptr(), buf_StartingIndex.Bytes());
    Brhz buf_TracksMetaData;
    aInvocation.InvocationReadString("TracksMetaData", buf_TracksMetaData);
    std::string TracksMetaData((const char*)buf_TracksMetaData.Ptr(), buf_TracksMetaData.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respNumberOfSuccess;
    DvInvocationStd invocation(aInvocation);
    InsertTracks(invocation, QueueID, StartingIndex, TracksMetaData, respNumberOfSuccess);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterNumberOfSuccess(aInvocation, "NumberOfSuccess");
    Brn buf_NumberOfSuccess((const TByte*)respNumberOfSuccess.c_str(), (TUint)respNumberOfSuccess.length());
    respWriterNumberOfSuccess.Write(buf_NumberOfSuccess);
    aInvocation.InvocationWriteStringEnd("NumberOfSuccess");
    aInvocation.InvocationWriteEnd();
}

void DvProviderTencentComQPlay1Cpp::DoRemoveTracks(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_QueueID;
    aInvocation.InvocationReadString("QueueID", buf_QueueID);
    std::string QueueID((const char*)buf_QueueID.Ptr(), buf_QueueID.Bytes());
    Brhz buf_StartingIndex;
    aInvocation.InvocationReadString("StartingIndex", buf_StartingIndex);
    std::string StartingIndex((const char*)buf_StartingIndex.Ptr(), buf_StartingIndex.Bytes());
    Brhz buf_NumberOfTracks;
    aInvocation.InvocationReadString("NumberOfTracks", buf_NumberOfTracks);
    std::string NumberOfTracks((const char*)buf_NumberOfTracks.Ptr(), buf_NumberOfTracks.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respNumberOfSuccess;
    DvInvocationStd invocation(aInvocation);
    RemoveTracks(invocation, QueueID, StartingIndex, NumberOfTracks, respNumberOfSuccess);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterNumberOfSuccess(aInvocation, "NumberOfSuccess");
    Brn buf_NumberOfSuccess((const TByte*)respNumberOfSuccess.c_str(), (TUint)respNumberOfSuccess.length());
    respWriterNumberOfSuccess.Write(buf_NumberOfSuccess);
    aInvocation.InvocationWriteStringEnd("NumberOfSuccess");
    aInvocation.InvocationWriteEnd();
}

void DvProviderTencentComQPlay1Cpp::DoGetTracksInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_StartingIndex;
    aInvocation.InvocationReadString("StartingIndex", buf_StartingIndex);
    std::string StartingIndex((const char*)buf_StartingIndex.Ptr(), buf_StartingIndex.Bytes());
    Brhz buf_NumberOfTracks;
    aInvocation.InvocationReadString("NumberOfTracks", buf_NumberOfTracks);
    std::string NumberOfTracks((const char*)buf_NumberOfTracks.Ptr(), buf_NumberOfTracks.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respTracksMetaData;
    DvInvocationStd invocation(aInvocation);
    GetTracksInfo(invocation, StartingIndex, NumberOfTracks, respTracksMetaData);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterTracksMetaData(aInvocation, "TracksMetaData");
    Brn buf_TracksMetaData((const TByte*)respTracksMetaData.c_str(), (TUint)respTracksMetaData.length());
    respWriterTracksMetaData.Write(buf_TracksMetaData);
    aInvocation.InvocationWriteStringEnd("TracksMetaData");
    aInvocation.InvocationWriteEnd();
}

void DvProviderTencentComQPlay1Cpp::DoSetTracksInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_QueueID;
    aInvocation.InvocationReadString("QueueID", buf_QueueID);
    std::string QueueID((const char*)buf_QueueID.Ptr(), buf_QueueID.Bytes());
    Brhz buf_StartingIndex;
    aInvocation.InvocationReadString("StartingIndex", buf_StartingIndex);
    std::string StartingIndex((const char*)buf_StartingIndex.Ptr(), buf_StartingIndex.Bytes());
    Brhz buf_NextIndex;
    aInvocation.InvocationReadString("NextIndex", buf_NextIndex);
    std::string NextIndex((const char*)buf_NextIndex.Ptr(), buf_NextIndex.Bytes());
    Brhz buf_TracksMetaData;
    aInvocation.InvocationReadString("TracksMetaData", buf_TracksMetaData);
    std::string TracksMetaData((const char*)buf_TracksMetaData.Ptr(), buf_TracksMetaData.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respNumberOfSuccess;
    DvInvocationStd invocation(aInvocation);
    SetTracksInfo(invocation, QueueID, StartingIndex, NextIndex, TracksMetaData, respNumberOfSuccess);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterNumberOfSuccess(aInvocation, "NumberOfSuccess");
    Brn buf_NumberOfSuccess((const TByte*)respNumberOfSuccess.c_str(), (TUint)respNumberOfSuccess.length());
    respWriterNumberOfSuccess.Write(buf_NumberOfSuccess);
    aInvocation.InvocationWriteStringEnd("NumberOfSuccess");
    aInvocation.InvocationWriteEnd();
}

void DvProviderTencentComQPlay1Cpp::DoGetTracksCount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respNrTracks;
    DvInvocationStd invocation(aInvocation);
    GetTracksCount(invocation, respNrTracks);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterNrTracks(aInvocation, "NrTracks");
    Brn buf_NrTracks((const TByte*)respNrTracks.c_str(), (TUint)respNrTracks.length());
    respWriterNrTracks.Write(buf_NrTracks);
    aInvocation.InvocationWriteStringEnd("NrTracks");
    aInvocation.InvocationWriteEnd();
}

void DvProviderTencentComQPlay1Cpp::DoGetMaxTracks(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respMaxTracks;
    DvInvocationStd invocation(aInvocation);
    GetMaxTracks(invocation, respMaxTracks);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterMaxTracks(aInvocation, "MaxTracks");
    Brn buf_MaxTracks((const TByte*)respMaxTracks.c_str(), (TUint)respMaxTracks.length());
    respWriterMaxTracks.Write(buf_MaxTracks);
    aInvocation.InvocationWriteStringEnd("MaxTracks");
    aInvocation.InvocationWriteEnd();
}

void DvProviderTencentComQPlay1Cpp::SetNetwork(IDvInvocationStd& /*aInvocation*/, const std::string& /*aSSID*/, const std::string& /*aKey*/, const std::string& /*aAuthAlgo*/, const std::string& /*aCipherAlgo*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1Cpp::QPlayAuth(IDvInvocationStd& /*aInvocation*/, const std::string& /*aSeed*/, std::string& /*aCode*/, std::string& /*aMID*/, std::string& /*aDID*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1Cpp::InsertTracks(IDvInvocationStd& /*aInvocation*/, const std::string& /*aQueueID*/, const std::string& /*aStartingIndex*/, const std::string& /*aTracksMetaData*/, std::string& /*aNumberOfSuccess*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1Cpp::RemoveTracks(IDvInvocationStd& /*aInvocation*/, const std::string& /*aQueueID*/, const std::string& /*aStartingIndex*/, const std::string& /*aNumberOfTracks*/, std::string& /*aNumberOfSuccess*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1Cpp::GetTracksInfo(IDvInvocationStd& /*aInvocation*/, const std::string& /*aStartingIndex*/, const std::string& /*aNumberOfTracks*/, std::string& /*aTracksMetaData*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1Cpp::SetTracksInfo(IDvInvocationStd& /*aInvocation*/, const std::string& /*aQueueID*/, const std::string& /*aStartingIndex*/, const std::string& /*aNextIndex*/, const std::string& /*aTracksMetaData*/, std::string& /*aNumberOfSuccess*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1Cpp::GetTracksCount(IDvInvocationStd& /*aInvocation*/, std::string& /*aNrTracks*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1Cpp::GetMaxTracks(IDvInvocationStd& /*aInvocation*/, std::string& /*aMaxTracks*/)
{
    ASSERTS();
}

