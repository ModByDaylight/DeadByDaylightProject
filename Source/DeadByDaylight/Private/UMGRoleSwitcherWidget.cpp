#include "UMGRoleSwitcherWidget.h"

UUMGRoleSwitcherWidget::UUMGRoleSwitcherWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_isCurrentRoleRoleSwitcher = false;
    this->_touchDeltaTolerance = 0.00f;
}

