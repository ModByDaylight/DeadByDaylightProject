#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingJoinSessionAnalytics.generated.h"

USTRUCT()
struct FMatchmakingJoinSessionAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Log;
    
    DBDANALYTICS_API FMatchmakingJoinSessionAnalytics();
};

