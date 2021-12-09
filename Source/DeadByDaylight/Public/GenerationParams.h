#pragma once
#include "CoreMinimal.h"
#include "GenerationParams.generated.h"

USTRUCT(BlueprintType)
struct FGenerationParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Seed;
    
    DEADBYDAYLIGHT_API FGenerationParams();
};

