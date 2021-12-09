#pragma once
#include "CoreMinimal.h"
#include "RewardViewData.generated.h"

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FRewardViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsHighlighted;
    
    FRewardViewData();
};

