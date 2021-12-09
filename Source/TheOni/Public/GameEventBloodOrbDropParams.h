#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEventBloodOrbDropParams.generated.h"

USTRUCT(BlueprintType)
struct FGameEventBloodOrbDropParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag GameEvent;
    
    UPROPERTY(EditDefaultsOnly)
    float ImpulseFactor;
    
    THEONI_API FGameEventBloodOrbDropParams();
};

