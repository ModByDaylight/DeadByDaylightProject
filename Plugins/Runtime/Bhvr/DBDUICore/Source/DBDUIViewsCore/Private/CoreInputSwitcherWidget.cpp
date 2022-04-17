#include "CoreInputSwitcherWidget.h"

class UCoreButtonWidget;
class UCoreKeyListenerInputPromptWidget;

void UCoreInputSwitcherWidget::SetUIAction(const EUIActionType actionType) {
}

void UCoreInputSwitcherWidget::SetLabel(const FText& label) {
}

void UCoreInputSwitcherWidget::SetEnabled(bool isEnabled) {
}

void UCoreInputSwitcherWidget::OnInputPromptTriggered() {
}

void UCoreInputSwitcherWidget::OnButtonClicked(UCoreButtonWidget* target) {
}


UCoreKeyListenerInputPromptWidget* UCoreInputSwitcherWidget::GetInputPrompt() {
    return NULL;
}

UCoreButtonWidget* UCoreInputSwitcherWidget::GetButton() {
    return NULL;
}

UCoreInputSwitcherWidget::UCoreInputSwitcherWidget() {
    this->ButtonDisplayRule = EInputSwitcherDisplayRule::OnlyGamepad;
    this->InputPromptDisplayRule = EInputSwitcherDisplayRule::OnlyKeyboard;
    this->Alignment = ETextJustify::Left;
    this->InputPrompt = NULL;
    this->Button = NULL;
    this->_shouldRegisterForInputInConstruct = true;
}

