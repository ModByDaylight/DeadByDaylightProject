#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.generated.h"

USTRUCT()
struct BHVRANALYTICS_API FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SessionGuid;
    
    FBaseSingleStructIndexAnalytics();
};

