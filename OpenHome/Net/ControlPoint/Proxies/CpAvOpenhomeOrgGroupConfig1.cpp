#include "CpAvOpenhomeOrgGroupConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncSetGroupModeAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncSetGroupModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupModeAvOpenhomeOrgGroupConfig1() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
};

SyncSetGroupModeAvOpenhomeOrgGroupConfig1::SyncSetGroupModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupModeAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupMode(aAsync);
}


class SyncGetGroupModeAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncGetGroupModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupModeAvOpenhomeOrgGroupConfig1() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
    Brh& iGroupMode;
    Brh& iGroupID;
    Brh& iGroupName;
};

SyncGetGroupModeAvOpenhomeOrgGroupConfig1::SyncGetGroupModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName)
    : iService(aProxy)
    , iGroupMode(aGroupMode)
    , iGroupID(aGroupID)
    , iGroupName(aGroupName)
{
}

void SyncGetGroupModeAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupMode(aAsync, iGroupMode, iGroupID, iGroupName);
}


class SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
};

SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1::SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupVolume(aAsync);
}


class SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, TUint& aGroupVolume);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
    TUint& iGroupVolume;
};

SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1::SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, TUint& aGroupVolume)
    : iService(aProxy)
    , iGroupVolume(aGroupVolume)
{
}

void SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupVolume(aAsync, iGroupVolume);
}


class SyncSetGroupMuteAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncSetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupMuteAvOpenhomeOrgGroupConfig1() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
};

SyncSetGroupMuteAvOpenhomeOrgGroupConfig1::SyncSetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupMuteAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupMute(aAsync);
}


class SyncGetGroupMuteAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncGetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, TBool& aGroupMute);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupMuteAvOpenhomeOrgGroupConfig1() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
    TBool& iGroupMute;
};

SyncGetGroupMuteAvOpenhomeOrgGroupConfig1::SyncGetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, TBool& aGroupMute)
    : iService(aProxy)
    , iGroupMute(aGroupMute)
{
}

void SyncGetGroupMuteAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupMute(aAsync, iGroupMute);
}


class SyncGetGroupStatusAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncGetGroupStatusAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, Brh& aGroupStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupStatusAvOpenhomeOrgGroupConfig1() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
    Brh& iGroupStatus;
};

SyncGetGroupStatusAvOpenhomeOrgGroupConfig1::SyncGetGroupStatusAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, Brh& aGroupStatus)
    : iService(aProxy)
    , iGroupStatus(aGroupStatus)
{
}

void SyncGetGroupStatusAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupStatus(aAsync, iGroupStatus);
}


class SyncSetGroupStatusAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncSetGroupStatusAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupStatusAvOpenhomeOrgGroupConfig1() {}
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
};

SyncSetGroupStatusAvOpenhomeOrgGroupConfig1::SyncSetGroupStatusAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupStatusAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupStatus(aAsync);
}


CpProxyAvOpenhomeOrgGroupConfig1::CpProxyAvOpenhomeOrgGroupConfig1(CpDevice& aDevice)
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

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1::GroupModePropertyChanged);
    iGroupMode = new PropertyString("GroupMode", functor);
    AddProperty(iGroupMode);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1::GroupNamePropertyChanged);
    iGroupName = new PropertyString("GroupName", functor);
    AddProperty(iGroupName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1::GroupIDPropertyChanged);
    iGroupID = new PropertyString("GroupID", functor);
    AddProperty(iGroupID);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1::GroupVolumePropertyChanged);
    iGroupVolume = new PropertyUint("GroupVolume", functor);
    AddProperty(iGroupVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1::GroupMutePropertyChanged);
    iGroupMute = new PropertyBool("GroupMute", functor);
    AddProperty(iGroupMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1::GroupStatusPropertyChanged);
    iGroupStatus = new PropertyString("GroupStatus", functor);
    AddProperty(iGroupStatus);
}

CpProxyAvOpenhomeOrgGroupConfig1::~CpProxyAvOpenhomeOrgGroupConfig1()
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
}

void CpProxyAvOpenhomeOrgGroupConfig1::SyncSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName)
{
    SyncSetGroupModeAvOpenhomeOrgGroupConfig1 sync(*this);
    BeginSetGroupMode(aGroupMode, aGroupID, aGroupName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1::BeginSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetGroupMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupMode));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupName));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1::EndSetGroupMode(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgGroupConfig1::SyncGetGroupMode(Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName)
{
    SyncGetGroupModeAvOpenhomeOrgGroupConfig1 sync(*this, aGroupMode, aGroupID, aGroupName);
    BeginGetGroupMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1::BeginGetGroupMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetGroupMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1::EndGetGroupMode(IAsync& aAsync, Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aGroupMode);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aGroupID);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aGroupName);
}

void CpProxyAvOpenhomeOrgGroupConfig1::SyncSetGroupVolume(TUint aGroupVolume)
{
    SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1 sync(*this);
    BeginSetGroupVolume(aGroupVolume, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1::BeginSetGroupVolume(TUint aGroupVolume, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetGroupVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aGroupVolume));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1::EndSetGroupVolume(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgGroupConfig1::SyncGetGroupVolume(TUint& aGroupVolume)
{
    SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1 sync(*this, aGroupVolume);
    BeginGetGroupVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1::BeginGetGroupVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetGroupVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1::EndGetGroupVolume(IAsync& aAsync, TUint& aGroupVolume)
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

void CpProxyAvOpenhomeOrgGroupConfig1::SyncSetGroupMute(TBool aGroupMute)
{
    SyncSetGroupMuteAvOpenhomeOrgGroupConfig1 sync(*this);
    BeginSetGroupMute(aGroupMute, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1::BeginSetGroupMute(TBool aGroupMute, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetGroupMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aGroupMute));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1::EndSetGroupMute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgGroupConfig1::SyncGetGroupMute(TBool& aGroupMute)
{
    SyncGetGroupMuteAvOpenhomeOrgGroupConfig1 sync(*this, aGroupMute);
    BeginGetGroupMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1::BeginGetGroupMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetGroupMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1::EndGetGroupMute(IAsync& aAsync, TBool& aGroupMute)
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

void CpProxyAvOpenhomeOrgGroupConfig1::SyncGetGroupStatus(Brh& aGroupStatus)
{
    SyncGetGroupStatusAvOpenhomeOrgGroupConfig1 sync(*this, aGroupStatus);
    BeginGetGroupStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1::BeginGetGroupStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionGetGroupStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1::EndGetGroupStatus(IAsync& aAsync, Brh& aGroupStatus)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aGroupStatus);
}

void CpProxyAvOpenhomeOrgGroupConfig1::SyncSetGroupStatus(const Brx& aGroupStatus)
{
    SyncSetGroupStatusAvOpenhomeOrgGroupConfig1 sync(*this);
    BeginSetGroupStatus(aGroupStatus, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1::BeginSetGroupStatus(const Brx& aGroupStatus, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSetGroupStatus, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupStatus->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupStatus));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1::EndSetGroupStatus(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupModeChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupModeChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupNameChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupNameChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupIDChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupIDChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupVolumeChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupVolumeChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupMuteChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupMuteChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupStatusChanged(Functor& aFunctor)
{
    iLock->Wait();
    iGroupStatusChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupMode(Brhz& aGroupMode) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aGroupMode.Set(iGroupMode->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupName(Brhz& aGroupName) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aGroupName.Set(iGroupName->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupID(Brhz& aGroupID) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aGroupID.Set(iGroupID->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupVolume(TUint& aGroupVolume) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aGroupVolume = iGroupVolume->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupMute(TBool& aGroupMute) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aGroupMute = iGroupMute->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupStatus(Brhz& aGroupStatus) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    aGroupStatus.Set(iGroupStatus->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1::GroupModePropertyChanged()
{
    ReportEvent(iGroupModeChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1::GroupNamePropertyChanged()
{
    ReportEvent(iGroupNameChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1::GroupIDPropertyChanged()
{
    ReportEvent(iGroupIDChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1::GroupVolumePropertyChanged()
{
    ReportEvent(iGroupVolumeChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1::GroupMutePropertyChanged()
{
    ReportEvent(iGroupMuteChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1::GroupStatusPropertyChanged()
{
    ReportEvent(iGroupStatusChanged);
}

