#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "SetGroundPortalInteraction.generated.h"

class UPortalPlacerStateComponent;
class ADemogorgonPortal;
class UObjectPlacerComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USetGroundPortalInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UPortalPlacerStateComponent* _portalPlacerState;
    
    UPROPERTY(Export, Transient)
    UObjectPlacerComponent* _trapPlacerComponent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ADemogorgonPortal> _portalClassToSpawn;
    
public:
    USetGroundPortalInteraction();
};

