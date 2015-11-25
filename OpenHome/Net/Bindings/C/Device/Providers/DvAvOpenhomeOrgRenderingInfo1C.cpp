#include "DvAvOpenhomeOrgRenderingInfo1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/C/DviDeviceC.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/C/DvInvocation.h>
#include <OpenHome/Net/C/DvInvocationPrivate.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class DvProviderAvOpenhomeOrgRenderingInfo1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgRenderingInfo1C(DvDeviceC aDevice);
    TBool SetPropertyInfo(const Brx& aValue);
    void GetPropertyInfo(Brhz& aValue);
    void EnablePropertyInfo();
    void EnableActionGetEntireInfo(CallbackRenderingInfo1GetEntireInfo aCallback, void* aPtr);
private:
    void DoGetEntireInfo(IDviInvocation& aInvocation);
private:
    CallbackRenderingInfo1GetEntireInfo iCallbackGetEntireInfo;
    void* iPtrGetEntireInfo;
    PropertyString* iPropertyInfo;
};

DvProviderAvOpenhomeOrgRenderingInfo1C::DvProviderAvOpenhomeOrgRenderingInfo1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "RenderingInfo", 1)
{
    iPropertyInfo = NULL;
}

TBool DvProviderAvOpenhomeOrgRenderingInfo1C::SetPropertyInfo(const Brx& aValue)
{
    ASSERT(iPropertyInfo != NULL);
    return SetPropertyString(*iPropertyInfo, aValue);
}

void DvProviderAvOpenhomeOrgRenderingInfo1C::GetPropertyInfo(Brhz& aValue)
{
    ASSERT(iPropertyInfo != NULL);
    aValue.Set(iPropertyInfo->Value());
}

void DvProviderAvOpenhomeOrgRenderingInfo1C::EnablePropertyInfo()
{
    iPropertyInfo = new PropertyString(new ParameterString("Info"));
    iService->AddProperty(iPropertyInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgRenderingInfo1C::EnableActionGetEntireInfo(CallbackRenderingInfo1GetEntireInfo aCallback, void* aPtr)
{
    iCallbackGetEntireInfo = aCallback;
    iPtrGetEntireInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetEntireInfo");
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyInfo));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgRenderingInfo1C::DoGetEntireInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgRenderingInfo1C::DoGetEntireInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Info;
    ASSERT(iCallbackGetEntireInfo != NULL);
    if (0 != iCallbackGetEntireInfo(iPtrGetEntireInfo, invocationC, invocationCPtr, &Info)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respInfo(aInvocation, "Info");
    invocation.StartResponse();
    Brhz bufInfo((const TChar*)Info);
    OhNetFreeExternal(Info);
    respInfo.Write(bufInfo);
    respInfo.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgRenderingInfo1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgRenderingInfo1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgRenderingInfo1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgRenderingInfo1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgRenderingInfo1EnableActionGetEntireInfo(THandle aProvider, CallbackRenderingInfo1GetEntireInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRenderingInfo1C*>(aProvider)->EnableActionGetEntireInfo(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgRenderingInfo1SetPropertyInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgRenderingInfo1C*>(aProvider)->SetPropertyInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgRenderingInfo1GetPropertyInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgRenderingInfo1C*>(aProvider)->GetPropertyInfo(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgRenderingInfo1EnablePropertyInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgRenderingInfo1C*>(aProvider)->EnablePropertyInfo();
}

