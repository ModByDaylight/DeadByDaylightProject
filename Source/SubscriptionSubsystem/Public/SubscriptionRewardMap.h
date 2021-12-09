#pragma once
#include "CoreMinimal.h"
#include "ESubscriptionClaimType.h"
#include "SubscriptionReward.h"
#include "SubscriptionRewardMap.generated.h"

USTRUCT()
struct SUBSCRIPTIONSUBSYSTEM_API FSubscriptionRewardMap {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<ESubscriptionClaimType, FSubscriptionReward> RewardsByClaimType;
    
    FSubscriptionRewardMap();
};

