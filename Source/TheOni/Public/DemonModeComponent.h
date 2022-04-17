#pragma once
#include "CoreMinimal.h"
#include "DemonModeInterruptedDuringEndingDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "DemonModeReadyDelegateDelegate.h"
#include "DemonModeStartedDelegateDelegate.h"
#include "DemonModeEndedDelegateDelegate.h"
#include "DemonModeInterruptedDuringStartupDelegateDelegate.h"
#include "DemonModeChargeGainedAfterAttackDelegateDelegate.h"
#include "DemonModeChargeGainedAfterLockerGrabDelegateDelegate.h"
#include "EDemonModeState.h"
#include "AnimationMontageDescriptor.h"
#include "DemonModeComponent.generated.h"

class UInteractionStarterComponent;
class UPowerChargeComponent;
class UPowerToggleComponent;
class UInteractionDefinition;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEONI_API UDemonModeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDemonModeReadyDelegate OnDemonModeReady;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeStartedDelegate OnDemonModeStarted;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeEndedDelegate OnDemonModeEnded;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeInterruptedDuringStartupDelegate OnDemonModeInterruptedDuringStartup;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeInterruptedDuringEndingDelegate OnDemonModeInterruptedDuringEnding;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeChargeGainedAfterAttackDelegate OnChargeGainedAfterAttackCosmetic;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeChargeGainedAfterLockerGrabDelegate OnChargeGainedAfterLockerGrabCosmetic;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPowerChargeComponent* _powerChargeComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPowerToggleComponent* _powerToggleComponent;
    
    UPROPERTY(Export, Transient)
    UInteractionStarterComponent* _authority_demonModeCooldownStarterComponent;
    
    UPROPERTY(Export, Transient)
    UInteractionDefinition* _demonModeCooldownInteraction;
    
    UPROPERTY(Replicated, Transient)
    EDemonModeState _demonModeState;
    
public:
    UDemonModeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool ShouldLoseDemonModeOnStun() const;
    
private:
    UFUNCTION()
    void OnPowerChargeFull() const;
    
    UFUNCTION()
    void OnPowerChargeEmpty() const;
    
    UFUNCTION()
    void OnIsPowerChanged(const bool isInPower) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DemonModeInterruptedOnStartup();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DemonModeInterruptedOnEnding();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInDemonMode() const;
    
    UFUNCTION(BlueprintPure)
    EDemonModeState GetDemonModeState() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentCharge() const;
    
    UFUNCTION(BlueprintPure)
    float GetChargePercent() const;
    
    UFUNCTION(Exec)
    void DBD_DemonModeForever(const bool forever);
    
    UFUNCTION(BlueprintPure)
    bool CanStartDemonMode() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetDemonModeCooldownInteraction(UInteractionDefinition* interaction);
    
private:
    UFUNCTION()
    void Authority_OnLevelReadyToPlay();
    
    UFUNCTION()
    void Authority_OnChargeChanged(const float currentChargePercent);
    
    UFUNCTION()
    void Authority_InterruptedMontage(const FAnimationMontageDescriptor montage, bool interrupted);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_AddCharge(const float chargeAmount);
    
};

