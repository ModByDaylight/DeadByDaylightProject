#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "K26FireCrowProjectileInteractionDefinition.generated.h"

class UK26CooldownInteractionDefinition;
class UK26AmmoHandlerComponent;
class UK26PathHandlerComponent;
class ASlasherPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FK26FireCrowProjectileInteractionDefinitionOnProjectileFired);

UCLASS(EditInlineNew)
class UK26FireCrowProjectileInteractionDefinition : public UInteractionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FK26FireCrowProjectileInteractionDefinitionOnProjectileFired OnProjectileFired;
    
private:
    UPROPERTY(Export, Transient)
    UK26CooldownInteractionDefinition* _cooldownInteraction;
    
    UPROPERTY(Export, Transient)
    UK26AmmoHandlerComponent* _ammoHandler;
    
    UPROPERTY(Export, Transient)
    UK26PathHandlerComponent* _pathHandler;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26PathHandlerComponent* pathHandler, UK26CooldownInteractionDefinition* cooldownInteraction);
    
private:
    UFUNCTION(Reliable, Server)
    void Server_RequestFireOnAmmo(ASlasherPlayer* killer);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnProjectileFired(const ASlasherPlayer* killer);
    
public:
    UK26FireCrowProjectileInteractionDefinition();
};

