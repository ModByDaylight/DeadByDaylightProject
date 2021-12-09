#include "BasePlayerAttackSubAnimInstance.h"

UBasePlayerAttackSubAnimInstance::UBasePlayerAttackSubAnimInstance() {
    this->_attackState = EAttackSubstate::VE_None;
    this->_direction = 0.00f;
    this->_strafeAngle = 45.00f;
    this->_isStrafe = false;
    this->_attackInPlayRate = 1.00f;
    this->_attackSwingPlayRate = 1.00f;
    this->_attackMissPlayRate = 1.00f;
    this->_attackHitPlayRate = 1.00f;
    this->_attackBounceOfWallPlayRate = 1.00f;
    this->_firstPersonView = false;
}

