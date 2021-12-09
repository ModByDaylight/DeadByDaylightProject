#pragma once
#include "CoreMinimal.h"
#include "EAtlantaRewardType.h"
#include "ECurrencyType.h"
#include "EItemRarity.h"
#include "AtlantaRewardUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRewardUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName Id;
    
    UPROPERTY(BlueprintReadOnly)
    EAtlantaRewardType Type;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Quantity;
    
    UPROPERTY(BlueprintReadOnly)
    FString IconFilePath;
    
    UPROPERTY(BlueprintReadOnly)
    ECurrencyType Currency;
    
    UPROPERTY(BlueprintReadOnly)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FText Description;
    
    DEADBYDAYLIGHT_API FAtlantaRewardUIData();
};

