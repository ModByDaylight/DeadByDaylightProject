#include "SlasherAnimInstance.h"

void USlasherAnimInstance::SetIsCrouched(const bool value) {
}

void USlasherAnimInstance::CallOnFootTrapped() {
}

USlasherAnimInstance::USlasherAnimInstance() {
    this->_isCrouched = false;
    this->_isRevvingChainsaw = false;
    this->_isAttackSuccessMontagePlaying = false;
    this->_isCamOn = false;
    this->_isAttacking = false;
    this->_isAnyMontagePlaying = false;
    this->_isFrenzy = false;
    this->_isFrenzyCD = false;
    this->_isInParadise = false;
    this->_enableArmOverrideTier3 = false;
    this->_isRingingBell = false;
    this->_isCarrying = false;
    this->_isPassivePhaseWalking = false;
    this->_isActivePhaseWalking = false;
    this->_isInAir = false;
    this->_isVaultingToFall = false;
    this->_isSpectator = false;
    this->_firstPersonView = false;
    this->_isIdle = false;
    this->_validSlasher = false;
    this->_animDirection = 0.00f;
    this->_animSpeed = 0.00f;
    this->_animPitch = 0.00f;
    this->_animTurning = 0.00f;
    this->_animYaw = 0.00f;
    this->_pelvisHeight = 0.00f;
    this->_idleTime = 0.00f;
    this->_directionSwitch = 0;
    this->_mySlasher = NULL;
    this->_interactionType = EInteractionAnimation::VE_None;
    this->_demogorgonPortalPlacerState = NULL;
    this->_demogorgonTeleportDuration = 0.00f;
    this->_demogorgonChargedAttackStateComponent = NULL;
    this->_isDemogorgonCharging = false;
    this->_demogorgonChargingPercent = 0.00f;
    this->_oniAttackState = NULL;
    this->_isOniCharging = false;
    this->_oniAttackType = EOniAttackType::VE_NotDemonMode;
    this->_oniChargeDuration = 0.00f;
    this->_previousAttackSubstate = EAttackSubstate::VE_None;
    this->_attackSubstate = EAttackSubstate::VE_None;
    this->_evilWithinComponent = NULL;
    this->_frenzyComponent = NULL;
    this->_phaseWalkingComponent = NULL;
    this->_armIKSensorComponent = NULL;
}

