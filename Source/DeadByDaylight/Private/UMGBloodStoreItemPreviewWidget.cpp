#include "UMGBloodStoreItemPreviewWidget.h"





void UUMGBloodStoreItemPreviewWidget::BroadcastUnselectPressed() {
}

void UUMGBloodStoreItemPreviewWidget::BroadcastRefreshPressed() {
}

void UUMGBloodStoreItemPreviewWidget::BroadcastPurchasePressed() {
}

UUMGBloodStoreItemPreviewWidget::UUMGBloodStoreItemPreviewWidget() {
    this->_itemPrice = 0;
    this->_refreshTitle = INVTEXT("FORCE REFRESH");
    this->_itemSelectionTitle = INVTEXT("CHOOSE AN ITEM");
    this->_itemSelectionText = INVTEXT("The minimum amount of items required to unlock a new shelf is indicated in <b>bold</b>! Items will refresh every 24h.");
    this->_purchaseTitle = INVTEXT("PURCHASE");
}

