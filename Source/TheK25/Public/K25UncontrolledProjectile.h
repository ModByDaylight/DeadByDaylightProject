#pragma once
#include "CoreMinimal.h"
#include "K25Projectile.h"
#include "PoolableActor.h"
#include "DBDTunableRowHandle.h"
#include "K25UncontrolledProjectile.generated.h"

class ACamperPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FK25UncontrolledProjectileOnAcquiredChanged, const bool, acquired);

UCLASS()
class AK25UncontrolledProjectile : public AK25Projectile, public IPoolableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FK25UncontrolledProjectileOnAcquiredChanged OnAcquiredChanged;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _minimumTimeBeforeProjectileLaunch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _maximumTimeBeforeProjectileLaunch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _projectileSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDBDTunableRowHandle _projectileMaximumTravelDistance;
    
private:
    UPROPERTY(Transient)
    bool _isAcquiredFromPool;
    
    UPROPERTY(ReplicatedUsing=OnRep_TargetSurvivor)
    ACamperPlayer* _targetSurvivor;
    
    UFUNCTION()
    void OnRep_TargetSurvivor();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerUncontrolledProjectileSpawnSFX();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AK25UncontrolledProjectile();
};

