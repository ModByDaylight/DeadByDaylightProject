#pragma once
#include "CoreMinimal.h"
#include "SubscriptionRewardTypeData.h"
#include "Engine/DataAsset.h"
#include "ESubscriptionRewardType.h"
#include "SubscriptionRewardDataAsset.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USubscriptionRewardDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<ESubscriptionRewardType, FSubscriptionRewardTypeData> Data;
    
public:
    USubscriptionRewardDataAsset();
};

