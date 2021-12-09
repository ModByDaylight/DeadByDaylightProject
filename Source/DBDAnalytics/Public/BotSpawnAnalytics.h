#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "EAIDifficultyLevel.h"
#include "BotSpawnAnalytics.generated.h"

USTRUCT()
struct FBotSpawnAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 BotNumber;
    
    UPROPERTY()
    FString KrakenMatchId;
    
    UPROPERTY()
    EPlayerRole Role;
    
    UPROPERTY()
    FString CharacterName;
    
    UPROPERTY()
    EAIDifficultyLevel BotDifficultyLevel;
    
    DBDANALYTICS_API FBotSpawnAnalytics();
};

