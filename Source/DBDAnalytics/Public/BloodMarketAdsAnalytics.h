#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "BloodMarketAdsAnalytics.generated.h"

USTRUCT()
struct FBloodMarketAdsAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ItemId;
    
    UPROPERTY()
    int32 BloodMarketAdDepth;
    
    DBDANALYTICS_API FBloodMarketAdsAnalytics();
};

