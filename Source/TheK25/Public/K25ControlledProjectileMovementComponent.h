#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "PhysicsBasedProjectileMovementComponent.h"
#include "TunableStat.h"
#include "K25ControlledProjectileMovementComponent.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25ControlledProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _projectileBaseSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _baseProjectileMaximumDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _projectileSpeedIncreaseTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTunableStat _maximumTravelDistanceStat;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _projectileSpeedIncreaseMultiplier;
    
private:
    UPROPERTY(Transient)
    float _totaldistanceTravelled;
    
public:
    UK25ControlledProjectileMovementComponent();
};

