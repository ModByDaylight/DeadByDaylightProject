#pragma once
#include "CoreMinimal.h"
#include "StatsProgressionData.h"
#include "SerializablePlayerStatsProgression.generated.h"

USTRUCT()
struct FSerializablePlayerStatsProgression {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FStatsProgressionData> StatsProgression;
    
    DBDANALYTICS_API FSerializablePlayerStatsProgression();
};

