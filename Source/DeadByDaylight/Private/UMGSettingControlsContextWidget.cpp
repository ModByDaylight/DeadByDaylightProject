#include "UMGSettingControlsContextWidget.h"

void UUMGSettingControlsContextWidget::HandleSurvivorCameraSensitivityChanged(float sliderValue) {
}

void UUMGSettingControlsContextWidget::HandleKillerCameraSensitivityChanged(float sliderValue) {
}

void UUMGSettingControlsContextWidget::HandleInvertYToggleClick(bool toggleValue) {
}

void UUMGSettingControlsContextWidget::HandleInteractionButtonToggleClick(int32 index) {
}

void UUMGSettingControlsContextWidget::HandleHandSideToggleClick(int32 index) {
}

void UUMGSettingControlsContextWidget::HandleAimAssistToggleClick(bool toggleValue) {
}

UUMGSettingControlsContextWidget::UUMGSettingControlsContextWidget() {
    this->AimAssist = false;
    this->HandSide = 0;
    this->InteractionButton = 0;
    this->InvertY = false;
    this->KillerCameraSensitivity = 0.00f;
    this->SurvivorCameraSensitivity = 0.00f;
}

