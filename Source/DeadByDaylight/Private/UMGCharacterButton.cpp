#include "UMGCharacterButton.h"

void UUMGCharacterButton::SetIsSelected(bool isSelected) {
}

void UUMGCharacterButton::SetCharacterData(const FCharacterSlotData& characterData) {
}

void UUMGCharacterButton::BroadcastClickedEvent(int32 characterIndex) {
}

UUMGCharacterButton::UUMGCharacterButton() {
    this->PortraitIcon = NULL;
    this->CharacterSelectedPanel = NULL;
    this->LevelPanel = NULL;
    this->CharacterLevelText = NULL;
    this->OwnedCustomizationText = NULL;
    this->TotalCustomizationText = NULL;
    this->PricePanel = NULL;
    this->CellPrice = NULL;
    this->ShardPrice = NULL;
}

