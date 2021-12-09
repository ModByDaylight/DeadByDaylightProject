#pragma once
#include "CoreMinimal.h"
#include "AIDetectedStimulus.h"
#include "TargetMoveAwayToFastInfo.generated.h"

USTRUCT(BlueprintType)
struct FTargetMoveAwayToFastInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    float AccumulatedTime;
    
    UPROPERTY()
    float CooldownUntilTime;
    
    UPROPERTY()
    FAIDetectedStimulus Stimulus;
    
    DBDBOTS_API FTargetMoveAwayToFastInfo();
};

