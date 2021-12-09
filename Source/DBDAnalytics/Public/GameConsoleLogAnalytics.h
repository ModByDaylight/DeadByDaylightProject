#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "GameConsoleLogAnalytics.generated.h"

USTRUCT()
struct FGameConsoleLogAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString GameConsoleLog;
    
    DBDANALYTICS_API FGameConsoleLogAnalytics();
};

