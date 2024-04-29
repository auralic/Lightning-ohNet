#include "CpAvOpenhomeOrgStreaming1.h"
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

class CpProxyAvOpenhomeOrgStreaming1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgStreaming1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgStreaming1C();
    //CpProxyAvOpenhomeOrgStreaming1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgStreaming1*>(iProxy); }

    void SyncPlay();
    void BeginPlay(FunctorAsync& aFunctor);
    void EndPlay(IAsync& aAsync);

    void SyncPause();
    void BeginPause(FunctorAsync& aFunctor);
    void EndPause(IAsync& aAsync);

    void SyncStop();
    void BeginStop(FunctorAsync& aFunctor);
    void EndStop(IAsync& aAsync);

    void SyncNext();
    void BeginNext(FunctorAsync& aFunctor);
    void EndNext(IAsync& aAsync);

    void SyncPrevious();
    void BeginPrevious(FunctorAsync& aFunctor);
    void EndPrevious(IAsync& aAsync);

    void SyncSetRepeat(TBool aValue);
    void BeginSetRepeat(TBool aValue, FunctorAsync& aFunctor);
    void EndSetRepeat(IAsync& aAsync);

    void SyncRepeat(TBool& aValue);
    void BeginRepeat(FunctorAsync& aFunctor);
    void EndRepeat(IAsync& aAsync, TBool& aValue);

    void SyncSetShuffle(TBool aValue);
    void BeginSetShuffle(TBool aValue, FunctorAsync& aFunctor);
    void EndSetShuffle(IAsync& aAsync);

    void SyncShuffle(TBool& aValue);
    void BeginShuffle(FunctorAsync& aFunctor);
    void EndShuffle(IAsync& aAsync, TBool& aValue);

    void SyncSeekSecondAbsolute(TUint aValue);
    void BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor);
    void EndSeekSecondAbsolute(IAsync& aAsync);

    void SyncSeekSecondRelative(TInt aValue);
    void BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor);
    void EndSeekSecondRelative(IAsync& aAsync);

    void SyncSeekId(TUint aValue);
    void BeginSeekId(TUint aValue, FunctorAsync& aFunctor);
    void EndSeekId(IAsync& aAsync);

    void SyncSeekIndex(TUint aValue);
    void BeginSeekIndex(TUint aValue, FunctorAsync& aFunctor);
    void EndSeekIndex(IAsync& aAsync);

    void SyncTransportState(Brh& aValue);
    void BeginTransportState(FunctorAsync& aFunctor);
    void EndTransportState(IAsync& aAsync, Brh& aValue);

    void SyncId(TUint& aValue);
    void BeginId(FunctorAsync& aFunctor);
    void EndId(IAsync& aAsync, TUint& aValue);

    void SyncRead(TUint aId, Brh& aUri, Brh& aMetadata);
    void BeginRead(TUint aId, FunctorAsync& aFunctor);
    void EndRead(IAsync& aAsync, Brh& aUri, Brh& aMetadata);

    void SyncReadList(const Brx& aIdList, Brh& aTrackList);
    void BeginReadList(const Brx& aIdList, FunctorAsync& aFunctor);
    void EndReadList(IAsync& aAsync, Brh& aTrackList);

    void SyncInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, TUint& aNewId);
    void BeginInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor);
    void EndInsert(IAsync& aAsync, TUint& aNewId);

    void SyncDeleteId(TUint aValue);
    void BeginDeleteId(TUint aValue, FunctorAsync& aFunctor);
    void EndDeleteId(IAsync& aAsync);

    void SyncDeleteAll();
    void BeginDeleteAll(FunctorAsync& aFunctor);
    void EndDeleteAll(IAsync& aAsync);

    void SyncTracksMax(TUint& aValue);
    void BeginTracksMax(FunctorAsync& aFunctor);
    void EndTracksMax(IAsync& aAsync, TUint& aValue);

    void SyncIdArray(TUint& aToken, Brh& aArray);
    void BeginIdArray(FunctorAsync& aFunctor);
    void EndIdArray(IAsync& aAsync, TUint& aToken, Brh& aArray);

    void SyncIdArrayChanged(TUint aToken, TBool& aValue);
    void BeginIdArrayChanged(TUint aToken, FunctorAsync& aFunctor);
    void EndIdArrayChanged(IAsync& aAsync, TBool& aValue);

    void SyncProtocolInfo(Brh& aValue);
    void BeginProtocolInfo(FunctorAsync& aFunctor);
    void EndProtocolInfo(IAsync& aAsync, Brh& aValue);

    void SetPropertyTransportStateChanged(Functor& aFunctor);
    void SetPropertyRepeatChanged(Functor& aFunctor);
    void SetPropertyShuffleChanged(Functor& aFunctor);
    void SetPropertyIdChanged(Functor& aFunctor);
    void SetPropertyIdArrayChanged(Functor& aFunctor);
    void SetPropertyTracksMaxChanged(Functor& aFunctor);
    void SetPropertyProtocolInfoChanged(Functor& aFunctor);

    void PropertyTransportState(Brhz& aTransportState) const;
    void PropertyRepeat(TBool& aRepeat) const;
    void PropertyShuffle(TBool& aShuffle) const;
    void PropertyId(TUint& aId) const;
    void PropertyIdArray(Brh& aIdArray) const;
    void PropertyTracksMax(TUint& aTracksMax) const;
    void PropertyProtocolInfo(Brhz& aProtocolInfo) const;
private:
    void TransportStatePropertyChanged();
    void RepeatPropertyChanged();
    void ShufflePropertyChanged();
    void IdPropertyChanged();
    void IdArrayPropertyChanged();
    void TracksMaxPropertyChanged();
    void ProtocolInfoPropertyChanged();
private:
    Mutex iLock;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionNext;
    Action* iActionPrevious;
    Action* iActionSetRepeat;
    Action* iActionRepeat;
    Action* iActionSetShuffle;
    Action* iActionShuffle;
    Action* iActionSeekSecondAbsolute;
    Action* iActionSeekSecondRelative;
    Action* iActionSeekId;
    Action* iActionSeekIndex;
    Action* iActionTransportState;
    Action* iActionId;
    Action* iActionRead;
    Action* iActionReadList;
    Action* iActionInsert;
    Action* iActionDeleteId;
    Action* iActionDeleteAll;
    Action* iActionTracksMax;
    Action* iActionIdArray;
    Action* iActionIdArrayChanged;
    Action* iActionProtocolInfo;
    PropertyString* iTransportState;
    PropertyBool* iRepeat;
    PropertyBool* iShuffle;
    PropertyUint* iId;
    PropertyBinary* iIdArray;
    PropertyUint* iTracksMax;
    PropertyString* iProtocolInfo;
    Functor iTransportStateChanged;
    Functor iRepeatChanged;
    Functor iShuffleChanged;
    Functor iIdChanged;
    Functor iIdArrayChanged;
    Functor iTracksMaxChanged;
    Functor iProtocolInfoChanged;
};


class SyncPlayAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncPlayAvOpenhomeOrgStreaming1C::SyncPlayAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncPauseAvOpenhomeOrgStreaming1C::SyncPauseAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncStopAvOpenhomeOrgStreaming1C::SyncStopAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncNextAvOpenhomeOrgStreaming1C::SyncNextAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncPreviousAvOpenhomeOrgStreaming1C::SyncPreviousAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncSetRepeatAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncSetRepeatAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRepeatAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncSetRepeatAvOpenhomeOrgStreaming1C::SyncSetRepeatAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeat(aAsync);
}


class SyncRepeatAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRepeatAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
    TBool& iValue;
};

SyncRepeatAvOpenhomeOrgStreaming1C::SyncRepeatAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iValue);
}


class SyncSetShuffleAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncSetShuffleAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetShuffleAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncSetShuffleAvOpenhomeOrgStreaming1C::SyncSetShuffleAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetShuffleAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetShuffle(aAsync);
}


class SyncShuffleAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncShuffleAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
    TBool& iValue;
};

SyncShuffleAvOpenhomeOrgStreaming1C::SyncShuffleAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncShuffleAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iValue);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1C::SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgStreaming1C::SyncSeekSecondRelativeAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncSeekIdAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncSeekIdAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekIdAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncSeekIdAvOpenhomeOrgStreaming1C::SyncSeekIdAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekIdAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekId(aAsync);
}


class SyncSeekIndexAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncSeekIndexAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekIndexAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncSeekIndexAvOpenhomeOrgStreaming1C::SyncSeekIndexAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekIndexAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekIndex(aAsync);
}


class SyncTransportStateAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
    Brh& iValue;
};

SyncTransportStateAvOpenhomeOrgStreaming1C::SyncTransportStateAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


class SyncIdAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncIdAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
    TUint& iValue;
};

SyncIdAvOpenhomeOrgStreaming1C::SyncIdAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncIdAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndId(aAsync, iValue);
}


class SyncReadAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncReadAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, Brh& aUri, Brh& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
    Brh& iUri;
    Brh& iMetadata;
};

SyncReadAvOpenhomeOrgStreaming1C::SyncReadAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, Brh& aUri, Brh& aMetadata)
    : iService(aProxy)
    , iUri(aUri)
    , iMetadata(aMetadata)
{
}

void SyncReadAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRead(aAsync, iUri, iMetadata);
}


class SyncReadListAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncReadListAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, Brh& aTrackList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadListAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
    Brh& iTrackList;
};

SyncReadListAvOpenhomeOrgStreaming1C::SyncReadListAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, Brh& aTrackList)
    : iService(aProxy)
    , iTrackList(aTrackList)
{
}

void SyncReadListAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReadList(aAsync, iTrackList);
}


class SyncInsertAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TUint& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInsertAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
    TUint& iNewId;
};

SyncInsertAvOpenhomeOrgStreaming1C::SyncInsertAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TUint& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncInsertAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewId);
}


class SyncDeleteIdAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncDeleteIdAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeleteIdAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncDeleteIdAvOpenhomeOrgStreaming1C::SyncDeleteIdAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncDeleteIdAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeleteId(aAsync);
}


class SyncDeleteAllAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncDeleteAllAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeleteAllAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
};

SyncDeleteAllAvOpenhomeOrgStreaming1C::SyncDeleteAllAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy)
    : iService(aProxy)
{
}

void SyncDeleteAllAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeleteAll(aAsync);
}


class SyncTracksMaxAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncTracksMaxAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTracksMaxAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
    TUint& iValue;
};

SyncTracksMaxAvOpenhomeOrgStreaming1C::SyncTracksMaxAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTracksMaxAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTracksMax(aAsync, iValue);
}


class SyncIdArrayAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncIdArrayAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TUint& aToken, Brh& aArray);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdArrayAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
    TUint& iToken;
    Brh& iArray;
};

SyncIdArrayAvOpenhomeOrgStreaming1C::SyncIdArrayAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TUint& aToken, Brh& aArray)
    : iService(aProxy)
    , iToken(aToken)
    , iArray(aArray)
{
}

void SyncIdArrayAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndIdArray(aAsync, iToken, iArray);
}


class SyncIdArrayChangedAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncIdArrayChangedAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdArrayChangedAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
    TBool& iValue;
};

SyncIdArrayChangedAvOpenhomeOrgStreaming1C::SyncIdArrayChangedAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncIdArrayChangedAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndIdArrayChanged(aAsync, iValue);
}


class SyncProtocolInfoAvOpenhomeOrgStreaming1C : public SyncProxyAction
{
public:
    SyncProtocolInfoAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProtocolInfoAvOpenhomeOrgStreaming1C() {};
private:
    CpProxyAvOpenhomeOrgStreaming1C& iService;
    Brh& iValue;
};

SyncProtocolInfoAvOpenhomeOrgStreaming1C::SyncProtocolInfoAvOpenhomeOrgStreaming1C(CpProxyAvOpenhomeOrgStreaming1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncProtocolInfoAvOpenhomeOrgStreaming1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndProtocolInfo(aAsync, iValue);
}

CpProxyAvOpenhomeOrgStreaming1C::CpProxyAvOpenhomeOrgStreaming1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Streaming", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPlay = new Action("Play");

    iActionPause = new Action("Pause");

    iActionStop = new Action("Stop");

    iActionNext = new Action("Next");

    iActionPrevious = new Action("Previous");

    iActionSetRepeat = new Action("SetRepeat");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionSetRepeat->AddInputParameter(param);

    iActionRepeat = new Action("Repeat");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionRepeat->AddOutputParameter(param);

    iActionSetShuffle = new Action("SetShuffle");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionSetShuffle->AddInputParameter(param);

    iActionShuffle = new Action("Shuffle");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionShuffle->AddOutputParameter(param);

    iActionSeekSecondAbsolute = new Action("SeekSecondAbsolute");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSeekSecondAbsolute->AddInputParameter(param);

    iActionSeekSecondRelative = new Action("SeekSecondRelative");
    param = new OpenHome::Net::ParameterInt("Value");
    iActionSeekSecondRelative->AddInputParameter(param);

    iActionSeekId = new Action("SeekId");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSeekId->AddInputParameter(param);

    iActionSeekIndex = new Action("SeekIndex");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSeekIndex->AddInputParameter(param);

    iActionTransportState = new Action("TransportState");
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"Playing";
    allowedValues[index++] = (TChar*)"Paused";
    allowedValues[index++] = (TChar*)"Stopped";
    allowedValues[index++] = (TChar*)"Buffering";
    param = new OpenHome::Net::ParameterString("Value", allowedValues, 4);
    iActionTransportState->AddOutputParameter(param);
    delete[] allowedValues;

    iActionId = new Action("Id");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionId->AddOutputParameter(param);

    iActionRead = new Action("Read");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionRead->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Uri");
    iActionRead->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionRead->AddOutputParameter(param);

    iActionReadList = new Action("ReadList");
    param = new OpenHome::Net::ParameterString("IdList");
    iActionReadList->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TrackList");
    iActionReadList->AddOutputParameter(param);

    iActionInsert = new Action("Insert");
    param = new OpenHome::Net::ParameterUint("AfterId");
    iActionInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Uri");
    iActionInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("NewId");
    iActionInsert->AddOutputParameter(param);

    iActionDeleteId = new Action("DeleteId");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionDeleteId->AddInputParameter(param);

    iActionDeleteAll = new Action("DeleteAll");

    iActionTracksMax = new Action("TracksMax");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionTracksMax->AddOutputParameter(param);

    iActionIdArray = new Action("IdArray");
    param = new OpenHome::Net::ParameterUint("Token");
    iActionIdArray->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBinary("Array");
    iActionIdArray->AddOutputParameter(param);

    iActionIdArrayChanged = new Action("IdArrayChanged");
    param = new OpenHome::Net::ParameterUint("Token");
    iActionIdArrayChanged->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Value");
    iActionIdArrayChanged->AddOutputParameter(param);

    iActionProtocolInfo = new Action("ProtocolInfo");
    param = new OpenHome::Net::ParameterString("Value");
    iActionProtocolInfo->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1C::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1C::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1C::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1C::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1C::IdArrayPropertyChanged);
    iIdArray = new PropertyBinary("IdArray", functor);
    AddProperty(iIdArray);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1C::TracksMaxPropertyChanged);
    iTracksMax = new PropertyUint("TracksMax", functor);
    AddProperty(iTracksMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1C::ProtocolInfoPropertyChanged);
    iProtocolInfo = new PropertyString("ProtocolInfo", functor);
    AddProperty(iProtocolInfo);
}

CpProxyAvOpenhomeOrgStreaming1C::~CpProxyAvOpenhomeOrgStreaming1C()
{
    DestroyService();
    delete iActionPlay;
    delete iActionPause;
    delete iActionStop;
    delete iActionNext;
    delete iActionPrevious;
    delete iActionSetRepeat;
    delete iActionRepeat;
    delete iActionSetShuffle;
    delete iActionShuffle;
    delete iActionSeekSecondAbsolute;
    delete iActionSeekSecondRelative;
    delete iActionSeekId;
    delete iActionSeekIndex;
    delete iActionTransportState;
    delete iActionId;
    delete iActionRead;
    delete iActionReadList;
    delete iActionInsert;
    delete iActionDeleteId;
    delete iActionDeleteAll;
    delete iActionTracksMax;
    delete iActionIdArray;
    delete iActionIdArrayChanged;
    delete iActionProtocolInfo;
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgStreaming1C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndPlay(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Play"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncPause()
{
    SyncPauseAvOpenhomeOrgStreaming1C sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndPause(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Pause"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncStop()
{
    SyncStopAvOpenhomeOrgStreaming1C sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndStop(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Stop"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncNext()
{
    SyncNextAvOpenhomeOrgStreaming1C sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionNext, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndNext(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Next"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgStreaming1C sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPrevious, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndPrevious(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Previous"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncSetRepeat(TBool aValue)
{
    SyncSetRepeatAvOpenhomeOrgStreaming1C sync(*this);
    BeginSetRepeat(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginSetRepeat(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetRepeat, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeat->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndSetRepeat(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetRepeat"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncRepeat(TBool& aValue)
{
    SyncRepeatAvOpenhomeOrgStreaming1C sync(*this, aValue);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndRepeat(IAsync& aAsync, TBool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Repeat"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncSetShuffle(TBool aValue)
{
    SyncSetShuffleAvOpenhomeOrgStreaming1C sync(*this);
    BeginSetShuffle(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginSetShuffle(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetShuffle, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetShuffle->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndSetShuffle(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetShuffle"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncShuffle(TBool& aValue)
{
    SyncShuffleAvOpenhomeOrgStreaming1C sync(*this, aValue);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndShuffle(IAsync& aAsync, TBool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Shuffle"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1C sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndSeekSecondAbsolute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SeekSecondAbsolute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncSeekSecondRelative(TInt aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgStreaming1C sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndSeekSecondRelative(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SeekSecondRelative"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncSeekId(TUint aValue)
{
    SyncSeekIdAvOpenhomeOrgStreaming1C sync(*this);
    BeginSeekId(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginSeekId(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndSeekId(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SeekId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncSeekIndex(TUint aValue)
{
    SyncSeekIndexAvOpenhomeOrgStreaming1C sync(*this);
    BeginSeekIndex(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginSeekIndex(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndSeekIndex(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SeekIndex"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgStreaming1C sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndTransportState(IAsync& aAsync, Brh& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("TransportState"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncId(TUint& aValue)
{
    SyncIdAvOpenhomeOrgStreaming1C sync(*this, aValue);
    BeginId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndId(IAsync& aAsync, TUint& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Id"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncRead(TUint aId, Brh& aUri, Brh& aMetadata)
{
    SyncReadAvOpenhomeOrgStreaming1C sync(*this, aUri, aMetadata);
    BeginRead(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginRead(TUint aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRead, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionRead->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRead->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndRead(IAsync& aAsync, Brh& aUri, Brh& aMetadata)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Read"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUri);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMetadata);
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncReadList(const Brx& aIdList, Brh& aTrackList)
{
    SyncReadListAvOpenhomeOrgStreaming1C sync(*this, aTrackList);
    BeginReadList(aIdList, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginReadList(const Brx& aIdList, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReadList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReadList->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aIdList));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReadList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndReadList(IAsync& aAsync, Brh& aTrackList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ReadList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aTrackList);
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, TUint& aNewId)
{
    SyncInsertAvOpenhomeOrgStreaming1C sync(*this, aNewId);
    BeginInsert(aAfterId, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionInsert, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInsert->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aAfterId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInsert->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndInsert(IAsync& aAsync, TUint& aNewId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Insert"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aNewId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncDeleteId(TUint aValue)
{
    SyncDeleteIdAvOpenhomeOrgStreaming1C sync(*this);
    BeginDeleteId(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginDeleteId(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeleteId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDeleteId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndDeleteId(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DeleteId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncDeleteAll()
{
    SyncDeleteAllAvOpenhomeOrgStreaming1C sync(*this);
    BeginDeleteAll(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginDeleteAll(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeleteAll, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndDeleteAll(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DeleteAll"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncTracksMax(TUint& aValue)
{
    SyncTracksMaxAvOpenhomeOrgStreaming1C sync(*this, aValue);
    BeginTracksMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginTracksMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTracksMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTracksMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndTracksMax(IAsync& aAsync, TUint& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("TracksMax"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncIdArray(TUint& aToken, Brh& aArray)
{
    SyncIdArrayAvOpenhomeOrgStreaming1C sync(*this, aToken, aArray);
    BeginIdArray(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginIdArray(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionIdArray, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIdArray->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndIdArray(IAsync& aAsync, TUint& aToken, Brh& aArray)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("IdArray"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aToken = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentBinary*)invocation.OutputArguments()[index++])->TransferTo(aArray);
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncIdArrayChanged(TUint aToken, TBool& aValue)
{
    SyncIdArrayChangedAvOpenhomeOrgStreaming1C sync(*this, aValue);
    BeginIdArrayChanged(aToken, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginIdArrayChanged(TUint aToken, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionIdArrayChanged, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionIdArrayChanged->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aToken));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIdArrayChanged->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndIdArrayChanged(IAsync& aAsync, TBool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("IdArrayChanged"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgStreaming1C::SyncProtocolInfo(Brh& aValue)
{
    SyncProtocolInfoAvOpenhomeOrgStreaming1C sync(*this, aValue);
    BeginProtocolInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1C::BeginProtocolInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionProtocolInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProtocolInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1C::EndProtocolInfo(IAsync& aAsync, Brh& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ProtocolInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgStreaming1C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgStreaming1C::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRepeatChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgStreaming1C::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iLock.Wait();
    iShuffleChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgStreaming1C::SetPropertyIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgStreaming1C::SetPropertyIdArrayChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIdArrayChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgStreaming1C::SetPropertyTracksMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTracksMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgStreaming1C::SetPropertyProtocolInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProtocolInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgStreaming1C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgStreaming1C::PropertyRepeat(TBool& aRepeat) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgStreaming1C::PropertyShuffle(TBool& aShuffle) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgStreaming1C::PropertyId(TUint& aId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgStreaming1C::PropertyIdArray(Brh& aIdArray) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aIdArray.Set(iIdArray->Value());
}

void CpProxyAvOpenhomeOrgStreaming1C::PropertyTracksMax(TUint& aTracksMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTracksMax = iTracksMax->Value();
}

void CpProxyAvOpenhomeOrgStreaming1C::PropertyProtocolInfo(Brhz& aProtocolInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProtocolInfo.Set(iProtocolInfo->Value());
}

void CpProxyAvOpenhomeOrgStreaming1C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgStreaming1C::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgStreaming1C::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}

void CpProxyAvOpenhomeOrgStreaming1C::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}

void CpProxyAvOpenhomeOrgStreaming1C::IdArrayPropertyChanged()
{
    ReportEvent(iIdArrayChanged);
}

void CpProxyAvOpenhomeOrgStreaming1C::TracksMaxPropertyChanged()
{
    ReportEvent(iTracksMaxChanged);
}

void CpProxyAvOpenhomeOrgStreaming1C::ProtocolInfoPropertyChanged()
{
    ReportEvent(iProtocolInfoChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgStreaming1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgStreaming1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncPlay();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPlay(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncPause();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPause(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncStop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncStop();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginStop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndStop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndStop(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncNext(THandle aHandle)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncNext();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginNext(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginNext(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndNext(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndNext(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncPrevious(THandle aHandle)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncPrevious();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginPrevious(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPrevious(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndPrevious(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPrevious(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncSetRepeat(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetRepeat((aValue==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginSetRepeat(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetRepeat((aValue==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndSetRepeat(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetRepeat(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncRepeat(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncRepeat(Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginRepeat(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRepeat(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndRepeat(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndRepeat(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncSetShuffle(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetShuffle((aValue==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginSetShuffle(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetShuffle((aValue==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndSetShuffle(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetShuffle(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncShuffle(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncShuffle(Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginShuffle(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginShuffle(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndShuffle(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndShuffle(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncSeekSecondAbsolute(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekSecondAbsolute(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginSeekSecondAbsolute(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondAbsolute(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndSeekSecondAbsolute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSeekSecondAbsolute(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncSeekSecondRelative(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekSecondRelative(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginSeekSecondRelative(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondRelative(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndSeekSecondRelative(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSeekSecondRelative(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncSeekId(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekId(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginSeekId(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekId(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndSeekId(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSeekId(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncSeekIndex(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekIndex(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginSeekIndex(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekIndex(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndSeekIndex(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSeekIndex(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncTransportState(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncTransportState(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndTransportState(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncId(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncId(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginId(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndId(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndId(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncRead(THandle aHandle, uint32_t aId, char** aUri, char** aMetadata)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri;
    Brh buf_aMetadata;
    int32_t err = 0;
    try {
        proxyC->SyncRead(aId, buf_aUri, buf_aMetadata);
        *aUri = buf_aUri.Extract();
        *aMetadata = buf_aMetadata.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aUri = NULL;
        *aMetadata = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginRead(THandle aHandle, uint32_t aId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRead(aId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndRead(THandle aHandle, OhNetHandleAsync aAsync, char** aUri, char** aMetadata)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aUri;
    *aUri = NULL;
    Brh buf_aMetadata;
    *aMetadata = NULL;
    try {
        proxyC->EndRead(*async, buf_aUri, buf_aMetadata);
        *aUri = buf_aUri.Extract();
        *aMetadata = buf_aMetadata.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncReadList(THandle aHandle, const char* aIdList, char** aTrackList)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aIdList(aIdList);
    Brh buf_aTrackList;
    int32_t err = 0;
    try {
        proxyC->SyncReadList(buf_aIdList, buf_aTrackList);
        *aTrackList = buf_aTrackList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aTrackList = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginReadList(THandle aHandle, const char* aIdList, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aIdList(aIdList);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReadList(buf_aIdList, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndReadList(THandle aHandle, OhNetHandleAsync aAsync, char** aTrackList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aTrackList;
    *aTrackList = NULL;
    try {
        proxyC->EndReadList(*async, buf_aTrackList);
        *aTrackList = buf_aTrackList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncInsert(THandle aHandle, uint32_t aAfterId, const char* aUri, const char* aMetadata, uint32_t* aNewId)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    int32_t err = 0;
    try {
        proxyC->SyncInsert(aAfterId, buf_aUri, buf_aMetadata, *aNewId);
    }
    catch (ProxyError& ) {
        err = -1;
        *aNewId = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginInsert(THandle aHandle, uint32_t aAfterId, const char* aUri, const char* aMetadata, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginInsert(aAfterId, buf_aUri, buf_aMetadata, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndInsert(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aNewId)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndInsert(*async, *aNewId);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncDeleteId(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncDeleteId(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginDeleteId(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeleteId(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndDeleteId(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndDeleteId(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncDeleteAll(THandle aHandle)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncDeleteAll();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginDeleteAll(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeleteAll(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndDeleteAll(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndDeleteAll(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncTracksMax(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncTracksMax(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginTracksMax(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTracksMax(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndTracksMax(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndTracksMax(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncIdArray(THandle aHandle, uint32_t* aToken, char** aArray, uint32_t* aArrayLen)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aArray;
    int32_t err = 0;
    try {
        proxyC->SyncIdArray(*aToken, buf_aArray);
        *aArrayLen = buf_aArray.Bytes();
        *aArray = buf_aArray.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aToken = 0;
        *aArrayLen = 0;
        *aArray = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginIdArray(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginIdArray(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndIdArray(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aToken, char** aArray, uint32_t* aArrayLen)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aArray;
    *aArray = NULL;
    *aArrayLen = 0;
    try {
        proxyC->EndIdArray(*async, *aToken, buf_aArray);
        *aArrayLen = buf_aArray.Bytes();
        *aArray = buf_aArray.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncIdArrayChanged(THandle aHandle, uint32_t aToken, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncIdArrayChanged(aToken, Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginIdArrayChanged(THandle aHandle, uint32_t aToken, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginIdArrayChanged(aToken, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndIdArrayChanged(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndIdArrayChanged(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1SyncProtocolInfo(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncProtocolInfo(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1BeginProtocolInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginProtocolInfo(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1EndProtocolInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndProtocolInfo(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1SetPropertyRepeatChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRepeatChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1SetPropertyShuffleChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyShuffleChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1SetPropertyIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIdChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1SetPropertyIdArrayChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIdArrayChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1SetPropertyTracksMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTracksMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgStreaming1SetPropertyProtocolInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProtocolInfoChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aTransportState;
    try {
        proxyC->PropertyTransportState(buf_aTransportState);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aTransportState = buf_aTransportState.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1PropertyRepeat(THandle aHandle, uint32_t* aRepeat)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Repeat;
    try {
        proxyC->PropertyRepeat(Repeat);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aRepeat = Repeat? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1PropertyShuffle(THandle aHandle, uint32_t* aShuffle)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Shuffle;
    try {
        proxyC->PropertyShuffle(Shuffle);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aShuffle = Shuffle? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1PropertyId(THandle aHandle, uint32_t* aId)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyId(*aId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1PropertyIdArray(THandle aHandle, char** aIdArray, uint32_t* aLen)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aIdArray;
    try {
        proxyC->PropertyIdArray(buf_aIdArray);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aLen = buf_aIdArray.Bytes();
    *aIdArray = buf_aIdArray.Extract();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1PropertyTracksMax(THandle aHandle, uint32_t* aTracksMax)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyTracksMax(*aTracksMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgStreaming1PropertyProtocolInfo(THandle aHandle, char** aProtocolInfo)
{
    CpProxyAvOpenhomeOrgStreaming1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgStreaming1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProtocolInfo;
    try {
        proxyC->PropertyProtocolInfo(buf_aProtocolInfo);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aProtocolInfo = buf_aProtocolInfo.Transfer();
    return 0;
}

