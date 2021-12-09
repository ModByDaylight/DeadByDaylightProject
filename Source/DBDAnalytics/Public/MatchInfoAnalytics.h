#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EGameType.h"
#include "EPlayerRole.h"
#include "EAIDifficultyLevel.h"
#include "MatchInfoAnalytics.generated.h"

USTRUCT()
struct FMatchInfoAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    EGameType GameMode;
    
    UPROPERTY()
    EPlayerRole Role;
    
    UPROPERTY()
    bool IsABot;
    
    UPROPERTY()
    EAIDifficultyLevel BotDifficultyLevel;
    
    UPROPERTY()
    int32 PartySize;
    
    UPROPERTY()
    FString CharacterName;
    
    UPROPERTY()
    int32 Rank;
    
    UPROPERTY()
    int32 Level;
    
    UPROPERTY()
    int32 Prestige;
    
    UPROPERTY()
    int32 Pips;
    
    UPROPERTY()
    int32 PipsTotal;
    
    UPROPERTY()
    int32 MapSeed;
    
    UPROPERTY()
    FString MapName;
    
    UPROPERTY()
    FString PartyHostMirrorsId;
    
    UPROPERTY()
    FString LobbyId;
    
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FString KrakenMatchId;
    
    UPROPERTY()
    FString PlayerName;
    
    UPROPERTY()
    FString SelectedCountry;
    
    UPROPERTY()
    bool FirstTimePlaying;
    
    UPROPERTY()
    int32 CumulativeMatches;
    
    UPROPERTY()
    int32 CumulativeMatchesAsSurvivor;
    
    UPROPERTY()
    int32 CumulativeMatchesAsKiller;
    
    UPROPERTY()
    FString LastMatchTimestamp;
    
    UPROPERTY()
    float ExactPing;
    
    UPROPERTY()
    bool hasAnActiveArchiveQuest;
    
    UPROPERTY()
    bool archiveQuestCanProgress;
    
    UPROPERTY()
    bool IsUsingKeyboard;
    
    UPROPERTY()
    FString ControllerType;
    
    UPROPERTY()
    bool IsTutorialBotMatch;
    
    DBDANALYTICS_API FMatchInfoAnalytics();
};

