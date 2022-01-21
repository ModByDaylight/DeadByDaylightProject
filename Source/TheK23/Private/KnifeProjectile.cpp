#include "KnifeProjectile.h"
#include "PoolableProjectileComponent.h"

class UPrimitiveComponent;
class AActor;

bool AKnifeProjectile::WasLaunchedDuringSuperMode() const {
    return false;
}

bool AKnifeProjectile::ShouldPlayRicochetSound() const {
    return false;
}

void AKnifeProjectile::SetKnifeAcquired(bool acquired) {
}

void AKnifeProjectile::OnWorldColliderHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit) {
}

void AKnifeProjectile::OnProjectileBounce(const FHitResult& impactResult, const FVector& impactVelocity) {
}

bool AKnifeProjectile::KnifeCanPierceCampers() const {
    return false;
}

float AKnifeProjectile::GetAddonExplosionRadius() const {
    return 0.0f;
}




AKnifeProjectile::AKnifeProjectile() {
    this->_worldCollider = NULL;
    this->_camperDetector = NULL;
    this->_poolableActorComponent = CreateDefaultSubobject<UPoolableProjectileComponent>(TEXT("PoolableComponent"));
}

