#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "Gameplay_SurvivorAnalytics.generated.h"

USTRUCT()
struct FGameplay_SurvivorAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    float Speed;
    
    UPROPERTY()
    float InjuredSpeed;
    
    UPROPERTY()
    float InjuredDuration;
    
    UPROPERTY()
    float HealthyDuration;
    
    UPROPERTY()
    float KODuration;
    
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
    int32 PalletDrop;
    
    UPROPERTY()
    int32 PalletStun;
    
    UPROPERTY()
    int32 UnhookCount;
    
    UPROPERTY()
    int32 HealCount;
    
    UPROPERTY()
    int32 HealCountSuccess;
    
    UPROPERTY()
    int32 ClosetEnter;
    
    UPROPERTY()
    int32 Hatch;
    
    UPROPERTY()
    int32 SkillCheckCount;
    
    UPROPERTY()
    int32 SkillCheckCountGood;
    
    UPROPERTY()
    int32 SkillCheckCountGreat;
    
    UPROPERTY()
    float ChaseDuration;
    
    UPROPERTY()
    int32 NumChases;
    
    UPROPERTY()
    int32 HitBySlasherCount;
    
    UPROPERTY()
    uint32 AmountTilesVisited;
    
    UPROPERTY()
    float StartX;
    
    UPROPERTY()
    float StartY;
    
    UPROPERTY()
    float StartZ;
    
    UPROPERTY()
    int32 EmotePoint;
    
    UPROPERTY()
    int32 EmoteCome;
    
    UPROPERTY()
    float CrouchingDuration;
    
    UPROPERTY()
    int32 CrouchingCount;
    
    UPROPERTY()
    float CrawlingDuration;
    
    DBDANALYTICS_API FGameplay_SurvivorAnalytics();
};

