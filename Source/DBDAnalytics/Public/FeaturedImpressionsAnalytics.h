#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FeaturedImpressionsAnalytics.generated.h"

USTRUCT()
struct FFeaturedImpressionsAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    DBDANALYTICS_API FFeaturedImpressionsAnalytics();
};

