#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "MobilePostGameAnalytics.generated.h"

USTRUCT()
struct FMobilePostGameAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PostGameEarnedBp;
    
    UPROPERTY()
    int32 PostGamePlayerEarnedXp;
    
    UPROPERTY()
    int32 PostGameCharacterEarnedXp;
    
    UPROPERTY()
    FString CharacterName;
    
    UPROPERTY()
    FString TicketId;
    
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FString KrakenMatchId;
    
    DBDANALYTICS_API FMobilePostGameAnalytics();
};

