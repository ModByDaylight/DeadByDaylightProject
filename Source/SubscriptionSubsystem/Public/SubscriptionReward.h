#pragma once
#include "CoreMinimal.h"
#include "RewardItem.h"
#include "UObject/NoExportTypes.h"
#include "SubscriptionReward.generated.h"

USTRUCT(BlueprintType)
struct SUBSCRIPTIONSUBSYSTEM_API FSubscriptionReward {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FRewardItem> Rewards;
    
    UPROPERTY(Transient)
    FDateTime NextClaimTime;
    
    UPROPERTY(Transient)
    FString AnalyticsEventId;
    
    FSubscriptionReward();
};

