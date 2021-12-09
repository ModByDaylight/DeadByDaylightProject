#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "EDemonModeState.h"
#include "AnimationMontageDescriptor.h"
#include "DemonModeComponent.generated.h"

class UPowerToggleComponent;
class ACamperPlayer;
class UPowerChargeComponent;
class UInteractionStarterComponent;
class UInteractionDefinition;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDemonModeComponentOnChargeGainedAfterLockerGrabCosmetic, ACamperPlayer*, camperInLocker);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDemonModeComponentOnDemonModeReady);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDemonModeComponentOnChargeGainedAfterAttackCosmetic, FVector, targetLocation);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDemonModeComponentOnDemonModeStarted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDemonModeComponentOnDemonModeEnded);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDemonModeComponentOnDemonModeInterruptedDuringStartup);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDemonModeComponentOnDemonModeInterruptedDuringEnding);

UCLASS(BlueprintType)
class THEONI_API UDemonModeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDemonModeComponentOnDemonModeReady OnDemonModeReady;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeComponentOnDemonModeStarted OnDemonModeStarted;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeComponentOnDemonModeEnded OnDemonModeEnded;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeComponentOnDemonModeInterruptedDuringStartup OnDemonModeInterruptedDuringStartup;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeComponentOnDemonModeInterruptedDuringEnding OnDemonModeInterruptedDuringEnding;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeComponentOnChargeGainedAfterAttackCosmetic OnChargeGainedAfterAttackCosmetic;
    
    UPROPERTY(BlueprintAssignable)
    FDemonModeComponentOnChargeGainedAfterLockerGrabCosmetic OnChargeGainedAfterLockerGrabCosmetic;
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDemonModeComponent();
};

