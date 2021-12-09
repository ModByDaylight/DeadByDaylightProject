#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ChainsawEventWhileCamping.h"
#include "ChainsawAnalytics.generated.h"

USTRUCT()
struct THEHILLBILLY_API FChainsawAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    TArray<FChainsawEventWhileCamping> DownSurvivorsWithChainsawWhileCampingEvents;
    
    FChainsawAnalytics();
};

