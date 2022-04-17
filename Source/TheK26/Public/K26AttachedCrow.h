#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K26AttachmentStatus.h"
#include "FK26AttachedCrowRemovalReason.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "ECamperDamageState.h"
#include "K26AttachedCrow.generated.h"

class UChargeableComponent;
class ULightBurnable;
class UFirecrackerEffectHandlerComponent;
class UFlashlightableComponent;
class UK26PowerOutlineUpdateStrategy;
class UDBDOutlineComponent;
class UStaticMeshComponent;
class USceneComponent;
class UK26PowerStatusHandlerComponent;
class ACamperPlayer;
class AK26AttachedCrow;
class ASlasherPlayer;

UCLASS()
class AK26AttachedCrow : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UFlashlightableComponent* _flashLightableComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    ULightBurnable* _lightBurnableComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UChargeableComponent* _flashlightDestroyChargeable;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _requiredFlashlightTimeToDestroy;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _lingerTime;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _infectionDelay;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _infectRadius;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UDBDOutlineComponent* _outlineComponent;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UStaticMeshComponent* _visualStaticMeshComponent;
    
    UPROPERTY(Export)
    USceneComponent* _rootComponent;
    
    UPROPERTY(Export, Transient)
    UK26PowerStatusHandlerComponent* _statusHandler;
    
    UPROPERTY(Transient)
    bool _authority_isInfecting;
    
    UPROPERTY(ReplicatedUsing=OnRep_AttachmentStatus)
    FK26AttachmentStatus _attachmentStatus;
    
public:
    AK26AttachedCrow();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_AttachmentStatus();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnStopDetaching();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnStartDetaching();
    
    UFUNCTION()
    void HideOutline();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnStopDetaching();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnStartDetaching();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnCrowAttached();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnAuraShown();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnAuraHidden();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnAttachedCrowRemoved(FK26AttachedCrowRemovalReason removalReason);
    
private:
    UFUNCTION()
    void Authority_OnSurvivorWasUnhooked(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnSurvivorStatusIndicatorSet(const ACamperPlayer* survivor, AK26AttachedCrow* attachedCrow);
    
    UFUNCTION()
    void Authority_OnSurvivorExitLocker(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnSurvivorDroppedEnd();
    
    UFUNCTION()
    void Authority_OnSurvivorAdded(ACamperPlayer* survivor);
    
    UFUNCTION()
    void Authority_OnPlayerLeftGame(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnOtherSurvivorPerkFlagsChanged(FGameplayTag gameplayTag, bool isAdded);
    
    UFUNCTION()
    void Authority_OnOtherSurvivorGuidedActionChanged();
    
    UFUNCTION()
    void Authority_OnOtherSurvivorDamageStateChanged(ECamperDamageState before, ECamperDamageState after);
    
    UFUNCTION()
    void Authority_OnOtherAttachedCrowRemoved();
    
    UFUNCTION()
    void Authority_OnKillerSet(ASlasherPlayer* killer);
    
    UFUNCTION()
    void Authority_OnIsWithinOtherSurvivorRangeChanged(AActor* survivorActor, const bool isInRange);
    
protected:
    UFUNCTION()
    void Authority_OnDestroyAttempt(const TArray<AActor*>& instigatorsForCompletion);
    
private:
    UFUNCTION()
    void Authority_DeactivateInfection();
    
    UFUNCTION()
    void Authority_ActivateInfection();
    
};

