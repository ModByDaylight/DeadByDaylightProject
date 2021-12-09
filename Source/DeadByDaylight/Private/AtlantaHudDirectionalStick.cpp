#include "AtlantaHudDirectionalStick.h"

void UAtlantaHudDirectionalStick::SetMovementLockAnimationStatus(bool value) {
}

UAtlantaHudDirectionalStick::UAtlantaHudDirectionalStick() {
    this->JoystickAnimationPanel = NULL;
    this->ContainerToRotate = NULL;
    this->ArrowsContainer = NULL;
    this->JoystickLockImage = NULL;
    this->JoystickOn = NULL;
    this->AutoRunContainer = NULL;
    this->_isMovementLockAnimationActive = false;
}

