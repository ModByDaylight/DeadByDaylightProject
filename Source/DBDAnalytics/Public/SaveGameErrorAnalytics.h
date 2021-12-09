#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SaveGameErrorAnalytics.generated.h"

USTRUCT()
struct FSaveGameErrorAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ErrorCode;
    
    UPROPERTY()
    FString Category;
    
    UPROPERTY()
    FString ErrorDetails;
    
    UPROPERTY()
    uint32 KrakenErrorCode;
    
    UPROPERTY()
    FString StateName;
    
    DBDANALYTICS_API FSaveGameErrorAnalytics();
};

