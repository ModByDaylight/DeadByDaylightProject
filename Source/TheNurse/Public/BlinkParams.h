#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlinkParams.generated.h"

USTRUCT(BlueprintType)
struct FBlinkParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform TargetTransform;
    
    UPROPERTY()
    float Duration;
    
    THENURSE_API FBlinkParams();
};

