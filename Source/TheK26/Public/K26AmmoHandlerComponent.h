#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnCurrentAmmoStateChangedDelegate.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "TagStateBool.h"
#include "EK26AmmoCooldownReason.h"
#include "OnMaxAmmoSetEventDelegate.h"
#include "DBDTunableRowHandle.h"
#include "EK26AmmoState.h"
#include "K26AmmoHandlerComponent.generated.h"

class AActor;
class UK26PathHandlerComponent;
class UK26PowerStatusHandlerComponent;
class ASlasherPlayer;
class UAuthoritativeActorPoolComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26AmmoHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnMaxAmmoSetDelegate, const int32, maxAmmo);
    
    UPROPERTY(BlueprintAssignable)
    FOnCurrentAmmoStateChanged OnCurrentAmmoStateChanged;
    
protected:
    UPROPERTY(Replicated, Transient)
    FTagStateBool _isAmmoOnCooldown;
    
private:
    UPROPERTY(BlueprintAssignable)
    FOnMaxAmmoSetEvent _onMaxAmmoSet;
    
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
    UK26AmmoHandlerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    void CallOnMaxAmmoSet(UK26AmmoHandlerComponent::FOnMaxAmmoSetDelegate callback);
    
private:
    UFUNCTION()
    void Authority_OnAmmoInit(AActor* initAmmo);
    
    UFUNCTION()
    void Authority_InitializePoolComponent(const int32 maxAmmo);
    
};

