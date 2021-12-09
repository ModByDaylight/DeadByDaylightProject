#pragma once
#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "EInventoryItemType.h"
#include "ECurrencyType.h"
#include "RewardItemData.generated.h"

USTRUCT(BlueprintType)
struct FRewardItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FString IconPath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Title;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EInventoryItemType ItemType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsDuplicate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ECurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CurrencyAmount;
    
    DEADBYDAYLIGHT_API FRewardItemData();
};

