#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "TexturegroupChartingAnalytics.generated.h"

USTRUCT()
struct FTexturegroupChartingAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString texturegroup_name;
    
    UPROPERTY()
    FString texturegroups_guid;
    
    UPROPERTY()
    FString map_name;
    
    UPROPERTY()
    int32 avg_qty_streaming;
    
    UPROPERTY()
    int32 max_qty_streaming;
    
    UPROPERTY()
    int32 avg_memory_streaming;
    
    UPROPERTY()
    int32 max_memory_streaming;
    
    UPROPERTY()
    int32 avg_qty_non_streaming;
    
    UPROPERTY()
    int32 max_qty_non_streaming;
    
    UPROPERTY()
    int32 avg_memory_non_streaming;
    
    UPROPERTY()
    int32 max_memory_non_streaming;
    
    DBDANALYTICS_API FTexturegroupChartingAnalytics();
};

