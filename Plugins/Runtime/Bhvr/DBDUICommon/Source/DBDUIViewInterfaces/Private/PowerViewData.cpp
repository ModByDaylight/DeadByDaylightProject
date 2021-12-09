#include "PowerViewData.h"

FPowerViewData::FPowerViewData() {
    this->IsRechargeable = false;
    this->IsActivated = false;
    this->Count = 0;
    this->ProgressValue = 0.00f;
    this->ShowKeyPrompt = false;
    this->IsCountDisplayForced = false;
}

