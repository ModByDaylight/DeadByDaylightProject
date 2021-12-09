#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ArchiveVignetteVideoAnalytics.generated.h"

USTRUCT()
struct FArchiveVignetteVideoAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ArchiveId;
    
    UPROPERTY()
    FString VignetteId;
    
    UPROPERTY()
    FString VideoId;
    
    UPROPERTY()
    FString StartVideoTimestamp;
    
    UPROPERTY()
    double VideoTimeSpent;
    
    UPROPERTY()
    bool WasVideoWatchUntilEnd;
    
    DBDANALYTICS_API FArchiveVignetteVideoAnalytics();
};

