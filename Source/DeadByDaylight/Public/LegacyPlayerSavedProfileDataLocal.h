#pragma once
#include "CoreMinimal.h"
#include "LegacyCharacterSavedProfileData.h"
#include "LegacySavedFearMarketOfferingInstance.h"
#include "LegacySavedDailyRitualContainer.h"
#include "LegacySavedPlayerLoadoutData.h"
#include "UObject/NoExportTypes.h"
#include "LegacyPlayerSavedProfileDataLocal.generated.h"

USTRUCT(BlueprintType)
struct FLegacyPlayerSavedProfileDataLocal {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 Tokens;
    
    UPROPERTY(SaveGame)
    TArray<FName> Offerings;
    
    UPROPERTY(SaveGame)
    bool FirstTimePlaying;
    
    UPROPERTY(SaveGame)
    bool HasBeenGivenKillerTutorialEndReward;
    
    UPROPERTY(SaveGame)
    bool HasBeenGivenSurvivorTutorialEndReward;
    
    UPROPERTY(SaveGame)
    int32 Wins;
    
    UPROPERTY(SaveGame)
    int32 Losses;
    
    UPROPERTY(SaveGame)
    TMap<int32, FLegacyCharacterSavedProfileData> CharacterData;
    
    UPROPERTY(SaveGame)
    uint64 CurrentSeasonTicks;
    
    UPROPERTY(SaveGame)
    FLegacySavedDailyRitualContainer DailyRituals;
    
    UPROPERTY(SaveGame)
    FLegacySavedFearMarketOfferingInstance FearMarket;
    
    UPROPERTY(SaveGame)
    FLegacySavedPlayerLoadoutData LastConnectedLoadout;
    
    UPROPERTY(SaveGame)
    int32 LastConnectedCharacterIndex;
    
    UPROPERTY(SaveGame)
    FDateTime DisconnectPenaltyTime;
    
    UPROPERTY(SaveGame)
    int32 _bloodpoints;
    
    UPROPERTY(SaveGame)
    int32 _bonusBloodpoints;
    
    UPROPERTY(SaveGame)
    int32 _unclampedBloodpoints;
    
    UPROPERTY(SaveGame)
    int32 _fearTokens;
    
    UPROPERTY(SaveGame)
    FDateTime _ongoingGameTime;
    
    UPROPERTY(SaveGame)
    bool _fearTokensMigrated;
    
    DEADBYDAYLIGHT_API FLegacyPlayerSavedProfileDataLocal();
};

