#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "OnProjectileFiredDelegate.h"
#include "K26FireCrowProjectileInteractionDefinition.generated.h"

class UK26AmmoHandlerComponent;
class UK26CooldownInteractionDefinition;
class UK26PathHandlerComponent;
class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26FireCrowProjectileInteractionDefinition : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnProjectileFired OnProjectileFired;
    
private:
    UPROPERTY(Export, Transient)
    UK26CooldownInteractionDefinition* _cooldownInteraction;
    
    UPROPERTY(Export, Transient)
    UK26AmmoHandlerComponent* _ammoHandler;
    
    UPROPERTY(Export, Transient)
    UK26PathHandlerComponent* _pathHandler;
    
public:
    UK26FireCrowProjectileInteractionDefinition();
    UFUNCTION(BlueprintCallable)
    void SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26PathHandlerComponent* pathHandler, UK26CooldownInteractionDefinition* cooldownInteraction);
    
private:
    UFUNCTION(Reliable, Server)
    void Server_RequestFireOnAmmo(ASlasherPlayer* killer);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnProjectileFired(const ASlasherPlayer* killer);
    
};

