#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "PriceViewData.h"
#include "EItemRarity.h"
#include "CustomizationTooltipViewData.generated.h"

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FCustomizationTooltipViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FText ParentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText RarityPartInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText CollectionDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FText RoleCategoryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsUnbreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsOwned;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EPlayerRole AssociatedRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TArray<FPriceViewData> Prices;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText CustomizationDisabledMessage;
    
    FCustomizationTooltipViewData();
};

