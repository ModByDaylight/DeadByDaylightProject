#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "MatchmakingIncentiveAnalytics.generated.h"

USTRUCT()
struct FMatchmakingIncentiveAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    DBDANALYTICS_API FMatchmakingIncentiveAnalytics();
};

