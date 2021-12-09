#include "SingleProjectileProviderComponent.h"
#include "Net/UnrealNetwork.h"
#include "BaseProjectile.h"

void USingleProjectileProviderComponent::OnRep_Projectile() {
}

void USingleProjectileProviderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USingleProjectileProviderComponent, _projectile);
}

USingleProjectileProviderComponent::USingleProjectileProviderComponent() {
    this->_projectileClass = ABaseProjectile::StaticClass();
    this->_projectile = NULL;
}

