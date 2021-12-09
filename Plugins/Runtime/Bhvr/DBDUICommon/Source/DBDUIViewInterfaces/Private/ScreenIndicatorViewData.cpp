#include "ScreenIndicatorViewData.h"

FScreenIndicatorViewData::FScreenIndicatorViewData() {
    this->IsInFront = false;
    this->Distance = 0.00f;
    this->IndicatorIcon = NULL;
    this->IndicatorType = EHudScreenIndicatorType::None;
}

