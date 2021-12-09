#pragma once
#include "CoreMinimal.h"
#include "AtlantaRitualInstance.h"
#include "RewardItem.h"
#include "AtlantaRitualSet.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAtlantaRitualInstance> Instances;
    
    UPROPERTY()
    TArray<FRewardItem> RewardItems;
    
    DEADBYDAYLIGHT_API FAtlantaRitualSet();
};

