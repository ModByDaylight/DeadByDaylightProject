#include "BearTrap.h"
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"
#include "DBDOutlineComponent.h"
#include "BoxPlayerOverlapComponent.h"
#include "CapsulePlayerOverlapComponent.h"
#include "Components/BoxComponent.h"
#include "BearTrapOutlineUpdateStrategy.h"
#include "MapActorComponent.h"
#include "MontagePlayer.h"
#include "DBDNavModifierComponent.h"
#include "AnimationMontageSlave.h"

class ASlasherPlayer;
class UAnimMontage;
class ADBDPlayer;
class UPrimitiveComponent;
class AActor;
class UInteractionDefinition;
class UInteractor;
class UBearTrapAnimInstance;

void ABearTrap::TrySetTrappedPlayer(ADBDPlayer* player) {
}

void ABearTrap::SetTrappedPlayerSinceMoved(bool didTrap) {
}

void ABearTrap::SetTrappedPlayer(ADBDPlayer* trappedPlayer) {
}

void ABearTrap::PlayMontage(UAnimMontage* montage) const {
}

void ABearTrap::OnTrappedPlayerPickedUp(ADBDPlayer* picker) {
}

void ABearTrap::OnTrapDetectionZoneOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void ABearTrap::OnTrapDetectionZoneOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}

void ABearTrap::OnSlasherSet(ASlasherPlayer* slasher) {
}

void ABearTrap::OnSafetyZoneEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void ABearTrap::OnLevelReadyToPlay_Implementation() {
}

void ABearTrap::OnCollectUpdateStart() {
}

void ABearTrap::OnCollectUpdateEnd() {
}

bool ABearTrap::IsTrapperOutOfSafetyZone() const {
    return false;
}

void ABearTrap::InitializeTrapSurvivorInteraction(UInteractionDefinition* interaction) {
}

void ABearTrap::InitializeTrapKillerInteraction(UInteractionDefinition* interaction) {
}

void ABearTrap::InitializeMainInteractor(UInteractor* interactor) {
}

bool ABearTrap::HasTrappedPlayerSinceMoved() const {
    return false;
}

bool ABearTrap::HasTrappedPlayer() const {
    return false;
}

ADBDPlayer* ABearTrap::GetTrappedPlayer() const {
    return NULL;
}

UBearTrapAnimInstance* ABearTrap::GetAnimInstance() const {
    return NULL;
}



void ABearTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABearTrap, _selfUntrapAttemptsRemaining);
}

ABearTrap::ABearTrap() {
    this->_interactionVolume = CreateDefaultSubobject<UBoxPlayerOverlapComponent>(TEXT("Interaction Volume"));
    this->_trapPlayerDetectionZone = CreateDefaultSubobject<UCapsulePlayerOverlapComponent>(TEXT("Trap Player Detection Zone"));
    this->_killerSafetyZoneComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Killer Safety Zone Component"));
    this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("Outline Component"));
    this->_outlineUpdateStrategy = CreateDefaultSubobject<UBearTrapOutlineUpdateStrategy>(TEXT("Outline Update Strategy"));
    this->_mapActorComponent = CreateDefaultSubobject<UMapActorComponent>(TEXT("Map Actor Component"));
    this->_mapActorCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Map Actor Collision"));
    this->_trapBlocker = CreateDefaultSubobject<USphereComponent>(TEXT("Trap Blocker"));
    this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("Montage Player Component"));
    this->_ownerPlayer = NULL;
    this->_dangerNavModifierComponent = CreateDefaultSubobject<UDBDNavModifierComponent>(TEXT("DangerNavModifierComponent"));
    this->_isTrapperOutOfSafetyZone = true;
    this->_maximumAttemptsForSelfUntrap = 6;
    this->_selfUntrapAttemptsRemaining = 0;
    this->_mainInteractor = NULL;
    this->_trapSurvivor = NULL;
    this->_trapKiller = NULL;
    this->_trappedPlayer = NULL;
    this->_animationMontageSlave = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("Animation Montage Slave"));
}

