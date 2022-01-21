#pragma once
#include "CoreMinimal.h"
#include "LingeringStateTagStatusEffect.h"
#include "GameplayTagContainer.h"
#include "HinderOnIdleAndAttachStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHinderOnIdleAndAttachStatusEffect : public ULingeringStateTagStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _onCrowAttachStateTag;
    
public:
    UHinderOnIdleAndAttachStatusEffect();
};

