#include "UMGBaseRootStorefrontWidget.h"

void UUMGBaseRootStorefrontWidget::OnPurchaseAuricCellButtonPressed() {
}

void UUMGBaseRootStorefrontWidget::OnCurrencyButtonLongPressed(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType) {
}

void UUMGBaseRootStorefrontWidget::OnBackButtonPressed() {
}

UUMGBaseRootStorefrontWidget::UUMGBaseRootStorefrontWidget() {
    this->StorePageSlot = NULL;
    this->BackButton = NULL;
    this->CurrencyButtonsPanel = NULL;
    this->StorefrontTitle = NULL;
}

