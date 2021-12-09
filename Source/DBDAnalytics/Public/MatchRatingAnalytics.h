#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchRatingAnalytics.generated.h"

USTRUCT()
struct FMatchRatingAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Rating;
    
    UPROPERTY()
    FString MatchId;
    
    DBDANALYTICS_API FMatchRatingAnalytics();
};

