#include "CoreButtonWidget.h"

void UCoreButtonWidget::SetVisible(EButtonWidgetVisibility visible) {
}

void UCoreButtonWidget::SetPressable(bool isPressable) {
}

void UCoreButtonWidget::SetLabel(const FText& label) {
}

void UCoreButtonWidget::SetHoverable(bool isHoverable) {
}

void UCoreButtonWidget::SetHoldable(bool isHoldable) {
}

void UCoreButtonWidget::SetEnabled(bool NewIsEnabled) {
}

void UCoreButtonWidget::SetClickable(bool isClickable) {
}

void UCoreButtonWidget::SetChargeable(bool isChargeable) {
}




void UCoreButtonWidget::OnInternalUnhovered() {
}

void UCoreButtonWidget::OnInternalReleased() {
}

void UCoreButtonWidget::OnInternalPressed() {
}

void UCoreButtonWidget::OnInternalHovered() {
}

void UCoreButtonWidget::OnInternalClicked() {
}




bool UCoreButtonWidget::IsEnabled() const {
    return false;
}

UCoreButtonWidget::UCoreButtonWidget() {
    this->HoveredSfxName = TEXT("AudioEvent_UI_Highlight");
    this->HoveredSfx = NULL;
    this->PressedSfxName = TEXT("AudioEvent_UI_Select_Press");
    this->PressedSfx = NULL;
    this->ClickedSfxName = TEXT("AudioEvent_UI_Select_Release");
    this->ClickedSfx = NULL;
    this->AnalogCursorStickiness = EAnalogCursorStickiness::ButtonSmall;
    this->HitzoneButton = NULL;
    this->LabelTB = NULL;
}

