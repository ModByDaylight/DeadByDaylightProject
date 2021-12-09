#include "UMGLoadoutPageScrollWidget.h"



void UUMGLoadoutPageScrollWidget::SetInventoryData(EInventoryGridFormat gridFormat, const TArray<FInventorySlotData>& inventoryData, const TArray<int32>& selectedItemsIndexes, const FString& trackingItemName, const FString& subtitle) {
}

void UUMGLoadoutPageScrollWidget::HandleItemClicked(FName itemID) {
}

UUMGLoadoutPageScrollWidget::UUMGLoadoutPageScrollWidget() {
    this->ShouldResizeWidget = true;
    this->_gridFormat = EInventoryGridFormat::DEFAULT;
}

