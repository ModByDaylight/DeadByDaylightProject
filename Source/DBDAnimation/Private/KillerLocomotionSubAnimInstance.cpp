#include "KillerLocomotionSubAnimInstance.h"

UKillerLocomotionSubAnimInstance::UKillerLocomotionSubAnimInstance() {
    this->_landLightTPV = NULL;
    this->_landLightFPV = NULL;
    this->_BSLandTPV = NULL;
    this->_BSLandFPV = NULL;
    this->_walkToFallTPV = NULL;
    this->_walkToFallFPV = NULL;
    this->_carryIdleTPV = NULL;
    this->_carryIdleFPV = NULL;
    this->_fallingTPV = NULL;
    this->_fallingFPV = NULL;
    this->_isFirstPersonView = false;
    this->_landLight = NULL;
    this->_BSLand = NULL;
    this->_walkToFall = NULL;
    this->_carryIdle = NULL;
    this->_falling = NULL;
    this->_isVaultingToFall = false;
}

