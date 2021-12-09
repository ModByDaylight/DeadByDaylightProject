#pragma once
#include "CoreMinimal.h"
#include "DBDProjectileMovementComponent.h"
#include "PhysicsBasedProjectileMovementComponent.generated.h"

UCLASS()
class PROJECTILE_API UPhysicsBasedProjectileMovementComponent : public UDBDProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPhysicsBasedProjectileMovementComponent();
};

