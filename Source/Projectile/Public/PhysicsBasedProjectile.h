#pragma once
#include "CoreMinimal.h"
#include "BaseProjectile.h"
#include "PhysicsBasedProjectile.generated.h"

class UPhysicsBasedProjectileMovementComponent;

UCLASS()
class PROJECTILE_API APhysicsBasedProjectile : public ABaseProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPhysicsBasedProjectileMovementComponent* Movement;
    
public:
    APhysicsBasedProjectile();
};

