#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "af_survivor_tutorial_completionAnalytics.generated.h"

USTRUCT()
struct Faf_survivor_tutorial_completionAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    DBDANALYTICS_API Faf_survivor_tutorial_completionAnalytics();
};

