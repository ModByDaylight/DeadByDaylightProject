#pragma once
#include "CoreMinimal.h"
#include "EOfferingCategory.h"
#include "EPerkCategory.h"
#include "EInventoryItemType.h"
#include "EItemAvailability.h"
#include "EItemRarity.h"
#include "EStatusEffectType.h"
#include "SpecialEventUIInfo.h"
#include "InventorySlotData.generated.h"

USTRUCT(BlueprintType)
struct FInventorySlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FName ItemId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString IconFilePath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString ParentDisplayName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<EPerkCategory> PerkCategory;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EOfferingCategory OfferingCategory;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EInventoryItemType ItemType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EItemRarity Rarity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EStatusEffectType StatusEffectType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Subtitle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 StackCount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EItemAvailability Availability;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsTeachablePerk;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsSlasherPerk;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsPerkAvailableInFearMarket;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsPerkAvailableInBloodWeb;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 TeachableLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString DlcDisplayName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsLocked;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSpecialEventUIInfo EventInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 UnlockableLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsLimitedItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsPrivateIcon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsEnabled;
    
    DEADBYDAYLIGHT_API FInventorySlotData();
};

