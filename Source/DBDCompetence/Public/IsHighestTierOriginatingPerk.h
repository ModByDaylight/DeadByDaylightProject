#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsHighestTierOriginatingPerk.generated.h"

class UGameplayModifierContainer;
class UStatusEffect;

UCLASS()
class UIsHighestTierOriginatingPerk : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UStatusEffect*> _applicableEffects;
    
    UFUNCTION()
    void OnStatusEffectApplicableChanged(UGameplayModifierContainer* gameplayModifierContainer, bool isApplicable);
    
    UFUNCTION()
    void OnStatusEffectAddedOrRemoved(UStatusEffect* effect, bool valid);
    
public:
    UIsHighestTierOriginatingPerk();
};

