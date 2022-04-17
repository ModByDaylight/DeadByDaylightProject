#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "PhysicsBasedProjectileMovementComponent.h"
#include "HarpoonProjectileMovementComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UHarpoonProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maxTravelDistance;
    
public:
    UHarpoonProjectileMovementComponent();
};

