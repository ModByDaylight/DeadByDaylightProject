#include "DBDScrollBox.h"

void UDBDScrollBox::UpdateDisplayPrompt() {
}

void UDBDScrollBox::OnControlModeChanged(EControlMode controlMode) {
}

bool UDBDScrollBox::IsMouseOver() {
    return false;
}

void UDBDScrollBox::HandleControllerInput(float analogValue) {
}

UDBDScrollBox::UDBDScrollBox() {
    this->_useControllerScroll = true;
    this->_shouldScrollOnMouseOver = true;
    this->_scrollSpeed = 7.50f;
    this->_displayPrompt = NULL;
    this->_showDisplayPrompt = EShowScrollDisplayPrompt::DontShow;
}

