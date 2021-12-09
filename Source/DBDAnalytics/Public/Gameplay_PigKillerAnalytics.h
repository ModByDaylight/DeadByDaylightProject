#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "Gameplay_PigKillerAnalytics.generated.h"

USTRUCT()
struct FGameplay_PigKillerAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 AmbushHitCount;
    
    UPROPERTY()
    int32 RbtKilledCount;
    
    UPROPERTY()
    int32 Rbt1GeneratorCount;
    
    UPROPERTY()
    int32 Rbt2GeneratorCount;
    
    UPROPERTY()
    int32 Rbt3GeneratorCount;
    
    UPROPERTY()
    int32 Rbt4GeneratorCount;
    
    UPROPERTY()
    int32 Rbt5GeneratorCount;
    
    UPROPERTY()
    float CrouchDuration;
    
    UPROPERTY()
    int32 RbtExitKill;
    
    UPROPERTY()
    int32 RbtHookKill;
    
    DBDANALYTICS_API FGameplay_PigKillerAnalytics();
};

