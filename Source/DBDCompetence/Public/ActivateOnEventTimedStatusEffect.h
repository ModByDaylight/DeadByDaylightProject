#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "GameplayTagContainer.h"
#include "ActivateOnEventTimedStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UActivateOnEventTimedStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer _eventsToActivateOn;
    
public:
    UActivateOnEventTimedStatusEffect();
};

