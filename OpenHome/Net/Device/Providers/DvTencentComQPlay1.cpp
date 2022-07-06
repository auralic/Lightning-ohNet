#include "DvTencentComQPlay1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderTencentComQPlay1::DvProviderTencentComQPlay1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "tencent.com", "QPlay", 1)
{
    Construct();
}

DvProviderTencentComQPlay1::DvProviderTencentComQPlay1(DviDevice& aDevice)
    : DvProvider(aDevice, "tencent.com", "QPlay", 1)
{
    Construct();
}

void DvProviderTencentComQPlay1::Construct()
{
}

void DvProviderTencentComQPlay1::EnableActionSetNetwork()
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1::DoSetNetwork);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1::EnableActionQPlayAuth()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("QPlayAuth");
    action->AddInputParameter(new ParameterString("Seed"));
    action->AddOutputParameter(new ParameterString("Code"));
    action->AddOutputParameter(new ParameterString("MID"));
    action->AddOutputParameter(new ParameterString("DID"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1::DoQPlayAuth);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1::EnableActionInsertTracks()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InsertTracks");
    action->AddInputParameter(new ParameterString("QueueID"));
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("TracksMetaData"));
    action->AddOutputParameter(new ParameterString("NumberOfSuccess"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1::DoInsertTracks);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1::EnableActionRemoveTracks()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RemoveTracks");
    action->AddInputParameter(new ParameterString("QueueID"));
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("NumberOfTracks"));
    action->AddOutputParameter(new ParameterString("NumberOfSuccess"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1::DoRemoveTracks);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1::EnableActionGetTracksInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetTracksInfo");
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("NumberOfTracks"));
    action->AddOutputParameter(new ParameterString("TracksMetaData"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1::DoGetTracksInfo);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1::EnableActionSetTracksInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTracksInfo");
    action->AddInputParameter(new ParameterString("QueueID"));
    action->AddInputParameter(new ParameterString("StartingIndex"));
    action->AddInputParameter(new ParameterString("NextIndex"));
    action->AddInputParameter(new ParameterString("TracksMetaData"));
    action->AddOutputParameter(new ParameterString("NumberOfSuccess"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1::DoSetTracksInfo);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1::EnableActionGetTracksCount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetTracksCount");
    action->AddOutputParameter(new ParameterString("NrTracks"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1::DoGetTracksCount);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1::EnableActionGetMaxTracks()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetMaxTracks");
    action->AddOutputParameter(new ParameterString("MaxTracks"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderTencentComQPlay1::DoGetMaxTracks);
    iService->AddAction(action, functor);
}

void DvProviderTencentComQPlay1::DoSetNetwork(IDviInvocation& aInvocation)
{
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
    SetNetwork(invocation, SSID, Key, AuthAlgo, CipherAlgo);
}

void DvProviderTencentComQPlay1::DoQPlayAuth(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Seed;
    aInvocation.InvocationReadString("Seed", Seed);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respCode(aInvocation, "Code");
    DviInvocationResponseString respMID(aInvocation, "MID");
    DviInvocationResponseString respDID(aInvocation, "DID");
    QPlayAuth(invocation, Seed, respCode, respMID, respDID);
}

void DvProviderTencentComQPlay1::DoInsertTracks(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz QueueID;
    aInvocation.InvocationReadString("QueueID", QueueID);
    Brhz StartingIndex;
    aInvocation.InvocationReadString("StartingIndex", StartingIndex);
    Brhz TracksMetaData;
    aInvocation.InvocationReadString("TracksMetaData", TracksMetaData);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respNumberOfSuccess(aInvocation, "NumberOfSuccess");
    InsertTracks(invocation, QueueID, StartingIndex, TracksMetaData, respNumberOfSuccess);
}

void DvProviderTencentComQPlay1::DoRemoveTracks(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz QueueID;
    aInvocation.InvocationReadString("QueueID", QueueID);
    Brhz StartingIndex;
    aInvocation.InvocationReadString("StartingIndex", StartingIndex);
    Brhz NumberOfTracks;
    aInvocation.InvocationReadString("NumberOfTracks", NumberOfTracks);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respNumberOfSuccess(aInvocation, "NumberOfSuccess");
    RemoveTracks(invocation, QueueID, StartingIndex, NumberOfTracks, respNumberOfSuccess);
}

void DvProviderTencentComQPlay1::DoGetTracksInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz StartingIndex;
    aInvocation.InvocationReadString("StartingIndex", StartingIndex);
    Brhz NumberOfTracks;
    aInvocation.InvocationReadString("NumberOfTracks", NumberOfTracks);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respTracksMetaData(aInvocation, "TracksMetaData");
    GetTracksInfo(invocation, StartingIndex, NumberOfTracks, respTracksMetaData);
}

void DvProviderTencentComQPlay1::DoSetTracksInfo(IDviInvocation& aInvocation)
{
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
    DviInvocationResponseString respNumberOfSuccess(aInvocation, "NumberOfSuccess");
    SetTracksInfo(invocation, QueueID, StartingIndex, NextIndex, TracksMetaData, respNumberOfSuccess);
}

void DvProviderTencentComQPlay1::DoGetTracksCount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respNrTracks(aInvocation, "NrTracks");
    GetTracksCount(invocation, respNrTracks);
}

void DvProviderTencentComQPlay1::DoGetMaxTracks(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respMaxTracks(aInvocation, "MaxTracks");
    GetMaxTracks(invocation, respMaxTracks);
}

void DvProviderTencentComQPlay1::SetNetwork(IDvInvocation& /*aResponse*/, const Brx& /*aSSID*/, const Brx& /*aKey*/, const Brx& /*aAuthAlgo*/, const Brx& /*aCipherAlgo*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1::QPlayAuth(IDvInvocation& /*aResponse*/, const Brx& /*aSeed*/, IDvInvocationResponseString& /*aCode*/, IDvInvocationResponseString& /*aMID*/, IDvInvocationResponseString& /*aDID*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1::InsertTracks(IDvInvocation& /*aResponse*/, const Brx& /*aQueueID*/, const Brx& /*aStartingIndex*/, const Brx& /*aTracksMetaData*/, IDvInvocationResponseString& /*aNumberOfSuccess*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1::RemoveTracks(IDvInvocation& /*aResponse*/, const Brx& /*aQueueID*/, const Brx& /*aStartingIndex*/, const Brx& /*aNumberOfTracks*/, IDvInvocationResponseString& /*aNumberOfSuccess*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1::GetTracksInfo(IDvInvocation& /*aResponse*/, const Brx& /*aStartingIndex*/, const Brx& /*aNumberOfTracks*/, IDvInvocationResponseString& /*aTracksMetaData*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1::SetTracksInfo(IDvInvocation& /*aResponse*/, const Brx& /*aQueueID*/, const Brx& /*aStartingIndex*/, const Brx& /*aNextIndex*/, const Brx& /*aTracksMetaData*/, IDvInvocationResponseString& /*aNumberOfSuccess*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1::GetTracksCount(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aNrTracks*/)
{
    ASSERTS();
}

void DvProviderTencentComQPlay1::GetMaxTracks(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aMaxTracks*/)
{
    ASSERTS();
}

