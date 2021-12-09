#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K26SpawnCrowProjectileChargeableInteractionDefinition.generated.h"

class UK26PowerStatusHandlerComponent;
class AK26AimingGuide;
class UCurveFloat;
class UK26AmmoHandlerComponent;
class UK26PathHandlerComponent;
class ASlasherPlayer;
class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FK26SpawnCrowProjectileChargeableInteractionDefinitionOnChargingStopped);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FK26SpawnCrowProjectileChargeableInteractionDefinitionOnChargingStarted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FK26SpawnCrowProjectileChargeableInteractionDefinitionOnProjectileSummoned, int32, remainingAmmo, int32, maxAmmo);

UCLASS(EditInlineNew)
class UK26SpawnCrowProjectileChargeableInteractionDefinition : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FK26SpawnCrowProjectileChargeableInteractionDefinitionOnChargingStarted OnChargingStarted;
    
    UPROPERTY(BlueprintAssignable)
    FK26SpawnCrowProjectileChargeableInteractionDefinitionOnChargingStopped OnChargingStopped;
    
    UPROPERTY(BlueprintAssignable)
    FK26SpawnCrowProjectileChargeableInteractionDefinitionOnProjectileSummoned OnProjectileSummoned;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _chargeCooldownTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _summonCooldownTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pathLength;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _projectileHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _projectileSummonDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _cooldownGracePeriodPercentage;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _globalSpawnCooldownTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pathDistanceCheckAttempts;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AK26AimingGuide> _aimingGuideClass;
    
    UPROPERTY(Transient)
    AK26AimingGuide* _local_aimingGuide;
    
    UPROPERTY(Transient)
    bool _isConfirmButtonPressed;
    
    UPROPERTY(Export, Transient)
    UK26AmmoHandlerComponent* _ammoHandler;
    
    UPROPERTY(Export, Transient)
    UK26PathHandlerComponent* _pathHandler;
    
    UPROPERTY(Export, Transient)
    UK26PowerStatusHandlerComponent* _statusHandler;
    
    UPROPERTY(Transient)
    bool _firedFullyChargedEvent;
    
    UPROPERTY(Transient)
    bool _isWaitingForSummonAcknowledgement;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _globalCooldownMovementSpeedCurve;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSummonCooldown();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26PathHandlerComponent* pathHandler, UK26PowerStatusHandlerComponent* statusHandler);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_PlaceProjectileWithPath(ASlasherPlayer* killer, const FVector& projectileSpawnPoint, const float killerLocalTime);
    
private:
    UFUNCTION()
    void OnSummonCooldownComplete();
    
    UFUNCTION()
    void OnConfirmButtonPressed(ASlasherPlayer* killer);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnK26CrowSummoned(const ASlasherPlayer* killer, const int32 remainingAmmo, const int32 maxAmmo);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnK26CrowSummonAttemptAcknowledged();
    
private:
    UFUNCTION()
    void Local_OnGlobalCooldownDone(ADBDPlayer* player);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsSummonOnCooldown() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnFullyCharged(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_LocalOnSummonCooldownComplete(const int32 amountOfAmmoLeft, const bool isInteractionActive);
    
    UFUNCTION(BlueprintCallable)
    bool CanSummonCrowOnceFullyCharged();
    
    UFUNCTION(BlueprintCallable)
    bool CanSummonCrow();
    
public:
    UK26SpawnCrowProjectileChargeableInteractionDefinition();
};

