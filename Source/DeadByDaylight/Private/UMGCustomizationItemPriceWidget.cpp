#include "UMGCustomizationItemPriceWidget.h"

UUMGCustomizationItemPriceWidget::UUMGCustomizationItemPriceWidget() {
    this->CurrencyValue = NULL;
    this->DiscountPercentageContainer = NULL;
    this->DiscountPercentage = NULL;
    this->CurrencyIcon = NULL;
    this->_currencyType = ECurrencyType::None;
    this->_hasDiscountPercentage = false;
}

