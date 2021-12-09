#pragma once
#include "CoreMinimal.h"
#include "AtlantaRitualDifficulty.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Threshold;
    
    UPROPERTY()
    float Tolerance;
    
    UPROPERTY()
    float DisplayThreshold;
    
    DEADBYDAYLIGHT_API FAtlantaRitualDifficulty();
};

