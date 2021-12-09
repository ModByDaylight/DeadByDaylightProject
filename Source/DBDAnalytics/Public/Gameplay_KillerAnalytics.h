#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "Gameplay_KillerAnalytics.generated.h"

USTRUCT()
struct FGameplay_KillerAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    float Speed;
    
    UPROPERTY()
    int32 BloodlustTier1Count;
    
    UPROPERTY()
    int32 BloodlustTier2Count;
    
    UPROPERTY()
    int32 BloodlustTier3Count;
    
    UPROPERTY()
    float BloodlustTier1Duration;
    
    UPROPERTY()
    float BloodlustTier2Duration;
    
    UPROPERTY()
    float BloodlustTier3Duration;
    
    UPROPERTY()
    float BloodlustSpeed;
    
    UPROPERTY()
    int32 ChaseCount;
    
    UPROPERTY()
    int32 ChaseCountFail;
    
    UPROPERTY()
    int32 ChaseCountSuccess;
    
    UPROPERTY()
    int32 ChaseCountTier1Fail;
    
    UPROPERTY()
    int32 ChaseCountTier1Success;
    
    UPROPERTY()
    int32 ChaseCountTier2Fail;
    
    UPROPERTY()
    int32 ChaseCountTier2Success;
    
    UPROPERTY()
    int32 ChaseCountTier3Fail;
    
    UPROPERTY()
    int32 ChaseCountTier3Success;
    
    UPROPERTY()
    int32 HookCount;
    
    UPROPERTY()
    int32 MurderCount;
    
    UPROPERTY()
    int32 PalletSpawned;
    
    UPROPERTY()
    int32 PalletProcedural;
    
    UPROPERTY()
    int32 PalletProceduralSetCount;
    
    UPROPERTY()
    uint32 PalletGenerationId;
    
    UPROPERTY()
    int32 PalletGeneric;
    
    UPROPERTY()
    int32 PalletDestroyed;
    
    UPROPERTY()
    int32 BreakableWallSpawned;
    
    UPROPERTY()
    int32 BreakableWallDestroyed;
    
    UPROPERTY()
    int32 DropCount;
    
    UPROPERTY()
    int32 HitCloseCount;
    
    UPROPERTY()
    int32 HitCloseCountSuccess;
    
    UPROPERTY()
    int32 HitFarCount;
    
    UPROPERTY()
    int32 HitFarCountSuccess;
    
    UPROPERTY()
    int32 HitSpecialCount;
    
    UPROPERTY()
    int32 HitSpecialCountSuccess;
    
    UPROPERTY()
    int32 ClosetOpen;
    
    UPROPERTY()
    int32 ClosetOpenSuccess;
    
    UPROPERTY()
    int32 EscapeesHatchCount;
    
    UPROPERTY()
    float SecondesAtLeastOneSurvivorHooked;
    
    UPROPERTY()
    uint32 AmountTilesVisited;
    
    UPROPERTY()
    float StartX;
    
    UPROPERTY()
    float StartY;
    
    UPROPERTY()
    float StartZ;
    
    DBDANALYTICS_API FGameplay_KillerAnalytics();
};

