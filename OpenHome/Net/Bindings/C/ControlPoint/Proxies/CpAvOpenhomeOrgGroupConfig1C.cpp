#include "CpAvOpenhomeOrgGroupConfig1.h"
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

class CpProxyAvOpenhomeOrgGroupConfig1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgGroupConfig1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgGroupConfig1C();
    //CpProxyAvOpenhomeOrgGroupConfig1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgGroupConfig1*>(iProxy); }

    void SyncSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName);
    void BeginSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName, FunctorAsync& aFunctor);
    void EndSetGroupMode(IAsync& aAsync);

    void SyncGetGroupMode(Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName);
    void BeginGetGroupMode(FunctorAsync& aFunctor);
    void EndGetGroupMode(IAsync& aAsync, Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName);

    void SyncSetGroupVolume(TUint aGroupVolume);
    void BeginSetGroupVolume(TUint aGroupVolume, FunctorAsync& aFunctor);
    void EndSetGroupVolume(IAsync& aAsync);

    void SyncGetGroupVolume(TUint& aGroupVolume);
    void BeginGetGroupVolume(FunctorAsync& aFunctor);
    void EndGetGroupVolume(IAsync& aAsync, TUint& aGroupVolume);

    void SyncSetGroupMute(TBool aGroupMute);
    void BeginSetGroupMute(TBool aGroupMute, FunctorAsync& aFunctor);
    void EndSetGroupMute(IAsync& aAsync);

    void SyncGetGroupMute(TBool& aGroupMute);
    void BeginGetGroupMute(FunctorAsync& aFunctor);
    void EndGetGroupMute(IAsync& aAsync, TBool& aGroupMute);

    void SyncGetGroupStatus(Brh& aGroupStatus);
    void BeginGetGroupStatus(FunctorAsync& aFunctor);
    void EndGetGroupStatus(IAsync& aAsync, Brh& aGroupStatus);

    void SyncSetGroupStatus(const Brx& aGroupStatus);
    void BeginSetGroupStatus(const Brx& aGroupStatus, FunctorAsync& aFunctor);
    void EndSetGroupStatus(IAsync& aAsync);

    void SetPropertyGroupModeChanged(Functor& aFunctor);
    void SetPropertyGroupNameChanged(Functor& aFunctor);
    void SetPropertyGroupIDChanged(Functor& aFunctor);
    void SetPropertyGroupVolumeChanged(Functor& aFunctor);
    void SetPropertyGroupMuteChanged(Functor& aFunctor);
    void SetPropertyGroupStatusChanged(Functor& aFunctor);

    void PropertyGroupMode(Brhz& aGroupMode) const;
    void PropertyGroupName(Brhz& aGroupName) const;
    void PropertyGroupID(Brhz& aGroupID) const;
    void PropertyGroupVolume(TUint& aGroupVolume) const;
    void PropertyGroupMute(TBool& aGroupMute) const;
    void PropertyGroupStatus(Brhz& aGroupStatus) const;
private:
    void GroupModePropertyChanged();
    void GroupNamePropertyChanged();
    void GroupIDPropertyChanged();
    void GroupVolumePropertyChanged();
    void GroupMutePropertyChanged();
    void GroupStatusPropertyChanged();
private:
    Mutex iLock;
    Action* iActionSetGroupMode;
    Action* iActionGetGroupMode;
    Action* iActionSetGroupVolume;
    Action* iActionGetGroupVolume;
    Action* iActionSetGroupMute;
    Action* iActionGetGroupMute;
    Action* iActionGetGroupStatus;
    Action* iActionSetGroupStatus;
    PropertyString* iGroupMode;
    PropertyString* iGroupName;
    PropertyString* iGroupID;
    PropertyUint* iGroupVolume;
    PropertyBool* iGroupMute;
    PropertyString* iGroupStatus;
    Functor iGroupModeChanged;
    Functor iGroupNameChanged;
    Functor iGroupIDChanged;
    Functor iGroupVolumeChanged;
    Functor iGroupMuteChanged;
    Functor iGroupStatusChanged;
};


class SyncSetGroupModeAvOpenhomeOrgGroupConfig1C : public SyncProxyAction
{
public:
    SyncSetGroupModeAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupModeAvOpenhomeOrgGroupConfig1C() {};
private:
    CpProxyAvOpenhomeOrgGroupConfig1C& iService;
};

SyncSetGroupModeAvOpenhomeOrgGroupConfig1C::SyncSetGroupModeAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupModeAvOpenhomeOrgGroupConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupMode(aAsync);
}


class SyncGetGroupModeAvOpenhomeOrgGroupConfig1C : public SyncProxyAction
{
public:
    SyncGetGroupModeAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy, Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupModeAvOpenhomeOrgGroupConfig1C() {};
private:
    CpProxyAvOpenhomeOrgGroupConfig1C& iService;
    Brh& iGroupMode;
    Brh& iGroupID;
    Brh& iGroupName;
};

SyncGetGroupModeAvOpenhomeOrgGroupConfig1C::SyncGetGroupModeAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy, Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName)
    : iService(aProxy)
    , iGroupMode(aGroupMode)
    , iGroupID(aGroupID)
    , iGroupName(aGroupName)
{
}

void SyncGetGroupModeAvOpenhomeOrgGroupConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupMode(aAsync, iGroupMode, iGroupID, iGroupName);
}


class SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1C : public SyncProxyAction
{
public:
    SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1C() {};
private:
    CpProxyAvOpenhomeOrgGroupConfig1C& iService;
};

SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1C::SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupVolume(aAsync);
}


class SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1C : public SyncProxyAction
{
public:
    SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy, TUint& aGroupVolume);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1C() {};
private:
    CpProxyAvOpenhomeOrgGroupConfig1C& iService;
    TUint& iGroupVolume;
};

SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1C::SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy, TUint& aGroupVolume)
    : iService(aProxy)
    , iGroupVolume(aGroupVolume)
{
}

void SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupVolume(aAsync, iGroupVolume);
}


class SyncSetGroupMuteAvOpenhomeOrgGroupConfig1C : public SyncProxyAction
{
public:
    SyncSetGroupMuteAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupMuteAvOpenhomeOrgGroupConfig1C() {};
private:
    CpProxyAvOpenhomeOrgGroupConfig1C& iService;
};

SyncSetGroupMuteAvOpenhomeOrgGroupConfig1C::SyncSetGroupMuteAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupMuteAvOpenhomeOrgGroupConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupMute(aAsync);
}


class SyncGetGroupMuteAvOpenhomeOrgGroupConfig1C : public SyncProxyAction
{
public:
    SyncGetGroupMuteAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy, TBool& aGroupMute);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupMuteAvOpenhomeOrgGroupConfig1C() {};
private:
    CpProxyAvOpenhomeOrgGroupConfig1C& iService;
    TBool& iGroupMute;
};

SyncGetGroupMuteAvOpenhomeOrgGroupConfig1C::SyncGetGroupMuteAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy, TBool& aGroupMute)
    : iService(aProxy)
    , iGroupMute(aGroupMute)
{
}

void SyncGetGroupMuteAvOpenhomeOrgGroupConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupMute(aAsync, iGroupMute);
}


class SyncGetGroupStatusAvOpenhomeOrgGroupConfig1C : public SyncProxyAction
{
public:
    SyncGetGroupStatusAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy, Brh& aGroupStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetGroupStatusAvOpenhomeOrgGroupConfig1C() {};
private:
    CpProxyAvOpenhomeOrgGroupConfig1C& iService;
    Brh& iGroupStatus;
};

SyncGetGroupStatusAvOpenhomeOrgGroupConfig1C::SyncGetGroupStatusAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy, Brh& aGroupStatus)
    : iService(aProxy)
    , iGroupStatus(aGroupStatus)
{
}

void SyncGetGroupStatusAvOpenhomeOrgGroupConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupStatus(aAsync, iGroupStatus);
}


class SyncSetGroupStatusAvOpenhomeOrgGroupConfig1C : public SyncProxyAction
{
public:
    SyncSetGroupStatusAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetGroupStatusAvOpenhomeOrgGroupConfig1C() {};
private:
    CpProxyAvOpenhomeOrgGroupConfig1C& iService;
};

SyncSetGroupStatusAvOpenhomeOrgGroupConfig1C::SyncSetGroupStatusAvOpenhomeOrgGroupConfig1C(CpProxyAvOpenhomeOrgGroupConfig1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupStatusAvOpenhomeOrgGroupConfig1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupStatus(aAsync);
}

CpProxyAvOpenhomeOrgGroupConfig1C::CpProxyAvOpenhomeOrgGroupConfig1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "GroupConfig", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1C::GroupModePropertyChanged);
    iGroupMode = new PropertyString("GroupMode", functor);
    AddProperty(iGroupMode);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1C::GroupNamePropertyChanged);
    iGroupName = new PropertyString("GroupName", functor);
    AddProperty(iGroupName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1C::GroupIDPropertyChanged);
    iGroupID = new PropertyString("GroupID", functor);
    AddProperty(iGroupID);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1C::GroupVolumePropertyChanged);
    iGroupVolume = new PropertyUint("GroupVolume", functor);
    AddProperty(iGroupVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1C::GroupMutePropertyChanged);
    iGroupMute = new PropertyBool("GroupMute", functor);
    AddProperty(iGroupMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1C::GroupStatusPropertyChanged);
    iGroupStatus = new PropertyString("GroupStatus", functor);
    AddProperty(iGroupStatus);
}

CpProxyAvOpenhomeOrgGroupConfig1C::~CpProxyAvOpenhomeOrgGroupConfig1C()
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

void CpProxyAvOpenhomeOrgGroupConfig1C::SyncSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName)
{
    SyncSetGroupModeAvOpenhomeOrgGroupConfig1C sync(*this);
    BeginSetGroupMode(aGroupMode, aGroupID, aGroupName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::BeginSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetGroupMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupMode));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupName));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::EndSetGroupMode(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgGroupConfig1C::SyncGetGroupMode(Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName)
{
    SyncGetGroupModeAvOpenhomeOrgGroupConfig1C sync(*this, aGroupMode, aGroupID, aGroupName);
    BeginGetGroupMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::BeginGetGroupMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetGroupMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::EndGetGroupMode(IAsync& aAsync, Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName)
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

void CpProxyAvOpenhomeOrgGroupConfig1C::SyncSetGroupVolume(TUint aGroupVolume)
{
    SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1C sync(*this);
    BeginSetGroupVolume(aGroupVolume, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::BeginSetGroupVolume(TUint aGroupVolume, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetGroupVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aGroupVolume));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::EndSetGroupVolume(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgGroupConfig1C::SyncGetGroupVolume(TUint& aGroupVolume)
{
    SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1C sync(*this, aGroupVolume);
    BeginGetGroupVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::BeginGetGroupVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetGroupVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::EndGetGroupVolume(IAsync& aAsync, TUint& aGroupVolume)
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

void CpProxyAvOpenhomeOrgGroupConfig1C::SyncSetGroupMute(TBool aGroupMute)
{
    SyncSetGroupMuteAvOpenhomeOrgGroupConfig1C sync(*this);
    BeginSetGroupMute(aGroupMute, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::BeginSetGroupMute(TBool aGroupMute, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetGroupMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aGroupMute));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::EndSetGroupMute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgGroupConfig1C::SyncGetGroupMute(TBool& aGroupMute)
{
    SyncGetGroupMuteAvOpenhomeOrgGroupConfig1C sync(*this, aGroupMute);
    BeginGetGroupMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::BeginGetGroupMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetGroupMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::EndGetGroupMute(IAsync& aAsync, TBool& aGroupMute)
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

void CpProxyAvOpenhomeOrgGroupConfig1C::SyncGetGroupStatus(Brh& aGroupStatus)
{
    SyncGetGroupStatusAvOpenhomeOrgGroupConfig1C sync(*this, aGroupStatus);
    BeginGetGroupStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::BeginGetGroupStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetGroupStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::EndGetGroupStatus(IAsync& aAsync, Brh& aGroupStatus)
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

void CpProxyAvOpenhomeOrgGroupConfig1C::SyncSetGroupStatus(const Brx& aGroupStatus)
{
    SyncSetGroupStatusAvOpenhomeOrgGroupConfig1C sync(*this);
    BeginSetGroupStatus(aGroupStatus, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::BeginSetGroupStatus(const Brx& aGroupStatus, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetGroupStatus, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupStatus->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupStatus));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::EndSetGroupStatus(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgGroupConfig1C::SetPropertyGroupModeChanged(Functor& aFunctor)
{
    iLock.Wait();
    iGroupModeChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::SetPropertyGroupNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iGroupNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::SetPropertyGroupIDChanged(Functor& aFunctor)
{
    iLock.Wait();
    iGroupIDChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::SetPropertyGroupVolumeChanged(Functor& aFunctor)
{
    iLock.Wait();
    iGroupVolumeChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::SetPropertyGroupMuteChanged(Functor& aFunctor)
{
    iLock.Wait();
    iGroupMuteChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::SetPropertyGroupStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iGroupStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::PropertyGroupMode(Brhz& aGroupMode) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aGroupMode.Set(iGroupMode->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1C::PropertyGroupName(Brhz& aGroupName) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aGroupName.Set(iGroupName->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1C::PropertyGroupID(Brhz& aGroupID) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aGroupID.Set(iGroupID->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1C::PropertyGroupVolume(TUint& aGroupVolume) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aGroupVolume = iGroupVolume->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::PropertyGroupMute(TBool& aGroupMute) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aGroupMute = iGroupMute->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1C::PropertyGroupStatus(Brhz& aGroupStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aGroupStatus.Set(iGroupStatus->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1C::GroupModePropertyChanged()
{
    ReportEvent(iGroupModeChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::GroupNamePropertyChanged()
{
    ReportEvent(iGroupNameChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::GroupIDPropertyChanged()
{
    ReportEvent(iGroupIDChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::GroupVolumePropertyChanged()
{
    ReportEvent(iGroupVolumeChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::GroupMutePropertyChanged()
{
    ReportEvent(iGroupMuteChanged);
}

void CpProxyAvOpenhomeOrgGroupConfig1C::GroupStatusPropertyChanged()
{
    ReportEvent(iGroupStatusChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgGroupConfig1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgGroupConfig1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1SyncSetGroupMode(THandle aHandle, const char* aGroupMode, const char* aGroupID, const char* aGroupName)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aGroupMode(aGroupMode);
    Brh buf_aGroupID(aGroupID);
    Brh buf_aGroupName(aGroupName);
    int32_t err = 0;
    try {
        proxyC->SyncSetGroupMode(buf_aGroupMode, buf_aGroupID, buf_aGroupName);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1BeginSetGroupMode(THandle aHandle, const char* aGroupMode, const char* aGroupID, const char* aGroupName, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aGroupMode(aGroupMode);
    Brh buf_aGroupID(aGroupID);
    Brh buf_aGroupName(aGroupName);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetGroupMode(buf_aGroupMode, buf_aGroupID, buf_aGroupName, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1EndSetGroupMode(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetGroupMode(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1SyncGetGroupMode(THandle aHandle, char** aGroupMode, char** aGroupID, char** aGroupName)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aGroupMode;
    Brh buf_aGroupID;
    Brh buf_aGroupName;
    int32_t err = 0;
    try {
        proxyC->SyncGetGroupMode(buf_aGroupMode, buf_aGroupID, buf_aGroupName);
        *aGroupMode = buf_aGroupMode.Extract();
        *aGroupID = buf_aGroupID.Extract();
        *aGroupName = buf_aGroupName.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aGroupMode = NULL;
        *aGroupID = NULL;
        *aGroupName = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1BeginGetGroupMode(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetGroupMode(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1EndGetGroupMode(THandle aHandle, OhNetHandleAsync aAsync, char** aGroupMode, char** aGroupID, char** aGroupName)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aGroupMode;
    *aGroupMode = NULL;
    Brh buf_aGroupID;
    *aGroupID = NULL;
    Brh buf_aGroupName;
    *aGroupName = NULL;
    try {
        proxyC->EndGetGroupMode(*async, buf_aGroupMode, buf_aGroupID, buf_aGroupName);
        *aGroupMode = buf_aGroupMode.Extract();
        *aGroupID = buf_aGroupID.Extract();
        *aGroupName = buf_aGroupName.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1SyncSetGroupVolume(THandle aHandle, uint32_t aGroupVolume)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetGroupVolume(aGroupVolume);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1BeginSetGroupVolume(THandle aHandle, uint32_t aGroupVolume, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetGroupVolume(aGroupVolume, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1EndSetGroupVolume(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetGroupVolume(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1SyncGetGroupVolume(THandle aHandle, uint32_t* aGroupVolume)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncGetGroupVolume(*aGroupVolume);
    }
    catch (ProxyError& ) {
        err = -1;
        *aGroupVolume = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1BeginGetGroupVolume(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetGroupVolume(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1EndGetGroupVolume(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aGroupVolume)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndGetGroupVolume(*async, *aGroupVolume);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1SyncSetGroupMute(THandle aHandle, uint32_t aGroupMute)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetGroupMute((aGroupMute==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1BeginSetGroupMute(THandle aHandle, uint32_t aGroupMute, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetGroupMute((aGroupMute==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1EndSetGroupMute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetGroupMute(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1SyncGetGroupMute(THandle aHandle, uint32_t* aGroupMute)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool GroupMute;
    int32_t err = 0;
    try {
        proxyC->SyncGetGroupMute(GroupMute);
        *aGroupMute = GroupMute? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aGroupMute = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1BeginGetGroupMute(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetGroupMute(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1EndGetGroupMute(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aGroupMute)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool GroupMute;
    try {
        proxyC->EndGetGroupMute(*async, GroupMute);
        *aGroupMute = GroupMute? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1SyncGetGroupStatus(THandle aHandle, char** aGroupStatus)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aGroupStatus;
    int32_t err = 0;
    try {
        proxyC->SyncGetGroupStatus(buf_aGroupStatus);
        *aGroupStatus = buf_aGroupStatus.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aGroupStatus = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1BeginGetGroupStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetGroupStatus(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1EndGetGroupStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aGroupStatus)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aGroupStatus;
    *aGroupStatus = NULL;
    try {
        proxyC->EndGetGroupStatus(*async, buf_aGroupStatus);
        *aGroupStatus = buf_aGroupStatus.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1SyncSetGroupStatus(THandle aHandle, const char* aGroupStatus)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aGroupStatus(aGroupStatus);
    int32_t err = 0;
    try {
        proxyC->SyncSetGroupStatus(buf_aGroupStatus);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1BeginSetGroupStatus(THandle aHandle, const char* aGroupStatus, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aGroupStatus(aGroupStatus);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetGroupStatus(buf_aGroupStatus, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgGroupConfig1EndSetGroupStatus(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetGroupStatus(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1SetPropertyGroupModeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyGroupModeChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1SetPropertyGroupNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyGroupNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1SetPropertyGroupIDChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyGroupIDChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1SetPropertyGroupVolumeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyGroupVolumeChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1SetPropertyGroupMuteChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyGroupMuteChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1SetPropertyGroupStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyGroupStatusChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1PropertyGroupMode(THandle aHandle, char** aGroupMode)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aGroupMode;
    proxyC->PropertyGroupMode(buf_aGroupMode);
    *aGroupMode = buf_aGroupMode.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1PropertyGroupName(THandle aHandle, char** aGroupName)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aGroupName;
    proxyC->PropertyGroupName(buf_aGroupName);
    *aGroupName = buf_aGroupName.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1PropertyGroupID(THandle aHandle, char** aGroupID)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aGroupID;
    proxyC->PropertyGroupID(buf_aGroupID);
    *aGroupID = buf_aGroupID.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1PropertyGroupVolume(THandle aHandle, uint32_t* aGroupVolume)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyGroupVolume(*aGroupVolume);
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1PropertyGroupMute(THandle aHandle, uint32_t* aGroupMute)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool GroupMute;
    proxyC->PropertyGroupMute(GroupMute);
    *aGroupMute = GroupMute? 1 : 0;
}

void STDCALL CpProxyAvOpenhomeOrgGroupConfig1PropertyGroupStatus(THandle aHandle, char** aGroupStatus)
{
    CpProxyAvOpenhomeOrgGroupConfig1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgGroupConfig1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aGroupStatus;
    proxyC->PropertyGroupStatus(buf_aGroupStatus);
    *aGroupStatus = buf_aGroupStatus.Transfer();
}

