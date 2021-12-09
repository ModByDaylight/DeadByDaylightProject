#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PlayerStatusEffectUpdateAnalytics.generated.h"

USTRUCT()
struct FPlayerStatusEffectUpdateAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 ElapsedMatchTime;
    
    UPROPERTY()
    int32 NbOfConcurrentStatusEffects;
    
    UPROPERTY()
    TArray<FString> StatusEffects;
    
    DBDANALYTICS_API FPlayerStatusEffectUpdateAnalytics();
};

