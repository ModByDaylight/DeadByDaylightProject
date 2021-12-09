#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "af_killer_tutorial_completionAnalytics.generated.h"

USTRUCT()
struct Faf_killer_tutorial_completionAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    DBDANALYTICS_API Faf_killer_tutorial_completionAnalytics();
};

