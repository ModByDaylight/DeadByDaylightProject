#include "UMGCharacterSelectionWidget.h"

void UUMGCharacterSelectionWidget::SwitchPanel() {
}

void UUMGCharacterSelectionWidget::BroadcastSelectedCharacter(int32 characterIndex) {
}

void UUMGCharacterSelectionWidget::BroadcastRoleButtonClicked() {
}

UUMGCharacterSelectionWidget::UUMGCharacterSelectionWidget() {
    this->CharacterPageScrollWidget = NULL;
    this->CharacterSelectSubMenu = NULL;
    this->CharacterInfoWidget = NULL;
    this->CharacterSwitcher = NULL;
    this->_isKiller = false;
}

