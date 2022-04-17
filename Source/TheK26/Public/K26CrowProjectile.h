#pragma once
#include "CoreMinimal.h"
#include "OnAcquiredChangedDelegate.h"
#include "PotentialAttack.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "OnCrowProjectileStateChangedDelegate.h"
#include "PoolableActor.h"
#include "OnIsBeingFlashlightedChangedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "EK26ProjectileState.h"
#include "K26ProjectileStateDetails.h"
#include "TunableStat.h"
#include "K26ProjectileStateChangeDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "K26CrowProjectile.generated.h"

class UPrimitiveComponent;
class UK26AmmoHandlerComponent;
class UStaticMeshComponent;
class UCurveFloat;
class UK26PowerOutlineUpdateStrategy;
class UDBDOutlineComponent;
class USplineComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UFirecrackerEffectHandlerComponent;
class UFlashlightableComponent;
class ULightBurnable;
class UDBDNavModifierComponent;
class UK26PowerStatusHandlerComponent;
class UK26PathHandlerComponent;
class UChargeableComponent;
class ACamperPlayer;

UCLASS()
class AK26CrowProjectile : public AActor, public IPoolableActor, public IPotentialAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCrowProjectileStateChanged OnCrowProjectileStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsBeingFlashlightedChanged OnIsBeingFlashlightedChanged;
    
protected:
    UPROPERTY(Transient)
    FVector _originalFireLocation;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EK26ProjectileState, FK26ProjectileStateDetails> _projectileStateDetails;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _summonTime;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _detectionRadiusScaleX;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _detectionRadiusScaleY;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _detectionRadiusScaleZ;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _crowFireAuraVisibilityForSurvivorsTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _crowSummonAuraVisibilityForSurvivorsTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _detectionRadiusFromAbove;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _baseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _selfDestructTimeOnDestroyed;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _requiredFlashlightTimeToDestroy;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _flashlightablePointScale;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _rangeToTriggerNearSurvivorSFX;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _flashlightDisableTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _onPathMovementSpeedModifierCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _offPathMovementSpeedModifierCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float _projectileOffPathCurveDuration;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Path)
    TArray<FVector> _path;
    
    UPROPERTY(Replicated)
    int32 _pooledPathIndex;
    
    UPROPERTY(BlueprintReadOnly)
    EK26ProjectileState _currentProjectileState;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UK26PowerOutlineUpdateStrategy* _crowFlockOutlineUpdateStrategy;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(EditDefaultsOnly, Export, Replicated)
    USplineComponent* _pathSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UStaticMeshComponent* _collisionStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UStaticMeshComponent* _killerInstinctStaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    USkeletalMeshComponent* _visualSkeletalMeshComponent;
    
    UPROPERTY(EditDefaultsOnly, Export)
    USceneComponent* _rootComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UFlashlightableComponent* _flashLightableComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    ULightBurnable* _lightBurnableComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UDBDNavModifierComponent* _dangerNavModifierComponent;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USceneComponent* flashlightPointCenter;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USceneComponent* flashlightPointNorth;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USceneComponent* flashlightPointEast;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USceneComponent* flashlightPointSouth;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USceneComponent* flashlightPointWest;
    
    UPROPERTY(BlueprintAssignable)
    FK26ProjectileStateChangeDelegate _k26ProjectileStateChangeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnAcquiredChanged OnAcquiredChanged;
    
private:
    UPROPERTY(Replicated, Transient)
    FVector _forwardDirection;
    
    UPROPERTY(Transient)
    bool _isBeingFlashlighted;
    
    UPROPERTY(Transient)
    float _lastFlashlightProgress;
    
    UPROPERTY(Transient)
    float _lastTimeFlashlightValueIncreased;
    
    UPROPERTY(Transient)
    float _fireTime;
    
    UPROPERTY(Transient)
    float _currentDistanceAlongSpline;
    
    UPROPERTY(Transient)
    float _offPathTime;
    
    UPROPERTY(Export, Replicated)
    UK26PowerStatusHandlerComponent* _statusHandlerComponent;
    
    UPROPERTY(Export, Replicated)
    UK26AmmoHandlerComponent* _ammoHandlerComponent;
    
    UPROPERTY(Export, Replicated)
    UK26PathHandlerComponent* _pathHandlerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UChargeableComponent* _flashlightDestroyChargeable;
    
public:
    AK26CrowProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server)
    void Server_OnSurvivorHit(const EK26ProjectileState stateOnHit, ACamperPlayer* hitSurvivor);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void ProjectileWentOutOfBoundsEvent();
    
    UFUNCTION()
    void OnSurvivorAdded(ACamperPlayer* survivorAdded);
    
private:
    UFUNCTION()
    void OnRep_Path();
    
protected:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION()
    void OnIsWithinSurvivorRangeChanged(AActor* survivorActor, const bool isInRange);
    
    UFUNCTION()
    void OnIntroCompleted();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetState(const EK26ProjectileState newState, const int32 pooledPathIndex);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetStartingPosition(const FVector& position, const FRotator& angle);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnExpiration();
    
    UFUNCTION()
    void Local_OnSummonComplete();
    
    UFUNCTION()
    void Local_OnCollisionOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsHitboxBeingShown() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBeingFlashlighted() const;
    
private:
    UFUNCTION()
    void HideOutlineFromSurvivor();
    
public:
    UFUNCTION(BlueprintPure)
    float GetFlashlightProgress() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetDistanceFromFirePosition() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnExpiration();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnEnteredNearAudioRangeOfSurvivor(ACamperPlayer* survivor);
    
private:
    UFUNCTION(Client, Reliable)
    void Client_LocalKillerStartSummonTimer(const float killerLocalSummonTime);
    
    UFUNCTION()
    void Authority_OnSummonComplete();
    
    UFUNCTION()
    void Authority_OnScoutingOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);
    
    UFUNCTION()
    void Authority_OnDestroyTimerExpired();
    
    UFUNCTION()
    void Authority_OnDestroyAttempt(const TArray<AActor*>& instigatorsForCompletion);
    
    UFUNCTION()
    void Authority_OnCollisionOverlapEnd(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);
    
    UFUNCTION()
    void Authority_OnCollisionOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);
    
    
    // Fix for true pure virtual functions not being implemented
};

