#include "BlightedSerumCollisionInteraction.h"

class UBlightedSerumCooldownInteraction;

void UBlightedSerumCollisionInteraction::SetCooldownInteraction(UBlightedSerumCooldownInteraction* cooldownInteraction) {
}

UBlightedSerumCollisionInteraction::UBlightedSerumCollisionInteraction() {
    this->_cooldownInteraction = NULL;
    this->_bounceTime = 0.20f;
}

