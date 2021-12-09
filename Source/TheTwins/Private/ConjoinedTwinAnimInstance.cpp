#include "ConjoinedTwinAnimInstance.h"

class AConjoinedTwin;

AConjoinedTwin* UConjoinedTwinAnimInstance::GetOwningConjoinedTwin() const {
    return NULL;
}

UConjoinedTwinAnimInstance::UConjoinedTwinAnimInstance() {
    this->_owningConjoinedTwin = NULL;
    this->_firstPersonView = false;
    this->_forwardVelocity = 0.00f;
    this->_lateralVelocity = 0.00f;
    this->_interactionType = EInteractionAnimation::VE_None;
    this->_isInAir = false;
    this->_isIdle = false;
    this->_idleTime = 0.00f;
    this->_isAttacking = false;
    this->_attackerComponent = NULL;
    this->_twinAttachmentComponent = NULL;
    this->_twinLockerBlockerComponent = NULL;
    this->_animYaw = 0.00f;
    this->_animPitch = 0.00f;
    this->_isSpectator = false;
    this->_animDirection = 0.00f;
    this->_animSpeed = 0.00f;
    this->_isAttachedToSister = false;
    this->_isAttachedToSurvivor = false;
    this->_isAttachedToFemaleSurvivor = false;
    this->_isChargingTwinJump = false;
    this->_isPossessing = false;
    this->_isWakingUpFromPossess = false;
    this->_isDormant = false;
    this->_isBeingAutoPossessedAfterRelease = false;
    this->_isAttachedToLocker = false;
    this->_attackState = EAttackSubstate::VE_None;
}

