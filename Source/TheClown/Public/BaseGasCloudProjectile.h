#pragma once
#include "CoreMinimal.h"
#include "PhysicsBasedProjectile.h"
#include "EBombType.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "BaseGasCloudProjectile.generated.h"

class UParticleSystemComponent;
class UActiveGasCloudTrackerComponent;
class UPoolableProjectileComponent;
class ACamperPlayer;
class USphereComponent;
class USpherePlayerOverlapComponent;
class UPrimitiveComponent;
class AActor;

UCLASS()
class ABaseGasCloudProjectile : public APhysicsBasedProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBombType _gasType;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UPoolableProjectileComponent* _poolableProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDBDTunableRowHandle _gasCloudDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDBDTunableRowHandle _gasCloudGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDBDTunableRowHandle _gasCloudBounciness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDBDTunableRowHandle _gasCloudFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDBDTunableRowHandle _dissipateGasCloudTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDBDTunableRowHandle _gasCloudMinimumLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDBDTunableRowHandle _gasCloudSimpleCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDBDTunableRowHandle _gasCloudComplexCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDBDTunableRowHandle _gasCloudSurvivorDetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDBDTunableRowHandle _gasCloudDetectionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDBDTunableRowHandle _gasCloudCosmeticFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float _overlappingTime;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool _dissipating;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<ACamperPlayer*> _overlappingSurvivors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UParticleSystemComponent* _gasParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USphereComponent* _simpleCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USphereComponent* _complexCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USpherePlayerOverlapComponent* _survivorDetector;
    
    UPROPERTY(Export, Transient)
    UActiveGasCloudTrackerComponent* _activeGasCloudTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag _cloudSizeModifierTag;
    
private:
    UPROPERTY(Transient)
    float _cumulativeLifetime;
    
public:
    ABaseGasCloudProjectile();
    UFUNCTION(BlueprintCallable)
    void SetIsDissipating(bool NewIsDissipating);
    
private:
    UFUNCTION()
    void SetIgnoredActors();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetGasAudioActive(bool activated);
    
public:
    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDelayedActivationStart(float delay);
    
private:
    UFUNCTION()
    void OnAcquiredChanged(bool acquired);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DissipateGasCloud();
    
    UFUNCTION(BlueprintPure)
    bool IsSurvivorDetectionEnabled();
    
    UFUNCTION(BlueprintPure)
    bool IsDissipating();
    
    UFUNCTION(BlueprintCallable)
    EBombType GetGasType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DissipateGasCloud();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetCumulativeLifetime(const float value);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    float Authority_GetCumulativeLifetime() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ActivateCosmetic_BP();
    
};

