#pragma once
#include "CoreMinimal.h"
#include "EACClientInitAnalytics.h"
#include "EACClientAuthChallengeAnalytics.generated.h"

USTRUCT()
struct FEACClientAuthChallengeAnalytics : public FEACClientInitAnalytics {
    GENERATED_BODY()
public:
    DBDANALYTICS_API FEACClientAuthChallengeAnalytics();
};

