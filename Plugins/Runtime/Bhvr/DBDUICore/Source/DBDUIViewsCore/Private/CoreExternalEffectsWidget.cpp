#include "CoreExternalEffectsWidget.h"

void UCoreExternalEffectsWidget::HideExternalPerk(const FName& perkId) {
}

void UCoreExternalEffectsWidget::HideExternalAddon(const FName& addonId) {
}

UCoreExternalEffectsWidget::UCoreExternalEffectsWidget() {
    this->AddonScaleRatio = 1.30f;
    this->SpacingBetweenRows = -40;
    this->SpacingPerks = -10;
    this->SpacingAddons = -10;
    this->SpacingBetweenPerksAndAddons = -70;
    this->PerkWidgetClass = NULL;
    this->AddonWidgetClass = NULL;
    this->Container = NULL;
}

