#include "CpAvOpenhomeOrgVolume1.h"
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


class SyncCharacteristicsAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncCharacteristicsAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCharacteristicsAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
    uint32_t& iVolumeMax;
    uint32_t& iVolumeUnity;
    uint32_t& iVolumeSteps;
    uint32_t& iVolumeMilliDbPerStep;
    uint32_t& iBalanceMax;
    uint32_t& iFadeMax;
};

SyncCharacteristicsAvOpenhomeOrgVolume1Cpp::SyncCharacteristicsAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
    : iService(aProxy)
    , iVolumeMax(aVolumeMax)
    , iVolumeUnity(aVolumeUnity)
    , iVolumeSteps(aVolumeSteps)
    , iVolumeMilliDbPerStep(aVolumeMilliDbPerStep)
    , iBalanceMax(aBalanceMax)
    , iFadeMax(aFadeMax)
{
}

void SyncCharacteristicsAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCharacteristics(aAsync, iVolumeMax, iVolumeUnity, iVolumeSteps, iVolumeMilliDbPerStep, iBalanceMax, iFadeMax);
}


class SyncSetVolumeAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncSetVolumeAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncSetVolumeAvOpenhomeOrgVolume1Cpp::SyncSetVolumeAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolume(aAsync);
}


class SyncCanSetVolumeAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncCanSetVolumeAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCanSetVolumeAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncCanSetVolumeAvOpenhomeOrgVolume1Cpp::SyncCanSetVolumeAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncCanSetVolumeAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCanSetVolume(aAsync);
}


class SyncVolumeIncAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncVolumeIncAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeIncAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncVolumeIncAvOpenhomeOrgVolume1Cpp::SyncVolumeIncAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeInc(aAsync);
}


class SyncVolumeDecAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncVolumeDecAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeDecAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncVolumeDecAvOpenhomeOrgVolume1Cpp::SyncVolumeDecAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDec(aAsync);
}


class SyncVolumeAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncVolumeAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
    uint32_t& iValue;
};

SyncVolumeAvOpenhomeOrgVolume1Cpp::SyncVolumeAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolume(aAsync, iValue);
}


class SyncSetBalanceAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncSetBalanceAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBalanceAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncSetBalanceAvOpenhomeOrgVolume1Cpp::SyncSetBalanceAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetBalanceAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBalance(aAsync);
}


class SyncBalanceIncAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncBalanceIncAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceIncAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncBalanceIncAvOpenhomeOrgVolume1Cpp::SyncBalanceIncAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceIncAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceInc(aAsync);
}


class SyncBalanceDecAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncBalanceDecAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceDecAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncBalanceDecAvOpenhomeOrgVolume1Cpp::SyncBalanceDecAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceDecAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceDec(aAsync);
}


class SyncBalanceAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncBalanceAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, int32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
    int32_t& iValue;
};

SyncBalanceAvOpenhomeOrgVolume1Cpp::SyncBalanceAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, int32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBalanceAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalance(aAsync, iValue);
}


class SyncSetFadeAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncSetFadeAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetFadeAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncSetFadeAvOpenhomeOrgVolume1Cpp::SyncSetFadeAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetFadeAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFade(aAsync);
}


class SyncFadeIncAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncFadeIncAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeIncAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncFadeIncAvOpenhomeOrgVolume1Cpp::SyncFadeIncAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncFadeIncAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeInc(aAsync);
}


class SyncFadeDecAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncFadeDecAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeDecAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncFadeDecAvOpenhomeOrgVolume1Cpp::SyncFadeDecAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncFadeDecAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeDec(aAsync);
}


class SyncFadeAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncFadeAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, int32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
    int32_t& iValue;
};

SyncFadeAvOpenhomeOrgVolume1Cpp::SyncFadeAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, int32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncFadeAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFade(aAsync, iValue);
}


class SyncSetMuteAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncSetMuteAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetMuteAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncSetMuteAvOpenhomeOrgVolume1Cpp::SyncSetMuteAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetMuteAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMute(aAsync);
}


class SyncCanSetMuteAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncCanSetMuteAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCanSetMuteAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
};

SyncCanSetMuteAvOpenhomeOrgVolume1Cpp::SyncCanSetMuteAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncCanSetMuteAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCanSetMute(aAsync);
}


class SyncMuteAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncMuteAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMuteAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
    bool& iValue;
};

SyncMuteAvOpenhomeOrgVolume1Cpp::SyncMuteAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMuteAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMute(aAsync, iValue);
}


class SyncVolumeLimitAvOpenhomeOrgVolume1Cpp : public SyncProxyAction
{
public:
    SyncVolumeLimitAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeLimitAvOpenhomeOrgVolume1Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume1Cpp& iService;
    uint32_t& iValue;
};

SyncVolumeLimitAvOpenhomeOrgVolume1Cpp::SyncVolumeLimitAvOpenhomeOrgVolume1Cpp(CpProxyAvOpenhomeOrgVolume1Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeLimitAvOpenhomeOrgVolume1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeLimit(aAsync, iValue);
}


CpProxyAvOpenhomeOrgVolume1Cpp::CpProxyAvOpenhomeOrgVolume1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "Volume", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionCharacteristics = new Action("Characteristics");
    param = new OpenHome::Net::ParameterUint("VolumeMax");
    iActionCharacteristics->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("VolumeUnity");
    iActionCharacteristics->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("VolumeSteps");
    iActionCharacteristics->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("VolumeMilliDbPerStep");
    iActionCharacteristics->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("BalanceMax");
    iActionCharacteristics->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("FadeMax");
    iActionCharacteristics->AddOutputParameter(param);

    iActionSetVolume = new Action("SetVolume");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSetVolume->AddInputParameter(param);

    iActionCanSetVolume = new Action("CanSetVolume");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionCanSetVolume->AddInputParameter(param);

    iActionVolumeInc = new Action("VolumeInc");

    iActionVolumeDec = new Action("VolumeDec");

    iActionVolume = new Action("Volume");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionVolume->AddOutputParameter(param);

    iActionSetBalance = new Action("SetBalance");
    param = new OpenHome::Net::ParameterInt("Value");
    iActionSetBalance->AddInputParameter(param);

    iActionBalanceInc = new Action("BalanceInc");

    iActionBalanceDec = new Action("BalanceDec");

    iActionBalance = new Action("Balance");
    param = new OpenHome::Net::ParameterInt("Value");
    iActionBalance->AddOutputParameter(param);

    iActionSetFade = new Action("SetFade");
    param = new OpenHome::Net::ParameterInt("Value");
    iActionSetFade->AddInputParameter(param);

    iActionFadeInc = new Action("FadeInc");

    iActionFadeDec = new Action("FadeDec");

    iActionFade = new Action("Fade");
    param = new OpenHome::Net::ParameterInt("Value");
    iActionFade->AddOutputParameter(param);

    iActionSetMute = new Action("SetMute");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionSetMute->AddInputParameter(param);

    iActionCanSetMute = new Action("CanSetMute");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionCanSetMute->AddInputParameter(param);

    iActionMute = new Action("Mute");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionMute->AddOutputParameter(param);

    iActionVolumeLimit = new Action("VolumeLimit");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionVolumeLimit->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume1Cpp::VolumePropertyChanged);
    iVolume = new PropertyUint("Volume", functor);
    AddProperty(iVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume1Cpp::MutePropertyChanged);
    iMute = new PropertyBool("Mute", functor);
    AddProperty(iMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume1Cpp::BalancePropertyChanged);
    iBalance = new PropertyInt("Balance", functor);
    AddProperty(iBalance);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume1Cpp::FadePropertyChanged);
    iFade = new PropertyInt("Fade", functor);
    AddProperty(iFade);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume1Cpp::VolumeLimitPropertyChanged);
    iVolumeLimit = new PropertyUint("VolumeLimit", functor);
    AddProperty(iVolumeLimit);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume1Cpp::VolumeMaxPropertyChanged);
    iVolumeMax = new PropertyUint("VolumeMax", functor);
    AddProperty(iVolumeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume1Cpp::VolumeUnityPropertyChanged);
    iVolumeUnity = new PropertyUint("VolumeUnity", functor);
    AddProperty(iVolumeUnity);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume1Cpp::VolumeStepsPropertyChanged);
    iVolumeSteps = new PropertyUint("VolumeSteps", functor);
    AddProperty(iVolumeSteps);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume1Cpp::VolumeMilliDbPerStepPropertyChanged);
    iVolumeMilliDbPerStep = new PropertyUint("VolumeMilliDbPerStep", functor);
    AddProperty(iVolumeMilliDbPerStep);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume1Cpp::BalanceMaxPropertyChanged);
    iBalanceMax = new PropertyUint("BalanceMax", functor);
    AddProperty(iBalanceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume1Cpp::FadeMaxPropertyChanged);
    iFadeMax = new PropertyUint("FadeMax", functor);
    AddProperty(iFadeMax);
}

CpProxyAvOpenhomeOrgVolume1Cpp::~CpProxyAvOpenhomeOrgVolume1Cpp()
{
    DestroyService();
    delete iActionCharacteristics;
    delete iActionSetVolume;
    delete iActionCanSetVolume;
    delete iActionVolumeInc;
    delete iActionVolumeDec;
    delete iActionVolume;
    delete iActionSetBalance;
    delete iActionBalanceInc;
    delete iActionBalanceDec;
    delete iActionBalance;
    delete iActionSetFade;
    delete iActionFadeInc;
    delete iActionFadeDec;
    delete iActionFade;
    delete iActionSetMute;
    delete iActionCanSetMute;
    delete iActionMute;
    delete iActionVolumeLimit;
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncCharacteristics(uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
{
    SyncCharacteristicsAvOpenhomeOrgVolume1Cpp sync(*this, aVolumeMax, aVolumeUnity, aVolumeSteps, aVolumeMilliDbPerStep, aBalanceMax, aFadeMax);
    BeginCharacteristics(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginCharacteristics(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCharacteristics, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCharacteristics->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndCharacteristics(IAsync& aAsync, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Characteristics"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aVolumeMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aVolumeUnity = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aVolumeSteps = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aVolumeMilliDbPerStep = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aBalanceMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aFadeMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncSetVolume(uint32_t aValue)
{
    SyncSetVolumeAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginSetVolume(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginSetVolume(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndSetVolume(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetVolume"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncCanSetVolume(uint32_t aValue)
{
    SyncCanSetVolumeAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginCanSetVolume(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginCanSetVolume(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCanSetVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionCanSetVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndCanSetVolume(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("CanSetVolume"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncVolumeInc()
{
    SyncVolumeIncAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginVolumeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginVolumeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndVolumeInc(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("VolumeInc"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncVolumeDec()
{
    SyncVolumeDecAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginVolumeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginVolumeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndVolumeDec(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("VolumeDec"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncVolume(uint32_t& aValue)
{
    SyncVolumeAvOpenhomeOrgVolume1Cpp sync(*this, aValue);
    BeginVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndVolume(IAsync& aAsync, uint32_t& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Volume"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncSetBalance(int32_t aValue)
{
    SyncSetBalanceAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginSetBalance(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginSetBalance(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBalance->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndSetBalance(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetBalance"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncBalanceInc()
{
    SyncBalanceIncAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginBalanceInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginBalanceInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndBalanceInc(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BalanceInc"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncBalanceDec()
{
    SyncBalanceDecAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginBalanceDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginBalanceDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndBalanceDec(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BalanceDec"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncBalance(int32_t& aValue)
{
    SyncBalanceAvOpenhomeOrgVolume1Cpp sync(*this, aValue);
    BeginBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBalance->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndBalance(IAsync& aAsync, int32_t& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Balance"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentInt*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncSetFade(int32_t aValue)
{
    SyncSetFadeAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginSetFade(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginSetFade(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetFade, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFade->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndSetFade(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetFade"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncFadeInc()
{
    SyncFadeIncAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginFadeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginFadeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndFadeInc(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("FadeInc"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncFadeDec()
{
    SyncFadeDecAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginFadeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginFadeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndFadeDec(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("FadeDec"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncFade(int32_t& aValue)
{
    SyncFadeAvOpenhomeOrgVolume1Cpp sync(*this, aValue);
    BeginFade(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginFade(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFade, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionFade->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndFade(IAsync& aAsync, int32_t& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Fade"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentInt*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncSetMute(bool aValue)
{
    SyncSetMuteAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginSetMute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginSetMute(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndSetMute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetMute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncCanSetMute(bool aValue)
{
    SyncCanSetMuteAvOpenhomeOrgVolume1Cpp sync(*this);
    BeginCanSetMute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginCanSetMute(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCanSetMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionCanSetMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndCanSetMute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("CanSetMute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncMute(bool& aValue)
{
    SyncMuteAvOpenhomeOrgVolume1Cpp sync(*this, aValue);
    BeginMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndMute(IAsync& aAsync, bool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Mute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SyncVolumeLimit(uint32_t& aValue)
{
    SyncVolumeLimitAvOpenhomeOrgVolume1Cpp sync(*this, aValue);
    BeginVolumeLimit(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BeginVolumeLimit(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeLimit, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeLimit->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::EndVolumeLimit(IAsync& aAsync, uint32_t& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("VolumeLimit"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyVolumeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyMuteChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMuteChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyBalanceChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyFadeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyVolumeLimitChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeLimitChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyVolumeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyVolumeUnityChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeUnityChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyVolumeStepsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeStepsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMilliDbPerStepChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyBalanceMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyFadeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::PropertyVolume(uint32_t& aVolume) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolume = iVolume->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::PropertyMute(bool& aMute) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMute = iMute->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::PropertyBalance(int32_t& aBalance) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalance = iBalance->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::PropertyFade(int32_t& aFade) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFade = iFade->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::PropertyVolumeLimit(uint32_t& aVolumeLimit) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeLimit = iVolumeLimit->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::PropertyVolumeMax(uint32_t& aVolumeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMax = iVolumeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::PropertyVolumeUnity(uint32_t& aVolumeUnity) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeUnity = iVolumeUnity->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::PropertyVolumeSteps(uint32_t& aVolumeSteps) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeSteps = iVolumeSteps->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::PropertyVolumeMilliDbPerStep(uint32_t& aVolumeMilliDbPerStep) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMilliDbPerStep = iVolumeMilliDbPerStep->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::PropertyBalanceMax(uint32_t& aBalanceMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalanceMax = iBalanceMax->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::PropertyFadeMax(uint32_t& aFadeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFadeMax = iFadeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::VolumePropertyChanged()
{
    ReportEvent(iVolumeChanged);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::MutePropertyChanged()
{
    ReportEvent(iMuteChanged);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BalancePropertyChanged()
{
    ReportEvent(iBalanceChanged);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::FadePropertyChanged()
{
    ReportEvent(iFadeChanged);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::VolumeLimitPropertyChanged()
{
    ReportEvent(iVolumeLimitChanged);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::VolumeMaxPropertyChanged()
{
    ReportEvent(iVolumeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::VolumeUnityPropertyChanged()
{
    ReportEvent(iVolumeUnityChanged);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::VolumeStepsPropertyChanged()
{
    ReportEvent(iVolumeStepsChanged);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::VolumeMilliDbPerStepPropertyChanged()
{
    ReportEvent(iVolumeMilliDbPerStepChanged);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::BalanceMaxPropertyChanged()
{
    ReportEvent(iBalanceMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::FadeMaxPropertyChanged()
{
    ReportEvent(iFadeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgVolume1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgVolume1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgVolume1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgVolume1Cpp::Version() const
{
  return iCpProxy.Version();
}

