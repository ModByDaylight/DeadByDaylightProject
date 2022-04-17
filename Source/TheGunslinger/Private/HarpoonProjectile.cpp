#include "HarpoonProjectile.h"
#include "HarpoonProjectileMovementComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"

void AHarpoonProjectile::OnHarpoonStop(const FHitResult& result) {
}

AHarpoonProjectile::AHarpoonProjectile() : Super(FObjectInitializer::Get()
    .SetDefaultSubobjectClass(TEXT("Movement"), UHarpoonProjectileMovementComponent::StaticClass())) {
    this->_movement = CastChecked<UHarpoonProjectileMovementComponent>(Movement);
    this->_environmentCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Environment Collider"));
    this->_targetCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Target Detector"));
    this->_skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh"));
    this->_poolableActorComponent = NULL;
}

