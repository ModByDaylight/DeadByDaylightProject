#include "PriceViewData.h"

FPriceViewData::FPriceViewData() {
    this->CurrencyType = ECurrencyType::None;
    this->Price = 0;
    this->Discount = 0.00f;
    this->IsAffordable = false;
}

