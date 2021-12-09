#pragma once
#include "CoreMinimal.h"
#include "LoadoutBaseAnalytics.h"
#include "LoadOutAnalytics.generated.h"

USTRUCT()
struct FLoadOutAnalytics : public FLoadoutBaseAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    DBDANALYTICS_API FLoadOutAnalytics();
};

