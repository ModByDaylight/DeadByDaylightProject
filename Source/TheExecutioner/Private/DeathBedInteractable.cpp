#include "DeathBedInteractable.h"

class ACamperPlayer;
class UPrimitiveComponent;
class UMontagePlayer;
class AActor;
class ADeathBedInteractable;

void ADeathBedInteractable::TeleportCamperToDeathBed() {
}


void ADeathBedInteractable::SetInDeathBedCamper(ACamperPlayer* camperPlayer) {
}

void ADeathBedInteractable::PlayerOverlapZoneEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void ADeathBedInteractable::PlayerOverlapZoneBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}


void ADeathBedInteractable::OnSkillCheckFailed() {
}



void ADeathBedInteractable::OnDeathBedDeathEnd() {
}

void ADeathBedInteractable::Multicast_RelocateToOtherDeathBed_Implementation(ADeathBedInteractable* deathBed, ACamperPlayer* camperPlayer) {
}

FVector ADeathBedInteractable::GetRescuerSnapPosition() const {
    return FVector{};
}

UMontagePlayer* ADeathBedInteractable::GetMontagePlayer() const {
    return NULL;
}

ACamperPlayer* ADeathBedInteractable::GetInDeathBedCamper() const {
    return NULL;
}




bool ADeathBedInteractable::CanRescueSurvivor() const {
    return false;
}

void ADeathBedInteractable::ActivateDeathBed(const bool value) {
}

ADeathBedInteractable::ADeathBedInteractable() {
    this->_inDeathBedCamper = NULL;
    this->_montageToPlay = NULL;
}

