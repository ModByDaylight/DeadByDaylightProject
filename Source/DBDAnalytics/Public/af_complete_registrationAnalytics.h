#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "af_complete_registrationAnalytics.generated.h"

USTRUCT()
struct Faf_complete_registrationAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LoginMethod;
    
    DBDANALYTICS_API Faf_complete_registrationAnalytics();
};

