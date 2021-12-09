#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "GameInitAnalytics.generated.h"

USTRUCT()
struct FGameInitAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString InitGuid;
    
    UPROPERTY()
    FString ProgressionName;
    
    UPROPERTY()
    bool Success;
    
    UPROPERTY()
    FString LoadCompleteState;
    
    UPROPERTY()
    float ElapsedTime;
    
    UPROPERTY()
    uint32 FailureCount;
    
    UPROPERTY()
    FString AdditionalInfo;
    
    DBDANALYTICS_API FGameInitAnalytics();
};

