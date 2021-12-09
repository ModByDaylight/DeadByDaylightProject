#include "NativeBlockIndicatorData.h"

FNativeBlockIndicatorData::FNativeBlockIndicatorData() {
    this->IsBlockActive = false;
    this->IsBlockUpdating = false;
    this->CurrentBlockFade = 0.00f;
    this->FadeCurve = NULL;
    this->BlockIndicator = NULL;
}

