#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "HeartbeatAnalytics.generated.h"

USTRUCT()
struct FHeartbeatAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString BeatTime;
    
    DBDANALYTICS_API FHeartbeatAnalytics();
};

