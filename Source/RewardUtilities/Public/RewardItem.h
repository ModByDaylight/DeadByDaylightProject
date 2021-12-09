#pragma once
#include "CoreMinimal.h"
#include "ERewardItemType.h"
#include "RewardItem.generated.h"

USTRUCT(BlueprintType)
struct REWARDUTILITIES_API FRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ERewardItemType Type;
    
    UPROPERTY(Transient)
    FString Id;
    
    UPROPERTY(Transient)
    int32 Amount;
    
    FRewardItem();
};

