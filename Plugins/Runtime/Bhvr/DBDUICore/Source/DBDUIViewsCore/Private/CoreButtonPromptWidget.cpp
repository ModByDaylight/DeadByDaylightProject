#include "CoreButtonPromptWidget.h"

void UCoreButtonPromptWidget::SetText(const FText& text) {
}

void UCoreButtonPromptWidget::SetInputKey(const FKey& key) {
}

void UCoreButtonPromptWidget::SetAction(const EUIActionType actionType) {
}



UCoreButtonPromptWidget::UCoreButtonPromptWidget() {
    this->CursorOverSfx = NULL;
    this->CursorPressSfx = NULL;
    this->CursorReleaseSfx = NULL;
    this->_inputPromptText = NULL;
    this->_buttonTextField = NULL;
}

