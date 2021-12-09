#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SaveGameSummaryCharacterStatsAnalytics.generated.h"

USTRUCT()
struct FSaveGameSummaryCharacterStatsAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SavedCharacterStats;
    
    DBDANALYTICS_API FSaveGameSummaryCharacterStatsAnalytics();
};

