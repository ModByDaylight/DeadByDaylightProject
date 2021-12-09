#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "AtlantaRitualsAdsRefreshAnalytics.generated.h"

USTRUCT()
struct FAtlantaRitualsAdsRefreshAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Status;
    
    UPROPERTY()
    FString AdsId;
    
    DBDANALYTICS_API FAtlantaRitualsAdsRefreshAnalytics();
};

