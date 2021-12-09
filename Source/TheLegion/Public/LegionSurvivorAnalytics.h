#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LegionSurvivorAnalytics.generated.h"

USTRUCT()
struct FLegionSurvivorAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 DeepWoundCount;
    
    UPROPERTY()
    int32 FrenzyEffectivements;
    
    UPROPERTY()
    int32 DeepWoundDying;
    
    UPROPERTY()
    bool DeepWoundEscape;
    
    THELEGION_API FLegionSurvivorAnalytics();
};

