#include "DBDTooltipManager.h"

void UDBDTooltipManager::ShowCustomizationTooltip(const FCustomizationTooltipViewData& tooltipViewData, const FGeometry triggerGeometry) {
}

void UDBDTooltipManager::ShowCurrencyTooltip(const FCurrencyProgressionTooltipViewData& tooltipViewData, const FGeometry triggerGeometry) {
}

void UDBDTooltipManager::ShowCharacterTooltip(const FCharacterTooltipViewData& tooltipViewData, const FGeometry triggerGeometry) {
}

void UDBDTooltipManager::HideTooltip() {
}

UDBDTooltipManager::UDBDTooltipManager() {
    this->_currentTooltip = NULL;
}

