#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SaveGameSummaryPlayerStatsAnalytics.generated.h"

USTRUCT()
struct FSaveGameSummaryPlayerStatsAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString OwnedPerks;
    
    UPROPERTY()
    FString PlayerStatsProgression;
    
    UPROPERTY()
    int32 BloodwebPoints;
    
    UPROPERTY()
    int64 CumulativePlaytime;
    
    DBDANALYTICS_API FSaveGameSummaryPlayerStatsAnalytics();
};

