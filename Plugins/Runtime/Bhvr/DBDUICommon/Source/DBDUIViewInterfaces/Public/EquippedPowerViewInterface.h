#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PowerBundleViewData.h"
#include "EquippedPowerViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UEquippedPowerViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IEquippedPowerViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(const FPowerBundleViewData& powerBundleData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCarryingMode(const bool isCarrying);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActiveState(bool isActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearData();
    
};

