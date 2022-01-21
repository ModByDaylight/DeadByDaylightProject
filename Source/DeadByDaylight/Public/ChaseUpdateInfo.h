#pragma once
#include "CoreMinimal.h"
#include "ECamperDamageState.h"
#include "TargetFocusTimer.h"
#include "ChaseUpdateInfo.generated.h"

USTRUCT(BlueprintType)
struct FChaseUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTargetFocusTimer ChaseTimer;
    
    UPROPERTY()
    float SurvivorTravelDistance;
    
    UPROPERTY()
    float KillerTravelDistance;
    
    UPROPERTY()
    ECamperDamageState ChaseStartHealthStatus;
    
    DEADBYDAYLIGHT_API FChaseUpdateInfo();
};

