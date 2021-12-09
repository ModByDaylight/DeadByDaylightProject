#include "K25Projectile.h"
#include "Net/UnrealNetwork.h"

class UDBDProjectileMovementComponent;

void AK25Projectile::Server_RequestDisableProjectile_Implementation(EK25ProjectileDeactivateReason deactivateReason) {
}

void AK25Projectile::OnProjectileStopped(const FHitResult& result) {
}

UDBDProjectileMovementComponent* AK25Projectile::GetMovementComponent() const {
    return NULL;
}

FVector AK25Projectile::GetChainAttachmentLocation_Implementation() const {
    return FVector{};
}



void AK25Projectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AK25Projectile, _attachedChain);
}

AK25Projectile::AK25Projectile() {
    this->_attachedChain = NULL;
    this->_timeIgnoreSlasherCollision = 0.00f;
    this->_isActive = false;
}

