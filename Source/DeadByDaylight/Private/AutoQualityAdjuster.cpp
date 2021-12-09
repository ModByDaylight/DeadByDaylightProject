#include "AutoQualityAdjuster.h"

AAutoQualityAdjuster::AAutoQualityAdjuster() {
    this->TargetResolutionScale = 100.00f;
    this->MinimumMS = 30.00f;
    this->MaximumMS = 35.00f;
    this->ScaleIncreaseRate = 0.01f;
    this->ScaleDecreaseRate = 0.50f;
    this->MinimumAllowableScale = 50.00f;
}

