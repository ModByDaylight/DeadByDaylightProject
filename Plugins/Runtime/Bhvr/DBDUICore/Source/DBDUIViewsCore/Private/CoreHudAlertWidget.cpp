#include "CoreHudAlertWidget.h"

class UUITweenInstance;
class UCoreBaseUserWidget;

void UCoreHudAlertWidget::PopAlert() {
}

void UCoreHudAlertWidget::OnPopAlertComplete(UUITweenInstance* tween) {
}

void UCoreHudAlertWidget::OnClearAlertsComplete(UUITweenInstance* tween) {
}

float UCoreHudAlertWidget::GetRemainingTime() const {
    return 0.0f;
}

TArray<UCoreBaseUserWidget*> UCoreHudAlertWidget::GetPendingAlerts() const {
    return TArray<UCoreBaseUserWidget*>();
}

TArray<UCoreBaseUserWidget*> UCoreHudAlertWidget::GetAlerts() const {
    return TArray<UCoreBaseUserWidget*>();
}

void UCoreHudAlertWidget::ClearAlerts() {
}

UCoreHudAlertWidget::UCoreHudAlertWidget() {
    this->MaxDisplayedItems = 5;
    this->SecondaryAlpha = 0.50f;
    this->FullAlertDuration = 3.00f;
    this->PendingAlertDuration = 1.50f;
    this->AnimationDuration = 1.00f;
    this->AnimationEasing = EEasingType::ExpoOut;
    this->AnimationTranslationY = 83.00f;
    this->CoreHudScoreAlertItemClass = NULL;
    this->CoreHudStatusEffectAlertItemClass = NULL;
    this->AlertContainer = NULL;
}

