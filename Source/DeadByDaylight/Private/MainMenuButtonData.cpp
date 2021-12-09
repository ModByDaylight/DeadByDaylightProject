#include "MainMenuButtonData.h"

FMainMenuButtonData::FMainMenuButtonData() {
    this->ButtonType = EMainMenuButton::News;
    this->IsDisabled = false;
    this->IsLocked = false;
    this->IsHidden = false;
}

