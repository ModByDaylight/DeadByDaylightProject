#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "EGameType.h"
#include "MatchmakingAnalytics.generated.h"

USTRUCT()
struct FMatchmakingAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchmakingSessionGuid;
    
    UPROPERTY()
    EPlayerRole PlayerRole;
    
    UPROPERTY()
    EGameType GameType;
    
    UPROPERTY()
    int32 PartySize;
    
    UPROPERTY()
    int32 Rank;
    
    UPROPERTY()
    FString CharacterName;
    
    DBDANALYTICS_API FMatchmakingAnalytics();
};

