#pragma once
#include "CoreMinimal.h"
#include "AwardedScore.h"
#include "AwardedScores.generated.h"

USTRUCT(BlueprintType)
struct FAwardedScores {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAwardedScore> Array;
    
    DEADBYDAYLIGHT_API FAwardedScores();
};

