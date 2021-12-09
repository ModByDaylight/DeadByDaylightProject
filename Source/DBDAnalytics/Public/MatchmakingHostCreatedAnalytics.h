#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingHostCreatedAnalytics.generated.h"

USTRUCT()
struct FMatchmakingHostCreatedAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NumPublicConnections;
    
    UPROPERTY()
    int32 NumPrivateConnections;
    
    UPROPERTY()
    bool ShouldAdvertise;
    
    UPROPERTY()
    bool IsLANMatch;
    
    UPROPERTY()
    bool AllowInvites;
    
    UPROPERTY()
    bool UsesPresence;
    
    UPROPERTY()
    bool AllowJoinViaPresenceFriendsOnly;
    
    UPROPERTY()
    bool AllowJoinInProgress;
    
    UPROPERTY()
    bool AllowJoinViaPresence;
    
    UPROPERTY()
    bool Success;
    
    UPROPERTY()
    FString HostSettings;
    
    DBDANALYTICS_API FMatchmakingHostCreatedAnalytics();
};

