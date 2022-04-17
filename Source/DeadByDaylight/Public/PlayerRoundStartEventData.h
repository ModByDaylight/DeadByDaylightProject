#pragma once
#include "CoreMinimal.h"
#include "PlayerRankData.h"
#include "EPlayerRole.h"
#include "EAIDifficultyLevel.h"
#include "PlayerRoundStartEventData.generated.h"

USTRUCT()
struct FPlayerRoundStartEventData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EPlayerRole PlayerRole;
    
    UPROPERTY(Transient)
    bool IsABot;
    
    UPROPERTY(Transient)
    EAIDifficultyLevel BotDifficultyLevel;
    
    UPROPERTY(Transient)
    int32 CharacterId;
    
    UPROPERTY(Transient)
    int32 PlayerRankForRole;
    
    UPROPERTY(Transient)
    int32 PrestigeLevel;
    
    UPROPERTY(Transient)
    int32 BloodWebLevel;
    
    UPROPERTY(Transient)
    int32 Pips;
    
    UPROPERTY(Transient)
    TArray<FPlayerRankData> PlayerRankDataArray;
    
    DEADBYDAYLIGHT_API FPlayerRoundStartEventData();
};

