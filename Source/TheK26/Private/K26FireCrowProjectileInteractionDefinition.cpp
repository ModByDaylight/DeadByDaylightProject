#include "K26FireCrowProjectileInteractionDefinition.h"

class UK26AmmoHandlerComponent;
class UK26PathHandlerComponent;
class UK26CooldownInteractionDefinition;
class ASlasherPlayer;

void UK26FireCrowProjectileInteractionDefinition::SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26PathHandlerComponent* pathHandler, UK26CooldownInteractionDefinition* cooldownInteraction) {
}

void UK26FireCrowProjectileInteractionDefinition::Server_RequestFireOnAmmo_Implementation(ASlasherPlayer* killer) {
}

void UK26FireCrowProjectileInteractionDefinition::Multicast_OnProjectileFired_Implementation(const ASlasherPlayer* killer) {
}

UK26FireCrowProjectileInteractionDefinition::UK26FireCrowProjectileInteractionDefinition() {
    this->_cooldownInteraction = NULL;
    this->_ammoHandler = NULL;
    this->_pathHandler = NULL;
}

