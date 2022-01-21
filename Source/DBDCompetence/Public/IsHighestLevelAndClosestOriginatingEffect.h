#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "IsHighestLevelAndClosestOriginatingEffect.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsHighestLevelAndClosestOriginatingEffect : public UGameplayModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UStatusEffect*> _applicableEffects;
    
public:
    UIsHighestLevelAndClosestOriginatingEffect();
private:
    UFUNCTION()
    void OnStatusEffectAddedOrRemoved(UStatusEffect* effect, bool valid);
    
};

