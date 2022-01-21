#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsHighestTierOriginatingPerk.generated.h"

class UStatusEffect;
class UGameplayModifierContainer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsHighestTierOriginatingPerk : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UStatusEffect*> _applicableEffects;
    
public:
    UIsHighestTierOriginatingPerk();
private:
    UFUNCTION()
    void OnStatusEffectApplicableChanged(UGameplayModifierContainer* gameplayModifierContainer, bool isApplicable);
    
    UFUNCTION()
    void OnStatusEffectAddedOrRemoved(UStatusEffect* effect, bool valid);
    
};

