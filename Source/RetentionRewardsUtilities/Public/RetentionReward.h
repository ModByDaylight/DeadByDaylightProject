#pragma once
#include "CoreMinimal.h"
#include "ERewardItemType.h"
#include "RetentionReward.generated.h"

USTRUCT(BlueprintType)
struct RETENTIONREWARDSUTILITIES_API FRetentionReward {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString ItemId;
    
    UPROPERTY(Transient)
    uint32 Amount;
    
    UPROPERTY(Transient)
    ERewardItemType RewardType;
    
    UPROPERTY(Transient)
    TMap<FName, FString> GameSpecificData;
    
    FRetentionReward();
};

