#include "PlayerAnimInstance.h"

class ADBDPlayer;

void UPlayerAnimInstance::OnLevelReadyToPlay() {
}

void UPlayerAnimInstance::OnIntroCompleted() {
}

bool UPlayerAnimInstance::HasBeenNotified(const FName animNotify) const {
    return false;
}

ADBDPlayer* UPlayerAnimInstance::GetOwningPlayer() const {
    return NULL;
}

UPlayerAnimInstance::UPlayerAnimInstance() {
    this->_owningPlayer = NULL;
    this->_animEffectBlackBoard = NULL;
    this->_animEffectHandlerForSFX = NULL;
    this->_animEffectHandlerForVFX = NULL;
    this->_animEffectHandlerClassForSFX = NULL;
    this->_animEffectHandlerClassForVFX = NULL;
    this->_isInParadise = false;
    this->_isIntroCompleted = false;
    this->_isLevelReadyToPlay = false;
    this->_interactionDuration = 0.00f;
}

