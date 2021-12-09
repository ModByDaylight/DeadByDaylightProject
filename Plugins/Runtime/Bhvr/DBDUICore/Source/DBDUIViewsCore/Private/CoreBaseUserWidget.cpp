#include "CoreBaseUserWidget.h"

void UCoreBaseUserWidget::UpdateScale_Implementation(float scale) {
}

void UCoreBaseUserWidget::RegisterForInput() {
}


void UCoreBaseUserWidget::DeregisterFromInput() {
}

UCoreBaseUserWidget::UCoreBaseUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ScaleContainer = NULL;
    this->IsInteractive = false;
    this->_controlMode = EControlMode::UNDEFINED;
    this->ScaleType = EScaleType::None;
    this->_inputManager = NULL;
}

