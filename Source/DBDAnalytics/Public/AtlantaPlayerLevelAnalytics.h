#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "AtlantaPlayerLevelAnalytics.generated.h"

USTRUCT()
struct FAtlantaPlayerLevelAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PlayerLevel;
    
    UPROPERTY()
    int32 PlayerPrestigeLevel;
    
    DBDANALYTICS_API FAtlantaPlayerLevelAnalytics();
};

