#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K25ChainHuntEffectsComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class UK25ChainHuntEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetOwningPlayer() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TriggerChainHuntActivationSFX();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_DeactivateChainHuntEffects();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_ActivateChainHuntEffects(const bool hasChainHuntStarted);
    
public:
    UK25ChainHuntEffectsComponent();
};

