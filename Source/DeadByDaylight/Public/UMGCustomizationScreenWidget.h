#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ECustomizationCategory.h"
#include "StoreItemSlotData.h"
#include "UMGCustomizationScreenWidget.generated.h"

class UUMGCustomizationCategoriesBar;
class UVerticalBox;
class UUMGCustomizationPageScrollWidget;
class UUMGCustomizationItemBuyButton;
class UTextBlock;
class UCanvasPanel;
class UUMGCustomizationItemWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationScreenWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCustomizationPageScrollWidget* PageScrollWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCustomizationCategoriesBar* CustomizationCategoriesBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CategoryLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CurrentlyEquippedLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* AvailableInOutfitsContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* UnlockItemContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCustomizationItemWidget* OutfitItem;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* PriceContainer;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUMGCustomizationItemBuyButton> PriceButtonWidgetClass;
    
private:
    UPROPERTY(Transient)
    FName _currentSelectedItem;
    
public:
    UUMGCustomizationScreenWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetCategoryLabel(const ECustomizationCategory category);
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastUnlockWithCurrencyEvent(int32 currencyId, const FString& combinedItem);
    
    UFUNCTION()
    void BroadcastCustomizationCategoryButtonPressed(int32 categoryIndex);
    
    UFUNCTION()
    void BroadcastAvailableItemSelectedEvent(int32 itemIndex, const FStoreItemSlotData& selectedItem, const FStoreItemSlotData& parentItem);
    
};

