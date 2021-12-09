#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "TeleportToDemogorgonPortalInteraction.generated.h"

class AActor;
class UPortalTargetingComponent;
class UPortalPlacerStateComponent;
class ADemogorgonPortal;
class ADBDPlayer;
class ASlasherPlayer;

UCLASS(EditInlineNew)
class DBDINTERACTION_API UTeleportToDemogorgonPortalInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _enterPortalPhaseDuration;
    
    UPROPERTY(EditAnywhere)
    float _cancelTeleportingPhaseDuration;
    
    UPROPERTY(Export, Transient)
    UPortalTargetingComponent* _portalTargetingComponent;
    
    UPROPERTY(Export, Transient)
    UPortalPlacerStateComponent* _portalPlacerState;
    
    UPROPERTY(Transient)
    ADemogorgonPortal* _startingPortal;
    
    UPROPERTY(Transient)
    ADemogorgonPortal* _targetedPortal;
    
    UPROPERTY(Transient)
    ADBDPlayer* _interactingPlayer;
    
    UPROPERTY(Transient)
    AActor* _huskRef;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ClassToSpawnForHusk;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTeleportInteractionCanceledVFX();
    
private:
    UFUNCTION()
    void OnSlasherSet(ASlasherPlayer* slasher);
    
public:
    UTeleportToDemogorgonPortalInteraction();
};

