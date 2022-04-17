#pragma once
#include "CoreMinimal.h"
#include "DailyRitualContainer.h"
#include "FearMarketOfferingInstance.h"
#include "BloodWebPersistentData.h"
#include "PlayerLoadoutData.h"
#include "CharacterSavedProfileData.h"
#include "SpecialEventSavedData.h"
#include "UObject/NoExportTypes.h"
#include "SavedStatsData.h"
#include "PlayerSavedProfileCumulativeData.h"
#include "PlayerSavedProfileDataLocal.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FPlayerSavedProfileDataLocal {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Tokens;
    
    UPROPERTY()
    TArray<FName> Offerings;
    
    UPROPERTY()
    TMap<FName, bool> PageVisited;
    
    UPROPERTY()
    TMap<FName, bool> ChatVisible;
    
    UPROPERTY()
    TMap<FName, bool> OnboardingCompleted;
    
    UPROPERTY()
    int32 ConsecutiveMatchStreak;
    
    UPROPERTY()
    int32 Wins;
    
    UPROPERTY()
    int32 Losses;
    
    UPROPERTY()
    uint64 CurrentSeasonTicks;
    
    UPROPERTY()
    FDailyRitualContainer DailyRituals;
    
    UPROPERTY()
    FFearMarketOfferingInstance FearMarket;
    
    UPROPERTY()
    FPlayerLoadoutData LastConnectedLoadout;
    
    UPROPERTY()
    int32 LastConnectedCharacterIndex;
    
    UPROPERTY()
    FDateTime DisconnectPenaltyTime;
    
    UPROPERTY()
    FDateTime LastMatchEndTime;
    
    UPROPERTY()
    FDateTime LastMatchStartTime;
    
    UPROPERTY()
    FDateTime LastKillerMatchEndTime;
    
    UPROPERTY()
    FDateTime LastSurvivorMatchEndTime;
    
    UPROPERTY()
    FBloodWebPersistentData BloodStoreKillers;
    
    UPROPERTY()
    FBloodWebPersistentData BloodStoreSurvivors;
    
    UPROPERTY()
    bool CrossplayAllowed;
    
    UPROPERTY()
    bool AutoDeclineFriendInvites;
    
private:
    UPROPERTY()
    FDateTime _ongoingGameTime;
    
    UPROPERTY()
    FPlayerSavedProfileCumulativeData _cumulativeData;
    
    UPROPERTY()
    TArray<FSavedStatsData> _savedPlayerStats;
    
    UPROPERTY()
    bool _hasBeenGivenKillerTutorialEndReward;
    
    UPROPERTY()
    bool _hasBeenGivenSurvivorTutorialEndReward;
    
    UPROPERTY()
    bool _hasSeenBloodpointsOnboardingCurrencyPopup;
    
    UPROPERTY()
    bool _hasSeenAuricCellsOnboardingCurrencyPopup;
    
    UPROPERTY()
    bool _hasSeenIridescentShardsOnboardingCurrencyPopup;
    
    UPROPERTY()
    TMap<int32, FCharacterSavedProfileData> _characterData;
    
    UPROPERTY()
    TMap<FName, FSpecialEventSavedData> _specialEvent;
    
    UPROPERTY()
    bool _hasBeginnerTooltipsBeenDisabledAtLevel;
    
public:
    FPlayerSavedProfileDataLocal();
};

