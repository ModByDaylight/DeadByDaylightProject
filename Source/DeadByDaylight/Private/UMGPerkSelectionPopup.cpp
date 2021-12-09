#include "UMGPerkSelectionPopup.h"

void UUMGPerkSelectionPopup::OnSlotSelected(const int32 index) {
}

UUMGPerkSelectionPopup::UUMGPerkSelectionPopup() {
    this->LargePerkSelectionSlot = NULL;
    this->FirstSmallSlot = NULL;
    this->SecondSmallSlot = NULL;
    this->PictureCharacterBackground = NULL;
    this->SelectablePerksContainer = NULL;
    this->SmallSlotContainer = NULL;
    this->RewardSubTitle = NULL;
    this->PerkSelectionTitle = NULL;
    this->NoPerksContainer = NULL;
    this->AcquireMorePerksByText = NULL;
    this->AcquireMorePerksByOption1Text = NULL;
    this->AcquireMorePerksByOption2Text = NULL;
    this->PrestigeIcon = NULL;
}

