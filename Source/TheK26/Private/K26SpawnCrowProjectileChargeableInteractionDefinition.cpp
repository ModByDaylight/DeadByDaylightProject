#include "K26SpawnCrowProjectileChargeableInteractionDefinition.h"

class UK26AmmoHandlerComponent;
class UK26PathHandlerComponent;
class UK26PowerStatusHandlerComponent;
class ADBDPlayer;
class ASlasherPlayer;

void UK26SpawnCrowProjectileChargeableInteractionDefinition::SetSummonCooldown() {
}

void UK26SpawnCrowProjectileChargeableInteractionDefinition::SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26PathHandlerComponent* pathHandler, UK26PowerStatusHandlerComponent* statusHandler) {
}

void UK26SpawnCrowProjectileChargeableInteractionDefinition::Server_PlaceProjectileWithPath_Implementation(ASlasherPlayer* killer, const FVector& projectileSpawnPoint, const float killerLocalTime) {
}

void UK26SpawnCrowProjectileChargeableInteractionDefinition::OnSummonCooldownComplete() {
}

void UK26SpawnCrowProjectileChargeableInteractionDefinition::OnConfirmButtonPressed(ASlasherPlayer* killer) {
}

void UK26SpawnCrowProjectileChargeableInteractionDefinition::Multicast_OnK26CrowSummoned_Implementation(const ASlasherPlayer* killer, const int32 remainingAmmo, const int32 maxAmmo) {
}

void UK26SpawnCrowProjectileChargeableInteractionDefinition::Multicast_OnK26CrowSummonAttemptAcknowledged_Implementation() {
}

void UK26SpawnCrowProjectileChargeableInteractionDefinition::Local_OnGlobalCooldownDone(ADBDPlayer* player) {
}

bool UK26SpawnCrowProjectileChargeableInteractionDefinition::IsSummonOnCooldown() const {
    return false;
}




bool UK26SpawnCrowProjectileChargeableInteractionDefinition::CanSummonCrowOnceFullyCharged() {
    return false;
}

bool UK26SpawnCrowProjectileChargeableInteractionDefinition::CanSummonCrow() {
    return false;
}

UK26SpawnCrowProjectileChargeableInteractionDefinition::UK26SpawnCrowProjectileChargeableInteractionDefinition() {
    this->_aimingGuideClass = NULL;
    this->_local_aimingGuide = NULL;
    this->_isConfirmButtonPressed = false;
    this->_ammoHandler = NULL;
    this->_pathHandler = NULL;
    this->_statusHandler = NULL;
    this->_firedFullyChargedEvent = false;
    this->_isWaitingForSummonAcknowledgement = false;
    this->_globalCooldownMovementSpeedCurve = NULL;
}

