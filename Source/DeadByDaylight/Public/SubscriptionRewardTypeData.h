#pragma once
#include "CoreMinimal.h"
#include "SubscriptionRewardTypeData.generated.h"

class UUMGMonthlyPassRewardItemWidget;

USTRUCT(BlueprintType)
struct FSubscriptionRewardTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUMGMonthlyPassRewardItemWidget> RewardItemWidget;
    
    DEADBYDAYLIGHT_API FSubscriptionRewardTypeData();
};

