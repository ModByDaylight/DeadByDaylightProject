#include "UMGCustomizationItemWidget.h"

void UUMGCustomizationItemWidget::BroadcastAvailableItemSelected() {
}

UUMGCustomizationItemWidget::UUMGCustomizationItemWidget() {
    this->RarityBackground = NULL;
    this->PaintOverlay = NULL;
    this->Icon = NULL;
    this->NewIndicator = NULL;
    this->OutfitIndicator = NULL;
    this->PricesContainer = NULL;
    this->ItemSelectedBorder = NULL;
    this->EquippedContainer = NULL;
    this->_itemIndex = -1;
}

