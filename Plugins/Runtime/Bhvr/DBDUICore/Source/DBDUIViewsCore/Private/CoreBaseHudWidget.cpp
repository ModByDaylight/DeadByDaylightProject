#include "CoreBaseHudWidget.h"

bool UCoreBaseHudWidget::ShouldPlayFocusAnimation_Implementation() const {
    return false;
}

void UCoreBaseHudWidget::PlayFocusAnimation_Implementation() {
}

UCoreBaseHudWidget::UCoreBaseHudWidget() {
    this->FocusAnimationDuration = 1.50f;
    this->FocusAnimationDelay = 1.50f;
    this->FocusAnimationEasing = EEasingType::QuadOut;
    this->FocusAnimationMaxOpacity = 1.00f;
    this->FocusAnimationMinOpacity = 0.40f;
}

