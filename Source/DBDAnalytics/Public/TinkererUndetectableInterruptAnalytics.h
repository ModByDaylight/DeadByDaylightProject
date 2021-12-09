#pragma once
#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "TinkererUndetectableInterruptAnalytics.generated.h"

USTRUCT()
struct FTinkererUndetectableInterruptAnalytics : public FBasePerkAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString InterruptedSurvivorMirrorsId;
    
    UPROPERTY()
    FString InterruptingSlasherMirrorsId;
    
    DBDANALYTICS_API FTinkererUndetectableInterruptAnalytics();
};

