#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SubscriptionRewardsAnalytics.generated.h"

USTRUCT()
struct FSubscriptionRewardsAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SubscriptionId;
    
    UPROPERTY()
    FString InventoryRewards;
    
    UPROPERTY()
    FString CurrencyRewards;
    
    UPROPERTY()
    FString EventSourceId;
    
    DBDANALYTICS_API FSubscriptionRewardsAnalytics();
};

