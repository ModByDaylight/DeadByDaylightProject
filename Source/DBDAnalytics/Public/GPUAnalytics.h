#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "GPUAnalytics.generated.h"

USTRUCT()
struct FGPUAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FString MapName;
    
    UPROPERTY()
    FString Marker;
    
    UPROPERTY()
    float AverageMS;
    
    UPROPERTY()
    float StdDevMs;
    
    DBDANALYTICS_API FGPUAnalytics();
};

