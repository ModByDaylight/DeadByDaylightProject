#pragma once
#include "CoreMinimal.h"
#include "EEmblemProgressionType.h"
#include "ProgressionPoints.generated.h"

USTRUCT(BlueprintType)
struct FProgressionPoints {
    GENERATED_BODY()
public:
    UPROPERTY()
    EEmblemProgressionType Type;
    
    UPROPERTY()
    float Points;
    
    DEADBYDAYLIGHT_API FProgressionPoints();
};

