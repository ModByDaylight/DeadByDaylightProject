#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingApproveLoginAnalytics.generated.h"

USTRUCT()
struct FMatchmakingApproveLoginAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 CurrentPlayers;
    
    UPROPERTY()
    bool Success;
    
    UPROPERTY()
    FString Error;
    
    UPROPERTY()
    FString JoiningUserID;
    
    DBDANALYTICS_API FMatchmakingApproveLoginAnalytics();
};

