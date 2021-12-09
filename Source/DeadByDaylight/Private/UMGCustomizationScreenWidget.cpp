#include "UMGCustomizationScreenWidget.h"


void UUMGCustomizationScreenWidget::BroadcastUnlockWithCurrencyEvent(int32 currencyId, const FString& combinedItem) {
}

void UUMGCustomizationScreenWidget::BroadcastCustomizationCategoryButtonPressed(int32 categoryIndex) {
}

void UUMGCustomizationScreenWidget::BroadcastAvailableItemSelectedEvent(int32 itemIndex, const FStoreItemSlotData& selectedItem, const FStoreItemSlotData& parentItem) {
}

UUMGCustomizationScreenWidget::UUMGCustomizationScreenWidget() {
    this->PageScrollWidget = NULL;
    this->CustomizationCategoriesBar = NULL;
    this->CategoryLabel = NULL;
    this->CurrentlyEquippedLabel = NULL;
    this->AvailableInOutfitsContainer = NULL;
    this->UnlockItemContainer = NULL;
    this->OutfitItem = NULL;
    this->PriceContainer = NULL;
}

