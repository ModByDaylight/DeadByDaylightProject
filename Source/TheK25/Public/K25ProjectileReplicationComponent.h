#pragma once
#include "CoreMinimal.h"
#include "LaunchInfo.h"
#include "BaseProjectileReplicationComponent.h"
#include "K25ProjectileDeactivationData.h"
#include "K25ProjectileReplicationComponent.generated.h"

class AK25Chain;
class AK25Projectile;

UCLASS(EditInlineNew)
class THEK25_API UK25ProjectileReplicationComponent : public UBaseProjectileReplicationComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetAttachedChain(AK25Projectile* projectile, AK25Chain* chainToAttach, FLaunchInfo launchInfo);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DeactivateProjectile(AK25Projectile* projectile, const FK25ProjectileDeactivationData& deactivationData);
    
public:
    UK25ProjectileReplicationComponent();
};

