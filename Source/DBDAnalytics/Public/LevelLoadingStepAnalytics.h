#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LevelLoadingStepAnalytics.generated.h"

USTRUCT()
struct FLevelLoadingStepAnalytics : public FUniquelyIdentifiedAnalytic {
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
    
    UPROPERTY()
    bool IsTimeout;
    
    DBDANALYTICS_API FLevelLoadingStepAnalytics();
};

