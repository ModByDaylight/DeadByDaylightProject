#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FreeTrialLoginAnalytics.generated.h"

USTRUCT()
struct FFreeTrialLoginAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    DBDANALYTICS_API FFreeTrialLoginAnalytics();
};

