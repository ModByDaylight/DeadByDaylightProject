#pragma once
#include "CoreMinimal.h"
#include "StatsProgressionData.generated.h"

USTRUCT(BlueprintType)
struct FStatsProgressionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    float Value;
    
    DBDANALYTICS_API FStatsProgressionData();
};

