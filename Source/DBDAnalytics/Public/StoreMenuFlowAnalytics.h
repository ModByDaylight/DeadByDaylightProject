#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "StoreMenuFlowAnalytics.generated.h"

USTRUCT()
struct FStoreMenuFlowAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString EventTimestamp;
    
    UPROPERTY()
    FString EventName;
    
    UPROPERTY()
    FString Data;
    
    DBDANALYTICS_API FStoreMenuFlowAnalytics();
};

