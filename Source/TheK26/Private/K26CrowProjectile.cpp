#include "K26CrowProjectile.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;
class AActor;
class UPrimitiveComponent;

void AK26CrowProjectile::Server_OnSurvivorHit_Implementation(const EK26ProjectileState stateOnHit, ACamperPlayer* hitSurvivor) {
}

void AK26CrowProjectile::ProjectileWentOutOfBoundsEvent_Implementation() {
}

void AK26CrowProjectile::OnSurvivorAdded(ACamperPlayer* survivorAdded) {
}

void AK26CrowProjectile::OnRep_Path() {
}

void AK26CrowProjectile::OnLevelReadyToPlay() {
}

void AK26CrowProjectile::OnIsWithinSurvivorRangeChanged(AActor* survivorActor, const bool isInRange) {
}

void AK26CrowProjectile::OnIntroCompleted() {
}

void AK26CrowProjectile::Multicast_SetState_Implementation(const EK26ProjectileState newState, const int32 pooledPathIndex) {
}

void AK26CrowProjectile::Multicast_SetStartingPosition_Implementation(const FVector& position, const FRotator& angle) {
}

void AK26CrowProjectile::Multicast_OnExpiration_Implementation() {
}

void AK26CrowProjectile::Local_OnSummonComplete() {
}

void AK26CrowProjectile::Local_OnCollisionOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult) {
}

bool AK26CrowProjectile::IsHitboxBeingShown() const {
    return false;
}

bool AK26CrowProjectile::IsBeingFlashlighted() const {
    return false;
}

void AK26CrowProjectile::HideOutlineFromSurvivor() {
}

float AK26CrowProjectile::GetFlashlightProgress() const {
    return 0.0f;
}

float AK26CrowProjectile::GetDistanceFromFirePosition() const {
    return 0.0f;
}



void AK26CrowProjectile::Client_LocalKillerStartSummonTimer_Implementation(const float killerLocalSummonTime) {
}

void AK26CrowProjectile::Authority_OnSummonComplete() {
}

void AK26CrowProjectile::Authority_OnScoutingOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult) {
}

void AK26CrowProjectile::Authority_OnDestroyTimerExpired() {
}

void AK26CrowProjectile::Authority_OnDestroyAttempt(const TArray<AActor*>& instigatorsForCompletion) {
}

void AK26CrowProjectile::Authority_OnCollisionOverlapEnd(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void AK26CrowProjectile::Authority_OnCollisionOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult) {
}

void AK26CrowProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AK26CrowProjectile, _path);
    DOREPLIFETIME(AK26CrowProjectile, _pooledPathIndex);
    DOREPLIFETIME(AK26CrowProjectile, _pathSplineComponent);
    DOREPLIFETIME(AK26CrowProjectile, _forwardDirection);
    DOREPLIFETIME(AK26CrowProjectile, _statusHandlerComponent);
    DOREPLIFETIME(AK26CrowProjectile, _ammoHandlerComponent);
    DOREPLIFETIME(AK26CrowProjectile, _pathHandlerComponent);
}

AK26CrowProjectile::AK26CrowProjectile() {
    this->_onPathMovementSpeedModifierCurve = NULL;
    this->_offPathMovementSpeedModifierCurve = NULL;
    this->_projectileOffPathCurveDuration = 1.00f;
    this->_pooledPathIndex = -1;
    this->_currentProjectileState = EK26ProjectileState::Invalid;
    this->_isBeingFlashlighted = false;
    this->_lastFlashlightProgress = 0.00f;
    this->_lastTimeFlashlightValueIncreased = 0.00f;
    this->_fireTime = 0.00f;
    this->_currentDistanceAlongSpline = 0.00f;
    this->_offPathTime = 0.00f;
    this->_statusHandlerComponent = NULL;
    this->_ammoHandlerComponent = NULL;
    this->_pathHandlerComponent = NULL;
}

