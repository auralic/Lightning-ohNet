#include "CpAvOpenhomeOrgGroupConfig1.h"
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


class SyncSetGroupModeAvOpenhomeOrgGroupConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetGroupModeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupModeAvOpenhomeOrgGroupConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1Cpp& iService;
};

SyncSetGroupModeAvOpenhomeOrgGroupConfig1Cpp::SyncSetGroupModeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupModeAvOpenhomeOrgGroupConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupMode(aAsync);
}


class SyncGetGroupModeAvOpenhomeOrgGroupConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetGroupModeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy, std::string& aGroupMode, std::string& aGroupID, std::string& aGroupName);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupModeAvOpenhomeOrgGroupConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1Cpp& iService;
    std::string& iGroupMode;
    std::string& iGroupID;
    std::string& iGroupName;
};

SyncGetGroupModeAvOpenhomeOrgGroupConfig1Cpp::SyncGetGroupModeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy, std::string& aGroupMode, std::string& aGroupID, std::string& aGroupName)
    : iService(aProxy)
    , iGroupMode(aGroupMode)
    , iGroupID(aGroupID)
    , iGroupName(aGroupName)
{
}

void SyncGetGroupModeAvOpenhomeOrgGroupConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupMode(aAsync, iGroupMode, iGroupID, iGroupName);
}


class SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1Cpp& iService;
};

SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp::SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupVolume(aAsync);
}


class SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy, uint32_t& aGroupVolume);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1Cpp& iService;
    uint32_t& iGroupVolume;
};

SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp::SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy, uint32_t& aGroupVolume)
    : iService(aProxy)
    , iGroupVolume(aGroupVolume)
{
}

void SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupVolume(aAsync, iGroupVolume);
}


class SyncSetGroupMuteAvOpenhomeOrgGroupConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetGroupMuteAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupMuteAvOpenhomeOrgGroupConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1Cpp& iService;
};

SyncSetGroupMuteAvOpenhomeOrgGroupConfig1Cpp::SyncSetGroupMuteAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupMuteAvOpenhomeOrgGroupConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupMute(aAsync);
}


class SyncGetGroupMuteAvOpenhomeOrgGroupConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetGroupMuteAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy, bool& aGroupMute);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupMuteAvOpenhomeOrgGroupConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1Cpp& iService;
    bool& iGroupMute;
};

SyncGetGroupMuteAvOpenhomeOrgGroupConfig1Cpp::SyncGetGroupMuteAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy, bool& aGroupMute)
    : iService(aProxy)
    , iGroupMute(aGroupMute)
{
}

void SyncGetGroupMuteAvOpenhomeOrgGroupConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupMute(aAsync, iGroupMute);
}


class SyncGetGroupStatusAvOpenhomeOrgGroupConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetGroupStatusAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy, std::string& aGroupStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupStatusAvOpenhomeOrgGroupConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1Cpp& iService;
    std::string& iGroupStatus;
};

SyncGetGroupStatusAvOpenhomeOrgGroupConfig1Cpp::SyncGetGroupStatusAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy, std::string& aGroupStatus)
    : iService(aProxy)
    , iGroupStatus(aGroupStatus)
{
}

void SyncGetGroupStatusAvOpenhomeOrgGroupConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupStatus(aAsync, iGroupStatus);
}


class SyncSetGroupStatusAvOpenhomeOrgGroupConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetGroupStatusAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupStatusAvOpenhomeOrgGroupConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1Cpp& iService;
};

SyncSetGroupStatusAvOpenhomeOrgGroupConfig1Cpp::SyncSetGroupStatusAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupStatusAvOpenhomeOrgGroupConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupStatus(aAsync);
}


class SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp : public SyncProxyAction
{
public:
    SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy, bool& aBitPerfectMode);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1Cpp& iService;
    bool& iBitPerfectMode;
};

SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp::SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy, bool& aBitPerfectMode)
    : iService(aProxy)
    , iBitPerfectMode(aBitPerfectMode)
{
}

void SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetBitPerfectMode(aAsync, iBitPerfectMode);
}


class SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp : public SyncProxyAction
{
public:
    SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1Cpp& iService;
};

SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp::SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp(CpProxyAvOpenhomeOrgGroupConfig1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBitPerfectMode(aAsync);
}


CpProxyAvOpenhomeOrgGroupConfig1Cpp::CpProxyAvOpenhomeOrgGroupConfig1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("av-openhome-org", "GroupConfig", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionSetGroupMode = new Action("SetGroupMode");
    index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Master";
    allowedValues[index++] = (TChar*)"Slave";
    allowedValues[index++] = (TChar*)"None";
    param = new OpenHome::Net::ParameterString("GroupMode", allowedValues, 3);
    iActionSetGroupMode->AddInputParameter(param);
    delete[] allowedValues;
    param = new OpenHome::Net::ParameterString("GroupID");
    iActionSetGroupMode->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("GroupName");
    iActionSetGroupMode->AddInputParameter(param);

    iActionGetGroupMode = new Action("GetGroupMode");
    index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Master";
    allowedValues[index++] = (TChar*)"Slave";
    allowedValues[index++] = (TChar*)"None";
    param = new OpenHome::Net::ParameterString("GroupMode", allowedValues, 3);
    iActionGetGroupMode->AddOutputParameter(param);
    delete[] allowedValues;
    param = new OpenHome::Net::ParameterString("GroupID");
    iActionGetGroupMode->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("GroupName");
    iActionGetGroupMode->AddOutputParameter(param);

    iActionSetGroupVolume = new Action("SetGroupVolume");
    param = new OpenHome::Net::ParameterUint("GroupVolume");
    iActionSetGroupVolume->AddInputParameter(param);

    iActionGetGroupVolume = new Action("GetGroupVolume");
    param = new OpenHome::Net::ParameterUint("GroupVolume");
    iActionGetGroupVolume->AddOutputParameter(param);

    iActionSetGroupMute = new Action("SetGroupMute");
    param = new OpenHome::Net::ParameterBool("GroupMute");
    iActionSetGroupMute->AddInputParameter(param);

    iActionGetGroupMute = new Action("GetGroupMute");
    param = new OpenHome::Net::ParameterBool("GroupMute");
    iActionGetGroupMute->AddOutputParameter(param);

    iActionGetGroupStatus = new Action("GetGroupStatus");
    param = new OpenHome::Net::ParameterString("GroupStatus");
    iActionGetGroupStatus->AddOutputParameter(param);

    iActionSetGroupStatus = new Action("SetGroupStatus");
    param = new OpenHome::Net::ParameterString("GroupStatus");
    iActionSetGroupStatus->AddInputParameter(param);

    iActionGetBitPerfectMode = new Action("GetBitPerfectMode");
    param = new OpenHome::Net::ParameterBool("BitPerfectMode");
    iActionGetBitPerfectMode->AddOutputParameter(param);

    iActionSetBitPerfectMode = new Action("SetBitPerfectMode");
    param = new OpenHome::Net::ParameterBool("BitPerfectMode");
    iActionSetBitPerfectMode->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupModePropertyChanged);
    iGroupMode = new PropertyString("GroupMode", functor);
    AddProperty(iGroupMode);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupNamePropertyChanged);
    iGroupName = new PropertyString("GroupName", functor);
    AddProperty(iGroupName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupIDPropertyChanged);
    iGroupID = new PropertyString("GroupID", functor);
    AddProperty(iGroupID);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupVolumePropertyChanged);
    iGroupVolume = new PropertyUint("GroupVolume", functor);
    AddProperty(iGroupVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupMutePropertyChanged);
    iGroupMute = new PropertyBool("GroupMute", functor);
    AddProperty(iGroupMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupStatusPropertyChanged);
    iGroupStatus = new PropertyString("GroupStatus", functor);
    AddProperty(iGroupStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1Cpp::BitPerfectModePropertyChanged);
    iBitPerfectMode = new PropertyBool("BitPerfectMode", functor);
    AddProperty(iBitPerfectMode);
}

CpProxyAvOpenhomeOrgGroupConfig1Cpp::~CpProxyAvOpenhomeOrgGroupConfig1Cpp()
{
    DestroyService();
    delete iActionSetGroupMode;
    delete iActionGetGroupMode;
    delete iActionSetGroupVolume;
    delete iActionGetGroupVolume;
    delete iActionSetGroupMute;
    delete iActionGetGroupMute;
    delete iActionGetGroupStatus;
    delete iActionSetGroupStatus;
    delete iActionGetBitPerfectMode;
    delete iActionSetBitPerfectMode;
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SyncSetGroupMode(const std::string& aGroupMode, const std::string& aGroupID, const std::string& aGroupName)
{
    SyncSetGroupModeAvOpenhomeOrgGroupConfig1Cpp sync(*this);
    BeginSetGroupMode(aGroupMode, aGroupID, aGroupName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::BeginSetGroupMode(const std::string& aGroupMode, const std::string& aGroupID, const std::string& aGroupName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetGroupMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupMode->InputParameters();
    {
        Brn buf((const TByte*)aGroupMode.c_str(), (TUint)aGroupMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aGroupID.c_str(), (TUint)aGroupID.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aGroupName.c_str(), (TUint)aGroupName.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::EndSetGroupMode(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetGroupMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SyncGetGroupMode(std::string& aGroupMode, std::string& aGroupID, std::string& aGroupName)
{
    SyncGetGroupModeAvOpenhomeOrgGroupConfig1Cpp sync(*this, aGroupMode, aGroupID, aGroupName);
    BeginGetGroupMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::BeginGetGroupMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetGroupMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::EndGetGroupMode(IAsync& aAsync, std::string& aGroupMode, std::string& aGroupID, std::string& aGroupName)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetGroupMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aGroupMode.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aGroupID.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aGroupName.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SyncSetGroupVolume(uint32_t aGroupVolume)
{
    SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp sync(*this);
    BeginSetGroupVolume(aGroupVolume, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::BeginSetGroupVolume(uint32_t aGroupVolume, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetGroupVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aGroupVolume));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::EndSetGroupVolume(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetGroupVolume"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SyncGetGroupVolume(uint32_t& aGroupVolume)
{
    SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1Cpp sync(*this, aGroupVolume);
    BeginGetGroupVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::BeginGetGroupVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetGroupVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::EndGetGroupVolume(IAsync& aAsync, uint32_t& aGroupVolume)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetGroupVolume"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aGroupVolume = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SyncSetGroupMute(bool aGroupMute)
{
    SyncSetGroupMuteAvOpenhomeOrgGroupConfig1Cpp sync(*this);
    BeginSetGroupMute(aGroupMute, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::BeginSetGroupMute(bool aGroupMute, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetGroupMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aGroupMute));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::EndSetGroupMute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetGroupMute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SyncGetGroupMute(bool& aGroupMute)
{
    SyncGetGroupMuteAvOpenhomeOrgGroupConfig1Cpp sync(*this, aGroupMute);
    BeginGetGroupMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::BeginGetGroupMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetGroupMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::EndGetGroupMute(IAsync& aAsync, bool& aGroupMute)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetGroupMute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aGroupMute = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SyncGetGroupStatus(std::string& aGroupStatus)
{
    SyncGetGroupStatusAvOpenhomeOrgGroupConfig1Cpp sync(*this, aGroupStatus);
    BeginGetGroupStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::BeginGetGroupStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetGroupStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::EndGetGroupStatus(IAsync& aAsync, std::string& aGroupStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetGroupStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aGroupStatus.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SyncSetGroupStatus(const std::string& aGroupStatus)
{
    SyncSetGroupStatusAvOpenhomeOrgGroupConfig1Cpp sync(*this);
    BeginSetGroupStatus(aGroupStatus, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::BeginSetGroupStatus(const std::string& aGroupStatus, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetGroupStatus, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupStatus->InputParameters();
    {
        Brn buf((const TByte*)aGroupStatus.c_str(), (TUint)aGroupStatus.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::EndSetGroupStatus(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetGroupStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SyncGetBitPerfectMode(bool& aBitPerfectMode)
{
    SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp sync(*this, aBitPerfectMode);
    BeginGetBitPerfectMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::BeginGetBitPerfectMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetBitPerfectMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetBitPerfectMode->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::EndGetBitPerfectMode(IAsync& aAsync, bool& aBitPerfectMode)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetBitPerfectMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aBitPerfectMode = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SyncSetBitPerfectMode(bool aBitPerfectMode)
{
    SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1Cpp sync(*this);
    BeginSetBitPerfectMode(aBitPerfectMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::BeginSetBitPerfectMode(bool aBitPerfectMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetBitPerfectMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBitPerfectMode->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aBitPerfectMode));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::EndSetBitPerfectMode(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetBitPerfectMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupModeChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupModeChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupNameChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupNameChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupIDChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupIDChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupVolumeChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupVolumeChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupMuteChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupMuteChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SetPropertyGroupStatusChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupStatusChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::SetPropertyBitPerfectModeChanged(Functor& aFunctor)
{
    iLock->Wait();
    iBitPerfectModeChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::PropertyGroupMode(std::string& aGroupMode) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iGroupMode->Value();
    aGroupMode.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::PropertyGroupName(std::string& aGroupName) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iGroupName->Value();
    aGroupName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::PropertyGroupID(std::string& aGroupID) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iGroupID->Value();
    aGroupID.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::PropertyGroupVolume(uint32_t& aGroupVolume) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aGroupVolume = iGroupVolume->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::PropertyGroupMute(bool& aGroupMute) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aGroupMute = iGroupMute->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::PropertyGroupStatus(std::string& aGroupStatus) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iGroupStatus->Value();
    aGroupStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::PropertyBitPerfectMode(bool& aBitPerfectMode) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aBitPerfectMode = iBitPerfectMode->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupModePropertyChanged()
{
    ReportEvent(iGroupModeChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupNamePropertyChanged()
{
    ReportEvent(iGroupNameChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupIDPropertyChanged()
{
    ReportEvent(iGroupIDChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupVolumePropertyChanged()
{
    ReportEvent(iGroupVolumeChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupMutePropertyChanged()
{
    ReportEvent(iGroupMuteChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::GroupStatusPropertyChanged()
{
    ReportEvent(iGroupStatusChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1Cpp::BitPerfectModePropertyChanged()
{
    ReportEvent(iBitPerfectModeChanged);
}

