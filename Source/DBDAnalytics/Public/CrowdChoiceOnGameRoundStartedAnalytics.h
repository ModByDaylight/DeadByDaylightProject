#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CrowdChoiceOnGameRoundStartedAnalytics.generated.h"

USTRUCT()
struct FCrowdChoiceOnGameRoundStartedAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PollId;
    
    UPROPERTY()
    FString MatchId;
    
    DBDANALYTICS_API FCrowdChoiceOnGameRoundStartedAnalytics();
};

