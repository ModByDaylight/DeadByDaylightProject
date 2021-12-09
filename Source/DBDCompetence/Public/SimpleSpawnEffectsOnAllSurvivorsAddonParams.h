#pragma once
#include "CoreMinimal.h"
#include "SimpleSpawnEffectsOnAllSurvivorsAddonParams.generated.h"

USTRUCT(BlueprintType)
struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName _statusEffectId;
    
    UPROPERTY(EditDefaultsOnly)
    float _customParam;
    
    DBDCOMPETENCE_API FSimpleSpawnEffectsOnAllSurvivorsAddonParams();
};

