#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LevelLoadingTimeoutAnalytics.generated.h"

USTRUCT()
struct FLevelLoadingTimeoutAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FString MapName;
    
    UPROPERTY()
    int32 Seed;
    
    UPROPERTY()
    float TimeElapsed;
    
    UPROPERTY()
    FString LoadingStep;
    
    DBDANALYTICS_API FLevelLoadingTimeoutAnalytics();
};

