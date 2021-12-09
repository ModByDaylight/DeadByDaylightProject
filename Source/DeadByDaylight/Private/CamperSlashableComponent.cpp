#include "CamperSlashableComponent.h"

class UCapsuleComponent;

void UCamperSlashableComponent::SetUseCrouchSlashableCapsule(bool useCrouchCapsule) {
}

void UCamperSlashableComponent::SetStandingCapsuleHalfHeight(float height) {
}

void UCamperSlashableComponent::SetSlashableZone(UCapsuleComponent* zone) {
}

void UCamperSlashableComponent::SetHookSlashableZone(UCapsuleComponent* zone) {
}

void UCamperSlashableComponent::SetCrouchCapsuleHalfHeight(float height) {
}

UCamperSlashableComponent::UCamperSlashableComponent() {
    this->_slashableZone = NULL;
    this->_hookSlashableZone = NULL;
    this->_standingCapsuleHalfHeight = -1.00f;
    this->_crouchCapsuleHalfHeight = -1.00f;
    this->_sourceActivationLingerDuration = 0.10f;
    this->_slashableActivationSources = NULL;
}

