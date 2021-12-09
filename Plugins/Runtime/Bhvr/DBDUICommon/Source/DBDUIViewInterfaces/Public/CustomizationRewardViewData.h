#pragma once
#include "CoreMinimal.h"
#include "RewardViewData.h"
#include "EItemRarity.h"
#include "CustomizationTooltipViewData.h"
#include "CustomizationRewardViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FCustomizationRewardViewData : public FRewardViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UTexture2D* IconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsUnbreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FCustomizationTooltipViewData TooltipData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsEnabled;
    
    FCustomizationRewardViewData();
};

