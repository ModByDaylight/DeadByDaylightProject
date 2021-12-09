#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PerkViewData.h"
#include "PerkViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPerkViewInterface : public UInterface {
    GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPerkViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePerkCooldown(float cooldownValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(const FPerkViewData& perkViewData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearData();
    
};

