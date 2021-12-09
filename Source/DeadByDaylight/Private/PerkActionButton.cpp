#include "PerkActionButton.h"






UPerkActionButton::UPerkActionButton() {
    this->TextUnlockLevelTitle = NULL;
    this->Activatable = false;
    this->SelectedImageVisibility = ESlateVisibility::Collapsed;
    this->ClickableButtonVisibility = ESlateVisibility::Collapsed;
    this->ClickableImageVisibility = ESlateVisibility::Collapsed;
    this->ProgressbarVisibility = ESlateVisibility::HitTestInvisible;
    this->IdleTime = 0.00f;
}

