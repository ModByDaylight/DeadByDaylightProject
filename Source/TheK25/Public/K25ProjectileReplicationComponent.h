#pragma once
#include "CoreMinimal.h"
#include "K25ProjectileDeactivationData.h"
#include "BaseProjectileReplicationComponent.h"
#include "LaunchInfo.h"
#include "K25ProjectileReplicationComponent.generated.h"

class AK25Chain;
class AK25Projectile;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK25_API UK25ProjectileReplicationComponent : public UBaseProjectileReplicationComponent {
    GENERATED_BODY()
public:
    UK25ProjectileReplicationComponent();
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetAttachedChain(AK25Projectile* projectile, AK25Chain* chainToAttach, FLaunchInfo launchInfo);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DeactivateProjectile(AK25Projectile* projectile, const FK25ProjectileDeactivationData& deactivationData);
    
};

