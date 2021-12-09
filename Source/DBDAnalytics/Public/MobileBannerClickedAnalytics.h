#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "MobileBannerClickedAnalytics.generated.h"

USTRUCT()
struct FMobileBannerClickedAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    DBDANALYTICS_API FMobileBannerClickedAnalytics();
};

