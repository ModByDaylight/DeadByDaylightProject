#pragma once
#include "CoreMinimal.h"
#include "RewardViewData.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "CurrencyProgressionRewardViewData.generated.h"

class UMaterialInterface;
class UTexture2D;

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FCurrencyProgressionRewardViewData : public FRewardViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TSoftObjectPtr<UMaterialInterface> RewardBackgroundMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TSoftObjectPtr<UTexture2D> RewardIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FCurrencyProgressionTooltipViewData TooltipData;
    
    FCurrencyProgressionRewardViewData();
};

