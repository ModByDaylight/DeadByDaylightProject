#include "UMGBloodStoreRowWidget.h"



void UUMGBloodStoreRowWidget::BroadcastUnlockAnimationFinished() {
}

void UUMGBloodStoreRowWidget::BroadcastBloodNodeSelected(const FString& id) {
}

UUMGBloodStoreRowWidget::UUMGBloodStoreRowWidget() {
    this->ItemContainer = NULL;
    this->LockStatusPanel = NULL;
    this->HardLockedStatusPanel = NULL;
    this->_purchasedItemsNbr = 0;
    this->_requiredItemNbr = 0;
    this->_rowStyle = EBloodStoreRowStyle::FiveItemRow;
    this->_itemClass = NULL;
}

