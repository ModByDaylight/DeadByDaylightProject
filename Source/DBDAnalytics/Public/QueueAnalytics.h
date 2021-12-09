#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "QueueAnalytics.generated.h"

USTRUCT()
struct FQueueAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TimesQueuedSurvivor;
    
    UPROPERTY()
    int32 TimesQueuedKiller;
    
    UPROPERTY()
    int32 MatchesAsSurvivor;
    
    UPROPERTY()
    int32 MatchesAsKiller;
    
    UPROPERTY()
    FString SelectedCountry;
    
    UPROPERTY()
    FString PlayerName;
    
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
    FString SessionStartTimestamp;
    
    UPROPERTY()
    FString SessionEndTimestamp;
    
    UPROPERTY()
    FString LastSessionTimestamp;
    
    UPROPERTY()
    int32 CumulativeSessions;
    
    UPROPERTY()
    float CumulativePlaytime;
    
    UPROPERTY()
    float TimeInCharacterMenu;
    
    UPROPERTY()
    float TimeInBloodwebMenu;
    
    UPROPERTY()
    float TimeInLoadoutMenu;
    
    UPROPERTY()
    float TimeInCustomizationMenu;
    
    UPROPERTY()
    float TimeInFearMarket;
    
    UPROPERTY()
    float TimeInTallyScreen;
    
    UPROPERTY()
    float TimeInGameMatch;
    
    UPROPERTY()
    float TimeInHelpMenu;
    
    UPROPERTY()
    float TimeInOfflineLobby;
    
    UPROPERTY()
    float TimeInOfflineLobbySurvivorGroup;
    
    UPROPERTY()
    float TimeInOnlineLobby;
    
    UPROPERTY()
    float TimeInOnlineLobbySurvivorGroup;
    
    DBDANALYTICS_API FQueueAnalytics();
};

