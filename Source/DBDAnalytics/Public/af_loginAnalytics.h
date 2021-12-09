#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "af_loginAnalytics.generated.h"

USTRUCT()
struct Faf_loginAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LoginMethod;
    
    DBDANALYTICS_API Faf_loginAnalytics();
};

