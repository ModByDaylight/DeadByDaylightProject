#include "UMGBloodStoreItemPreviewWidget.h"





void UUMGBloodStoreItemPreviewWidget::BroadcastUnselectPressed() {
}

void UUMGBloodStoreItemPreviewWidget::BroadcastRefreshPressed() {
}

void UUMGBloodStoreItemPreviewWidget::BroadcastPurchasePressed() {
}

UUMGBloodStoreItemPreviewWidget::UUMGBloodStoreItemPreviewWidget() {
    this->_itemPrice = 0;
    this->_refreshTitle = FText::FromString(TEXT("FORCE REFRESH"));
    this->_itemSelectionTitle = FText::FromString(TEXT("CHOOSE AN ITEM"));
    this->_itemSelectionText = FText::FromString(TEXT("The minimum amount of items required to unlock a new shelf is indicated in <b>bold</b>! \n Items will refresh every 24h."));
    this->_purchaseTitle = FText::FromString(TEXT("PURCHASE"));
}

