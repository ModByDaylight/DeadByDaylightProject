#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DestroyDemogorgonPortalInteraction.generated.h"

class ADemogorgonPortal;
class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UDestroyDemogorgonPortalInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADemogorgonPortal* _owningPortal;
    
public:
    UDestroyDemogorgonPortalInteraction();
private:
    UFUNCTION()
    void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);
    
};

