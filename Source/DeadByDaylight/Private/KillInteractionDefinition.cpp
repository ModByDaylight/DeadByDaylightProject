#include "KillInteractionDefinition.h"

class ACamperPlayer;



ACamperPlayer* UKillInteractionDefinition::GetOwningSurvivor() const {
    return NULL;
}

FAnimationMontageDescriptor UKillInteractionDefinition::GetExitAnimationMontage_Implementation() const {
    return FAnimationMontageDescriptor{};
}

bool UKillInteractionDefinition::GetChargeCompleted() const {
    return false;
}

UKillInteractionDefinition::UKillInteractionDefinition() {
    this->_disableFOVSystemDuringInteraction = false;
    this->_chargeCompleted = false;
    this->_isKillShownInThirdPerson = true;
    this->_manuallyManageMeshHiding = false;
}

