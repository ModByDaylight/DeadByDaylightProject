#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DestroyDemogorgonPortalInteraction.generated.h"

class AActor;
class ADemogorgonPortal;

UCLASS(EditInlineNew)
class DBDINTERACTION_API UDestroyDemogorgonPortalInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADemogorgonPortal* _owningPortal;
    
    UFUNCTION()
    void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);
    
public:
    UDestroyDemogorgonPortalInteraction();
};

