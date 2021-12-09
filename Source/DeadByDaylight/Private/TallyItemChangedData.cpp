#include "TallyItemChangedData.h"

FTallyItemChangedData::FTallyItemChangedData() {
    this->IsSet = false;
    this->EnergyType = EEnergyTypeEnum::EInvalid;
    this->EnergyLevel = 0.00f;
}

