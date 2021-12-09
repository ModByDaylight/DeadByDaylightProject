#pragma once
#include "CoreMinimal.h"
#include "AtlantaRewardUIData.h"
#include "RefundUIData.generated.h"

USTRUCT(BlueprintType)
struct FRefundUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FAtlantaRewardUIData> OriginalRewards;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FAtlantaRewardUIData Refund;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 FragmentAmount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 FragmentRequiredAmount;
    
    DEADBYDAYLIGHT_API FRefundUIData();
};

