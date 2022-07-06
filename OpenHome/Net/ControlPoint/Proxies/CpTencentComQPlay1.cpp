#include "CpTencentComQPlay1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncSetNetworkTencentComQPlay1 : public SyncProxyAction
{
public:
    SyncSetNetworkTencentComQPlay1(CpProxyTencentComQPlay1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyTencentComQPlay1& iService;
};

class SyncQPlayAuthTencentComQPlay1 : public SyncProxyAction
{
public:
    SyncQPlayAuthTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aCode, Brh& aMID, Brh& aDID);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyTencentComQPlay1& iService;
    Brh& iCode;
    Brh& iMID;
    Brh& iDID;
};

class SyncInsertTracksTencentComQPlay1 : public SyncProxyAction
{
public:
    SyncInsertTracksTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aNumberOfSuccess);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyTencentComQPlay1& iService;
    Brh& iNumberOfSuccess;
};

class SyncRemoveTracksTencentComQPlay1 : public SyncProxyAction
{
public:
    SyncRemoveTracksTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aNumberOfSuccess);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyTencentComQPlay1& iService;
    Brh& iNumberOfSuccess;
};

class SyncGetTracksInfoTencentComQPlay1 : public SyncProxyAction
{
public:
    SyncGetTracksInfoTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aTracksMetaData);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyTencentComQPlay1& iService;
    Brh& iTracksMetaData;
};

class SyncSetTracksInfoTencentComQPlay1 : public SyncProxyAction
{
public:
    SyncSetTracksInfoTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aNumberOfSuccess);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyTencentComQPlay1& iService;
    Brh& iNumberOfSuccess;
};

class SyncGetTracksCountTencentComQPlay1 : public SyncProxyAction
{
public:
    SyncGetTracksCountTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aNrTracks);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyTencentComQPlay1& iService;
    Brh& iNrTracks;
};

class SyncGetMaxTracksTencentComQPlay1 : public SyncProxyAction
{
public:
    SyncGetMaxTracksTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aMaxTracks);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyTencentComQPlay1& iService;
    Brh& iMaxTracks;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncSetNetworkTencentComQPlay1

SyncSetNetworkTencentComQPlay1::SyncSetNetworkTencentComQPlay1(CpProxyTencentComQPlay1& aProxy)
    : iService(aProxy)
{
}

void SyncSetNetworkTencentComQPlay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetNetwork(aAsync);
}

// SyncQPlayAuthTencentComQPlay1

SyncQPlayAuthTencentComQPlay1::SyncQPlayAuthTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aCode, Brh& aMID, Brh& aDID)
    : iService(aProxy)
    , iCode(aCode)
    , iMID(aMID)
    , iDID(aDID)
{
}

void SyncQPlayAuthTencentComQPlay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndQPlayAuth(aAsync, iCode, iMID, iDID);
}

// SyncInsertTracksTencentComQPlay1

SyncInsertTracksTencentComQPlay1::SyncInsertTracksTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aNumberOfSuccess)
    : iService(aProxy)
    , iNumberOfSuccess(aNumberOfSuccess)
{
}

void SyncInsertTracksTencentComQPlay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsertTracks(aAsync, iNumberOfSuccess);
}

// SyncRemoveTracksTencentComQPlay1

SyncRemoveTracksTencentComQPlay1::SyncRemoveTracksTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aNumberOfSuccess)
    : iService(aProxy)
    , iNumberOfSuccess(aNumberOfSuccess)
{
}

void SyncRemoveTracksTencentComQPlay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRemoveTracks(aAsync, iNumberOfSuccess);
}

// SyncGetTracksInfoTencentComQPlay1

SyncGetTracksInfoTencentComQPlay1::SyncGetTracksInfoTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aTracksMetaData)
    : iService(aProxy)
    , iTracksMetaData(aTracksMetaData)
{
}

void SyncGetTracksInfoTencentComQPlay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetTracksInfo(aAsync, iTracksMetaData);
}

// SyncSetTracksInfoTencentComQPlay1

SyncSetTracksInfoTencentComQPlay1::SyncSetTracksInfoTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aNumberOfSuccess)
    : iService(aProxy)
    , iNumberOfSuccess(aNumberOfSuccess)
{
}

void SyncSetTracksInfoTencentComQPlay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTracksInfo(aAsync, iNumberOfSuccess);
}

// SyncGetTracksCountTencentComQPlay1

SyncGetTracksCountTencentComQPlay1::SyncGetTracksCountTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aNrTracks)
    : iService(aProxy)
    , iNrTracks(aNrTracks)
{
}

void SyncGetTracksCountTencentComQPlay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetTracksCount(aAsync, iNrTracks);
}

// SyncGetMaxTracksTencentComQPlay1

SyncGetMaxTracksTencentComQPlay1::SyncGetMaxTracksTencentComQPlay1(CpProxyTencentComQPlay1& aProxy, Brh& aMaxTracks)
    : iService(aProxy)
    , iMaxTracks(aMaxTracks)
{
}

void SyncGetMaxTracksTencentComQPlay1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetMaxTracks(aAsync, iMaxTracks);
}


// CpProxyTencentComQPlay1

CpProxyTencentComQPlay1::CpProxyTencentComQPlay1(CpDevice& aDevice)
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

CpProxyTencentComQPlay1::~CpProxyTencentComQPlay1()
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

void CpProxyTencentComQPlay1::SyncSetNetwork(const Brx& aSSID, const Brx& aKey, const Brx& aAuthAlgo, const Brx& aCipherAlgo)
{
    SyncSetNetworkTencentComQPlay1 sync(*this);
    BeginSetNetwork(aSSID, aKey, aAuthAlgo, aCipherAlgo, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1::BeginSetNetwork(const Brx& aSSID, const Brx& aKey, const Brx& aAuthAlgo, const Brx& aCipherAlgo, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetNetwork, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetNetwork->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSSID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aKey));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aAuthAlgo));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCipherAlgo));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1::EndSetNetwork(IAsync& aAsync)
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

void CpProxyTencentComQPlay1::SyncQPlayAuth(const Brx& aSeed, Brh& aCode, Brh& aMID, Brh& aDID)
{
    SyncQPlayAuthTencentComQPlay1 sync(*this, aCode, aMID, aDID);
    BeginQPlayAuth(aSeed, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1::BeginQPlayAuth(const Brx& aSeed, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionQPlayAuth, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionQPlayAuth->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSeed));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionQPlayAuth->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1::EndQPlayAuth(IAsync& aAsync, Brh& aCode, Brh& aMID, Brh& aDID)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aCode);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMID);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDID);
}

void CpProxyTencentComQPlay1::SyncInsertTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aTracksMetaData, Brh& aNumberOfSuccess)
{
    SyncInsertTracksTencentComQPlay1 sync(*this, aNumberOfSuccess);
    BeginInsertTracks(aQueueID, aStartingIndex, aTracksMetaData, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1::BeginInsertTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aTracksMetaData, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInsertTracks, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInsertTracks->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aQueueID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aStartingIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTracksMetaData));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInsertTracks->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1::EndInsertTracks(IAsync& aAsync, Brh& aNumberOfSuccess)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aNumberOfSuccess);
}

void CpProxyTencentComQPlay1::SyncRemoveTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNumberOfTracks, Brh& aNumberOfSuccess)
{
    SyncRemoveTracksTencentComQPlay1 sync(*this, aNumberOfSuccess);
    BeginRemoveTracks(aQueueID, aStartingIndex, aNumberOfTracks, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1::BeginRemoveTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNumberOfTracks, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRemoveTracks, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionRemoveTracks->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aQueueID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aStartingIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aNumberOfTracks));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRemoveTracks->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1::EndRemoveTracks(IAsync& aAsync, Brh& aNumberOfSuccess)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aNumberOfSuccess);
}

void CpProxyTencentComQPlay1::SyncGetTracksInfo(const Brx& aStartingIndex, const Brx& aNumberOfTracks, Brh& aTracksMetaData)
{
    SyncGetTracksInfoTencentComQPlay1 sync(*this, aTracksMetaData);
    BeginGetTracksInfo(aStartingIndex, aNumberOfTracks, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1::BeginGetTracksInfo(const Brx& aStartingIndex, const Brx& aNumberOfTracks, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetTracksInfo, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetTracksInfo->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aStartingIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aNumberOfTracks));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetTracksInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1::EndGetTracksInfo(IAsync& aAsync, Brh& aTracksMetaData)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aTracksMetaData);
}

void CpProxyTencentComQPlay1::SyncSetTracksInfo(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNextIndex, const Brx& aTracksMetaData, Brh& aNumberOfSuccess)
{
    SyncSetTracksInfoTencentComQPlay1 sync(*this, aNumberOfSuccess);
    BeginSetTracksInfo(aQueueID, aStartingIndex, aNextIndex, aTracksMetaData, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1::BeginSetTracksInfo(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNextIndex, const Brx& aTracksMetaData, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetTracksInfo, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTracksInfo->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aQueueID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aStartingIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aNextIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTracksMetaData));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSetTracksInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1::EndSetTracksInfo(IAsync& aAsync, Brh& aNumberOfSuccess)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aNumberOfSuccess);
}

void CpProxyTencentComQPlay1::SyncGetTracksCount(Brh& aNrTracks)
{
    SyncGetTracksCountTencentComQPlay1 sync(*this, aNrTracks);
    BeginGetTracksCount(sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1::BeginGetTracksCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetTracksCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetTracksCount->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1::EndGetTracksCount(IAsync& aAsync, Brh& aNrTracks)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aNrTracks);
}

void CpProxyTencentComQPlay1::SyncGetMaxTracks(Brh& aMaxTracks)
{
    SyncGetMaxTracksTencentComQPlay1 sync(*this, aMaxTracks);
    BeginGetMaxTracks(sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1::BeginGetMaxTracks(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetMaxTracks, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetMaxTracks->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1::EndGetMaxTracks(IAsync& aAsync, Brh& aMaxTracks)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMaxTracks);
}


void CpProxyTencentComQPlay1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyTencentComQPlay1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyTencentComQPlay1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyTencentComQPlay1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyTencentComQPlay1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyTencentComQPlay1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyTencentComQPlay1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyTencentComQPlay1::Version() const
{
  return iCpProxy.Version();
}


