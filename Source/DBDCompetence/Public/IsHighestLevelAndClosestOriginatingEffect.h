#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "IsHighestLevelAndClosestOriginatingEffect.generated.h"

class UStatusEffect;

UCLASS()
class UIsHighestLevelAndClosestOriginatingEffect : public UGameplayModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UStatusEffect*> _applicableEffects;
    
    UFUNCTION()
    void OnStatusEffectAddedOrRemoved(UStatusEffect* effect, bool valid);
    
public:
    UIsHighestLevelAndClosestOriginatingEffect();
};

