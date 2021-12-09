#include "UMGCharacterScrollingInfoWidget.h"

void UUMGCharacterScrollingInfoWidget::HandleTooltipLongPressedKillerPowerEvent(const FInventorySlotData& itemData, FVector2D position) {
}

void UUMGCharacterScrollingInfoWidget::HandleTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position) {
}

UUMGCharacterScrollingInfoWidget::UUMGCharacterScrollingInfoWidget() {
    this->FirstTeachablePerk = NULL;
    this->SecondTeachablePerk = NULL;
    this->ThirdTeachablePerk = NULL;
    this->KillerInfoPanel = NULL;
    this->KillerPower = NULL;
    this->CharacterBackstoryBox = NULL;
    this->_perksTitle = INVTEXT("PERKS");
    this->_teachablesTitle = INVTEXT("TEACHABLE");
    this->_powerTitle = INVTEXT("POWER");
    this->_attributesTitle = INVTEXT("ATTRIBUTES");
    this->FirstTeachablePerkText = NULL;
    this->SecondTeachablePerkText = NULL;
    this->ThirdTeachablePerkText = NULL;
    this->_backStoryTitle = INVTEXT("View Story");
}

