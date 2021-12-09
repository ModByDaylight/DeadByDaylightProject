#pragma once
#include "CoreMinimal.h"
#include "MatchmakingAnalytics.h"
#include "MatchmakingLobbyAnalytics.generated.h"

USTRUCT()
struct FMatchmakingLobbyAnalytics : public FMatchmakingAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LobbyStartTime;
    
    UPROPERTY()
    FString LobbyEndTime;
    
    UPROPERTY()
    FString LobbyResult;
    
    UPROPERTY()
    FString KrakenMatchId;
    
    DBDANALYTICS_API FMatchmakingLobbyAnalytics();
};

