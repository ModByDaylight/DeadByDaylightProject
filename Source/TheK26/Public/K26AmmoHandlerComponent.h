#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "EK26AmmoState.h"
#include "TagStateBool.h"
#include "TunableStat.h"
#include "EK26AmmoCooldownReason.h"
#include "DBDTunableRowHandle.h"
#include "K26AmmoHandlerComponent.generated.h"

class UK26PathHandlerComponent;
class AActor;
class UK26PowerStatusHandlerComponent;
class UAuthoritativeActorPoolComponent;
class ASlasherPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FK26AmmoHandlerComponentOnCurrentAmmoStateChanged, const EK26AmmoState, newAmmoState, const int32, currentAmmo, const int32, maxAmmo);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FK26AmmoHandlerComponentCallback, const int32, maxAmmo);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FK26AmmoHandlerComponentOnMaxAmmoSet, const int32, maxAmmo);

UCLASS(Blueprintable, EditInlineNew)
class UK26AmmoHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FK26AmmoHandlerComponentOnCurrentAmmoStateChanged OnCurrentAmmoStateChanged;
    
protected:
    UPROPERTY(Replicated, Transient)
    FTagStateBool _isAmmoOnCooldown;
    
private:
    UPROPERTY(BlueprintAssignable)
    FK26AmmoHandlerComponentOnMaxAmmoSet _onMaxAmmoSet;
    
    UPROPERTY(Transient)
    float _rechargeEndTime;
    
    UPROPERTY(Transient)
    bool _isTunableInit;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> _projectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _expirationCooldownTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDBDTunableRowHandle> _firedCooldownTimesPerCrow;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _cooldownReductionPerCrowFired;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _expirationTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _expirationWarningBufferTime;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _maxAmmo;
    
    UPROPERTY(Replicated)
    int32 _currentAmmo;
    
    UPROPERTY(Replicated)
    EK26AmmoCooldownReason _lastCooldownReason;
    
    UPROPERTY(Replicated)
    EK26AmmoState _currentAmmoState;
    
    UPROPERTY(Export, Transient)
    UK26PathHandlerComponent* _pathHandler;
    
    UPROPERTY(Export, Transient)
    UK26PowerStatusHandlerComponent* _statusHandler;
    
    UPROPERTY(Export, Transient)
    UAuthoritativeActorPoolComponent* _authoritativeActorPoolComponent;
    
    UPROPERTY(Replicated, Transient)
    FTagStateBool _isOutOfAmmo;
    
    UPROPERTY(Transient)
    float _fallbackFireCooldown;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDependencies(UK26PathHandlerComponent* pathHandler, UK26PowerStatusHandlerComponent* statusHandler, UAuthoritativeActorPoolComponent* authoritativeActorPoolComponent);
    
private:
    UFUNCTION()
    void SendHasExpiredDelegate();
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartRecharging(const EK26AmmoCooldownReason lastCooldownReason);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartExpiring();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnCurrentAmmoStateChanged(const EK26AmmoState newState, const int32 currentAmmo, const int32 maxAmmo);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnAmmoHasBeenFired();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnAmmoExpired();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetMaxAmmo() const;
    
    UFUNCTION(BlueprintPure)
    EK26AmmoCooldownReason GetCurrentCooldownReason() const;
    
    UFUNCTION(BlueprintPure)
    EK26AmmoState GetCurrentAmmoState() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentAmmo() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnExpiringWarning();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnAmmoHasBeenFired();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnAmmoExpired();
    
public:
    UFUNCTION(BlueprintCallable)
    void CallOnMaxAmmoSet(FK26AmmoHandlerComponentCallback callback);
    
private:
    UFUNCTION()
    void Authority_OnAmmoInit(AActor* initAmmo);
    
    UFUNCTION()
    void Authority_InitializePoolComponent(const int32 maxAmmo);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UK26AmmoHandlerComponent();
};

