#include "MovableCamera.h"

AMovableCamera::AMovableCamera() {
    this->MovementSpeed = 100.00f;
    this->RequiresShiftModifierForInput = false;
    this->_playerController = NULL;
}

