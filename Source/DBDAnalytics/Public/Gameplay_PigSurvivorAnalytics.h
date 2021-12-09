#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "Gameplay_PigSurvivorAnalytics.generated.h"

USTRUCT()
struct FGameplay_PigSurvivorAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 RbtAttachedCount;
    
    UPROPERTY()
    int32 ActivatedRbtTimerCount;
    
    UPROPERTY()
    int32 RbtSuccessSearchCount;
    
    UPROPERTY()
    int32 RbtFailedSearchCount;
    
    UPROPERTY()
    int32 RbtDisabledPreActivation;
    
    UPROPERTY()
    int32 RbtDisabledPostActivation;
    
    UPROPERTY()
    float RbtChaseDuration;
    
    UPROPERTY()
    float RbtAverageTimeLeftBeforeDisable;
    
    UPROPERTY()
    float RbtDuration;
    
    DBDANALYTICS_API FGameplay_PigSurvivorAnalytics();
};

