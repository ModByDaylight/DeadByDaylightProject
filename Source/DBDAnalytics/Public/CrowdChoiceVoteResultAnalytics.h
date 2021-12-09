#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CrowdChoiceVoteResultAnalytics.generated.h"

USTRUCT()
struct FCrowdChoiceVoteResultAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PollId;
    
    UPROPERTY()
    FString VoteOption;
    
    UPROPERTY()
    int32 VoteCount;
    
    DBDANALYTICS_API FCrowdChoiceVoteResultAnalytics();
};

