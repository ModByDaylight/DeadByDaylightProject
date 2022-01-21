#include "HarpoonProjectile.h"
#include "HarpoonProjectileMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"

void AHarpoonProjectile::OnHarpoonStop(const FHitResult& result) {
}

AHarpoonProjectile::AHarpoonProjectile() {
    this->_movement = CreateDefaultSubobject<UHarpoonProjectileMovementComponent>(TEXT("Movement"));
    this->_environmentCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Environment Collider"));
    this->_targetCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Target Detector"));
    this->_skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh"));
    this->_poolableActorComponent = NULL;
}

