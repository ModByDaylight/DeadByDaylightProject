#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EmblemProgressionDetailsAnalytics.h"
#include "EmblemProgressionAnalytics.generated.h"

USTRUCT()
struct FEmblemProgressionAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FString EmblemId;
    
    UPROPERTY()
    float EmblemValue;
    
    UPROPERTY()
    FString EmblemQuality;
    
    UPROPERTY()
    TArray<FEmblemProgressionDetailsAnalytics> ProgressionDetails;
    
    DBDANALYTICS_API FEmblemProgressionAnalytics();
};

