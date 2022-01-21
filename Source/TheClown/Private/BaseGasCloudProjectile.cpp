#include "BaseGasCloudProjectile.h"
#include "PoolableProjectileComponent.h"

class UPrimitiveComponent;
class AActor;

void ABaseGasCloudProjectile::SetIsDissipating(bool NewIsDissipating) {
}

void ABaseGasCloudProjectile::SetIgnoredActors() {
}


void ABaseGasCloudProjectile::OnOverlapEnd(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex) {
}

void ABaseGasCloudProjectile::OnOverlapBegin(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}


void ABaseGasCloudProjectile::OnAcquiredChanged(bool acquired) {
}

void ABaseGasCloudProjectile::Multicast_DissipateGasCloud_Implementation() {
}

bool ABaseGasCloudProjectile::IsSurvivorDetectionEnabled() {
    return false;
}

bool ABaseGasCloudProjectile::IsDissipating() {
    return false;
}

EBombType ABaseGasCloudProjectile::GetGasType() {
    return EBombType::Toxin;
}

void ABaseGasCloudProjectile::DissipateGasCloud_Implementation() {
}

void ABaseGasCloudProjectile::Authority_SetCumulativeLifetime(const float value) {
}

float ABaseGasCloudProjectile::Authority_GetCumulativeLifetime() const {
    return 0.0f;
}


ABaseGasCloudProjectile::ABaseGasCloudProjectile() {
    this->_gasType = EBombType::Toxin;
    this->_poolableProjectile = CreateDefaultSubobject<UPoolableProjectileComponent>(TEXT("Poolable Projectile Component"));
    this->_overlappingTime = 0.00f;
    this->_dissipating = false;
    this->_gasParticleSystem = NULL;
    this->_simpleCollider = NULL;
    this->_complexCollider = NULL;
    this->_survivorDetector = NULL;
    this->_activeGasCloudTracker = NULL;
    this->_cumulativeLifetime = 0.00f;
}

