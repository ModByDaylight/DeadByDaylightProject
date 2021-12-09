#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "WalesCypherAnalytics.generated.h"

USTRUCT()
struct FWalesCypherAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString EnteredSequence;
    
    UPROPERTY()
    FString ExpectedSequence;
    
    UPROPERTY()
    int32 TimeoutThreshold;
    
    UPROPERTY()
    bool Success;
    
    UPROPERTY()
    bool Timeout;
    
    UPROPERTY()
    bool CharmGranted;
    
    UPROPERTY()
    int32 ValidCharacterSelcted;
    
    DBDANALYTICS_API FWalesCypherAnalytics();
};

