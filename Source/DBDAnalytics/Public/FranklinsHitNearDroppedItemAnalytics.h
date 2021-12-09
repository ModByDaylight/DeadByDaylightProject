#pragma once
#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "FranklinsHitNearDroppedItemAnalytics.generated.h"

USTRUCT()
struct FFranklinsHitNearDroppedItemAnalytics : public FBasePerkAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString HitSurvivorMirrorsId;
    
    UPROPERTY()
    FString AttackingSlasherMirrorsId;
    
    DBDANALYTICS_API FFranklinsHitNearDroppedItemAnalytics();
};

