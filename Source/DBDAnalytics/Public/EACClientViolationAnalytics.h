#pragma once
#include "CoreMinimal.h"
#include "EACAnalytics.h"
#include "EACClientViolationAnalytics.generated.h"

USTRUCT()
struct FEACClientViolationAnalytics : public FEACAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ViolationCase;
    
    DBDANALYTICS_API FEACClientViolationAnalytics();
};

