#pragma once
#include "CoreMinimal.h"
#include "AwardedScore.generated.h"

USTRUCT(BlueprintType)
struct FAwardedScore {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ScoreTypeId;
    
    UPROPERTY()
    float BloodpointsAwarded;
    
    DEADBYDAYLIGHT_API FAwardedScore();
};

