#include "ActionButton.h"

void UActionButton::SetState(EActionButtonState state) {
}

void UActionButton::SetSlateBrush(const FSlateBrush& InBrush) {
}

void UActionButton::SetPreviousState() {
}

void UActionButton::SetIcon(FSlateBrush slateBrush) {
}


UActionButton::UActionButton() {
    this->IconImage = NULL;
    this->ToggleSmokeImage = NULL;
    this->Button = NULL;
    this->DefaultOpacity = 0.80f;
    this->ToggledOpacity = 1.00f;
    this->DisabledOpacity = 0.40f;
    this->_currentState = EActionButtonState::Normal;
    this->_previousState = EActionButtonState::Normal;
}

