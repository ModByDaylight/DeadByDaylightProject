#include "CoreInputPromptWidget.h"

void UCoreInputPromptWidget::SetInputKey(const FKey& inputKey) {
}

void UCoreInputPromptWidget::SetEnabled(bool NewIsEnabled) {
}

void UCoreInputPromptWidget::PromptNotFound() {
}


bool UCoreInputPromptWidget::IsEnabled() {
    return false;
}

FText UCoreInputPromptWidget::GetInputShortDisplayName() const {
    return FText::GetEmpty();
}

FKey UCoreInputPromptWidget::GetInputKey() {
    return FKey{};
}


UCoreInputPromptWidget::UCoreInputPromptWidget() {
    this->_isEnabled = true;
}

