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
    this->_perksTitle = FText::FromString(TEXT("PERKS"));
    this->_teachablesTitle = FText::FromString(TEXT("TEACHABLE"));
    this->_powerTitle = FText::FromString(TEXT("POWER"));
    this->_attributesTitle = FText::FromString(TEXT("ATTRIBUTES"));
    this->FirstTeachablePerkText = NULL;
    this->SecondTeachablePerkText = NULL;
    this->ThirdTeachablePerkText = NULL;
    this->_backStoryTitle = FText::FromString(TEXT("View Story"));
}

