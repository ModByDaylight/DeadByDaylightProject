#include "BaseKillerWeaponAnimInstance.h"

UBaseKillerWeaponAnimInstance::UBaseKillerWeaponAnimInstance() {
    this->_attackState = EAttackSubstate::VE_None;
    this->_isCarrying = false;
    this->_isActive = false;
    this->_attackInPlayRate = 1.00f;
    this->_attackSwingPlayRate = 1.00f;
    this->_attackMissPlayRate = 1.00f;
    this->_attackHitPlayRate = 1.00f;
    this->_attackBounceOfWallPlayRate = 1.00f;
    this->_firstPersonView = false;
}

