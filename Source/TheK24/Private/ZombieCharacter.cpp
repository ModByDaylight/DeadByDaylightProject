#include "ZombieCharacter.h"
#include "Net/UnrealNetwork.h"

class UOtherCharactersVerticalCollisionsHandler;
class ASlasherPlayer;
class UAuthoritativeMovementComponent;
class UPrimitiveComponent;
class AActor;
class UFlashlightComponent;




void AZombieCharacter::OnSlasherSet(ASlasherPlayer* slasher) {
}

void AZombieCharacter::OnRep_ZombieState(EZombieState previousState) {
}

void AZombieCharacter::OnRep_ZombieGender() {
}


void AZombieCharacter::OnEndOverlapZombieAttackDetector(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void AZombieCharacter::OnBeginOverlapZombieAttackDetector(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}

void AZombieCharacter::Multicast_ZombieKilledByKillerCosmetic_Implementation(EAttackType attackType) {
}

EZombieGender AZombieCharacter::GetZombieGender() const {
    return EZombieGender::Male;
}

UOtherCharactersVerticalCollisionsHandler* AZombieCharacter::GetOtherCharactersVerticalCollisionsHandler() const {
    return NULL;
}

UAuthoritativeMovementComponent* AZombieCharacter::GetAuthoritativeMovementComponent() const {
    return NULL;
}

FString AZombieCharacter::GetAudioSwitchState() const {
    return TEXT("");
}

void AZombieCharacter::Authority_OnZombieStateChanged(EZombieState zombieState) {
}

void AZombieCharacter::Authority_OnFlashlightRemoved(const UFlashlightComponent* flashlight) {
}

void AZombieCharacter::Authority_OnFlashlightAdded(const UFlashlightComponent* flashlight) {
}

void AZombieCharacter::Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData) {
}

void AZombieCharacter::Authority_DeactivateZombieAndStartRespawnTimer() {
}

void AZombieCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AZombieCharacter, _zombieState);
    DOREPLIFETIME(AZombieCharacter, _zombieGender);
    DOREPLIFETIME(AZombieCharacter, _audioSwitchState);
}

AZombieCharacter::AZombieCharacter() {
    this->_zombieState = EZombieState::InPool;
    this->_zombieGender = EZombieGender::Male;
    this->_femaleSkeletalMesh = NULL;
    this->_audioSwitchState = TEXT("SVR_M01");
    this->_zombieStunnedCapsuleRadius = 15.00f;
    this->_minFallHeight = 50.00f;
    this->_afterInAirAttackCooldown = 0.80f;
}

