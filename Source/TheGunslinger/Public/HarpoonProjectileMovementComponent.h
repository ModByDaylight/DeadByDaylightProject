#pragma once
#include "CoreMinimal.h"
#include "PhysicsBasedProjectileMovementComponent.h"
#include "DBDTunableRowHandle.h"
#include "HarpoonProjectileMovementComponent.generated.h"

UCLASS()
class THEGUNSLINGER_API UHarpoonProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _maxTravelDistance;
    
public:
    UHarpoonProjectileMovementComponent();
};

