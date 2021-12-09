#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "Gameplay_ChaseAnalytics.generated.h"

USTRUCT()
struct FGameplay_ChaseAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    bool IsABot;
    
    UPROPERTY()
    FString MirrorsIdSurvivor;
    
    UPROPERTY()
    float CoordXStartKiller;
    
    UPROPERTY()
    float CoordYStartKiller;
    
    UPROPERTY()
    float CoordZStartKiller;
    
    UPROPERTY()
    float CoordXEndKiller;
    
    UPROPERTY()
    float CoordYEndKiller;
    
    UPROPERTY()
    float CoordZEndKiller;
    
    UPROPERTY()
    int32 PalletsDestroyedByKiller;
    
    UPROPERTY()
    int32 WindowsVaultedByKiller;
    
    UPROPERTY()
    int32 PalletsVaultedByKiller;
    
    UPROPERTY()
    int32 BasicAttackSwingsByKiller;
    
    UPROPERTY()
    int32 BasicAttackHitsByKiller;
    
    UPROPERTY()
    int32 SpecialAttackAttemptsByKiller;
    
    UPROPERTY()
    int32 SpecialAttackHitsByKiller;
    
    UPROPERTY()
    float DistanceCoveredKiller;
    
    UPROPERTY()
    float CoordXStartSurvivor;
    
    UPROPERTY()
    float CoordYStartSurvivor;
    
    UPROPERTY()
    float CoordZStartSurvivor;
    
    UPROPERTY()
    float CoordXEndSurvivor;
    
    UPROPERTY()
    float CoordYEndSurvivor;
    
    UPROPERTY()
    float CoordZEndSurvivor;
    
    UPROPERTY()
    int32 PalletsDroppedBySurvivor;
    
    UPROPERTY()
    int32 PalletsStunnedBySurvivor;
    
    UPROPERTY()
    int32 WindowsVaultedBySurvivor;
    
    UPROPERTY()
    int32 PalletsVaultedBySurvivor;
    
    UPROPERTY()
    int32 StartingHealthOfSurvivor;
    
    UPROPERTY()
    int32 EndingHealthOfSurvivor;
    
    UPROPERTY()
    int32 AmountHealedOfSurvivor;
    
    UPROPERTY()
    FString StartingTileSurvivor;
    
    UPROPERTY()
    FString EndingTileSurvivor;
    
    UPROPERTY()
    int32 AmountOfTilesVisitedSurvivor;
    
    UPROPERTY()
    TArray<FString> TilesVisitedSurvivor;
    
    UPROPERTY()
    float DistanceCoveredSurvivor;
    
    UPROPERTY()
    float DisplacementSurvivor;
    
    UPROPERTY()
    float ChaseStartTimeInSecond;
    
    UPROPERTY()
    float ChaseEndTimeInSecond;
    
    DBDANALYTICS_API FGameplay_ChaseAnalytics();
};

