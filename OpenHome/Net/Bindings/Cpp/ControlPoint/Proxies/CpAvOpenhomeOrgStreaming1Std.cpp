#include "CpAvOpenhomeOrgStreaming1.h"
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


class SyncPlayAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncPlayAvOpenhomeOrgStreaming1Cpp::SyncPlayAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncPauseAvOpenhomeOrgStreaming1Cpp::SyncPauseAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncStopAvOpenhomeOrgStreaming1Cpp::SyncStopAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncNextAvOpenhomeOrgStreaming1Cpp::SyncNextAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPreviousAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncPreviousAvOpenhomeOrgStreaming1Cpp::SyncPreviousAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncSetRepeatAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncSetRepeatAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRepeatAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncSetRepeatAvOpenhomeOrgStreaming1Cpp::SyncSetRepeatAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeat(aAsync);
}


class SyncRepeatAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRepeatAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
    bool& iValue;
};

SyncRepeatAvOpenhomeOrgStreaming1Cpp::SyncRepeatAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncRepeatAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iValue);
}


class SyncSetShuffleAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncSetShuffleAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetShuffleAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncSetShuffleAvOpenhomeOrgStreaming1Cpp::SyncSetShuffleAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetShuffleAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetShuffle(aAsync);
}


class SyncShuffleAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncShuffleAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
    bool& iValue;
};

SyncShuffleAvOpenhomeOrgStreaming1Cpp::SyncShuffleAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncShuffleAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iValue);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1Cpp::SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgStreaming1Cpp::SyncSeekSecondRelativeAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncSeekIdAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncSeekIdAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekIdAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncSeekIdAvOpenhomeOrgStreaming1Cpp::SyncSeekIdAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekIdAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekId(aAsync);
}


class SyncSeekIndexAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncSeekIndexAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekIndexAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncSeekIndexAvOpenhomeOrgStreaming1Cpp::SyncSeekIndexAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekIndexAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekIndex(aAsync);
}


class SyncTransportStateAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
    std::string& iValue;
};

SyncTransportStateAvOpenhomeOrgStreaming1Cpp::SyncTransportStateAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


class SyncIdAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncIdAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
    uint32_t& iValue;
};

SyncIdAvOpenhomeOrgStreaming1Cpp::SyncIdAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncIdAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndId(aAsync, iValue);
}


class SyncReadAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncReadAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, std::string& aUri, std::string& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
    std::string& iUri;
    std::string& iMetadata;
};

SyncReadAvOpenhomeOrgStreaming1Cpp::SyncReadAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, std::string& aUri, std::string& aMetadata)
    : iService(aProxy)
    , iUri(aUri)
    , iMetadata(aMetadata)
{
}

void SyncReadAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRead(aAsync, iUri, iMetadata);
}


class SyncReadListAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncReadListAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, std::string& aTrackList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadListAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
    std::string& iTrackList;
};

SyncReadListAvOpenhomeOrgStreaming1Cpp::SyncReadListAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, std::string& aTrackList)
    : iService(aProxy)
    , iTrackList(aTrackList)
{
}

void SyncReadListAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReadList(aAsync, iTrackList);
}


class SyncInsertAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncInsertAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, uint32_t& aNewId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInsertAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
    uint32_t& iNewId;
};

SyncInsertAvOpenhomeOrgStreaming1Cpp::SyncInsertAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, uint32_t& aNewId)
    : iService(aProxy)
    , iNewId(aNewId)
{
}

void SyncInsertAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndInsert(aAsync, iNewId);
}


class SyncDeleteIdAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncDeleteIdAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeleteIdAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncDeleteIdAvOpenhomeOrgStreaming1Cpp::SyncDeleteIdAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncDeleteIdAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeleteId(aAsync);
}


class SyncDeleteAllAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncDeleteAllAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeleteAllAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
};

SyncDeleteAllAvOpenhomeOrgStreaming1Cpp::SyncDeleteAllAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncDeleteAllAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeleteAll(aAsync);
}


class SyncTracksMaxAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncTracksMaxAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTracksMaxAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
    uint32_t& iValue;
};

SyncTracksMaxAvOpenhomeOrgStreaming1Cpp::SyncTracksMaxAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTracksMaxAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndTracksMax(aAsync, iValue);
}


class SyncIdArrayAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncIdArrayAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, uint32_t& aToken, std::string& aArray);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdArrayAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
    uint32_t& iToken;
    std::string& iArray;
};

SyncIdArrayAvOpenhomeOrgStreaming1Cpp::SyncIdArrayAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, uint32_t& aToken, std::string& aArray)
    : iService(aProxy)
    , iToken(aToken)
    , iArray(aArray)
{
}

void SyncIdArrayAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndIdArray(aAsync, iToken, iArray);
}


class SyncIdArrayChangedAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncIdArrayChangedAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdArrayChangedAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
    bool& iValue;
};

SyncIdArrayChangedAvOpenhomeOrgStreaming1Cpp::SyncIdArrayChangedAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncIdArrayChangedAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndIdArrayChanged(aAsync, iValue);
}


class SyncProtocolInfoAvOpenhomeOrgStreaming1Cpp : public SyncProxyAction
{
public:
    SyncProtocolInfoAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProtocolInfoAvOpenhomeOrgStreaming1Cpp() {}
private:
    CpProxyAvOpenhomeOrgStreaming1Cpp& iService;
    std::string& iValue;
};

SyncProtocolInfoAvOpenhomeOrgStreaming1Cpp::SyncProtocolInfoAvOpenhomeOrgStreaming1Cpp(CpProxyAvOpenhomeOrgStreaming1Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncProtocolInfoAvOpenhomeOrgStreaming1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndProtocolInfo(aAsync, iValue);
}


CpProxyAvOpenhomeOrgStreaming1Cpp::CpProxyAvOpenhomeOrgStreaming1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("av-openhome-org", "Streaming", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1Cpp::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1Cpp::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1Cpp::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1Cpp::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1Cpp::IdArrayPropertyChanged);
    iIdArray = new PropertyBinary("IdArray", functor);
    AddProperty(iIdArray);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1Cpp::TracksMaxPropertyChanged);
    iTracksMax = new PropertyUint("TracksMax", functor);
    AddProperty(iTracksMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgStreaming1Cpp::ProtocolInfoPropertyChanged);
    iProtocolInfo = new PropertyString("ProtocolInfo", functor);
    AddProperty(iProtocolInfo);
}

CpProxyAvOpenhomeOrgStreaming1Cpp::~CpProxyAvOpenhomeOrgStreaming1Cpp()
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncPlay()
{
    SyncPlayAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionPlay, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncPause()
{
    SyncPauseAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionPause, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncStop()
{
    SyncStopAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionStop, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncNext()
{
    SyncNextAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionNext, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionPrevious, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncSetRepeat(bool aValue)
{
    SyncSetRepeatAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginSetRepeat(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginSetRepeat(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetRepeat, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeat->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndSetRepeat(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncRepeat(bool& aValue)
{
    SyncRepeatAvOpenhomeOrgStreaming1Cpp sync(*this, aValue);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndRepeat(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncSetShuffle(bool aValue)
{
    SyncSetShuffleAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginSetShuffle(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginSetShuffle(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetShuffle, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetShuffle->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndSetShuffle(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncShuffle(bool& aValue)
{
    SyncShuffleAvOpenhomeOrgStreaming1Cpp sync(*this, aValue);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndShuffle(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncSeekSecondAbsolute(uint32_t aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginSeekSecondAbsolute(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncSeekSecondRelative(int32_t aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginSeekSecondRelative(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncSeekId(uint32_t aValue)
{
    SyncSeekIdAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginSeekId(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginSeekId(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSeekId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndSeekId(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncSeekIndex(uint32_t aValue)
{
    SyncSeekIndexAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginSeekIndex(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginSeekIndex(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSeekIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndSeekIndex(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncTransportState(std::string& aValue)
{
    SyncTransportStateAvOpenhomeOrgStreaming1Cpp sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndTransportState(IAsync& aAsync, std::string& aValue)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncId(uint32_t& aValue)
{
    SyncIdAvOpenhomeOrgStreaming1Cpp sync(*this, aValue);
    BeginId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndId(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncRead(uint32_t aId, std::string& aUri, std::string& aMetadata)
{
    SyncReadAvOpenhomeOrgStreaming1Cpp sync(*this, aUri, aMetadata);
    BeginRead(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginRead(uint32_t aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionRead, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionRead->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRead->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndRead(IAsync& aAsync, std::string& aUri, std::string& aMetadata)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUri.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aMetadata.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncReadList(const std::string& aIdList, std::string& aTrackList)
{
    SyncReadListAvOpenhomeOrgStreaming1Cpp sync(*this, aTrackList);
    BeginReadList(aIdList, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginReadList(const std::string& aIdList, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionReadList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReadList->InputParameters();
    {
        Brn buf((const TByte*)aIdList.c_str(), (TUint)aIdList.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReadList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndReadList(IAsync& aAsync, std::string& aTrackList)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aTrackList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncInsert(uint32_t aAfterId, const std::string& aUri, const std::string& aMetadata, uint32_t& aNewId)
{
    SyncInsertAvOpenhomeOrgStreaming1Cpp sync(*this, aNewId);
    BeginInsert(aAfterId, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginInsert(uint32_t aAfterId, const std::string& aUri, const std::string& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionInsert, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionInsert->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aAfterId));
    {
        Brn buf((const TByte*)aUri.c_str(), (TUint)aUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aMetadata.c_str(), (TUint)aMetadata.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInsert->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndInsert(IAsync& aAsync, uint32_t& aNewId)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncDeleteId(uint32_t aValue)
{
    SyncDeleteIdAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginDeleteId(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginDeleteId(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionDeleteId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDeleteId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndDeleteId(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncDeleteAll()
{
    SyncDeleteAllAvOpenhomeOrgStreaming1Cpp sync(*this);
    BeginDeleteAll(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginDeleteAll(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionDeleteAll, aFunctor);
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndDeleteAll(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncTracksMax(uint32_t& aValue)
{
    SyncTracksMaxAvOpenhomeOrgStreaming1Cpp sync(*this, aValue);
    BeginTracksMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginTracksMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionTracksMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTracksMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndTracksMax(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncIdArray(uint32_t& aToken, std::string& aArray)
{
    SyncIdArrayAvOpenhomeOrgStreaming1Cpp sync(*this, aToken, aArray);
    BeginIdArray(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginIdArray(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionIdArray, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIdArray->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndIdArray(IAsync& aAsync, uint32_t& aToken, std::string& aArray)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aArray.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncIdArrayChanged(uint32_t aToken, bool& aValue)
{
    SyncIdArrayChangedAvOpenhomeOrgStreaming1Cpp sync(*this, aValue);
    BeginIdArrayChanged(aToken, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginIdArrayChanged(uint32_t aToken, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionIdArrayChanged, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionIdArrayChanged->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aToken));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIdArrayChanged->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndIdArrayChanged(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgStreaming1Cpp::SyncProtocolInfo(std::string& aValue)
{
    SyncProtocolInfoAvOpenhomeOrgStreaming1Cpp sync(*this, aValue);
    BeginProtocolInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::BeginProtocolInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionProtocolInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProtocolInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::EndProtocolInfo(IAsync& aAsync, std::string& aValue)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock->Wait();
    iTransportStateChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iLock->Wait();
    iRepeatChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iLock->Wait();
    iShuffleChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::SetPropertyIdChanged(Functor& aFunctor)
{
    iLock->Wait();
    iIdChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::SetPropertyIdArrayChanged(Functor& aFunctor)
{
    iLock->Wait();
    iIdArrayChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::SetPropertyTracksMaxChanged(Functor& aFunctor)
{
    iLock->Wait();
    iTracksMaxChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::SetPropertyProtocolInfoChanged(Functor& aFunctor)
{
    iLock->Wait();
    iProtocolInfoChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::PropertyTransportState(std::string& aTransportState) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iTransportState->Value();
    aTransportState.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::PropertyRepeat(bool& aRepeat) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::PropertyShuffle(bool& aShuffle) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::PropertyId(uint32_t& aId) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::PropertyIdArray(std::string& aIdArray) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iIdArray->Value();
    aIdArray.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::PropertyTracksMax(uint32_t& aTracksMax) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aTracksMax = iTracksMax->Value();
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::PropertyProtocolInfo(std::string& aProtocolInfo) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iProtocolInfo->Value();
    aProtocolInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::IdArrayPropertyChanged()
{
    ReportEvent(iIdArrayChanged);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::TracksMaxPropertyChanged()
{
    ReportEvent(iTracksMaxChanged);
}

void CpProxyAvOpenhomeOrgStreaming1Cpp::ProtocolInfoPropertyChanged()
{
    ReportEvent(iProtocolInfoChanged);
}

