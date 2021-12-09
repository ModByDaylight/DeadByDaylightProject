#pragma once
#include "CoreMinimal.h"
#include "EmblemProgressionDetailsAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FEmblemProgressionDetailsAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ProgressionType;
    
    UPROPERTY()
    float ProgressionPoint;
    
    DBDANALYTICS_API FEmblemProgressionDetailsAnalytics();
};

