#include "CpTencentComQPlay1.h"
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/C/CpProxyCPrivate.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class CpProxyTencentComQPlay1C : public CpProxyC
{
public:
    CpProxyTencentComQPlay1C(CpDeviceC aDevice);
    ~CpProxyTencentComQPlay1C();
    //CpProxyTencentComQPlay1* Proxy() { return static_cast<CpProxyTencentComQPlay1*>(iProxy); }

    void SyncSetNetwork(const Brx& aSSID, const Brx& aKey, const Brx& aAuthAlgo, const Brx& aCipherAlgo);
    void BeginSetNetwork(const Brx& aSSID, const Brx& aKey, const Brx& aAuthAlgo, const Brx& aCipherAlgo, FunctorAsync& aFunctor);
    void EndSetNetwork(IAsync& aAsync);

    void SyncQPlayAuth(const Brx& aSeed, Brh& aCode, Brh& aMID, Brh& aDID);
    void BeginQPlayAuth(const Brx& aSeed, FunctorAsync& aFunctor);
    void EndQPlayAuth(IAsync& aAsync, Brh& aCode, Brh& aMID, Brh& aDID);

    void SyncInsertTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aTracksMetaData, Brh& aNumberOfSuccess);
    void BeginInsertTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aTracksMetaData, FunctorAsync& aFunctor);
    void EndInsertTracks(IAsync& aAsync, Brh& aNumberOfSuccess);

    void SyncRemoveTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNumberOfTracks, Brh& aNumberOfSuccess);
    void BeginRemoveTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNumberOfTracks, FunctorAsync& aFunctor);
    void EndRemoveTracks(IAsync& aAsync, Brh& aNumberOfSuccess);

    void SyncGetTracksInfo(const Brx& aStartingIndex, const Brx& aNumberOfTracks, Brh& aTracksMetaData);
    void BeginGetTracksInfo(const Brx& aStartingIndex, const Brx& aNumberOfTracks, FunctorAsync& aFunctor);
    void EndGetTracksInfo(IAsync& aAsync, Brh& aTracksMetaData);

    void SyncSetTracksInfo(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNextIndex, const Brx& aTracksMetaData, Brh& aNumberOfSuccess);
    void BeginSetTracksInfo(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNextIndex, const Brx& aTracksMetaData, FunctorAsync& aFunctor);
    void EndSetTracksInfo(IAsync& aAsync, Brh& aNumberOfSuccess);

    void SyncGetTracksCount(Brh& aNrTracks);
    void BeginGetTracksCount(FunctorAsync& aFunctor);
    void EndGetTracksCount(IAsync& aAsync, Brh& aNrTracks);

    void SyncGetMaxTracks(Brh& aMaxTracks);
    void BeginGetMaxTracks(FunctorAsync& aFunctor);
    void EndGetMaxTracks(IAsync& aAsync, Brh& aMaxTracks);


private:
private:
    Mutex iLock;
    Action* iActionSetNetwork;
    Action* iActionQPlayAuth;
    Action* iActionInsertTracks;
    Action* iActionRemoveTracks;
    Action* iActionGetTracksInfo;
    Action* iActionSetTracksInfo;
    Action* iActionGetTracksCount;
    Action* iActionGetMaxTracks;
};


class SyncSetNetworkTencentComQPlay1C : public SyncProxyAction
{
public:
    SyncSetNetworkTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetNetworkTencentComQPlay1C() {};
private:
    CpProxyTencentComQPlay1C& iService;
};

SyncSetNetworkTencentComQPlay1C::SyncSetNetworkTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetNetworkTencentComQPlay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetNetwork(aAsync);
}


class SyncQPlayAuthTencentComQPlay1C : public SyncProxyAction
{
public:
    SyncQPlayAuthTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aCode, Brh& aMID, Brh& aDID);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncQPlayAuthTencentComQPlay1C() {};
private:
    CpProxyTencentComQPlay1C& iService;
    Brh& iCode;
    Brh& iMID;
    Brh& iDID;
};

SyncQPlayAuthTencentComQPlay1C::SyncQPlayAuthTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aCode, Brh& aMID, Brh& aDID)
    : iService(aProxy)
    , iCode(aCode)
    , iMID(aMID)
    , iDID(aDID)
{
}

void SyncQPlayAuthTencentComQPlay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndQPlayAuth(aAsync, iCode, iMID, iDID);
}


class SyncInsertTracksTencentComQPlay1C : public SyncProxyAction
{
public:
    SyncInsertTracksTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aNumberOfSuccess);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInsertTracksTencentComQPlay1C() {};
private:
    CpProxyTencentComQPlay1C& iService;
    Brh& iNumberOfSuccess;
};

SyncInsertTracksTencentComQPlay1C::SyncInsertTracksTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aNumberOfSuccess)
    : iService(aProxy)
    , iNumberOfSuccess(aNumberOfSuccess)
{
}

void SyncInsertTracksTencentComQPlay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsertTracks(aAsync, iNumberOfSuccess);
}


class SyncRemoveTracksTencentComQPlay1C : public SyncProxyAction
{
public:
    SyncRemoveTracksTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aNumberOfSuccess);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRemoveTracksTencentComQPlay1C() {};
private:
    CpProxyTencentComQPlay1C& iService;
    Brh& iNumberOfSuccess;
};

SyncRemoveTracksTencentComQPlay1C::SyncRemoveTracksTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aNumberOfSuccess)
    : iService(aProxy)
    , iNumberOfSuccess(aNumberOfSuccess)
{
}

void SyncRemoveTracksTencentComQPlay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRemoveTracks(aAsync, iNumberOfSuccess);
}


class SyncGetTracksInfoTencentComQPlay1C : public SyncProxyAction
{
public:
    SyncGetTracksInfoTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aTracksMetaData);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetTracksInfoTencentComQPlay1C() {};
private:
    CpProxyTencentComQPlay1C& iService;
    Brh& iTracksMetaData;
};

SyncGetTracksInfoTencentComQPlay1C::SyncGetTracksInfoTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aTracksMetaData)
    : iService(aProxy)
    , iTracksMetaData(aTracksMetaData)
{
}

void SyncGetTracksInfoTencentComQPlay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetTracksInfo(aAsync, iTracksMetaData);
}


class SyncSetTracksInfoTencentComQPlay1C : public SyncProxyAction
{
public:
    SyncSetTracksInfoTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aNumberOfSuccess);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTracksInfoTencentComQPlay1C() {};
private:
    CpProxyTencentComQPlay1C& iService;
    Brh& iNumberOfSuccess;
};

SyncSetTracksInfoTencentComQPlay1C::SyncSetTracksInfoTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aNumberOfSuccess)
    : iService(aProxy)
    , iNumberOfSuccess(aNumberOfSuccess)
{
}

void SyncSetTracksInfoTencentComQPlay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTracksInfo(aAsync, iNumberOfSuccess);
}


class SyncGetTracksCountTencentComQPlay1C : public SyncProxyAction
{
public:
    SyncGetTracksCountTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aNrTracks);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetTracksCountTencentComQPlay1C() {};
private:
    CpProxyTencentComQPlay1C& iService;
    Brh& iNrTracks;
};

SyncGetTracksCountTencentComQPlay1C::SyncGetTracksCountTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aNrTracks)
    : iService(aProxy)
    , iNrTracks(aNrTracks)
{
}

void SyncGetTracksCountTencentComQPlay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetTracksCount(aAsync, iNrTracks);
}


class SyncGetMaxTracksTencentComQPlay1C : public SyncProxyAction
{
public:
    SyncGetMaxTracksTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aMaxTracks);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetMaxTracksTencentComQPlay1C() {};
private:
    CpProxyTencentComQPlay1C& iService;
    Brh& iMaxTracks;
};

SyncGetMaxTracksTencentComQPlay1C::SyncGetMaxTracksTencentComQPlay1C(CpProxyTencentComQPlay1C& aProxy, Brh& aMaxTracks)
    : iService(aProxy)
    , iMaxTracks(aMaxTracks)
{
}

void SyncGetMaxTracksTencentComQPlay1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetMaxTracks(aAsync, iMaxTracks);
}

CpProxyTencentComQPlay1C::CpProxyTencentComQPlay1C(CpDeviceC aDevice)
    : CpProxyC("tencent-com", "QPlay", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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

CpProxyTencentComQPlay1C::~CpProxyTencentComQPlay1C()
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

void CpProxyTencentComQPlay1C::SyncSetNetwork(const Brx& aSSID, const Brx& aKey, const Brx& aAuthAlgo, const Brx& aCipherAlgo)
{
    SyncSetNetworkTencentComQPlay1C sync(*this);
    BeginSetNetwork(aSSID, aKey, aAuthAlgo, aCipherAlgo, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1C::BeginSetNetwork(const Brx& aSSID, const Brx& aKey, const Brx& aAuthAlgo, const Brx& aCipherAlgo, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetNetwork, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetNetwork->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSSID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aKey));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aAuthAlgo));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCipherAlgo));
    Invocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1C::EndSetNetwork(IAsync& aAsync)
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

void CpProxyTencentComQPlay1C::SyncQPlayAuth(const Brx& aSeed, Brh& aCode, Brh& aMID, Brh& aDID)
{
    SyncQPlayAuthTencentComQPlay1C sync(*this, aCode, aMID, aDID);
    BeginQPlayAuth(aSeed, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1C::BeginQPlayAuth(const Brx& aSeed, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionQPlayAuth, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionQPlayAuth->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSeed));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionQPlayAuth->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1C::EndQPlayAuth(IAsync& aAsync, Brh& aCode, Brh& aMID, Brh& aDID)
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

void CpProxyTencentComQPlay1C::SyncInsertTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aTracksMetaData, Brh& aNumberOfSuccess)
{
    SyncInsertTracksTencentComQPlay1C sync(*this, aNumberOfSuccess);
    BeginInsertTracks(aQueueID, aStartingIndex, aTracksMetaData, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1C::BeginInsertTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aTracksMetaData, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionInsertTracks, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInsertTracks->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aQueueID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aStartingIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTracksMetaData));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInsertTracks->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1C::EndInsertTracks(IAsync& aAsync, Brh& aNumberOfSuccess)
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

void CpProxyTencentComQPlay1C::SyncRemoveTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNumberOfTracks, Brh& aNumberOfSuccess)
{
    SyncRemoveTracksTencentComQPlay1C sync(*this, aNumberOfSuccess);
    BeginRemoveTracks(aQueueID, aStartingIndex, aNumberOfTracks, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1C::BeginRemoveTracks(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNumberOfTracks, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRemoveTracks, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionRemoveTracks->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aQueueID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aStartingIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aNumberOfTracks));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRemoveTracks->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1C::EndRemoveTracks(IAsync& aAsync, Brh& aNumberOfSuccess)
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

void CpProxyTencentComQPlay1C::SyncGetTracksInfo(const Brx& aStartingIndex, const Brx& aNumberOfTracks, Brh& aTracksMetaData)
{
    SyncGetTracksInfoTencentComQPlay1C sync(*this, aTracksMetaData);
    BeginGetTracksInfo(aStartingIndex, aNumberOfTracks, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1C::BeginGetTracksInfo(const Brx& aStartingIndex, const Brx& aNumberOfTracks, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetTracksInfo, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetTracksInfo->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aStartingIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aNumberOfTracks));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetTracksInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1C::EndGetTracksInfo(IAsync& aAsync, Brh& aTracksMetaData)
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

void CpProxyTencentComQPlay1C::SyncSetTracksInfo(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNextIndex, const Brx& aTracksMetaData, Brh& aNumberOfSuccess)
{
    SyncSetTracksInfoTencentComQPlay1C sync(*this, aNumberOfSuccess);
    BeginSetTracksInfo(aQueueID, aStartingIndex, aNextIndex, aTracksMetaData, sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1C::BeginSetTracksInfo(const Brx& aQueueID, const Brx& aStartingIndex, const Brx& aNextIndex, const Brx& aTracksMetaData, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetTracksInfo, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTracksInfo->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aQueueID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aStartingIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aNextIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTracksMetaData));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSetTracksInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1C::EndSetTracksInfo(IAsync& aAsync, Brh& aNumberOfSuccess)
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

void CpProxyTencentComQPlay1C::SyncGetTracksCount(Brh& aNrTracks)
{
    SyncGetTracksCountTencentComQPlay1C sync(*this, aNrTracks);
    BeginGetTracksCount(sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1C::BeginGetTracksCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetTracksCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetTracksCount->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1C::EndGetTracksCount(IAsync& aAsync, Brh& aNrTracks)
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

void CpProxyTencentComQPlay1C::SyncGetMaxTracks(Brh& aMaxTracks)
{
    SyncGetMaxTracksTencentComQPlay1C sync(*this, aMaxTracks);
    BeginGetMaxTracks(sync.Functor());
    sync.Wait();
}

void CpProxyTencentComQPlay1C::BeginGetMaxTracks(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetMaxTracks, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetMaxTracks->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyTencentComQPlay1C::EndGetMaxTracks(IAsync& aAsync, Brh& aMaxTracks)
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


THandle STDCALL CpProxyTencentComQPlay1Create(CpDeviceC aDevice)
{
    return new CpProxyTencentComQPlay1C(aDevice);
}

void STDCALL CpProxyTencentComQPlay1Destroy(THandle aHandle)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyTencentComQPlay1SyncSetNetwork(THandle aHandle, const char* aSSID, const char* aKey, const char* aAuthAlgo, const char* aCipherAlgo)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSSID(aSSID);
    Brh buf_aKey(aKey);
    Brh buf_aAuthAlgo(aAuthAlgo);
    Brh buf_aCipherAlgo(aCipherAlgo);
    int32_t err = 0;
    try {
        proxyC->SyncSetNetwork(buf_aSSID, buf_aKey, buf_aAuthAlgo, buf_aCipherAlgo);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyTencentComQPlay1BeginSetNetwork(THandle aHandle, const char* aSSID, const char* aKey, const char* aAuthAlgo, const char* aCipherAlgo, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSSID(aSSID);
    Brh buf_aKey(aKey);
    Brh buf_aAuthAlgo(aAuthAlgo);
    Brh buf_aCipherAlgo(aCipherAlgo);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetNetwork(buf_aSSID, buf_aKey, buf_aAuthAlgo, buf_aCipherAlgo, functor);
}

int32_t STDCALL CpProxyTencentComQPlay1EndSetNetwork(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetNetwork(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyTencentComQPlay1SyncQPlayAuth(THandle aHandle, const char* aSeed, char** aCode, char** aMID, char** aDID)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSeed(aSeed);
    Brh buf_aCode;
    Brh buf_aMID;
    Brh buf_aDID;
    int32_t err = 0;
    try {
        proxyC->SyncQPlayAuth(buf_aSeed, buf_aCode, buf_aMID, buf_aDID);
        *aCode = buf_aCode.Extract();
        *aMID = buf_aMID.Extract();
        *aDID = buf_aDID.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aCode = NULL;
        *aMID = NULL;
        *aDID = NULL;
    }
    return err;
}

void STDCALL CpProxyTencentComQPlay1BeginQPlayAuth(THandle aHandle, const char* aSeed, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSeed(aSeed);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginQPlayAuth(buf_aSeed, functor);
}

int32_t STDCALL CpProxyTencentComQPlay1EndQPlayAuth(THandle aHandle, OhNetHandleAsync aAsync, char** aCode, char** aMID, char** aDID)
{
    int32_t err = 0;
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aCode;
    *aCode = NULL;
    Brh buf_aMID;
    *aMID = NULL;
    Brh buf_aDID;
    *aDID = NULL;
    try {
        proxyC->EndQPlayAuth(*async, buf_aCode, buf_aMID, buf_aDID);
        *aCode = buf_aCode.Extract();
        *aMID = buf_aMID.Extract();
        *aDID = buf_aDID.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyTencentComQPlay1SyncInsertTracks(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aTracksMetaData, char** aNumberOfSuccess)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aQueueID(aQueueID);
    Brh buf_aStartingIndex(aStartingIndex);
    Brh buf_aTracksMetaData(aTracksMetaData);
    Brh buf_aNumberOfSuccess;
    int32_t err = 0;
    try {
        proxyC->SyncInsertTracks(buf_aQueueID, buf_aStartingIndex, buf_aTracksMetaData, buf_aNumberOfSuccess);
        *aNumberOfSuccess = buf_aNumberOfSuccess.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aNumberOfSuccess = NULL;
    }
    return err;
}

void STDCALL CpProxyTencentComQPlay1BeginInsertTracks(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aTracksMetaData, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aQueueID(aQueueID);
    Brh buf_aStartingIndex(aStartingIndex);
    Brh buf_aTracksMetaData(aTracksMetaData);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginInsertTracks(buf_aQueueID, buf_aStartingIndex, buf_aTracksMetaData, functor);
}

int32_t STDCALL CpProxyTencentComQPlay1EndInsertTracks(THandle aHandle, OhNetHandleAsync aAsync, char** aNumberOfSuccess)
{
    int32_t err = 0;
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aNumberOfSuccess;
    *aNumberOfSuccess = NULL;
    try {
        proxyC->EndInsertTracks(*async, buf_aNumberOfSuccess);
        *aNumberOfSuccess = buf_aNumberOfSuccess.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyTencentComQPlay1SyncRemoveTracks(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aNumberOfTracks, char** aNumberOfSuccess)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aQueueID(aQueueID);
    Brh buf_aStartingIndex(aStartingIndex);
    Brh buf_aNumberOfTracks(aNumberOfTracks);
    Brh buf_aNumberOfSuccess;
    int32_t err = 0;
    try {
        proxyC->SyncRemoveTracks(buf_aQueueID, buf_aStartingIndex, buf_aNumberOfTracks, buf_aNumberOfSuccess);
        *aNumberOfSuccess = buf_aNumberOfSuccess.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aNumberOfSuccess = NULL;
    }
    return err;
}

void STDCALL CpProxyTencentComQPlay1BeginRemoveTracks(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aNumberOfTracks, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aQueueID(aQueueID);
    Brh buf_aStartingIndex(aStartingIndex);
    Brh buf_aNumberOfTracks(aNumberOfTracks);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRemoveTracks(buf_aQueueID, buf_aStartingIndex, buf_aNumberOfTracks, functor);
}

int32_t STDCALL CpProxyTencentComQPlay1EndRemoveTracks(THandle aHandle, OhNetHandleAsync aAsync, char** aNumberOfSuccess)
{
    int32_t err = 0;
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aNumberOfSuccess;
    *aNumberOfSuccess = NULL;
    try {
        proxyC->EndRemoveTracks(*async, buf_aNumberOfSuccess);
        *aNumberOfSuccess = buf_aNumberOfSuccess.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyTencentComQPlay1SyncGetTracksInfo(THandle aHandle, const char* aStartingIndex, const char* aNumberOfTracks, char** aTracksMetaData)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aStartingIndex(aStartingIndex);
    Brh buf_aNumberOfTracks(aNumberOfTracks);
    Brh buf_aTracksMetaData;
    int32_t err = 0;
    try {
        proxyC->SyncGetTracksInfo(buf_aStartingIndex, buf_aNumberOfTracks, buf_aTracksMetaData);
        *aTracksMetaData = buf_aTracksMetaData.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aTracksMetaData = NULL;
    }
    return err;
}

void STDCALL CpProxyTencentComQPlay1BeginGetTracksInfo(THandle aHandle, const char* aStartingIndex, const char* aNumberOfTracks, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aStartingIndex(aStartingIndex);
    Brh buf_aNumberOfTracks(aNumberOfTracks);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetTracksInfo(buf_aStartingIndex, buf_aNumberOfTracks, functor);
}

int32_t STDCALL CpProxyTencentComQPlay1EndGetTracksInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aTracksMetaData)
{
    int32_t err = 0;
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aTracksMetaData;
    *aTracksMetaData = NULL;
    try {
        proxyC->EndGetTracksInfo(*async, buf_aTracksMetaData);
        *aTracksMetaData = buf_aTracksMetaData.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyTencentComQPlay1SyncSetTracksInfo(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aNextIndex, const char* aTracksMetaData, char** aNumberOfSuccess)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aQueueID(aQueueID);
    Brh buf_aStartingIndex(aStartingIndex);
    Brh buf_aNextIndex(aNextIndex);
    Brh buf_aTracksMetaData(aTracksMetaData);
    Brh buf_aNumberOfSuccess;
    int32_t err = 0;
    try {
        proxyC->SyncSetTracksInfo(buf_aQueueID, buf_aStartingIndex, buf_aNextIndex, buf_aTracksMetaData, buf_aNumberOfSuccess);
        *aNumberOfSuccess = buf_aNumberOfSuccess.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aNumberOfSuccess = NULL;
    }
    return err;
}

void STDCALL CpProxyTencentComQPlay1BeginSetTracksInfo(THandle aHandle, const char* aQueueID, const char* aStartingIndex, const char* aNextIndex, const char* aTracksMetaData, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aQueueID(aQueueID);
    Brh buf_aStartingIndex(aStartingIndex);
    Brh buf_aNextIndex(aNextIndex);
    Brh buf_aTracksMetaData(aTracksMetaData);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetTracksInfo(buf_aQueueID, buf_aStartingIndex, buf_aNextIndex, buf_aTracksMetaData, functor);
}

int32_t STDCALL CpProxyTencentComQPlay1EndSetTracksInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aNumberOfSuccess)
{
    int32_t err = 0;
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aNumberOfSuccess;
    *aNumberOfSuccess = NULL;
    try {
        proxyC->EndSetTracksInfo(*async, buf_aNumberOfSuccess);
        *aNumberOfSuccess = buf_aNumberOfSuccess.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyTencentComQPlay1SyncGetTracksCount(THandle aHandle, char** aNrTracks)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aNrTracks;
    int32_t err = 0;
    try {
        proxyC->SyncGetTracksCount(buf_aNrTracks);
        *aNrTracks = buf_aNrTracks.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aNrTracks = NULL;
    }
    return err;
}

void STDCALL CpProxyTencentComQPlay1BeginGetTracksCount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetTracksCount(functor);
}

int32_t STDCALL CpProxyTencentComQPlay1EndGetTracksCount(THandle aHandle, OhNetHandleAsync aAsync, char** aNrTracks)
{
    int32_t err = 0;
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aNrTracks;
    *aNrTracks = NULL;
    try {
        proxyC->EndGetTracksCount(*async, buf_aNrTracks);
        *aNrTracks = buf_aNrTracks.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyTencentComQPlay1SyncGetMaxTracks(THandle aHandle, char** aMaxTracks)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMaxTracks;
    int32_t err = 0;
    try {
        proxyC->SyncGetMaxTracks(buf_aMaxTracks);
        *aMaxTracks = buf_aMaxTracks.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aMaxTracks = NULL;
    }
    return err;
}

void STDCALL CpProxyTencentComQPlay1BeginGetMaxTracks(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetMaxTracks(functor);
}

int32_t STDCALL CpProxyTencentComQPlay1EndGetMaxTracks(THandle aHandle, OhNetHandleAsync aAsync, char** aMaxTracks)
{
    int32_t err = 0;
    CpProxyTencentComQPlay1C* proxyC = reinterpret_cast<CpProxyTencentComQPlay1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aMaxTracks;
    *aMaxTracks = NULL;
    try {
        proxyC->EndGetMaxTracks(*async, buf_aMaxTracks);
        *aMaxTracks = buf_aMaxTracks.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

