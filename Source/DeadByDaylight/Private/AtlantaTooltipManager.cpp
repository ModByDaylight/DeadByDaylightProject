#include "AtlantaTooltipManager.h"

void UAtlantaTooltipManager::TryCloseActiveTooltipWithWidget() {
}

bool UAtlantaTooltipManager::TryCloseActiveTooltip() {
    return false;
}

UAtlantaTooltipManager::UAtlantaTooltipManager() {
    this->_activeTooltip = NULL;
    this->_closeTooltipWidget = NULL;
}

