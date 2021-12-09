#include "ThrowingKnivesHitSubAnimInstance.h"

UThrowingKnivesHitSubAnimInstance::UThrowingKnivesHitSubAnimInstance() {
    this->_hitByKnifeTrigger = false;
    this->_knifeHitCausedKOTrigger = false;
    this->_knifeHitCausedDamageTrigger = false;
    this->_useAlternateHitReactionState = false;
    this->_knifeHitAngle = 0.00f;
    this->_knifeHitStateHitAngle = 0.00f;
    this->_alternateKnifeHitStateHitAngle = 0.00f;
}

