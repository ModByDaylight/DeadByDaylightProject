#include "DeathBedInteractable.h"
#include "MontagePlayer.h"
#include "Components/SceneComponent.h"
#include "ChargeableComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "AnimationMontageSlave.h"
#include "DeathBedAntiCampComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

class AActor;
class ACamperPlayer;
class ADeathBedInteractable;
class UPrimitiveComponent;

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
    this->_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->_inDeathBedCamper = NULL;
    this->_rescueChargeableComponent = CreateDefaultSubobject<UChargeableComponent>(TEXT("RescueChargeableComponent"));
    this->_deathBedSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DeathBedSkeletalMesh"));
    this->_interactionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractorZone"));
    this->_playerOverlapZone = CreateDefaultSubobject<UBoxComponent>(TEXT("playerOverlapZone"));
    this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("MontagePlayer"));
    this->_deathBedCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("DeathBedCollision"));
    this->_animationMontageSlave = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("MontageSlave"));
    this->_montageToPlay = NULL;
    this->_deathBedAnticampComponent = CreateDefaultSubobject<UDeathBedAntiCampComponent>(TEXT("deathBedAnticampComponent"));
    this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
}

