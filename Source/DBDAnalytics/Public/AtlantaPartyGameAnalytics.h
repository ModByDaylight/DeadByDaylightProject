#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "AtlantaPartyGameAnalytics.generated.h"

USTRUCT()
struct FAtlantaPartyGameAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PartySize;
    
    UPROPERTY()
    FString KrakenMatchId;
    
    UPROPERTY()
    FString FriendIdOne;
    
    UPROPERTY()
    FString FriendIdTwo;
    
    UPROPERTY()
    FString FriendIdThree;
    
    UPROPERTY()
    FString FriendIdFour;
    
    DBDANALYTICS_API FAtlantaPartyGameAnalytics();
};

