#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "EChainStrikeEndReason.h"
#include "EChainStrikeCameraViewTarget.h"
#include "K25ChainStrikeInteraction.generated.h"

class UCurveFloat;
class ASlasherPlayer;
class UFiniteStateMachine;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25ChainStrikeInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFiniteStateMachine> _chainStrikeStateMachineclass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _repossessFadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _repossessFadeInTime;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _gatewayPossessionFovModifierCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _controlledProjectilePossessionFovModifierCurve;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _chargeTimeAfterGatewayPlacementCancelled;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _chargeTimeAfterGatewayPossessionCancelled;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _chargeTimeAfterControlledChainShot;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _gatewayPossessionFovChangeDuration;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _gatewayPossessionCameraPanTime;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _controlledProjectilePossessionCameraPanTime;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _controlledProjectilePossessionFovTimeChangeDuration;
    
private:
    UPROPERTY(Export, Transient)
    UFiniteStateMachine* _stateMachine;
    
    UPROPERTY(Transient)
    bool _authority_shouldIncrementChargeableComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ChainStrikeCameraViewTarget)
    EChainStrikeCameraViewTarget _chainStrikeCameraViewTarget;
    
    UPROPERTY(Replicated)
    bool _hasHitSurvivor;
    
public:
    UK25ChainStrikeInteraction();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server)
    void Server_SetShouldIncrementChargeableComponent(bool shouldIncrement);
    
    UFUNCTION(Reliable, Server)
    void Server_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason);
    
private:
    UFUNCTION(Reliable, Server)
    void Server_SetCameraViewTarget(EChainStrikeCameraViewTarget newViewTarget);
    
public:
    UFUNCTION(Reliable, Server)
    void Server_RemoveStateTagFromPlayer(FGameplayTag tag);
    
    UFUNCTION(Reliable, Server)
    void Server_AddStateTagToPlayer(FGameplayTag tag);
    
private:
    UFUNCTION()
    void OnRep_ChainStrikeCameraViewTarget();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RemoveStateTagFromPlayer(FGameplayTag tag);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddStateTagToPlayer(FGameplayTag tag);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerKillerRepossessionFadeOutEffects(ASlasherPlayer* killer, const bool preventAudioTriggers);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerKillerRepossessionFadeInEffects(ASlasherPlayer* killer, const bool hasHitSurvivor, const bool preventAudioTriggers);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerInvalidGatewayPlacementSFX(ASlasherPlayer* killer);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerGatewayPossessionEffects(const float transitionTime);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_ResetAllVignetteValues(ASlasherPlayer* killer);
    
};

