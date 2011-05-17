#include "DvAvOpenhomeOrgProduct1.h"
#include <ZappTypes.h>
#include <Buffer.h>
#include <C/DviDeviceC.h>
#include <DvProvider.h>
#include <C/Zapp.h>
#include <ZappTypes.h>
#include <Core/DvInvocationResponse.h>
#include <Service.h>
#include <FunctorDviInvocation.h>

using namespace Zapp;

class DvProviderAvOpenhomeOrgProduct1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgProduct1C(DvDeviceC aDevice);
    TBool SetPropertyManufacturerName(const Brx& aValue);
    void GetPropertyManufacturerName(Brhz& aValue);
    TBool SetPropertyManufacturerInfo(const Brx& aValue);
    void GetPropertyManufacturerInfo(Brhz& aValue);
    TBool SetPropertyManufacturerUrl(const Brx& aValue);
    void GetPropertyManufacturerUrl(Brhz& aValue);
    TBool SetPropertyManufacturerImageUri(const Brx& aValue);
    void GetPropertyManufacturerImageUri(Brhz& aValue);
    TBool SetPropertyModelName(const Brx& aValue);
    void GetPropertyModelName(Brhz& aValue);
    TBool SetPropertyModelInfo(const Brx& aValue);
    void GetPropertyModelInfo(Brhz& aValue);
    TBool SetPropertyModelUrl(const Brx& aValue);
    void GetPropertyModelUrl(Brhz& aValue);
    TBool SetPropertyModelImageUri(const Brx& aValue);
    void GetPropertyModelImageUri(Brhz& aValue);
    TBool SetPropertyProductRoom(const Brx& aValue);
    void GetPropertyProductRoom(Brhz& aValue);
    TBool SetPropertyProductName(const Brx& aValue);
    void GetPropertyProductName(Brhz& aValue);
    TBool SetPropertyProductInfo(const Brx& aValue);
    void GetPropertyProductInfo(Brhz& aValue);
    TBool SetPropertyProductUrl(const Brx& aValue);
    void GetPropertyProductUrl(Brhz& aValue);
    TBool SetPropertyProductImageUri(const Brx& aValue);
    void GetPropertyProductImageUri(Brhz& aValue);
    TBool SetPropertyStandby(TBool aValue);
    void GetPropertyStandby(TBool& aValue);
    TBool SetPropertySourceIndex(TUint aValue);
    void GetPropertySourceIndex(TUint& aValue);
    TBool SetPropertySourceCount(TUint aValue);
    void GetPropertySourceCount(TUint& aValue);
    TBool SetPropertySourceXml(const Brx& aValue);
    void GetPropertySourceXml(Brhz& aValue);
    TBool SetPropertyAttributes(const Brx& aValue);
    void GetPropertyAttributes(Brhz& aValue);
    void EnableActionManufacturer(CallbackProduct1Manufacturer aCallback, void* aPtr);
    void EnableActionModel(CallbackProduct1Model aCallback, void* aPtr);
    void EnableActionProduct(CallbackProduct1Product aCallback, void* aPtr);
    void EnableActionStandby(CallbackProduct1Standby aCallback, void* aPtr);
    void EnableActionSetStandby(CallbackProduct1SetStandby aCallback, void* aPtr);
    void EnableActionSourceCount(CallbackProduct1SourceCount aCallback, void* aPtr);
    void EnableActionSourceXml(CallbackProduct1SourceXml aCallback, void* aPtr);
    void EnableActionSourceIndex(CallbackProduct1SourceIndex aCallback, void* aPtr);
    void EnableActionSetSourceIndex(CallbackProduct1SetSourceIndex aCallback, void* aPtr);
    void EnableActionSetSourceIndexByName(CallbackProduct1SetSourceIndexByName aCallback, void* aPtr);
    void EnableActionSource(CallbackProduct1Source aCallback, void* aPtr);
    void EnableActionAttributes(CallbackProduct1Attributes aCallback, void* aPtr);
    void EnableActionSourceXmlChangeCount(CallbackProduct1SourceXmlChangeCount aCallback, void* aPtr);
private:
    void DoManufacturer(IDviInvocation& aInvocation, TUint aVersion);
    void DoModel(IDviInvocation& aInvocation, TUint aVersion);
    void DoProduct(IDviInvocation& aInvocation, TUint aVersion);
    void DoStandby(IDviInvocation& aInvocation, TUint aVersion);
    void DoSetStandby(IDviInvocation& aInvocation, TUint aVersion);
    void DoSourceCount(IDviInvocation& aInvocation, TUint aVersion);
    void DoSourceXml(IDviInvocation& aInvocation, TUint aVersion);
    void DoSourceIndex(IDviInvocation& aInvocation, TUint aVersion);
    void DoSetSourceIndex(IDviInvocation& aInvocation, TUint aVersion);
    void DoSetSourceIndexByName(IDviInvocation& aInvocation, TUint aVersion);
    void DoSource(IDviInvocation& aInvocation, TUint aVersion);
    void DoAttributes(IDviInvocation& aInvocation, TUint aVersion);
    void DoSourceXmlChangeCount(IDviInvocation& aInvocation, TUint aVersion);
private:
    CallbackProduct1Manufacturer iCallbackManufacturer;
    void* iPtrManufacturer;
    CallbackProduct1Model iCallbackModel;
    void* iPtrModel;
    CallbackProduct1Product iCallbackProduct;
    void* iPtrProduct;
    CallbackProduct1Standby iCallbackStandby;
    void* iPtrStandby;
    CallbackProduct1SetStandby iCallbackSetStandby;
    void* iPtrSetStandby;
    CallbackProduct1SourceCount iCallbackSourceCount;
    void* iPtrSourceCount;
    CallbackProduct1SourceXml iCallbackSourceXml;
    void* iPtrSourceXml;
    CallbackProduct1SourceIndex iCallbackSourceIndex;
    void* iPtrSourceIndex;
    CallbackProduct1SetSourceIndex iCallbackSetSourceIndex;
    void* iPtrSetSourceIndex;
    CallbackProduct1SetSourceIndexByName iCallbackSetSourceIndexByName;
    void* iPtrSetSourceIndexByName;
    CallbackProduct1Source iCallbackSource;
    void* iPtrSource;
    CallbackProduct1Attributes iCallbackAttributes;
    void* iPtrAttributes;
    CallbackProduct1SourceXmlChangeCount iCallbackSourceXmlChangeCount;
    void* iPtrSourceXmlChangeCount;
    PropertyString* iPropertyManufacturerName;
    PropertyString* iPropertyManufacturerInfo;
    PropertyString* iPropertyManufacturerUrl;
    PropertyString* iPropertyManufacturerImageUri;
    PropertyString* iPropertyModelName;
    PropertyString* iPropertyModelInfo;
    PropertyString* iPropertyModelUrl;
    PropertyString* iPropertyModelImageUri;
    PropertyString* iPropertyProductRoom;
    PropertyString* iPropertyProductName;
    PropertyString* iPropertyProductInfo;
    PropertyString* iPropertyProductUrl;
    PropertyString* iPropertyProductImageUri;
    PropertyBool* iPropertyStandby;
    PropertyUint* iPropertySourceIndex;
    PropertyUint* iPropertySourceCount;
    PropertyString* iPropertySourceXml;
    PropertyString* iPropertyAttributes;
};

DvProviderAvOpenhomeOrgProduct1C::DvProviderAvOpenhomeOrgProduct1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Product", 1)
{
    
    iPropertyManufacturerName = new PropertyString(new ParameterString("ManufacturerName"));
    iService->AddProperty(iPropertyManufacturerName); // passes ownership
    iPropertyManufacturerInfo = new PropertyString(new ParameterString("ManufacturerInfo"));
    iService->AddProperty(iPropertyManufacturerInfo); // passes ownership
    iPropertyManufacturerUrl = new PropertyString(new ParameterString("ManufacturerUrl"));
    iService->AddProperty(iPropertyManufacturerUrl); // passes ownership
    iPropertyManufacturerImageUri = new PropertyString(new ParameterString("ManufacturerImageUri"));
    iService->AddProperty(iPropertyManufacturerImageUri); // passes ownership
    iPropertyModelName = new PropertyString(new ParameterString("ModelName"));
    iService->AddProperty(iPropertyModelName); // passes ownership
    iPropertyModelInfo = new PropertyString(new ParameterString("ModelInfo"));
    iService->AddProperty(iPropertyModelInfo); // passes ownership
    iPropertyModelUrl = new PropertyString(new ParameterString("ModelUrl"));
    iService->AddProperty(iPropertyModelUrl); // passes ownership
    iPropertyModelImageUri = new PropertyString(new ParameterString("ModelImageUri"));
    iService->AddProperty(iPropertyModelImageUri); // passes ownership
    iPropertyProductRoom = new PropertyString(new ParameterString("ProductRoom"));
    iService->AddProperty(iPropertyProductRoom); // passes ownership
    iPropertyProductName = new PropertyString(new ParameterString("ProductName"));
    iService->AddProperty(iPropertyProductName); // passes ownership
    iPropertyProductInfo = new PropertyString(new ParameterString("ProductInfo"));
    iService->AddProperty(iPropertyProductInfo); // passes ownership
    iPropertyProductUrl = new PropertyString(new ParameterString("ProductUrl"));
    iService->AddProperty(iPropertyProductUrl); // passes ownership
    iPropertyProductImageUri = new PropertyString(new ParameterString("ProductImageUri"));
    iService->AddProperty(iPropertyProductImageUri); // passes ownership
    iPropertyStandby = new PropertyBool(new ParameterBool("Standby"));
    iService->AddProperty(iPropertyStandby); // passes ownership
    iPropertySourceIndex = new PropertyUint(new ParameterUint("SourceIndex"));
    iService->AddProperty(iPropertySourceIndex); // passes ownership
    iPropertySourceCount = new PropertyUint(new ParameterUint("SourceCount"));
    iService->AddProperty(iPropertySourceCount); // passes ownership
    iPropertySourceXml = new PropertyString(new ParameterString("SourceXml"));
    iService->AddProperty(iPropertySourceXml); // passes ownership
    iPropertyAttributes = new PropertyString(new ParameterString("Attributes"));
    iService->AddProperty(iPropertyAttributes); // passes ownership
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyManufacturerName(const Brx& aValue)
{
    return SetPropertyString(*iPropertyManufacturerName, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyManufacturerName(Brhz& aValue)
{
    aValue.Set(iPropertyManufacturerName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyManufacturerInfo(const Brx& aValue)
{
    return SetPropertyString(*iPropertyManufacturerInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyManufacturerInfo(Brhz& aValue)
{
    aValue.Set(iPropertyManufacturerInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyManufacturerUrl(const Brx& aValue)
{
    return SetPropertyString(*iPropertyManufacturerUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyManufacturerUrl(Brhz& aValue)
{
    aValue.Set(iPropertyManufacturerUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyManufacturerImageUri(const Brx& aValue)
{
    return SetPropertyString(*iPropertyManufacturerImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyManufacturerImageUri(Brhz& aValue)
{
    aValue.Set(iPropertyManufacturerImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyModelName(const Brx& aValue)
{
    return SetPropertyString(*iPropertyModelName, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyModelName(Brhz& aValue)
{
    aValue.Set(iPropertyModelName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyModelInfo(const Brx& aValue)
{
    return SetPropertyString(*iPropertyModelInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyModelInfo(Brhz& aValue)
{
    aValue.Set(iPropertyModelInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyModelUrl(const Brx& aValue)
{
    return SetPropertyString(*iPropertyModelUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyModelUrl(Brhz& aValue)
{
    aValue.Set(iPropertyModelUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyModelImageUri(const Brx& aValue)
{
    return SetPropertyString(*iPropertyModelImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyModelImageUri(Brhz& aValue)
{
    aValue.Set(iPropertyModelImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyProductRoom(const Brx& aValue)
{
    return SetPropertyString(*iPropertyProductRoom, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyProductRoom(Brhz& aValue)
{
    aValue.Set(iPropertyProductRoom->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyProductName(const Brx& aValue)
{
    return SetPropertyString(*iPropertyProductName, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyProductName(Brhz& aValue)
{
    aValue.Set(iPropertyProductName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyProductInfo(const Brx& aValue)
{
    return SetPropertyString(*iPropertyProductInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyProductInfo(Brhz& aValue)
{
    aValue.Set(iPropertyProductInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyProductUrl(const Brx& aValue)
{
    return SetPropertyString(*iPropertyProductUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyProductUrl(Brhz& aValue)
{
    aValue.Set(iPropertyProductUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyProductImageUri(const Brx& aValue)
{
    return SetPropertyString(*iPropertyProductImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyProductImageUri(Brhz& aValue)
{
    aValue.Set(iPropertyProductImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyStandby(TBool aValue)
{
    return SetPropertyBool(*iPropertyStandby, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyStandby(TBool& aValue)
{
    aValue = iPropertyStandby->Value();
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertySourceIndex(TUint aValue)
{
    return SetPropertyUint(*iPropertySourceIndex, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertySourceIndex(TUint& aValue)
{
    aValue = iPropertySourceIndex->Value();
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertySourceCount(TUint aValue)
{
    return SetPropertyUint(*iPropertySourceCount, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertySourceCount(TUint& aValue)
{
    aValue = iPropertySourceCount->Value();
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertySourceXml(const Brx& aValue)
{
    return SetPropertyString(*iPropertySourceXml, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertySourceXml(Brhz& aValue)
{
    aValue.Set(iPropertySourceXml->Value());
}

TBool DvProviderAvOpenhomeOrgProduct1C::SetPropertyAttributes(const Brx& aValue)
{
    return SetPropertyString(*iPropertyAttributes, aValue);
}

void DvProviderAvOpenhomeOrgProduct1C::GetPropertyAttributes(Brhz& aValue)
{
    aValue.Set(iPropertyAttributes->Value());
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionManufacturer(CallbackProduct1Manufacturer aCallback, void* aPtr)
{
    iCallbackManufacturer = aCallback;
    iPtrManufacturer = aPtr;
    Zapp::Action* action = new Zapp::Action("Manufacturer");
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyManufacturerName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyManufacturerInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyManufacturerUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyManufacturerImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoManufacturer);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionModel(CallbackProduct1Model aCallback, void* aPtr)
{
    iCallbackModel = aCallback;
    iPtrModel = aPtr;
    Zapp::Action* action = new Zapp::Action("Model");
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyModelName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyModelInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyModelUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyModelImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoModel);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionProduct(CallbackProduct1Product aCallback, void* aPtr)
{
    iCallbackProduct = aCallback;
    iPtrProduct = aPtr;
    Zapp::Action* action = new Zapp::Action("Product");
    action->AddOutputParameter(new ParameterRelated("Room", *iPropertyProductRoom));
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyProductName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyProductInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyProductUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyProductImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoProduct);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionStandby(CallbackProduct1Standby aCallback, void* aPtr)
{
    iCallbackStandby = aCallback;
    iPtrStandby = aPtr;
    Zapp::Action* action = new Zapp::Action("Standby");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStandby));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoStandby);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionSetStandby(CallbackProduct1SetStandby aCallback, void* aPtr)
{
    iCallbackSetStandby = aCallback;
    iPtrSetStandby = aPtr;
    Zapp::Action* action = new Zapp::Action("SetStandby");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyStandby));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoSetStandby);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionSourceCount(CallbackProduct1SourceCount aCallback, void* aPtr)
{
    iCallbackSourceCount = aCallback;
    iPtrSourceCount = aPtr;
    Zapp::Action* action = new Zapp::Action("SourceCount");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceCount));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoSourceCount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionSourceXml(CallbackProduct1SourceXml aCallback, void* aPtr)
{
    iCallbackSourceXml = aCallback;
    iPtrSourceXml = aPtr;
    Zapp::Action* action = new Zapp::Action("SourceXml");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceXml));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoSourceXml);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionSourceIndex(CallbackProduct1SourceIndex aCallback, void* aPtr)
{
    iCallbackSourceIndex = aCallback;
    iPtrSourceIndex = aPtr;
    Zapp::Action* action = new Zapp::Action("SourceIndex");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceIndex));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoSourceIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionSetSourceIndex(CallbackProduct1SetSourceIndex aCallback, void* aPtr)
{
    iCallbackSetSourceIndex = aCallback;
    iPtrSetSourceIndex = aPtr;
    Zapp::Action* action = new Zapp::Action("SetSourceIndex");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertySourceIndex));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoSetSourceIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionSetSourceIndexByName(CallbackProduct1SetSourceIndexByName aCallback, void* aPtr)
{
    iCallbackSetSourceIndexByName = aCallback;
    iPtrSetSourceIndexByName = aPtr;
    Zapp::Action* action = new Zapp::Action("SetSourceIndexByName");
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoSetSourceIndexByName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionSource(CallbackProduct1Source aCallback, void* aPtr)
{
    iCallbackSource = aCallback;
    iPtrSource = aPtr;
    Zapp::Action* action = new Zapp::Action("Source");
    action->AddInputParameter(new ParameterRelated("Index", *iPropertySourceIndex));
    action->AddOutputParameter(new ParameterString("SystemName"));
    action->AddOutputParameter(new ParameterString("Type"));
    action->AddOutputParameter(new ParameterString("Name"));
    action->AddOutputParameter(new ParameterBool("Visible"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoSource);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionAttributes(CallbackProduct1Attributes aCallback, void* aPtr)
{
    iCallbackAttributes = aCallback;
    iPtrAttributes = aPtr;
    Zapp::Action* action = new Zapp::Action("Attributes");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyAttributes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoAttributes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::EnableActionSourceXmlChangeCount(CallbackProduct1SourceXmlChangeCount aCallback, void* aPtr)
{
    iCallbackSourceXmlChangeCount = aCallback;
    iPtrSourceXmlChangeCount = aPtr;
    Zapp::Action* action = new Zapp::Action("SourceXmlChangeCount");
    action->AddOutputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct1C::DoSourceXmlChangeCount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct1C::DoManufacturer(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    char* Name;
    char* Info;
    char* Url;
    char* ImageUri;
    ASSERT(iCallbackManufacturer != NULL);
    if (0 != iCallbackManufacturer(iPtrManufacturer, aVersion, &Name, &Info, &Url, &ImageUri)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    InvocationResponseString respName(aInvocation, "Name");
    InvocationResponseString respInfo(aInvocation, "Info");
    InvocationResponseString respUrl(aInvocation, "Url");
    InvocationResponseString respImageUri(aInvocation, "ImageUri");
    resp.Start();
    Brhz bufName((const TChar*)Name);
    ZappFreeExternal(Name);
    respName.Write(bufName);
    respName.WriteFlush();
    Brhz bufInfo((const TChar*)Info);
    ZappFreeExternal(Info);
    respInfo.Write(bufInfo);
    respInfo.WriteFlush();
    Brhz bufUrl((const TChar*)Url);
    ZappFreeExternal(Url);
    respUrl.Write(bufUrl);
    respUrl.WriteFlush();
    Brhz bufImageUri((const TChar*)ImageUri);
    ZappFreeExternal(ImageUri);
    respImageUri.Write(bufImageUri);
    respImageUri.WriteFlush();
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoModel(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    char* Name;
    char* Info;
    char* Url;
    char* ImageUri;
    ASSERT(iCallbackModel != NULL);
    if (0 != iCallbackModel(iPtrModel, aVersion, &Name, &Info, &Url, &ImageUri)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    InvocationResponseString respName(aInvocation, "Name");
    InvocationResponseString respInfo(aInvocation, "Info");
    InvocationResponseString respUrl(aInvocation, "Url");
    InvocationResponseString respImageUri(aInvocation, "ImageUri");
    resp.Start();
    Brhz bufName((const TChar*)Name);
    ZappFreeExternal(Name);
    respName.Write(bufName);
    respName.WriteFlush();
    Brhz bufInfo((const TChar*)Info);
    ZappFreeExternal(Info);
    respInfo.Write(bufInfo);
    respInfo.WriteFlush();
    Brhz bufUrl((const TChar*)Url);
    ZappFreeExternal(Url);
    respUrl.Write(bufUrl);
    respUrl.WriteFlush();
    Brhz bufImageUri((const TChar*)ImageUri);
    ZappFreeExternal(ImageUri);
    respImageUri.Write(bufImageUri);
    respImageUri.WriteFlush();
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoProduct(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    char* Room;
    char* Name;
    char* Info;
    char* Url;
    char* ImageUri;
    ASSERT(iCallbackProduct != NULL);
    if (0 != iCallbackProduct(iPtrProduct, aVersion, &Room, &Name, &Info, &Url, &ImageUri)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    InvocationResponseString respRoom(aInvocation, "Room");
    InvocationResponseString respName(aInvocation, "Name");
    InvocationResponseString respInfo(aInvocation, "Info");
    InvocationResponseString respUrl(aInvocation, "Url");
    InvocationResponseString respImageUri(aInvocation, "ImageUri");
    resp.Start();
    Brhz bufRoom((const TChar*)Room);
    ZappFreeExternal(Room);
    respRoom.Write(bufRoom);
    respRoom.WriteFlush();
    Brhz bufName((const TChar*)Name);
    ZappFreeExternal(Name);
    respName.Write(bufName);
    respName.WriteFlush();
    Brhz bufInfo((const TChar*)Info);
    ZappFreeExternal(Info);
    respInfo.Write(bufInfo);
    respInfo.WriteFlush();
    Brhz bufUrl((const TChar*)Url);
    ZappFreeExternal(Url);
    respUrl.Write(bufUrl);
    respUrl.WriteFlush();
    Brhz bufImageUri((const TChar*)ImageUri);
    ZappFreeExternal(ImageUri);
    respImageUri.Write(bufImageUri);
    respImageUri.WriteFlush();
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoStandby(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackStandby != NULL);
    if (0 != iCallbackStandby(iPtrStandby, aVersion, &Value)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    InvocationResponseBool respValue(aInvocation, "Value");
    resp.Start();
    respValue.Write((Value!=0));
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoSetStandby(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    TBool Value = aInvocation.InvocationReadBool("Value");
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    ASSERT(iCallbackSetStandby != NULL);
    if (0 != iCallbackSetStandby(iPtrSetStandby, aVersion, Value)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    resp.Start();
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoSourceCount(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackSourceCount != NULL);
    if (0 != iCallbackSourceCount(iPtrSourceCount, aVersion, &Value)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    InvocationResponseUint respValue(aInvocation, "Value");
    resp.Start();
    respValue.Write(Value);
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoSourceXml(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    char* Value;
    ASSERT(iCallbackSourceXml != NULL);
    if (0 != iCallbackSourceXml(iPtrSourceXml, aVersion, &Value)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    InvocationResponseString respValue(aInvocation, "Value");
    resp.Start();
    Brhz bufValue((const TChar*)Value);
    ZappFreeExternal(Value);
    respValue.Write(bufValue);
    respValue.WriteFlush();
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoSourceIndex(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackSourceIndex != NULL);
    if (0 != iCallbackSourceIndex(iPtrSourceIndex, aVersion, &Value)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    InvocationResponseUint respValue(aInvocation, "Value");
    resp.Start();
    respValue.Write(Value);
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoSetSourceIndex(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    ASSERT(iCallbackSetSourceIndex != NULL);
    if (0 != iCallbackSetSourceIndex(iPtrSetSourceIndex, aVersion, Value)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    resp.Start();
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoSetSourceIndexByName(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    Brhz Value;
    aInvocation.InvocationReadString("Value", Value);
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    ASSERT(iCallbackSetSourceIndexByName != NULL);
    if (0 != iCallbackSetSourceIndexByName(iPtrSetSourceIndexByName, aVersion, (const char*)Value.Ptr())) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    resp.Start();
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoSource(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    TUint Index = aInvocation.InvocationReadUint("Index");
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    char* SystemName;
    char* Type;
    char* Name;
    uint32_t Visible;
    ASSERT(iCallbackSource != NULL);
    if (0 != iCallbackSource(iPtrSource, aVersion, Index, &SystemName, &Type, &Name, &Visible)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    InvocationResponseString respSystemName(aInvocation, "SystemName");
    InvocationResponseString respType(aInvocation, "Type");
    InvocationResponseString respName(aInvocation, "Name");
    InvocationResponseBool respVisible(aInvocation, "Visible");
    resp.Start();
    Brhz bufSystemName((const TChar*)SystemName);
    ZappFreeExternal(SystemName);
    respSystemName.Write(bufSystemName);
    respSystemName.WriteFlush();
    Brhz bufType((const TChar*)Type);
    ZappFreeExternal(Type);
    respType.Write(bufType);
    respType.WriteFlush();
    Brhz bufName((const TChar*)Name);
    ZappFreeExternal(Name);
    respName.Write(bufName);
    respName.WriteFlush();
    respVisible.Write((Visible!=0));
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoAttributes(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    char* Value;
    ASSERT(iCallbackAttributes != NULL);
    if (0 != iCallbackAttributes(iPtrAttributes, aVersion, &Value)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    InvocationResponseString respValue(aInvocation, "Value");
    resp.Start();
    Brhz bufValue((const TChar*)Value);
    ZappFreeExternal(Value);
    respValue.Write(bufValue);
    respValue.WriteFlush();
    resp.End();
}

void DvProviderAvOpenhomeOrgProduct1C::DoSourceXmlChangeCount(IDviInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    InvocationResponse resp(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackSourceXmlChangeCount != NULL);
    if (0 != iCallbackSourceXmlChangeCount(iPtrSourceXmlChangeCount, aVersion, &Value)) {
        resp.Error(502, Brn("Action failed"));
        return;
    }
    InvocationResponseUint respValue(aInvocation, "Value");
    resp.Start();
    respValue.Write(Value);
    resp.End();
}



THandle DvProviderAvOpenhomeOrgProduct1Create(DvDeviceC aDevice)
{
	return new DvProviderAvOpenhomeOrgProduct1C(aDevice);
}

void DvProviderAvOpenhomeOrgProduct1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionManufacturer(THandle aProvider, CallbackProduct1Manufacturer aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionManufacturer(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionModel(THandle aProvider, CallbackProduct1Model aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionModel(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionProduct(THandle aProvider, CallbackProduct1Product aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionProduct(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionStandby(THandle aProvider, CallbackProduct1Standby aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionStandby(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionSetStandby(THandle aProvider, CallbackProduct1SetStandby aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionSetStandby(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionSourceCount(THandle aProvider, CallbackProduct1SourceCount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionSourceCount(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionSourceXml(THandle aProvider, CallbackProduct1SourceXml aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionSourceXml(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionSourceIndex(THandle aProvider, CallbackProduct1SourceIndex aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionSourceIndex(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionSetSourceIndex(THandle aProvider, CallbackProduct1SetSourceIndex aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionSetSourceIndex(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionSetSourceIndexByName(THandle aProvider, CallbackProduct1SetSourceIndexByName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionSetSourceIndexByName(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionSource(THandle aProvider, CallbackProduct1Source aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionSource(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionAttributes(THandle aProvider, CallbackProduct1Attributes aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionAttributes(aCallback, aPtr);
}

void DvProviderAvOpenhomeOrgProduct1EnableActionSourceXmlChangeCount(THandle aProvider, CallbackProduct1SourceXmlChangeCount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->EnableActionSourceXmlChangeCount(aCallback, aPtr);
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyManufacturerName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyManufacturerName(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyManufacturerName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyManufacturerName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyManufacturerInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyManufacturerInfo(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyManufacturerInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyManufacturerInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyManufacturerUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyManufacturerUrl(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyManufacturerUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyManufacturerUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyManufacturerImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyManufacturerImageUri(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyManufacturerImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyManufacturerImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyModelName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyModelName(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyModelName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyModelName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyModelInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyModelInfo(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyModelInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyModelInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyModelUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyModelUrl(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyModelUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyModelUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyModelImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyModelImageUri(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyModelImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyModelImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyProductRoom(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyProductRoom(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyProductRoom(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyProductRoom(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyProductName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyProductName(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyProductName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyProductName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyProductInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyProductInfo(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyProductInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyProductInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyProductUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyProductUrl(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyProductUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyProductUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyProductImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyProductImageUri(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyProductImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyProductImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyStandby(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyStandby((aValue!=0))? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyStandby(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyStandby(val);
    *aValue = (val? 1 : 0);
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertySourceIndex(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertySourceIndex(aValue)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertySourceIndex(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertySourceIndex(val);
    *aValue = val;
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertySourceCount(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertySourceCount(aValue)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertySourceCount(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertySourceCount(val);
    *aValue = val;
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertySourceXml(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertySourceXml(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertySourceXml(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertySourceXml(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderAvOpenhomeOrgProduct1SetPropertyAttributes(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->SetPropertyAttributes(buf)? 1 : 0);
    return 0;
}

void DvProviderAvOpenhomeOrgProduct1GetPropertyAttributes(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct1C*>(aProvider)->GetPropertyAttributes(buf);
    *aValue = (char*)buf.Transfer();
}

