#include "CpTencentComQPlay1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

#include <string>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncSetNetworkTencentComQPlay1Cpp : public SyncProxyAction
{
public:
    SyncSetNetworkTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetNetworkTencentComQPlay1Cpp() {}
private:
    CpProxyTencentComQPlay1Cpp& iService;
};

SyncSetNetworkTencentComQPlay1Cpp::SyncSetNetworkTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetNetworkTencentComQPlay1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetNetwork(aAsync);
}


class SyncQPlayAuthTencentComQPlay1Cpp : public SyncProxyAction
{
public:
    SyncQPlayAuthTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aCode, std::string& aMID, std::string& aDID);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncQPlayAuthTencentComQPlay1Cpp() {}
private:
    CpProxyTencentComQPlay1Cpp& iService;
    std::string& iCode;
    std::string& iMID;
    std::string& iDID;
};

SyncQPlayAuthTencentComQPlay1Cpp::SyncQPlayAuthTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aCode, std::string& aMID, std::string& aDID)
    : iService(aProxy)
    , iCode(aCode)
    , iMID(aMID)
    , iDID(aDID)
{
}

void SyncQPlayAuthTencentComQPlay1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndQPlayAuth(aAsync, iCode, iMID, iDID);
}


class SyncInsertTracksTencentComQPlay1Cpp : public SyncProxyAction
{
public:
    SyncInsertTracksTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aNumberOfSuccess);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInsertTracksTencentComQPlay1Cpp() {}
private:
    CpProxyTencentComQPlay1Cpp& iService;
    std::string& iNumberOfSuccess;
};

SyncInsertTracksTencentComQPlay1Cpp::SyncInsertTracksTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aNumberOfSuccess)
    : iService(aProxy)
    , iNumberOfSuccess(aNumberOfSuccess)
{
}

void SyncInsertTracksTencentComQPlay1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsertTracks(aAsync, iNumberOfSuccess);
}


class SyncRemoveTracksTencentComQPlay1Cpp : public SyncProxyAction
{
public:
    SyncRemoveTracksTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aNumberOfSuccess);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRemoveTracksTencentComQPlay1Cpp() {}
private:
    CpProxyTencentComQPlay1Cpp& iService;
    std::string& iNumberOfSuccess;
};

SyncRemoveTracksTencentComQPlay1Cpp::SyncRemoveTracksTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aNumberOfSuccess)
    : iService(aProxy)
    , iNumberOfSuccess(aNumberOfSuccess)
{
}

void SyncRemoveTracksTencentComQPlay1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRemoveTracks(aAsync, iNumberOfSuccess);
}


class SyncGetTracksInfoTencentComQPlay1Cpp : public SyncProxyAction
{
public:
    SyncGetTracksInfoTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aTracksMetaData);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetTracksInfoTencentComQPlay1Cpp() {}
private:
    CpProxyTencentComQPlay1Cpp& iService;
    std::string& iTracksMetaData;
};

SyncGetTracksInfoTencentComQPlay1Cpp::SyncGetTracksInfoTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aTracksMetaData)
    : iService(aProxy)
    , iTracksMetaData(aTracksMetaData)
{
}

void SyncGetTracksInfoTencentComQPlay1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetTracksInfo(aAsync, iTracksMetaData);
}


class SyncSetTracksInfoTencentComQPlay1Cpp : public SyncProxyAction
{
public:
    SyncSetTracksInfoTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aNumberOfSuccess);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTracksInfoTencentComQPlay1Cpp() {}
private:
    CpProxyTencentComQPlay1Cpp& iService;
    std::string& iNumberOfSuccess;
};

SyncSetTracksInfoTencentComQPlay1Cpp::SyncSetTracksInfoTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aNumberOfSuccess)
    : iService(aProxy)
    , iNumberOfSuccess(aNumberOfSuccess)
{
}

void SyncSetTracksInfoTencentComQPlay1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTracksInfo(aAsync, iNumberOfSuccess);
}


class SyncGetTracksCountTencentComQPlay1Cpp : public SyncProxyAction
{
public:
    SyncGetTracksCountTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aNrTracks);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetTracksCountTencentComQPlay1Cpp() {}
private:
    CpProxyTencentComQPlay1Cpp& iService;
    std::string& iNrTracks;
};

SyncGetTracksCountTencentComQPlay1Cpp::SyncGetTracksCountTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aNrTracks)
    : iService(aProxy)
    , iNrTracks(aNrTracks)
{
}

void SyncGetTracksCountTencentComQPlay1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetTracksCount(aAsync, iNrTracks);
}


class SyncGetMaxTracksTencentComQPlay1Cpp : public SyncProxyAction
{
public:
    SyncGetMaxTracksTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aMaxTracks);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetMaxTracksTencentComQPlay1Cpp() {}
private:
    CpProxyTencentComQPlay1Cpp& iService;
    std::string& iMaxTracks;
};

SyncGetMaxTracksTencentComQPlay1Cpp::SyncGetMaxTracksTencentComQPlay1Cpp(CpProxyTencentComQPlay1Cpp& aProxy, std::string& aMaxTracks)
    : iService(aProxy)
    , iMaxTracks(aMaxTracks)
{
}

void SyncGetMaxTracksTencentComQPlay1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetMaxTracks(aAsync, iMaxTracks);
}


CpProxyTencentComQPlay1Cpp::CpProxyTencentComQPlay1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("tencent-com", "QPlay", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionSetNetwork = new Action("SetNetwork");
    param = new OpenHome::Net::ParameterString("SSID");
    iActionSetNetwork->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Key");
    iActionSetNetwork->AddInputParameter(param);
    index = 0;
    allowedValues = new TChar*[6];
    allowedValues[index++] = (TChar*)"open";
    allowedValues[index++] = (TChar*)"shared";
    allowedValues[index++] = (TChar*)"WPA";
    allowedValues[index++] = (TChar*)"WPAPSK";
    allowedValues[index++] = (TChar*)"WPA2";
    allowedValues[index++] = (TChar*)"WPA2PSK";
    param = new OpenHome::Net::ParameterString("AuthAlgo", allowedValues, 6);
    iActionSetNetwork->AddInputParameter(param);
    delete[] allowedValues;
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"none";
    allowedValues[index++] = (TChar*)"WEP";
    allowedValues[index++] = (TChar*)"TKIP";
    allowedValues[index++] = (TChar*)"AES";
    param = new OpenHome::Net::ParameterString("CipherAlgo", allowedValues, 4);
    iActionSetNetwork->AddInputParameter(param);
    delete[] allowedValues;

    iActionQPlayAuth = new Action("QPlayAuth");
    param = new OpenHome::Net::ParameterString("Seed");
    iActionQPlayAuth->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Code");
    iActionQPlayAuth->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("MID");
    iActionQPlayAuth->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("DID");
    iActionQPlayAuth->AddOutputParameter(param);

    iActionInsertTracks = new Action("InsertTracks");
    param = new OpenHome::Net::ParameterString("QueueID");
    iActionInsertTracks->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("StartingIndex");
    iActionInsertTracks->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TracksMetaData");
    iActionInsertTracks->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NumberOfSuccess");
    iActionInsertTracks->AddOutputParameter(param);

    iActionRemoveTracks = new Action("RemoveTracks");
    param = new OpenHome::Net::ParameterString("QueueID");
    iActionRemoveTracks->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("StartingIndex");
    iActionRemoveTracks->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NumberOfTracks");
    iActionRemoveTracks->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NumberOfSuccess");
    iActionRemoveTracks->AddOutputParameter(param);

    iActionGetTracksInfo = new Action("GetTracksInfo");
    param = new OpenHome::Net::ParameterString("StartingIndex");
    iActionGetTracksInfo->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NumberOfTracks");
    iActionGetTracksInfo->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TracksMetaData");
    iActionGetTracksInfo->AddOutputParameter(param);

    iActionSetTracksInfo = new Action("SetTracksInfo");
    param = new OpenHome::Net::ParameterString("QueueID");
    iActionSetTracksInfo->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("StartingIndex");
    iActionSetTracksInfo->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NextIndex");
    iActionSetTracksInfo->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TracksMetaData");
    iActionSetTracksInfo->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("NumberOfSuccess");
    iActionSetTracksInfo->AddOutputParameter(param);

    iActionGetTracksCount = new Action("GetTracksCount");
    param = new OpenHome::Net::ParameterString("NrTracks");
    iActionGetTracksCount->AddOutputParameter(param);

    iActionGetMaxTracks = new Action("GetMaxTracks");
    param = new OpenHome::Net::ParameterString("MaxTracks");
    iActionGetMaxTracks->AddOutputParameter(param);
}

CpProxyTencentComQPlay1Cpp::~CpProxyTencentComQPlay1Cpp()
{
    DestroyService();
    delete iActionSetNetwork;
    delete iActionQPlayAuth;
    delete iActionInsertTracks;
    delete iActionRemoveTracks;
    delete iActionGetTracksInfo;
    delete iActionSetTracksInfo;
    delete iActionGetTracksCount;
    delete iActionGetMaxTracks;
}

void CpProxyTencentComQPlay1Cpp::SyncSetNetwork(const std::string& aSSID, const std::string& aKey, const std::string& aAuthAlgo, const std::string& aCipherAlgo)
{
    SyncSetNetworkTencentComQPlay1Cpp sync(*this);
    BeginSetNetwork(aSSID, aKey, aAuthAlgo, aCipherAlgo, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1Cpp::BeginSetNetwork(const std::string& aSSID, const std::string& aKey, const std::string& aAuthAlgo, const std::string& aCipherAlgo, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetNetwork, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetNetwork->InputParameters();
    {
        Brn buf((const TByte*)aSSID.c_str(), (TUint)aSSID.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aKey.c_str(), (TUint)aKey.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aAuthAlgo.c_str(), (TUint)aAuthAlgo.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aCipherAlgo.c_str(), (TUint)aCipherAlgo.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1Cpp::EndSetNetwork(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetNetwork"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyTencentComQPlay1Cpp::SyncQPlayAuth(const std::string& aSeed, std::string& aCode, std::string& aMID, std::string& aDID)
{
    SyncQPlayAuthTencentComQPlay1Cpp sync(*this, aCode, aMID, aDID);
    BeginQPlayAuth(aSeed, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1Cpp::BeginQPlayAuth(const std::string& aSeed, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionQPlayAuth, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionQPlayAuth->InputParameters();
    {
        Brn buf((const TByte*)aSeed.c_str(), (TUint)aSeed.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionQPlayAuth->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1Cpp::EndQPlayAuth(IAsync& aAsync, std::string& aCode, std::string& aMID, std::string& aDID)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("QPlayAuth"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aCode.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aMID.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aDID.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyTencentComQPlay1Cpp::SyncInsertTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aTracksMetaData, std::string& aNumberOfSuccess)
{
    SyncInsertTracksTencentComQPlay1Cpp sync(*this, aNumberOfSuccess);
    BeginInsertTracks(aQueueID, aStartingIndex, aTracksMetaData, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1Cpp::BeginInsertTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aTracksMetaData, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInsertTracks, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInsertTracks->InputParameters();
    {
        Brn buf((const TByte*)aQueueID.c_str(), (TUint)aQueueID.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aStartingIndex.c_str(), (TUint)aStartingIndex.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aTracksMetaData.c_str(), (TUint)aTracksMetaData.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInsertTracks->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1Cpp::EndInsertTracks(IAsync& aAsync, std::string& aNumberOfSuccess)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("InsertTracks"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aNumberOfSuccess.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyTencentComQPlay1Cpp::SyncRemoveTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNumberOfTracks, std::string& aNumberOfSuccess)
{
    SyncRemoveTracksTencentComQPlay1Cpp sync(*this, aNumberOfSuccess);
    BeginRemoveTracks(aQueueID, aStartingIndex, aNumberOfTracks, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1Cpp::BeginRemoveTracks(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNumberOfTracks, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRemoveTracks, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionRemoveTracks->InputParameters();
    {
        Brn buf((const TByte*)aQueueID.c_str(), (TUint)aQueueID.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aStartingIndex.c_str(), (TUint)aStartingIndex.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aNumberOfTracks.c_str(), (TUint)aNumberOfTracks.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRemoveTracks->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1Cpp::EndRemoveTracks(IAsync& aAsync, std::string& aNumberOfSuccess)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("RemoveTracks"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aNumberOfSuccess.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyTencentComQPlay1Cpp::SyncGetTracksInfo(const std::string& aStartingIndex, const std::string& aNumberOfTracks, std::string& aTracksMetaData)
{
    SyncGetTracksInfoTencentComQPlay1Cpp sync(*this, aTracksMetaData);
    BeginGetTracksInfo(aStartingIndex, aNumberOfTracks, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1Cpp::BeginGetTracksInfo(const std::string& aStartingIndex, const std::string& aNumberOfTracks, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetTracksInfo, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetTracksInfo->InputParameters();
    {
        Brn buf((const TByte*)aStartingIndex.c_str(), (TUint)aStartingIndex.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aNumberOfTracks.c_str(), (TUint)aNumberOfTracks.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetTracksInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1Cpp::EndGetTracksInfo(IAsync& aAsync, std::string& aTracksMetaData)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetTracksInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aTracksMetaData.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyTencentComQPlay1Cpp::SyncSetTracksInfo(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNextIndex, const std::string& aTracksMetaData, std::string& aNumberOfSuccess)
{
    SyncSetTracksInfoTencentComQPlay1Cpp sync(*this, aNumberOfSuccess);
    BeginSetTracksInfo(aQueueID, aStartingIndex, aNextIndex, aTracksMetaData, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1Cpp::BeginSetTracksInfo(const std::string& aQueueID, const std::string& aStartingIndex, const std::string& aNextIndex, const std::string& aTracksMetaData, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetTracksInfo, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTracksInfo->InputParameters();
    {
        Brn buf((const TByte*)aQueueID.c_str(), (TUint)aQueueID.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aStartingIndex.c_str(), (TUint)aStartingIndex.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aNextIndex.c_str(), (TUint)aNextIndex.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aTracksMetaData.c_str(), (TUint)aTracksMetaData.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSetTracksInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1Cpp::EndSetTracksInfo(IAsync& aAsync, std::string& aNumberOfSuccess)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetTracksInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aNumberOfSuccess.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyTencentComQPlay1Cpp::SyncGetTracksCount(std::string& aNrTracks)
{
    SyncGetTracksCountTencentComQPlay1Cpp sync(*this, aNrTracks);
    BeginGetTracksCount(sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1Cpp::BeginGetTracksCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetTracksCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetTracksCount->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1Cpp::EndGetTracksCount(IAsync& aAsync, std::string& aNrTracks)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetTracksCount"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aNrTracks.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyTencentComQPlay1Cpp::SyncGetMaxTracks(std::string& aMaxTracks)
{
    SyncGetMaxTracksTencentComQPlay1Cpp sync(*this, aMaxTracks);
    BeginGetMaxTracks(sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1Cpp::BeginGetMaxTracks(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetMaxTracks, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetMaxTracks->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1Cpp::EndGetMaxTracks(IAsync& aAsync, std::string& aMaxTracks)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetMaxTracks"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aMaxTracks.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyTencentComQPlay1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyTencentComQPlay1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyTencentComQPlay1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyTencentComQPlay1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyTencentComQPlay1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyTencentComQPlay1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyTencentComQPlay1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyTencentComQPlay1Cpp::Version() const
{
  return iCpProxy.Version();
}

