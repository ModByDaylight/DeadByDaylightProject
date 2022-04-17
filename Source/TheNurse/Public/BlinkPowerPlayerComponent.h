#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EBlinkPowerState.h"
#include "BlinkPowerSetupParams.h"
#include "EAttackType.h"
#include "BlinkPowerPlayerComponent.generated.h"

class UTimerObject;
class UCurveFloat;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkPowerPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _maxBlinkCharges;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _rechargeDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _chainBlinkDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer _allowedInteractionSemancticsDuringChainBlink;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _fatigueDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _fatigueChainBlinkPenalty;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _fatigueAttackPenalty;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _fatigueAttackMissPenaltyModifier;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _fatigueSpeedCurve;
    
    UPROPERTY(ReplicatedUsing=OnRep_BlinkState)
    EBlinkPowerState _powerState;
    
    UPROPERTY(ReplicatedUsing=OnRep_BlinkCharges)
    int32 _blinkCharges;
    
    UPROPERTY(Replicated)
    bool _wasCurrentChargeSetByRecharge;
    
    UPROPERTY(Export)
    UTimerObject* _chainBlinkTimer;
    
    UPROPERTY(Export)
    UTimerObject* _cooldownTimer;
    
    UPROPERTY(Export)
    UTimerObject* _rechargeTimer;
    
public:
    UBlinkPowerPlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Setup(const FBlinkPowerSetupParams& params);
    
private:
    UFUNCTION(Reliable, Server)
    void Server_TriggerCooldown(float duration);
    
    UFUNCTION(Reliable, Server)
    void Server_TriggerChainBlink(int32 remainingBlinkCharges);
    
    UFUNCTION(Reliable, Server)
    void Server_SetState(EBlinkPowerState state);
    
    UFUNCTION(Reliable, Server)
    void Server_InterruptDuringChainBlink(AActor* interruptedPlayer);
    
    UFUNCTION()
    void OnRep_BlinkState(EBlinkPowerState oldState);
    
    UFUNCTION()
    void OnRep_BlinkCharges();
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION()
    void OnAttackStarted(const EAttackType attackType);
    
    UFUNCTION()
    void OnAttackFinished(const EAttackType attackType);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsChargingBlink() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChargeFull() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBlinking() const;
    
    UFUNCTION(BlueprintPure)
    float GetRechargeProgressPercent() const;
    
    UFUNCTION(BlueprintPure)
    EBlinkPowerState GetPowerState() const;
    
    UFUNCTION(BlueprintPure)
    float GetCooldownTimerDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetCooldownRemainingTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetCooldownProgressPercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetChainBlinkTimerDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetChainBlinkRemainingTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetChainBlinkProgressPercent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBlinkCharges() const;
    
};

