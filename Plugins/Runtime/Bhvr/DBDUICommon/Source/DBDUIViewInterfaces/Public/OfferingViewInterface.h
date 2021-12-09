#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OfferingViewData.h"
#include "OfferingViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UOfferingViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IOfferingViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(const FOfferingViewData& offeringViewData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearData();
    
};

