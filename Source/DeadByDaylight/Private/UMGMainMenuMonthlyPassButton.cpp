#include "UMGMainMenuMonthlyPassButton.h"

void UUMGMainMenuMonthlyPassButton::OnButtonClick() {
}

UUMGMainMenuMonthlyPassButton::UUMGMainMenuMonthlyPassButton() {
    this->ButtonSwitcher = NULL;
    this->ActiveButton = NULL;
    this->NonActiveButton = NULL;
    this->OnClickSound = NULL;
}

