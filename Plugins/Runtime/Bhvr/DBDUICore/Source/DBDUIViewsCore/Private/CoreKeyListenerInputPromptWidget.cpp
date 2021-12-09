#include "CoreKeyListenerInputPromptWidget.h"

void UCoreKeyListenerInputPromptWidget::SetUIAction(const EUIActionType actionType) {
}

void UCoreKeyListenerInputPromptWidget::SetLabel(const FText& label) {
}

void UCoreKeyListenerInputPromptWidget::SetEnabled(bool NewIsEnabled) {
}


bool UCoreKeyListenerInputPromptWidget::IsEnabled() {
    return false;
}

UCoreKeyListenerInputPromptWidget::UCoreKeyListenerInputPromptWidget() {
    this->InputPrompt = NULL;
    this->LabelTB = NULL;
}

