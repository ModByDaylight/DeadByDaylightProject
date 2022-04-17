#pragma once
#include "CoreMinimal.h"
#include "SaveDataBase.h"
#include "KeyTupleBool.h"
#include "UObject/NoExportTypes.h"
#include "CharacterKeyTuple.h"
#include "SavedDailyRitualContainerV7.h"
#include "ConsoleUserSettings.h"
#include "LegacySavedPlayerLoadoutData.h"
#include "SavedFearMarketOfferingInstanceV7.h"
#include "SavedStatsDataV7.h"
#include "SavedSpecialEventDataV7.h"
#include "LegacySavedBloodWebPersistentData.h"
#include "SaveDataV7.generated.h"

USTRUCT()
struct FSaveDataV7 : public FSaveDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FString PlayerUID;
    
    UPROPERTY(SaveGame)
    int32 SelectedCamperIndex;
    
    UPROPERTY(SaveGame)
    int32 SelectedSlasherIndex;
    
    UPROPERTY(SaveGame)
    TArray<FName> Offerings;
    
    UPROPERTY(SaveGame)
    bool FirstTimePlaying;
    
    UPROPERTY(SaveGame)
    int32 ConsecutiveMatchStreak;
    
    UPROPERTY(SaveGame)
    bool HasBeenGivenKillerTutorialEndReward;
    
    UPROPERTY(SaveGame)
    bool HasBeenGivenSurvivorTutorialEndReward;
    
    UPROPERTY(SaveGame)
    bool HasSeenBloodpointsOnboardingCurrencyPopup;
    
    UPROPERTY(SaveGame)
    bool HasSeenAuricCellsOnboardingCurrencyPopup;
    
    UPROPERTY(SaveGame)
    bool HasSeenIridescentShardsOnboardingCurrencyPopup;
    
    UPROPERTY(SaveGame)
    uint64 CurrentSeasonTicks;
    
    UPROPERTY(SaveGame)
    int32 LastConnectedCharacterIndex;
    
    UPROPERTY(SaveGame)
    FString DisconnectPenaltyTime;
    
    UPROPERTY(SaveGame)
    FString LastMatchEndTime;
    
    UPROPERTY(SaveGame)
    FString LastMatchStartTime;
    
    UPROPERTY(SaveGame)
    FString LastKillerMatchEndTime;
    
    UPROPERTY(SaveGame)
    FString LastSurvivorMatchEndTime;
    
    UPROPERTY(SaveGame)
    int32 Experience;
    
    UPROPERTY(SaveGame)
    int32 BonusExperience;
    
    UPROPERTY(SaveGame)
    int32 FearTokens;
    
    UPROPERTY(SaveGame)
    bool FearTokensMigrated;
    
    UPROPERTY(SaveGame)
    FString OngoingGameTime;
    
    UPROPERTY(SaveGame)
    int32 CumulativeMatches;
    
    UPROPERTY(SaveGame)
    TArray<FKeyTupleBool> PageVisited;
    
    UPROPERTY(SaveGame)
    TArray<FKeyTupleBool> ChatVisible;
    
    UPROPERTY(SaveGame)
    int32 CumulativeMatchesAsSurvivor;
    
    UPROPERTY(SaveGame)
    int32 CumulativeMatchesAsKiller;
    
    UPROPERTY(SaveGame)
    int32 CumulativeMatchesAsSurvivorNoFriends;
    
    UPROPERTY(SaveGame)
    int32 CumulativeMatchesAsKillerNoFriends;
    
    UPROPERTY(SaveGame)
    FDateTime LastMatchTimestamp;
    
    UPROPERTY(SaveGame)
    FDateTime LastSessionTimestamp;
    
    UPROPERTY(SaveGame)
    int32 CumulativeSessions;
    
    UPROPERTY(SaveGame)
    FString CumulativePlaytime;
    
    UPROPERTY(SaveGame)
    TArray<FCharacterKeyTuple> CharacterData;
    
    UPROPERTY(SaveGame)
    TArray<FName> OwnedCharms;
    
    UPROPERTY(SaveGame)
    FSavedDailyRitualContainerV7 DailyRituals;
    
    UPROPERTY(SaveGame)
    FSavedFearMarketOfferingInstanceV7 FearMarket;
    
    UPROPERTY(SaveGame)
    FLegacySavedPlayerLoadoutData LastLoadout;
    
    UPROPERTY(SaveGame)
    FConsoleUserSettings ConsoleUserSettings;
    
    UPROPERTY(SaveGame)
    TArray<FSavedStatsDataV7> PlayerStatProgression;
    
    UPROPERTY(SaveGame)
    TArray<FString> OwnedContent;
    
    UPROPERTY(SaveGame)
    TArray<FSavedSpecialEventDataV7> SpecialEvent;
    
    UPROPERTY(SaveGame)
    FLegacySavedBloodWebPersistentData BloodStoreKillers;
    
    UPROPERTY(SaveGame)
    FLegacySavedBloodWebPersistentData BloodStoreSurvivors;
    
    UPROPERTY(SaveGame)
    TArray<FKeyTupleBool> OnBoardingCompleted;
    
    UPROPERTY(SaveGame)
    bool IsCrossplayAllowed;
    
    UPROPERTY(SaveGame)
    bool AutoDeclineFriendInvites;
    
    DEADBYDAYLIGHT_API FSaveDataV7();
};

