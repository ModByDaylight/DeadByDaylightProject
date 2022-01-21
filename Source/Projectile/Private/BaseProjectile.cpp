#include "BaseProjectile.h"

class USphereComponent;
class UPrimitiveComponent;
class UBaseProjectileLauncher;

bool ABaseProjectile::SphereTraceSingle(FVector start, FVector end, USphereComponent* sphere, FHitResult& outHitResult) const {
    return false;
}





bool ABaseProjectile::Local_TryDetectCollision(FImpactInfo impactInfo, bool force) {
    return false;
}

bool ABaseProjectile::Local_SweepImpactCollision(const FVector& start, const FVector& end, const FRotator& colliderRotation, FHitResult& outHit) {
    return false;
}

bool ABaseProjectile::Local_OnPlayerDetected(FImpactInfo impactInfo, const FVector& projectileLocation) {
    return false;
}

bool ABaseProjectile::IsValidPlayerDetection_Implementation(FImpactInfo impactInfo) {
    return false;
}

bool ABaseProjectile::IsValidImpactDetection_Implementation(FImpactInfo impactInfo) {
    return false;
}

bool ABaseProjectile::IsOwningPawnLocallyControlled() const {
    return false;
}

UBaseProjectileLauncher* ABaseProjectile::GetLauncher() const {
    return NULL;
}

UPrimitiveComponent* ABaseProjectile::GetImpactPrimitiveComponent_Implementation() const {
    return NULL;
}

float ABaseProjectile::GetAddLauncherVeloctyFactor_Implementation() const {
    return 0.0f;
}

bool ABaseProjectile::Authority_TryDetectCollision(FImpactInfo impactInfo, bool force) {
    return false;
}

ABaseProjectile::ABaseProjectile() {
    this->OnImpactAINoiseEventRange = 1600.00f;
    this->_multicastLaunch = false;
    this->_allowMultipleHits = false;
    this->_notifyClientOfServerHitValidationResult = false;
    this->_replicationComponent = NULL;
}

