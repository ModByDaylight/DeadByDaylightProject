#include "Snowman.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;

void ASnowman::OnRep_SurvivorUsingSnowman() {
}

void ASnowman::OnRep_SnowmanState() {
}

void ASnowman::OnRep_SnowmanDestructionType() {
}

void ASnowman::OnRep_IsMoving() {
}

void ASnowman::Multicast_StartSnowmanDestruction_Implementation(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller) {
}

void ASnowman::Multicast_SpawnSnowman_Implementation(FSnowmanSpawnData spawnData) {
}

void ASnowman::Multicast_SetSnowmanMaterialVariant_Implementation(const int32 materialVariantIndex) {
}

void ASnowman::Multicast_SetSnowmanHiddenInGame_Implementation(bool isHidden) {
}

void ASnowman::Multicast_OnSnowmanStartBeingUsedBySurvivor_Implementation(ACamperPlayer* survivorUsingSnowman) {
}

void ASnowman::Multicast_OnSnowmanStartBeingControlledBySurvivor_Implementation(ACamperPlayer* survivorUsingSnowman) {
}

void ASnowman::Multicast_DrawDebugCollisionCheck_Implementation(FVector boxExtent, float debugLifetime) const {
}










void ASnowman::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASnowman, _snowmanState);
    DOREPLIFETIME(ASnowman, _snowmanDestructionType);
    DOREPLIFETIME(ASnowman, _survivorUsingThisSnowman);
    DOREPLIFETIME(ASnowman, _isMoving);
}

ASnowman::ASnowman() {
    this->_snowmanState = ESnowmanState::Destroyed;
    this->_snowmanDestructionType = ESnowmanDestructionType::None;
    this->_survivorUsingThisSnowman = NULL;
    this->_hideInSnowmanInteractionChargeable = NULL;
    this->_isAcquiredFromPool = false;
    this->_isMoving = false;
}

