#include "CpAvOpenhomeOrgPlaylist1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPlayAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncPauseAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncStopAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncNextAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncPreviousAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncSetRepeatAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncSetRepeatAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncRepeatAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    TBool& iValue;
};

class SyncSetShuffleAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncSetShuffleAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncShuffleAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    TBool& iValue;
};

class SyncSeekSecondAbsoluteAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncSeekSecondRelativeAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncSeekIdAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncSeekIdAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncSeekIndexAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncSeekIndexAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncTransportStateAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    Brh& iValue;
};

class SyncIdAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncIdAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    TUint& iValue;
};

class SyncReadAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncReadAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, Brh& aUri, Brh& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    Brh& iUri;
    Brh& iMetadata;
};

class SyncSimpleReadListAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncSimpleReadListAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, Brh& aTrackList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    Brh& iTrackList;
};

class SyncReadListAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncReadListAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, Brh& aTrackList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    Brh& iTrackList;
};

class SyncInsertAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TUint& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    TUint& iNewId;
};

class SyncBatchInsertAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncBatchInsertAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TUint& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    TUint& iNewId;
};

class SyncDeleteIdAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncDeleteIdAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncDeleteAllAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncDeleteAllAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
};

class SyncTracksMaxAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncTracksMaxAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    TUint& iValue;
};

class SyncIdArrayAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncIdArrayAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TUint& aToken, Brh& aArray);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    TUint& iToken;
    Brh& iArray;
};

class SyncIdArrayChangedAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncIdArrayChangedAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    TBool& iValue;
};

class SyncProtocolInfoAvOpenhomeOrgPlaylist1 : public SyncProxyAction
{
public:
    SyncProtocolInfoAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgPlaylist1& iService;
    Brh& iValue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPlayAvOpenhomeOrgPlaylist1

SyncPlayAvOpenhomeOrgPlaylist1::SyncPlayAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}

// SyncPauseAvOpenhomeOrgPlaylist1

SyncPauseAvOpenhomeOrgPlaylist1::SyncPauseAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}

// SyncStopAvOpenhomeOrgPlaylist1

SyncStopAvOpenhomeOrgPlaylist1::SyncStopAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}

// SyncNextAvOpenhomeOrgPlaylist1

SyncNextAvOpenhomeOrgPlaylist1::SyncNextAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}

// SyncPreviousAvOpenhomeOrgPlaylist1

SyncPreviousAvOpenhomeOrgPlaylist1::SyncPreviousAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}

// SyncSetRepeatAvOpenhomeOrgPlaylist1

SyncSetRepeatAvOpenhomeOrgPlaylist1::SyncSetRepeatAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeat(aAsync);
}

// SyncRepeatAvOpenhomeOrgPlaylist1

SyncRepeatAvOpenhomeOrgPlaylist1::SyncRepeatAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iValue);
}

// SyncSetShuffleAvOpenhomeOrgPlaylist1

SyncSetShuffleAvOpenhomeOrgPlaylist1::SyncSetShuffleAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncSetShuffleAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetShuffle(aAsync);
}

// SyncShuffleAvOpenhomeOrgPlaylist1

SyncShuffleAvOpenhomeOrgPlaylist1::SyncShuffleAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncShuffleAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iValue);
}

// SyncSeekSecondAbsoluteAvOpenhomeOrgPlaylist1

SyncSeekSecondAbsoluteAvOpenhomeOrgPlaylist1::SyncSeekSecondAbsoluteAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}

// SyncSeekSecondRelativeAvOpenhomeOrgPlaylist1

SyncSeekSecondRelativeAvOpenhomeOrgPlaylist1::SyncSeekSecondRelativeAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}

// SyncSeekIdAvOpenhomeOrgPlaylist1

SyncSeekIdAvOpenhomeOrgPlaylist1::SyncSeekIdAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekIdAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekId(aAsync);
}

// SyncSeekIndexAvOpenhomeOrgPlaylist1

SyncSeekIndexAvOpenhomeOrgPlaylist1::SyncSeekIndexAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekIndexAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekIndex(aAsync);
}

// SyncTransportStateAvOpenhomeOrgPlaylist1

SyncTransportStateAvOpenhomeOrgPlaylist1::SyncTransportStateAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}

// SyncIdAvOpenhomeOrgPlaylist1

SyncIdAvOpenhomeOrgPlaylist1::SyncIdAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncIdAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndId(aAsync, iValue);
}

// SyncReadAvOpenhomeOrgPlaylist1

SyncReadAvOpenhomeOrgPlaylist1::SyncReadAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, Brh& aUri, Brh& aMetadata)
    : iService(aProxy)
    , iUri(aUri)
    , iMetadata(aMetadata)
{
}

void SyncReadAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRead(aAsync, iUri, iMetadata);
}

// SyncSimpleReadListAvOpenhomeOrgPlaylist1

SyncSimpleReadListAvOpenhomeOrgPlaylist1::SyncSimpleReadListAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, Brh& aTrackList)
    : iService(aProxy)
    , iTrackList(aTrackList)
{
}

void SyncSimpleReadListAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSimpleReadList(aAsync, iTrackList);
}

// SyncReadListAvOpenhomeOrgPlaylist1

SyncReadListAvOpenhomeOrgPlaylist1::SyncReadListAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, Brh& aTrackList)
    : iService(aProxy)
    , iTrackList(aTrackList)
{
}

void SyncReadListAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndReadList(aAsync, iTrackList);
}

// SyncInsertAvOpenhomeOrgPlaylist1

SyncInsertAvOpenhomeOrgPlaylist1::SyncInsertAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TUint& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncInsertAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewId);
}

// SyncBatchInsertAvOpenhomeOrgPlaylist1

SyncBatchInsertAvOpenhomeOrgPlaylist1::SyncBatchInsertAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TUint& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncBatchInsertAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndBatchInsert(aAsync, iNewId);
}

// SyncDeleteIdAvOpenhomeOrgPlaylist1

SyncDeleteIdAvOpenhomeOrgPlaylist1::SyncDeleteIdAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncDeleteIdAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeleteId(aAsync);
}

// SyncDeleteAllAvOpenhomeOrgPlaylist1

SyncDeleteAllAvOpenhomeOrgPlaylist1::SyncDeleteAllAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy)
    : iService(aProxy)
{
}

void SyncDeleteAllAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeleteAll(aAsync);
}

// SyncTracksMaxAvOpenhomeOrgPlaylist1

SyncTracksMaxAvOpenhomeOrgPlaylist1::SyncTracksMaxAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTracksMaxAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTracksMax(aAsync, iValue);
}

// SyncIdArrayAvOpenhomeOrgPlaylist1

SyncIdArrayAvOpenhomeOrgPlaylist1::SyncIdArrayAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TUint& aToken, Brh& aArray)
    : iService(aProxy)
    , iToken(aToken)
    , iArray(aArray)
{
}

void SyncIdArrayAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndIdArray(aAsync, iToken, iArray);
}

// SyncIdArrayChangedAvOpenhomeOrgPlaylist1

SyncIdArrayChangedAvOpenhomeOrgPlaylist1::SyncIdArrayChangedAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncIdArrayChangedAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndIdArrayChanged(aAsync, iValue);
}

// SyncProtocolInfoAvOpenhomeOrgPlaylist1

SyncProtocolInfoAvOpenhomeOrgPlaylist1::SyncProtocolInfoAvOpenhomeOrgPlaylist1(CpProxyAvOpenhomeOrgPlaylist1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncProtocolInfoAvOpenhomeOrgPlaylist1::CompleteRequest(IAsync& aAsync)
{
    iService.EndProtocolInfo(aAsync, iValue);
}


// CpProxyAvOpenhomeOrgPlaylist1

CpProxyAvOpenhomeOrgPlaylist1::CpProxyAvOpenhomeOrgPlaylist1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Playlist", 1, aDevice.Device())
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

    iActionSimpleReadList = new Action("SimpleReadList");
    param = new OpenHome::Net::ParameterString("IdList");
    iActionSimpleReadList->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TrackList");
    iActionSimpleReadList->AddOutputParameter(param);

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

    iActionBatchInsert = new Action("BatchInsert");
    param = new OpenHome::Net::ParameterUint("AfterId");
    iActionBatchInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("SongList");
    iActionBatchInsert->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("NewId");
    iActionBatchInsert->AddOutputParameter(param);

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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylist1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylist1::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylist1::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylist1::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylist1::IdArrayPropertyChanged);
    iIdArray = new PropertyBinary("IdArray", functor);
    AddProperty(iIdArray);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylist1::TracksMaxPropertyChanged);
    iTracksMax = new PropertyUint("TracksMax", functor);
    AddProperty(iTracksMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylist1::ProtocolInfoPropertyChanged);
    iProtocolInfo = new PropertyString("ProtocolInfo", functor);
    AddProperty(iProtocolInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylist1::AutoPlayPropertyChanged);
    iAutoPlay = new PropertyBool("AutoPlay", functor);
    AddProperty(iAutoPlay);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylist1::QobuzTracksPropertyChanged);
    iQobuzTracks = new PropertyString("QobuzTracks", functor);
    AddProperty(iQobuzTracks);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgPlaylist1::TuneInUrlPropertyChanged);
    iTuneInUrl = new PropertyString("TuneInUrl", functor);
    AddProperty(iTuneInUrl);
}

CpProxyAvOpenhomeOrgPlaylist1::~CpProxyAvOpenhomeOrgPlaylist1()
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
    delete iActionSimpleReadList;
    delete iActionReadList;
    delete iActionInsert;
    delete iActionBatchInsert;
    delete iActionDeleteId;
    delete iActionDeleteAll;
    delete iActionTracksMax;
    delete iActionIdArray;
    delete iActionIdArrayChanged;
    delete iActionProtocolInfo;
}

void CpProxyAvOpenhomeOrgPlaylist1::SyncPlay()
{
    SyncPlayAvOpenhomeOrgPlaylist1 sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncPause()
{
    SyncPauseAvOpenhomeOrgPlaylist1 sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncStop()
{
    SyncStopAvOpenhomeOrgPlaylist1 sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncNext()
{
    SyncNextAvOpenhomeOrgPlaylist1 sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgPlaylist1 sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncSetRepeat(TBool aValue)
{
    SyncSetRepeatAvOpenhomeOrgPlaylist1 sync(*this);
    BeginSetRepeat(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginSetRepeat(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetRepeat, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeat->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndSetRepeat(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncRepeat(TBool& aValue)
{
    SyncRepeatAvOpenhomeOrgPlaylist1 sync(*this, aValue);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndRepeat(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncSetShuffle(TBool aValue)
{
    SyncSetShuffleAvOpenhomeOrgPlaylist1 sync(*this);
    BeginSetShuffle(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginSetShuffle(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetShuffle, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetShuffle->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndSetShuffle(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncShuffle(TBool& aValue)
{
    SyncShuffleAvOpenhomeOrgPlaylist1 sync(*this, aValue);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndShuffle(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgPlaylist1 sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncSeekSecondRelative(TInt aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgPlaylist1 sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncSeekId(TUint aValue)
{
    SyncSeekIdAvOpenhomeOrgPlaylist1 sync(*this);
    BeginSeekId(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginSeekId(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndSeekId(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncSeekIndex(TUint aValue)
{
    SyncSeekIndexAvOpenhomeOrgPlaylist1 sync(*this);
    BeginSeekIndex(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginSeekIndex(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndSeekIndex(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgPlaylist1 sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndTransportState(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncId(TUint& aValue)
{
    SyncIdAvOpenhomeOrgPlaylist1 sync(*this, aValue);
    BeginId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndId(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncRead(TUint aId, Brh& aUri, Brh& aMetadata)
{
    SyncReadAvOpenhomeOrgPlaylist1 sync(*this, aUri, aMetadata);
    BeginRead(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginRead(TUint aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRead, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionRead->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRead->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndRead(IAsync& aAsync, Brh& aUri, Brh& aMetadata)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncSimpleReadList(const Brx& aIdList, Brh& aTrackList)
{
    SyncSimpleReadListAvOpenhomeOrgPlaylist1 sync(*this, aTrackList);
    BeginSimpleReadList(aIdList, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginSimpleReadList(const Brx& aIdList, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSimpleReadList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSimpleReadList->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aIdList));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSimpleReadList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndSimpleReadList(IAsync& aAsync, Brh& aTrackList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SimpleReadList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aTrackList);
}

void CpProxyAvOpenhomeOrgPlaylist1::SyncReadList(const Brx& aIdList, Brh& aTrackList)
{
    SyncReadListAvOpenhomeOrgPlaylist1 sync(*this, aTrackList);
    BeginReadList(aIdList, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginReadList(const Brx& aIdList, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReadList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReadList->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aIdList));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReadList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndReadList(IAsync& aAsync, Brh& aTrackList)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, TUint& aNewId)
{
    SyncInsertAvOpenhomeOrgPlaylist1 sync(*this, aNewId);
    BeginInsert(aAfterId, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginInsert(TUint aAfterId, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionInsert, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInsert->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aAfterId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInsert->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndInsert(IAsync& aAsync, TUint& aNewId)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncBatchInsert(TUint aAfterId, const Brx& aSongList, TUint& aNewId)
{
    SyncBatchInsertAvOpenhomeOrgPlaylist1 sync(*this, aNewId);
    BeginBatchInsert(aAfterId, aSongList, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginBatchInsert(TUint aAfterId, const Brx& aSongList, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBatchInsert, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionBatchInsert->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aAfterId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aSongList));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBatchInsert->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndBatchInsert(IAsync& aAsync, TUint& aNewId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BatchInsert"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aNewId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgPlaylist1::SyncDeleteId(TUint aValue)
{
    SyncDeleteIdAvOpenhomeOrgPlaylist1 sync(*this);
    BeginDeleteId(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginDeleteId(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeleteId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDeleteId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndDeleteId(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncDeleteAll()
{
    SyncDeleteAllAvOpenhomeOrgPlaylist1 sync(*this);
    BeginDeleteAll(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginDeleteAll(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeleteAll, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndDeleteAll(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncTracksMax(TUint& aValue)
{
    SyncTracksMaxAvOpenhomeOrgPlaylist1 sync(*this, aValue);
    BeginTracksMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginTracksMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTracksMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTracksMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndTracksMax(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncIdArray(TUint& aToken, Brh& aArray)
{
    SyncIdArrayAvOpenhomeOrgPlaylist1 sync(*this, aToken, aArray);
    BeginIdArray(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginIdArray(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIdArray, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIdArray->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndIdArray(IAsync& aAsync, TUint& aToken, Brh& aArray)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncIdArrayChanged(TUint aToken, TBool& aValue)
{
    SyncIdArrayChangedAvOpenhomeOrgPlaylist1 sync(*this, aValue);
    BeginIdArrayChanged(aToken, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginIdArrayChanged(TUint aToken, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIdArrayChanged, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionIdArrayChanged->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aToken));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIdArrayChanged->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndIdArrayChanged(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgPlaylist1::SyncProtocolInfo(Brh& aValue)
{
    SyncProtocolInfoAvOpenhomeOrgPlaylist1 sync(*this, aValue);
    BeginProtocolInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgPlaylist1::BeginProtocolInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionProtocolInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProtocolInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgPlaylist1::EndProtocolInfo(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iShuffleChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyIdArrayChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdArrayChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyTracksMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTracksMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyProtocolInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProtocolInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyAutoPlayChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAutoPlayChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyQobuzTracksChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iQobuzTracksChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyTuneInUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTuneInUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgPlaylist1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgPlaylist1::PropertyRepeat(TBool& aRepeat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgPlaylist1::PropertyShuffle(TBool& aShuffle) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgPlaylist1::PropertyId(TUint& aId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgPlaylist1::PropertyIdArray(Brh& aIdArray) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIdArray.Set(iIdArray->Value());
}

void CpProxyAvOpenhomeOrgPlaylist1::PropertyTracksMax(TUint& aTracksMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTracksMax = iTracksMax->Value();
}

void CpProxyAvOpenhomeOrgPlaylist1::PropertyProtocolInfo(Brhz& aProtocolInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProtocolInfo.Set(iProtocolInfo->Value());
}

void CpProxyAvOpenhomeOrgPlaylist1::PropertyAutoPlay(TBool& aAutoPlay) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAutoPlay = iAutoPlay->Value();
}

void CpProxyAvOpenhomeOrgPlaylist1::PropertyQobuzTracks(Brhz& aQobuzTracks) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aQobuzTracks.Set(iQobuzTracks->Value());
}

void CpProxyAvOpenhomeOrgPlaylist1::PropertyTuneInUrl(Brhz& aTuneInUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTuneInUrl.Set(iTuneInUrl->Value());
}

void CpProxyAvOpenhomeOrgPlaylist1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgPlaylist1::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgPlaylist1::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}

void CpProxyAvOpenhomeOrgPlaylist1::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}

void CpProxyAvOpenhomeOrgPlaylist1::IdArrayPropertyChanged()
{
    ReportEvent(iIdArrayChanged);
}

void CpProxyAvOpenhomeOrgPlaylist1::TracksMaxPropertyChanged()
{
    ReportEvent(iTracksMaxChanged);
}

void CpProxyAvOpenhomeOrgPlaylist1::ProtocolInfoPropertyChanged()
{
    ReportEvent(iProtocolInfoChanged);
}

void CpProxyAvOpenhomeOrgPlaylist1::AutoPlayPropertyChanged()
{
    ReportEvent(iAutoPlayChanged);
}

void CpProxyAvOpenhomeOrgPlaylist1::QobuzTracksPropertyChanged()
{
    ReportEvent(iQobuzTracksChanged);
}

void CpProxyAvOpenhomeOrgPlaylist1::TuneInUrlPropertyChanged()
{
    ReportEvent(iTuneInUrlChanged);
}


void CpProxyAvOpenhomeOrgPlaylist1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgPlaylist1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgPlaylist1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgPlaylist1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgPlaylist1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgPlaylist1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgPlaylist1::Version() const
{
  return iCpProxy.Version();
}


