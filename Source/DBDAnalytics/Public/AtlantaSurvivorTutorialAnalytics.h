#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "AtlantaSurvivorTutorialAnalytics.generated.h"

USTRUCT()
struct FAtlantaSurvivorTutorialAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool SurvivorTutorialCompleted;
    
    UPROPERTY()
    bool SurvivorTutorialSkipped;
    
    DBDANALYTICS_API FAtlantaSurvivorTutorialAnalytics();
};

