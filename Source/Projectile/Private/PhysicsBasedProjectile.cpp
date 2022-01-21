#include "PhysicsBasedProjectile.h"
#include "PhysicsBasedProjectileMovementComponent.h"

APhysicsBasedProjectile::APhysicsBasedProjectile() {
    this->Movement = CreateDefaultSubobject<UPhysicsBasedProjectileMovementComponent>(TEXT("Movement"));
}

