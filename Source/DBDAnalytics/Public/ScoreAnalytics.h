#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ScoreAnalytics.generated.h"

USTRUCT()
struct FScoreAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FName ScoreTypeId;
    
    UPROPERTY()
    int32 ScoreCount;
    
    UPROPERTY()
    float ScoreBloodwebPoints;
    
    DBDANALYTICS_API FScoreAnalytics();
};

