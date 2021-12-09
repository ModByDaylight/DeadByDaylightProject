#include "AnimationWidget.h"

void UAnimationWidget::SetPlayRate(float rate) {
}

float UAnimationWidget::GetPlayRate() const {
    return 0.0f;
}

UAnimationWidget::UAnimationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_playRate = 0.00f;
}

