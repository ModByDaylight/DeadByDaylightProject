#include "StatusViewSource.h"

FStatusViewSource::FStatusViewSource() {
    this->IsActive = false;
    this->_remainingTime = 0.00f;
    this->PercentageFill = 0.00f;
    this->Level = 0;
    this->SourceType = EInventoryItemType::None;
    this->SourceIconIndex = 0;
    this->SourceLevel = 0;
}

