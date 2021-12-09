#include "SpecialEventData.h"

FSpecialEventData::FSpecialEventData() {
    this->CurrencyType = ECurrencyType::None;
    this->IsTrackedOnline = false;
    this->UseSpecialEventLoadingScreen = false;
    this->GameMode = ESpecialEventGameMode::Progression;
    this->UseEventEntryScreen = false;
    this->EventDependency = ESpecialEventDependency::None;
}

