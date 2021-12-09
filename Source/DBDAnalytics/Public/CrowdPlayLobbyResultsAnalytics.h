#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CrowdPlayLobbyResultsAnalytics.generated.h"

USTRUCT()
struct FCrowdPlayLobbyResultsAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CrowdPlayId;
    
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 PartySize;
    
    UPROPERTY()
    int32 NbrQueueToPlayMembers;
    
    UPROPERTY()
    int32 NbrGamesInSameSession;
    
    DBDANALYTICS_API FCrowdPlayLobbyResultsAnalytics();
};

