#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LoadingTimeoutAnalytics.generated.h"

USTRUCT()
struct FLoadingTimeoutAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString match_id;
    
    UPROPERTY()
    FString lobby_id;
    
    UPROPERTY()
    FString timeout_timestamp;
    
    UPROPERTY()
    float total_load_time;
    
    UPROPERTY()
    FString current_map_name;
    
    UPROPERTY()
    FString transition_id;
    
    DBDANALYTICS_API FLoadingTimeoutAnalytics();
};

