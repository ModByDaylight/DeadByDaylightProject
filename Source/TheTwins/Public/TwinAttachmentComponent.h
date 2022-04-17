#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECamperImmobilizeState.h"
#include "DBDTunableRowHandle.h"
#include "FastTimer.h"
#include "AnimationMontageDescriptor.h"
#include "ECamperDamageState.h"
#include "TwinAttachmentComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;
class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinAttachmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_AttachedPlayer)
    ADBDPlayer* _attachedPlayer;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _gateBlockerStatusEffect;
    
    UPROPERTY(Transient)
    bool _hasBeenDetachedBySurvivorDamageChanged;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _cantEscapeByGateLingerDuration;
    
    UPROPERTY(Transient)
    TMap<ADBDPlayer*, FFastTimer> _escapeBlockerLingerTimers;
    
public:
    UTwinAttachmentComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_AttachedPlayer(ADBDPlayer* oldAttachedPlayer);
    
    UFUNCTION()
    void OnMoriMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted);
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION()
    void OnImmobilizedStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState);
    
    UFUNCTION()
    void OnAttachedSurvivorDamageStateChanged(const ECamperDamageState oldState, const ECamperDamageState newState);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_QuickDestroyTwin();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAttachedToSurvivor() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAttachedToSister() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTwinDetachedFromSurvivor(ADBDPlayer* survivor, ADBDPlayer* brother);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTwinDetachedFromSister(ADBDPlayer* sister, ADBDPlayer* brother);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTwinAttachedToSurvivor(ADBDPlayer* survivor, ADBDPlayer* brother);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnTwinAttachedToSister(ADBDPlayer* sister, ADBDPlayer* brother, bool isFirstAttachment);
    
private:
    UFUNCTION()
    void Authority_OnRemoveTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
    
};

