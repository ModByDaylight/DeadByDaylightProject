#include "HarpoonProjectile.h"

void AHarpoonProjectile::OnHarpoonStop(const FHitResult& result) {
}

AHarpoonProjectile::AHarpoonProjectile() {
    this->_poolableActorComponent = NULL;
}

