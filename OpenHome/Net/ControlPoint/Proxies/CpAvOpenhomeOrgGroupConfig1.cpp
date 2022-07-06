#include "CpAvOpenhomeOrgGroupConfig1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncSetGroupModeAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncSetGroupModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
};

class SyncGetGroupModeAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncGetGroupModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, Brh& aGroupMode, Brh& aGroupID, Brh& aGroupName);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
    Brh& iGroupMode;
    Brh& iGroupID;
    Brh& iGroupName;
};

class SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
};

class SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, TUint& aGroupVolume);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
    TUint& iGroupVolume;
};

class SyncSetGroupMuteAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncSetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
};

class SyncGetGroupMuteAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncGetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, TBool& aGroupMute);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
    TBool& iGroupMute;
};

class SyncGetGroupStatusAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncGetGroupStatusAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, Brh& aGroupStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
    Brh& iGroupStatus;
};

class SyncSetGroupStatusAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncSetGroupStatusAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
};

class SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, TBool& aBitPerfectMode);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
    TBool& iBitPerfectMode;
};

class SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1 : public SyncProxyAction
{
public:
    SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgGroupConfig1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncSetGroupModeAvOpenhomeOrgGroupConfig1

SyncSetGroupModeAvOpenhomeOrgGroupConfig1::SyncSetGroupModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupModeAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupMode(aAsync);
}

// SyncGetGroupModeAvOpenhomeOrgGroupConfig1

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

// SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1

SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1::SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupVolumeAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupVolume(aAsync);
}

// SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1

SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1::SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, TUint& aGroupVolume)
    : iService(aProxy)
    , iGroupVolume(aGroupVolume)
{
}

void SyncGetGroupVolumeAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupVolume(aAsync, iGroupVolume);
}

// SyncSetGroupMuteAvOpenhomeOrgGroupConfig1

SyncSetGroupMuteAvOpenhomeOrgGroupConfig1::SyncSetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupMuteAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupMute(aAsync);
}

// SyncGetGroupMuteAvOpenhomeOrgGroupConfig1

SyncGetGroupMuteAvOpenhomeOrgGroupConfig1::SyncGetGroupMuteAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, TBool& aGroupMute)
    : iService(aProxy)
    , iGroupMute(aGroupMute)
{
}

void SyncGetGroupMuteAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupMute(aAsync, iGroupMute);
}

// SyncGetGroupStatusAvOpenhomeOrgGroupConfig1

SyncGetGroupStatusAvOpenhomeOrgGroupConfig1::SyncGetGroupStatusAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, Brh& aGroupStatus)
    : iService(aProxy)
    , iGroupStatus(aGroupStatus)
{
}

void SyncGetGroupStatusAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetGroupStatus(aAsync, iGroupStatus);
}

// SyncSetGroupStatusAvOpenhomeOrgGroupConfig1

SyncSetGroupStatusAvOpenhomeOrgGroupConfig1::SyncSetGroupStatusAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetGroupStatusAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetGroupStatus(aAsync);
}

// SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1

SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1::SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy, TBool& aBitPerfectMode)
    : iService(aProxy)
    , iBitPerfectMode(aBitPerfectMode)
{
}

void SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetBitPerfectMode(aAsync, iBitPerfectMode);
}

// SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1

SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1::SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1(CpProxyAvOpenhomeOrgGroupConfig1& aProxy)
    : iService(aProxy)
{
}

void SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBitPerfectMode(aAsync);
}


// CpProxyAvOpenhomeOrgGroupConfig1

CpProxyAvOpenhomeOrgGroupConfig1::CpProxyAvOpenhomeOrgGroupConfig1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "GroupConfig", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgGroupConfig1::BitPerfectModePropertyChanged);
    iBitPerfectMode = new PropertyBool("BitPerfectMode", functor);
    AddProperty(iBitPerfectMode);
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
    delete iActionGetBitPerfectMode;
    delete iActionSetBitPerfectMode;
}

void CpProxyAvOpenhomeOrgGroupConfig1::SyncSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName)
{
    SyncSetGroupModeAvOpenhomeOrgGroupConfig1 sync(*this);
    BeginSetGroupMode(aGroupMode, aGroupID, aGroupName, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1::BeginSetGroupMode(const Brx& aGroupMode, const Brx& aGroupID, const Brx& aGroupName, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetGroupMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupMode));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupID));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupName));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetGroupMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetGroupVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aGroupVolume));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetGroupVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetGroupMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aGroupMute));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetGroupMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetGroupStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetGroupStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetGroupStatus, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetGroupStatus->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aGroupStatus));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
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

void CpProxyAvOpenhomeOrgGroupConfig1::SyncGetBitPerfectMode(TBool& aBitPerfectMode)
{
    SyncGetBitPerfectModeAvOpenhomeOrgGroupConfig1 sync(*this, aBitPerfectMode);
    BeginGetBitPerfectMode(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1::BeginGetBitPerfectMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetBitPerfectMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetBitPerfectMode->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1::EndGetBitPerfectMode(IAsync& aAsync, TBool& aBitPerfectMode)
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

void CpProxyAvOpenhomeOrgGroupConfig1::SyncSetBitPerfectMode(TBool aBitPerfectMode)
{
    SyncSetBitPerfectModeAvOpenhomeOrgGroupConfig1 sync(*this);
    BeginSetBitPerfectMode(aBitPerfectMode, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgGroupConfig1::BeginSetBitPerfectMode(TBool aBitPerfectMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBitPerfectMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBitPerfectMode->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aBitPerfectMode));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgGroupConfig1::EndSetBitPerfectMode(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupModeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iGroupModeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iGroupNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupIDChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iGroupIDChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupVolumeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iGroupVolumeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupMuteChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iGroupMuteChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyGroupStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iGroupStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyBitPerfectModeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBitPerfectModeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupMode(Brhz& aGroupMode) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aGroupMode.Set(iGroupMode->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupName(Brhz& aGroupName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aGroupName.Set(iGroupName->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupID(Brhz& aGroupID) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aGroupID.Set(iGroupID->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupVolume(TUint& aGroupVolume) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aGroupVolume = iGroupVolume->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupMute(TBool& aGroupMute) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aGroupMute = iGroupMute->Value();
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyGroupStatus(Brhz& aGroupStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aGroupStatus.Set(iGroupStatus->Value());
}

void CpProxyAvOpenhomeOrgGroupConfig1::PropertyBitPerfectMode(TBool& aBitPerfectMode) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBitPerfectMode = iBitPerfectMode->Value();
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

void CpProxyAvOpenhomeOrgGroupConfig1::BitPerfectModePropertyChanged()
{
    ReportEvent(iBitPerfectModeChanged);
}


void CpProxyAvOpenhomeOrgGroupConfig1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgGroupConfig1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgGroupConfig1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgGroupConfig1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgGroupConfig1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgGroupConfig1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgGroupConfig1::Version() const
{
  return iCpProxy.Version();
}


