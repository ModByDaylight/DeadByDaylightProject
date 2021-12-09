#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "AtlantaSessionStartAnalytics.generated.h"

USTRUCT()
struct FAtlantaSessionStartAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    DBDANALYTICS_API FAtlantaSessionStartAnalytics();
};

