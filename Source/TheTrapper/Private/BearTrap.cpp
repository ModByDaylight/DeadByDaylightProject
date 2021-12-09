#include "BearTrap.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class UAnimMontage;
class UInteractionDefinition;
class UPrimitiveComponent;
class AActor;
class ASlasherPlayer;
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
    this->_ownerPlayer = NULL;
    this->_isTrapperOutOfSafetyZone = true;
    this->_maximumAttemptsForSelfUntrap = 6;
    this->_selfUntrapAttemptsRemaining = 0;
    this->_mainInteractor = NULL;
    this->_trapSurvivor = NULL;
    this->_trapKiller = NULL;
    this->_trappedPlayer = NULL;
}

