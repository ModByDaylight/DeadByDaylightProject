#include "CoreStartSequenceWidget.h"

class UUITweenInstance;

void UCoreStartSequenceWidget::OnHideStartSequenceComplete(UUITweenInstance* tween) {
}

UCoreStartSequenceWidget::UCoreStartSequenceWidget() {
    this->FadeInDuration = 1.00f;
    this->FadeOutDuration = 1.00f;
    this->FadeInEasing = EEasingType::QuadOut;
    this->FadeOutEasing = EEasingType::QuadIn;
    this->ThemeNameTextfield = NULL;
    this->SeparatorImage = NULL;
    this->MapNameTextfield = NULL;
}

