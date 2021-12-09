#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "BasePerkAnalytics.generated.h"

USTRUCT()
struct FBasePerkAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    float ElapsedMatchTime;
    
    DBDANALYTICS_API FBasePerkAnalytics();
};

