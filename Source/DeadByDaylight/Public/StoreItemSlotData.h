#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "ECustomizationCategory.h"
#include "EItemRarity.h"
#include "SpecialEventUIInfo.h"
#include "PurchaseCurrencyData.h"
#include "UObject/NoExportTypes.h"
#include "CustomTransformation.h"
#include "StoreItemSlotData.generated.h"

USTRUCT(BlueprintType)
struct FStoreItemSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FName ItemId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ECustomizationCategory Category;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName MirrorsId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString IconPath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString DisplayCollectionName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString RoleCategoryInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString RarityPartInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSpecialEventUIInfo EventInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FPurchaseCurrencyData> PurchaseDataList;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FName> ParentBundleIds;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FName> ChildrenItemIds;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCustomTransformation CustomTransformation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsOwned;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsBuyable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsEquipped;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsNewInStore;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsLocked;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsInStore;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EPlayerRole AssociatedRole;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FDateTime ReleaseDate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsEnabled;
    
    DEADBYDAYLIGHT_API FStoreItemSlotData();
};

