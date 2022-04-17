#pragma once
#include "CoreMinimal.h"
#include "PoolableActor.h"
#include "K25Projectile.h"
#include "OnAcquiredChangedDelegate.h"
#include "DBDTunableRowHandle.h"
#include "K25UncontrolledProjectile.generated.h"

class ACamperPlayer;

UCLASS()
class AK25UncontrolledProjectile : public AK25Projectile, public IPoolableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnAcquiredChanged OnAcquiredChanged;
    
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
    
public:
    AK25UncontrolledProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_TargetSurvivor();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerUncontrolledProjectileSpawnSFX();
    
    
    // Fix for true pure virtual functions not being implemented
};

