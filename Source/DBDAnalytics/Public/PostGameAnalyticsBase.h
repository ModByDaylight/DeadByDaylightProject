#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PostGameAnalyticsBase.generated.h"

USTRUCT()
struct FPostGameAnalyticsBase : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 BloodwebPoints;
    
    UPROPERTY()
    float GameDuration;
    
    UPROPERTY()
    FString CharacterName;
    
    UPROPERTY()
    int32 Rank;
    
    UPROPERTY()
    int32 PipsGainedOrLost;
    
    UPROPERTY()
    FString MatchEndReason;
    
    UPROPERTY()
    bool IsTutorialBotMatch;
    
    DBDANALYTICS_API FPostGameAnalyticsBase();
};

