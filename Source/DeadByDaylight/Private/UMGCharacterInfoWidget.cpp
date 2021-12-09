#include "UMGCharacterInfoWidget.h"

void UUMGCharacterInfoWidget::HandleTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position) {
}

void UUMGCharacterInfoWidget::HandlePowerItemTooltipLongPressedEvent(const FInventorySlotData& slotData, FVector2D position) {
}

UUMGCharacterInfoWidget::UUMGCharacterInfoWidget() {
    this->CharacterInfoScrollBox = NULL;
    this->CharacterScrollingInfoWidget = NULL;
    this->CharacterDLCPanel = NULL;
    this->CharacterBackgroundImage = NULL;
    this->CharacterName = NULL;
    this->_characterDifficultyText = INVTEXT("EASY");
    this->_isKiller = false;
    this->_characterDLCTitle = INVTEXT("CHARACTER FROM");
}

