#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InfectedInteractableComponent.generated.h"

class ADBDPlayer;
class UCurveFloat;
class ACamperPlayer;
class UTimelineComponent;
class AInteractable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInfectedInteractableComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* VomitAlphaCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName VomitAlphaParameterName;
    
private:
    UPROPERTY(Export, Transient)
    UTimelineComponent* _vomitAlphaTimeline;
    
public:
    UInfectedInteractableComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetInteractableMeshAlpha(float alpha);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVomitAlphaUpdate(float alpha);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_FadeOutVomit();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_FadeInVomit();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DestroyComponent();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DebugDisplayLifetime(float remainingLifetime);
    
protected:
    UFUNCTION(BlueprintPure)
    AInteractable* GetOwningInteractable() const;
    
public:
    UFUNCTION()
    void Authority_OnOwningInteractableBeginOrEndUse(bool inUse, ADBDPlayer* interactingPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_OnHitWithVomit();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    bool Authority_IsAMaxSicknessSurvivorInteracting() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    ACamperPlayer* Authority_GetEquippingPlayer() const;
    
};

