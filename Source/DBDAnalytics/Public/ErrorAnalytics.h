#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ErrorAnalytics.generated.h"

USTRUCT()
struct FErrorAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ErrorCategory;
    
    UPROPERTY()
    FString LogMessage;
    
    DBDANALYTICS_API FErrorAnalytics();
};

