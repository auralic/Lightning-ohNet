#include <OpenHome/Net/Private/DviProtocolLpec.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Private/DviDevice.h>
#include <OpenHome/Net/Private/DviStack.h>
#include <OpenHome/Net/Private/DviServerLpec.h>

using namespace OpenHome;
using namespace OpenHome::Net;

// DviProtocolLpec

const Brn DviProtocolLpec::kProtocolName("Lpec");

DviProtocolLpec::DviProtocolLpec(DviDevice& aDevice)
    : iDevice(aDevice)
{
}

void DviProtocolLpec::WriteResource(const Brx& /*aUriTail*/, TIpAddress /*aAdapter*/, std::vector<char*>& /*aLanguageList*/, IResourceWriter& /*aResourceWriter*/)
{
    ASSERTS(); // resources aren't served over Lpec
}

const Brx& DviProtocolLpec::ProtocolName() const
{
    return kProtocolName;
}

void DviProtocolLpec::Enable()
{
}

void DviProtocolLpec::Disable(Functor& aComplete)
{
    const TChar* name = NULL;
    GetAttribute("Name", &name);
    if (name != NULL) {
        iDevice.GetDvStack().LpecServer().NotifyDeviceDisabled(Brn(name), iDevice.Udn());
    }
    aComplete();
}

void DviProtocolLpec::GetAttribute(const TChar* aKey, const TChar** aValue) const
{
    *aValue = iAttributeMap.Get(aKey);
}

void DviProtocolLpec::SetAttribute(const TChar* aKey, const TChar* aValue)
{
    iAttributeMap.Set(aKey, aValue);
}

void DviProtocolLpec::SetCustomData(const TChar* /*aTag*/, void* /*aData*/)
{
    ASSERTS(); // can't think why this'd be called
}

void DviProtocolLpec::GetResourceManagerUri(const NetworkAdapter& /*aAdapter*/, Brh& /*aUri*/)
{
    // don't supply any resources over LPEC so leave aUri unchanged
}
