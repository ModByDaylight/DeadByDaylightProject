#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlightPowerEstimatedCollisionIndicator.generated.h"

UCLASS()
class ABlightPowerEstimatedCollisionIndicator : public AActor {
    GENERATED_BODY()
public:
    ABlightPowerEstimatedCollisionIndicator();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnShowIndicator_Cosmetic();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnHideIndicator_Cosmetic();
    
};

