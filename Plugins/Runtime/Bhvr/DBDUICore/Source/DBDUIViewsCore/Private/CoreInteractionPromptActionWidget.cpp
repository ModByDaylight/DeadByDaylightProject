#include "CoreInteractionPromptActionWidget.h"

void UCoreInteractionPromptActionWidget::StopIdleAnimation() {
}

void UCoreInteractionPromptActionWidget::SetInputKey4(const FKey& NewInputKey4) {
}

void UCoreInteractionPromptActionWidget::SetInputKey3(const FKey& NewInputKey3) {
}

void UCoreInteractionPromptActionWidget::SetInputKey2(const FKey& NewInputKey2) {
}

void UCoreInteractionPromptActionWidget::SetInputKey(const FKey& NewInputKey) {
}

void UCoreInteractionPromptActionWidget::PlayIdleAnimation() {
}

bool UCoreInteractionPromptActionWidget::HasThirdPrompt() const {
    return false;
}

bool UCoreInteractionPromptActionWidget::HasSecondPrompt() const {
    return false;
}

bool UCoreInteractionPromptActionWidget::HasFourthPrompt() const {
    return false;
}

UCoreInteractionPromptActionWidget::UCoreInteractionPromptActionWidget() {
    this->InputPrompt = NULL;
    this->InputPrompt2 = NULL;
    this->InputPrompt3 = NULL;
    this->InputPrompt4 = NULL;
    this->IdleAnimationName = TEXT("IdleAnimation");
}

