#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "EDemogorgonPortalState.h"
#include "Engine/EngineTypes.h"
#include "DemogorgonPortal.generated.h"

class ADBDPlayer;
class UPrimitiveComponent;
class UChargeableComponent;
class UAkAudioEvent;
class UParticleSystem;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API ADemogorgonPortal : public AInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPrimitiveComponent* _portalAreaCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UChargeableComponent* _destroyChargeable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UChargeableComponent* _teleportChargeable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDemogorgonPortalState _portalState;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* _portalIdleSound;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* _portalDestroyingStart;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* _portalTeleportingSound;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* _destroyParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float _destroyDuration;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerDirtExplosion();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ShowPortalTeleportInteractionStartVFX();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ShowPortalActiveVFX();
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void RemovePortalTeleportInteractionStartVFX();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void RemovePortalActiveVFX();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void PlaySoundFromPortal(UAkAudioEvent* soundEvent);
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTeleportAbilityCooldownChangedVFX(bool isOnCooldown);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetedChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPortalStateChanged(EDemogorgonPortalState state);
    
    UFUNCTION(BlueprintCallable)
    void OnPortalDestroyed(ADBDPlayer* player);
    
protected:
    UFUNCTION()
    void OnEndOverlapPortalArea(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlapPortalArea(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_SurvivorsInterruptedOnDestroy(const TArray<ADBDPlayer*>& targets);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void MakePortalDisappearVFX();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTargeted() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_StopDestroyingPlayers();
    
    UFUNCTION()
    void Authority_OnTeleportChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
    
    UFUNCTION()
    void Authority_OnDestroyChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
    
    ADemogorgonPortal();
};

